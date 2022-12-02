rm -rf obj_dir
rm -f RISC_V_top.vcd

verilator -Wall --cc --trace RISC_V_top.sv --exe RISC_V_top_tb.cpp

make -j -C obj_dir/ -f VRISC_V_top.mk VRISC_V_top

obj_dir/VRISC_V_top
