// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2.h for the primary calling header

#include "verilated.h"

#include "Vmux2___024root.h"

VL_ATTR_COLD void Vmux2___024root___eval_initial(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_initial\n"); );
}

void Vmux2___024root___combo__TOP__0(Vmux2___024root* vlSelf);

VL_ATTR_COLD void Vmux2___024root___eval_settle(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___eval_settle\n"); );
    // Body
    Vmux2___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vmux2___024root___final(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___final\n"); );
}

VL_ATTR_COLD void Vmux2___024root___ctor_var_reset(Vmux2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sel = VL_RAND_RESET_I(1);
    vlSelf->d0 = VL_RAND_RESET_I(32);
    vlSelf->d1 = VL_RAND_RESET_I(32);
    vlSelf->dout = VL_RAND_RESET_I(32);
}
