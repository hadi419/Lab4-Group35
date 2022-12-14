module RISC_V_top_ppl
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
logic [1:0] ResultSrcD;
logic [2:0] ALUControlD;
logic [1:0] ImmSrcD;
logic [1:0] PCSrcD;

logic RegWriteD;
logic MemWriteD;
logic ALUSrcD;
logic [4:0] RdD;
logic [31:0] PCD;
logic [31:0] PCPlus4D;



logic[31:0] ImmExtD;



logic [4:0] RdW;
logic ResultW;
logic [31:0] RD1;
logic [31:0] RD2;



logic [31:0] RD2E;
logic [31:0] ImmExtE;
logic [31:0] SrcBE;



logic [31:0] ALU_output;
logic [31:0] RD1E;



assign result=ALU_output;
assign pc=instruction_address;



logic [31:0] data_output;
logic mem_write;
logic mux3_sel;
logic [31:0] mem_out;
logic [31:0] reg_write_data;



logic jump_mux_sel;
logic [31:0] inc_PC;



logic [31:0] AlUResultM;
logic [1:0] ResultSrcW;



logic [31:0] InstrD;
logic [31:0] PCF;
logic [31:0] PCPlus4F;
logic [31:0] InstrD_Out;
logic [31:0] PCF_Out;
logic [31:0] PCPlus4F_Out;





logic RegWriteE;
logic [1:0]ResultSrcE;
logic MemWriteE;
logic JumpE;
logic BranchE;
logic [2:0] ALUControlE;
logic ALUSrcE;
logic [4:0] RdE;
logic [31:0] PCE;
logic [31:0] PCPlus4E;
logic PCSrcE;
logic ZeroE;
logic [31:0] PCTargetE;



logic RegWriteM;
logic [1:0] ResultSrcM;
logic MemWriteM;
logic [4:0] RdM;
logic [31:0] PCPlus4M;
logic [31:0] WriteDataM;



logic RegWriteW;
logic [31:0] PCPlus4W;
logic [31:0] RD;
logic [31:0] ReadDataW;
logic [31:0] AlUResultW;




PC_reg ProgramCounter (

    .PC(instruction_address),
    .clk(clk),
    .rst(rst),
    .PCsrc(PCSrcE),
    .PC_reg_val(instruction_address),
    .Immop(imm_op),
    .jump_address(ALU_output),
    .inc(inc_PC),
    .inc_PC(inc),
    .PCE(PCE),
    .ImmExtE(ImmExtE)

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
    .instr(InstrD),
    .Regwrite(RegWriteD),
    .ALUctrl(ALUControlD),
    .ALUsrc(ALUsrcD),
    .Immsrc(ImmSrcD),
    .PCsrc(PCSrcD),
    .Memwrite(MemWriteD),
    .MUX3Sel(mux3_sel),
    .jump_mux_sel(jump_mux_sel),
    .ResultSrc(ResultSrcD)

);

sign_extend sign(

    .Immsrc(ImmSrcD),
    .instr(InstrD),
    .imm_op(ImmExtD)

);

register Reg_File(

    .AD1(rs1_addr),
    .AD2(rs2_addr),
    .AD3(RdW),
    .WE3(RegWriteW),
    .WD3(ResultW),
    .RD1(RD1),
    .RD2(RD2),
    .clk(clk),
    .a0(a0),
    .a1(a1),
    .t1(t1),
    .t2(t2)

);

alu_mux mux(

    .regOp2(RD2E),
    .immop(ImmExtE),
    .ALUop2(SrcBE),
    .Alusrc(ALUSrcE)

);

alu alu_block(

    .ALUctrl(ALUControlE),
    .EQ(is_equal),
    .ALUop1(RD1E),
    .ALUop2(SrcBE),
    .ALUout(ALU_output)

);

ram data_ram(

    .clk(clk),
    .addr(AlUResultM),
    .din(WriteDataM),
    .dout(RD),
    .wr_en(MemWriteM)

);

mux3 resultmux(

    .AlUResultW(AlUResultW),
    .ReadDataW(ReadDataW),
    .PCPlus4W(PCPlus4W),
    .mux3sel(ResultSrcW),
    .reg_write_data(ResultW)

);

jump_mux jump_multiplexer(

    .inc_PC(inc_PC),
    .data_output(data_output),
    .reg_write_data(reg_write_data),
    .jump_mux_sel(jump_mux_sel)

);

memory_latch mlatch(
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .AlUResultM(AlUResultM),
    .RD(RD),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),
    .RegWriteW(RegWriteW),
    .ResultSrcW(ResultSrcW),
    .AlUResultW(AlUResultW),
    .ReadDataW(ReadDataW),
    .RdW(RdW),
    .PCPlus4W(PCPlus4W),
    .clk(clk)
);

execute_latch elatch(
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .ALU_in(ALU_output),
    .WriteDataE(RD2E),
    .RdE(RdE),
    .PCPlus4E(PCPlus4E),
    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .MemWriteM(MemWriteM),
    .AlUResultM(AlUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM),
    .PCPlus4M(PCPlus4M),
    .clk(clk)
);

decode_latch dlatch(
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .PCSrcD(PCSrcD),
    .instrD(InstrD),
    .ALUControlD(ALUControlD),
    .ALUSrcD(ALUSrcD),
    .RD1(RD1),
    .RD2(RD2),
    .PCD(PCD),
    .RdD(RdD),
    .ExtImmD(ImmExtD),
    .PCPlus4D(PCPlus4D),
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .PCSrcE(PCSrcE),
    .ALUControlE(ALUControlE),
    .ALUSrcE(ALUSrcE),
    .RD1E(RD1E),
    .RD2E(RD2E),
    .PCE(PCE),
    .RdE(RdE),
    .ExtImmE(ImmExtE),
    .PCPlus4E(PCPlus4E),
    .clk(clk)
);

fetch_latch flatch(
    .InstrD(instr),
    .PCF(instruction_address),
    .PCPlus4F(inc),
    .InstrD_Out(InstrD),
    .PCF_Out(PCD),
    .PCPlus4F_Out(PCPlus4D),
    .RdD(RdD),
    .clk(clk)
);




endmodule

