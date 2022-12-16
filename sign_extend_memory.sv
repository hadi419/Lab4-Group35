module sign_extend_memory(

    input logic sign_extend_sel,
    input logic[7:0] memory_data,
    output logic[31:0] memory_output

);

    always_comb

    begin

        if(sign_extend_sel)

            memory_output={ {24{memory_data[7]}} , memory_data};

        else

            memory_output={ {24{1'b0}} , memory_data};

    end



endmodule

