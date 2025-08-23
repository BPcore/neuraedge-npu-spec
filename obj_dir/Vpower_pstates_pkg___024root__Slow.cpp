// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg__Syms.h"
#include "Vpower_pstates_pkg___024root.h"

void Vpower_pstates_pkg___024root___ctor_var_reset(Vpower_pstates_pkg___024root* vlSelf);

Vpower_pstates_pkg___024root::Vpower_pstates_pkg___024root(Vpower_pstates_pkg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpower_pstates_pkg___024root___ctor_var_reset(this);
}

void Vpower_pstates_pkg___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpower_pstates_pkg___024root::~Vpower_pstates_pkg___024root() {
}
