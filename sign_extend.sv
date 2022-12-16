module sign_extend(

    input logic[1:0] Immsrc,
    input logic[31:0] instr,
    output logic[31:0]  imm_op

);

    always_comb

        begin

            if(Immsrc==2'b00 | Immsrc==2'b11 )

                imm_op={{20{instr[31]}}, instr[31:20]};

            else if(Immsrc==2'b01)

                imm_op={{20{instr[31]}},instr[31:25], instr[11:7]};


            else

                imm_op={{20{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8]} ;

        end

endmodule
