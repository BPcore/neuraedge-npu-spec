#include "verilated.h"
#include "Vdvfs_smoke_tb.h"
#include <cstdio>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vdvfs_smoke_tb *tb = new Vdvfs_smoke_tb;
    tb->reset = 1;

    // Run until $finish or fatal inside testbench
    vluint64_t cycles = 0;
    while (!Verilated::gotFinish()) {
    tb->clk = 0; tb->eval();
    tb->clk = 1; tb->eval();
    if (cycles == 10) tb->reset = 0; // release reset before low util phase
        cycles++;
        if (cycles > 2000) { VL_FATAL_MT(__FILE__, __LINE__, __FILE__, "Timeout: testbench did not finish"); }
    }

    delete tb;
    printf("[C++] DVFS smoke test completed.\n");
    return 0;
}
