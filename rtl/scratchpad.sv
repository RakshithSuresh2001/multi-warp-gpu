`timescale 1ns/1ps
`default_nettype none

// scratchpad.sv
// 8-bank scratchpad memory using fakeram7_256x32 SRAM macros, accessed
// through the non-parameterized scratchpad_bank wrapper so the macro
// instance survives synthesis as a proper blackbox (see scratchpad_bank.sv
// for why the wrapper exists — parameterized modules get hashed names
// that Yosys's `blackbox <name>` command cannot match).
// One bank per lane — no bank conflicts by construction.
// Word (32-bit) stores: direct single-cycle write.
// Byte/half-word stores: read-modify-write (2 cycles).

module scratchpad #(
    parameter NUM_LANES  = 8,
    parameter DEPTH      = 256,
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire rst_n,
    input  wire [NUM_LANES-1:0]        ren,
    input  wire [NUM_LANES-1:0]        wen,
    input  wire [NUM_LANES-1:0][31:0]  addr,
    input  wire [NUM_LANES-1:0][31:0]  wdata,
    input  wire [NUM_LANES-1:0][2:0]   funct3,
    output reg  [NUM_LANES-1:0][31:0]  rdata
);

    wire [7:0] wa [NUM_LANES-1:0];
    wire [1:0] ba [NUM_LANES-1:0];
    wire       bh [NUM_LANES-1:0];

    genvar i;
    generate
        for (i = 0; i < NUM_LANES; i++) begin : gen_addr
            assign wa[i] = addr[i][9:2];
            assign ba[i] = addr[i][1:0];
            assign bh[i] = addr[i][1];
        end
    endgenerate

    wire [31:0] sram_rd   [NUM_LANES-1:0];
    reg  [31:0] sram_wd   [NUM_LANES-1:0];
    reg  [7:0]  sram_addr [NUM_LANES-1:0];
    reg         sram_we   [NUM_LANES-1:0];
    reg         sram_ce   [NUM_LANES-1:0];

    reg        rmw_pending [NUM_LANES-1:0];
    reg [31:0] rmw_wdata   [NUM_LANES-1:0];
    reg [7:0]  rmw_addr    [NUM_LANES-1:0];
    reg [2:0]  rmw_funct3  [NUM_LANES-1:0];
    reg [1:0]  rmw_ba      [NUM_LANES-1:0];
    reg        rmw_bh      [NUM_LANES-1:0];

    reg        rd_active   [NUM_LANES-1:0];
    reg [2:0]  rd_funct3   [NUM_LANES-1:0];
    reg [1:0]  rd_ba       [NUM_LANES-1:0];
    reg        rd_bh       [NUM_LANES-1:0];

    generate
        for (i = 0; i < NUM_LANES; i++) begin : gen_banks

            // Non-parameterized wrapper — survives as a clean blackbox
            scratchpad_bank u_bank (
                .clk     (clk),
                .ce_in   (sram_ce[i]),
                .we_in   (sram_we[i]),
                .addr_in (sram_addr[i]),
                .wd_in   (sram_wd[i]),
                .rd_out  (sram_rd[i])
            );

            always_ff @(posedge clk) begin
                if (!rst_n) begin
                    rmw_pending[i] <= 1'b0;
                    rd_active[i]   <= 1'b0;
                    sram_ce[i]     <= 1'b0;
                    sram_we[i]     <= 1'b0;
                    sram_addr[i]   <= 8'b0;
                    sram_wd[i]     <= 32'b0;
                    rdata[i]       <= 32'b0;
                end else begin
                    sram_ce[i]     <= 1'b0;
                    sram_we[i]     <= 1'b0;
                    rmw_pending[i] <= 1'b0;
                    rd_active[i]   <= 1'b0;

                    if (rmw_pending[i]) begin
                        sram_ce[i]   <= 1'b1;
                        sram_we[i]   <= 1'b1;
                        sram_addr[i] <= rmw_addr[i];
                        case (rmw_funct3[i])
                            3'b000: begin // SB
                                case (rmw_ba[i])
                                    2'b00: sram_wd[i] <= {sram_rd[i][31:8],  rmw_wdata[i][7:0]};
                                    2'b01: sram_wd[i] <= {sram_rd[i][31:16], rmw_wdata[i][7:0], sram_rd[i][7:0]};
                                    2'b10: sram_wd[i] <= {sram_rd[i][31:24], rmw_wdata[i][7:0], sram_rd[i][15:0]};
                                    2'b11: sram_wd[i] <= {rmw_wdata[i][7:0], sram_rd[i][23:0]};
                                endcase
                            end
                            3'b001: begin // SH
                                case (rmw_bh[i])
                                    1'b0: sram_wd[i] <= {sram_rd[i][31:16], rmw_wdata[i][15:0]};
                                    1'b1: sram_wd[i] <= {rmw_wdata[i][15:0], sram_rd[i][15:0]};
                                endcase
                            end
                            default: sram_wd[i] <= rmw_wdata[i];
                        endcase
                    end

                    else if (wen[i]) begin
                        sram_ce[i]   <= 1'b1;
                        sram_addr[i] <= wa[i];
                        if (funct3[i] == 3'b010) begin
                            sram_we[i] <= 1'b1;
                            sram_wd[i] <= wdata[i];
                        end else begin
                            sram_we[i]     <= 1'b0;
                            rmw_pending[i] <= 1'b1;
                            rmw_addr[i]    <= wa[i];
                            rmw_wdata[i]   <= wdata[i];
                            rmw_funct3[i]  <= funct3[i];
                            rmw_ba[i]      <= ba[i];
                            rmw_bh[i]      <= bh[i];
                        end
                    end

                    else if (ren[i]) begin
                        sram_ce[i]   <= 1'b1;
                        sram_we[i]   <= 1'b0;
                        sram_addr[i] <= wa[i];
                        rd_active[i] <= 1'b1;
                        rd_funct3[i] <= funct3[i];
                        rd_ba[i]     <= ba[i];
                        rd_bh[i]     <= bh[i];
                    end

                    if (rd_active[i]) begin
                        case (rd_funct3[i])
                            3'b000: begin
                                case (rd_ba[i])
                                    2'b00: rdata[i] <= {{24{sram_rd[i][7]}},  sram_rd[i][7:0]};
                                    2'b01: rdata[i] <= {{24{sram_rd[i][15]}}, sram_rd[i][15:8]};
                                    2'b10: rdata[i] <= {{24{sram_rd[i][23]}}, sram_rd[i][23:16]};
                                    2'b11: rdata[i] <= {{24{sram_rd[i][31]}}, sram_rd[i][31:24]};
                                endcase
                            end
                            3'b001: begin
                                case (rd_bh[i])
                                    1'b0: rdata[i] <= {{16{sram_rd[i][15]}}, sram_rd[i][15:0]};
                                    1'b1: rdata[i] <= {{16{sram_rd[i][31]}}, sram_rd[i][31:16]};
                                endcase
                            end
                            3'b010: rdata[i] <= sram_rd[i];
                            3'b100: begin
                                case (rd_ba[i])
                                    2'b00: rdata[i] <= {24'b0, sram_rd[i][7:0]};
                                    2'b01: rdata[i] <= {24'b0, sram_rd[i][15:8]};
                                    2'b10: rdata[i] <= {24'b0, sram_rd[i][23:16]};
                                    2'b11: rdata[i] <= {24'b0, sram_rd[i][31:24]};
                                endcase
                            end
                            3'b101: begin
                                case (rd_bh[i])
                                    1'b0: rdata[i] <= {16'b0, sram_rd[i][15:0]};
                                    1'b1: rdata[i] <= {16'b0, sram_rd[i][31:16]};
                                endcase
                            end
                            default: rdata[i] <= sram_rd[i];
                        endcase
                    end
                end
            end
        end
    endgenerate

endmodule
`default_nettype wire
