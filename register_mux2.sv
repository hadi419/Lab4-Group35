module mux2(
    input logic [31:0] regOp2,Immop
    input logic  ALUsrc,
    output logic [31:0] Aluop1);


    assign Aluop1 = ALUsrc ? Immop : regOp2;
endmodule

