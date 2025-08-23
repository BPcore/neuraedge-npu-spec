#include "verilated.h"
#include "Vmem_latency_tile_tb.h"
#include <cstdio>
int main(int argc, char** argv){
    Verilated::commandArgs(argc, argv);
    Vmem_latency_tile_tb* tb = new Vmem_latency_tile_tb;
    while(!Verilated::gotFinish()) { tb->eval(); }
    delete tb; printf("[C++] mem_latency_tile_tb done\n"); return 0;
}
