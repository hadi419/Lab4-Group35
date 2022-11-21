module mux1(input  logic [16:0] inc_PC, branch_PC,
            input  logic        PCsrc,
            output logic [16:0] next_PC);
    assign next_PC = PCsrc ? branch_PC : inc_PC;
endmodule
