// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vneuraedge_top.h for the primary calling header

#include "Vneuraedge_top__pch.h"
#include "Vneuraedge_top_neuraedge_tile.h"

VL_ATTR_COLD void Vneuraedge_top_neuraedge_tile___ctor_var_reset(Vneuraedge_top_neuraedge_tile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vneuraedge_top_neuraedge_tile___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->flat_flit_in);
    vlSelf->flat_valid_in = VL_RAND_RESET_I(5);
    vlSelf->flat_ready_out = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(320, vlSelf->flat_flit_out);
    vlSelf->flat_valid_out = VL_RAND_RESET_I(5);
    vlSelf->flat_ready_in = VL_RAND_RESET_I(5);
}
