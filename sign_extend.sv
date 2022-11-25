module sign_extend(

    input logic[31:0] instr,
    output logic[31:0]  imm_op

);

    wire[6:0] opcode;
    logic[11:0] imm_operand;

    assign opcode = instr[6:0];

    always_comb

        begin

            if(opcode==7'b0010011)

                imm_operand=instr[31:20];

            else if(opcode==7'b1100011)

                imm_operand={instr[31],instr[7],instr[30:25], instr[11:8]};

            else

                imm_operand=instr[31:20];


            if(imm_operand[11])

                imm_op={ {20{1'b1}}, imm_operand};
            
            else

                imm_op={{20{1'b0}}, imm_operand};



        end

endmodule