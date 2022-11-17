module Alu #(

    parameter DATA_WIDTH = 32

)(
  
     
    input logic [DATA_WIDTH-1:0]  ALUop1,  
    input logic [DATA_WIDTH-1:0]  ALUop2,  
    input logic                   ALUctrl,
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic                      EQ;

); 


wire [DATA_WIDTH-1:0] ADD,SUB;

assign ADD = Aluop1 + Aluop2;
assign SUB = Aluop1 - Aluop2;

ALUout = ALUctrl == 00? ADD : ALUctrl ==01? SUB;

endmodule






