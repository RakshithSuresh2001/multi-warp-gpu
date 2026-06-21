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

    typedef enum logic { READY = 1'b0, WAITING = 1'b1 } warp_state_t;

    warp_state_t                        warp_state [NUM_WARPS];
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
            for (int i = 0; i < NUM_WARPS; i++) warp_state[i] <= READY;
        end else begin
            for (int i = 0; i < NUM_WARPS; i++)
                warp_state[i] <= warp_stall[i] ? WAITING : READY;
        end
    end

    logic [$clog2(NUM_WARPS)-1:0] next_warp;
    logic                          any_ready;

    always_comb begin
        // Simple priority scan — check other warps first, fall back to current
        // Works for any NUM_WARPS by checking each warp in round-robin order
        next_warp = rr_ptr;
        any_ready = 1'b0;
        for (int i = 1; i <= NUM_WARPS; i++) begin
            // Use integer arithmetic to avoid bit-width modulo issues
            automatic int idx = (int'(rr_ptr) + i) % NUM_WARPS;
            if (!any_ready && !warp_stall[idx[$clog2(NUM_WARPS)-1:0]]) begin
                next_warp = idx[$clog2(NUM_WARPS)-1:0];
                any_ready = 1'b1;
            end
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
