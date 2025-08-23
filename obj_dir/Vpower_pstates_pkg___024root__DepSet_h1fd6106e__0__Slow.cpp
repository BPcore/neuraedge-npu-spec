// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg__Syms.h"
#include "Vpower_pstates_pkg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpower_pstates_pkg___024root___dump_triggers__stl(Vpower_pstates_pkg___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpower_pstates_pkg___024root___eval_triggers__stl(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vpower_pstates_pkg___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vpower_pstates_pkg___024root___stl_sequent__TOP__0(Vpower_pstates_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpower_pstates_pkg___024root___stl_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ noc_router__DOT____Vlvbound_hd42d1a18__0;
    noc_router__DOT____Vlvbound_hd42d1a18__0 = 0;
    CData/*0:0*/ noc_router__DOT____Vlvbound_h4b1b961d__0;
    noc_router__DOT____Vlvbound_h4b1b961d__0 = 0;
    CData/*0:0*/ noc_router__DOT____Vlvbound_he3180404__0;
    noc_router__DOT____Vlvbound_he3180404__0 = 0;
    // Body
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT____Vcellout__INFIFO__BRA__4__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__4__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__4__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__4__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__4__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__4__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__din_ready 
        = (4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__0__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__0__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__1__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__1__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__2__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__2__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__3__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__3__KET____DOT__infifo__DOT__count));
    vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT____Vcellout__INFIFO__BRA__4__KET____DOT__infifo__dout_valid 
        = (0U < (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count));
    vlSelf->system_ops_per_second = vlSelf->neuraedge_npu_50tops__DOT__total_ops;
    vlSelf->system_power_consumption_mw = vlSelf->neuraedge_npu_50tops__DOT__total_power;
    vlSelf->system_efficiency_grade = vlSelf->neuraedge_npu_50tops__DOT__avg_efficiency_grade;
    vlSelf->total_active_pes = vlSelf->neuraedge_npu_50tops__DOT__total_active_pe_count;
    vlSelf->neuraedge_top__02Eext_valid_out = vlSelf->neuraedge_top__02Eext_valid_in;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_busy 
        = (0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__q_count));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli_adj 
        = ((0U == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli))
            ? 0x3e8U : (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparse_eff_milli));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base_resp_size), 3U)));
    vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base_req_ready 
        = (4U > (IData)(vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base__DOT__q_count));
    vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base_busy 
        = (0U != (IData)(vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base__DOT__q_count));
    vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__eff_req_tokens 
        = ((0U == (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base_resp_size), 3U)))
            ? 1U : (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->mem_contention_deterministic_tb__DOT__dut__DOT__base_resp_size), 3U)));
    vlSelf->rd_data1 = vlSelf->regfile__DOT__registers
        [vlSelf->rd_addr1];
    vlSelf->rd_data2 = vlSelf->regfile__DOT__registers
        [vlSelf->rd_addr2];
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__window_end 
        = ((0xffU == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__sample_counter)) 
           & (IData)(vlSelf->data_valid));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__window_end 
        = ((0xffU == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__sample_counter)) 
           & (IData)(vlSelf->data_valid));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__window_end 
        = ((0xffU == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__sample_counter)) 
           & (IData)(vlSelf->data_valid));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__window_end 
        = ((0xffU == (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__adapt_fsm__DOT__sample_counter)) 
           & (IData)(vlSelf->data_valid));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__scaled_ops_product 
        = ((IData)(vlSymsp->TOP__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng.__PVT__pe_active_count) 
           * (0xffU & ((IData)(1U) << (IData)(vlSelf->global_precision_mode))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__scaled_ops_product 
        = ((IData)(vlSymsp->TOP__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_eng.__PVT__pe_active_count) 
           * (0xffU & ((IData)(1U) << (IData)(vlSelf->global_precision_mode))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__scaled_ops_product 
        = ((IData)(vlSymsp->TOP__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_eng.__PVT__pe_active_count) 
           * (0xffU & ((IData)(1U) << (IData)(vlSelf->global_precision_mode))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__scaled_ops_product 
        = ((IData)(vlSymsp->TOP__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_eng.__PVT__pe_active_count) 
           * (0xffU & ((IData)(1U) << (IData)(vlSelf->global_precision_mode))));
    vlSelf->system_efficiency_tops_w = ((0U != (IData)(vlSelf->neuraedge_npu_50tops__DOT__total_power))
                                         ? (0xffffU 
                                            & VL_DIV_III(32, 
                                                         ((IData)(0x3e8U) 
                                                          * 
                                                          VL_SHIFTR_III(32,32,32, vlSelf->neuraedge_npu_50tops__DOT__total_ops, 0xaU)), (IData)(vlSelf->neuraedge_npu_50tops__DOT__total_power)))
                                         : 0xffffU);
    vlSelf->neuraedge_top__02Eext_flit_out = (((QData)((IData)(vlSelf->neuraedge_top__DOT__tile_00__DOT__controller_inst__DOT__status_reg)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->neuraedge_top__DOT__tile_00__DOT__memory_inst__DOT____Vcellout__SRAM_BANKS__BRA__0__KET____DOT__bank_inst__rdata)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__mem_lat_inj__DOT__base__DOT__active_lat_sram 
        = ((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_cfg_use_overrides)
            ? (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__csr_mem_latency_sram_cycles)
            : 2U);
    noc_router__DOT____Vlvbound_hd42d1a18__0 = (((QData)((IData)(
                                                                 vlSelf->flit_in[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->flit_in[0U])));
    vlSelf->flit_out[0U] = (IData)(noc_router__DOT____Vlvbound_hd42d1a18__0);
    vlSelf->flit_out[1U] = (IData)((noc_router__DOT____Vlvbound_hd42d1a18__0 
                                    >> 0x20U));
    noc_router__DOT____Vlvbound_hd42d1a18__0 = (((QData)((IData)(
                                                                 vlSelf->flit_in[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->flit_in[2U])));
    vlSelf->flit_out[2U] = (IData)(noc_router__DOT____Vlvbound_hd42d1a18__0);
    vlSelf->flit_out[3U] = (IData)((noc_router__DOT____Vlvbound_hd42d1a18__0 
                                    >> 0x20U));
    noc_router__DOT____Vlvbound_hd42d1a18__0 = (((QData)((IData)(
                                                                 vlSelf->flit_in[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->flit_in[4U])));
    vlSelf->flit_out[4U] = (IData)(noc_router__DOT____Vlvbound_hd42d1a18__0);
    vlSelf->flit_out[5U] = (IData)((noc_router__DOT____Vlvbound_hd42d1a18__0 
                                    >> 0x20U));
    noc_router__DOT____Vlvbound_hd42d1a18__0 = (((QData)((IData)(
                                                                 vlSelf->flit_in[7U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->flit_in[6U])));
    vlSelf->flit_out[6U] = (IData)(noc_router__DOT____Vlvbound_hd42d1a18__0);
    vlSelf->flit_out[7U] = (IData)((noc_router__DOT____Vlvbound_hd42d1a18__0 
                                    >> 0x20U));
    noc_router__DOT____Vlvbound_hd42d1a18__0 = (((QData)((IData)(
                                                                 vlSelf->flit_in[9U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->flit_in[8U])));
    vlSelf->flit_out[8U] = (IData)(noc_router__DOT____Vlvbound_hd42d1a18__0);
    vlSelf->flit_out[9U] = (IData)((noc_router__DOT____Vlvbound_hd42d1a18__0 
                                    >> 0x20U));
    noc_router__DOT____Vlvbound_h4b1b961d__0 = (1U 
                                                & (IData)(vlSelf->valid_in));
    vlSelf->valid_out = ((0x1eU & (IData)(vlSelf->valid_out)) 
                         | (IData)(noc_router__DOT____Vlvbound_h4b1b961d__0));
    noc_router__DOT____Vlvbound_h4b1b961d__0 = (1U 
                                                & ((IData)(vlSelf->valid_in) 
                                                   >> 1U));
    vlSelf->valid_out = ((0x1dU & (IData)(vlSelf->valid_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_h4b1b961d__0) 
                            << 1U));
    noc_router__DOT____Vlvbound_h4b1b961d__0 = (1U 
                                                & ((IData)(vlSelf->valid_in) 
                                                   >> 2U));
    vlSelf->valid_out = ((0x1bU & (IData)(vlSelf->valid_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_h4b1b961d__0) 
                            << 2U));
    noc_router__DOT____Vlvbound_h4b1b961d__0 = (1U 
                                                & ((IData)(vlSelf->valid_in) 
                                                   >> 3U));
    vlSelf->valid_out = ((0x17U & (IData)(vlSelf->valid_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_h4b1b961d__0) 
                            << 3U));
    noc_router__DOT____Vlvbound_h4b1b961d__0 = (1U 
                                                & ((IData)(vlSelf->valid_in) 
                                                   >> 4U));
    vlSelf->valid_out = ((0xfU & (IData)(vlSelf->valid_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_h4b1b961d__0) 
                            << 4U));
    noc_router__DOT____Vlvbound_he3180404__0 = (1U 
                                                & (IData)(vlSelf->ready_in));
    vlSelf->ready_out = ((0x1eU & (IData)(vlSelf->ready_out)) 
                         | (IData)(noc_router__DOT____Vlvbound_he3180404__0));
    noc_router__DOT____Vlvbound_he3180404__0 = (1U 
                                                & ((IData)(vlSelf->ready_in) 
                                                   >> 1U));
    vlSelf->ready_out = ((0x1dU & (IData)(vlSelf->ready_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_he3180404__0) 
                            << 1U));
    noc_router__DOT____Vlvbound_he3180404__0 = (1U 
                                                & ((IData)(vlSelf->ready_in) 
                                                   >> 2U));
    vlSelf->ready_out = ((0x1bU & (IData)(vlSelf->ready_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_he3180404__0) 
                            << 2U));
    noc_router__DOT____Vlvbound_he3180404__0 = (1U 
                                                & ((IData)(vlSelf->ready_in) 
                                                   >> 3U));
    vlSelf->ready_out = ((0x17U & (IData)(vlSelf->ready_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_he3180404__0) 
                            << 3U));
    noc_router__DOT____Vlvbound_he3180404__0 = (1U 
                                                & ((IData)(vlSelf->ready_in) 
                                                   >> 4U));
    vlSelf->ready_out = ((0xfU & (IData)(vlSelf->ready_out)) 
                         | ((IData)(noc_router__DOT____Vlvbound_he3180404__0) 
                            << 4U));
    vlSelf->mem_contention_deterministic_tb__DOT__req_size_bytes__VforceRd 
        = (((IData)(vlSelf->mem_contention_deterministic_tb__DOT__req_size_bytes__VforceEn) 
            & (IData)(vlSelf->mem_contention_deterministic_tb__DOT__req_size_bytes__VforceVal)) 
           | ((~ (IData)(vlSelf->mem_contention_deterministic_tb__DOT__req_size_bytes__VforceEn)) 
              & (IData)(vlSelf->mem_contention_deterministic_tb__DOT__req_size_bytes)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_next_state 
        = ((4U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
            ? ((2U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                ? 0U : ((1U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                         ? 0U : (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__settle_counter) 
                                  >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles))
                                  ? 1U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 
                                                   ((0x64U 
                                                     <= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_counter))
                                                     ? 2U
                                                     : 1U)
                                                    : 1U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_next_state 
        = ((4U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
            ? ((2U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                ? 0U : ((1U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                         ? 0U : (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__settle_counter) 
                                  >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles))
                                  ? 1U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 
                                                   ((0x64U 
                                                     <= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_counter))
                                                     ? 2U
                                                     : 1U)
                                                    : 1U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_next_state 
        = ((4U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
            ? ((2U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                ? 0U : ((1U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                         ? 0U : (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__settle_counter) 
                                  >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles))
                                  ? 1U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 
                                                   ((0x64U 
                                                     <= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_counter))
                                                     ? 2U
                                                     : 1U)
                                                    : 1U)));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_next_state 
        = ((4U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
            ? ((2U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                ? 0U : ((1U & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                         ? 0U : (((IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__settle_counter) 
                                  >= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__dvfs_min_settle_cycles))
                                  ? 1U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_state))
                                                    ? 
                                                   ((0x64U 
                                                     <= (IData)(vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__dvfs_counter))
                                                     ? 2U
                                                     : 1U)
                                                    : 1U)));
    vlSelf->fully_flat_tile_ready_out = ((0xfffefU 
                                          & vlSelf->fully_flat_tile_ready_out) 
                                         | ((4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__0__KET____DOT__HOSTED__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count)) 
                                            << 4U));
    vlSelf->fully_flat_tile_ready_out = ((0xffdffU 
                                          & vlSelf->fully_flat_tile_ready_out) 
                                         | ((4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__0__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count)) 
                                            << 9U));
    vlSelf->fully_flat_tile_ready_out = ((0xfbfffU 
                                          & vlSelf->fully_flat_tile_ready_out) 
                                         | ((4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__0__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count)) 
                                            << 0xeU));
    vlSelf->fully_flat_tile_ready_out = ((0x7ffffU 
                                          & vlSelf->fully_flat_tile_ready_out) 
                                         | ((4U > (IData)(vlSelf->router_mesh__DOT__INST_R__BRA__1__KET____DOT__INST_C__BRA__1__KET____DOT__NONHOST__DOT__u_router__DOT__INFIFO__BRA__4__KET____DOT__infifo__DOT__count)) 
                                            << 0x13U));
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[0U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[1U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[2U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tile_efficiency_grade[3U] 
        = vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__power_mgr__DOT__efficiency_grade_reg;
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[1U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[1U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[2U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[2U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[3U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[3U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[4U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[4U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__2__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[5U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[5U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[6U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[6U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__3__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[7U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[7U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[8U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[8U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__4__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[9U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[9U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xaU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xaU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__5__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xbU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xbU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xcU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xcU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__6__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xdU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xdU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xeU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xeU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__7__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0xfU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0xfU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x10U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x10U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__8__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x11U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x11U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x12U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x12U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__9__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x13U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x13U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x14U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x14U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__10__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x15U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x15U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x16U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x16U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__11__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x17U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x17U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x18U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x18U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__12__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x19U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x19U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1aU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1aU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__13__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1bU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1bU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1cU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1cU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__14__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1dU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1dU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1eU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1eU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__15__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x1fU] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x1fU] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x20U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x20U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__16__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x21U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x21U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x22U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x22U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__17__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x23U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x23U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x24U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x24U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__57__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__58__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__59__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__60__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__61__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__62__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__18__KET____DOT__pe_col__BRA__63__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x25U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x25U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__2__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__3__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__4__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__5__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__6__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__7__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__8__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__9__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__10__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__11__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__12__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__13__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__14__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__15__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__16__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__17__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__18__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__19__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__20__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__21__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__22__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__23__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__24__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__25__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x19U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x19U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__26__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x1aU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x1aU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__27__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x1bU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x1bU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__28__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x1cU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x1cU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__29__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x1dU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x1dU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__30__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x1eU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x1eU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__31__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x26U] 
               >> 0x1fU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x26U] 
                             >> 0x1fU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__32__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
              & (vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                 & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__33__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 1U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 1U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__34__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 2U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 2U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__35__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 3U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 3U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__36__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 4U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 4U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__37__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 5U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 5U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__38__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 6U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 6U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__39__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 7U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 7U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__40__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 8U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 8U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__41__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 9U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                          >> 9U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__42__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0xaU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                            >> 0xaU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__43__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0xbU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                            >> 0xbU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__44__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0xcU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                            >> 0xcU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__45__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0xdU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                            >> 0xdU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__46__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0xeU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                            >> 0xeU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__47__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0xfU) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                            >> 0xfU) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__48__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x10U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x10U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__49__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x11U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x11U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__50__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x12U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x12U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__51__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x13U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x13U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__52__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x14U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x14U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__53__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x15U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x15U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__54__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x16U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x16U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__55__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x17U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x17U) & (IData)(vlSelf->data_valid))));
    vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_row__BRA__19__KET____DOT__pe_col__BRA__56__KET____DOT__pe_inst__DOT__gated_clk 
        = ((IData)(vlSelf->neuraedge_npu_50tops__02Eclk) 
           & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_clock_enable[0x27U] 
               >> 0x18U) & ((vlSelf->neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__pe_power_enable[0x27U] 
                             >> 0x18U) & (IData)(vlSelf->data_valid))));
}
