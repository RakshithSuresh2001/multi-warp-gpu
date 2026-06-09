`timescale 1ns/1ps
`default_nettype none

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

    reg [31:0] mem0 [0:DEPTH-1];
    reg [31:0] mem1 [0:DEPTH-1];
    reg [31:0] mem2 [0:DEPTH-1];
    reg [31:0] mem3 [0:DEPTH-1];
    reg [31:0] mem4 [0:DEPTH-1];
    reg [31:0] mem5 [0:DEPTH-1];
    reg [31:0] mem6 [0:DEPTH-1];
    reg [31:0] mem7 [0:DEPTH-1];

    // Extract word addresses — static bit slice, no dynamic range select
    wire [7:0] wa0 = addr[0][9:2];
    wire [7:0] wa1 = addr[1][9:2];
    wire [7:0] wa2 = addr[2][9:2];
    wire [7:0] wa3 = addr[3][9:2];
    wire [7:0] wa4 = addr[4][9:2];
    wire [7:0] wa5 = addr[5][9:2];
    wire [7:0] wa6 = addr[6][9:2];
    wire [7:0] wa7 = addr[7][9:2];

    // Extract byte/half selects — static, no dynamic index
    wire [1:0] ba0 = addr[0][1:0]; wire bh0 = addr[0][1];
    wire [1:0] ba1 = addr[1][1:0]; wire bh1 = addr[1][1];
    wire [1:0] ba2 = addr[2][1:0]; wire bh2 = addr[2][1];
    wire [1:0] ba3 = addr[3][1:0]; wire bh3 = addr[3][1];
    wire [1:0] ba4 = addr[4][1:0]; wire bh4 = addr[4][1];
    wire [1:0] ba5 = addr[5][1:0]; wire bh5 = addr[5][1];
    wire [1:0] ba6 = addr[6][1:0]; wire bh6 = addr[6][1];
    wire [1:0] ba7 = addr[7][1:0]; wire bh7 = addr[7][1];

    // Bank 0
    always_ff @(posedge clk) begin
        if (wen[0]) begin
            case (funct3[0])
                3'b000: begin
                    case (ba0)
                        2'b00: mem0[wa0][ 7: 0] <= wdata[0][7:0];
                        2'b01: mem0[wa0][15: 8] <= wdata[0][7:0];
                        2'b10: mem0[wa0][23:16] <= wdata[0][7:0];
                        2'b11: mem0[wa0][31:24] <= wdata[0][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh0)
                        1'b0: mem0[wa0][15: 0] <= wdata[0][15:0];
                        1'b1: mem0[wa0][31:16] <= wdata[0][15:0];
                    endcase
                end
                default: mem0[wa0] <= wdata[0];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[0] <= 32'b0;
        end else if (ren[0]) begin
            case (funct3[0])
                3'b000: begin
                    case (ba0)
                        2'b00: rdata[0] <= {{24{mem0[wa0][ 7]}}, mem0[wa0][ 7: 0]};
                        2'b01: rdata[0] <= {{24{mem0[wa0][15]}}, mem0[wa0][15: 8]};
                        2'b10: rdata[0] <= {{24{mem0[wa0][23]}}, mem0[wa0][23:16]};
                        2'b11: rdata[0] <= {{24{mem0[wa0][31]}}, mem0[wa0][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh0)
                        1'b0: rdata[0] <= {{16{mem0[wa0][15]}}, mem0[wa0][15: 0]};
                        1'b1: rdata[0] <= {{16{mem0[wa0][31]}}, mem0[wa0][31:16]};
                    endcase
                end
                3'b010: rdata[0] <= mem0[wa0];
                3'b100: begin
                    case (ba0)
                        2'b00: rdata[0] <= {24'b0, mem0[wa0][ 7: 0]};
                        2'b01: rdata[0] <= {24'b0, mem0[wa0][15: 8]};
                        2'b10: rdata[0] <= {24'b0, mem0[wa0][23:16]};
                        2'b11: rdata[0] <= {24'b0, mem0[wa0][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh0)
                        1'b0: rdata[0] <= {16'b0, mem0[wa0][15: 0]};
                        1'b1: rdata[0] <= {16'b0, mem0[wa0][31:16]};
                    endcase
                end
                default: rdata[0] <= mem0[wa0];
            endcase
        end
    end
    // Bank 1
    always_ff @(posedge clk) begin
        if (wen[1]) begin
            case (funct3[1])
                3'b000: begin
                    case (ba1)
                        2'b00: mem1[wa1][ 7: 0] <= wdata[1][7:0];
                        2'b01: mem1[wa1][15: 8] <= wdata[1][7:0];
                        2'b10: mem1[wa1][23:16] <= wdata[1][7:0];
                        2'b11: mem1[wa1][31:24] <= wdata[1][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh1)
                        1'b0: mem1[wa1][15: 0] <= wdata[1][15:0];
                        1'b1: mem1[wa1][31:16] <= wdata[1][15:0];
                    endcase
                end
                default: mem1[wa1] <= wdata[1];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[1] <= 32'b0;
        end else if (ren[1]) begin
            case (funct3[1])
                3'b000: begin
                    case (ba1)
                        2'b00: rdata[1] <= {{24{mem1[wa1][ 7]}}, mem1[wa1][ 7: 0]};
                        2'b01: rdata[1] <= {{24{mem1[wa1][15]}}, mem1[wa1][15: 8]};
                        2'b10: rdata[1] <= {{24{mem1[wa1][23]}}, mem1[wa1][23:16]};
                        2'b11: rdata[1] <= {{24{mem1[wa1][31]}}, mem1[wa1][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh1)
                        1'b0: rdata[1] <= {{16{mem1[wa1][15]}}, mem1[wa1][15: 0]};
                        1'b1: rdata[1] <= {{16{mem1[wa1][31]}}, mem1[wa1][31:16]};
                    endcase
                end
                3'b010: rdata[1] <= mem1[wa1];
                3'b100: begin
                    case (ba1)
                        2'b00: rdata[1] <= {24'b0, mem1[wa1][ 7: 0]};
                        2'b01: rdata[1] <= {24'b0, mem1[wa1][15: 8]};
                        2'b10: rdata[1] <= {24'b0, mem1[wa1][23:16]};
                        2'b11: rdata[1] <= {24'b0, mem1[wa1][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh1)
                        1'b0: rdata[1] <= {16'b0, mem1[wa1][15: 0]};
                        1'b1: rdata[1] <= {16'b0, mem1[wa1][31:16]};
                    endcase
                end
                default: rdata[1] <= mem1[wa1];
            endcase
        end
    end
    // Bank 2
    always_ff @(posedge clk) begin
        if (wen[2]) begin
            case (funct3[2])
                3'b000: begin
                    case (ba2)
                        2'b00: mem2[wa2][ 7: 0] <= wdata[2][7:0];
                        2'b01: mem2[wa2][15: 8] <= wdata[2][7:0];
                        2'b10: mem2[wa2][23:16] <= wdata[2][7:0];
                        2'b11: mem2[wa2][31:24] <= wdata[2][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh2)
                        1'b0: mem2[wa2][15: 0] <= wdata[2][15:0];
                        1'b1: mem2[wa2][31:16] <= wdata[2][15:0];
                    endcase
                end
                default: mem2[wa2] <= wdata[2];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[2] <= 32'b0;
        end else if (ren[2]) begin
            case (funct3[2])
                3'b000: begin
                    case (ba2)
                        2'b00: rdata[2] <= {{24{mem2[wa2][ 7]}}, mem2[wa2][ 7: 0]};
                        2'b01: rdata[2] <= {{24{mem2[wa2][15]}}, mem2[wa2][15: 8]};
                        2'b10: rdata[2] <= {{24{mem2[wa2][23]}}, mem2[wa2][23:16]};
                        2'b11: rdata[2] <= {{24{mem2[wa2][31]}}, mem2[wa2][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh2)
                        1'b0: rdata[2] <= {{16{mem2[wa2][15]}}, mem2[wa2][15: 0]};
                        1'b1: rdata[2] <= {{16{mem2[wa2][31]}}, mem2[wa2][31:16]};
                    endcase
                end
                3'b010: rdata[2] <= mem2[wa2];
                3'b100: begin
                    case (ba2)
                        2'b00: rdata[2] <= {24'b0, mem2[wa2][ 7: 0]};
                        2'b01: rdata[2] <= {24'b0, mem2[wa2][15: 8]};
                        2'b10: rdata[2] <= {24'b0, mem2[wa2][23:16]};
                        2'b11: rdata[2] <= {24'b0, mem2[wa2][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh2)
                        1'b0: rdata[2] <= {16'b0, mem2[wa2][15: 0]};
                        1'b1: rdata[2] <= {16'b0, mem2[wa2][31:16]};
                    endcase
                end
                default: rdata[2] <= mem2[wa2];
            endcase
        end
    end
    // Bank 3
    always_ff @(posedge clk) begin
        if (wen[3]) begin
            case (funct3[3])
                3'b000: begin
                    case (ba3)
                        2'b00: mem3[wa3][ 7: 0] <= wdata[3][7:0];
                        2'b01: mem3[wa3][15: 8] <= wdata[3][7:0];
                        2'b10: mem3[wa3][23:16] <= wdata[3][7:0];
                        2'b11: mem3[wa3][31:24] <= wdata[3][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh3)
                        1'b0: mem3[wa3][15: 0] <= wdata[3][15:0];
                        1'b1: mem3[wa3][31:16] <= wdata[3][15:0];
                    endcase
                end
                default: mem3[wa3] <= wdata[3];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[3] <= 32'b0;
        end else if (ren[3]) begin
            case (funct3[3])
                3'b000: begin
                    case (ba3)
                        2'b00: rdata[3] <= {{24{mem3[wa3][ 7]}}, mem3[wa3][ 7: 0]};
                        2'b01: rdata[3] <= {{24{mem3[wa3][15]}}, mem3[wa3][15: 8]};
                        2'b10: rdata[3] <= {{24{mem3[wa3][23]}}, mem3[wa3][23:16]};
                        2'b11: rdata[3] <= {{24{mem3[wa3][31]}}, mem3[wa3][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh3)
                        1'b0: rdata[3] <= {{16{mem3[wa3][15]}}, mem3[wa3][15: 0]};
                        1'b1: rdata[3] <= {{16{mem3[wa3][31]}}, mem3[wa3][31:16]};
                    endcase
                end
                3'b010: rdata[3] <= mem3[wa3];
                3'b100: begin
                    case (ba3)
                        2'b00: rdata[3] <= {24'b0, mem3[wa3][ 7: 0]};
                        2'b01: rdata[3] <= {24'b0, mem3[wa3][15: 8]};
                        2'b10: rdata[3] <= {24'b0, mem3[wa3][23:16]};
                        2'b11: rdata[3] <= {24'b0, mem3[wa3][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh3)
                        1'b0: rdata[3] <= {16'b0, mem3[wa3][15: 0]};
                        1'b1: rdata[3] <= {16'b0, mem3[wa3][31:16]};
                    endcase
                end
                default: rdata[3] <= mem3[wa3];
            endcase
        end
    end
    // Bank 4
    always_ff @(posedge clk) begin
        if (wen[4]) begin
            case (funct3[4])
                3'b000: begin
                    case (ba4)
                        2'b00: mem4[wa4][ 7: 0] <= wdata[4][7:0];
                        2'b01: mem4[wa4][15: 8] <= wdata[4][7:0];
                        2'b10: mem4[wa4][23:16] <= wdata[4][7:0];
                        2'b11: mem4[wa4][31:24] <= wdata[4][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh4)
                        1'b0: mem4[wa4][15: 0] <= wdata[4][15:0];
                        1'b1: mem4[wa4][31:16] <= wdata[4][15:0];
                    endcase
                end
                default: mem4[wa4] <= wdata[4];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[4] <= 32'b0;
        end else if (ren[4]) begin
            case (funct3[4])
                3'b000: begin
                    case (ba4)
                        2'b00: rdata[4] <= {{24{mem4[wa4][ 7]}}, mem4[wa4][ 7: 0]};
                        2'b01: rdata[4] <= {{24{mem4[wa4][15]}}, mem4[wa4][15: 8]};
                        2'b10: rdata[4] <= {{24{mem4[wa4][23]}}, mem4[wa4][23:16]};
                        2'b11: rdata[4] <= {{24{mem4[wa4][31]}}, mem4[wa4][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh4)
                        1'b0: rdata[4] <= {{16{mem4[wa4][15]}}, mem4[wa4][15: 0]};
                        1'b1: rdata[4] <= {{16{mem4[wa4][31]}}, mem4[wa4][31:16]};
                    endcase
                end
                3'b010: rdata[4] <= mem4[wa4];
                3'b100: begin
                    case (ba4)
                        2'b00: rdata[4] <= {24'b0, mem4[wa4][ 7: 0]};
                        2'b01: rdata[4] <= {24'b0, mem4[wa4][15: 8]};
                        2'b10: rdata[4] <= {24'b0, mem4[wa4][23:16]};
                        2'b11: rdata[4] <= {24'b0, mem4[wa4][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh4)
                        1'b0: rdata[4] <= {16'b0, mem4[wa4][15: 0]};
                        1'b1: rdata[4] <= {16'b0, mem4[wa4][31:16]};
                    endcase
                end
                default: rdata[4] <= mem4[wa4];
            endcase
        end
    end
    // Bank 5
    always_ff @(posedge clk) begin
        if (wen[5]) begin
            case (funct3[5])
                3'b000: begin
                    case (ba5)
                        2'b00: mem5[wa5][ 7: 0] <= wdata[5][7:0];
                        2'b01: mem5[wa5][15: 8] <= wdata[5][7:0];
                        2'b10: mem5[wa5][23:16] <= wdata[5][7:0];
                        2'b11: mem5[wa5][31:24] <= wdata[5][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh5)
                        1'b0: mem5[wa5][15: 0] <= wdata[5][15:0];
                        1'b1: mem5[wa5][31:16] <= wdata[5][15:0];
                    endcase
                end
                default: mem5[wa5] <= wdata[5];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[5] <= 32'b0;
        end else if (ren[5]) begin
            case (funct3[5])
                3'b000: begin
                    case (ba5)
                        2'b00: rdata[5] <= {{24{mem5[wa5][ 7]}}, mem5[wa5][ 7: 0]};
                        2'b01: rdata[5] <= {{24{mem5[wa5][15]}}, mem5[wa5][15: 8]};
                        2'b10: rdata[5] <= {{24{mem5[wa5][23]}}, mem5[wa5][23:16]};
                        2'b11: rdata[5] <= {{24{mem5[wa5][31]}}, mem5[wa5][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh5)
                        1'b0: rdata[5] <= {{16{mem5[wa5][15]}}, mem5[wa5][15: 0]};
                        1'b1: rdata[5] <= {{16{mem5[wa5][31]}}, mem5[wa5][31:16]};
                    endcase
                end
                3'b010: rdata[5] <= mem5[wa5];
                3'b100: begin
                    case (ba5)
                        2'b00: rdata[5] <= {24'b0, mem5[wa5][ 7: 0]};
                        2'b01: rdata[5] <= {24'b0, mem5[wa5][15: 8]};
                        2'b10: rdata[5] <= {24'b0, mem5[wa5][23:16]};
                        2'b11: rdata[5] <= {24'b0, mem5[wa5][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh5)
                        1'b0: rdata[5] <= {16'b0, mem5[wa5][15: 0]};
                        1'b1: rdata[5] <= {16'b0, mem5[wa5][31:16]};
                    endcase
                end
                default: rdata[5] <= mem5[wa5];
            endcase
        end
    end
    // Bank 6
    always_ff @(posedge clk) begin
        if (wen[6]) begin
            case (funct3[6])
                3'b000: begin
                    case (ba6)
                        2'b00: mem6[wa6][ 7: 0] <= wdata[6][7:0];
                        2'b01: mem6[wa6][15: 8] <= wdata[6][7:0];
                        2'b10: mem6[wa6][23:16] <= wdata[6][7:0];
                        2'b11: mem6[wa6][31:24] <= wdata[6][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh6)
                        1'b0: mem6[wa6][15: 0] <= wdata[6][15:0];
                        1'b1: mem6[wa6][31:16] <= wdata[6][15:0];
                    endcase
                end
                default: mem6[wa6] <= wdata[6];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[6] <= 32'b0;
        end else if (ren[6]) begin
            case (funct3[6])
                3'b000: begin
                    case (ba6)
                        2'b00: rdata[6] <= {{24{mem6[wa6][ 7]}}, mem6[wa6][ 7: 0]};
                        2'b01: rdata[6] <= {{24{mem6[wa6][15]}}, mem6[wa6][15: 8]};
                        2'b10: rdata[6] <= {{24{mem6[wa6][23]}}, mem6[wa6][23:16]};
                        2'b11: rdata[6] <= {{24{mem6[wa6][31]}}, mem6[wa6][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh6)
                        1'b0: rdata[6] <= {{16{mem6[wa6][15]}}, mem6[wa6][15: 0]};
                        1'b1: rdata[6] <= {{16{mem6[wa6][31]}}, mem6[wa6][31:16]};
                    endcase
                end
                3'b010: rdata[6] <= mem6[wa6];
                3'b100: begin
                    case (ba6)
                        2'b00: rdata[6] <= {24'b0, mem6[wa6][ 7: 0]};
                        2'b01: rdata[6] <= {24'b0, mem6[wa6][15: 8]};
                        2'b10: rdata[6] <= {24'b0, mem6[wa6][23:16]};
                        2'b11: rdata[6] <= {24'b0, mem6[wa6][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh6)
                        1'b0: rdata[6] <= {16'b0, mem6[wa6][15: 0]};
                        1'b1: rdata[6] <= {16'b0, mem6[wa6][31:16]};
                    endcase
                end
                default: rdata[6] <= mem6[wa6];
            endcase
        end
    end
    // Bank 7
    always_ff @(posedge clk) begin
        if (wen[7]) begin
            case (funct3[7])
                3'b000: begin
                    case (ba7)
                        2'b00: mem7[wa7][ 7: 0] <= wdata[7][7:0];
                        2'b01: mem7[wa7][15: 8] <= wdata[7][7:0];
                        2'b10: mem7[wa7][23:16] <= wdata[7][7:0];
                        2'b11: mem7[wa7][31:24] <= wdata[7][7:0];
                    endcase
                end
                3'b001: begin
                    case (bh7)
                        1'b0: mem7[wa7][15: 0] <= wdata[7][15:0];
                        1'b1: mem7[wa7][31:16] <= wdata[7][15:0];
                    endcase
                end
                default: mem7[wa7] <= wdata[7];
            endcase
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rdata[7] <= 32'b0;
        end else if (ren[7]) begin
            case (funct3[7])
                3'b000: begin
                    case (ba7)
                        2'b00: rdata[7] <= {{24{mem7[wa7][ 7]}}, mem7[wa7][ 7: 0]};
                        2'b01: rdata[7] <= {{24{mem7[wa7][15]}}, mem7[wa7][15: 8]};
                        2'b10: rdata[7] <= {{24{mem7[wa7][23]}}, mem7[wa7][23:16]};
                        2'b11: rdata[7] <= {{24{mem7[wa7][31]}}, mem7[wa7][31:24]};
                    endcase
                end
                3'b001: begin
                    case (bh7)
                        1'b0: rdata[7] <= {{16{mem7[wa7][15]}}, mem7[wa7][15: 0]};
                        1'b1: rdata[7] <= {{16{mem7[wa7][31]}}, mem7[wa7][31:16]};
                    endcase
                end
                3'b010: rdata[7] <= mem7[wa7];
                3'b100: begin
                    case (ba7)
                        2'b00: rdata[7] <= {24'b0, mem7[wa7][ 7: 0]};
                        2'b01: rdata[7] <= {24'b0, mem7[wa7][15: 8]};
                        2'b10: rdata[7] <= {24'b0, mem7[wa7][23:16]};
                        2'b11: rdata[7] <= {24'b0, mem7[wa7][31:24]};
                    endcase
                end
                3'b101: begin
                    case (bh7)
                        1'b0: rdata[7] <= {16'b0, mem7[wa7][15: 0]};
                        1'b1: rdata[7] <= {16'b0, mem7[wa7][31:16]};
                    endcase
                end
                default: rdata[7] <= mem7[wa7];
            endcase
        end
    end
endmodule
`default_nettype wire
