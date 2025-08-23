// Minimal CSR sequence for early UVM integration (non-UVM-compatible simple class)
`timescale 1ns/1ps

class uvm_csr_reg_seq;
  uvm_csr_agent agent;
  uvm_csr_reg_model regmodel;
  function new(uvm_csr_agent a=null);
    agent = a;
    regmodel = new(agent);
  endfunction

  task run();
    int val;
    // Read energy low word (0x60) and display
    regmodel.read_reg_addr(8'h60, val);
    $display("[UVM_SEQ] energy lo = %0d", val);
    // Example write: nudge util high threshold (if available)
    regmodel.write_reg_addr(8'hA0, 32'd80);
  endtask
endclass
