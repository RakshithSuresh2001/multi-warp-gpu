// gpu_top.sv
// Top-level for 2-warp, 8-lane SIMT GPU core
// Wires: warp_scheduler -> fetch -> decode -> lane[8] -> regfile + scratchpad

`timescale 1ns/1ps
`default_nettype none

module gpu_top #(
    parameter NUM_WARPS  = 2,
    parameter NUM_LANES  = 8,
    parameter PC_WIDTH   = 32,
    parameter IMEM_DEPTH = 1024,
    parameter DMEM_DEPTH = 256
)(
    input  wire clk,
    input  wire rst_n
);

    // -------------------------------------------------------
    // Warp scheduler <-> fetch
    // -------------------------------------------------------
    wire [$clog2(NUM_WARPS)-1:0] sched_active_warp;
    wire [PC_WIDTH-1:0]          sched_active_pc;
    wire                         sched_valid;
    wire                         fetch_stall;

    // PC update bus: fetch -> scheduler (PC+4), execute -> scheduler (branch)
    wire [NUM_WARPS-1:0]                    pc_wen;
    wire [NUM_WARPS-1:0][PC_WIDTH-1:0]      pc_next;

    // Branch override from lane 0 (all lanes compute same branch, lane 0 wins)
    wire                         branch_taken_l0;
    wire [PC_WIDTH-1:0]          branch_target_l0;
    wire [$clog2(NUM_WARPS)-1:0] branch_warp_l0;

    // Merge PC update: branch overrides fetch PC+4 for the branching warp
    wire [NUM_WARPS-1:0]                pc_wen_fetch;
    wire [NUM_WARPS-1:0][PC_WIDTH-1:0]  pc_next_fetch;

    genvar w;
    generate
        for (w = 0; w < NUM_WARPS; w++) begin : pc_merge
            assign pc_wen[w]  = branch_taken_l0 && (branch_warp_l0 == w[$clog2(NUM_WARPS)-1:0])
                                 ? 1'b1
                                 : pc_wen_fetch[w];
            assign pc_next[w] = branch_taken_l0 && (branch_warp_l0 == w[$clog2(NUM_WARPS)-1:0])
                                 ? branch_target_l0
                                 : pc_next_fetch[w];
        end
    endgenerate

    warp_scheduler #(
        .NUM_WARPS (NUM_WARPS),
        .PC_WIDTH  (PC_WIDTH)
    ) u_scheduler (
        .clk         (clk),
        .rst_n       (rst_n),
        .pc_wen      (pc_wen),
        .pc_next     (pc_next),
        .warp_stall  (warp_stall),
        .active_warp (sched_active_warp),
        .active_pc   (sched_active_pc),
        .valid       (sched_valid)
    );

    // -------------------------------------------------------
    // Fetch
    // -------------------------------------------------------
    wire [31:0]                   if_instr;
    wire [$clog2(NUM_WARPS)-1:0]  if_warp;
    wire [PC_WIDTH-1:0]           if_pc;
    wire                          if_valid;

    fetch #(
        .NUM_WARPS  (NUM_WARPS),
        .PC_WIDTH   (PC_WIDTH),
        .IMEM_DEPTH (IMEM_DEPTH)
    ) u_fetch (
        .clk          (clk),
        .rst_n        (rst_n),
        .active_warp  (sched_active_warp),
        .active_pc    (sched_active_pc),
        .valid        (sched_valid),
        .stall        (fetch_stall),
        .instr        (if_instr),
        .fetch_warp   (if_warp),
        .fetch_pc     (if_pc),
        .fetch_valid  (if_valid),
        .pc_wen       (pc_wen_fetch),
        .pc_next      (pc_next_fetch)
    );

    // -------------------------------------------------------
    // Decode
    // -------------------------------------------------------
    wire [31:0]                   id_pc;
    wire [31:0]                   id_rs1_data [NUM_LANES-1:0];
    wire [31:0]                   id_rs2_data [NUM_LANES-1:0];
    wire [4:0]                    id_rs1_addr;
    wire [4:0]                    id_rs2_addr;
    wire [$clog2(NUM_WARPS)-1:0]  id_rf_warp_sel;
    wire [31:0]                   id_rs1_out;
    wire [31:0]                   id_rs2_out;
    wire [31:0]                   id_imm;
    wire [4:0]                    id_rs1_addr_out;
    wire [4:0]                    id_rs2_addr_out;
    wire [4:0]                    id_rd_addr;
    wire [3:0]                    id_alu_op;
    wire                          id_alu_src;
    wire                          id_mem_read;
    wire                          id_mem_write;
    wire                          id_reg_write;
    wire                          id_branch;
    wire                          id_mem_to_reg;
    wire [2:0]                    id_funct3;
    wire                          id_jal;
    wire [$clog2(NUM_WARPS)-1:0]  id_warp_id;

    // Flush on branch taken
    wire id_flush = branch_taken_l0;

    id_decode #(
        .NUM_WARPS (NUM_WARPS)
    ) u_decode (
        .clk              (clk),
        .rst_n            (rst_n),
        .stall            (fetch_stall),
        .flush            (id_flush),
        .pc_in            (if_pc),
        .instr_in         (if_instr),
        .fetch_warp_in    (if_warp),
        .rs1_addr         (id_rs1_addr),
        .rs2_addr         (id_rs2_addr),
        .rf_warp_sel      (id_rf_warp_sel),
        .rs1_data         (rf_rs1[0]),
        .rs2_data         (rf_rs2[0]),
        .pc_out           (id_pc),
        .rs1_out          (id_rs1_out),
        .rs2_out          (id_rs2_out),
        .imm_out          (id_imm),
        .rs1_addr_out     (id_rs1_addr_out),
        .rs2_addr_out     (id_rs2_addr_out),
        .rd_addr_out      (id_rd_addr),
        .alu_op_out       (id_alu_op),
        .alu_src_out      (id_alu_src),
        .mem_read_out     (id_mem_read),
        .mem_write_out    (id_mem_write),
        .reg_write_out    (id_reg_write),
        .branch_out       (id_branch),
        .mem_to_reg_out   (id_mem_to_reg),
        .funct3_out       (id_funct3),
        .jal_out          (id_jal),
        .warp_id_out      (id_warp_id)
    );

    // -------------------------------------------------------
    // Register file (shared, indexed by warp + lane)
    // -------------------------------------------------------
    wire                          wb_wen    [NUM_LANES-1:0];
    wire [4:0]                    wb_rd_addr[NUM_LANES-1:0];
    wire [31:0]                   wb_data   [NUM_LANES-1:0];
    wire [$clog2(NUM_WARPS)-1:0]  wb_warp_id[NUM_LANES-1:0];
    wire [31:0]                   rf_rs1    [NUM_LANES-1:0];
    wire [31:0]                   rf_rs2    [NUM_LANES-1:0];

    genvar l;
    generate
        for (l = 0; l < NUM_LANES; l++) begin : regfiles
            regfile #(
                .NUM_WARPS (NUM_WARPS),
                .NUM_LANES (NUM_LANES)
            ) u_regfile (
                .clk          (clk),
                .rst_n        (rst_n),
                .rd_warp_sel  (id_rf_warp_sel),
                .rd_lane_sel  (l[$clog2(NUM_LANES)-1:0]),
                .rs1_addr     (id_rs1_addr),
                .rs2_addr     (id_rs2_addr),
                .rs1_data     (rf_rs1[l]),
                .rs2_data     (rf_rs2[l]),
                .wr_en        (wb_wen[l]),
                .wr_warp_sel  (wb_warp_id[l]),
                .wr_lane_sel  (l[$clog2(NUM_LANES)-1:0]),
                .rd_addr      (wb_rd_addr[l]),
                .rd_data      (wb_data[l])
            );
        end
    endgenerate

    // -------------------------------------------------------
    // Lanes
    // -------------------------------------------------------
    wire [NUM_LANES-1:0]        dmem_ren;
    wire [NUM_LANES-1:0]        dmem_wen;
    wire [NUM_LANES-1:0][31:0]  dmem_addr;
    wire [NUM_LANES-1:0][31:0]  dmem_wdata;
    wire [NUM_LANES-1:0][2:0]   dmem_funct3;
    wire [NUM_LANES-1:0][31:0]  dmem_rdata;
    wire [NUM_WARPS-1:0]        warp_stall;

    wire [NUM_LANES-1:0]                   lane_branch_taken;
    wire [NUM_LANES-1:0][PC_WIDTH-1:0]     lane_branch_target;
    wire [NUM_LANES-1:0][$clog2(NUM_WARPS)-1:0] lane_branch_warp;

    // Lane 0 drives branch resolution for all lanes (SIMT: all lanes
    // execute the same instruction, so branch outcome is identical)
    assign branch_taken_l0  = lane_branch_taken[0];
    assign branch_target_l0 = lane_branch_target[0];
    assign branch_warp_l0   = lane_branch_warp[0];

    generate
        for (l = 0; l < NUM_LANES; l++) begin : lanes
            lane #(
                .NUM_WARPS (NUM_WARPS),
                .LANE_ID   (l)
            ) u_lane (
                .clk            (clk),
                .rst_n          (rst_n),
                .valid          (if_valid),
                .warp_id_in     (id_warp_id),
                .pc_in          (id_pc),
                .rs1_data       (id_rs1_out),
                .rs2_data       (id_rs2_out),
                .imm            (id_imm),
                .rs1_addr       (id_rs1_addr_out),
                .rs2_addr       (id_rs2_addr_out),
                .rd_addr        (id_rd_addr),
                .alu_op         (id_alu_op),
                .alu_src        (id_alu_src),
                .reg_write      (id_reg_write),
                .mem_read       (id_mem_read),
                .mem_write      (id_mem_write),
                .mem_to_reg     (id_mem_to_reg),
                .branch         (id_branch),
                .jal            (id_jal),
                .funct3         (id_funct3),
                .dmem_ren       (dmem_ren[l]),
                .dmem_wen       (dmem_wen[l]),
                .dmem_addr      (dmem_addr[l]),
                .dmem_wdata     (dmem_wdata[l]),
                .dmem_funct3    (dmem_funct3[l]),
                .dmem_rdata     (dmem_rdata[l]),
                .wb_wen         (wb_wen[l]),
                .wb_rd_addr     (wb_rd_addr[l]),
                .wb_data        (wb_data[l]),
                .wb_warp_id     (wb_warp_id[l]),
                .branch_taken   (lane_branch_taken[l]),
                .branch_target  (lane_branch_target[l]),
                .branch_warp_id (lane_branch_warp[l])
            );
        end
    endgenerate

    // -------------------------------------------------------
    // Scratchpad
    // -------------------------------------------------------
    scratchpad #(
        .NUM_LANES  (NUM_LANES),
        .DEPTH      (DMEM_DEPTH)
    ) u_scratchpad (
        .clk     (clk),
        .rst_n   (rst_n),
        .ren     (dmem_ren),
        .wen     (dmem_wen),
        .addr    (dmem_addr),
        .wdata   (dmem_wdata),
        .funct3  (dmem_funct3),
        .rdata   (dmem_rdata)
    );

    // Stall active warp for one cycle on any lane load
    // (scratchpad read is synchronous, data arrives next cycle)
    // fetch_stall: assert when any lane has a pending load
    // dmem_ren is combinational from lane valid && mem_read
    // One cycle stall gives scratchpad time to return data
    wire dmem_active = |dmem_ren;

    assign fetch_stall = dmem_active;

    generate
        for (w = 0; w < NUM_WARPS; w++) begin : stall_gen
            assign warp_stall[w] = (sched_active_warp == w[$clog2(NUM_WARPS)-1:0]) && dmem_active;
        end
    endgenerate

endmodule
`default_nettype wire
