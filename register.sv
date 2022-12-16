module register #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32,
              A0_ADDRESS=5'b01010,
              A1_ADDRESS=5'b01011,

              T3_ADDRESS=5'b11100
    

)(
  
     
    input logic [ADDRESS_WIDTH-1:0]  AD1,    
    input logic [ADDRESS_WIDTH-1:0]  AD2,   
    input logic [ADDRESS_WIDTH-1:0]  AD3,
    input logic                      WE3,
    input logic [DATA_WIDTH-1:0]     WD3,
    output logic [DATA_WIDTH-1:0] RD1,
    output logic [DATA_WIDTH-1:0] RD2,
    output logic [DATA_WIDTH-1:0] a0,
    output logic [DATA_WIDTH-1:0] a1,
    output logic [DATA_WIDTH-1:0] t3,
    input logic                      clk

); 

logic [DATA_WIDTH-1:0] register_file_array[2**ADDRESS_WIDTH-1:0];

    assign RD1 = register_file_array[AD1];
    assign    RD2 = register_file_array[AD2];
    assign    a0 = register_file_array[A0_ADDRESS];
    assign    a1 = register_file_array[A1_ADDRESS];
    assign    t3 = register_file_array[T3_ADDRESS];


always_ff @ (posedge clk)
    begin
        if (WE3==1'b1)
            register_file_array[AD3]<=WD3;

    end

endmodule

