module memory_latch #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32,
              A0_ADDRESS=5'b01010,
              A1_ADDRESS=5'b01011,
              T1_ADDRESS=5'b00110,
              T2_ADDRESS=5'b00111

)(
  
     
    input logic     RegWriteM, 
    input logic [1:0] ResultSrcM,
    input logic [DATA_WIDTH-1:0] AlUResultM,
    input logic [DATA_WIDTH-1:0] RD,
    input logic [4:0] RdM,
    input logic [DATA_WIDTH-1:0] PCPlus4M,
    
    output logic     RegWriteW, 
    output logic [1:0] ResultSrcW,
    output logic [DATA_WIDTH-1:0] AlUResultW,
    output logic [DATA_WIDTH-1:0] ReadDataW,
    output logic [4:0] RdW,
    output logic [DATA_WIDTH-1:0] PCPlus4W,

    input logic                      clk

); 
always_ff @ (posedge clk)
    begin
        

        RegWriteW<=RegWriteM;
        ResultSrcW<=ResultSrcM;
        AlUResultW<=AlUResultM;
        ReadDataW<=RD;
        RdW<=RdM;
        PCPlus4W<=PCPlus4M;

    end

endmodule
