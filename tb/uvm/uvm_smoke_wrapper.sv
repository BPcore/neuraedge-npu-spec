// Simple non-UVM smoke wrapper that instantiates a CSR interface and runs the minimal CSR sequence
`timescale 1ns/1ps
`include "tb/uvm/uvm_csr_agent.sv"
`include "tb/uvm/sequences/uvm_csr_seq.sv"

module uvm_smoke_wrapper;
  reg clk = 0; always #5 clk = ~clk;
  reg rst_n = 0;

  // create a virtual interface instance
  csr_if vif();
  initial begin
    vif.clk = clk; vif.rst_n = rst_n;
    rst_n = 0; repeat (10) @(posedge clk); rst_n = 1;
    // spawn agent & sequence
    uvm_csr_agent agent = new(vif);
    uvm_csr_seq seq = new(agent);
    fork
      begin
        seq.run();
      end
    join_any
    #10000; $display("[UVM_SMOKE] done"); $finish;
  end
endmodule
