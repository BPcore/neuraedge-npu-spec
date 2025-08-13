# Week 5 Synthesis Optimization Script - Baseline
# This script provides a comprehensive baseline synthesis flow for PPA comparison

# Read RTL sources (using simplified top module for Verilog-2005 compatibility)
read_verilog -sv -Irtl/top -Irtl/router -Irtl/tile -Irtl/noc -Irtl/pe -Irtl/common rtl/top/neuraedge_top_simple.v rtl/tile/neuraedge_tile.v rtl/tile/tile_controller.v rtl/tile/tile_memory.v rtl/tile/noc_router.v rtl/pe/neuraedge_pe.v rtl/common/sram_bank.v rtl/router_mesh.v

# Basic hierarchy and elaboration
hierarchy -top neuraedge_top
check

# Basic synthesis flow
proc
opt
memory
opt
techmap
opt

# Generate baseline netlist
synth -top neuraedge_top

# Report statistics
stat -top neuraedge_top

# Write outputs
write_verilog build/synthesis/neuraedge_top_baseline.v
write_json build/synthesis/neuraedge_top_baseline.json

# Generate timing and area reports
tee -o build/qor_reports/baseline_area_report.txt stat -top neuraedge_top
