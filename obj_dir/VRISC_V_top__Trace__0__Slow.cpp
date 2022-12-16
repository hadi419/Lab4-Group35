// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISC_V_top__Syms.h"


VL_ATTR_COLD void VRISC_V_top___024root__trace_init_sub__TOP__0(VRISC_V_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst", false,-1);
    tracep->declBus(c+82,"a0", false,-1, 31,0);
    tracep->declBus(c+83,"a1", false,-1, 31,0);
    tracep->declBus(c+84,"t3", false,-1, 31,0);
    tracep->pushNamePrefix("RISC_V_top ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"rst", false,-1);
    tracep->declBus(c+82,"a0", false,-1, 31,0);
    tracep->declBus(c+83,"a1", false,-1, 31,0);
    tracep->declBus(c+84,"t3", false,-1, 31,0);
    tracep->declBus(c+38,"instruction_address", false,-1, 7,0);
    tracep->declBus(c+39,"instr", false,-1, 31,0);
    tracep->declBus(c+40,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+41,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+42,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+43,"is_equal", false,-1);
    tracep->declBit(c+44,"Reg_Write", false,-1);
    tracep->declBus(c+45,"ALU_ctrl", false,-1, 2,0);
    tracep->declBit(c+46,"ALU_src", false,-1);
    tracep->declBus(c+47,"Imm_src", false,-1, 1,0);
    tracep->declBus(c+48,"PC_src", false,-1, 1,0);
    tracep->declBus(c+49,"imm_op", false,-1, 31,0);
    tracep->declBus(c+50,"ALU_output", false,-1, 31,0);
    tracep->declBus(c+51,"ALU_operand1", false,-1, 31,0);
    tracep->declBus(c+52,"ALU_operand2", false,-1, 31,0);
    tracep->declBus(c+53,"register_operand2", false,-1, 31,0);
    tracep->declBus(c+33,"data_output", false,-1, 31,0);
    tracep->declBit(c+54,"mem_write", false,-1);
    tracep->declBit(c+55,"mux3_sel", false,-1);
    tracep->declBus(c+34,"mem_out", false,-1, 31,0);
    tracep->declBus(c+35,"reg_write_data", false,-1, 31,0);
    tracep->declBus(c+56,"jump_mux_sel", false,-1, 1,0);
    tracep->declBus(c+57,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+36,"memory_output", false,-1, 31,0);
    tracep->declBit(c+58,"sign_extend_sel", false,-1);
    tracep->declBus(c+59,"upper_immediate", false,-1, 31,0);
    tracep->pushNamePrefix("ProgramCounter ");
    tracep->declBus(c+85,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBus(c+48,"PCsrc", false,-1, 1,0);
    tracep->declBit(c+81,"rst", false,-1);
    tracep->declBus(c+60,"PC", false,-1, 31,0);
    tracep->declBus(c+49,"Immop", false,-1, 31,0);
    tracep->declBus(c+50,"jump_address", false,-1, 31,0);
    tracep->declBus(c+61,"PC_reg_val", false,-1, 31,0);
    tracep->declBus(c+57,"inc", false,-1, 31,0);
    tracep->declBus(c+62,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+63,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+64,"jump_PC", false,-1, 31,0);
    tracep->declBus(c+65,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Reg_File ");
    tracep->declBus(c+86,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+87,"A0_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+88,"A1_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+89,"T3_ADDRESS", false,-1, 4,0);
    tracep->declBus(c+40,"AD1", false,-1, 4,0);
    tracep->declBus(c+41,"AD2", false,-1, 4,0);
    tracep->declBus(c+42,"AD3", false,-1, 4,0);
    tracep->declBit(c+44,"WE3", false,-1);
    tracep->declBus(c+35,"WD3", false,-1, 31,0);
    tracep->declBus(c+51,"RD1", false,-1, 31,0);
    tracep->declBus(c+53,"RD2", false,-1, 31,0);
    tracep->declBus(c+82,"a0", false,-1, 31,0);
    tracep->declBus(c+83,"a1", false,-1, 31,0);
    tracep->declBus(c+84,"t3", false,-1, 31,0);
    tracep->declBit(c+80,"clk", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"register_file_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_block ");
    tracep->declBus(c+85,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+52,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+45,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+50,"ALUout", false,-1, 31,0);
    tracep->declBit(c+43,"EQ", false,-1);
    tracep->declBus(c+66,"add", false,-1, 31,0);
    tracep->declBus(c+67,"sub", false,-1, 31,0);
    tracep->declBus(c+68,"bitwise_and", false,-1, 31,0);
    tracep->declBus(c+69,"bitwise_or", false,-1, 31,0);
    tracep->declBus(c+70,"slt", false,-1, 31,0);
    tracep->declBus(c+71,"shift_left", false,-1, 31,0);
    tracep->declBus(c+72,"bitwise_xor", false,-1, 31,0);
    tracep->declBus(c+73,"shift_right", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+43,"eq", false,-1);
    tracep->declBus(c+39,"instr", false,-1, 31,0);
    tracep->declBit(c+44,"Regwrite", false,-1);
    tracep->declBus(c+45,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+46,"ALUsrc", false,-1);
    tracep->declBus(c+47,"Immsrc", false,-1, 1,0);
    tracep->declBus(c+48,"PCsrc", false,-1, 1,0);
    tracep->declBit(c+55,"MUX3Sel", false,-1);
    tracep->declBit(c+54,"Memwrite", false,-1);
    tracep->declBus(c+56,"jump_mux_sel", false,-1, 1,0);
    tracep->declBit(c+58,"sign_extend_sel", false,-1);
    tracep->declBus(c+59,"upper_immediate", false,-1, 31,0);
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBus(c+75,"funct3", false,-1, 2,0);
    tracep->declBus(c+76,"funct7", false,-1, 6,0);
    tracep->declBus(c+77,"ALUop", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_ram ");
    tracep->declBus(c+90,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+54,"wr_en", false,-1);
    tracep->declBus(c+78,"addr", false,-1, 17,0);
    tracep->declBus(c+79,"din", false,-1, 7,0);
    tracep->declBus(c+37,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_rom ");
    tracep->declBus(c+91,"INSTRUCTION_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"DATA_ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"addr", false,-1, 7,0);
    tracep->declBus(c+39,"dout", false,-1, 31,0);
    tracep->declBus(c+42,"rd", false,-1, 4,0);
    tracep->declBus(c+40,"rs1", false,-1, 4,0);
    tracep->declBus(c+41,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("jump_multiplexer ");
    tracep->declBus(c+59,"upper_immediate", false,-1, 31,0);
    tracep->declBus(c+57,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+33,"data_output", false,-1, 31,0);
    tracep->declBus(c+56,"jump_mux_sel", false,-1, 1,0);
    tracep->declBus(c+35,"reg_write_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+53,"regOp2", false,-1, 31,0);
    tracep->declBus(c+49,"immop", false,-1, 31,0);
    tracep->declBit(c+46,"Alusrc", false,-1);
    tracep->declBus(c+52,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_mux ");
    tracep->declBus(c+50,"alu_out", false,-1, 31,0);
    tracep->declBus(c+36,"mem_out", false,-1, 31,0);
    tracep->declBit(c+55,"mux3sel", false,-1);
    tracep->declBus(c+33,"reg_write_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sig_ext_mem ");
    tracep->declBit(c+58,"sign_extend_sel", false,-1);
    tracep->declBus(c+37,"memory_data", false,-1, 7,0);
    tracep->declBus(c+36,"memory_output", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign ");
    tracep->declBus(c+47,"Immsrc", false,-1, 1,0);
    tracep->declBus(c+39,"instr", false,-1, 31,0);
    tracep->declBus(c+49,"imm_op", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VRISC_V_top___024root__trace_init_top(VRISC_V_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_init_top\n"); );
    // Body
    VRISC_V_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRISC_V_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISC_V_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISC_V_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRISC_V_top___024root__trace_register(VRISC_V_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRISC_V_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRISC_V_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRISC_V_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRISC_V_top___024root__trace_full_sub_0(VRISC_V_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISC_V_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_full_top_0\n"); );
    // Init
    VRISC_V_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V_top___024root*>(voidSelf);
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISC_V_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISC_V_top___024root__trace_full_sub_0(VRISC_V_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISC_V_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->RISC_V_top__DOT__Reg_File__DOT__register_file_array[31]),32);
    bufp->fullIData(oldp+33,((((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               & (3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)))
                               ? (((0x33U != (0x7fU 
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
                                  [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)])
                               : vlSelf->RISC_V_top__DOT__ALU_output)),32);
    bufp->fullIData(oldp+34,(vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                             [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)]),32);
    bufp->fullIData(oldp+35,(((1U == (IData)(vlSelf->RISC_V_top__DOT__jump_mux_sel))
                               ? (((IData)(4U) + (0xffU 
                                                  & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)) 
                                  >> 2U) : ((0U == (IData)(vlSelf->RISC_V_top__DOT__jump_mux_sel))
                                             ? (((0x33U 
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
                                                 [(0x3ffffU 
                                                   & vlSelf->RISC_V_top__DOT__ALU_output)])
                                                 : vlSelf->RISC_V_top__DOT__ALU_output)
                                             : (vlSelf->RISC_V_top__DOT__instr 
                                                >> 0xcU)))),32);
    bufp->fullIData(oldp+36,((((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               & (IData)((3U == (0x707fU 
                                                 & vlSelf->RISC_V_top__DOT__instr))))
                               ? (((- (IData)((1U & 
                                               (vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                                [(0x3ffffU 
                                                  & vlSelf->RISC_V_top__DOT__ALU_output)] 
                                                >> 7U)))) 
                                   << 8U) | vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                                  [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)])
                               : vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                              [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)])),32);
    bufp->fullCData(oldp+37,(vlSelf->RISC_V_top__DOT__data_ram__DOT__ram_array
                             [(0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)]),8);
    bufp->fullCData(oldp+38,((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)),8);
    bufp->fullIData(oldp+39,(vlSelf->RISC_V_top__DOT__instr),32);
    bufp->fullCData(oldp+40,(((0x1eU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                        [(0xffU & ((IData)(1U) 
                                                   + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                        << 1U)) | (1U 
                                                   & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                                      [
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                                      >> 7U)))),5);
    bufp->fullCData(oldp+41,(((0x10U & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                        [(0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)] 
                                        << 4U)) | (0xfU 
                                                   & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                                      [
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                                      >> 4U)))),5);
    bufp->fullCData(oldp+42,(((0x1eU & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                        [(0xffU & ((IData)(2U) 
                                                   + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                        << 1U)) | (1U 
                                                   & (vlSelf->RISC_V_top__DOT__instr_rom__DOT__rom_array
                                                      [
                                                      (0xffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))] 
                                                      >> 7U)))),5);
    bufp->fullBit(oldp+43,(vlSelf->RISC_V_top__DOT__is_equal));
    bufp->fullBit(oldp+44,(((0x33U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                            | ((3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->RISC_V_top__DOT__instr)) 
                                  | ((0x23U != (0x7fU 
                                                & vlSelf->RISC_V_top__DOT__instr)) 
                                     & ((0x67U == (0x7fU 
                                                   & vlSelf->RISC_V_top__DOT__instr)) 
                                        | (0x63U != 
                                           (0x7fU & vlSelf->RISC_V_top__DOT__instr)))))))));
    bufp->fullCData(oldp+45,(vlSelf->RISC_V_top__DOT__ALU_ctrl),3);
    bufp->fullBit(oldp+46,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                            & ((3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->RISC_V_top__DOT__instr)) 
                                  | ((0x23U == (0x7fU 
                                                & vlSelf->RISC_V_top__DOT__instr)) 
                                     | (0x67U == (0x7fU 
                                                  & vlSelf->RISC_V_top__DOT__instr))))))));
    bufp->fullCData(oldp+47,(vlSelf->RISC_V_top__DOT__Imm_src),2);
    bufp->fullCData(oldp+48,(vlSelf->RISC_V_top__DOT__PC_src),2);
    bufp->fullIData(oldp+49,(vlSelf->RISC_V_top__DOT__imm_op),32);
    bufp->fullIData(oldp+50,(vlSelf->RISC_V_top__DOT__ALU_output),32);
    bufp->fullIData(oldp+51,(vlSelf->RISC_V_top__DOT__ALU_operand1),32);
    bufp->fullIData(oldp+52,(vlSelf->RISC_V_top__DOT__ALU_operand2),32);
    bufp->fullIData(oldp+53,(vlSelf->RISC_V_top__DOT__register_operand2),32);
    bufp->fullBit(oldp+54,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                            & ((3U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                               & ((0x13U != (0x7fU 
                                             & vlSelf->RISC_V_top__DOT__instr)) 
                                  & (0x23U == (0x7fU 
                                               & vlSelf->RISC_V_top__DOT__instr)))))));
    bufp->fullBit(oldp+55,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                            & (3U == (0x7fU & vlSelf->RISC_V_top__DOT__instr)))));
    bufp->fullCData(oldp+56,(vlSelf->RISC_V_top__DOT__jump_mux_sel),2);
    bufp->fullIData(oldp+57,((((IData)(4U) + (0xffU 
                                              & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)) 
                              >> 2U)),32);
    bufp->fullBit(oldp+58,(((0x33U != (0x7fU & vlSelf->RISC_V_top__DOT__instr)) 
                            & (IData)((3U == (0x707fU 
                                              & vlSelf->RISC_V_top__DOT__instr))))));
    bufp->fullIData(oldp+59,((vlSelf->RISC_V_top__DOT__instr 
                              >> 0xcU)),32);
    bufp->fullIData(oldp+60,((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val)),32);
    bufp->fullIData(oldp+61,(vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val),32);
    bufp->fullIData(oldp+62,(((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val) 
                              + (vlSelf->RISC_V_top__DOT__imm_op 
                                 << 2U))),32);
    bufp->fullIData(oldp+63,(((IData)(4U) + (0xffU 
                                             & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val))),32);
    bufp->fullIData(oldp+64,((vlSelf->RISC_V_top__DOT__ALU_output 
                              << 2U)),32);
    bufp->fullIData(oldp+65,(((1U == (IData)(vlSelf->RISC_V_top__DOT__PC_src))
                               ? ((0xffU & vlSelf->RISC_V_top__DOT____Vcellout__ProgramCounter__PC_reg_val) 
                                  + (vlSelf->RISC_V_top__DOT__imm_op 
                                     << 2U)) : ((0U 
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
    bufp->fullIData(oldp+66,(vlSelf->RISC_V_top__DOT__alu_block__DOT__add),32);
    bufp->fullIData(oldp+67,((vlSelf->RISC_V_top__DOT__ALU_operand1 
                              - vlSelf->RISC_V_top__DOT__ALU_operand2)),32);
    bufp->fullIData(oldp+68,((vlSelf->RISC_V_top__DOT__ALU_operand2 
                              & vlSelf->RISC_V_top__DOT__ALU_operand1)),32);
    bufp->fullIData(oldp+69,((vlSelf->RISC_V_top__DOT__ALU_operand1 
                              | vlSelf->RISC_V_top__DOT__ALU_operand2)),32);
    bufp->fullIData(oldp+70,((vlSelf->RISC_V_top__DOT__ALU_operand2 
                              < vlSelf->RISC_V_top__DOT__ALU_operand1)),32);
    bufp->fullIData(oldp+71,(((0x1fU >= vlSelf->RISC_V_top__DOT__ALU_operand2)
                               ? (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                  << vlSelf->RISC_V_top__DOT__ALU_operand2)
                               : 0U)),32);
    bufp->fullIData(oldp+72,((vlSelf->RISC_V_top__DOT__ALU_operand2 
                              ^ vlSelf->RISC_V_top__DOT__ALU_operand1)),32);
    bufp->fullIData(oldp+73,(((0x1fU >= vlSelf->RISC_V_top__DOT__ALU_operand2)
                               ? (vlSelf->RISC_V_top__DOT__ALU_operand1 
                                  >> vlSelf->RISC_V_top__DOT__ALU_operand2)
                               : 0U)),32);
    bufp->fullCData(oldp+74,((0x7fU & vlSelf->RISC_V_top__DOT__instr)),7);
    bufp->fullCData(oldp+75,((7U & (vlSelf->RISC_V_top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+76,((vlSelf->RISC_V_top__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+77,(vlSelf->RISC_V_top__DOT__control__DOT__ALUop),2);
    bufp->fullIData(oldp+78,((0x3ffffU & vlSelf->RISC_V_top__DOT__ALU_output)),18);
    bufp->fullCData(oldp+79,((0xffU & vlSelf->RISC_V_top__DOT__register_operand2)),8);
    bufp->fullBit(oldp+80,(vlSelf->clk));
    bufp->fullBit(oldp+81,(vlSelf->rst));
    bufp->fullIData(oldp+82,(vlSelf->a0),32);
    bufp->fullIData(oldp+83,(vlSelf->a1),32);
    bufp->fullIData(oldp+84,(vlSelf->t3),32);
    bufp->fullIData(oldp+85,(0x20U),32);
    bufp->fullIData(oldp+86,(5U),32);
    bufp->fullCData(oldp+87,(0xaU),5);
    bufp->fullCData(oldp+88,(0xbU),5);
    bufp->fullCData(oldp+89,(0x1cU),5);
    bufp->fullIData(oldp+90,(0x12U),32);
    bufp->fullIData(oldp+91,(8U),32);
}
