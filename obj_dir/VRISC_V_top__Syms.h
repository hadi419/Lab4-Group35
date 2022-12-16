// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISC_V_TOP__SYMS_H_
#define VERILATED_VRISC_V_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRISC_V_top.h"

// INCLUDE MODULE CLASSES
#include "VRISC_V_top___024root.h"

// SYMS CLASS (contains all model state)
class VRISC_V_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRISC_V_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRISC_V_top___024root          TOP;

    // CONSTRUCTORS
    VRISC_V_top__Syms(VerilatedContext* contextp, const char* namep, VRISC_V_top* modelp);
    ~VRISC_V_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
