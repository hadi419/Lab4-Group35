module mux3(input logic[31:0] alu_out, input logic[31:0] mem_out, input mux3sel, output logic[31:0] reg_write_data);

    always_comb

        if (mux3sel)
            reg_write_data=mem_out;
        else
            reg_write_data=alu_out;

endmodule

