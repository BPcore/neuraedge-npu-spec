// Simple register-model helper for CSR agent (non-UVM-lightweight class)
`timescale 1ns/1ps

class uvm_csr_reg_model;
  // simple map helper: read/write wrappers that call into the agent's tasks
  uvm_csr_agent agent;
  function new(uvm_csr_agent a=null);
    agent = a;
  endfunction



  // Minimal register-model helper wrapping the CSR agent
  module uvm_csr_reg_model;

    import uvm_pkg::*;

    // Read a 64-bit energy counter from two 32-bit CSRs (low, high)
    function automatic bit [63:0] read_energy64(logic [31:0] addr_low, logic [31:0] addr_high);
      bit [31:0] low;
      bit [31:0] high;
      // Delegates to the CSR agent tasks (assumes agent is named csr_agent and visible)
      csr_agent.read32(addr_low, low);
      csr_agent.read32(addr_high, high);
      return {high, low};
    endfunction

    // Write a 64-bit value to two 32-bit CSRs
    task automatic write_energy64(logic [31:0] addr_low, logic [31:0] addr_high, bit [63:0] val);
      bit [31:0] low = val[31:0];
      bit [31:0] high = val[63:32];
      csr_agent.write32(addr_low, low);
      csr_agent.write32(addr_high, high);
    endtask

    // Read a 32-bit utilization value and return as milli-units (assumes CSR returns fixed-point)
    function automatic int read_util_milli(logic [31:0] addr_util);
      bit [31:0] util_raw;
      csr_agent.read32(addr_util, util_raw);
      // Example scaling: assume util_raw is [15:0] fractional; convert to milli.
      return (int)'(util_raw * 1000 >> 16);
    endfunction

    // Convenience helpers for commonly-used CSRs (addresses from docs/CSR_MAP.md)
    // Energy counter: low @ 0x60, high @ 0x64
    function automatic bit [63:0] read_energy_counter();
      return read_energy64(32'h60, 32'h64);
    endfunction

    // Utilization registers: inst @ 0x90, ma @ 0x94 -> return milli-units
    function automatic int read_util_inst_milli();
      return read_util_milli(32'h90);
    endfunction


  endmodule
endclass
