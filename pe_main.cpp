#include "Vneuraedge_pe.h"
#include "verilated.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Vneuraedge_pe *dut = new Vneuraedge_pe;
  // TODO: apply reset & basic stimulus
  delete dut;
  return 0;
}
