module mux3(input logic[31:0] AlUResultW,
            input logic[31:0] PCPlus4W, 
            input logic[31:0] ReadDataW,
            input logic[1:0]  mux3sel, 
            output logic[31:0] reg_write_data);

    always_comb

        if (mux3sel==2'b00)
            reg_write_data=AlUResultW;
        else if (mux3sel==2'b01)
            reg_write_data=ReadDataW;
        else if (mux3sel==2'b10)
            reg_write_data=PCPlus4W;

endmodule
