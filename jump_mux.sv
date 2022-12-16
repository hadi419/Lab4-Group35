module jump_mux(input logic[31:0] upper_immediate, input logic[31:0] inc_PC, input logic[31:0] data_output, input logic[1:0] jump_mux_sel, output logic[31:0] reg_write_data);

    always_comb

        if (jump_mux_sel==2'b01)
            reg_write_data=inc_PC;

        else if(jump_mux_sel==2'b00)
            reg_write_data=data_output;

        else
            reg_write_data=upper_immediate;



endmodule
