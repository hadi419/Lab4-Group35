module decode_latch #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32,
              A0_ADDRESS=5'b01010,
              A1_ADDRESS=5'b01011,
              T1_ADDRESS=5'b00110,
              T2_ADDRESS=5'b00111

)(
  
     
    input logic     RegWriteD, 
    input logic [1:0] ResultSrcD,
    input logic     MemWriteD, 
    input logic[2:0]ALUControlD,
    input logic     ALUSrcD, 
   
    input logic [DATA_WIDTH-1:0] RD1,
    input logic [DATA_WIDTH-1:0] RD2,
    input logic [DATA_WIDTH-1:0] PCD,
    input logic [4:0] RdD,
    input logic [31:0] instrD,

    input logic [DATA_WIDTH-1:0] ExtImmD,
    input logic [DATA_WIDTH-1:0] PCPlus4D,
    input logic [1:0] PCSrcD,


    output logic     RegWriteE, 
    output logic [1:0] ResultSrcE,
    output logic     MemWriteE, 
    output logic[2:0]ALUControlE,
    output logic     ALUSrcE, 
    output logic [DATA_WIDTH-1:0] RD1E,
    output logic [DATA_WIDTH-1:0] RD2E,
    output logic [DATA_WIDTH-1:0] PCE,
    output logic [4:0] RdE,
    output logic [DATA_WIDTH-1:0] ExtImmE,
    output logic [DATA_WIDTH-1:0] PCPlus4E,
    output logic [1:0] PCSrcE,
    input logic                      clk

); 

//assign RdD=instrD[11:7];


always_ff @ (posedge clk)
    begin
        RegWriteE<=RegWriteD;
        ResultSrcE<=ResultSrcD;
        MemWriteE<=MemWriteD;
        ALUControlE<=ALUControlD;
        ALUSrcE<=ALUSrcD;
        RD1E<=RD1;
        RD2E<=RD2;
        PCE<=PCD;
        RdE<=RdD;
        ExtImmE<=ExtImmD;
        PCPlus4E<=PCPlus4D;
        PCSrcE<=PCSrcD;




    end

endmodule
