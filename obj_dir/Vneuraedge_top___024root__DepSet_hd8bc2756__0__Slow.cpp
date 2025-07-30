// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vneuraedge_top.h for the primary calling header

#include "Vneuraedge_top__pch.h"
#include "Vneuraedge_top___024root.h"

VL_ATTR_COLD void Vneuraedge_top___024root___eval_static(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vneuraedge_top___024root___eval_initial__TOP(Vneuraedge_top___024root* vlSelf);

VL_ATTR_COLD void Vneuraedge_top___024root___eval_initial(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_initial\n"); );
    // Body
    Vneuraedge_top___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vneuraedge_top___024root___eval_initial__TOP(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->neuraedge_top__DOT__mesh_flit_in[0U][0U][3U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[0U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[0U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_flit_in[1U][0U][3U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[1U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[1U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_flit_in[2U][0U][3U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[2U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[2U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_flit_in[3U][0U][3U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[3U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[3U][0U][3U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_flit_in[0U][3U][1U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[0U][3U][1U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[0U][3U][1U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_flit_in[1U][3U][1U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[1U][3U][1U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[1U][3U][1U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_flit_in[2U][3U][1U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[2U][3U][1U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[2U][3U][1U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_flit_in[3U][3U][1U] = 0ULL;
    vlSelf->neuraedge_top__DOT__mesh_valid_in[3U][3U][1U] = 0U;
    vlSelf->neuraedge_top__DOT__mesh_ready_out[3U][3U][1U] = 0U;
}

VL_ATTR_COLD void Vneuraedge_top___024root___eval_final(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vneuraedge_top___024root___dump_triggers__stl(Vneuraedge_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vneuraedge_top___024root___eval_phase__stl(Vneuraedge_top___024root* vlSelf);

VL_ATTR_COLD void Vneuraedge_top___024root___eval_settle(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vneuraedge_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/top/neuraedge_top.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vneuraedge_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vneuraedge_top___024root___dump_triggers__stl(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vneuraedge_top___024root___eval_triggers__stl(Vneuraedge_top___024root* vlSelf);
VL_ATTR_COLD void Vneuraedge_top___024root___eval_stl(Vneuraedge_top___024root* vlSelf);

VL_ATTR_COLD bool Vneuraedge_top___024root___eval_phase__stl(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vneuraedge_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vneuraedge_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vneuraedge_top___024root___dump_triggers__ico(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vneuraedge_top___024root___dump_triggers__act(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vneuraedge_top___024root___dump_triggers__nba(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vneuraedge_top___024root___ctor_var_reset(Vneuraedge_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vneuraedge_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vneuraedge_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->ext_flit_in = VL_RAND_RESET_Q(64);
    vlSelf->ext_valid_in = VL_RAND_RESET_I(1);
    vlSelf->ext_ready_out = VL_RAND_RESET_I(1);
    vlSelf->ext_flit_out = VL_RAND_RESET_Q(64);
    vlSelf->ext_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ext_ready_in = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 5; ++__Vi2) {
                vlSelf->neuraedge_top__DOT__mesh_flit_in[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 5; ++__Vi2) {
                vlSelf->neuraedge_top__DOT__mesh_valid_in[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 5; ++__Vi2) {
                vlSelf->neuraedge_top__DOT__mesh_ready_out[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 5; ++__Vi2) {
                vlSelf->neuraedge_top__DOT__mesh_flit_out[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_Q(64);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 5; ++__Vi2) {
                vlSelf->neuraedge_top__DOT__mesh_valid_out[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 5; ++__Vi2) {
                vlSelf->neuraedge_top__DOT__mesh_ready_in[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(1);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_out[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellout__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__ready_out[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->neuraedge_top__DOT____Vcellinp__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst__flit_in[__Vi0] = VL_RAND_RESET_Q(64);
    }
}
