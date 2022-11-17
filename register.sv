module register_file #(
    parameter ADDRESS_WIDTH = 5
    parameter DATA_WIDTH = 32

)(
  
     
    input logic [ADDRESS_WIDTH-1:0]  AD1,    
    input logic [ADDRESS_WIDTH-1:0]  AD2,   
    input logic [ADDRESS_WIDTH-1:0]  AD3,
    input logic                      WE3,
    input logic                      WD3
    output logic [DATA_WIDTH-1:0] RD1,
    output logic [DATA_WIDTH-1:0] RD2,
    output logic [DATA_WIDTH-1:0] a0,
    input logic                      clk;

); 

logic [DATA_WIDTH-1:0] register_file_array[2**ADDRESS_WIDTH-1:0];

always_ff @ (posedge clk) begin
    if (WE3==1'b1)
        register_file_array[AD3]<=WD3;
    if (WE3==1'b0)
        RD1 <= register_file_array[AD1];
        RD2 <= register_file_array[AD2];

endmodule



module mux2(
    input logic [31:0] regOp2,Immop
    input logic  ALUsrc,
    output logic [31:0] Aluop1);


    assign Aluop1 = s ? regOp2 : Immop;
endmodule





)





