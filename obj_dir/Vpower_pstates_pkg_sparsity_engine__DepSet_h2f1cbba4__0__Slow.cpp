// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg_sparsity_engine.h"

VL_ATTR_COLD void Vpower_pstates_pkg_sparsity_engine___ctor_var_reset(Vpower_pstates_pkg_sparsity_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpower_pstates_pkg_sparsity_engine___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(16384, vlSelf->input_data);
    vlSelf->input_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->sparsity_mask);
    vlSelf->sparsity_enable = VL_RAND_RESET_I(1);
    vlSelf->sparsity_mode = VL_RAND_RESET_I(2);
    vlSelf->sparsity_ratio_actual = VL_RAND_RESET_I(16);
    vlSelf->performance_gain = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(16384, vlSelf->pe_data);
    VL_RAND_RESET_W(2048, vlSelf->pe_enable);
    vlSelf->pe_valid = VL_RAND_RESET_I(1);
    vlSelf->active_pe_count = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(2048, vlSelf->__PVT__sparse_pattern);
    vlSelf->__PVT__pe_active_count = VL_RAND_RESET_I(16);
    vlSelf->__PVT__k = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pe_active_next = VL_RAND_RESET_I(16);
}
