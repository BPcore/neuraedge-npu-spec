#
# NeuraEdge NPU - Clock Tree Constraints (SDC)
# Phase 4 Week 4 Day 3: Clock Definitions and CTS Constraints
# Generated: August 14, 2025
#

################################################################################
# CLOCK SOURCE DEFINITIONS
################################################################################

# Primary external clock input (500MHz)
create_clock -name core_clk -period 2.0 -waveform {0.0 1.0} [get_ports clk_external]

# Memory interface clock (400MHz, derived from core)
create_generated_clock -name memory_clk \
  -source [get_ports clk_external] \
  -divide_by 5 -multiply_by 4 \
  -master_clock core_clk \
  [get_pins clk_gen/memory_clk_out]

# NoC network clock (250MHz, derived from core)  
create_generated_clock -name noc_clk \
  -source [get_ports clk_external] \
  -divide_by 2 \
  -master_clock core_clk \
  [get_pins clk_gen/noc_clk_out]

# I/O interface clock (100MHz, external source)
create_clock -name io_clk -period 10.0 -waveform {0.0 5.0} [get_ports clk_io_external]

# Always-on clock (32.768kHz for PMU/debug)
create_clock -name aon_clk -period 30517.578 -waveform {0.0 15258.789} [get_ports clk_aon_external]

# Test clock (for scan/ATPG, 10MHz)
create_clock -name test_clk -period 100.0 -waveform {0.0 50.0} [get_ports clk_test] -add

################################################################################
# CLOCK TREE LATENCY CONSTRAINTS
################################################################################

# Clock network latency targets (source to register clock pins)
set_clock_latency -source -min 0.0 [get_clocks core_clk]
set_clock_latency -source -max 0.1 [get_clocks core_clk]

# Clock tree insertion delay targets
set_clock_latency -min 0.300 [get_clocks core_clk]     # 300ps minimum insertion
set_clock_latency -max 0.500 [get_clocks core_clk]     # 500ps maximum insertion

set_clock_latency -min 0.320 [get_clocks memory_clk]   # 320ps minimum insertion  
set_clock_latency -max 0.520 [get_clocks memory_clk]   # 520ps maximum insertion

set_clock_latency -min 0.350 [get_clocks noc_clk]      # 350ps minimum insertion
set_clock_latency -max 0.550 [get_clocks noc_clk]      # 550ps maximum insertion

set_clock_latency -min 0.200 [get_clocks io_clk]       # 200ps minimum insertion
set_clock_latency -max 0.400 [get_clocks io_clk]       # 400ps maximum insertion

set_clock_latency -min 1.000 [get_clocks aon_clk]      # 1ns minimum insertion
set_clock_latency -max 2.000 [get_clocks aon_clk]      # 2ns maximum insertion

################################################################################
# CLOCK SKEW CONSTRAINTS
################################################################################

# Global clock skew targets (between any two registers)
set_clock_uncertainty -setup 0.050 [get_clocks core_clk]    # 50ps setup skew
set_clock_uncertainty -hold  0.030 [get_clocks core_clk]    # 30ps hold skew

set_clock_uncertainty -setup 0.060 [get_clocks memory_clk]  # 60ps setup skew
set_clock_uncertainty -hold  0.035 [get_clocks memory_clk]  # 35ps hold skew

set_clock_uncertainty -setup 0.070 [get_clocks noc_clk]     # 70ps setup skew
set_clock_uncertainty -hold  0.040 [get_clocks noc_clk]     # 40ps hold skew

set_clock_uncertainty -setup 0.100 [get_clocks io_clk]      # 100ps setup skew
set_clock_uncertainty -hold  0.050 [get_clocks io_clk]      # 50ps hold skew

set_clock_uncertainty -setup 1.000 [get_clocks aon_clk]     # 1ns setup skew
set_clock_uncertainty -hold  0.500 [get_clocks aon_clk]     # 500ps hold skew

################################################################################
# CLOCK TRANSITION TIME CONSTRAINTS
################################################################################

# Clock transition time limits (rise/fall times)
set_clock_transition -min 0.100 [get_clocks core_clk]       # 100ps minimum
set_clock_transition -max 0.300 [get_clocks core_clk]       # 300ps maximum

set_clock_transition -min 0.120 [get_clocks memory_clk]     # 120ps minimum
set_clock_transition -max 0.350 [get_clocks memory_clk]     # 350ps maximum

set_clock_transition -min 0.150 [get_clocks noc_clk]        # 150ps minimum
set_clock_transition -max 0.400 [get_clocks noc_clk]        # 400ps maximum

set_clock_transition -min 0.200 [get_clocks io_clk]         # 200ps minimum
set_clock_transition -max 0.500 [get_clocks io_clk]         # 500ps maximum

set_clock_transition -min 1.000 [get_clocks aon_clk]        # 1ns minimum
set_clock_transition -max 5.000 [get_clocks aon_clk]        # 5ns maximum

################################################################################
# CLOCK DOMAIN CROSSING CONSTRAINTS
################################################################################

# Core to Memory domain crossings
set_clock_groups -name core_to_memory -asynchronous \
  -group [get_clocks core_clk] \
  -group [get_clocks memory_clk]

# Core to NoC domain crossings  
set_clock_groups -name core_to_noc -logically_exclusive \
  -group [get_clocks core_clk] \
  -group [get_clocks noc_clk]

# Core to I/O domain crossings
set_clock_groups -name core_to_io -asynchronous \
  -group [get_clocks core_clk] \
  -group [get_clocks io_clk]

# Always-on domain (asynchronous to all others)
set_clock_groups -name aon_isolation -asynchronous \
  -group [get_clocks aon_clk] \
  -group [get_clocks {core_clk memory_clk noc_clk io_clk}]

# Test clock isolation (during functional mode)
set_clock_groups -name test_isolation -physically_exclusive \
  -group [get_clocks test_clk] \
  -group [get_clocks {core_clk memory_clk noc_clk io_clk aon_clk}]

################################################################################
# CLOCK TREE SYNTHESIS CONSTRAINTS
################################################################################

# Clock tree buffer constraints
set_driving_cell -lib_cell CKBUFX16_RVT [get_ports clk_external]
set_driving_cell -lib_cell CKBUFX8_RVT [get_ports clk_io_external]
set_driving_cell -lib_cell CKBUFX4_RVT [get_ports clk_aon_external]

# Clock load constraints
set_load -pin_load 0.05 [get_ports clk_external]
set_load -pin_load 0.03 [get_ports clk_io_external]  
set_load -pin_load 0.02 [get_ports clk_aon_external]

# Clock tree DRC constraints
set_max_fanout 16 [get_clocks core_clk]
set_max_fanout 12 [get_clocks memory_clk]
set_max_fanout 8 [get_clocks noc_clk]
set_max_fanout 6 [get_clocks io_clk]
set_max_fanout 4 [get_clocks aon_clk]

set_max_capacitance 1.0 [get_clocks core_clk]
set_max_capacitance 0.8 [get_clocks memory_clk]
set_max_capacitance 0.6 [get_clocks noc_clk]
set_max_capacitance 0.4 [get_clocks io_clk]
set_max_capacitance 0.2 [get_clocks aon_clk]

################################################################################
# CLOCK GATING CONSTRAINTS
################################################################################

# Enable clock gating for power optimization
set_clock_gating_style -setup_delay 0.100 -hold_delay 0.050 \
  -integration_cell CKGATEX2_RVT \
  -control_signal enable \
  -control_point before

# Clock gating exceptions (critical paths)
set_case_analysis 1 [get_pins reset_controller/clk_gate_disable]
set_case_analysis 1 [get_pins debug_controller/clk_gate_bypass]

# Minimum clock gating activity threshold
set_clock_gating_check -setup 0.200 -hold 0.100

################################################################################
# CLOCK TREE REGION ASSIGNMENTS
################################################################################

# Assign clock regions to quadrants for balanced distribution
set_clock_tree_region -name clk_region_q0 \
  -bbox {100000 100000 1200000 1200000} \
  -clock core_clk

set_clock_tree_region -name clk_region_q1 \
  -bbox {1300000 100000 2400000 1200000} \
  -clock core_clk

set_clock_tree_region -name clk_region_q2 \
  -bbox {100000 1300000 1200000 2400000} \
  -clock core_clk

set_clock_tree_region -name clk_region_q3 \
  -bbox {1300000 1300000 2400000 2400000} \
  -clock core_clk

# Memory clock regions (SRAM banks)
set_clock_tree_region -name memory_region_sw \
  -bbox {25000 25000 125000 125000} \
  -clock memory_clk

set_clock_tree_region -name memory_region_se \
  -bbox {2375000 25000 2475000 125000} \
  -clock memory_clk

set_clock_tree_region -name memory_region_nw \
  -bbox {25000 2375000 125000 2475000} \
  -clock memory_clk

set_clock_tree_region -name memory_region_ne \
  -bbox {2375000 2375000 2475000 2475000} \
  -clock memory_clk

################################################################################
# USEFUL SKEW OPTIMIZATION
################################################################################

# Enable useful skew optimization for improved timing
set_clock_tree_exceptions -from [get_clocks core_clk] \
  -to [get_clocks core_clk] \
  -setup_skew_target 0.020    # 20ps beneficial skew for setup
  
set_clock_tree_exceptions -from [get_clocks core_clk] \
  -to [get_clocks core_clk] \
  -hold_skew_target -0.010    # -10ps beneficial skew for hold

# Critical path timing optimization
set_clock_tree_exceptions \
  -from [get_pins tile_*/pe_*/critical_path_start] \
  -to [get_pins tile_*/pe_*/critical_path_end] \
  -setup_skew_target 0.050    # 50ps beneficial skew

################################################################################
# CLOCK TREE VERIFICATION CONSTRAINTS
################################################################################

# Maximum clock tree depth
set_max_clock_tree_depth 8 [get_clocks core_clk]
set_max_clock_tree_depth 6 [get_clocks memory_clk]
set_max_clock_tree_depth 6 [get_clocks noc_clk]
set_max_clock_tree_depth 4 [get_clocks io_clk]
set_max_clock_tree_depth 3 [get_clocks aon_clk]

# Clock tree buffer size constraints
set_clock_tree_buffer_sizing -min_size X1 -max_size X32 \
  -preferred_sizes {X2 X4 X8 X16}

# Clock tree metal layer usage
set_clock_tree_routing_rule -layers {M3 M4 M5 M6 M7 M8} \
  -preferred_layers {M6 M7 M8} \
  -shield_layers {M5 M7}

################################################################################
# PVT CORNER DEFINITIONS FOR CTS
################################################################################

# Process corners for clock tree analysis
define_corners -name ss_0p81v_125c \
  -library ss_lib \
  -voltage 0.81 \
  -temperature 125

define_corners -name ff_1p32v_n40c \
  -library ff_lib \
  -voltage 1.32 \
  -temperature -40

define_corners -name tt_1p20v_25c \
  -library tt_lib \
  -voltage 1.20 \
  -temperature 25

# Clock tree corners for skew analysis
set_operating_conditions -analysis_type on_chip_variation \
  -corner ss_0p81v_125c \
  -max_skew_corner ss_0p81v_125c \
  -min_skew_corner ff_1p32v_n40c

################################################################################
# CLOCK TREE OPTIMIZATION DIRECTIVES
################################################################################

# Optimization priorities
set_clock_tree_optimization_directive \
  -priority {skew insertion_delay power area} \
  -effort high \
  -iterations 3

# Buffer selection preferences
set_clock_tree_buffer_selection \
  -prefer_low_vt true \
  -prefer_regular_vt false \
  -prefer_high_vt false \
  -power_effort medium

# Routing optimization
set_clock_tree_routing_optimization \
  -minimize_via true \
  -prefer_symmetric true \
  -shield_critical_nets true \
  -avoid_congestion true

################################################################################
# CLOCK TREE ANALYSIS REQUIREMENTS
################################################################################

# Required timing analysis after CTS
set cts_analysis_requirements {
  setup_analysis     "Multi-corner setup timing with useful skew"
  hold_analysis      "Multi-corner hold timing with min skew"
  transition_analysis "Clock transition time verification"
  skew_analysis      "Global and local skew analysis"
  jitter_analysis    "Clock jitter accumulation analysis"
  power_analysis     "Clock tree dynamic power consumption"
  noise_analysis     "Clock noise and crosstalk analysis"
  variation_analysis "Process/voltage/temperature sensitivity"
}

# Required physical verification after CTS
set cts_physical_requirements {
  drc_clean         "All clock routing DRC violations resolved"
  antenna_clean     "No antenna violations on clock nets"
  em_clean          "Electromigration rules compliance"
  ir_drop_analysis  "Clock tree IR drop within 5% tolerance"
  timing_closure    "Setup/hold timing closure achieved"
}

################################################################################
# END OF CLOCK CONSTRAINTS
################################################################################
