// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_top.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_top___024root.h"

VL_INLINE_OPT void VRISC_V_top___024root___sequent__TOP__0(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0;
    IData/*31:0*/ __Vdlyvval__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0;
    CData/*0:0*/ __Vdlyvset__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0;
    IData/*17:0*/ __Vdlyvdim0__RISC_V_top__DOT__data_ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__RISC_V_top__DOT__data_ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__RISC_V_top__DOT__data_ram__DOT__ram_array__v0;
    // Body
    __Vdlyvset__RISC_V_top__DOT__data_ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0 = 0U;
    if (((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
         & ((3U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
            & ((0x13U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
               & (0x23U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)))))) {
        __Vdlyvval__RISC_V_top__DOT__data_ram__DOT__ram_array__v0 
            = (0xffU & vlSelf->RISC_V_top__DOT__register_operand2);
        __Vdlyvset__RISC_V_top__DOT__data_ram__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__RISC_V_top__DOT__data_ram__DOT__ram_array__v0 
            = (0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output);
    }
    if (((0x33U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
         | ((3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
            | ((0x13U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
               | ((0x23U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                  & ((0x67U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                     | (0x63U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)))))))) {
        __Vdlyvval__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0 
            = ((1U == (IData)(vlSelf->RISC_V_top__DOT__jump_mux_sel))
                ? (((IData)(4U) + (0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)) 
                   >> 2U) : ((0U == (IData)(vlSelf->RISC_V_top__DOT__jump_mux_sel))
                              ? (((0x33U != (0x7fU 
                                             & vlSelf->RISC_V_top__DOT__instr)) 
                                  & (3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)))
                                  ? (((0x33U != (0x7fU 
                                                 & vlSelf->RISC_V_top__DOT__instr)) 
                                      & (IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->RISC_V_top__DOT__instr))))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                                         [
                                                         (0x3ffffU 
                                                          & vlSelf->RISC_V_top__DOT__ALU_output)] 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                         [(0x3ffffU 
                                           & vlSelf->RISC_V_top__DOT__ALU_output)])
                                      : vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                     [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)])
                                  : vlSelf->RISC_V_top__DOT__ALU_output)
                              : (vlSelf->RISC_V_top__DOT__instr 
                                 >> 0xcU)));
        __Vdlyvset__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0 = 1U;
        __Vdlyvdim0__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0 
            = ((0x1eU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                         [(0xffU & ((IData)(2U) + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                         << 1U)) | (1U & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                          [(0xffU & 
                                            ((IData)(3U) 
                                             + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                          >> 7U)));
    }
    if (__Vdlyvset__RISC_V_top__DOT__data_ram__DOT__ram_array__v0) {
        vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array[__Vdlyvdim0__RISC_V_top__DOT__data_ram__DOT__ram_array__v0] 
            = __Vdlyvval__RISC_V_top__DOT__data_ram__DOT__ram_array__v0;
    }
    if (__Vdlyvset__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0) {
        vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[__Vdlyvdim0__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0] 
            = __Vdlyvval__RISC_V_top__DOT__Reg_File__DOT__register_file_array__v0;
    }
    vlSelf->a0 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [0xaU];
    vlSelf->a1 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [0xbU];
    vlSelf->t3 = vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array
        [0x1cU];
}

VL_INLINE_OPT void VRISC_V_top___024root___sequent__TOP__1(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->RISC_V_top__DOT__ProgramCounter__DOT__next_PC);
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

void VRISC_V_top___024root___eval(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VRISC_V_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VRISC_V_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void VRISC_V_top___024root___eval_debug_assertions(VRISC_V_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
