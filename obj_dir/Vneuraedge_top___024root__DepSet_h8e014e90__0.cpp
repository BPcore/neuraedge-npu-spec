// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vneuraedge_top.h for the primary calling header

#include "Vneuraedge_top__pch.h"
#include "Vneuraedge_top__Syms.h"
#include "Vneuraedge_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vneuraedge_top___024root___dump_triggers__act(Vneuraedge_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vneuraedge_top___024root___eval_triggers__act(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vneuraedge_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
