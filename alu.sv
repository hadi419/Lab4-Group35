module alu #(

    parameter DATA_WIDTH = 32

)(
  
     
    input logic [DATA_WIDTH-1:0]  ALUop1,  
    input logic [DATA_WIDTH-1:0]  ALUop2,  
    input logic                   ALUctrl,
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic                      EQ

); 

    logic [DATA_WIDTH-1:0] add;
    logic [DATA_WIDTH-1:0] sub;
    logic [DATA_WIDTH-1:0] bitwise_and;
    logic [DATA_WIDTH-1:0] bitwise_or;
    logic [DATA_WIDTH-1:0] slt;

    assign add=ALUop1+ALUop2;
    assign sub=ALUop1-ALUop2;
    assign bitwise_or=ALUop1 | ALUop2;
    assign bitwise_and=ALUop2 & ALUop1;
    assign slt =ALUop2 < ALUop1;



    always_comb
        begin

            if(ALUctrl==3'b000)

            begin

                ALUout=add;
                EQ=0;

            end

            else if(ALUctrl==3'b001)

                begin

                    ALUout=sub;
                    if(ALUout=={32{1'b0}})
                        EQ=1;
                    else
                        EQ=0;

                end

            else if(ALUctrl==3'b010)

                begin

                    ALUout=bitwise_and;
      
                end

            else if(ALUctrl==3'b011)

                begin

                    ALUout=bitwise_or;
 
                end

            else if(ALUctrl==3'b101)

                begin

                    ALUout=slt;
     

                end




        end


endmodule






