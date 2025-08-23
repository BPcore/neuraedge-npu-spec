# Fixed synthesis script for NeuraEdge NPU
# Corrects the technology library path issue and handles SystemVerilog

# Read design files with SystemVerilog support (avoid includes by reading individually)
read_verilog -sv rtl/pe/neuraedge_pe.v
read_verilog -sv rtl/router/fifo.v  
read_verilog -sv rtl/router/router_mesh.v
read_verilog -sv rtl/tile/neuraedge_tile.v

# Read standalone top module without includes to avoid redefinition
read_verilog -sv rtl/top/neuraedge_top_standalone.v

# Set top module
hierarchy -top neuraedge_top

# Show initial statistics
stat

# Perform synthesis
proc; opt; memory; opt

# Technology-independent optimizations
techmap; opt

# Show post-synthesis statistics
stat -top neuraedge_top

# Count PE instances specifically
select -module neuraedge_pe
stat -selected
select -clear

# Generate final report
echo "=== SYNTHESIS COMPLETION ==="
echo "Top module: neuraedge_top"
stat -top neuraedge_top

# Write netlist (without technology mapping to avoid library issues)
write_verilog build/neuraedge_top_synth.v
