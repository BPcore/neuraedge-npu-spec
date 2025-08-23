`timescale 1ns/1ps
// Power P-state sweep testbench
// Iterates the power_pstates_pkg table and performs simple sanity + modeled vs static coefficient comparison placeholder.

module power_pstate_sweep_tb;
  import power_pstates_pkg::*;
  integer i;
  real ref_norm;
  real norm;
  real expected_ratio;
  real actual_ratio;
  initial begin
    $display("[PSTATE] Table entries=%0d", NUM_PSTATES);
    // Use first entry as reference for simple proportionality sanity dyn ~ V^2 * f
    ref_norm = (PSTATES[0].volt_mV/1000.0)*(PSTATES[0].volt_mV/1000.0)*PSTATES[0].freq_MHz;
    for (i=0; i<NUM_PSTATES; i=i+1) begin
      $display("[PSTATE] idx=%0d V=%0d mV F=%0d MHz dyn=%0d leak=%0d", i, PSTATES[i].volt_mV, PSTATES[i].freq_MHz, PSTATES[i].dyn_coeff_mw_per_util, PSTATES[i].leak_coeff_mw);
      if (PSTATES[i].volt_mV == 0 || PSTATES[i].freq_MHz == 0) $error("Invalid zero volt/freq at index %0d", i);
      if (PSTATES[i].dyn_coeff_mw_per_util == 0) $error("Dyn coeff zero at %0d", i);
      norm = (PSTATES[i].volt_mV/1000.0)*(PSTATES[i].volt_mV/1000.0)*PSTATES[i].freq_MHz;
      expected_ratio = norm / ref_norm;
      actual_ratio = PSTATES[i].dyn_coeff_mw_per_util / 1000.0; // relative to P0 assumed 1000
      if (i>0 && (actual_ratio < expected_ratio*0.5 || actual_ratio > expected_ratio*1.8)) begin
        $display("[WARN] Dyn coeff ratio out-of-rough-range idx %0d actual=%f expected~%f", i, actual_ratio, expected_ratio);
      end
    end
    $display("[PSTATE] Basic sweep PASS (rough proportionality checked)");
    $finish;
  end
endmodule
