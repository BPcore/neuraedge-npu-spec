// Minimal Verilator simulation entry for neuraedge_top
#include <verilated.h>
#include "Vneuraedge_top.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vneuraedge_top* top = new Vneuraedge_top;
    // Simulation loop stub
    for (int i = 0; i < 10; ++i) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
    delete top;
    return 0;
}
