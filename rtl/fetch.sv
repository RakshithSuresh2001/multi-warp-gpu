`timescale 1ns/1ps
// fetch.sv
// Instruction fetch for 2-warp SIMT GPU core
// Reads IMEM at active_pc, passes instruction + warp ID to decode stage

module fetch #(
    parameter NUM_WARPS  = 2,
    parameter PC_WIDTH   = 32,
    parameter IMEM_DEPTH = 1024        // number of 32-bit words
)(
    input  logic                          clk,
    input  logic                          rst_n,

    // From warp_scheduler
    input  logic [$clog2(NUM_WARPS)-1:0]  active_warp,
    input  logic [PC_WIDTH-1:0]           active_pc,
    input  logic                          valid,         // scheduler has a runnable warp

    // Stall from decode/execute (e.g. structural hazard)
    input  logic                          stall,

    // To decode stage
    output logic [31:0]                   instr,
    output logic [$clog2(NUM_WARPS)-1:0]  fetch_warp,
    output logic [PC_WIDTH-1:0]           fetch_pc,
    output logic                          fetch_valid,

    // PC update back to warp_scheduler (PC+4 each cycle, branch handled in execute)
    output logic [NUM_WARPS-1:0]          pc_wen,
    output logic [NUM_WARPS-1:0][PC_WIDTH-1:0] pc_next
);

    // ----------------------------------------------------
    // Instruction memory (synchronous read, word-addressed)
    // Initialized from imem.hex via $readmemh in simulation
    // ----------------------------------------------------
    logic [31:0] imem [0:IMEM_DEPTH-1];

    // $readmemh removed for synthesis — IMEM initialized via testbench or external load
    // initial begin
    //     $readmemh("imem.hex", imem);
    // end

    // Word address = PC[PC_WIDTH-1:2]  (bottom 2 bits always 0 for aligned RV32I)
    logic [$clog2(IMEM_DEPTH)-1:0] word_addr;
    assign word_addr = active_pc[2 +: $clog2(IMEM_DEPTH)];

    // ----------------------------------------------------
    // Fetch register (pipeline stage flop)
    // ----------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            instr       <= 32'h0000_0013;   // NOP (ADDI x0, x0, 0)
            fetch_warp  <= '0;
            fetch_pc    <= '0;
            fetch_valid <= 1'b0;
        end else if (!stall) begin
            fetch_valid <= valid;
            if (valid) begin
                instr      <= imem[word_addr];
                fetch_warp <= active_warp;
                fetch_pc   <= active_pc;
            end else begin
                instr      <= 32'h0000_0013;  // bubble
                fetch_warp <= '0;
                fetch_pc   <= '0;
            end
        end
        // stall: hold all outputs, do nothing
    end

    // ----------------------------------------------------
    // PC+4 update — sent back to warp_scheduler every
    // valid, non-stall cycle for the active warp.
    // Branch/JAL overrides come from execute stage and
    // arrive via separate pc_wen/pc_next ports on warp_scheduler.
    // ----------------------------------------------------
    always_comb begin
        pc_wen  = '0;
        pc_next = '0;
        if (valid && !stall) begin
            pc_wen[active_warp]  = 1'b1;
            pc_next[active_warp] = active_pc + 32'd4;
        end
    end

endmodule
