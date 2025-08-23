# Simplified synthesis script - PE and Tile only (avoid router issues)
# Focus on getting real PE metrics without router complications

# Read only essential files for PE analysis
read_verilog -sv rtl/pe/neuraedge_pe.v
read_verilog -sv rtl/tile/neuraedge_tile.v

# Set top module to tile level for PE analysis
hierarchy -top neuraedge_tile

# Show initial statistics
stat

# Perform synthesis
proc; opt; memory; opt

# Technology-independent optimizations
techmap; opt

# Show final statistics with PE count focus
stat -top neuraedge_tile

# Count PE instances specifically
select -module neuraedge_pe
stat -selected
select -clear

# Write simplified netlist
write_verilog build/neuraedge_tile_synth.v

# Print completion message
logger -info "PE synthesis completed successfully"
