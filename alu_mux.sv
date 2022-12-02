module alu_mux(input logic[31:0] regOp2, input logic[31:0] immop, input Alusrc, output logic[31:0] ALUop2);

    always_comb

        if (Alusrc)
            ALUop2=immop;
        else
            ALUop2=regOp2;

endmodule