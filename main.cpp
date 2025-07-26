// main.cpp
#include "Vneuraedge_top.h"
#include "verilated.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vneuraedge_top* dut = new Vneuraedge_top;
    // Optionally, add clock/reset stimulus here
    delete dut;
    return 0;
}