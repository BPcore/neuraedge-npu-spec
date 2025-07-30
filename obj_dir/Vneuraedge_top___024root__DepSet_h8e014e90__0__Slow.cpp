// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vneuraedge_top.h for the primary calling header

#include "Vneuraedge_top__pch.h"
#include "Vneuraedge_top__Syms.h"
#include "Vneuraedge_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vneuraedge_top___024root___dump_triggers__stl(Vneuraedge_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vneuraedge_top___024root___eval_triggers__stl(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vneuraedge_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vneuraedge_top___024root___ico_sequent__TOP__0(Vneuraedge_top___024root* vlSelf);
void Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0(Vneuraedge_top_neuraedge_tile* vlSelf);
void Vneuraedge_top___024root___ico_sequent__TOP__1(Vneuraedge_top___024root* vlSelf);

VL_ATTR_COLD void Vneuraedge_top___024root___eval_stl(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vneuraedge_top___024root___ico_sequent__TOP__0(vlSelf);
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst));
        Vneuraedge_top_neuraedge_tile___ico_sequent__TOP__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__0((&vlSymsp->TOP__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst));
        Vneuraedge_top___024root___ico_sequent__TOP__1(vlSelf);
    }
}
