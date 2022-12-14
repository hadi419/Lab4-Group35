rm -rf obj_dir
rm -f RISC_V_top_ppl.vcd

verilator -Wall --cc --trace RISC_V_top_ppl.sv --exe RISC_V_top_tb.cpp

make -j -C obj_dir/ -f VRISC_V_top_ppl.mk VRISC_V_top_ppl

obj_dir/VRISC_V_top_ppl
