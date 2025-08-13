# Week 5 SDC Constraints for NeuraEdge NPU
# Target frequency: 100 MHz (10ns period)

# Define primary clock
create_clock -name clk -period 10.0 [get_ports clk]

# Define clock uncertainty and transition
set_clock_uncertainty 0.5 [get_clocks clk]
set_clock_transition 0.1 [get_clocks clk]

# Input constraints
set_input_delay -clock clk -min 1.0 [all_inputs]
set_input_delay -clock clk -max 2.0 [all_inputs]
set_input_transition 0.1 [all_inputs]

# Output constraints  
set_output_delay -clock clk -min 1.0 [all_outputs]
set_output_delay -clock clk -max 2.0 [all_outputs]
set_load 0.1 [all_outputs]

# Timing exceptions
# False paths for reset
set_false_path -from [get_ports rst_n]

# Multi-cycle paths (if any async interfaces exist)
# set_multicycle_path -setup 2 -from [get_pins async_reg*/Q] -to [get_pins sync_reg*/D]

# Area constraints
# set_max_area [expr $TARGET_AREA]

# Power constraints (for future use)
# set_max_dynamic_power 50
# set_max_leakage_power 5
