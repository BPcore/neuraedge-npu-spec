# NeuraEdge NPU - Advanced Timing Constraints
# Week 5 - Multi-corner, Multi-mode (MCMM) constraints

# ===== CLOCK DEFINITIONS =====
# Primary system clock - 100 MHz nominal
create_clock -name sys_clk -period 10.0 [get_ports clk]

# Define clock groups (if multiple clock domains exist)
# create_clock -name noc_clk -period 8.0 [get_ports noc_clk]  # 125 MHz for NoC
# set_clock_groups -asynchronous -group {sys_clk} -group {noc_clk}

# Clock uncertainty for different corners
set_clock_uncertainty -setup 0.5 [get_clocks sys_clk]
set_clock_uncertainty -hold 0.3 [get_clocks sys_clk]

# Clock transition constraints
set_clock_transition 0.1 [get_clocks sys_clk]

# ===== I/O TIMING CONSTRAINTS =====
# Input timing constraints
set_input_delay -clock sys_clk -min 1.0 [all_inputs]
set_input_delay -clock sys_clk -max 3.0 [all_inputs]
set_input_transition -min 0.05 [all_inputs]
set_input_transition -max 0.2 [all_inputs]

# Output timing constraints  
set_output_delay -clock sys_clk -min 1.0 [all_outputs]
set_output_delay -clock sys_clk -max 3.0 [all_outputs]
set_load -min 0.05 [all_outputs]
set_load -max 0.2 [all_outputs]

# ===== TIMING EXCEPTIONS =====
# False paths
set_false_path -from [get_ports rst_n]
set_false_path -from [get_ports *test*]
# set_false_path -from [get_pins *async_reg*/Q] -to [get_pins *sync_reg*/D]

# Multi-cycle paths (for known slow operations)
# set_multicycle_path -setup 2 -from [get_pins *slow_operation*/Q] -to [get_pins *result_reg*/D]
# set_multicycle_path -hold 1 -from [get_pins *slow_operation*/Q] -to [get_pins *result_reg*/D]

# ===== DESIGN CONSTRAINTS =====
# Maximum area constraint
set_max_area 50000

# Maximum fanout constraints
set_max_fanout 16 [current_design]

# Maximum transition constraints
set_max_transition 0.5 [current_design]

# Maximum capacitance constraints  
set_max_capacitance 0.5 [current_design]

# ===== POWER CONSTRAINTS =====
# Dynamic power constraint (mW)
# set_max_dynamic_power 100

# Leakage power constraint (mW)  
# set_max_leakage_power 10

# ===== OPTIMIZATION DIRECTIVES =====
# High effort optimization
set_optimize_registers true
set_flatten true

# ===== MULTI-CORNER DEFINITIONS =====
# Operating conditions for different corners
# create_operating_conditions -name slow_corner -library slow_lib
# create_operating_conditions -name fast_corner -library fast_lib
# create_operating_conditions -name typical_corner -library typical_lib
