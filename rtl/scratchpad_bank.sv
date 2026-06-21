`timescale 1ns/1ps
`default_nettype none

// scratchpad_bank.sv
// Non-parameterized wrapper around fakeram7_256x32 for one scratchpad bank
// Kept simple and parameter-free so Yosys can blackbox it by exact module
// name (parameterized modules get hashed/mangled names that blackbox
// cannot match by string).

module scratchpad_bank (
    input  wire        clk,
    input  wire        ce_in,
    input  wire        we_in,
    input  wire [7:0]  addr_in,
    input  wire [31:0] wd_in,
    output wire [31:0] rd_out
);

    (* keep *)
    fakeram7_256x32 u_sram (
        .clk     (clk),
        .ce_in   (ce_in),
        .we_in   (we_in),
        .addr_in (addr_in),
        .wd_in   (wd_in),
        .rd_out  (rd_out)
    );

endmodule
`default_nettype wire
