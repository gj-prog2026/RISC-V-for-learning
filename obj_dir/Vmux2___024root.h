// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux2.h for the primary calling header

#ifndef VERILATED_VMUX2___024ROOT_H_
#define VERILATED_VMUX2___024ROOT_H_  // guard

#include "verilated.h"

class Vmux2__Syms;

class Vmux2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sel,0,0);
    VL_IN(d0,31,0);
    VL_IN(d1,31,0);
    VL_OUT(dout,31,0);

    // INTERNAL VARIABLES
    Vmux2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux2___024root(Vmux2__Syms* symsp, const char* name);
    ~Vmux2___024root();
    VL_UNCOPYABLE(Vmux2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
