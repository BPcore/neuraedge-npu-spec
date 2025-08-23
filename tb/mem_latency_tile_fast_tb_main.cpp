// Simple C++ harness for mem_latency_tile_fast_tb (auto-generated)
#include "verilated.h"
#include "Vmem_latency_tile_fast_tb.h"

// Because we compiled with --no-timing, # delays in RTL are ignored.
// Provide a manual clock toggle loop here.
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmem_latency_tile_fast_tb *tb = new Vmem_latency_tile_fast_tb;
    vluint64_t cycles = 0;
    while (!Verilated::gotFinish() && cycles < 2000) {
        tb->clk = 0; tb->eval();
        if (cycles == 2) tb->reset = 0; // release reset after a couple cycles
        tb->clk = 1; tb->eval();
        cycles++;
    }
    delete tb;
    return 0;
}
