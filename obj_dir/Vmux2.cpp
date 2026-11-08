// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux2.h"
#include "Vmux2__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux2::Vmux2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux2__Syms(contextp(), _vcname__, this)}
    , sel{vlSymsp->TOP.sel}
    , d0{vlSymsp->TOP.d0}
    , d1{vlSymsp->TOP.d1}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux2::Vmux2(const char* _vcname__)
    : Vmux2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux2::~Vmux2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux2___024root___eval_initial(Vmux2___024root* vlSelf);
void Vmux2___024root___eval_settle(Vmux2___024root* vlSelf);
void Vmux2___024root___eval(Vmux2___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux2___024root___eval_debug_assertions(Vmux2___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux2___024root___final(Vmux2___024root* vlSelf);

static void _eval_initial_loop(Vmux2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux2___024root___eval_settle(&(vlSymsp->TOP));
        Vmux2___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmux2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux2___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vmux2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmux2::final() {
    Vmux2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux2::hierName() const { return vlSymsp->name(); }
const char* Vmux2::modelName() const { return "Vmux2"; }
unsigned Vmux2::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmux2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux2___024root__trace_init_top(Vmux2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2___024root*>(voidSelf);
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmux2___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmux2___024root__trace_register(Vmux2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux2::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux2___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
