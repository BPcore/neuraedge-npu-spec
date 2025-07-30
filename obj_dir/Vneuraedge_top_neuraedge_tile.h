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
    VL_IN64(flit_in[5],63,0);
    VL_IN8(valid_in[5],0,0);
    VL_OUT8(ready_out[5],0,0);
    VL_OUT64(flit_out[5],63,0);
    VL_OUT8(valid_out[5],0,0);
    VL_IN8(ready_in[5],0,0);

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
