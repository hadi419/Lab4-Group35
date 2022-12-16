// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISC_V_top.h"
#include "VRISC_V_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRISC_V_top::VRISC_V_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISC_V_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a0{vlSymsp->TOP.a0}
    , a1{vlSymsp->TOP.a1}
    , t3{vlSymsp->TOP.t3}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRISC_V_top::VRISC_V_top(const char* _vcname__)
    : VRISC_V_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISC_V_top::~VRISC_V_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VRISC_V_top___024root___eval_initial(VRISC_V_top___024root* vlSelf);
void VRISC_V_top___024root___eval_settle(VRISC_V_top___024root* vlSelf);
void VRISC_V_top___024root___eval(VRISC_V_top___024root* vlSelf);
#ifdef VL_DEBUG
void VRISC_V_top___024root___eval_debug_assertions(VRISC_V_top___024root* vlSelf);
#endif  // VL_DEBUG
void VRISC_V_top___024root___final(VRISC_V_top___024root* vlSelf);

static void _eval_initial_loop(VRISC_V_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VRISC_V_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VRISC_V_top___024root___eval_settle(&(vlSymsp->TOP));
        VRISC_V_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VRISC_V_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISC_V_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISC_V_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VRISC_V_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VRISC_V_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VRISC_V_top::final() {
    VRISC_V_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISC_V_top::hierName() const { return vlSymsp->name(); }
const char* VRISC_V_top::modelName() const { return "VRISC_V_top"; }
unsigned VRISC_V_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRISC_V_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRISC_V_top___024root__trace_init_top(VRISC_V_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRISC_V_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISC_V_top___024root*>(voidSelf);
    VRISC_V_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRISC_V_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRISC_V_top___024root__trace_register(VRISC_V_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRISC_V_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRISC_V_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
