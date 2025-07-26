// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vneuraedge_top__pch.h"

//============================================================
// Constructors

Vneuraedge_top::Vneuraedge_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vneuraedge_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vneuraedge_top::Vneuraedge_top(const char* _vcname__)
    : Vneuraedge_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vneuraedge_top::~Vneuraedge_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vneuraedge_top___024root___eval_debug_assertions(Vneuraedge_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vneuraedge_top___024root___eval_static(Vneuraedge_top___024root* vlSelf);
void Vneuraedge_top___024root___eval_initial(Vneuraedge_top___024root* vlSelf);
void Vneuraedge_top___024root___eval_settle(Vneuraedge_top___024root* vlSelf);
void Vneuraedge_top___024root___eval(Vneuraedge_top___024root* vlSelf);

void Vneuraedge_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vneuraedge_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vneuraedge_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vneuraedge_top___024root___eval_static(&(vlSymsp->TOP));
        Vneuraedge_top___024root___eval_initial(&(vlSymsp->TOP));
        Vneuraedge_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vneuraedge_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vneuraedge_top::eventsPending() { return false; }

uint64_t Vneuraedge_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vneuraedge_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vneuraedge_top___024root___eval_final(Vneuraedge_top___024root* vlSelf);

VL_ATTR_COLD void Vneuraedge_top::final() {
    Vneuraedge_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vneuraedge_top::hierName() const { return vlSymsp->name(); }
const char* Vneuraedge_top::modelName() const { return "Vneuraedge_top"; }
unsigned Vneuraedge_top::threads() const { return 1; }
void Vneuraedge_top::prepareClone() const { contextp()->prepareClone(); }
void Vneuraedge_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vneuraedge_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vneuraedge_top::trace()' called on model that was Verilated without --trace option");
}
