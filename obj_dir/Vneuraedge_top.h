// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VNEURAEDGE_TOP_H_
#define VERILATED_VNEURAEDGE_TOP_H_  // guard

#include "verilated.h"

class Vneuraedge_top__Syms;
class Vneuraedge_top___024root;
class Vneuraedge_top_neuraedge_tile;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vneuraedge_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vneuraedge_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&ext_valid_in,0,0);
    VL_OUT8(&ext_ready_out,0,0);
    VL_OUT8(&ext_valid_out,0,0);
    VL_IN8(&ext_ready_in,0,0);
    VL_IN64(&ext_flit_in,63,0);
    VL_OUT64(&ext_flit_out,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__2__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__3__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__2__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__3__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__0__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__1__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__2__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__2__KET____DOT__COL__BRA__3__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__0__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__1__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__2__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* const __PVT__neuraedge_top__DOT__ROW__BRA__3__KET____DOT__COL__BRA__3__KET____DOT__tile_inst;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vneuraedge_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vneuraedge_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vneuraedge_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vneuraedge_top();
  private:
    VL_UNCOPYABLE(Vneuraedge_top);  ///< Copying not allowed

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
