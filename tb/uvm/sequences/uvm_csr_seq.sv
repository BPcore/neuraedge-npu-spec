// Minimal CSR sequence for early UVM integration (non-UVM-compatible simple class)
`timescale 1ns/1ps

class uvm_csr_seq;
	// sequence that toggles a CSR for a quick smoke
	uvm_csr_agent agent;
	function new(uvm_csr_agent a=null);
		agent = a;
	endfunction

	task automatic run();
		int val;
		agent.read_reg(8'h60, val); // read low energy
		$display("[UVM_SEQ] energy lo = %0d", val);
		agent.write_reg(8'hB0, 32'd500); // force util to 50%
		repeat (100) @(posedge agent.vif.clk);
		agent.write_reg(8'hB0, 32'd0); // clear override
	endtask
endclass
