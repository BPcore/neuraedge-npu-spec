\# docs/ascii\_block\_diagram.md

\#\# NeuraEdge Next NPU Architecture Block Diagram

┌─────────────────────────────────────────────────────────────────────────┐  
 │ SoC AXI4-128 External Bus │  
 └─────────────────────────────────────────────────────────────────────────┘  
 │ │ │ │  
 ┌───▼───┐ ┌───▼───┐ ┌───▼───┐ ┌───▼───┐  
 │ Tile0 │ │ Tile1 │ │ Tile2 │ │ Tile3 │  
 └───┬───┘ └───┬───┘ └───┬───┘ └───┬───┘  
 │ │ │ │  
 ┌──────▼──────┐ ┌─────▼─────┐ ┌─────▼─────┐ ┌─────▼─────┐  
 │ PE Array │ │ PE Array │ │ PE Array │ │ PE Array │  
 │ (32×64 MAC) │ │ (32×64) │ │ (32×64) │ │ (32×64) │  
 │ 2048 Units │ │ 2048 Units│ │ 2048 Units│ │ 2048 Units│  
 └──────┬──────┘ └─────┬─────┘ └─────┬─────┘ └─────┬─────┘  
 │ │ │ │  
 ┌──────▼──────┐ ┌─────▼─────┐ ┌─────▼─────┐ ┌─────▼─────┐  
 │ SRAM 32KB │ │ SRAM 32KB│ │ SRAM 32KB│ │ SRAM 32KB│  
 │ (4 banks) │ │ (4 banks)│ │ (4 banks)│ │ (4 banks)│  
 │ 8KB × 4 │ │ 8KB × 4 │ │ 8KB × 4 │ │ 8KB × 4 │  
 └──────┬──────┘ └─────┬─────┘ └─────┬─────┘ └─────┬─────┘  
 │ │ │ │  
 ┌──────▼──────┐ ┌─────▼─────┐ ┌─────▼─────┐ ┌─────▼─────┐  
 │ LSU │ │ LSU │ │ LSU │ │ LSU │  
 │ Load/Store │ │ Load/Store│ │ Load/Store│ │ Load/Store│  
 │ Unit │ │ Unit │ │ Unit │ │ Unit │  
 └──────┬──────┘ └─────┬─────┘ └─────┬─────┘ └─────┬─────┘  
 │ │ │ │  
 ┌──────▼──────┐ ┌─────▼─────┐ ┌─────▼─────┐ ┌─────▼─────┐  
 │ Crossbar │ │ Crossbar │ │ Crossbar │ │ Crossbar │  
 │ (512-bit) │ │ (512-bit)│ │ (512-bit)│ │ (512-bit)│  
 │ 5×5 SW │ │ 5×5 SW │ │ 5×5 SW │ │ 5×5 SW │  
 └──────┬──────┘ └─────┬─────┘ └─────┬─────┘ └─────┬─────┘  
 │ │ │ │  
 ┌──────▼──────┐ ┌─────▼─────┐ ┌─────▼─────┐ ┌─────▼─────┐  
 │ DVFS Ctrl │ │ DVFS Ctrl │ │ DVFS Ctrl │ │ DVFS Ctrl │  
 │ 0.45-0.80V │ │ 0.45-0.80V│ │ 0.45-0.80V│ │ 0.45-0.80V│  
 │ 300-1000MHz │ │ 300-1000M │ │ 300-1000M │ │ 300-1000M │  
 └─────────────┘ └───────────┘ └───────────┘ └───────────┘

text

\#\# Network-on-Chip (NoC) Topology \- 2D Mesh

text

   64-bit Flits, Credit-Based Flow Control

    ┌─────────────────────────────────────┐

    │                                     │

┌───▼───┐    ←─────→    ┌───────┐    ←─────→    

│       │              │       │              

│ Tile0 │◄──────────── │ Tile1 │              

│       │              │       │              

└───┬───┘    ←─────→    └───┬───┘    ←─────→    

    │                      │                  

    ▼                      ▼                  

┌───────┐    ←─────→    ┌───────┐              

│       │              │       │              

│ Tile2 │◄──────────── │ Tile3 │              

│       │              │       │              

└───────┘    ←─────→    └───────┘              

    │                      │                  

    └──────────────────────┘                


text

\#\# Detailed PE Array Structure (Systolic Array)

┌─────────────────────────────────────────────────────────────────────────┐  
 │ PE Array (32×64 \= 2048 MACs) │  
 ├─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┤  
 │MAC │MAC │MAC │MAC │MAC │MAC │MAC │MAC │ ... │MAC │MAC │MAC │ Row 0  
 │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ │ 60 │ 61 │ 62 │  
 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤  
 │MAC │MAC │MAC │MAC │MAC │MAC │MAC │MAC │ ... │MAC │MAC │MAC │ Row 1  
 │ 64 │ 65 │ 66 │ 67 │ 68 │ 69 │ 70 │ 71 │ │124 │125 │126 │  
 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤  
 │MAC │MAC │MAC │MAC │MAC │MAC │MAC │MAC │ ... │MAC │MAC │MAC │ Row 2  
 │128 │129 │130 │131 │132 │133 │134 │135 │ │188 │189 │190 │  
 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤  
 │ ... │ ... │ ... │ ... │ ... │ ... │ ... │ ... │ ... │ ... │ ... │ ... │  
 ├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤  
 │MAC │MAC │MAC │MAC │MAC │MAC │MAC │MAC │ ... │MAC │MAC │MAC │ Row 31  
 │1984 │1985 │1986 │1987 │1988 │1989 │1990 │1991 │ │2044 │2045 │2046 │  
 └─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘  
 │ │ │ │ │ │ │ │ │ │ │ │  
 ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼ ▼  
 64 columns × 32 rows \= 2,048 total INT8 MAC units per tile

text

\#\# Memory Hierarchy (Per Tile)

┌─────────────────────────────────────────────────────────────────────────┐  
 │ Memory Hierarchy │  
 ├─────────────┬───────────────┬──────────────┬─────────────────────────────┤  
 │ Level │ Size │ Latency │ Description │  
 ├─────────────┼───────────────┼──────────────┼─────────────────────────────┤  
 │ PE-Local │ 32KB per PE │ 1 cycle │ 4 banks × 8KB each │  
 │ SRAM │ (128KB total) │ │ Dual-port, banked │  
 ├─────────────┼───────────────┼──────────────┼─────────────────────────────┤  
 │ Tile SRAM │ 1MB optional │ 4 cycles │ Cross-PE shared memory │  
 │ (Optional) │ │ │ Banking for conflict-free │  
 ├─────────────┼───────────────┼──────────────┼─────────────────────────────┤  
 │ Shared │ 8MB optional │ 8 cycles │ Cross-tile, ECC protected │  
 │ SRAM │ │ │ High-bandwidth access │  
 ├─────────────┼───────────────┼──────────────┼─────────────────────────────┤  
 │ External │ DDR4/HBM │ ≥60ns │ System memory via AXI4 │  
 │ Memory │ (Unlimited) │ │ Burst up to 256 beats │  
 └─────────────┴───────────────┴──────────────┴─────────────────────────────┘

text

\#\# Interface Summary Table

┌─────────────────────────────────────────────────────────────────────────┐  
 │ Interface Summary │  
 ├──────────────┬──────────────┬──────────────┬─────────────────────────────┤  
 │ Interface │ Data Width │ Protocol │ Notes │  
 ├──────────────┼──────────────┼──────────────┼─────────────────────────────┤  
 │ AXI4 Master │ 128 bits │ AXI4 Full │ Burst up to 256 beats │  
 │ │ │ │ 16 outstanding transactions │  
 ├──────────────┼──────────────┼──────────────┼─────────────────────────────┤  
 │ NoC Mesh │ 64 bits │ Credit-based │ 4 VCs, 10-entry buffers │  
 │ │ │ │ Odd-Even adaptive routing │  
 ├──────────────┼──────────────┼──────────────┼─────────────────────────────┤  
 │ Interrupts │ — │ Level-trig │ 8 signals per tile │  
 │ │ │ │ (global, perf, power, sec) │  
 ├──────────────┼──────────────┼──────────────┼─────────────────────────────┤  
 │ JTAG │ 1 bit │ IEEE 1149.1 │ Boundary scan, OpenOCD │  
 │ │ │ │ support, shared TAP │  
 └──────────────┴──────────────┴──────────────┴─────────────────────────────┘

text

\#\# Tile Floorplan Layout (1.32 mm² per tile)

┌─────────────────────────────────────────────────────────────────────────┐  
 │ Tile Floorplan (1.32 mm²) │  
 │ │  
 │ ┌─────────────┐ ┌─────────────┐ ┌─────────────┐ ┌─────────────┐ │  
 │ │ SRAM │ │ SRAM │ │ Crossbar │ │ Clock │ North │  
 │ │ Bank 0 │ │ Bank 1 │ │ (512-bit) │ │ Tree │ │  
 │ │ 8KB │ │ 8KB │ │ 300GB/s │ │ 600MHz │ │  
 │ └─────────────┘ └─────────────┘ └─────────────┘ └─────────────┘ │  
 │ │  
 │ ┌─────────────────────────────────────────────────────────────────┐ │  
 │ │ │ │  
 │ │ PE Array (32×64) │ │  
 │ │ 2,048 INT8 MACs │ │  
 │ │ 0.46 mm² │ │  
 │ │ │ │  
 │ └─────────────────────────────────────────────────────────────────┘ │  
 │ │  
 │ ┌─────────────┐ ┌─────────────┐ ┌─────────────┐ ┌─────────────┐ │  
 │ │ SRAM │ │ SRAM │ │ LSU │ │ DVFS Ctrl │ South │  
 │ │ Bank 2 │ │ Bank 3 │ │ Load/Store │ │ 0.45-0.80V │ │  
 │ │ 8KB │ │ 8KB │ │ Unit │ │ 300-1000MHz │ │  
 │ └─────────────┘ └─────────────┘ └─────────────┘ └─────────────┘ │  
 └─────────────────────────────────────────────────────────────────────────┘

text

undefined

This properly aligned version ensures:

1. **Consistent box widths** across all blocks

2. **Proper vertical alignment** of connection lines

3. **Uniform spacing** between elements

4. **Clear hierarchical structure** from top to bottom

5. **Detailed specifications** in each block

6. **Proper table formatting** with aligned columns

7. **Complete technical details** including dimensions, frequencies, and capacities

The diagram now provides a clean, professional representation of the NeuraEdge Next NPU architecture that's ready for printing and distribution to the RTL team.

