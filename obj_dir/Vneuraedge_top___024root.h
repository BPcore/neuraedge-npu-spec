// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vneuraedge_top.h for the primary calling header

#ifndef VERILATED_VNEURAEDGE_TOP___024ROOT_H_
#define VERILATED_VNEURAEDGE_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vneuraedge_top_neuraedge_tile;


class Vneuraedge_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vneuraedge_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vneuraedge_top_neuraedge_tile* __PVT__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__0__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* __PVT__neuraedge_top__DOT__ROW__BRA__0__KET____DOT__COL__BRA__1__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* __PVT__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__0__KET____DOT__tile_inst;
    Vneuraedge_top_neuraedge_tile* __PVT__neuraedge_top__DOT__ROW__BRA__1__KET____DOT__COL__BRA__1__KET____DOT__tile_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(ext_valid_in,0,0);
    VL_OUT8(ext_ready_out,0,0);
    VL_OUT8(ext_valid_out,0,0);
    VL_IN8(ext_ready_in,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(ext_flit_in,63,0);
    VL_OUT64(ext_flit_out,63,0);
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vneuraedge_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vneuraedge_top___024root(Vneuraedge_top__Syms* symsp, const char* v__name);
    ~Vneuraedge_top___024root();
    VL_UNCOPYABLE(Vneuraedge_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
