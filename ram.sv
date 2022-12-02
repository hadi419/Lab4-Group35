module ram #(

    parameter ADDRESS_WIDTH=8,
    parameter DATA_WIDTH=8
)(

    input logic                               clk,
    input logic                               wr_en,
    input logic [ADDRESS_WIDTH-1:0]           addr,
    input logic [DATA_WIDTH-1:0]              din,
    output logic [DATA_WIDTH-1:0]             dout

);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

initial begin

        $display("Loading ram.");
        $readmemh("sinerom.mem", ram_array);

end;


assign dout=ram_array[addr];


always_ff @(posedge clk) begin

    if (wr_en== 1'b1)
        ram_array[addr]<=din;


end


endmodule