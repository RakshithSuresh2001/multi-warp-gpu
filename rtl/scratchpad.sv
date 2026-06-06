// scratchpad.sv
// 8-bank scratchpad SRAM model for 2-warp SIMT GPU core
// One bank per lane — no structural hazards when all 8 lanes
// access different addresses in the same cycle
// Supports byte, halfword, and word accesses (funct3-controlled)

`timescale 1ns/1ps
`default_nettype none

module scratchpad #(
    parameter NUM_LANES  = 8,
    parameter DEPTH      = 256,     // words per bank
    parameter DATA_WIDTH = 32
)(
    input  wire clk,
    input  wire rst_n,

    // One port per lane
    input  wire [NUM_LANES-1:0]        ren,
    input  wire [NUM_LANES-1:0]        wen,
    input  wire [NUM_LANES-1:0][31:0]  addr,
    input  wire [NUM_LANES-1:0][31:0]  wdata,
    input  wire [NUM_LANES-1:0][2:0]   funct3,
    output reg  [NUM_LANES-1:0][31:0]  rdata
);

    // One SRAM bank per lane
    reg [DATA_WIDTH-1:0] mem [NUM_LANES-1:0][0:DEPTH-1];

    // Word address = addr[N:2], bottom 2 bits are byte offset
    wire [$clog2(DEPTH)-1:0] word_addr [NUM_LANES-1:0];

    genvar i;
    generate
        for (i = 0; i < NUM_LANES; i++) begin : banks
            assign word_addr[i] = addr[i][2 +: $clog2(DEPTH)];

            // Synchronous write with byte/halfword/word masking
            always_ff @(posedge clk) begin
                if (wen[i]) begin
                    case (funct3[i])
                        3'b000: begin // SB — store byte
                            case (addr[i][1:0])
                                2'b00: mem[i][word_addr[i]][ 7: 0] <= wdata[i][7:0];
                                2'b01: mem[i][word_addr[i]][15: 8] <= wdata[i][7:0];
                                2'b10: mem[i][word_addr[i]][23:16] <= wdata[i][7:0];
                                2'b11: mem[i][word_addr[i]][31:24] <= wdata[i][7:0];
                            endcase
                        end
                        3'b001: begin // SH — store halfword
                            case (addr[i][1])
                                1'b0: mem[i][word_addr[i]][15: 0] <= wdata[i][15:0];
                                1'b1: mem[i][word_addr[i]][31:16] <= wdata[i][15:0];
                            endcase
                        end
                        default: // SW — store word
                            mem[i][word_addr[i]] <= wdata[i];
                    endcase
                end
            end

            // Synchronous read with sign/zero extension
            always_ff @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    rdata[i] <= 32'b0;
                end else if (ren[i]) begin
                    case (funct3[i])
                        3'b000: begin // LB — sign-extended byte
                            case (addr[i][1:0])
                                2'b00: rdata[i] <= {{24{mem[i][word_addr[i]][ 7]}}, mem[i][word_addr[i]][ 7: 0]};
                                2'b01: rdata[i] <= {{24{mem[i][word_addr[i]][15]}}, mem[i][word_addr[i]][15: 8]};
                                2'b10: rdata[i] <= {{24{mem[i][word_addr[i]][23]}}, mem[i][word_addr[i]][23:16]};
                                2'b11: rdata[i] <= {{24{mem[i][word_addr[i]][31]}}, mem[i][word_addr[i]][31:24]};
                            endcase
                        end
                        3'b001: begin // LH — sign-extended halfword
                            case (addr[i][1])
                                1'b0: rdata[i] <= {{16{mem[i][word_addr[i]][15]}}, mem[i][word_addr[i]][15: 0]};
                                1'b1: rdata[i] <= {{16{mem[i][word_addr[i]][31]}}, mem[i][word_addr[i]][31:16]};
                            endcase
                        end
                        3'b010: // LW — full word
                            rdata[i] <= mem[i][word_addr[i]];
                        3'b100: begin // LBU — zero-extended byte
                            case (addr[i][1:0])
                                2'b00: rdata[i] <= {24'b0, mem[i][word_addr[i]][ 7: 0]};
                                2'b01: rdata[i] <= {24'b0, mem[i][word_addr[i]][15: 8]};
                                2'b10: rdata[i] <= {24'b0, mem[i][word_addr[i]][23:16]};
                                2'b11: rdata[i] <= {24'b0, mem[i][word_addr[i]][31:24]};
                            endcase
                        end
                        3'b101: begin // LHU — zero-extended halfword
                            case (addr[i][1])
                                1'b0: rdata[i] <= {16'b0, mem[i][word_addr[i]][15: 0]};
                                1'b1: rdata[i] <= {16'b0, mem[i][word_addr[i]][31:16]};
                            endcase
                        end
                        default:
                            rdata[i] <= mem[i][word_addr[i]];
                    endcase
                end
            end
        end
    endgenerate

endmodule
`default_nettype wire
