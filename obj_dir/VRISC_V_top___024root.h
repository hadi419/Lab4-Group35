// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISC_V_top.h for the primary calling header

#ifndef VERILATED_VRISC_V_TOP___024ROOT_H_
#define VERILATED_VRISC_V_TOP___024ROOT_H_  // guard

#include "verilated.h"

class VRISC_V_top__Syms;

class VRISC_V_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ RISC_V_top__DOT__is_equal;
    CData/*2:0*/ RISC_V_top__DOT__ALU_ctrl;
    CData/*1:0*/ RISC_V_top__DOT__Imm_src;
    CData/*1:0*/ RISC_V_top__DOT__PC_src;
    CData/*1:0*/ RISC_V_top__DOT__jump_mux_sel;
    CData/*1:0*/ RISC_V_top__DOT__control__DOT__ALUop;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    VL_OUT(a1,31,0);
    VL_OUT(t3,31,0);
    IData/*31:0*/ RISC_V_top__DOT__instr;
    IData/*31:0*/ RISC_V_top__DOT__imm_op;
    IData/*31:0*/ RISC_V_top__DOT__ALU_output;
    IData/*31:0*/ RISC_V_top__DOT__ALU_operand1;
    IData/*31:0*/ RISC_V_top__DOT__ALU_operand2;
    IData/*31:0*/ RISC_V_top__DOT__register_operand2;
    IData/*31:0*/ RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val;
    IData/*31:0*/ RISC_V_top__DOT__ProgramCounter__DOT__next_PC;
    IData/*31:0*/ RISC_V_top__DOT__alu_block__DOT__add;
    VlUnpacked<CData/*7:0*/, 256> RISC_V_top__DOT__instr_rom__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> RISC_V_top__DOT__Reg_File__DOT__register_file_array;
    VlUnpacked<CData/*7:0*/, 262144> RISC_V_top__DOT__data_ram__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRISC_V_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISC_V_top___024root(VRISC_V_top__Syms* symsp, const char* name);
    ~VRISC_V_top___024root();
    VL_UNCOPYABLE(VRISC_V_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
