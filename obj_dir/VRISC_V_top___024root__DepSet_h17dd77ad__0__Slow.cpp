// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_top.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_top___024root.h"

VL_ATTR_COLD void VRISC_V_top___024root___initial__TOP__0(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb2c2e739__0;
    // Body
    VL_WRITEF("Loading ram.\n");
    VL_READMEM_N(true, 8, 262144, 0, std::string{"data.mem"}
                 ,  &(vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array)
                 , 0, ~0ULL);
    __Vtemp_hb2c2e739__0[0U] = 0x2e6d656dU;
    __Vtemp_hb2c2e739__0[1U] = 0x74696f6eU;
    __Vtemp_hb2c2e739__0[2U] = 0x74727563U;
    __Vtemp_hb2c2e739__0[3U] = 0x696e73U;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hb2c2e739__0)
                 ,  &(vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VRISC_V_top___024root___settle__TOP__0(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [0xaU];
    vlSelf->a1 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [0xbU];
    vlSelf->t3 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [0x1cU];
    vlSelf->RISC_V_top__DOT__ALU_operand1 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [((0x1eU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                    [(0xffU & ((IData)(1U) + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                    << 1U)) | (1U & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                     [(0xffU & ((IData)(2U) 
                                                + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                     >> 7U)))];
    vlSelf->RISC_V_top__DOT__register_operand2 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [((0x10U & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                    [(0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)] 
                    << 4U)) | (0xfU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                       [(0xffU & ((IData)(1U) 
                                                  + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                       >> 4U)))];
    vlSelf->RISC_V_top__DOT__instr = ((vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                       [(0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)] 
                                       << 0x18U) | 
                                      ((vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                        [(0xffU & ((IData)(1U) 
                                                   + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                        << 0x10U) | 
                                       ((vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                         [(0xffU & 
                                           ((IData)(2U) 
                                            + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                         << 8U) | vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                        [(0xffU & ((IData)(3U) 
                                                   + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))])));
    if ((0x33U == (0x7fU & vlSelf->RISC_V_top__DOT__instr))) {
        vlSelf->RISC_V_top__DOT__jump_mux_sel = 0U;
        vlSelf->RISC_V_top__DOT__control__DOT__ALUop = 2U;
    } else if ((3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr))) {
        vlSelf->RISC_V_top__DOT__jump_mux_sel = 0U;
        vlSelf->RISC_V_top__DOT__control__DOT__ALUop = 0U;
    } else if ((0x13U == (0x7fU & vlSelf->RISC_V_top__DOT__instr))) {
        vlSelf->RISC_V_top__DOT__jump_mux_sel = 0U;
        vlSelf->RISC_V_top__DOT__control__DOT__ALUop = 2U;
    } else if ((0x23U == (0x7fU & vlSelf->RISC_V_top__DOT__instr))) {
        vlSelf->RISC_V_top__DOT__jump_mux_sel = 0U;
        vlSelf->RISC_V_top__DOT__control__DOT__ALUop = 0U;
    } else if ((0x67U == (0x7fU & vlSelf->RISC_V_top__DOT__instr))) {
        vlSelf->RISC_V_top__DOT__jump_mux_sel = 1U;
        vlSelf->RISC_V_top__DOT__control__DOT__ALUop = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->RISC_V_top__DOT__instr))) {
        vlSelf->RISC_V_top__DOT__jump_mux_sel = 0U;
        vlSelf->RISC_V_top__DOT__control__DOT__ALUop = 1U;
    } else {
        vlSelf->RISC_V_top__DOT__jump_mux_sel = 2U;
        vlSelf->RISC_V_top__DOT__control__DOT__ALUop = 0U;
    }
    vlSelf->RISC_V_top__DOT__ALU_ctrl = ((0U == (IData)(vlSelf->RISC_V_top__DOT__control__DOT__ALUop))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelf->RISC_V_top__DOT__control__DOT__ALUop))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->RISC_V_top__DOT__control__DOT__ALUop))
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->RISC_V_top__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 2U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->RISC_V_top__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->RISC_V_top__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->RISC_V_top__DOT__instr 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->RISC_V_top__DOT__instr 
                                                             >> 0xcU)))
                                                         ? 6U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->RISC_V_top__DOT__instr 
                                                              >> 0xcU)))
                                                          ? 7U
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->RISC_V_top__DOT__instr 
                                                               >> 0xcU)))
                                                           ? 
                                                          ((2U 
                                                            & vlSelf->RISC_V_top__DOT__instr)
                                                            ? 0U
                                                            : 
                                                           ((0x40000000U 
                                                             & vlSelf->RISC_V_top__DOT__instr)
                                                             ? 1U
                                                             : 0U))
                                                           : 0U)))))))
                                                    : 0U)));
    vlSelf->RISC_V_top__DOT__Imm_src = ((0x33U == (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr))
                                         ? 0U : ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr))
                                                  ? 3U
                                                  : 
                                                 ((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->RISC_V_top__DOT__instr))
                                                   ? 0U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->RISC_V_top__DOT__instr))
                                                    ? 1U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->RISC_V_top__DOT__instr))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->RISC_V_top__DOT__instr))
                                                      ? 2U
                                                      : 0U))))));
    vlSelf->RISC_V_top__DOT__imm_op = (((0U == (IData)(vlSelf->RISC_V_top__DOT__Imm_src)) 
                                        | (3U == (IData)(vlSelf->RISC_V_top__DOT__Imm_src)))
                                        ? (((- (IData)(
                                                       (vlSelf->RISC_V_top__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->RISC_V_top__DOT__instr 
                                              >> 0x14U))
                                        : ((1U == (IData)(vlSelf->RISC_V_top__DOT__Imm_src))
                                            ? (((- (IData)(
                                                           (vlSelf->RISC_V_top__DOT__instr 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->RISC_V_top__DOT__instr 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->RISC_V_top__DOT__instr 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelf->RISC_V_top__DOT__instr 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->RISC_V_top__DOT__instr 
                                                      >> 0x14U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->RISC_V_top__DOT__instr 
                                                         << 3U)) 
                                                     | ((0x3f0U 
                                                         & (vlSelf->RISC_V_top__DOT__instr 
                                                            >> 0x15U)) 
                                                        | (0xfU 
                                                           & (vlSelf->RISC_V_top__DOT__instr 
                                                              >> 8U))))))));
    vlSelf->RISC_V_top__DOT__ALU_operand2 = (((0x33U 
                                               != (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr)) 
                                              & ((3U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr)) 
                                                 | ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->RISC_V_top__DOT__instr)) 
                                                    | ((0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->RISC_V_top__DOT__instr)) 
                                                       | (0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->RISC_V_top__DOT__instr))))))
                                              ? vlSelf->RISC_V_top__DOT__imm_op
                                              : vlSelf->RISC_V_top__DOT__register_operand2);
    vlSelf->RISC_V_top__DOT__alu_block__DOT__add = 
        (vlSelf->RISC_V_top__DOT__ALU_operand1 + vlSelf->RISC_V_top__DOT__ALU_operand2);
    if ((0U == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))) {
        vlSelf->RISC_V_top__DOT__ALU_output = vlSelf->RISC_V_top__DOT__alu_block__DOT__add;
        vlSelf->RISC_V_top__DOT__is_equal = 0U;
    } else {
        vlSelf->RISC_V_top__DOT__ALU_output = ((1U 
                                                == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))
                                                ? (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                                   - vlSelf->RISC_V_top__DOT__ALU_operand2)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))
                                                    ? 
                                                   (vlSelf->RISC_V_top__DOT__ALU_operand2 
                                                    & vlSelf->RISC_V_top__DOT__ALU_operand1)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))
                                                     ? 
                                                    (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                                     | vlSelf->RISC_V_top__DOT__ALU_operand2)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))
                                                      ? 
                                                     (vlSelf->RISC_V_top__DOT__ALU_operand2 
                                                      < vlSelf->RISC_V_top__DOT__ALU_operand1)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))
                                                       ? 
                                                      (vlSelf->RISC_V_top__DOT__ALU_operand2 
                                                       ^ vlSelf->RISC_V_top__DOT__ALU_operand1)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))
                                                        ? 
                                                       ((0x1fU 
                                                         >= vlSelf->RISC_V_top__DOT__ALU_operand2)
                                                         ? 
                                                        (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                                         << vlSelf->RISC_V_top__DOT__ALU_operand2)
                                                         : 0U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->RISC_V_top__DOT__ALU_ctrl))
                                                         ? 
                                                        ((0x1fU 
                                                          >= vlSelf->RISC_V_top__DOT__ALU_operand2)
                                                          ? 
                                                         (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                                          >> vlSelf->RISC_V_top__DOT__ALU_operand2)
                                                          : 0U)
                                                         : vlSelf->RISC_V_top__DOT__alu_block__DOT__add)))))));
    }
    vlSelf->RISC_V_top__DOT__is_equal = (0U == vlSelf->RISC_V_top__DOT__ALU_output);
    vlSelf->RISC_V_top__DOT__PC_src = ((0x33U == (0x7fU 
                                                  & vlSelf->RISC_V_top__DOT__instr))
                                        ? 0U : ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->RISC_V_top__DOT__instr))
                                                 ? 0U
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr))
                                                  ? 0U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->RISC_V_top__DOT__instr))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->RISC_V_top__DOT__instr))
                                                    ? 2U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->RISC_V_top__DOT__instr))
                                                     ? 
                                                    ((IData)(vlSelf->RISC_V_top__DOT__is_equal)
                                                      ? 0U
                                                      : 1U)
                                                     : 0U))))));
    vlSelf->RISC_V_top__DOT__ProgramCounter__DOT__next_PC 
        = ((1U == (IData)(vlSelf->RISC_V_top__DOT__PC_src))
            ? ((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val) 
               + (vlSelf->RISC_V_top__DOT__imm_op << 2U))
            : ((0U == (IData)(vlSelf->RISC_V_top__DOT__PC_src))
                ? ((IData)(4U) + (0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))
                : ((2U == (IData)(vlSelf->RISC_V_top__DOT__PC_src))
                    ? (vlSelf->RISC_V_top__DOT__ALU_output 
                       << 2U) : (0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))));
}

VL_ATTR_COLD void VRISC_V_top___024root___eval_initial(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    VRISC_V_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VRISC_V_top___024root___eval_settle(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___eval_settle\n"); );
    // Body
    VRISC_V_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VRISC_V_top___024root___final(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___final\n"); );
}

VL_ATTR_COLD void VRISC_V_top___024root___ctor_var_reset(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->t3 = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__is_equal = VL_RAND_RESET_I(1);
    vlSelf->RISC_V_top__DOT__ALU_ctrl = VL_RAND_RESET_I(3);
    vlSelf->RISC_V_top__DOT__Imm_src = VL_RAND_RESET_I(2);
    vlSelf->RISC_V_top__DOT__PC_src = VL_RAND_RESET_I(2);
    vlSelf->RISC_V_top__DOT__imm_op = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__ALU_output = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__ALU_operand1 = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__ALU_operand2 = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__register_operand2 = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__jump_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val = VL_RAND_RESET_I(32);
    vlSelf->RISC_V_top__DOT__ProgramCounter__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->RISC_V_top__DOT__control__DOT__ALUop = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISC_V_top__DOT__alu_block__DOT__add = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<262144; ++__Vi0) {
        vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
