module control_unit
(
     input logic eq,
     input logic[31:0] instr, 
     output logic Regwrite, 
     output logic[2:0] ALUctrl, 
     output logic ALUsrc, 
     output logic[1:0] Immsrc, 
     output logic[1:0] PCsrc,
     output logic MUX3Sel,
     output logic Memwrite,
     output logic jump_mux_sel

     
    );

    wire[2:0] opcode;
    wire[2:0] funct3;
    wire[6:0] funct7;
    wire[3:0] ALU_ctrl_input;
    wire is_jump;

    

    assign funct3=instr[14:12];
    assign funct7=instr[31:25];
    assign is_jump=instr[2];

    assign opcode = instr[6:4];
    assign ALU_ctrl_input={funct3, funct7[5]};

    logic[2:0] intermediate_ALU_ctrl;


   
     always_comb
        begin

            if(ALU_ctrl_input==4'b0000)
                intermediate_ALU_ctrl=3'b000;

            else if(ALU_ctrl_input==4'b0001)
                intermediate_ALU_ctrl=3'b001;

            else if(ALU_ctrl_input==4'b1110)
                intermediate_ALU_ctrl=3'b010;

            else if(ALU_ctrl_input==4'b1100)
                intermediate_ALU_ctrl=3'b011;

            else if(ALU_ctrl_input==4'b0100)
                intermediate_ALU_ctrl=3'b101;

            else
                intermediate_ALU_ctrl=3'b000;

            


            if(opcode==3'b011)

                begin

                    ALUsrc=0;
                    Regwrite=1;
                    ALUctrl=intermediate_ALU_ctrl;
                    PCsrc=2'b00;
                    MUX3Sel=0;
                    Immsrc=2'b00;
                    Memwrite=0;
                    jump_mux_sel=0;

                end


            else if(opcode==3'b000)

                begin

                    ALUsrc=1;
                    Regwrite=1;
                    ALUctrl=3'b000;
                    MUX3Sel=1;
                    Immsrc=2'b00;
                    Memwrite=0;
                    PCsrc=2'b00;
                    jump_mux_sel=0;

                end


            else if(opcode==3'b010)

                begin

                    ALUsrc=1;
                    Regwrite=0;
                    ALUctrl=3'b000;
                    PCsrc=2'b00;
                    MUX3Sel=1;
                    Immsrc=2'b01;
                    Memwrite=1;
                    jump_mux_sel=0;

                end

            else if(opcode==3'b001)

                begin

                    ALUsrc=1;
                    Regwrite=1;
                    ALUctrl=intermediate_ALU_ctrl;
                    PCsrc=2'b00;
                    MUX3Sel=0;
                    Immsrc=2'b11;
                    Memwrite=0;
                    jump_mux_sel=0;

                end

            else

                if(is_jump==1'b1) 

                    begin

                        ALUsrc=1;
                        Regwrite=1;
                        ALUctrl=3'b000;
                        MUX3Sel=0;
                        Immsrc=2'b00;

                        PCsrc=2'b10;
                        jump_mux_sel=1;

                        Memwrite=0;



                    end
            


                else

                    begin

                        ALUsrc=0;
                        Regwrite=0;
                        ALUctrl=3'b001;
                        MUX3Sel=0;
                        Immsrc=2'b10;

                        if(eq)
                            PCsrc=2'b00;
                        else
                            PCsrc=2'b01;

                        Memwrite=0;
                        jump_mux_sel=0;



                end
            
   
        end

endmodule

