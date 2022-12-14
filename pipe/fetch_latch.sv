module fetch_latch #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32,
              A0_ADDRESS=5'b01010,
              A1_ADDRESS=5'b01011,
              T1_ADDRESS=5'b00110,
              T2_ADDRESS=5'b00111

)(
  
     
    input logic [DATA_WIDTH-1:0]     InstrD,    
    input logic [DATA_WIDTH-1:0]     PCF,
    input logic [DATA_WIDTH-1:0]     PCPlus4F,
    output logic [DATA_WIDTH-1:0]    InstrD_Out,    
    output logic [DATA_WIDTH-1:0]    PCF_Out,
    output logic [DATA_WIDTH-1:0]    PCPlus4F_Out,
    output logic [4:0]               RdD,

    input logic                      clk

); 

always_ff @ (posedge clk)
    begin
        InstrD_Out<=InstrD;
        PCF_Out<=PCF;
        PCPlus4F_Out<=PCPlus4F_Out;


    end

assign RdD=InstrD_Out[11:7];
 

endmodule
