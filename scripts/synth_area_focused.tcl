# Week 5 Advanced Synthesis Script - Area Focused  
# Optimized for minimum area/gate count

# Read RTL sources
read_verilog -sv -Irtl/top -Irtl/router -Irtl/tile -Irtl/noc -Irtl/pe -Irtl/common rtl/top/neuraedge_top.v rtl/router_mesh.v

# Setup hierarchy
hierarchy -top neuraedge_top
check

# Area-focused optimization flow
proc
opt_expr -mux_undef -mux_bool -undriven -keepdc -fine
opt_merge -share_all
opt_clean

# Memory optimization for area
memory -nomap
opt_clean

# Resource sharing and area reduction
techmap -map +/cmos/cells_map.v || techmap
opt_expr -mux_undef -mux_bool
share

# Area-focused ABC optimization
abc -g AND,NAND,OR,NOR,XOR,XNOR,MUX -liberty /dev/null || abc -g cmos

# Aggressive area optimization
opt_merge -share_all
opt_clean -purge

# Final synthesis with area focus
synth -top neuraedge_top -flatten

# Remove redundant logic
opt_clean -purge
opt_merge -share_all

# Statistics and outputs
stat -top neuraedge_top
write_verilog build/synthesis/neuraedge_top_area_focused.v
write_json build/synthesis/neuraedge_top_area_focused.json
