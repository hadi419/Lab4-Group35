module RISC_V_top
(
    input logic clk,
    input logic rst,
    output logic[31:0] a0,
    output logic[31:0] a1,
    output logic[31:0] t1,
    output logic[31:0] result,
    output logic[4:0] pc

);

logic [4:0] instruction_address;
logic [31:0] instr;
logic [4:0]  rs1_addr;
logic [4:0]  rs2_addr;
logic [4:0]  rd_addr;



logic is_equal;
logic Reg_Write;
logic [2:0] ALU_ctrl;
logic ALU_src;
logic Imm_src;
logic PC_src;

logic[31:0] imm_op;

logic[31:0] ALU_output;
logic[31:0] ALU_operand1;
logic[31:0] ALU_operand2;
logic[31:0] register_operand2;


assign result=ALU_output;
assign pc=instruction_address;





PC_reg ProgramCounter (

    .PC(instruction_address),
    .clk(clk),
    .rst(rst),
    .PCsrc(PC_src),
    .PC_reg_val(instruction_address),
    .Immop(imm_op)

);

instruction_rom rom(

    .addr(instruction_address),
    .dout(instr),
    .rd(rd_addr),
    .rs1(rs1_addr),
    .rs2(rs2_addr)

);

control_unit control(

    .eq(is_equal),
    .instr(instr),
    .Regwrite(Reg_Write),
    .ALUctrl(ALU_ctrl),
    .ALUsrc(ALU_src),
    .Immsrc(Imm_src),
    .PCsrc(PC_src)

);

sign_extend sign(

    .instr(instr),
    .imm_op(imm_op)

);

register Reg_File(

    .AD1(rs1_addr),
    .AD2(rs2_addr),
    .AD3(rd_addr),
    .WE3(Reg_Write),
    .WD3(ALU_output),
    .RD1(ALU_operand1),
    .RD2(register_operand2),
    .clk(clk),
    .a0(a0),
    .a1(a1),
    .t1(t1)

);

alu_mux mux(

    .regOp2(register_operand2),
    .immop(imm_op),
    .ALUop2(ALU_operand2),
    .Alusrc(ALU_src)

);

alu alu_block(

    .ALUctrl(ALU_ctrl),
    .EQ(is_equal),
    .ALUop1(ALU_operand1),
    .ALUop2(ALU_operand2),
    .ALUout(ALU_output)

);

endmodule