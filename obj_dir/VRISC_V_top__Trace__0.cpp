// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISC_V_top__Syms.h"


void VRISC_V_top___024root__trace_chg_sub_0(VRISC_V_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRISC_V_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_chg_top_0\n"); );
    // Init
    VRISC_V_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V_top___024root*>(voidSelf);
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRISC_V_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VRISC_V_top___024root__trace_chg_sub_0(VRISC_V_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[31]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+32,((((0x33U != (0x7fU 
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
                                  : vlSelf->RISC_V_top__DOT__ALU_output)),32);
        bufp->chgIData(oldp+33,(vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)]),32);
        bufp->chgIData(oldp+34,(((1U == (IData)(vlSelf->RISC_V_top__DOT__jump_mux_sel))
                                  ? (((IData)(4U) + 
                                      (0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)) 
                                     >> 2U) : ((0U 
                                                == (IData)(vlSelf->RISC_V_top__DOT__jump_mux_sel))
                                                ? (
                                                   ((0x33U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->RISC_V_top__DOT__instr)) 
                                                    & (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->RISC_V_top__DOT__instr)))
                                                    ? 
                                                   (((0x33U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->RISC_V_top__DOT__instr)) 
                                                     & (IData)(
                                                               (3U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->RISC_V_top__DOT__instr))))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                                                     [
                                                                     (0x3ffffU 
                                                                      & vlSelf->RISC_V_top__DOT__ALU_output)] 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                                     [
                                                     (0x3ffffU 
                                                      & vlSelf->RISC_V_top__DOT__ALU_output)])
                                                     : 
                                                    vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                                    [
                                                    (0x3ffffU 
                                                     & vlSelf->RISC_V_top__DOT__ALU_output)])
                                                    : vlSelf->RISC_V_top__DOT__ALU_output)
                                                : (vlSelf->RISC_V_top__DOT__instr 
                                                   >> 0xcU)))),32);
        bufp->chgIData(oldp+35,((((0x33U != (0x7fU 
                                             & vlSelf->RISC_V_top__DOT__instr)) 
                                  & (IData)((3U == 
                                             (0x707fU 
                                              & vlSelf->RISC_V_top__DOT__instr))))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                                     [
                                                     (0x3ffffU 
                                                      & vlSelf->RISC_V_top__DOT__ALU_output)] 
                                                     >> 7U)))) 
                                      << 8U) | vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                     [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)])
                                  : vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                 [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)])),32);
        bufp->chgCData(oldp+36,(vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+37,((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)),8);
        bufp->chgIData(oldp+38,(vlSelf->RISC_V_top__DOT__instr),32);
        bufp->chgCData(oldp+39,(((0x1eU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                           [(0xffU 
                                             & ((IData)(1U) 
                                                + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                           << 1U)) 
                                 | (1U & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                          [(0xffU & 
                                            ((IData)(2U) 
                                             + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                          >> 7U)))),5);
        bufp->chgCData(oldp+40,(((0x10U & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                           [(0xffU 
                                             & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)] 
                                           << 4U)) 
                                 | (0xfU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                            [(0xffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                            >> 4U)))),5);
        bufp->chgCData(oldp+41,(((0x1eU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                           [(0xffU 
                                             & ((IData)(2U) 
                                                + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                           << 1U)) 
                                 | (1U & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                          [(0xffU & 
                                            ((IData)(3U) 
                                             + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                          >> 7U)))),5);
        bufp->chgBit(oldp+42,(vlSelf->RISC_V_top__DOT__is_equal));
        bufp->chgBit(oldp+43,(((0x33U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               | ((3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->RISC_V_top__DOT__instr)) 
                                     | ((0x23U != (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr)) 
                                        & ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->RISC_V_top__DOT__instr)) 
                                           | (0x63U 
                                              != (0x7fU 
                                                  & vlSelf->RISC_V_top__DOT__instr)))))))));
        bufp->chgCData(oldp+44,(vlSelf->RISC_V_top__DOT__ALU_ctrl),3);
        bufp->chgBit(oldp+45,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               & ((3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->RISC_V_top__DOT__instr)) 
                                     | ((0x23U == (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr)) 
                                        | (0x67U == 
                                           (0x7fU & vlSelf->RISC_V_top__DOT__instr))))))));
        bufp->chgCData(oldp+46,(vlSelf->RISC_V_top__DOT__Imm_src),2);
        bufp->chgCData(oldp+47,(vlSelf->RISC_V_top__DOT__PC_src),2);
        bufp->chgIData(oldp+48,(vlSelf->RISC_V_top__DOT__imm_op),32);
        bufp->chgIData(oldp+49,(vlSelf->RISC_V_top__DOT__ALU_output),32);
        bufp->chgIData(oldp+50,(vlSelf->RISC_V_top__DOT__ALU_operand1),32);
        bufp->chgIData(oldp+51,(vlSelf->RISC_V_top__DOT__ALU_operand2),32);
        bufp->chgIData(oldp+52,(vlSelf->RISC_V_top__DOT__register_operand2),32);
        bufp->chgBit(oldp+53,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               & ((3U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                                  & ((0x13U != (0x7fU 
                                                & vlSelf->RISC_V_top__DOT__instr)) 
                                     & (0x23U == (0x7fU 
                                                  & vlSelf->RISC_V_top__DOT__instr)))))));
        bufp->chgBit(oldp+54,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               & (3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)))));
        bufp->chgCData(oldp+55,(vlSelf->RISC_V_top__DOT__jump_mux_sel),2);
        bufp->chgIData(oldp+56,((((IData)(4U) + (0xffU 
                                                 & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)) 
                                 >> 2U)),32);
        bufp->chgBit(oldp+57,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               & (IData)((3U == (0x707fU 
                                                 & vlSelf->RISC_V_top__DOT__instr))))));
        bufp->chgIData(oldp+58,((vlSelf->RISC_V_top__DOT__instr 
                                 >> 0xcU)),32);
        bufp->chgIData(oldp+59,((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)),32);
        bufp->chgIData(oldp+60,(vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val),32);
        bufp->chgIData(oldp+61,(((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val) 
                                 + (vlSelf->RISC_V_top__DOT__imm_op 
                                    << 2U))),32);
        bufp->chgIData(oldp+62,(((IData)(4U) + (0xffU 
                                                & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))),32);
        bufp->chgIData(oldp+63,((vlSelf->RISC_V_top__DOT__ALU_output 
                                 << 2U)),32);
        bufp->chgIData(oldp+64,(((1U == (IData)(vlSelf->RISC_V_top__DOT__PC_src))
                                  ? ((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val) 
                                     + (vlSelf->RISC_V_top__DOT__imm_op 
                                        << 2U)) : (
                                                   (0U 
                                                    == (IData)(vlSelf->RISC_V_top__DOT__PC_src))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xffU 
                                                     & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->RISC_V_top__DOT__PC_src))
                                                     ? 
                                                    (vlSelf->RISC_V_top__DOT__ALU_output 
                                                     << 2U)
                                                     : 
                                                    (0xffU 
                                                     & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))))),32);
        bufp->chgIData(oldp+65,(vlSelf->RISC_V_top__DOT__alu_block__DOT__add),32);
        bufp->chgIData(oldp+66,((vlSelf->RISC_V_top__DOT__ALU_operand1 
                                 - vlSelf->RISC_V_top__DOT__ALU_operand2)),32);
        bufp->chgIData(oldp+67,((vlSelf->RISC_V_top__DOT__ALU_operand2 
                                 & vlSelf->RISC_V_top__DOT__ALU_operand1)),32);
        bufp->chgIData(oldp+68,((vlSelf->RISC_V_top__DOT__ALU_operand1 
                                 | vlSelf->RISC_V_top__DOT__ALU_operand2)),32);
        bufp->chgIData(oldp+69,((vlSelf->RISC_V_top__DOT__ALU_operand2 
                                 < vlSelf->RISC_V_top__DOT__ALU_operand1)),32);
        bufp->chgIData(oldp+70,(((0x1fU >= vlSelf->RISC_V_top__DOT__ALU_operand2)
                                  ? (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                     << vlSelf->RISC_V_top__DOT__ALU_operand2)
                                  : 0U)),32);
        bufp->chgIData(oldp+71,((vlSelf->RISC_V_top__DOT__ALU_operand2 
                                 ^ vlSelf->RISC_V_top__DOT__ALU_operand1)),32);
        bufp->chgIData(oldp+72,(((0x1fU >= vlSelf->RISC_V_top__DOT__ALU_operand2)
                                  ? (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                     >> vlSelf->RISC_V_top__DOT__ALU_operand2)
                                  : 0U)),32);
        bufp->chgCData(oldp+73,((0x7fU & vlSelf->RISC_V_top__DOT__instr)),7);
        bufp->chgCData(oldp+74,((7U & (vlSelf->RISC_V_top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+75,((vlSelf->RISC_V_top__DOT__instr 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+76,(vlSelf->RISC_V_top__DOT__control__DOT__ALUop),2);
        bufp->chgIData(oldp+77,((0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)),18);
        bufp->chgCData(oldp+78,((0xffU & vlSelf->RISC_V_top__DOT__register_operand2)),8);
    }
    bufp->chgBit(oldp+79,(vlSelf->clk));
    bufp->chgBit(oldp+80,(vlSelf->rst));
    bufp->chgIData(oldp+81,(vlSelf->a0),32);
    bufp->chgIData(oldp+82,(vlSelf->a1),32);
    bufp->chgIData(oldp+83,(vlSelf->t3),32);
}

void VRISC_V_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_cleanup\n"); );
    // Init
    VRISC_V_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V_top___024root*>(voidSelf);
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
