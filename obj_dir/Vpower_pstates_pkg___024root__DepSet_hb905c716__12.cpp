// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg___024root.h"

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4087(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4087\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4088(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4088\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4089(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4089\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4090(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4090\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4091(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4091\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4092(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4092\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4093(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4093\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4094(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4094\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4095(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4095\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4096(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4096\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4097(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4097\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4098(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4098\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4099(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4099\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4100(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4100\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4101(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4101\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4102(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4102\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4103(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4103\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4104(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4104\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4105(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4105\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4106(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4106\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4107(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4107\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4108(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4108\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4109(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4109\n"); );
    // Init
    IData/*31:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__tmp_sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__tmp_sum = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    } else if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__mac_enable_global) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result = 0U;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__lane_result[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__mult_unit__result;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__tmp_sum 
        = (((- (IData)((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__lane_result
                              [0U] >> 0xfU)))) << 0x10U) 
           | vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__lane_result
           [0U]);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__combined_mult 
        = (0xffffU & neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__31__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__tmp_sum);
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4110(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4110\n"); );
    // Body
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__completed__v0) {
        vlSelf->mem_contention_deterministic_tb__DOT__completed = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__completed__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v0) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v1) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v2) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v3) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v3 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v4) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v4 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v5) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v5 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v6) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v6 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v7) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v7 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v8) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v8 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v9) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v9 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v10) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v10 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v11) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v11 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v12) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v12 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v13) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v13 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v14) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v14 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v15) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v15 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v16) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v16 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v17) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v17 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v18) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v18 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v19) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_is_dram__v19 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v0) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v1) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v2) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v3) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v3 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v4) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v4 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v5) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v5 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v6) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v6 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v7) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v7 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v8) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v8 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v9) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v9 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v10) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v10 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v11) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v11 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v12) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v12 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v13) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v13 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v14) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v14 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v15) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v15 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v16) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v16 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v17) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v17 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v18) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v18 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v19) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v19 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v20) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v20 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v21) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v21 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v22) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v22 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v23) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v23 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v24) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v24 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v25) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v25 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v26) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v26 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v27) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v27 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v28) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v28 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v29) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v29 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v30) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v30 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v31) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v31 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v32) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v32 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v33) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v33 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v34) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v34 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v35) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v35 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v36) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v36 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v37) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v37 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v38) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v38 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v39) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v39 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v40) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__req_valid__v40 = 0U;
    }
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4111(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4111\n"); );
    // Body
    if (vlSelf->mem_contention_deterministic_tb__DOT__reset) {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 0U;
        vlSelf->mem_contention_deterministic_tb__DOT__req_size_bytes = 0U;
    } else {
        vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 0U;
        if (((~ (IData)(vlSelf->mem_contention_deterministic_tb__DOT__done_sequence)) 
             & (4U > (IData)(vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base__DOT__q_count)))) {
            vlSelf->__Vdly__mem_contention_deterministic_tb__DOT__issued 
                = ((IData)(1U) + vlSelf->mem_contention_deterministic_tb__DOT__issued);
            vlSelf->mem_contention_deterministic_tb__DOT__req_valid = 1U;
            vlSelf->mem_contention_deterministic_tb__DOT__req_is_dram = 1U;
            vlSelf->mem_contention_deterministic_tb__DOT__req_size_bytes = 0x20U;
            if ((0x13U == vlSelf->mem_contention_deterministic_tb__DOT__issued)) {
                vlSelf->mem_contention_deterministic_tb__DOT__done_sequence = 1U;
            }
        }
    }
    vlSelf->mem_contention_deterministic_tb__DOT__issued 
        = vlSelf->__Vdly__mem_contention_deterministic_tb__DOT__issued;
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4112(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4112\n"); );
    // Init
    VlUnpacked<CData/*0:0*/, 4> neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vi0] = 0;
    }
    CData/*3:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum = 0;
    CData/*2:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx = 0;
    VlUnpacked<CData/*0:0*/, 4> neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vi0] = 0;
    }
    CData/*3:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum = 0;
    CData/*2:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx = 0;
    VlUnpacked<CData/*0:0*/, 4> neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vi0] = 0;
    }
    CData/*3:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum = 0;
    CData/*2:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx = 0;
    VlUnpacked<CData/*0:0*/, 4> neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vi0] = 0;
    }
    CData/*3:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum = 0;
    CData/*2:0*/ neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*0:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*0:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*0:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*0:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    SData/*15:0*/ __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 = 0;
    // Body
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[1U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[2U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[3U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l = 7U;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__4__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__5__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__6__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__7__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__8__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__9__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__10__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__11__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__12__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout 
                            = (((0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy)))
                                ? 4U : ((0U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                         ? ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__13__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l = 7U;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__14__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__15__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__16__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__17__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__18__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__19__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__20__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__21__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__22__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout 
                            = (((1U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy)))
                                ? 4U : ((1U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                         ? ((1U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__23__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l = 7U;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__24__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__25__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__26__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__27__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__28__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__29__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__30__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__31__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__32__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout 
                            = (((2U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy)))
                                ? 4U : ((2U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                         ? ((2U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__33__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w = 0ULL;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 0U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w = 7U;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l = 7U;
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base;
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout;
    if (((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
         && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                   >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(1U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(2U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(3U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_n;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__34__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((0U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__35__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_n = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_n 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_n 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_s;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__36__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((1U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__37__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_s = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_s 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_s 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_e;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__38__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((2U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__39__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_e = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_e 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_e 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_w;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__40__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((3U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__41__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_w = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__sel_w 
                = ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                    ? vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                   [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                    : 0ULL);
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_w 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__rr_ptr_l;
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
        = (0xfU & ((IData)(4U) + (IData)(__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__base)));
    if ((5U <= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum))) {
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum 
            = (0xfU & ((IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum) 
                       - (IData)(5U)));
    }
    __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout 
        = (7U & (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__Vstatic__sum));
    neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx 
        = __Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__add_wrap__42__Vfuncout;
    if (((~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l)) 
         & ((4U >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)) 
            && (1U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_valid) 
                      >> (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx)))))) {
        if ((4U == ([&]() {
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x30U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx 
                            = (0xffU & (IData)((((4U 
                                                  >= (IData)(neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx))
                                                  ? 
                                                 vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__in_flit
                                                 [neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx]
                                                  : 0ULL) 
                                                >> 0x38U)));
                        vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout 
                            = (((3U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx)) 
                                & (0U == (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy)))
                                ? 4U : ((3U != (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                         ? ((3U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dx))
                                             ? 2U : 3U)
                                         : ((0U < (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__dy))
                                             ? 1U : 0U)));
                    }(), (IData)(vlSelf->__Vfunc_neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__route_dir__43__Vfuncout)))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__v_l = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__chosen_idx_l 
                = neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__noc_router__DOT__unnamedblk1__DOT__idx;
        }
    }
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_size_bytes = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_contention_events = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_contention_events 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_contention_events;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_size_bytes = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_contention_events = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_contention_events 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_contention_events;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_size_bytes = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_contention_events = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_contention_events 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_contention_events;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_size_bytes = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_token_stall_cycles = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_contention_events = 0U;
    } else {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation))
                ? 0xaU : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation))
                ? 0xaU : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation))
                ? 0xaU : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation))
                ? 0xaU : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation));
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level) 
             < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level 
                = (0xffffU & (((0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                           + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))) 
                               > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))
                               ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_token_capacity)
                               : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                  + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))));
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid) {
            if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_contention_enable) 
                 & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_is_dram_r))) {
                if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                     >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level 
                        = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                      - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens)));
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
                } else {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
                        = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles);
                    if ((1U & (~ vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles))) {
                        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_contention_events 
                            = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_contention_events);
                    }
                }
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
            }
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_tokens_level;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_token_stall_cycles;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_contention_events 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dram_contention_events;
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level) 
             < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level 
                = (0xffffU & (((0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                           + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))) 
                               > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))
                               ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_token_capacity)
                               : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                  + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))));
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid) {
            if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_contention_enable) 
                 & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_is_dram_r))) {
                if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                     >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level 
                        = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                      - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens)));
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
                } else {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
                        = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles);
                    if ((1U & (~ vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles))) {
                        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_contention_events 
                            = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_contention_events);
                    }
                }
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
            }
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_tokens_level;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_token_stall_cycles;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_contention_events 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dram_contention_events;
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level) 
             < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level 
                = (0xffffU & (((0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                           + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))) 
                               > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))
                               ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_token_capacity)
                               : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                  + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))));
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid) {
            if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_contention_enable) 
                 & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_is_dram_r))) {
                if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                     >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level 
                        = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                      - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens)));
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
                } else {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
                        = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles);
                    if ((1U & (~ vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles))) {
                        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_contention_events 
                            = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_contention_events);
                    }
                }
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
            }
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_tokens_level;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_token_stall_cycles;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_contention_events 
            = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dram_contention_events;
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level) 
             < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level 
                = (0xffffU & (((0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                           + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))) 
                               > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_token_capacity))
                               ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_token_capacity)
                               : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                  + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle))));
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid) {
            if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_contention_enable) 
                 & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_is_dram_r))) {
                if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                     >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level 
                        = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level) 
                                      - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens)));
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
                } else {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
                        = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_token_stall_cycles);
                    if ((1U & (~ vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_token_stall_cycles))) {
                        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_contention_events 
                            = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_contention_events);
                    }
                }
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_size_bytes 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size;
            }
        }
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_tokens_level;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_token_stall_cycles 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_token_stall_cycles;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_contention_events 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dram_contention_events;
    vlSelf->neuraedge_npu_50tops__DOT__tile_power_consumption[3U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation 
            = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg) 
               + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation 
            = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg) 
               + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation 
            = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg) 
               + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__power_estimation 
            = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg) 
               + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg));
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_total_resp = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles = 0U;
        vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0 = 1U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_total_resp = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles = 0U;
        vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0 = 1U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_total_resp = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles = 0U;
        vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0 = 1U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_total_resp = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles = 0U;
        vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0 = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma = 0U;
    } else {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy) {
            if ((0U != vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                 [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head])) {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles);
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = (0xffffU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                                  [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head] 
                                  - (IData)(1U)));
                vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 1U;
                __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_total_resp);
                if ((0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                        = (7U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count) 
                                 - (IData)(1U)));
                }
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size
                    [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head];
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head)));
            }
        }
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_valid_r) 
             & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready))) {
            if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_is_dram_r) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = (((0xffffU & VL_MODDIV_III(16, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr), (IData)(0x3e8U))) 
                        < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct))
                        ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram)
                        : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
                            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles)
                            : 0x1eU));
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x80U;
            } else {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram;
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x40U;
            }
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_is_dram_r;
            vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 1U;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
                = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail)));
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy) {
            if ((0U != vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                 [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head])) {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles);
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = (0xffffU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                                  [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head] 
                                  - (IData)(1U)));
                vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 1U;
                __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_total_resp);
                if ((0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                        = (7U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count) 
                                 - (IData)(1U)));
                }
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size
                    [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head];
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head)));
            }
        }
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_valid_r) 
             & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready))) {
            if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_is_dram_r) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = (((0xffffU & VL_MODDIV_III(16, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr), (IData)(0x3e8U))) 
                        < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct))
                        ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram)
                        : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
                            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles)
                            : 0x1eU));
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x80U;
            } else {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram;
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x40U;
            }
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_is_dram_r;
            vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 1U;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
                = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail)));
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy) {
            if ((0U != vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                 [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head])) {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles);
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = (0xffffU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                                  [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head] 
                                  - (IData)(1U)));
                vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 1U;
                __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_total_resp);
                if ((0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                        = (7U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count) 
                                 - (IData)(1U)));
                }
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size
                    [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head];
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head)));
            }
        }
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_valid_r) 
             & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready))) {
            if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_is_dram_r) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = (((0xffffU & VL_MODDIV_III(16, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr), (IData)(0x3e8U))) 
                        < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct))
                        ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram)
                        : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
                            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles)
                            : 0x1eU));
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x80U;
            } else {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram;
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x40U;
            }
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_is_dram_r;
            vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 1U;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
                = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail)));
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 0U;
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy) {
            if ((0U != vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                 [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head])) {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles);
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = (0xffffU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency
                                  [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head] 
                                  - (IData)(1U)));
                vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 = 1U;
                __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
            } else {
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
                    = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_total_resp);
                if ((0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count))) {
                    vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                        = (7U & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count) 
                                 - (IData)(1U)));
                }
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_valid = 1U;
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size
                    [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head];
                vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head)));
            }
        }
        if (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_valid_r) 
             & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready))) {
            if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_is_dram_r) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = (((0xffffU & VL_MODDIV_III(16, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr), (IData)(0x3e8U))) 
                        < (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct))
                        ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram)
                        : ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
                            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles)
                            : 0x1eU));
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x80U;
            } else {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat 
                    = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram;
                __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 = 0x40U;
            }
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__base_lat;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_is_dram_r;
            vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 = 1U;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__final_lat;
            __Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
                = (3U & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail)));
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
            = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_coeff_mw
            [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__frequency_setting];
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg 
            = ((1U > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power))
                ? 1U : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
                                >> 0x10U)) ? 0xffffU
                         : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)) {
            if ((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_active[
                       (0x3fU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)))) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count)));
            }
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua);
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
            = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma) 
                          + VL_SHIFTR_III(16,16,32, 
                                          (0xffffU 
                                           & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count) 
                                              - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma))), 3U)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000 
            = VL_SHIFTR_III(32,32,32, ((IData)(0x3e8U) 
                                       * (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma)), 0xbU);
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
            = VL_DIV_III(32, (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_coeff_mw_per_util
                              [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__frequency_setting] 
                              * vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000), (IData)(0x3e8U));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled))
                ? 0xaU : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
                                  >> 0x10U)) ? 0xffffU
                           : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
            = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_coeff_mw
            [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__frequency_setting];
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg 
            = ((1U > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power))
                ? 1U : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
                                >> 0x10U)) ? 0xffffU
                         : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)) {
            if ((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_active[
                       (0x3fU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)))) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count)));
            }
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua);
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
            = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma) 
                          + VL_SHIFTR_III(16,16,32, 
                                          (0xffffU 
                                           & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count) 
                                              - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma))), 3U)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000 
            = VL_SHIFTR_III(32,32,32, ((IData)(0x3e8U) 
                                       * (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma)), 0xbU);
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
            = VL_DIV_III(32, (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_coeff_mw_per_util
                              [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__frequency_setting] 
                              * vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000), (IData)(0x3e8U));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled))
                ? 0xaU : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
                                  >> 0x10U)) ? 0xffffU
                           : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
            = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_coeff_mw
            [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__frequency_setting];
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg 
            = ((1U > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power))
                ? 1U : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
                                >> 0x10U)) ? 0xffffU
                         : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)) {
            if ((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_active[
                       (0x3fU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)))) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count)));
            }
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua);
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
            = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma) 
                          + VL_SHIFTR_III(16,16,32, 
                                          (0xffffU 
                                           & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count) 
                                              - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma))), 3U)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000 
            = VL_SHIFTR_III(32,32,32, ((IData)(0x3e8U) 
                                       * (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma)), 0xbU);
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
            = VL_DIV_III(32, (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_coeff_mw_per_util
                              [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__frequency_setting] 
                              * vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000), (IData)(0x3e8U));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled))
                ? 0xaU : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
                                  >> 0x10U)) ? 0xffffU
                           : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
            = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_coeff_mw
            [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__frequency_setting];
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leakage_power_reg 
            = ((1U > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power))
                ? 1U : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power 
                                >> 0x10U)) ? 0xffffU
                         : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__leak_power)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)) {
            if ((1U & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_active[
                       (0x3fU & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                                 >> 5U))] >> (0x1fU 
                                              & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua)))) {
                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count)));
            }
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua 
                = ((IData)(1U) + vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__ua);
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
            = (0xffffU & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma) 
                          + VL_SHIFTR_III(16,16,32, 
                                          (0xffffU 
                                           & ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__tmp_count) 
                                              - (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma))), 3U)));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000 
            = VL_SHIFTR_III(32,32,32, ((IData)(0x3e8U) 
                                       * (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma)), 0xbU);
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
            = VL_DIV_III(32, (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_coeff_mw_per_util
                              [vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__frequency_setting] 
                              * vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__unnamedblk1__DOT__util_norm_1000), (IData)(0x3e8U));
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dynamic_power_reg 
            = ((0xaU > (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled))
                ? 0xaU : ((0U != (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled 
                                  >> 0x10U)) ? 0xffffU
                           : (0xffffU & vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dyn_power_scaled)));
    }
    vlSelf->neuraedge_npu_50tops__DOT__tile_power_consumption[2U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tile_power_consumption[1U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg;
    vlSelf->tile_power_flat = (((QData)((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg)) 
                                << 0x30U) | (((QData)((IData)(
                                                              (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg)))) 
                                              << 0x10U) 
                                             | (QData)((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg))));
    vlSelf->neuraedge_npu_50tops__DOT__tile_power_consumption[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__current_power_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_total_resp;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr;
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[3U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[0U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[1U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[2U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[3U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
        neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_total_resp;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr;
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[3U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[0U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[1U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[2U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[3U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
        neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_total_resp;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr;
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[3U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[0U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[1U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[2U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[3U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
        neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_head;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_tail;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_total_resp 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_total_resp;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_stat_stall_cycles;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__lfsr;
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v0) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[3U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[0U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[1U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[2U] = 0U;
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[3U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[0U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[1U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[2U] = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v4;
    }
    if (vlSelf->__Vdlyvset__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_size__v4;
        neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_is_dram__v4;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency[__Vdlyvdim0__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5] 
            = __Vdlyvval__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_latency__v5;
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__frequency_setting 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__frequency_setting;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__frequency_setting 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__frequency_setting;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__frequency_setting 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__frequency_setting;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__frequency_setting 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__frequency_setting;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__util_ma;
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4113(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4113\n"); );
    // Body
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellinp__INFIFO__BRA__4__KET____DOT__infifo__din_valid 
        = (1U & ((vlSelf->router_mesh__DOT__in_valid_flat
                  [0U] >> 4U) | (IData)(vlSelf->router_mesh__02Eext_valid_in)));
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4114(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4114\n"); );
    // Body
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__done_sequence__v0) {
        vlSelf->mem_contention_deterministic_tb__DOT__done_sequence = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__done_sequence__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v0) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued = 0U;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v1) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v1;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v1 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v2) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v2;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v2 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v3) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v3;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v3 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v4) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v4;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v4 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v5) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v5;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v5 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v6) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v6;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v6 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v7) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v7;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v7 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v8) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v8;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v8 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v9) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v9;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v9 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v10) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v10;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v10 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v11) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v11;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v11 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v12) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v12;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v12 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v13) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v13;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v13 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v14) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v14;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v14 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v15) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v15;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v15 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v16) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v16;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v16 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v17) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v17;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v17 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v18) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v18;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v18 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v19) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v19;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v19 = 0U;
    }
    if (vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v20) {
        vlSelf->mem_contention_deterministic_tb__DOT__issued 
            = vlSelf->__Vdlyvval__mem_contention_deterministic_tb__DOT__issued__v20;
        vlSelf->__Vdlyvset__mem_contention_deterministic_tb__DOT__issued__v20 = 0U;
    }
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4115(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4115\n"); );
    // Body
    vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base__DOT__q_count 
        = vlSelf->__Vdly__mem_contention_deterministic_tb__DOT__dut__DOT__base__DOT__q_count;
    vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base__DOT__q_count));
    vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base_busy 
        = (0U != (IData)(vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base__DOT__q_count));
}

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4116(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4116\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_is_dram_r = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_issue_toggle = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_precision_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_lane_active_mask = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__3__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__util_high_thresh_pct = 0x4bU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__util_low_thresh_pct = 0x37U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles = 0x32U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__reuse_factor = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__pack_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 = 0x2eeU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 = 0xfaU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli = 0x19U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows = 4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_contention_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle = 8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_token_capacity = 0x80U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles = 2U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles = 0x1eU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_is_dram_r = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_issue_toggle = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_precision_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_lane_active_mask = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__2__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__util_high_thresh_pct = 0x4bU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__util_low_thresh_pct = 0x37U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles = 0x32U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__reuse_factor = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__pack_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 = 0x2eeU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 = 0xfaU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli = 0x19U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows = 4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_contention_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle = 8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_token_capacity = 0x80U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles = 2U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles = 0x1eU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_is_dram_r = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_issue_toggle = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_precision_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_lane_active_mask = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__1__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__util_high_thresh_pct = 0x4bU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__util_low_thresh_pct = 0x37U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles = 0x32U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__reuse_factor = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__pack_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 = 0x2eeU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 = 0xfaU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli = 0x19U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows = 4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_contention_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle = 8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_token_capacity = 0x80U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles = 2U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles = 0x1eU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_is_dram_r = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_issue_toggle = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_precision_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_mode = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_lane_active_mask = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__0__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__util_high_thresh_pct = 0x4bU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__util_low_thresh_pct = 0x37U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles = 0x32U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__reuse_factor = 1U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pack_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli = 0x3e8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 = 0x2eeU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 = 0x1f4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 = 0xfaU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli = 0x19U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows = 4U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_contention_enable = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle = 8U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_token_capacity = 0x80U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles = 2U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles = 0x1eU;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides = 0U;
    } else {
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        if (((4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)) 
             & (IData)(vlSelf->data_valid))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_valid_r = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_req_is_dram_r 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_issue_toggle;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_issue_toggle 
                = (1U & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_issue_toggle)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_pending_is_dram 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_issue_toggle;
        }
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_valid) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__3__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        if ((((IData)(vlSelf->csr_valid) & (IData)(vlSelf->csr_write)) 
             & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__3__KET____DOT__tile_inst__csr_ready)))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__3__KET____DOT__tile_inst__csr_ready = 1U;
            if ((0x80U & (IData)(vlSelf->csr_addr))) {
                if ((0x40U & (IData)(vlSelf->csr_addr))) {
                    if ((0x20U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->csr_addr))) {
                                if ((4U & (IData)(vlSelf->csr_addr))) {
                                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_blk__DOT__router_port_sel 
                                        = (7U & vlSelf->csr_wdata);
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_contention_enable 
                                    = (1U & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 8U));
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_token_capacity 
                                    = (vlSelf->csr_wdata 
                                       >> 0x10U);
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 2U)))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct 
                            = (0x3ffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles 
                            = (0xffffU & vlSelf->csr_wdata);
                    }
                } else if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles 
                                    = (0xffffU & vlSelf->csr_wdata);
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli 
                                    = (0xffffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__pack_eff_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        } else if ((0U != (0xffffU 
                                           & vlSelf->csr_wdata))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__reuse_factor 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles 
                                = (0xffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__util_low_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__util_high_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                 >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli 
                                    = (0x3ffU & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 0xaU));
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 
                                    = (0x3ffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                    if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable 
                                = (1U & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_lane_active_mask 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_enable 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_sparsity_mode 
                            = (3U & (vlSelf->csr_wdata 
                                     >> 1U));
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_precision_mode 
                            = (3U & vlSelf->csr_wdata);
                    }
                } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                     >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 2U)))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_start 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_stop 
                            = (1U & (vlSelf->csr_wdata 
                                     >> 1U));
                    }
                }
            }
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        if (((4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)) 
             & (IData)(vlSelf->data_valid))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_valid_r = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_req_is_dram_r 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_issue_toggle;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_issue_toggle 
                = (1U & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_issue_toggle)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_pending_is_dram 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_issue_toggle;
        }
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_valid) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__2__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        if ((((IData)(vlSelf->csr_valid) & (IData)(vlSelf->csr_write)) 
             & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__2__KET____DOT__tile_inst__csr_ready)))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__2__KET____DOT__tile_inst__csr_ready = 1U;
            if ((0x80U & (IData)(vlSelf->csr_addr))) {
                if ((0x40U & (IData)(vlSelf->csr_addr))) {
                    if ((0x20U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->csr_addr))) {
                                if ((4U & (IData)(vlSelf->csr_addr))) {
                                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_blk__DOT__router_port_sel 
                                        = (7U & vlSelf->csr_wdata);
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_contention_enable 
                                    = (1U & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 8U));
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_token_capacity 
                                    = (vlSelf->csr_wdata 
                                       >> 0x10U);
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 2U)))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct 
                            = (0x3ffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles 
                            = (0xffffU & vlSelf->csr_wdata);
                    }
                } else if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles 
                                    = (0xffffU & vlSelf->csr_wdata);
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli 
                                    = (0xffffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__pack_eff_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        } else if ((0U != (0xffffU 
                                           & vlSelf->csr_wdata))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__reuse_factor 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles 
                                = (0xffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__util_low_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__util_high_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                 >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli 
                                    = (0x3ffU & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 0xaU));
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 
                                    = (0x3ffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                    if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable 
                                = (1U & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_lane_active_mask 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_enable 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_sparsity_mode 
                            = (3U & (vlSelf->csr_wdata 
                                     >> 1U));
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_precision_mode 
                            = (3U & vlSelf->csr_wdata);
                    }
                } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                     >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 2U)))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_start 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_stop 
                            = (1U & (vlSelf->csr_wdata 
                                     >> 1U));
                    }
                }
            }
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        if (((4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)) 
             & (IData)(vlSelf->data_valid))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_valid_r = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_req_is_dram_r 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_issue_toggle;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_issue_toggle 
                = (1U & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_issue_toggle)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_pending_is_dram 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_issue_toggle;
        }
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_valid) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__1__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        if ((((IData)(vlSelf->csr_valid) & (IData)(vlSelf->csr_write)) 
             & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__1__KET____DOT__tile_inst__csr_ready)))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__1__KET____DOT__tile_inst__csr_ready = 1U;
            if ((0x80U & (IData)(vlSelf->csr_addr))) {
                if ((0x40U & (IData)(vlSelf->csr_addr))) {
                    if ((0x20U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->csr_addr))) {
                                if ((4U & (IData)(vlSelf->csr_addr))) {
                                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_blk__DOT__router_port_sel 
                                        = (7U & vlSelf->csr_wdata);
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_contention_enable 
                                    = (1U & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 8U));
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_token_capacity 
                                    = (vlSelf->csr_wdata 
                                       >> 0x10U);
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 2U)))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct 
                            = (0x3ffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles 
                            = (0xffffU & vlSelf->csr_wdata);
                    }
                } else if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles 
                                    = (0xffffU & vlSelf->csr_wdata);
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli 
                                    = (0xffffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__pack_eff_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        } else if ((0U != (0xffffU 
                                           & vlSelf->csr_wdata))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__reuse_factor 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles 
                                = (0xffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__util_low_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__util_high_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                 >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli 
                                    = (0x3ffU & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 0xaU));
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 
                                    = (0x3ffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                    if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable 
                                = (1U & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_lane_active_mask 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_enable 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_sparsity_mode 
                            = (3U & (vlSelf->csr_wdata 
                                     >> 1U));
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_precision_mode 
                            = (3U & vlSelf->csr_wdata);
                    }
                } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                     >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 2U)))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_start 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_stop 
                            = (1U & (vlSelf->csr_wdata 
                                     >> 1U));
                    }
                }
            }
        }
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_valid_r = 0U;
        if (((4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count)) 
             & (IData)(vlSelf->data_valid))) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_valid_r = 1U;
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_req_is_dram_r 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_issue_toggle;
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_issue_toggle 
                = (1U & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_issue_toggle)));
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_pending_is_dram 
                = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_issue_toggle;
        }
        if (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_valid) {
            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_pending_is_dram = 0U;
        }
        vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__0__KET____DOT__tile_inst__csr_ready = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_start = 0U;
        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_stop = 0U;
        if ((((IData)(vlSelf->csr_valid) & (IData)(vlSelf->csr_write)) 
             & (~ (IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__0__KET____DOT__tile_inst__csr_ready)))) {
            vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__0__KET____DOT__tile_inst__csr_ready = 1U;
            if ((0x80U & (IData)(vlSelf->csr_addr))) {
                if ((0x40U & (IData)(vlSelf->csr_addr))) {
                    if ((0x20U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->csr_addr))) {
                                if ((4U & (IData)(vlSelf->csr_addr))) {
                                    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_blk__DOT__router_port_sel 
                                        = (7U & vlSelf->csr_wdata);
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_contention_enable 
                                    = (1U & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_tokens_per_cycle 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 8U));
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_token_capacity 
                                    = (vlSelf->csr_wdata 
                                       >> 0x10U);
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                      >> 2U)))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_dram_hit_milli_pct 
                            = (0x3ffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_latency_dram_cycles 
                            = (0xffffU & vlSelf->csr_wdata);
                    }
                } else if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((0x10U & (IData)(vlSelf->csr_addr))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles 
                                    = (0xffffU & vlSelf->csr_wdata);
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli 
                                    = (0xffffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pack_eff_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        } else if ((0U != (0xffffU 
                                           & vlSelf->csr_wdata))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__reuse_factor 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles 
                                = (0xffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__perf_hyst_margin_milli 
                                = (0xffffU & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__util_low_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__util_high_thresh_pct 
                            = (0xffU & vlSelf->csr_wdata);
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                 >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->csr_addr))) {
                            if ((4U & (IData)(vlSelf->csr_addr))) {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_hyst_milli 
                                    = (0x3ffU & vlSelf->csr_wdata);
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_min_hold_windows 
                                    = (0xffU & (vlSelf->csr_wdata 
                                                >> 0xaU));
                            } else {
                                vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to8 
                                    = (0x3ffU & vlSelf->csr_wdata);
                            }
                        } else if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_1to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_thresh_2to4 
                                = (0x3ffU & vlSelf->csr_wdata);
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->csr_addr))) {
                    if ((8U & (IData)(vlSelf->csr_addr))) {
                        if ((4U & (IData)(vlSelf->csr_addr))) {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_adapt_enable 
                                = (1U & vlSelf->csr_wdata);
                        } else {
                            vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_lane_active_mask 
                                = (1U & vlSelf->csr_wdata);
                        }
                    } else if ((4U & (IData)(vlSelf->csr_addr))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_enable 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_sparsity_mode 
                            = (3U & (vlSelf->csr_wdata 
                                     >> 1U));
                    } else {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_precision_mode 
                            = (3U & vlSelf->csr_wdata);
                    }
                } else if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                     >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->csr_addr) 
                                  >> 2U)))) {
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_start 
                            = (1U & vlSelf->csr_wdata);
                        vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_stop 
                            = (1U & (vlSelf->csr_wdata 
                                     >> 1U));
                    }
                }
            }
        }
    }
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_issue_toggle 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_issue_toggle;
    vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__3__KET____DOT__tile_inst__csr_ready 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__3__KET____DOT__tile_inst__csr_ready;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_issue_toggle 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_issue_toggle;
    vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__2__KET____DOT__tile_inst__csr_ready 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__2__KET____DOT__tile_inst__csr_ready;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_issue_toggle 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_issue_toggle;
    vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__1__KET____DOT__tile_inst__csr_ready 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__1__KET____DOT__tile_inst__csr_ready;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_issue_toggle 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_issue_toggle;
    vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__0__KET____DOT__tile_inst__csr_ready 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__0__KET____DOT__tile_inst__csr_ready;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
    vlSelf->csr_ready = ((IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__3__KET____DOT__tile_inst__csr_ready) 
                         & ((IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__2__KET____DOT__tile_inst__csr_ready) 
                            & ((IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__1__KET____DOT__tile_inst__csr_ready) 
                               & (IData)(vlSelf->neuraedge_npu_50tops__DOT____Vcellout__tiles__BRA__0__KET____DOT__tile_inst__csr_ready))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
}
