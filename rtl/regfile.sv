// regfile.sv
// Per-warp register file for 2-warp SIMT GPU core
// Each warp has 8 lanes, each lane has 32 x 32-bit registers
// x0 hardwired to 0 per RV32I spec
// Two read ports, one write port — all qualified by warp + lane select

`timescale 1ns/1ps
`default_nettype none

module regfile #(
    parameter NUM_WARPS = 2,
    parameter NUM_LANES = 8
)(
    input  wire        clk,
    input  wire        rst_n,

    // Read ports (from decode)
    input  wire [$clog2(NUM_WARPS)-1:0] rd_warp_sel,   // NEW
    input  wire [$clog2(NUM_LANES)-1:0] rd_lane_sel,   // NEW
    input  wire [4:0]  rs1_addr,
    input  wire [4:0]  rs2_addr,
    output wire [31:0] rs1_data,
    output wire [31:0] rs2_data,

    // Write port (from writeback)
    input  wire        wr_en,
    input  wire [$clog2(NUM_WARPS)-1:0] wr_warp_sel,   // NEW
    input  wire [$clog2(NUM_LANES)-1:0] wr_lane_sel,   // NEW
    input  wire [4:0]  rd_addr,
    input  wire [31:0] rd_data
);

    // [warp][lane][register] — 2 warps x 8 lanes x 31 registers (x0 excluded)
    reg [31:0] regs [NUM_WARPS-1:0][NUM_LANES-1:0][1:31];  // NEW shape

    // Synchronous write — qualified by warp + lane
    always_ff @(posedge clk) begin
        if (wr_en && rd_addr != 5'b0)
            regs[wr_warp_sel][wr_lane_sel][rd_addr] <= rd_data;  // NEW index
    end

    // No WB->ID bypass needed: warp scheduler switches warps on stall,
    // so the same warp never reads a register it just wrote in the same cycle.
    // Bypass would create a combinational loop through lane ALU -> writeback -> regfile.
    assign rs1_data = (rs1_addr == 5'b0) ? 32'b0 : regs[rd_warp_sel][rd_lane_sel][rs1_addr];
    assign rs2_data = (rs2_addr == 5'b0) ? 32'b0 : regs[rd_warp_sel][rd_lane_sel][rs2_addr];

endmodule
`default_nettype wire
