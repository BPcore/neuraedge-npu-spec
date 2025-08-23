// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg__Syms.h"
#include "Vpower_pstates_pkg_sparsity_engine.h"

extern const VlWide<64>/*2047:0*/ Vpower_pstates_pkg__ConstPool__CONST_hcc7e44e4_0;

VL_INLINE_OPT void Vpower_pstates_pkg_sparsity_engine___ico_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng__0(Vpower_pstates_pkg_sparsity_engine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vpower_pstates_pkg_sparsity_engine___ico_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng__0\n"); );
    // Init
    VlWide<64>/*2047:0*/ pe_enable;
    VL_ZERO_W(2048, pe_enable);
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSymsp->TOP.global_sparsity_enable) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            pe_enable[__Vilp] = vlSelf->__PVT__sparse_pattern[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            pe_enable[__Vilp] = Vpower_pstates_pkg__ConstPool__CONST_hcc7e44e4_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
