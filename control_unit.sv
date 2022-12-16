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
     output logic [1:0] jump_mux_sel,
     output logic sign_extend_sel,
     output logic [31:0] upper_immediate


     
    );

    wire[6:0] opcode;
    wire[2:0] funct3;
    wire[6:0] funct7;
   
    logic[1:0] ALUop;

    assign upper_immediate={{12{1'b0}} , instr[31:12]};

    

    assign funct3=instr[14:12];
    assign funct7=instr[31:25];

    assign opcode = instr[6:0];

   
     always_comb
        begin


            if(opcode==7'd51)

                begin

                    ALUsrc=0;
                    Regwrite=1;
                    ALUop=2'b10;
                    PCsrc=2'b00;
                    MUX3Sel=0;
                    Immsrc=2'b00;
                    Memwrite=0;
                    jump_mux_sel=2'b00;
                    sign_extend_sel=0;

                end


            else if(opcode==7'd3)

                begin

                    ALUsrc=1;
                    Regwrite=1;
                    ALUop=2'b00;
                    MUX3Sel=1;
                    Immsrc=2'b11;
                    Memwrite=0;
                    PCsrc=2'b00;
                    jump_mux_sel=2'b00;
                    if(funct3==3'b000)
                        sign_extend_sel=1;
                    else
                        sign_extend_sel=0;


                end


            else if(opcode==7'd19)

                begin

                    ALUsrc=1;
                    Regwrite=1;
                    ALUop=2'b10;
                    PCsrc=2'b00;
                    MUX3Sel=0;
                    Immsrc=2'b00;
                    Memwrite=0;
                    jump_mux_sel=2'b00;
                    sign_extend_sel=0;

                end

            else if(opcode==7'd35)

                begin

                    ALUsrc=1;
                    Regwrite=0;
                    ALUop=2'b00;
                    PCsrc=2'b00;
                    MUX3Sel=0;
                    Immsrc=2'b01;
                    Memwrite=1;
                    jump_mux_sel=2'b00;
                    sign_extend_sel=0;

                end

            else if(opcode==7'd103)

              
                    begin

                        ALUsrc=1;
                        Regwrite=1;
                        ALUop=2'b00;
                        MUX3Sel=0;
                        Immsrc=2'b00;

                        PCsrc=2'b10;
                        jump_mux_sel=2'b01;

                        Memwrite=0;
                        sign_extend_sel=0;



                    end
            


                else if(opcode==7'd99)

                    begin

                        ALUsrc=0;
                        Regwrite=0;
                        ALUop=2'b01;
                        MUX3Sel=0;
                        Immsrc=2'b10;

                        if(eq)
                            PCsrc=2'b00;
                        else
                            PCsrc=2'b01;

                        Memwrite=0;
                        jump_mux_sel=2'b00;
                        sign_extend_sel=0;

                    end

                else

                    begin

                        ALUsrc=0;
                        Regwrite=1;
                        ALUop=2'b00;
                        MUX3Sel=0;
                        Immsrc=2'b00;

                        
                        PCsrc=2'b00;
                      
                        Memwrite=0;
                        jump_mux_sel=2'b10;
                        sign_extend_sel=0;

                    end



                if(ALUop==2'b00)
                    ALUctrl=3'b000;

                else if(ALUop==2'b01)
                    ALUctrl=3'b001;

                else if(ALUop==2'b10)

                    if (funct3==3'b111)

                        ALUctrl=3'b010;





                    else if (funct3==3'b110)

                        ALUctrl=3'b011;





                    else if (funct3==3'b010)

                        ALUctrl=3'b100;





                    else if (funct3==3'b100)

                        ALUctrl=3'b101;





                    else if (funct3==3'b001)

                        ALUctrl=3'b110;





                    else if (funct3==3'b101)

                        ALUctrl=3'b111;




                    else if (funct3==3'b000)

                        if(opcode[1]==1'b0)

                            if(funct7[5])
                                ALUctrl=3'b001;
                            else
                                ALUctrl=3'b000;

                        else

                            ALUctrl=3'b000;

                    
                    else

                        ALUctrl=3'b000;

                else

                    ALUctrl=3'b000;


                
   
        end

endmodule

