`include "uvm_macros.svh"
import uvm_pkg::*;

interface neuraedge_pe_if(input logic clk);
  logic rst_n, pe_enable, mac_clear, accumulate_en, data_valid;
  logic [7:0] data_in, weight_in, data_out;
  logic [31:0] accum_out;
endinterface

class pe_smoke_test extends uvm_test;
  `uvm_component_utils(pe_smoke_test)
  virtual neuraedge_pe_if vif;
  function new(string name, uvm_component parent) super.new(name,parent); endfunction
  // build_phase & run_phase stubs…
endclass
