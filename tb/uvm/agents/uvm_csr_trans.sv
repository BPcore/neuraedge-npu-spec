// uvm_csr_trans.sv - minimal UVM transaction & driver skeleton (scaffold)
`ifndef UVM_CSR_TRANS_SV
`define UVM_CSR_TRANS_SV

// NOTE: This is a placeholder skeleton to be expanded when running under a UVM-capable simulator.
class csr_trans;
  rand bit [7:0] addr;
  rand bit [31:0] data;
  bit write;
  function new(); endfunction
endclass

class csr_driver;
  // placeholder callbacks to be implemented in a UVM driver
  function void drive(csr_trans t);
    // Implement bus handshake sequence here when adapting to a simulator
  endfunction
endclass

`endif
