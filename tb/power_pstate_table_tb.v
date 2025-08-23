`timescale 1ns/1ps
module power_pstate_table_tb;
  import power_pstates_pkg::*;
  initial begin
    $display("[PSTATE_TBL] NUM_PSTATES=%0d", NUM_PSTATES);
    for (int i=0;i<NUM_PSTATES;i++) begin
      $display("P%0d V=%0d mV F=%0d MHz dyn=%0d leak=%0d", i, PSTATES[i].volt_mV, PSTATES[i].freq_MHz, PSTATES[i].dyn_coeff_mw_per_util, PSTATES[i].leak_coeff_mw);
      if (PSTATES[i].volt_mV == 0 || PSTATES[i].freq_MHz == 0) begin
        $error("Invalid zero entry at index %0d", i);
      end
    end
    $finish;
  end
endmodule
