// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg_sparsity_selector.h"

VL_ATTR_COLD void Vpower_pstates_pkg_sparsity_selector___ctor_var_reset(Vpower_pstates_pkg_sparsity_selector* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpower_pstates_pkg_sparsity_selector___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_in = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sparsity_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sparsity_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mask_out = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__abs_values[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__nonzero_count = VL_RAND_RESET_I(3);
}
