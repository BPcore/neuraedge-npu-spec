# Makefile for NeuraEdge NPU Project

# --- Variables ---
VERILATOR       ?= verilator
YOSYS           ?= yosys
SBY             ?= sby

# Source files
RTL_TOP         = rtl/top/neuraedge_top.sv
RTL_SOURCES     = $(wildcard rtl/pe/*.v)       \
				  $(wildcard rtl/common/*.sv)  \
				  $(wildcard rtl/tile/*.v)     \
				  $(wildcard rtl/noc/*.v)      \
				  $(RTL_TOP)

# --- Targets ---
.PHONY: all lint compile formal_compile synth_smoke clean

all: lint compile

# Target: lint
# Description: Runs Verilator linting on all RTL sources.
# Week 1 – PE RTL targets
PE_SOURCES = rtl/pe/neuraedge_pe.v rtl/common/regfile.sv rtl/common/sram_bank.v

.PHONY: lint_pe compile_pe test_pe_smoke

lint:
	@echo "Linting RTL files..."
	@$(VERILATOR) --lint-only -sv $(RTL_SOURCES) --top-module neuraedge_top

# Target: compile
# Description: Compiles the RTL design for simulation using Verilator.
compile:
	@echo "Compiling RTL for simulation..."
	@cp -f main.cpp obj_dir/
	@$(VERILATOR) --cc -exe --build -j 0 -sv $(RTL_SOURCES) --top-module neuraedge_top $(PWD)/main.cpp

# Target: formal_compile
# Description: Checks that formal property files can be parsed.
formal_compile:
	@echo "Checking formal property files..."
	@# Placeholder: Add command to check formal files with sby --mode parse
	@echo "=> Formal compile check passed (stub)."

# Target: synth_smoke
# Description: Runs a quick synthesis check with Yosys.
synth_smoke:
	@echo "Running synthesis smoke test..."
	@$(YOSYS) -p "read_verilog -sv $(RTL_SOURCES); synth -top neuraedge_top; stat"

# Target: clean
# Description: Cleans up generated files.
clean:
	@echo "Cleaning up..."
	@rm -rf obj_dir/
	@rm -f *.log *.vcd

# Dummy sim_main.cpp for Verilator compilation
sim_main.cpp:
	@echo "int main(int argc, char** argv) { return 0; }" > sim_main.cpp
