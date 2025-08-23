#include "verilated.h"
#include "Vmem_latency_tb.h"
#include <cstdio>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmem_latency_tb *tb = new Vmem_latency_tb;
    tb->reset = 1;

    vluint64_t cycles = 0;
    while (!Verilated::gotFinish()) {
        tb->clk = 0; tb->eval();
        tb->clk = 1; tb->eval();
        if (cycles == 5) tb->reset = 0; // release reset
        cycles++;
        if (cycles > 5000) { VL_FATAL_MT(__FILE__, __LINE__, __FILE__, "Timeout: mem_latency_tb did not finish"); }
    }

    delete tb;
    printf("[C++] mem_latency_tb completed.\n");
    return 0;
}
