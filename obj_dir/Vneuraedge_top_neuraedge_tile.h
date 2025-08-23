// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vneuraedge_top.h for the primary calling header

#ifndef VERILATED_VNEURAEDGE_TOP_NEURAEDGE_TILE_H_
#define VERILATED_VNEURAEDGE_TOP_NEURAEDGE_TILE_H_  // guard

#include "verilated.h"


class Vneuraedge_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vneuraedge_top_neuraedge_tile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(flat_valid_in,4,0);
    VL_OUT8(flat_ready_out,4,0);
    VL_OUT8(flat_valid_out,4,0);
    VL_IN8(flat_ready_in,4,0);
    VL_INW(flat_flit_in,319,0,10);
    VL_OUTW(flat_flit_out,319,0,10);

    // INTERNAL VARIABLES
    Vneuraedge_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vneuraedge_top_neuraedge_tile(Vneuraedge_top__Syms* symsp, const char* v__name);
    ~Vneuraedge_top_neuraedge_tile();
    VL_UNCOPYABLE(Vneuraedge_top_neuraedge_tile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
