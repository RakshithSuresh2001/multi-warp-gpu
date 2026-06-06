// lane.sv
// Single execution lane: ALU + regfile read/write interface
// Instantiated 8x in gpu_top, one per SIMT lane
// Receives decoded instruction from decode stage, produces result for writeback

`timescale 1ns/1ps
`default_nettype none

module lane #(
    parameter NUM_WARPS  = 2,
    parameter LANE_ID    = 0        // statically assigned at instantiation
)(
    input  wire        clk,
    input  wire        rst_n,

    // From decode stage
    input  wire        valid,                              // instruction is valid for this lane
    input  wire [$clog2(NUM_WARPS)-1:0] warp_id_in,
    input  wire [31:0] pc_in,
    input  wire [31:0] rs1_data,
    input  wire [31:0] rs2_data,
    input  wire [31:0] imm,
    input  wire [4:0]  rs1_addr,
    input  wire [4:0]  rs2_addr,
    input  wire [4:0]  rd_addr,
    input  wire [3:0]  alu_op,
    input  wire        alu_src,       // 0=rs2, 1=imm
    input  wire        reg_write,
    input  wire        mem_read,
    input  wire        mem_write,
    input  wire        mem_to_reg,
    input  wire        branch,
    input  wire        jal,
    input  wire [2:0]  funct3,

    // Scratchpad interface
    output wire        dmem_ren,
    output wire        dmem_wen,
    output wire [31:0] dmem_addr,
    output wire [31:0] dmem_wdata,
    output wire [2:0]  dmem_funct3,
    input  wire [31:0] dmem_rdata,

    // Writeback to regfile
    output wire        wb_wen,
    output wire [4:0]  wb_rd_addr,
    output wire [31:0] wb_data,
    output wire [$clog2(NUM_WARPS)-1:0] wb_warp_id,

    // Branch/jump result back to warp_scheduler
    output wire        branch_taken,
    output wire [31:0] branch_target,
    output wire [$clog2(NUM_WARPS)-1:0] branch_warp_id
);

    // -------------------------------------------------------
    // ALU op encoding — must match decode.sv
    // -------------------------------------------------------
    localparam ALU_ADD   = 4'd0;
    localparam ALU_SUB   = 4'd1;
    localparam ALU_AND   = 4'd2;
    localparam ALU_OR    = 4'd3;
    localparam ALU_XOR   = 4'd4;
    localparam ALU_SLL   = 4'd5;
    localparam ALU_SRL   = 4'd6;
    localparam ALU_SRA   = 4'd7;
    localparam ALU_SLT   = 4'd8;
    localparam ALU_SLTU  = 4'd9;
    localparam ALU_LUI   = 4'd10;
    localparam ALU_AUIPC = 4'd11;

    // -------------------------------------------------------
    // ALU
    // -------------------------------------------------------
    wire [31:0] alu_a   = pc_in;                           // AUIPC uses PC as A
    wire [31:0] alu_b   = alu_src ? imm : rs2_data;
    wire [31:0] alu_in_a = (alu_op == ALU_AUIPC) ? pc_in : rs1_data;

    reg [31:0] alu_result;

    always_comb begin
        case (alu_op)
            ALU_ADD:   alu_result = alu_in_a + alu_b;
            ALU_SUB:   alu_result = alu_in_a - alu_b;
            ALU_AND:   alu_result = alu_in_a & alu_b;
            ALU_OR:    alu_result = alu_in_a | alu_b;
            ALU_XOR:   alu_result = alu_in_a ^ alu_b;
            ALU_SLL:   alu_result = alu_in_a << alu_b[4:0];
            ALU_SRL:   alu_result = alu_in_a >> alu_b[4:0];
            ALU_SRA:   alu_result = $signed(alu_in_a) >>> alu_b[4:0];
            ALU_SLT:   alu_result = ($signed(alu_in_a) < $signed(alu_b)) ? 32'd1 : 32'd0;
            ALU_SLTU:  alu_result = (alu_in_a < alu_b)                   ? 32'd1 : 32'd0;
            ALU_LUI:   alu_result = alu_b;                 // imm already shifted in decode
            ALU_AUIPC: alu_result = pc_in + alu_b;
            default:   alu_result = 32'b0;
        endcase
    end

    // -------------------------------------------------------
    // Branch evaluation (funct3 encodes condition per RV32I)
    // -------------------------------------------------------
    reg branch_cond;

    always_comb begin
        case (funct3)
            3'b000: branch_cond = (rs1_data == rs2_data);                          // BEQ
            3'b001: branch_cond = (rs1_data != rs2_data);                          // BNE
            3'b100: branch_cond = ($signed(rs1_data) <  $signed(rs2_data));        // BLT
            3'b101: branch_cond = ($signed(rs1_data) >= $signed(rs2_data));        // BGE
            3'b110: branch_cond = (rs1_data <  rs2_data);                          // BLTU
            3'b111: branch_cond = (rs1_data >= rs2_data);                          // BGEU
            default: branch_cond = 1'b0;
        endcase
    end

    // JAL: always taken. Branch: taken if condition true.
    // Branch target = PC + imm (decode already formed imm_b / imm_j correctly)
    // JAL writeback = PC+4 (return address), handled in wb_data below
    assign branch_taken    = valid && branch && (jal || branch_cond);
    assign branch_target   = pc_in + imm;
    assign branch_warp_id  = warp_id_in;

    // -------------------------------------------------------
    // Scratchpad (DMEM) interface
    // -------------------------------------------------------
    assign dmem_ren    = valid && mem_read;
    assign dmem_wen    = valid && mem_write;
    assign dmem_addr   = alu_result;               // effective address from ALU
    assign dmem_wdata  = rs2_data;
    assign dmem_funct3 = funct3;                   // encodes byte/half/word width

    // -------------------------------------------------------
    // Writeback
    // -------------------------------------------------------
    // JAL writes PC+4 as the return address
    wire [31:0] jal_ret  = pc_in + 32'd4;
    wire [31:0] wb_mux   = mem_to_reg ? dmem_rdata :
                           jal        ? jal_ret    :
                                        alu_result;

    assign wb_wen     = valid && reg_write;
    assign wb_rd_addr = rd_addr;
    assign wb_data    = wb_mux;
    assign wb_warp_id = warp_id_in;

endmodule
`default_nettype wire
