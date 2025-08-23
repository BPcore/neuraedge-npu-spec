// Minimal UVM CSR agent skeleton (placeholder)
`timescale 1ns/1ps

interface csr_if();
  logic clk;
  logic rst_n;
  logic csr_valid;
  logic csr_write;
  logic [7:0] csr_addr;
  logic [31:0] csr_wdata;
  logic [31:0] csr_rdata;
  logic csr_ready;
endinterface

class uvm_csr_agent;
  // placeholder for driver/monitor/register model
  virtual csr_if vif;
  function new(virtual csr_if vif_in = null);
    vif = vif_in;
  endfunction

  task automatic write_reg(int addr, int data);
    vif.csr_addr = addr;
    vif.csr_wdata = data;
    vif.csr_write = 1;
    vif.csr_valid = 1;
    @(posedge vif.clk);
    wait (vif.csr_ready == 1);
    vif.csr_valid = 0; vif.csr_write = 0;
  endtask

  task automatic read_reg(int addr, output int data);
    vif.csr_addr = addr;
    vif.csr_write = 0;
    vif.csr_valid = 1;
    @(posedge vif.clk);
    wait (vif.csr_ready == 1);
    data = vif.csr_rdata;
    vif.csr_valid = 0;
  endtask

endclass
