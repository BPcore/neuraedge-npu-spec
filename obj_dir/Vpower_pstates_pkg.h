// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPOWER_PSTATES_PKG_H_
#define VERILATED_VPOWER_PSTATES_PKG_H_  // guard

#include "verilated.h"

class Vpower_pstates_pkg__Syms;
class Vpower_pstates_pkg___024root;
class Vpower_pstates_pkg_sparsity_engine;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vpower_pstates_pkg VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vpower_pstates_pkg__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&regfile__02Eclk,0,0);
    VL_IN8(&regfile__02Erst_n,0,0);
    VL_IN8(&router_mesh__02Eclk,0,0);
    VL_IN8(&neuraedge_npu_50tops__02Eclk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&neuraedge_top__02Eclk,0,0);
    VL_IN8(&wr_en,0,0);
    VL_IN8(&wr_addr,4,0);
    VL_IN8(&rd_addr1,4,0);
    VL_IN8(&rd_addr2,4,0);
    VL_IN8(&noc_router__02Eclk,0,0);
    VL_IN8(&noc_router__02Erst_n,0,0);
    VL_IN8(&valid_in,4,0);
    VL_OUT8(&ready_out,4,0);
    VL_OUT8(&valid_out,4,0);
    VL_IN8(&ready_in,4,0);
    VL_IN8(&router_mesh__02Erst_n,0,0);
    VL_IN8(&router_mesh__02Eext_valid_in,0,0);
    VL_OUT8(&router_mesh__02Eext_ready_out,0,0);
    VL_OUT8(&router_mesh__02Eext_valid_out,0,0);
    VL_IN8(&router_mesh__02Eext_ready_in,0,0);
    VL_IN8(&power_mode,7,0);
    VL_IN8(&chip_temperature,7,0);
    VL_IN8(&global_sparsity_enable,0,0);
    VL_IN8(&global_sparsity_mode,1,0);
    VL_IN8(&global_precision_mode,1,0);
    VL_IN8(&data_valid,0,0);
    VL_OUT8(&system_efficiency_grade,7,0);
    VL_OUT8(&system_ready,0,0);
    VL_IN8(&csr_valid,0,0);
    VL_IN8(&csr_write,0,0);
    VL_IN8(&csr_addr,7,0);
    VL_OUT8(&csr_ready,0,0);
    VL_IN8(&neuraedge_top__02Erst_n,0,0);
    VL_IN8(&neuraedge_top__02Eext_valid_in,0,0);
    VL_OUT8(&neuraedge_top__02Eext_ready_out,0,0);
    VL_OUT8(&neuraedge_top__02Eext_valid_out,0,0);
    VL_IN8(&neuraedge_top__02Eext_ready_in,0,0);
    VL_IN16(&system_power_budget_mw,15,0);
    VL_IN16(&performance_target_tops,15,0);
    VL_OUT16(&system_power_consumption_mw,15,0);
    VL_OUT16(&system_efficiency_tops_w,15,0);
    VL_OUT16(&total_active_pes,15,0);
    VL_IN(&wr_data,31,0);
    VL_OUT(&rd_data1,31,0);
    VL_OUT(&rd_data2,31,0);
    VL_INW(&fully_flat_tile_flit_in,1279,0,40);
    VL_IN(&fully_flat_tile_valid_in,19,0);
    VL_OUT(&fully_flat_tile_ready_out,19,0);
    VL_OUTW(&fully_flat_tile_flit_out,1279,0,40);
    VL_OUT(&fully_flat_tile_valid_out,19,0);
    VL_IN(&fully_flat_tile_ready_in,19,0);
    VL_INW(&data_in,511,0,16);
    VL_OUT(&system_ops_per_second,31,0);
    VL_OUTW(&tile_status_flat,127,0,4);
    VL_IN(&csr_wdata,31,0);
    VL_OUT(&csr_rdata,31,0);
    VL_INW(&flit_in,319,0,10);
    VL_OUTW(&flit_out,319,0,10);
    VL_IN64(&router_mesh__02Eext_flit_in,63,0);
    VL_OUT64(&router_mesh__02Eext_flit_out,63,0);
    VL_OUT64(&tile_power_flat,63,0);
    VL_OUT64(&tile_efficiency_flat,63,0);
    VL_IN64(&neuraedge_top__02Eext_flit_in,63,0);
    VL_OUT64(&neuraedge_top__02Eext_flit_out,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vpower_pstates_pkg_sparsity_engine* const __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng;
    Vpower_pstates_pkg_sparsity_engine* const __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_eng;
    Vpower_pstates_pkg_sparsity_engine* const __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_eng;
    Vpower_pstates_pkg_sparsity_engine* const __PVT__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_eng;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vpower_pstates_pkg___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vpower_pstates_pkg(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vpower_pstates_pkg(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vpower_pstates_pkg();
  private:
    VL_UNCOPYABLE(Vpower_pstates_pkg);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
