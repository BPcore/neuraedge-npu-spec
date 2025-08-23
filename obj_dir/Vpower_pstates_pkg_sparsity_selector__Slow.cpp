// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg__Syms.h"
#include "Vpower_pstates_pkg_sparsity_selector.h"

void Vpower_pstates_pkg_sparsity_selector___ctor_var_reset(Vpower_pstates_pkg_sparsity_selector* vlSelf);

Vpower_pstates_pkg_sparsity_selector::Vpower_pstates_pkg_sparsity_selector(Vpower_pstates_pkg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpower_pstates_pkg_sparsity_selector___ctor_var_reset(this);
}

void Vpower_pstates_pkg_sparsity_selector::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpower_pstates_pkg_sparsity_selector::~Vpower_pstates_pkg_sparsity_selector() {
}
