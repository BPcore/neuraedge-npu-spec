// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vneuraedge_top.h for the primary calling header

#include "Vneuraedge_top__pch.h"
#include "Vneuraedge_top__Syms.h"
#include "Vneuraedge_top_neuraedge_tile.h"

void Vneuraedge_top_neuraedge_tile___ctor_var_reset(Vneuraedge_top_neuraedge_tile* vlSelf);

Vneuraedge_top_neuraedge_tile::Vneuraedge_top_neuraedge_tile(Vneuraedge_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vneuraedge_top_neuraedge_tile___ctor_var_reset(this);
}

void Vneuraedge_top_neuraedge_tile::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vneuraedge_top_neuraedge_tile::~Vneuraedge_top_neuraedge_tile() {
}
