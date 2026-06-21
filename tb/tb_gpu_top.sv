// tb_gpu_top.sv
// Directed testbench for 2-warp 8-lane SIMT GPU core

`timescale 1ns/1ps
`default_nettype none

module tb_gpu_top;

    logic clk;
    logic rst_n;

    initial clk = 0;
    always #5 clk = ~clk;

    gpu_top #(
        .NUM_WARPS  (2),
        .NUM_LANES  (8),
        .PC_WIDTH   (32),
        .IMEM_DEPTH (1024),
        .DMEM_DEPTH (256)
    ) dut (
        .clk   (clk),
        .rst_n (rst_n)
    );

    integer pass_count;
    integer fail_count;

    initial begin
        pass_count = 0;
        fail_count = 0;
    end

    initial begin
        $dumpfile("/home/zair/multi-warp-gpu/sim/tb_gpu_top.vcd");
        $dumpvars(0, tb_gpu_top);
    end

    task automatic do_reset();
        rst_n = 1'b0;
        repeat(4) @(posedge clk);
        rst_n = 1'b1;
        repeat(2) @(posedge clk);
    endtask

    task automatic wait_cycles(input int n);
        repeat(n) @(posedge clk);
    endtask

    task automatic check_reg(
        input int          warp,
        input int          lane,
        input int          addr,
        input logic [31:0] expected,
        input string       test_name
    );
        logic [31:0] actual;
        if (addr == 0) begin
            actual = 32'b0;
        end else begin
            case (lane)
                0: actual = dut.regfiles[0].u_regfile.regs[warp][0][addr];
                1: actual = dut.regfiles[1].u_regfile.regs[warp][1][addr];
                2: actual = dut.regfiles[2].u_regfile.regs[warp][2][addr];
                3: actual = dut.regfiles[3].u_regfile.regs[warp][3][addr];
                4: actual = dut.regfiles[4].u_regfile.regs[warp][4][addr];
                5: actual = dut.regfiles[5].u_regfile.regs[warp][5][addr];
                6: actual = dut.regfiles[6].u_regfile.regs[warp][6][addr];
                7: actual = dut.regfiles[7].u_regfile.regs[warp][7][addr];
                default: actual = 32'hDEADBEEF;
            endcase
        end
        if (actual === expected) begin
            $display("PASS [%s] warp=%0d lane=%0d x%0d = 0x%08h", test_name, warp, lane, addr, actual);
            pass_count++;
        end else begin
            $display("FAIL [%s] warp=%0d lane=%0d x%0d = 0x%08h, expected 0x%08h", test_name, warp, lane, addr, actual, expected);
            fail_count++;
        end
    endtask

    task automatic load_imem(input string hex_file);
        $readmemh(hex_file, dut.u_fetch.imem);
        $display("Loaded IMEM: %s", hex_file);
    endtask

    task automatic test_single_warp_alu();
        $display("--- Test 1: Single warp ALU sequence ---");
        load_imem("tb/imem_alu.hex");
        dump_imem();
        do_reset();
        wait_cycles(30);
        for (int lane = 0; lane < 8; lane++) begin
            check_reg(0, lane, 5, 32'h00000021, "ADD");
            check_reg(0, lane, 6, 32'h00000001, "SUB");
            check_reg(0, lane, 7, 32'h00000010, "AND");
            check_reg(0, lane, 8, 32'h00000011, "OR");
        end
    endtask

    task automatic test_two_warp_switch();
        $display("--- Test 2: 2-warp round-robin switch ---");
        load_imem("tb/imem_2warp_v2.hex");
        do_reset();

        // After reset both warp PCs = 0
        // Force warp 1 to start at 0x20 (warp1_start label)
        @(posedge clk); #1;
        dut.u_scheduler.warp_pc[1] = 32'h00000020;

        wait_cycles(40);

        // warp 0: addi x1, x0, 10 -> x1 = 10 = 0x0a
        check_reg(0, 0, 1, 32'h0000000a, "W0_ADDI");
        // warp 1: addi x1, x0, 20 -> x1 = 20 = 0x14
        check_reg(1, 0, 1, 32'h00000014, "W1_ADDI");
    endtask

    initial begin
        rst_n = 1'b0;
        test_single_warp_alu();
        test_two_warp_switch();
        $display("=============================");
        $display("Results: %0d PASS, %0d FAIL", pass_count, fail_count);
        $display("=============================");
        if (fail_count == 0)
            $display("ALL TESTS PASSED");
        else
            $display("FAILURES DETECTED");
        $finish;
    end

    // IMEM dump after load — prints first 8 words
    task automatic dump_imem();
        $display("IMEM contents:");
        for (int i = 0; i < 8; i++)
            $display("  [%0d] = 0x%08h", i, dut.u_fetch.imem[i]);
    endtask

    // Warp stall probe
    always @(posedge clk) begin
        if (dut.warp_stall != 0)
            $display("WSTALL: warp_stall=%02b active_warp=%0d dmem_pending=%0b",
                dut.warp_stall,
                dut.u_scheduler.active_warp,
                dut.dmem_active);
    end

    // rr_ptr probe
    always @(posedge clk) begin
        $display("RR: rr_ptr=%0d next=%0d any_ready=%0b ws0=%0b ws1=%0b",
            dut.u_scheduler.rr_ptr,
            dut.u_scheduler.next_warp,
            dut.u_scheduler.any_ready,
            dut.warp_stall[0],
            dut.warp_stall[1]);
    end
    // Warp scheduler probe
    always @(posedge clk) begin
        if (rst_n)
            $display("SCHED: valid=%0d active_warp=%0d stall=%0b dmem_ren=%0b",
                dut.u_scheduler.valid,
                dut.u_scheduler.active_warp,
                dut.warp_stall,
                dut.dmem_ren);
    end

    // Regfile write probe — watch lane 0 regfile directly
    always @(posedge clk) begin
        if (dut.regfiles[0].u_regfile.wr_en && dut.regfiles[0].u_regfile.rd_addr != 0)
            $display("RF_WR: warp=%0d lane=%0d rd=x%0d data=0x%08h",
                dut.regfiles[0].u_regfile.wr_warp_sel,
                dut.regfiles[0].u_regfile.wr_lane_sel,
                dut.regfiles[0].u_regfile.rd_addr,
                dut.regfiles[0].u_regfile.rd_data);
        if (dut.regfiles[0].u_regfile.rs1_addr != 0)
            $display("RF_RD: warp=%0d lane=%0d rs1_addr=x%0d rs1_data=0x%08h regs[0][0][1]=0x%08h",
                dut.regfiles[0].u_regfile.rd_warp_sel,
                dut.regfiles[0].u_regfile.rd_lane_sel,
                dut.regfiles[0].u_regfile.rs1_addr,
                dut.regfiles[0].u_regfile.rs1_data,
                dut.regfiles[0].u_regfile.regs[0][0][1]);
    end

    // Warp stall probe
    always @(posedge clk) begin
        if (dut.warp_stall != 0)
            $display("WSTALL: warp_stall=%02b active_warp=%0d dmem_pending=%0b",
                dut.warp_stall,
                dut.u_scheduler.active_warp,
                dut.dmem_active);
    end

    // Warp scheduler probe
    always @(posedge clk) begin
        if (rst_n)
            $display("SCHED: valid=%0d active_warp=%0d stall=%0b dmem_ren=%0b",
                dut.u_scheduler.valid,
                dut.u_scheduler.active_warp,
                dut.warp_stall,
                dut.dmem_ren);
    end

    // Regfile write probe — watch lane 0 regfile directly
    always @(posedge clk) begin
        if (dut.regfiles[0].u_regfile.wr_en && dut.regfiles[0].u_regfile.rd_addr != 0)
            $display("RF_WR: warp=%0d lane=%0d rd=x%0d data=0x%08h",
                dut.regfiles[0].u_regfile.wr_warp_sel,
                dut.regfiles[0].u_regfile.wr_lane_sel,
                dut.regfiles[0].u_regfile.rd_addr,
                dut.regfiles[0].u_regfile.rd_data);
        if (dut.regfiles[0].u_regfile.rs1_addr != 0)
            $display("RF_RD: warp=%0d lane=%0d rs1_addr=x%0d rs1_data=0x%08h regs[0][0][1]=0x%08h",
                dut.regfiles[0].u_regfile.rd_warp_sel,
                dut.regfiles[0].u_regfile.rd_lane_sel,
                dut.regfiles[0].u_regfile.rs1_addr,
                dut.regfiles[0].u_regfile.rs1_data,
                dut.regfiles[0].u_regfile.regs[0][0][1]);
    end

    // Lane 0 execution probe
    always @(posedge clk) begin
        if (dut.lanes[0].u_lane.valid && dut.lanes[0].u_lane.rd_addr != 0)
            $display("EX: rd=x%0d rs1=0x%08h rs2=0x%08h imm=0x%08h alu_op=%0d alu_src=%0d result=0x%08h",
                dut.lanes[0].u_lane.rd_addr,
                dut.lanes[0].u_lane.rs1_data,
                dut.lanes[0].u_lane.rs2_data,
                dut.lanes[0].u_lane.imm,
                dut.lanes[0].u_lane.alu_op,
                dut.lanes[0].u_lane.alu_src,
                dut.lanes[0].u_lane.alu_result);
    end

    // Writeback monitor — prints every cycle wb_wen fires on lane 0
    always @(posedge clk) begin
        if (dut.lanes[0].u_lane.wb_wen)
            $display("WB: warp=%0d rd=x%0d data=0x%08h @ t=%0t",
                dut.lanes[0].u_lane.wb_warp_id,
                dut.lanes[0].u_lane.wb_rd_addr,
                dut.lanes[0].u_lane.wb_data,
                $time);
        if (dut.u_fetch.fetch_valid)
            $display("IF: warp=%0d pc=0x%08h instr=0x%08h @ t=%0t",
                dut.u_fetch.fetch_warp,
                dut.u_fetch.fetch_pc,
                dut.u_fetch.instr,
                $time);
    end

    // IMEM dump after load — prints first 8 words
    

    // Warp stall probe
    always @(posedge clk) begin
        if (dut.warp_stall != 0)
            $display("WSTALL: warp_stall=%02b active_warp=%0d dmem_pending=%0b",
                dut.warp_stall,
                dut.u_scheduler.active_warp,
                dut.dmem_active);
    end

    // Warp scheduler probe
    always @(posedge clk) begin
        if (rst_n)
            $display("SCHED: valid=%0d active_warp=%0d stall=%0b dmem_ren=%0b",
                dut.u_scheduler.valid,
                dut.u_scheduler.active_warp,
                dut.warp_stall,
                dut.dmem_ren);
    end

    // Regfile write probe — watch lane 0 regfile directly
    always @(posedge clk) begin
        if (dut.regfiles[0].u_regfile.wr_en && dut.regfiles[0].u_regfile.rd_addr != 0)
            $display("RF_WR: warp=%0d lane=%0d rd=x%0d data=0x%08h",
                dut.regfiles[0].u_regfile.wr_warp_sel,
                dut.regfiles[0].u_regfile.wr_lane_sel,
                dut.regfiles[0].u_regfile.rd_addr,
                dut.regfiles[0].u_regfile.rd_data);
        if (dut.regfiles[0].u_regfile.rs1_addr != 0)
            $display("RF_RD: warp=%0d lane=%0d rs1_addr=x%0d rs1_data=0x%08h regs[0][0][1]=0x%08h",
                dut.regfiles[0].u_regfile.rd_warp_sel,
                dut.regfiles[0].u_regfile.rd_lane_sel,
                dut.regfiles[0].u_regfile.rs1_addr,
                dut.regfiles[0].u_regfile.rs1_data,
                dut.regfiles[0].u_regfile.regs[0][0][1]);
    end

    // Warp stall probe
    always @(posedge clk) begin
        if (dut.warp_stall != 0)
            $display("WSTALL: warp_stall=%02b active_warp=%0d dmem_pending=%0b",
                dut.warp_stall,
                dut.u_scheduler.active_warp,
                dut.dmem_active);
    end

    // Warp scheduler probe
    always @(posedge clk) begin
        if (rst_n)
            $display("SCHED: valid=%0d active_warp=%0d stall=%0b dmem_ren=%0b",
                dut.u_scheduler.valid,
                dut.u_scheduler.active_warp,
                dut.warp_stall,
                dut.dmem_ren);
    end

    // Regfile write probe — watch lane 0 regfile directly
    always @(posedge clk) begin
        if (dut.regfiles[0].u_regfile.wr_en && dut.regfiles[0].u_regfile.rd_addr != 0)
            $display("RF_WR: warp=%0d lane=%0d rd=x%0d data=0x%08h",
                dut.regfiles[0].u_regfile.wr_warp_sel,
                dut.regfiles[0].u_regfile.wr_lane_sel,
                dut.regfiles[0].u_regfile.rd_addr,
                dut.regfiles[0].u_regfile.rd_data);
        if (dut.regfiles[0].u_regfile.rs1_addr != 0)
            $display("RF_RD: warp=%0d lane=%0d rs1_addr=x%0d rs1_data=0x%08h regs[0][0][1]=0x%08h",
                dut.regfiles[0].u_regfile.rd_warp_sel,
                dut.regfiles[0].u_regfile.rd_lane_sel,
                dut.regfiles[0].u_regfile.rs1_addr,
                dut.regfiles[0].u_regfile.rs1_data,
                dut.regfiles[0].u_regfile.regs[0][0][1]);
    end

    // Lane 0 execution probe
    always @(posedge clk) begin
        if (dut.lanes[0].u_lane.valid && dut.lanes[0].u_lane.rd_addr != 0)
            $display("EX: rd=x%0d rs1=0x%08h rs2=0x%08h imm=0x%08h alu_op=%0d alu_src=%0d result=0x%08h",
                dut.lanes[0].u_lane.rd_addr,
                dut.lanes[0].u_lane.rs1_data,
                dut.lanes[0].u_lane.rs2_data,
                dut.lanes[0].u_lane.imm,
                dut.lanes[0].u_lane.alu_op,
                dut.lanes[0].u_lane.alu_src,
                dut.lanes[0].u_lane.alu_result);
    end

    // Writeback monitor — prints every cycle wb_wen fires on lane 0
    always @(posedge clk) begin
        if (dut.lanes[0].u_lane.wb_wen)
            $display("WB: warp=%0d rd=x%0d data=0x%08h @ t=%0t",
                dut.lanes[0].u_lane.wb_warp_id,
                dut.lanes[0].u_lane.wb_rd_addr,
                dut.lanes[0].u_lane.wb_data,
                $time);
        if (dut.u_fetch.fetch_valid)
            $display("IF: warp=%0d pc=0x%08h instr=0x%08h @ t=%0t",
                dut.u_fetch.fetch_warp,
                dut.u_fetch.fetch_pc,
                dut.u_fetch.instr,
                $time);
    end

    initial begin
        #10000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
`default_nettype wire
