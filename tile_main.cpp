// File: tile_main.cpp
// Description: Minimal C++ testbench driver for the NeuraEdge tile.

#include "Vneuraedge_tile.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vneuraedge_tile* dut = new Vneuraedge_tile;

    // --- Basic Reset Sequence ---
    dut->rst_n = 0;
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->rst_n = 1;
    dut->clk = 0;
    dut->eval();

    // Simulation logic will be added here.
    // For now, we just ensure it compiles.

    dut->final();
    delete dut;
    return 0;
}
