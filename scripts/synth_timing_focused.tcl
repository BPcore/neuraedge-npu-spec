# Week 5 Advanced Synthesis Script - Timing Focused
# Optimized for maximum frequency performance

# Read RTL sources
read_verilog -sv -Irtl/top -Irtl/router -Irtl/tile -Irtl/noc -Irtl/pe -Irtl/common rtl/top/neuraedge_top_simple.v rtl/tile/neuraedge_tile.v rtl/tile/tile_controller.v rtl/tile/tile_memory.v rtl/tile/noc_router.v rtl/pe/neuraedge_pe.v rtl/common/sram_bank.v rtl/router_mesh.v

# Setup hierarchy
hierarchy -top neuraedge_top
check

# Aggressive timing optimization flow
proc
opt_expr
opt_clean
memory -nomap
opt_clean

# Technology mapping with timing focus
techmap -map +/cmos/cells_map.v || techmap
opt_expr
opt_clean

# Advanced optimizations for timing
abc -D 100 -liberty /dev/null || abc -D 100
opt_clean

# Final synthesis with timing constraints
synth -top neuraedge_top -flatten

# Register retiming and balancing
opt_clean -purge

# Statistics and outputs
stat -top neuraedge_top
write_verilog build/synthesis/neuraedge_top_timing_focused.v
write_json build/synthesis/neuraedge_top_timing_focused.json
