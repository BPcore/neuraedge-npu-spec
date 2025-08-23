# TSMC 22nm FDX Physical Design Rules

## Technology Specifications

### Process Technology
```
Node: TSMC 22nm FDX (Fully Depleted SOI)
Metal Layers: 10 layers (M1-M10)
Via Layers: 9 via levels (V1-V9)
Minimum Feature: 22nm gate pitch
Back-End-Of-Line: Ultra-low-k dielectric (κ=2.4)
Front-End-Of-Line: High-mobility channel
```

### Design Rule Summary
```
Minimum Width Rules:
- M1: 64nm (local interconnect)
- M2-M3: 72nm (intermediate routing)  
- M4-M6: 96nm (global routing)
- M7-M10: 160nm (power/clock distribution)

Minimum Spacing Rules:
- M1: 64nm spacing
- M2-M3: 72nm spacing
- M4-M6: 96nm spacing  
- M7-M10: 160nm spacing

Via Rules:
- V1: 22nm × 22nm minimum
- V2-V6: 28nm × 28nm
- V7-V9: 32nm × 32nm
```

## Physical Design Constraints

### Area Constraints
```
Tile Size Target: 1.32mm² (1148μm × 1148μm)
- Processing Elements: 0.85mm² (64% of tile)
- NoC Router: 0.25mm² (19% of tile)  
- Memory Subsystem: 0.15mm² (11% of tile)
- Control Logic: 0.07mm² (6% of tile)

Aspect Ratio: 1:1 (square tiles for regular array)
Routing Utilization: <75% (congestion avoidance)
```

### Floorplan Constraints
```
PE Array Layout (2×2 within tile):
- PE Size: 574μm × 574μm each
- PE Spacing: 50μm (power/clock distribution)
- Total PE Area: 0.66mm² (4 × 0.165mm²)

NoC Router Placement:
- Location: Center of tile (optimal connectivity)
- Size: 500μm × 500μm  
- Area: 0.25mm²

Memory Placement:
- L2 Cache: Adjacent to NoC router
- PE Local Memory: Within each PE boundary
- Total Memory Area: 0.15mm²
```

### Power Grid Constraints
```
Power Domain Isolation:
- CORE_0P6V: Independent power grid
- MEMORY_0P6V: Separate retention capability
- IO_1P8V: Isolated I/O power
- AON_0P6V: Always-on power domain

Grid Specifications:
- M9-M10: Primary power distribution (VDD/VSS)
- M7-M8: Secondary power distribution  
- M5-M6: Local power delivery
- Power Via: Every 50μm spacing
- IR Drop Target: <50mV (8% of 0.6V)
```

### Clock Distribution Constraints
```
Clock Tree Requirements:
- Global Clock: 600MHz ± 1% accuracy
- Clock Skew: <50ps across tile
- Clock Jitter: <25ps RMS
- Clock Latency: <500ps from PLL

Clock Network:
- M8-M9: Global clock distribution
- M6-M7: Local clock distribution
- Clock Gating: Fine-grain clock control
- Clock Domains: 4 domains per tile (PE0-3)
```

## Manufacturing Constraints

### DRC (Design Rule Check) Requirements
```
Metal Density: 30-70% per layer per window
Via Coverage: >90% landing success
Antenna Rules: <1000:1 metal-to-gate ratio
Lithography: 193nm immersion + multi-patterning
```

### LVS (Layout vs Schematic) Requirements
```
Device Matching: <1% mismatch tolerance
Parasitic Extraction: RC accuracy ±5%
Net Connectivity: 100% verified
Device Recognition: All devices identified
```

### DFM (Design for Manufacturing) Guidelines
```
Critical Dimension: ±10% process variation
Metal Line-End: Rounded corners preferred
Via Doubling: Critical nets require redundant vias
Dummy Fill: Automated density compliance
```
