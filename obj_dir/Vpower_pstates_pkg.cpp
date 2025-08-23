// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpower_pstates_pkg__pch.h"

//============================================================
// Constructors

Vpower_pstates_pkg::Vpower_pstates_pkg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpower_pstates_pkg__Syms(contextp(), _vcname__, this)}
    , regfile__02Eclk{vlSymsp->TOP.regfile__02Eclk}
    , regfile__02Erst_n{vlSymsp->TOP.regfile__02Erst_n}
    , router_mesh__02Eclk{vlSymsp->TOP.router_mesh__02Eclk}
    , neuraedge_npu_50tops__02Eclk{vlSymsp->TOP.neuraedge_npu_50tops__02Eclk}
    , reset{vlSymsp->TOP.reset}
    , neuraedge_top__02Eclk{vlSymsp->TOP.neuraedge_top__02Eclk}
    , wr_en{vlSymsp->TOP.wr_en}
    , wr_addr{vlSymsp->TOP.wr_addr}
    , rd_addr1{vlSymsp->TOP.rd_addr1}
    , rd_addr2{vlSymsp->TOP.rd_addr2}
    , noc_router__02Eclk{vlSymsp->TOP.noc_router__02Eclk}
    , noc_router__02Erst_n{vlSymsp->TOP.noc_router__02Erst_n}
    , valid_in{vlSymsp->TOP.valid_in}
    , ready_out{vlSymsp->TOP.ready_out}
    , valid_out{vlSymsp->TOP.valid_out}
    , ready_in{vlSymsp->TOP.ready_in}
    , router_mesh__02Erst_n{vlSymsp->TOP.router_mesh__02Erst_n}
    , router_mesh__02Eext_valid_in{vlSymsp->TOP.router_mesh__02Eext_valid_in}
    , router_mesh__02Eext_ready_out{vlSymsp->TOP.router_mesh__02Eext_ready_out}
    , router_mesh__02Eext_valid_out{vlSymsp->TOP.router_mesh__02Eext_valid_out}
    , router_mesh__02Eext_ready_in{vlSymsp->TOP.router_mesh__02Eext_ready_in}
    , power_mode{vlSymsp->TOP.power_mode}
    , chip_temperature{vlSymsp->TOP.chip_temperature}
    , global_sparsity_enable{vlSymsp->TOP.global_sparsity_enable}
    , global_sparsity_mode{vlSymsp->TOP.global_sparsity_mode}
    , global_precision_mode{vlSymsp->TOP.global_precision_mode}
    , data_valid{vlSymsp->TOP.data_valid}
    , system_efficiency_grade{vlSymsp->TOP.system_efficiency_grade}
    , system_ready{vlSymsp->TOP.system_ready}
    , csr_valid{vlSymsp->TOP.csr_valid}
    , csr_write{vlSymsp->TOP.csr_write}
    , csr_addr{vlSymsp->TOP.csr_addr}
    , csr_ready{vlSymsp->TOP.csr_ready}
    , neuraedge_top__02Erst_n{vlSymsp->TOP.neuraedge_top__02Erst_n}
    , neuraedge_top__02Eext_valid_in{vlSymsp->TOP.neuraedge_top__02Eext_valid_in}
    , neuraedge_top__02Eext_ready_out{vlSymsp->TOP.neuraedge_top__02Eext_ready_out}
    , neuraedge_top__02Eext_valid_out{vlSymsp->TOP.neuraedge_top__02Eext_valid_out}
    , neuraedge_top__02Eext_ready_in{vlSymsp->TOP.neuraedge_top__02Eext_ready_in}
    , system_power_budget_mw{vlSymsp->TOP.system_power_budget_mw}
    , performance_target_tops{vlSymsp->TOP.performance_target_tops}
    , system_power_consumption_mw{vlSymsp->TOP.system_power_consumption_mw}
    , system_efficiency_tops_w{vlSymsp->TOP.system_efficiency_tops_w}
    , total_active_pes{vlSymsp->TOP.total_active_pes}
    , wr_data{vlSymsp->TOP.wr_data}
    , rd_data1{vlSymsp->TOP.rd_data1}
    , rd_data2{vlSymsp->TOP.rd_data2}
    , fully_flat_tile_flit_in{vlSymsp->TOP.fully_flat_tile_flit_in}
    , fully_flat_tile_valid_in{vlSymsp->TOP.fully_flat_tile_valid_in}
    , fully_flat_tile_ready_out{vlSymsp->TOP.fully_flat_tile_ready_out}
    , fully_flat_tile_flit_out{vlSymsp->TOP.fully_flat_tile_flit_out}
    , fully_flat_tile_valid_out{vlSymsp->TOP.fully_flat_tile_valid_out}
    , fully_flat_tile_ready_in{vlSymsp->TOP.fully_flat_tile_ready_in}
    , data_in{vlSymsp->TOP.data_in}
    , system_ops_per_second{vlSymsp->TOP.system_ops_per_second}
    , tile_status_flat{vlSymsp->TOP.tile_status_flat}
    , csr_wdata{vlSymsp->TOP.csr_wdata}
    , csr_rdata{vlSymsp->TOP.csr_rdata}
    , flit_in{vlSymsp->TOP.flit_in}
    , flit_out{vlSymsp->TOP.flit_out}
    , router_mesh__02Eext_flit_in{vlSymsp->TOP.router_mesh__02Eext_flit_in}
    , router_mesh__02Eext_flit_out{vlSymsp->TOP.router_mesh__02Eext_flit_out}
    , tile_power_flat{vlSymsp->TOP.tile_power_flat}
    , tile_efficiency_flat{vlSymsp->TOP.tile_efficiency_flat}
    , neuraedge_top__02Eext_flit_in{vlSymsp->TOP.neuraedge_top__02Eext_flit_in}
    , neuraedge_top__02Eext_flit_out{vlSymsp->TOP.neuraedge_top__02Eext_flit_out}
    , __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng{vlSymsp->TOP.__PVT__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng}
    , __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_eng{vlSymsp->TOP.__PVT__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_eng}
    , __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_eng{vlSymsp->TOP.__PVT__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_eng}
    , __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_eng{vlSymsp->TOP.__PVT__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_eng}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpower_pstates_pkg::Vpower_pstates_pkg(const char* _vcname__)
    : Vpower_pstates_pkg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpower_pstates_pkg::~Vpower_pstates_pkg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpower_pstates_pkg___024root___eval_debug_assertions(Vpower_pstates_pkg___024root* vlSelf);
#endif  // VL_DEBUG
void Vpower_pstates_pkg___024root___eval_static(Vpower_pstates_pkg___024root* vlSelf);
void Vpower_pstates_pkg___024root___eval_initial(Vpower_pstates_pkg___024root* vlSelf);
void Vpower_pstates_pkg___024root___eval_settle(Vpower_pstates_pkg___024root* vlSelf);
void Vpower_pstates_pkg___024root___eval(Vpower_pstates_pkg___024root* vlSelf);

void Vpower_pstates_pkg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpower_pstates_pkg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpower_pstates_pkg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpower_pstates_pkg___024root___eval_static(&(vlSymsp->TOP));
        Vpower_pstates_pkg___024root___eval_initial(&(vlSymsp->TOP));
        Vpower_pstates_pkg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpower_pstates_pkg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpower_pstates_pkg::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vpower_pstates_pkg::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vpower_pstates_pkg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpower_pstates_pkg___024root___eval_final(Vpower_pstates_pkg___024root* vlSelf);

VL_ATTR_COLD void Vpower_pstates_pkg::final() {
    Vpower_pstates_pkg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpower_pstates_pkg::hierName() const { return vlSymsp->name(); }
const char* Vpower_pstates_pkg::modelName() const { return "Vpower_pstates_pkg"; }
unsigned Vpower_pstates_pkg::threads() const { return 1; }
void Vpower_pstates_pkg::prepareClone() const { contextp()->prepareClone(); }
void Vpower_pstates_pkg::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vpower_pstates_pkg::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpower_pstates_pkg::trace()' called on model that was Verilated without --trace option");
}
