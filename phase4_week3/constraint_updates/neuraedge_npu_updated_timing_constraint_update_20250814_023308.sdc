# NeuraEdge NPU - Baseline SDC Constraints
# Phase 4 Week 1: Synthesis Preparation & Constraint Finalization
# Generated: August 14, 2025

#################################################################################
# CLOCK DEFINITIONS
#################################################################################

# Primary system clock - NPU core operating frequency
# Target: 500 MHz for high-performance operation
create_clock -period 2.0 -name clk_npu [get_ports clk]
set_clock_uncertainty 0.1 [get_clocks clk_npu]

# Clock jitter specification (100ps peak-to-peak)
set_clock_latency -source -min 0.2 [get_clocks clk_npu]
set_clock_latency -source -max 0.3 [get_clocks clk_npu]

# Duty cycle specification (45%-55% acceptable range)
set_clock_transition 0.05 [get_clocks clk_npu]

# Optional: Lower frequency mode for power optimization
create_clock -period 4.0 -name clk_npu_low [get_ports clk] -add_delay
set_clock_uncertainty 0.05 [get_clocks clk_npu_low]

#################################################################################
# RESET CONSTRAINTS
#################################################################################

# Reset signal timing - asynchronous assertion, synchronous deassertion
set_false_path -from [get_ports rst_n]
set_input_delay 0.0 -clock clk_npu [get_ports rst_n]

# Reset recovery time
set_max_delay 1.0 -from [get_ports rst_n] -to [all_registers]

#################################################################################
# INPUT/OUTPUT TIMING CONSTRAINTS
#################################################################################

# NoC Interface Timing
# 64-bit flit inputs with setup/hold requirements
set_input_delay -clock clk_npu -max 0.8 [get_ports flat_flit_in*]
set_input_delay -clock clk_npu -min 0.2 [get_ports flat_flit_in*]

set_input_delay -clock clk_npu -max 0.5 [get_ports flat_valid_in*]
set_input_delay -clock clk_npu -min 0.1 [get_ports flat_valid_in*]

set_input_delay -clock clk_npu -max 0.5 [get_ports flat_ready_in*]
set_input_delay -clock clk_npu -min 0.1 [get_ports flat_ready_in*]

# NoC Interface Outputs
set_output_delay -clock clk_npu -max 0.8 [get_ports flat_flit_out*]
set_output_delay -clock clk_npu -min 0.2 [get_ports flat_flit_out*]

set_output_delay -clock clk_npu -max 0.5 [get_ports flat_valid_out*]
set_output_delay -clock clk_npu -min 0.1 [get_ports flat_valid_out*]

set_output_delay -clock clk_npu -max 0.5 [get_ports flat_ready_out*]
set_output_delay -clock clk_npu -min 0.1 [get_ports flat_ready_out*]

# Drive strength for I/O ports
set_driving_cell -lib_cell BUFX4 [all_inputs]
set_load -pin_load 0.05 [all_outputs]

#################################################################################
# FALSE PATH EXCEPTIONS
#################################################################################

# Reset paths are asynchronous
set_false_path -from [get_ports rst_n] -to [all_registers]

# Between different clock domains (if any)
# set_false_path -from [get_clocks clk_npu] -to [get_clocks clk_other]

# Debug/test signals that don't require timing
set_false_path -from [get_ports test_mode] -to [all_registers]
set_false_path -from [get_ports scan_enable] -to [all_registers]

# Static configuration signals
set_false_path -from [get_ports config_*] -to [all_registers]

# Power management signals
set_false_path -from [get_ports power_down] -to [all_registers]
set_false_path -from [get_ports retention_mode] -to [all_registers]

#################################################################################
# MULTI-CYCLE PATH CONSTRAINTS
#################################################################################

# MAC operation multi-cycle paths
# MAC computation can take 2 cycles: multiply + accumulate
set_multicycle_path -setup 2 -from [get_pins */pe_array_*/*/data_in_reg*/Q] \
                              -to [get_pins */pe_array_*/*/accumulator_reg*/D]
set_multicycle_path -hold 1  -from [get_pins */pe_array_*/*/data_in_reg*/Q] \
                              -to [get_pins */pe_array_*/*/accumulator_reg*/D]

# Memory access multi-cycle paths
# SRAM access can take 2 cycles for address setup + data access
set_multicycle_path -setup 2 -from [get_pins */memory_*/addr_reg*/Q] \
                              -to [get_pins */memory_*/data_out_reg*/D]
set_multicycle_path -hold 1  -from [get_pins */memory_*/addr_reg*/Q] \
                              -to [get_pins */memory_*/data_out_reg*/D]

# NoC routing multi-cycle paths
# Flit routing through mesh can take multiple cycles
set_multicycle_path -setup 3 -from [get_pins */router_*/input_flit_reg*/Q] \
                              -to [get_pins */router_*/output_flit_reg*/D]
set_multicycle_path -hold 2  -from [get_pins */router_*/input_flit_reg*/Q] \
                              -to [get_pins */router_*/output_flit_reg*/D]

# Controller command processing
# Control commands can take multiple cycles to decode and execute
set_multicycle_path -setup 3 -from [get_pins */controller_*/cmd_reg*/Q] \
                              -to [get_pins */controller_*/status_reg*/D]
set_multicycle_path -hold 2  -from [get_pins */controller_*/cmd_reg*/Q] \
                              -to [get_pins */controller_*/status_reg*/D]

#################################################################################
# CLOCK DOMAIN CROSSING (CDC) CONSTRAINTS
#################################################################################

# Synchronizer chains for asynchronous signals
# External interrupt synchronizers
set_false_path -from [get_ports ext_interrupt*] -to [get_pins */sync_reg[0]/D]
set_max_delay 1.5 -from [get_pins */sync_reg[0]/Q] -to [get_pins */sync_reg[1]/D]

# Status signal synchronizers between clock domains
set_false_path -from [get_pins */status_gen_*/Q] -to [get_pins */status_sync_reg[0]/D]
set_max_delay 2.0 -from [get_pins */status_sync_reg[*]/Q] -to [get_pins */status_sync_reg[*]/D]

# FIFO read/write pointer synchronization
set_false_path -from [get_pins */wr_ptr_gray*/Q] -to [get_pins */wr_ptr_sync_reg[0]/D]
set_false_path -from [get_pins */rd_ptr_gray*/Q] -to [get_pins */rd_ptr_sync_reg[0]/D]

# Set max delay for synchronized signals
set_max_delay 1.8 -from [get_pins */*_sync_reg[0]/Q] -to [get_pins */*_sync_reg[1]/D]

#################################################################################
# PHYSICAL CONSTRAINTS
#################################################################################

# Critical timing paths - tighten constraints
set_max_delay 1.5 [get_pins */pe_array_*/*/multiplier_*/Q] [get_pins */pe_array_*/*/accumulator_*/D]

# Memory timing constraints
set_max_delay 1.8 -from [get_pins */sram_*/addr*/Q] -to [get_pins */sram_*/data_out*/D]

# NoC mesh timing
set_max_delay 1.2 -from [get_pins */noc_router_*/input_*/Q] -to [get_pins */noc_router_*/output_*/D]

#################################################################################
# POWER CONSTRAINTS
#################################################################################

# Clock gating constraints
set_clock_gating_check -setup 0.1 [get_clocks clk_npu]
set_clock_gating_check -hold 0.05 [get_clocks clk_npu]

# Power domain constraints
create_power_domain PD_NPU_CORE
create_power_domain PD_MEMORY
create_power_domain PD_NOC

#################################################################################
# AREA AND OPTIMIZATION CONSTRAINTS
#################################################################################

# Design area constraints
set_max_area 2000000.0

# Fanout constraints
set_max_fanout 16 [get_designs]

# Transition time constraints
set_max_transition 0.5 [get_designs]

# Capacitance constraints
set_max_capacitance 0.2 [get_designs]

#################################################################################
# VERIFICATION CONSTRAINTS
#################################################################################

# DFT constraints
set_dft_signal -view existing_dft -type ScanEnable -timing {45 55} [get_ports scan_enable]
set_dft_signal -view existing_dft -type Reset -timing {10 90} [get_ports rst_n]

# JTAG constraints
create_clock -period 100.0 -name tck [get_ports tck]
set_clock_uncertainty 5.0 [get_clocks tck]
set_false_path -from [get_clocks tck] -to [get_clocks clk_npu]
set_false_path -from [get_clocks clk_npu] -to [get_clocks tck]

#################################################################################
# ENVIRONMENT CONDITIONS
#################################################################################

# Operating conditions
set_operating_conditions -min fast_1p32v_m40c -max slow_0p88v_125c

# Wire load model
set_wire_load_model -name conservative_wlm

# Temperature and voltage variations
set_pvt -type on_chip_variation -max 10.0

#################################################################################
# ADDITIONAL TIMING EXCEPTIONS
#################################################################################

# Pipeline register paths that can be relaxed
set_multicycle_path -setup 2 -through [get_pins */pipeline_reg*/Q]
set_multicycle_path -hold 1 -through [get_pins */pipeline_reg*/Q]

# Test mode timing relaxation
set_case_analysis 0 [get_ports test_mode]

# Report timing paths for verification
report_timing -path_type summary -delay_type max -max_paths 10
report_timing -path_type summary -delay_type min -max_paths 10
report_clock -attributes

#################################################################################
# END OF SDC FILE
#################################################################################

# ============================================================================
# UPDATED TIMING CONSTRAINTS - Phase 4 Week 3
# Generated: Thu 14 Aug 2025 02:33:08 AM IST
# Update Type: timing
# Severity: conservative
# ============================================================================

# Updated clock constraints based on gate-level simulation
create_clock -name sys_clk_updated -period 2200ps [get_ports sys_clk]
set_clock_uncertainty 0.2 [get_clocks sys_clk_updated]

# Updated setup/hold margins
set_input_delay  -clock sys_clk_updated -max 550ps [get_ports {data_in weight_in activation_in}]
set_input_delay  -clock sys_clk_updated -min 25ps [get_ports {data_in weight_in activation_in}]
set_output_delay -clock sys_clk_updated -max 450ps [get_ports {result_out noc_data_out}]
set_output_delay -clock sys_clk_updated -min 25ps [get_ports {result_out noc_data_out}]

# Enhanced multicycle path constraints
set_multicycle_path -setup 2 -through [get_pins pe_array_inst/*/mac_unit/*]
set_multicycle_path -hold  1 -through [get_pins pe_array_inst/*/mac_unit/*]

# Updated false path constraints
set_false_path -from [get_ports rst_n] -to [all_registers]
set_false_path -from [get_ports scan_mode] -to [all_registers]

# Clock domain crossing constraints (updated)
set_max_delay 1.5 -from [get_clocks sys_clk_updated] -to [get_clocks noc_clk]
set_max_delay 1.5 -from [get_clocks noc_clk] -to [get_clocks sys_clk_updated]

