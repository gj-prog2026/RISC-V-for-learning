// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2.h for the primary calling header

#include "verilated.h"

#include "Vmux2___024root.h"

VL_INLINE_OPT void Vmux2___024root___combo__TOP__0(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->dout = ((IData)(vlSelf->sel) ? vlSelf->d1
                     : vlSelf->d0);
}

void Vmux2___024root___eval(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval\n"); );
    // Body
    Vmux2___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vmux2___024root___eval_debug_assertions(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sel & 0xfeU))) {
        Verilated::overWidthError("sel");}
}
#endif  // VL_DEBUG
