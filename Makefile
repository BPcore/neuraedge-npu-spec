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
	@echo "Copying main.cpp to obj_dir..."
	@cp -f main.cpp obj_dir/main.cpp
	@ls -l obj_dir/main.cpp
	@echo "Compiling RTL for simulation..."
	@$(VERILATOR) --cc -exe --build -j 1 -sv $(RTL_SOURCES) --top-module neuraedge_top main.cpp

# Target: formal_compile
# Description: Checks that formal property files can be parsed.
formal_compile:
	@echo "Checking formal property files..."
	@for sbyfile in formal/*.sby; do \
		echo "Parsing $$sbyfile..."; \
		$(SBY) --mode parse $$sbyfile || exit 1; \
	done
	@echo "✅ All formal files parsed successfully"

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
	@rm -f *.log *.vcd *.o

# --- Week 2 Targets ---
TILE_SOURCES = rtl/tile/neuraedge_tile.v rtl/noc/noc_router.v $(PE_SOURCES)

.PHONY: lint_tile compile_tile synth_tile

lint_tile:
	@echo "Linting tile & NoC components..."
	@$(VERILATOR) --lint-only -sv $(TILE_SOURCES) --top-module neuraedge_tile

compile_tile:
	@echo "Compiling tile for simulation..."
	@$(VERILATOR) --cc -exe --build -j 0 -sv $(TILE_SOURCES) --top-module neuraedge_tile tile_main.cpp

synth_tile:
	@echo "Running synthesis smoke test for tile..."
	@$(YOSYS) -p "read_verilog -sv $(TILE_SOURCES); synth -top neuraedge_tile; stat"

# Dummy sim_main.cpp for Verilator compilation
sim_main.cpp:
	@echo "int main(int argc, char** argv) { return 0; }" > sim_main.cpp

# --- Week 3 Targets ---
.PHONY: lint_top compile_top synth_top formal_top

lint_top:
	@echo "Linting top-level RTL..."
	verilator --lint-only -sv rtl/neuraedge_top.v rtl/router_mesh.v --top-module neuraedge_top

compile_top:
	@echo "Compiling top-level simulation..."
	cp -f top_main.cpp obj_dir/
	verilator --cc -exe --build -j0 -sv rtl/neuraedge_top.v rtl/router_mesh.v top_main.cpp

synth_top:
	@echo "Synthesizing top-level..."
	yosys -p "read_verilog -sv rtl/neuraedge_top.v rtl/router_mesh.v; synth -top neuraedge_top; stat"

formal_top:
	@echo "Parsing top-level formal stubs..."
	for f in formal/top_*.sby; do sby --mode parse $$f || exit 1; done
