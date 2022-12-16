// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISC_V_top.h for the primary calling header

#include "verilated.h"

#include "VRISC_V_top__Syms.h"
#include "VRISC_V_top___024root.h"

void VRISC_V_top___024root___ctor_var_reset(VRISC_V_top___024root* vlSelf);

VRISC_V_top___024root::VRISC_V_top___024root(VRISC_V_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISC_V_top___024root___ctor_var_reset(this);
}

void VRISC_V_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRISC_V_top___024root::~VRISC_V_top___024root() {
}
