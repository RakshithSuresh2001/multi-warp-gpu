`timescale 1ns/1ps
// warp_scheduler.sv
// Round-robin warp scheduler for 2-warp GPU core

module warp_scheduler #(
    parameter NUM_WARPS  = 2,
    parameter PC_WIDTH   = 32
)(
    input  logic                                    clk,
    input  logic                                    rst_n,
    input  logic [NUM_WARPS-1:0]                    pc_wen,
    input  logic [NUM_WARPS-1:0][PC_WIDTH-1:0]      pc_next,
    input  logic [NUM_WARPS-1:0]                    warp_stall,
    output logic [$clog2(NUM_WARPS)-1:0]            active_warp,
    output logic [PC_WIDTH-1:0]                     active_pc,
    output logic                                    valid
);

    // Plain logic instead of enum for Yosys compatibility
    logic                               warp_state [NUM_WARPS];  // 0=READY 1=WAITING
    logic [NUM_WARPS-1:0][PC_WIDTH-1:0] warp_pc;
    logic [$clog2(NUM_WARPS)-1:0]       rr_ptr;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < NUM_WARPS; i++) warp_pc[i] <= '0;
        end else begin
            for (int i = 0; i < NUM_WARPS; i++)
                if (pc_wen[i]) warp_pc[i] <= pc_next[i];
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < NUM_WARPS; i++) warp_state[i] <= 1'b0;
        end else begin
            for (int i = 0; i < NUM_WARPS; i++)
                warp_state[i] <= warp_stall[i] ? 1'b1 : 1'b0;
        end
    end

    logic [$clog2(NUM_WARPS)-1:0] next_warp;
    logic                          any_ready;

    // Hardcoded for NUM_WARPS=2 to avoid Yosys automatic/modulo issues
    always_comb begin
        next_warp = rr_ptr;
        any_ready = 1'b0;
        // Check warp 1 first if rr_ptr=0, else check warp 0
        if (!warp_stall[~rr_ptr]) begin
            next_warp = ~rr_ptr;
            any_ready = 1'b1;
        end else if (!warp_stall[rr_ptr]) begin
            next_warp = rr_ptr;
            any_ready = 1'b1;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) rr_ptr <= '0;
        else if (warp_stall[rr_ptr] || !any_ready) rr_ptr <= next_warp;
        // Only switch when current warp is stalled
    end

    assign active_warp = rr_ptr;
    assign active_pc   = warp_pc[rr_ptr];
    assign valid       = !warp_stall[rr_ptr];

endmodule
