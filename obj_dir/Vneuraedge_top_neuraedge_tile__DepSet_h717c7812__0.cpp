// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vneuraedge_top.h for the primary calling header

#include "Vneuraedge_top__pch.h"
#include "Vneuraedge_top_neuraedge_tile.h"

VL_INLINE_OPT void Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0(Vneuraedge_top_neuraedge_tile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0\n"); );
    // Init
    QData/*63:0*/ router_inst__DOT____Vlvbound_h7a99a8a7__0;
    router_inst__DOT____Vlvbound_h7a99a8a7__0 = 0;
    CData/*0:0*/ router_inst__DOT____Vlvbound_h39d2816e__0;
    router_inst__DOT____Vlvbound_h39d2816e__0 = 0;
    CData/*0:0*/ router_inst__DOT____Vlvbound_h36f01b41__0;
    router_inst__DOT____Vlvbound_h36f01b41__0 = 0;
    // Body
    router_inst__DOT____Vlvbound_h7a99a8a7__0 = vlSelf->flit_in
        [0U];
    vlSelf->flit_out[0U] = router_inst__DOT____Vlvbound_h7a99a8a7__0;
    router_inst__DOT____Vlvbound_h7a99a8a7__0 = vlSelf->flit_in
        [1U];
    vlSelf->flit_out[1U] = router_inst__DOT____Vlvbound_h7a99a8a7__0;
    router_inst__DOT____Vlvbound_h7a99a8a7__0 = vlSelf->flit_in
        [2U];
    vlSelf->flit_out[2U] = router_inst__DOT____Vlvbound_h7a99a8a7__0;
    router_inst__DOT____Vlvbound_h7a99a8a7__0 = vlSelf->flit_in
        [3U];
    vlSelf->flit_out[3U] = router_inst__DOT____Vlvbound_h7a99a8a7__0;
    router_inst__DOT____Vlvbound_h7a99a8a7__0 = vlSelf->flit_in
        [4U];
    vlSelf->flit_out[4U] = router_inst__DOT____Vlvbound_h7a99a8a7__0;
    router_inst__DOT____Vlvbound_h39d2816e__0 = vlSelf->valid_in
        [0U];
    vlSelf->valid_out[0U] = router_inst__DOT____Vlvbound_h39d2816e__0;
    router_inst__DOT____Vlvbound_h39d2816e__0 = vlSelf->valid_in
        [1U];
    vlSelf->valid_out[1U] = router_inst__DOT____Vlvbound_h39d2816e__0;
    router_inst__DOT____Vlvbound_h39d2816e__0 = vlSelf->valid_in
        [2U];
    vlSelf->valid_out[2U] = router_inst__DOT____Vlvbound_h39d2816e__0;
    router_inst__DOT____Vlvbound_h39d2816e__0 = vlSelf->valid_in
        [3U];
    vlSelf->valid_out[3U] = router_inst__DOT____Vlvbound_h39d2816e__0;
    router_inst__DOT____Vlvbound_h39d2816e__0 = vlSelf->valid_in
        [4U];
    vlSelf->valid_out[4U] = router_inst__DOT____Vlvbound_h39d2816e__0;
    router_inst__DOT____Vlvbound_h36f01b41__0 = vlSelf->ready_in
        [0U];
    vlSelf->ready_out[0U] = router_inst__DOT____Vlvbound_h36f01b41__0;
    router_inst__DOT____Vlvbound_h36f01b41__0 = vlSelf->ready_in
        [1U];
    vlSelf->ready_out[1U] = router_inst__DOT____Vlvbound_h36f01b41__0;
    router_inst__DOT____Vlvbound_h36f01b41__0 = vlSelf->ready_in
        [2U];
    vlSelf->ready_out[2U] = router_inst__DOT____Vlvbound_h36f01b41__0;
    router_inst__DOT____Vlvbound_h36f01b41__0 = vlSelf->ready_in
        [3U];
    vlSelf->ready_out[3U] = router_inst__DOT____Vlvbound_h36f01b41__0;
    router_inst__DOT____Vlvbound_h36f01b41__0 = vlSelf->ready_in
        [4U];
    vlSelf->ready_out[4U] = router_inst__DOT____Vlvbound_h36f01b41__0;
}
