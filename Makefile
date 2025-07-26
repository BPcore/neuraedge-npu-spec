<<<<<<< HEAD
obj_dir/main.cpp:
	echo '// auto main for neuraedge_top' > obj_dir/main.cpp
	echo '#include "Vneuraedge_top.h"' >> obj_dir/main.cpp
	echo '#include "verilated.h"' >> obj_dir/main.cpp
	echo 'int main(int argc, char **argv) { Verilated::commandArgs(argc, argv); Vneuraedge_top* dut = new Vneuraedge_top; delete dut; return 0; }' >> obj_dir/main.cpp
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
	@make obj_dir/main.cpp
	@$(VERILATOR) --cc -exe --build -j 0 -sv $(RTL_SOURCES) --top-module neuraedge_top obj_dir/main.cpp

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
=======
TILE_SOURCES = rtl/tile/neuraedge_tile.v rtl/noc/noc_router.v $(PE_SOURCES)

.PHONY: lint_tile compile_tile synth_tile formal_compile

lint_tile:
	$(VERILATOR) --lint-only -sv $(TILE_SOURCES) --top-module neuraedge_tile

compile_tile:
	cp -f main.cpp obj_dir/               # ensure driver present
	$(VERILATOR) --cc -exe --build -j0 -sv $(TILE_SOURCES) --top-module neuraedge_tile tile_main.cpp

synth_tile:
	$(YOSYS) -p "read_verilog -sv $(TILE_SOURCES); synth -top neuraedge_tile; stat"

formal_compile:
	@for f in formal/*.sby; do \
	  $(SBY) --mode parse $$f || exit 1; \
	done
>>>>>>> b74d3b4 (feat(week2): add tile & NoC RTL skeletons, simulation driver, formal stubs, and CI targets)
