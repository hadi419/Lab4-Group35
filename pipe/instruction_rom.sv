module instruction_rom #(

    parameter INSTRUCTION_ADDRESS_WIDTH=8,
              DATA_ADDRESS_WIDTH=5,
              DATA_WIDTH=8
)(

    input logic [INSTRUCTION_ADDRESS_WIDTH-1:0] addr,
    output logic [4*DATA_WIDTH-1:0] dout,


    output logic [DATA_ADDRESS_WIDTH-1:0] rd,
    output logic [DATA_ADDRESS_WIDTH-1:0] rs1,
    output logic [DATA_ADDRESS_WIDTH-1:0] rs2

);

    logic [DATA_WIDTH-1:0] rom_array [2**INSTRUCTION_ADDRESS_WIDTH-1:0];

    initial begin

        $readmemh("instruction.mem", rom_array);

    end;

    assign dout = {rom_array[addr], rom_array[addr+1], rom_array[addr+2], rom_array[addr+3]};

    assign rd = {rom_array[addr+2][3], rom_array[addr+2][2], rom_array[addr+2][1], rom_array[addr+2][0],rom_array[addr+3][7]};

    assign rs1 = {rom_array[addr+1][3],rom_array[addr+1][2],rom_array[addr+1][1], rom_array[addr+1][0], rom_array[addr+2][7]};

    assign rs2 = {rom_array[addr][0],rom_array[addr+1][7],rom_array[addr+1][6],rom_array[addr+1][5],rom_array[addr+1][4]};


 
endmodule
