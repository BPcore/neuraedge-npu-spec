// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vneuraedge_top__pch.h"
#include "Vneuraedge_top.h"
#include "Vneuraedge_top___024root.h"

// FUNCTIONS
Vneuraedge_top__Syms::~Vneuraedge_top__Syms()
{
}

Vneuraedge_top__Syms::Vneuraedge_top__Syms(VerilatedContext* contextp, const char* namep, Vneuraedge_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
