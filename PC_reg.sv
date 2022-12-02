module PC_reg #(
 parameter WIDTH = 32
)(
 input  logic                clk,
 input  logic [1:0]          PCsrc,  
 input  logic                rst,  
 input logic [WIDTH-1:0]     PC,
 input logic [WIDTH-1:0]     Immop,
 input logic [WIDTH-1:0]     jump_address,
 output  logic [WIDTH-1:0]    PC_reg_val,
 output  logic [WIDTH-1:0]    inc
); 

logic[WIDTH-1:0] branch_PC;
logic[WIDTH-1:0] inc_PC;
logic[WIDTH-1:0] jump_PC;
logic [WIDTH-1:0]    next_PC;

assign branch_PC = PC+(Immop*4);
assign inc_PC = PC + 32'd4;
assign jump_PC = jump_address*4;

assign inc=inc_PC >> 2;

always_comb
    if(PCsrc==2'b01)
        next_PC=branch_PC;

    else if(PCsrc==2'b00)
        next_PC=inc_PC;
    
    else if(PCsrc==2'b10)
        next_PC=jump_PC;
    

always_ff @ (posedge clk, posedge rst)
 if (rst)
    PC_reg_val <= 32'b0;
 else
    PC_reg_val <= next_PC;

endmodule
