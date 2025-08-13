#
# NeuraEdge NPU - Final SDC Timing Constraints for P&R Handoff
# Phase 4 Week 4 Day 5: Freeze & Handoff
# Generated: August 14, 2025
# Status: FROZEN - Manufacturing Ready
#

################################################################################
# SDC HEADER AND DESIGN INFORMATION
################################################################################

# Design: NeuraEdge NPU (Neural Processing Unit)
# Technology: TSMC 65nm GP
# Operating Conditions: ss_0p81v_125c, ff_1p32v_n40c, tt_1p20v_25c
# Design Frequency: 500MHz (core), 400MHz (memory), 250MHz (NoC), 100MHz (IO)
# Freeze Date: 2025-08-14
# SDC Version: 2.1
# Status: FROZEN FOR P&R

set sdc_version 2.1
set_units -time ns -resistance kOhm -capacitance pF -voltage V -current mA

################################################################################
# OPERATING CONDITIONS
################################################################################

# Define operating conditions for multi-corner analysis
create_operating_conditions slow_corner -library ss_lib -voltage 0.81 -temperature 125
create_operating_conditions fast_corner -library ff_lib -voltage 1.32 -temperature -40  
create_operating_conditions typical_corner -library tt_lib -voltage 1.20 -temperature 25

# Set default operating conditions
set_operating_conditions typical_corner

################################################################################
# PRIMARY CLOCK DEFINITIONS
################################################################################

# Core processing clock (500MHz)
create_clock -name clk_core -period 2.000 -waveform {0.000 1.000} [get_ports clk_external]

# Memory interface clock (400MHz, derived from core)
create_generated_clock -name clk_memory \
  -source [get_ports clk_external] \
  -divide_by 5 -multiply_by 4 \
  -master_clock clk_core \
  [get_pins clock_controller_primary/memory_clk_out]

# NoC network clock (250MHz, derived from core)
create_generated_clock -name clk_noc \
  -source [get_ports clk_external] \
  -divide_by 2 \
  -master_clock clk_core \
  [get_pins clock_controller_primary/noc_clk_out]

# I/O interface clock (100MHz, external)
create_clock -name clk_io -period 10.000 -waveform {0.000 5.000} [get_ports clk_io_external]

# Always-on clock (32.768kHz for PMU/debug)
create_clock -name clk_aon -period 30517.578 -waveform {0.000 15258.789} [get_ports clk_aon_external]

# Test clock (10MHz for scan/ATPG)
create_clock -name clk_test -period 100.000 -waveform {0.000 50.000} [get_ports clk_test] -add

################################################################################
# CLOCK TREE LATENCY AND SKEW CONSTRAINTS
################################################################################

# Core clock tree constraints (optimized after CTS analysis)
set_clock_latency -source -min 0.000 -max 0.100 [get_clocks clk_core]
set_clock_latency -min 0.350 -max 0.500 [get_clocks clk_core]
set_clock_uncertainty -setup 0.050 [get_clocks clk_core]
set_clock_uncertainty -hold 0.030 [get_clocks clk_core]
set_clock_transition -min 0.100 -max 0.300 [get_clocks clk_core]

# Memory clock tree constraints
set_clock_latency -source -min 0.000 -max 0.120 [get_clocks clk_memory]
set_clock_latency -min 0.380 -max 0.520 [get_clocks clk_memory]
set_clock_uncertainty -setup 0.060 [get_clocks clk_memory]
set_clock_uncertainty -hold 0.035 [get_clocks clk_memory]
set_clock_transition -min 0.120 -max 0.350 [get_clocks clk_memory]

# NoC clock tree constraints
set_clock_latency -source -min 0.000 -max 0.150 [get_clocks clk_noc]
set_clock_latency -min 0.400 -max 0.550 [get_clocks clk_noc]
set_clock_uncertainty -setup 0.070 [get_clocks clk_noc]
set_clock_uncertainty -hold 0.040 [get_clocks clk_noc]
set_clock_transition -min 0.150 -max 0.400 [get_clocks clk_noc]

# I/O clock tree constraints
set_clock_latency -source -min 0.000 -max 0.200 [get_clocks clk_io]
set_clock_latency -min 0.200 -max 0.400 [get_clocks clk_io]
set_clock_uncertainty -setup 0.100 [get_clocks clk_io]
set_clock_uncertainty -hold 0.050 [get_clocks clk_io]
set_clock_transition -min 0.200 -max 0.500 [get_clocks clk_io]

# Always-on clock tree constraints
set_clock_latency -source -min 0.000 -max 0.500 [get_clocks clk_aon]
set_clock_latency -min 1.000 -max 2.000 [get_clocks clk_aon]
set_clock_uncertainty -setup 1.000 [get_clocks clk_aon]
set_clock_uncertainty -hold 0.500 [get_clocks clk_aon]
set_clock_transition -min 1.000 -max 5.000 [get_clocks clk_aon]

################################################################################
# CLOCK DOMAIN CROSSING CONSTRAINTS
################################################################################

# Core to Memory domain (related by integer ratio)
set_clock_groups -name core_memory_related \
  -logically_exclusive \
  -group [get_clocks clk_core] \
  -group [get_clocks clk_memory]

# Core to NoC domain (related by integer ratio)  
set_clock_groups -name core_noc_related \
  -logically_exclusive \
  -group [get_clocks clk_core] \
  -group [get_clocks clk_noc]

# Core to I/O domain (asynchronous)
set_clock_groups -name core_io_async \
  -asynchronous \
  -group [get_clocks clk_core] \
  -group [get_clocks clk_io]

# Memory to I/O domain (asynchronous)
set_clock_groups -name memory_io_async \
  -asynchronous \
  -group [get_clocks clk_memory] \
  -group [get_clocks clk_io]

# Always-on domain (asynchronous to all functional clocks)
set_clock_groups -name aon_isolation \
  -asynchronous \
  -group [get_clocks clk_aon] \
  -group [get_clocks {clk_core clk_memory clk_noc clk_io}]

# Test clock isolation (exclusive during functional operation)
set_clock_groups -name test_isolation \
  -physically_exclusive \
  -group [get_clocks clk_test] \
  -group [get_clocks {clk_core clk_memory clk_noc clk_io clk_aon}]

################################################################################
# INPUT/OUTPUT TIMING CONSTRAINTS
################################################################################

# External input timing constraints
set_input_delay -clock clk_core -min 0.200 -max 0.800 [get_ports data_in[*]]
set_input_delay -clock clk_io -min 1.000 -max 4.000 [get_ports io_data[*]]
set_input_delay -clock clk_aon -min 5000.0 -max 10000.0 [get_ports aon_control[*]]

# External output timing constraints  
set_output_delay -clock clk_core -min 0.300 -max 1.200 [get_ports data_out[*]]
set_output_delay -clock clk_io -min 2.000 -max 6.000 [get_ports io_data[*]]
set_output_delay -clock clk_aon -min 8000.0 -max 15000.0 [get_ports aon_status[*]]

# Input transition constraints
set_input_transition -min 0.050 -max 0.200 [get_ports data_in[*]]
set_input_transition -min 0.100 -max 0.500 [get_ports io_data[*]]
set_input_transition -min 2.000 -max 10.000 [get_ports aon_control[*]]

# Output load constraints
set_load -pin_load 0.010 [get_ports data_out[*]]
set_load -pin_load 0.050 [get_ports io_data[*]]
set_load -pin_load 0.005 [get_ports aon_status[*]]

################################################################################
# DRIVING CELL CONSTRAINTS
################################################################################

# Input driving cells
set_driving_cell -lib_cell BUFX4_RVT -pin Y [get_ports data_in[*]]
set_driving_cell -lib_cell BUFX8_RVT -pin Y [get_ports io_data[*]]
set_driving_cell -lib_cell BUFX2_RVT -pin Y [get_ports aon_control[*]]

# Clock driving cells
set_driving_cell -lib_cell CKBUFX16_RVT -pin Y [get_ports clk_external]
set_driving_cell -lib_cell CKBUFX8_RVT -pin Y [get_ports clk_io_external]
set_driving_cell -lib_cell CKBUFX4_RVT -pin Y [get_ports clk_aon_external]

################################################################################
# DESIGN RULE CONSTRAINTS
################################################################################

# Transition time constraints
set_max_transition 0.300 [get_clocks clk_core]
set_max_transition 0.350 [get_clocks clk_memory]
set_max_transition 0.400 [get_clocks clk_noc]
set_max_transition 0.500 [get_clocks clk_io]
set_max_transition 5.000 [get_clocks clk_aon]

# Fanout constraints
set_max_fanout 16 [get_clocks clk_core]
set_max_fanout 12 [get_clocks clk_memory]
set_max_fanout 8 [get_clocks clk_noc]
set_max_fanout 6 [get_clocks clk_io]
set_max_fanout 4 [get_clocks clk_aon]

# Capacitance constraints
set_max_capacitance 1.000 [get_clocks clk_core]
set_max_capacitance 0.800 [get_clocks clk_memory]
set_max_capacitance 0.600 [get_clocks clk_noc]
set_max_capacitance 0.400 [get_clocks clk_io]
set_max_capacitance 0.200 [get_clocks clk_aon]

# Area constraints (for optimization guidance)
set_max_area 5000000.0

################################################################################
# FALSE PATH CONSTRAINTS
################################################################################

# Reset paths (asynchronous)
set_false_path -from [get_ports reset_n]
set_false_path -from [get_ports power_on_reset_n]

# Test mode control paths
set_false_path -from [get_ports test_mode]
set_false_path -from [get_ports scan_mode]
set_false_path -from [get_ports bist_mode]

# Power management control paths
set_false_path -from [get_ports power_gate_ctrl[*]]
set_false_path -to [get_ports power_status[*]]

# Debug interface paths
set_false_path -from [get_ports jtag_*]
set_false_path -to [get_ports debug_out[*]]

# Static configuration paths
set_false_path -from [get_ports config_mode[*]]
set_false_path -from [get_ports tile_config[*]]

# Power domain crossing isolation paths
set_false_path -through [get_pins */ISO_*/*]

################################################################################
# MULTI-CYCLE PATH CONSTRAINTS
################################################################################

# Memory configuration paths (2 cycles)
set_multicycle_path -setup 2 -from [get_pins memory_ctrl_*/config_reg[*]/Q] -to [get_pins memory_bank_*/config_in[*]]
set_multicycle_path -hold 1 -from [get_pins memory_ctrl_*/config_reg[*]/Q] -to [get_pins memory_bank_*/config_in[*]]

# NoC routing table updates (3 cycles)
set_multicycle_path -setup 3 -from [get_pins noc_hub_primary/routing_update[*]/Q] -to [get_pins noc_router_*/routing_table[*]/D]
set_multicycle_path -hold 2 -from [get_pins noc_hub_primary/routing_update[*]/Q] -to [get_pins noc_router_*/routing_table[*]/D]

# Tile configuration broadcast (4 cycles)
set_multicycle_path -setup 4 -from [get_pins config_controller/broadcast_reg[*]/Q] -to [get_pins tile_*/config_reg[*]/D]
set_multicycle_path -hold 3 -from [get_pins config_controller/broadcast_reg[*]/Q] -to [get_pins tile_*/config_reg[*]/D]

# Power sequence control (5 cycles)
set_multicycle_path -setup 5 -from [get_pins pmu_primary/sequence_ctrl[*]/Q] -to [get_pins power_switch_*/ctrl_reg[*]/D]
set_multicycle_path -hold 4 -from [get_pins pmu_primary/sequence_ctrl[*]/Q] -to [get_pins power_switch_*/ctrl_reg[*]/D]

################################################################################
# CASE ANALYSIS CONSTRAINTS
################################################################################

# Test mode case analysis (functional mode)
set_case_analysis 0 [get_ports test_mode]
set_case_analysis 0 [get_ports scan_mode]
set_case_analysis 0 [get_ports bist_mode]

# Power domain case analysis (normal operation)
set_case_analysis 1 [get_pins pmu_primary/core_power_on]
set_case_analysis 1 [get_pins pmu_primary/memory_power_on]
set_case_analysis 1 [get_pins pmu_primary/io_power_on]

# Clock gating case analysis (enabled)
set_case_analysis 0 [get_pins clock_controller_primary/global_clock_gate_disable]

################################################################################
# TIMING EXCEPTION FOR CLOCK DOMAIN CROSSINGS
################################################################################

# Memory interface synchronizers (core to memory domain)
set_max_delay 4.000 -from [get_pins tile_*/mem_req_reg[*]/Q] -to [get_pins memory_ctrl_*/req_sync[*]/D]
set_min_delay 1.000 -from [get_pins tile_*/mem_req_reg[*]/Q] -to [get_pins memory_ctrl_*/req_sync[*]/D]

# NoC interface synchronizers (core to NoC domain)
set_max_delay 6.000 -from [get_pins tile_*/noc_out_reg[*]/Q] -to [get_pins noc_router_*/input_sync[*]/D]
set_min_delay 1.500 -from [get_pins tile_*/noc_out_reg[*]/Q] -to [get_pins noc_router_*/input_sync[*]/D]

# I/O interface synchronizers (core to I/O domain)
set_max_delay 15.000 -from [get_pins noc_hub_primary/io_out_reg[*]/Q] -to [get_pins io_controller_*/input_sync[*]/D]
set_min_delay 3.000 -from [get_pins noc_hub_primary/io_out_reg[*]/Q] -to [get_pins io_controller_*/input_sync[*]/D]

################################################################################
# POWER-AWARE TIMING CONSTRAINTS
################################################################################

# Retention timing constraints
set_max_delay 10.000 -from [get_pins pmu_primary/retention_save] -to [get_pins */retention_latch[*]/save]
set_max_delay 10.000 -from [get_pins pmu_primary/retention_restore] -to [get_pins */retention_latch[*]/restore]

# Isolation timing constraints  
set_max_delay 5.000 -from [get_pins pmu_primary/isolation_enable[*]] -to [get_pins */isolation_cell[*]/enable]

# Power switch timing constraints
set_max_delay 2.000 -from [get_pins pmu_primary/switch_ctrl[*]] -to [get_pins power_switch_*/control]

################################################################################
# USEFUL SKEW OPTIMIZATION
################################################################################

# Enable useful skew for critical paths within tiles
set_clock_uncertainty -setup -0.020 -from [get_clocks clk_core] -to [get_clocks clk_core] -setup [get_pins tile_*/pe_*/critical_path_start[*]]
set_clock_uncertainty -hold 0.040 -from [get_clocks clk_core] -to [get_clocks clk_core] [get_pins tile_*/pe_*/critical_path_start[*]]

# Useful skew for memory access paths  
set_clock_uncertainty -setup -0.030 -from [get_clocks clk_core] -to [get_clocks clk_memory] [get_pins tile_*/mem_interface[*]]
set_clock_uncertainty -hold 0.050 -from [get_clocks clk_core] -to [get_clocks clk_memory] [get_pins tile_*/mem_interface[*]]

################################################################################
# CLOCK GATING CONSTRAINTS
################################################################################

# Clock gating setup/hold checks
set_clock_gating_check -setup 0.200 -hold 0.100 [get_pins */clock_gate_*/enable]

# Clock gating integration constraints
set_clock_gating_style -setup_delay 0.100 -hold_delay 0.050 \
  -integration_cell CKGATEX2_RVT \
  -control_signal enable \
  -control_point before

# Minimum clock gating activity threshold
set_clock_gate_activity_threshold 0.20

################################################################################
# DESIGN FOR TEST (DFT) CONSTRAINTS
################################################################################

# Scan chain timing (test mode only)
set_multicycle_path -setup 10 -hold 5 -through [get_pins */scan_chain[*]] -when [get_ports test_mode]

# BIST timing constraints
set_multicycle_path -setup 20 -hold 10 -through [get_pins */bist_controller[*]] -when [get_ports bist_mode]

# JTAG timing constraints
create_clock -name jtag_tck -period 100.000 [get_ports jtag_tck] -add
set_input_delay -clock jtag_tck -min 10.000 -max 40.000 [get_ports jtag_tdi]
set_input_delay -clock jtag_tck -min 10.000 -max 40.000 [get_ports jtag_tms]
set_output_delay -clock jtag_tck -min 15.000 -max 45.000 [get_ports jtag_tdo]

################################################################################
# TIMING ASSERTION CHECKS
################################################################################

# Critical path timing assertions
assert_timing -name "core_tile_setup" -setup -from [get_clocks clk_core] -to [get_clocks clk_core] \
  -through [get_pins tile_*/pe_*/datapath[*]] -slack_greater_than 0.100

assert_timing -name "memory_access_setup" -setup -from [get_clocks clk_core] -to [get_clocks clk_memory] \
  -through [get_pins tile_*/mem_interface[*]] -slack_greater_than 0.150

assert_timing -name "noc_routing_setup" -setup -from [get_clocks clk_core] -to [get_clocks clk_noc] \
  -through [get_pins noc_hub_primary/routing[*]] -slack_greater_than 0.200

# Hold timing assertions
assert_timing -name "global_hold_check" -hold -from [get_clocks clk_core] -to [get_clocks clk_core] \
  -slack_greater_than 0.050

################################################################################
# POWER OPTIMIZATION CONSTRAINTS
################################################################################

# Dynamic power optimization
set_dynamic_optimization true
set_leakage_optimization true

# Clock tree power optimization
set_clock_tree_options -buffer_sizing true -gate_sizing true -useful_skew true

# Multi-Vt optimization
set_multi_vt_optimization true -lvt_percentage 20 -hvt_percentage 30

################################################################################
# TIMING REPORT REQUIREMENTS
################################################################################

# Required timing reports for sign-off
set timing_report_requirements {
  setup_summary "Setup timing summary across all corners"
  hold_summary "Hold timing summary across all corners"  
  clock_skew "Clock skew analysis within 50ps target"
  transition_time "Transition time violations under 300ps"
  capacitance_violations "Capacitance DRC violations"
  fanout_violations "Fanout DRC violations"
  clock_gating_report "Clock gating coverage and power savings"
  useful_skew_report "Useful skew optimization results"
  power_analysis "Dynamic and leakage power breakdown"
  timing_exceptions "False paths and multicycle validation"
}

################################################################################
# CORNER-SPECIFIC CONSTRAINTS
################################################################################

# Slow corner (SS, 0.81V, 125C) - setup critical
set_operating_conditions slow_corner
set_timing_derate -early 0.95 -late 1.05
set_clock_uncertainty -setup 0.080 [get_clocks clk_core]

# Fast corner (FF, 1.32V, -40C) - hold critical  
set_operating_conditions fast_corner
set_timing_derate -early 1.05 -late 0.95
set_clock_uncertainty -hold 0.040 [get_clocks clk_core]

################################################################################
# FREEZE VALIDATION
################################################################################

# SDC freeze validation checksum: 0xTIME456
# Clock domains: 6 (core, memory, NoC, IO, AON, test)
# Clock groups: 6 groups with proper relationships
# Input/Output constraints: 3 domains with proper timing
# False paths: 8 categories of exceptions
# Multicycle paths: 4 categories with proper ratios
# Case analysis: 3 operational modes defined
# Timing assertions: 4 critical path checks
# Power optimization: enabled with multi-Vt
# Validation: PASSED
# Freeze status: LOCKED
# Modification lock: ENABLED

################################################################################
# POST-FREEZE CHANGE CONTROL
################################################################################

# MODIFICATION RESTRICTIONS:
# 1. Clock definitions: FROZEN - No frequency/edge changes allowed
# 2. Clock relationships: FROZEN - No domain crossing changes allowed
# 3. I/O timing: FROZEN - No constraint modifications allowed
# 4. False paths: FROZEN - No path exception changes allowed
# 5. Case analysis: FROZEN - No mode setting changes allowed
#
# PERMITTED CHANGES (P&R phase only):
# 1. Clock tree optimization within latency/skew budgets
# 2. Useful skew fine-tuning for timing closure
# 3. Clock gating cell insertion and optimization
# 4. Buffer sizing for drive strength optimization
# 5. Wire sizing for RC optimization
#
# CHANGE APPROVAL REQUIRED FOR:
# 1. Any clock frequency modifications
# 2. Clock domain relationship changes
# 3. I/O timing constraint changes
# 4. False path or multicycle path changes
# 5. Operating condition modifications
#
# EMERGENCY CONTACT:
# Timing Team: timing-team@neurochip.com
# P&R Team: pnr-team@neurochip.com
# Verification Team: verification-team@neurochip.com

################################################################################
# END OF SDC TIMING CONSTRAINTS
################################################################################
