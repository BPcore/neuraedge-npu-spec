// File: top_main.cpp
#include "Vneuraedge_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vneuraedge_top* dut = new Vneuraedge_top;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("top_sim.vcd");

    // Initialize
    dut->clk = 0;
    dut->rst_n = 0;
    dut->ext_valid_in = 0;
    dut->ext_flit_in = 0;

    const int SIM_CYCLES = 1000;
    for (int cycle = 0; cycle < SIM_CYCLES; cycle++) {
        dut->clk = !dut->clk;
        if (cycle == 5 && dut->clk) dut->rst_n = 1;

        // Example external input stimulus
        if (cycle > 10 && cycle < 20 && dut->clk) {
            dut->ext_valid_in = 1;
            dut->ext_flit_in  = 0xCAFEBABE;
        } else {
            dut->ext_valid_in = 0;
        }

        dut->eval();
        tfp->dump(2*cycle + (dut->clk ? 1 : 0));
        
        if (dut->clk && (cycle % 200 == 0)) {
            printf("Cycle %d ext_valid=%d ext_ready=%d ext_flit=0x%016llx\n",
                   cycle, dut->ext_valid_in, dut->ext_ready_out,
                   (unsigned long long)dut->ext_flit_out);
        }
    }

    dut->final();
    tfp->close();
    delete tfp;
    delete dut;
    return 0;
}
