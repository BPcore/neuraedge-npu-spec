// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpower_pstates_pkg.h for the primary calling header

#ifndef VERILATED_VPOWER_PSTATES_PKG_SPARSITY_SELECTOR_H_
#define VERILATED_VPOWER_PSTATES_PKG_SPARSITY_SELECTOR_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vpower_pstates_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpower_pstates_pkg_sparsity_selector final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__sparsity_mode,1,0);
    VL_IN8(__PVT__sparsity_enable,0,0);
    VL_OUT8(__PVT__mask_out,3,0);
    CData/*2:0*/ __PVT__nonzero_count;
    VL_IN(__PVT__data_in,31,0);
    VlUnpacked<CData/*7:0*/, 4> __PVT__abs_values;

    // INTERNAL VARIABLES
    Vpower_pstates_pkg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpower_pstates_pkg_sparsity_selector(Vpower_pstates_pkg__Syms* symsp, const char* v__name);
    ~Vpower_pstates_pkg_sparsity_selector();
    VL_UNCOPYABLE(Vpower_pstates_pkg_sparsity_selector);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
