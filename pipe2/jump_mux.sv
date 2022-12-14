module jump_mux(input logic[31:0] inc_PC, input logic[31:0] data_output, jump_mux_sel, output logic[31:0] reg_write_data);

    always_comb

        if (jump_mux_sel)
            reg_write_data=inc_PC;
        else
            reg_write_data=data_output;

endmodule
