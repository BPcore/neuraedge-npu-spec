# Makefile for Verilator + Yosys + SymbiYosys CI flow

# --- Variables ---
VERILATOR       ?= verilator
YOSYS           ?= yosys
SBY             ?= sby

# RTL sources for tile, NoC, and PE
TILE_SOURCES    = $(wildcard rtl/tile/*.v) \
				  $(wildcard rtl/noc/*.v) \
				  $(wildcard rtl/pe/*.v)

# --- Targets ---
.PHONY: all lint_tile compile_tile synth_tile formal_compile clean

# 'all' target: runs all main CI steps in sequence
all: lint_tile compile_tile synth_tile formal_compile

# Lint tile and NoC RTL files
lint_tile:
	@echo "Linting tile and NoC RTL files..."
	@$(VERILATOR) --lint-only -sv $(TILE_SOURCES) --top-module neuraedge_tile -Irtl/pe

# Compile tile RTL for simulation
compile_tile:
	@echo "Compiling tile RTL for simulation..."
	cp -f tile_main.cpp obj_dir/
	@$(VERILATOR) --cc -exe --build -j0 -sv $(TILE_SOURCES) --top-module neuraedge_tile tile_main.cpp -Irtl/pe

# Synthesis for tile
synth_tile:
	@echo "Running synthesis for tile..."
	@$(YOSYS) -p "read_verilog -sv $(TILE_SOURCES); synth -top neuraedge_tile; stat"

# Formal property file parsing
formal_compile:
	@echo "Running formal property file parsing..."
	@$(SBY) formal.sby

# Clean build artifacts
clean:
	@echo "Cleaning up..."
	@rm -rf obj_dir *.vcd *.out *.log *.json *.xml *.sby
