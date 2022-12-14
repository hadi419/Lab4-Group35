module execute_latch #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32,
              A0_ADDRESS=5'b01010,
              A1_ADDRESS=5'b01011,
              T1_ADDRESS=5'b00110,
              T2_ADDRESS=5'b00111

)(
           
    input logic     RegWriteE, 
    input logic [1:0] ResultSrcE,
    input logic     MemWriteE, 
    input logic [DATA_WIDTH-1:0] ALU_in,
    input logic [DATA_WIDTH-1:0] WriteDataE,
    input logic [4:0] RdE,
    input logic [DATA_WIDTH-1:0] PCPlus4E,

    output logic     RegWriteM, 
    output logic [1:0] ResultSrcM,
    output logic     MemWriteM, 
    output logic [DATA_WIDTH-1:0] AlUResultM,
    output logic [DATA_WIDTH-1:0] WriteDataM,
    output logic [4:0] RdM,
    output logic [DATA_WIDTH-1:0] PCPlus4M,


    input logic                      clk  


);


always_ff @ (posedge clk)
    begin
        
        RegWriteM<=RegWriteE;
        ResultSrcM<=ResultSrcE;
        MemWriteM<=MemWriteE;
        AlUResultM<=ALU_in;
        WriteDataM<=WriteDataE;
        RdM<=RdE;
        PCPlus4M<=PCPlus4E;




    end

endmodule

