// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2__Syms.h"


void Vmux2___024root__trace_chg_sub_0(Vmux2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root__trace_chg_top_0\n"); );
    // Init
    Vmux2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2___024root*>(voidSelf);
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux2___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux2___024root__trace_chg_sub_0(Vmux2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->sel));
    bufp->chgIData(oldp+1,(vlSelf->d0),32);
    bufp->chgIData(oldp+2,(vlSelf->d1),32);
    bufp->chgIData(oldp+3,(vlSelf->dout),32);
}

void Vmux2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root__trace_cleanup\n"); );
    // Init
    Vmux2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2___024root*>(voidSelf);
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
