module RISC_V_top
(
    input logic clk,
    input logic rst,
    output logic[31:0] a0,
    output logic[31:0] a1,
    output logic[31:0] t1,
    output logic[31:0] t2,
    output logic[31:0] result,
    output logic[31:0] pc

);

logic [31:0] instruction_address;
logic [31:0] instr;
logic [4:0]  rs1_addr;
logic [4:0]  rs2_addr;
logic [4:0]  rd_addr;



logic is_equal;
logic Reg_Write;
logic [2:0] ALU_ctrl;
logic ALU_src;
logic [1:0] Imm_src;
logic [1:0] PC_src;


logic[31:0] imm_op;

logic[31:0] ALU_output;
logic[31:0] ALU_operand1;
logic[31:0] ALU_operand2;
logic[31:0] register_operand2;



assign result=ALU_output;
assign pc=instruction_address;

logic [31:0] data_output;
logic mem_write;
logic mux3_sel;
logic [31:0] mem_out;
logic [31:0] reg_write_data;

logic jump_mux_sel;
logic [31:0] inc_PC;


PC_reg ProgramCounter (

    .PC(instruction_address),
    .clk(clk),
    .rst(rst),
    .PCsrc(PC_src),
    .PC_reg_val(instruction_address),
    .Immop(imm_op),
    .jump_address(ALU_output),
    .inc(inc_PC)

);

instruction_rom instr_rom(

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
    .PCsrc(PC_src),
    .Memwrite(mem_write),
    .MUX3Sel(mux3_sel),
    .jump_mux_sel(jump_mux_sel)

);

sign_extend sign(

    .Immsrc(Imm_src),
    .instr(instr),
    .imm_op(imm_op)

);

register Reg_File(

    .AD1(rs1_addr),
    .AD2(rs2_addr),
    .AD3(rd_addr),
    .WE3(Reg_Write),
    .WD3(reg_write_data),
    .RD1(ALU_operand1),
    .RD2(register_operand2),
    .clk(clk),
    .a0(a0),
    .a1(a1),
    .t1(t1),
    .t2(t2)

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

ram data_ram(

    .clk(clk),
    .addr(ALU_output),
    .din(register_operand2),
    .dout(mem_out),
    .wr_en(mem_write)

);

mux3 result_mux(

    .alu_out(ALU_output),
    .mem_out(mem_out),
    .mux3sel(mux3_sel),
    .reg_write_data(data_output)

);

jump_mux jump_multiplexer(

    .inc_PC(inc_PC),
    .data_output(data_output),
    .reg_write_data(reg_write_data),
    .jump_mux_sel(jump_mux_sel)

);


endmodule

