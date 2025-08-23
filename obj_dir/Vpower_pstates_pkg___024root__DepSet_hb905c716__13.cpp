// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg___024root.h"

VL_INLINE_OPT void Vpower_pstates_pkg___024root___nba_sequent__TOP__4117(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___nba_sequent__TOP__4117\n"); );
    // Body
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_valid 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_resp_valid;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_valid 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_resp_valid;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_valid 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_resp_valid;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_valid 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_resp_valid;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count 
        = vlSelf->__Vdly__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
}

void Vpower_pstates_pkg___024root___timing_resume(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___timing_resume\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VactTriggered.word(0x40U))) {
        vlSelf->__VtrigSched_hc86a5d37__0.resume("@(posedge mem_contention_deterministic_tb.clk)");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0x40U))) {
        vlSelf->__VtrigSched_h91e03569__0.resume("@([changed] (mem_contention_deterministic_tb.completed == mem_contention_deterministic_tb.issued))");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0x40U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vpower_pstates_pkg___024root___timing_commit(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___timing_commit\n"); );
    // Body
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0x40U)))) {
        vlSelf->__VtrigSched_hc86a5d37__0.commit("@(posedge mem_contention_deterministic_tb.clk)");
    }
    if ((! (0x200ULL & vlSelf->__VactTriggered.word(0x40U)))) {
        vlSelf->__VtrigSched_h91e03569__0.commit("@([changed] (mem_contention_deterministic_tb.completed == mem_contention_deterministic_tb.issued))");
    }
}

void Vpower_pstates_pkg___024root___eval_triggers__act(Vpower_pstates_pkg___024root* vlSelf);
void Vpower_pstates_pkg___024root___eval_act(Vpower_pstates_pkg___024root* vlSelf);

bool Vpower_pstates_pkg___024root___eval_phase__act(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<4106> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpower_pstates_pkg___024root___eval_triggers__act(vlSelf);
    Vpower_pstates_pkg___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vpower_pstates_pkg___024root___timing_resume(vlSelf);
        Vpower_pstates_pkg___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vpower_pstates_pkg___024root___eval_nba(Vpower_pstates_pkg___024root* vlSelf);

bool Vpower_pstates_pkg___024root___eval_phase__nba(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpower_pstates_pkg___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpower_pstates_pkg___024root___dump_triggers__ico(Vpower_pstates_pkg___024root* vlSelf);
#endif  // VL_DEBUG
bool Vpower_pstates_pkg___024root___eval_phase__ico(Vpower_pstates_pkg___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpower_pstates_pkg___024root___dump_triggers__nba(Vpower_pstates_pkg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpower_pstates_pkg___024root___dump_triggers__act(Vpower_pstates_pkg___024root* vlSelf);
#endif  // VL_DEBUG

void Vpower_pstates_pkg___024root___eval(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vpower_pstates_pkg___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/common/regfile.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vpower_pstates_pkg___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpower_pstates_pkg___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/common/regfile.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vpower_pstates_pkg___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/common/regfile.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vpower_pstates_pkg___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vpower_pstates_pkg___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpower_pstates_pkg___024root___eval_debug_assertions(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->regfile__02Eclk & 0xfeU))) {
        Verilated::overWidthError("regfile.clk");}
    if (VL_UNLIKELY((vlSelf->regfile__02Erst_n & 0xfeU))) {
        Verilated::overWidthError("regfile.rst_n");}
    if (VL_UNLIKELY((vlSelf->wr_en & 0xfeU))) {
        Verilated::overWidthError("wr_en");}
    if (VL_UNLIKELY((vlSelf->wr_addr & 0xe0U))) {
        Verilated::overWidthError("wr_addr");}
    if (VL_UNLIKELY((vlSelf->rd_addr1 & 0xe0U))) {
        Verilated::overWidthError("rd_addr1");}
    if (VL_UNLIKELY((vlSelf->rd_addr2 & 0xe0U))) {
        Verilated::overWidthError("rd_addr2");}
    if (VL_UNLIKELY((vlSelf->noc_router__02Eclk & 0xfeU))) {
        Verilated::overWidthError("noc_router.clk");}
    if (VL_UNLIKELY((vlSelf->noc_router__02Erst_n & 0xfeU))) {
        Verilated::overWidthError("noc_router.rst_n");}
    if (VL_UNLIKELY((vlSelf->valid_in & 0xe0U))) {
        Verilated::overWidthError("valid_in");}
    if (VL_UNLIKELY((vlSelf->ready_in & 0xe0U))) {
        Verilated::overWidthError("ready_in");}
    if (VL_UNLIKELY((vlSelf->router_mesh__02Eclk & 0xfeU))) {
        Verilated::overWidthError("router_mesh.clk");}
    if (VL_UNLIKELY((vlSelf->router_mesh__02Erst_n 
                     & 0xfeU))) {
        Verilated::overWidthError("router_mesh.rst_n");}
    if (VL_UNLIKELY((vlSelf->fully_flat_tile_valid_in 
                     & 0xfff00000U))) {
        Verilated::overWidthError("fully_flat_tile_valid_in");}
    if (VL_UNLIKELY((vlSelf->fully_flat_tile_ready_in 
                     & 0xfff00000U))) {
        Verilated::overWidthError("fully_flat_tile_ready_in");}
    if (VL_UNLIKELY((vlSelf->router_mesh__02Eext_valid_in 
                     & 0xfeU))) {
        Verilated::overWidthError("router_mesh.ext_valid_in");}
    if (VL_UNLIKELY((vlSelf->router_mesh__02Eext_ready_in 
                     & 0xfeU))) {
        Verilated::overWidthError("router_mesh.ext_ready_in");}
    if (VL_UNLIKELY((vlSelf->neuraedge_npu_50tops__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("neuraedge_npu_50tops.clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->global_sparsity_enable 
                     & 0xfeU))) {
        Verilated::overWidthError("global_sparsity_enable");}
    if (VL_UNLIKELY((vlSelf->global_sparsity_mode & 0xfcU))) {
        Verilated::overWidthError("global_sparsity_mode");}
    if (VL_UNLIKELY((vlSelf->global_precision_mode 
                     & 0xfcU))) {
        Verilated::overWidthError("global_precision_mode");}
    if (VL_UNLIKELY((vlSelf->data_valid & 0xfeU))) {
        Verilated::overWidthError("data_valid");}
    if (VL_UNLIKELY((vlSelf->csr_valid & 0xfeU))) {
        Verilated::overWidthError("csr_valid");}
    if (VL_UNLIKELY((vlSelf->csr_write & 0xfeU))) {
        Verilated::overWidthError("csr_write");}
    if (VL_UNLIKELY((vlSelf->neuraedge_top__02Eclk 
                     & 0xfeU))) {
        Verilated::overWidthError("neuraedge_top.clk");}
    if (VL_UNLIKELY((vlSelf->neuraedge_top__02Erst_n 
                     & 0xfeU))) {
        Verilated::overWidthError("neuraedge_top.rst_n");}
    if (VL_UNLIKELY((vlSelf->neuraedge_top__02Eext_valid_in 
                     & 0xfeU))) {
        Verilated::overWidthError("neuraedge_top.ext_valid_in");}
    if (VL_UNLIKELY((vlSelf->neuraedge_top__02Eext_ready_in 
                     & 0xfeU))) {
        Verilated::overWidthError("neuraedge_top.ext_ready_in");}
}
#endif  // VL_DEBUG
