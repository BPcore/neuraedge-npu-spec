// File: tile_main.cpp
#include "Vneuraedge_tile.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vneuraedge_tile* dut = new Vneuraedge_tile;
    // Reset
    dut->rst_n = 0; dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
    dut->rst_n = 1; dut->clk = 0; dut->eval();
    // TODO: add stimulus
    dut->final(); delete dut;
    return 0;
}
