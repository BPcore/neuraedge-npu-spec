# NeuraEdge NPU - 0.6V Power Architecture Specification

## Multi-Domain Power Design

### Power Domain Structure
```
Domain 1: CORE_0P6V
- Voltage: 0.6V nominal (DVFS: 0.45V-0.80V)
- Components: PE arrays, logic controllers
- Power: ≤240 mW per tile active
- Isolation: Required from I/O domain

Domain 2: MEMORY_0P6V  
- Voltage: 0.6V nominal with retention
- Components: SRAM banks, memory controllers
- Retention: 0.3V minimum for data preservation
- Power: Included in 240 mW tile budget

Domain 3: IO_1P8V
- Voltage: 1.8V (22nm FDX I/O standard)
- Components: I/O pads, level shifters
- Power: ≤40 mW system overhead
- Isolation: From core domains

Domain 4: AON_0P6V
- Voltage: 0.6V always-on
- Components: PMU, clock generators, debug
- Power: ≤10 mW always-on
- Retention: Not required (always powered)
```

### DVFS Implementation
```
Voltage Levels:
- 0.45V: Ultra-low power mode (300 MHz)
- 0.50V: Low power mode (400 MHz)  
- 0.60V: Nominal mode (600 MHz)
- 0.70V: High performance mode (700 MHz)
- 0.80V: Maximum performance (800 MHz)

Frequency Scaling:
- Linear voltage-frequency relationship
- PLL reconfiguration capability
- Clock gating during transitions
- Performance monitoring feedback

Power Switches:
- Header switches for tile power domains
- Footer switches for memory domains
- Distributed switch network
- Rush current limiting
```

### Isolation and Retention Strategy
```
Isolation Cells:
- Core-to-I/O isolation (0.6V → 1.8V)
- I/O-to-Core isolation (1.8V → 0.6V)  
- Power-down isolation for unused tiles
- Clock domain isolation

Retention Registers:
- Critical state preservation @ 0.3V
- Selective retention for memory controllers
- Configuration register retention
- Debug state preservation

Level Shifters:
- 0.6V → 1.8V up-shifters
- 1.8V → 0.6V down-shifters
- High-speed interface support
- Low-power standby capability
```

## Power Budget Allocation

### Per-Tile Breakdown (240 mW @ 0.6V)
```
PE Array (2048 MACs): 120 mW (50%)
- MAC units: 100 mW
- Datapath logic: 20 mW

SRAM Banks (4×8KB): 40 mW (17%)
- SRAM arrays: 30 mW
- Controllers: 10 mW

LSU + Crossbar: 50 mW (21%)
- Load/store units: 25 mW
- Crossbar network: 25 mW

DVFS + Clock: 20 mW (8%)
- Clock buffers: 15 mW
- DVFS control: 5 mW

Leakage: 10 mW (4%)
- Static leakage @ 0.6V, 25°C
```

### System Power Budget (1W Total)
```
4 Tiles Active: 4 × 240 mW = 960 mW (96%)
System Overhead: 40 mW (4%)
- NoC infrastructure: 20 mW
- I/O interfaces: 10 mW
- Power management: 10 mW
Total: 1000 mW (1W)
```

### Idle Power Budget (250 mW Total)
```
4 Tiles Idle: 4 × 50 mW = 200 mW (80%)
System Overhead: 50 mW (20%)
- Always-on logic: 30 mW
- I/O retention: 10 mW
- Clock generators: 10 mW
Total: 250 mW
```

## Implementation Requirements

### Power Grid Design
- 0.6V distribution with ≤2% IR drop
- Dedicated VDD/VSS networks per domain
- Decoupling capacitor strategy
- Power switch integration

### Control Interfaces
- PMU to voltage regulator interface
- DVFS level control signaling
- Power-good status monitoring
- Emergency shutdown capability

### Verification Strategy
- Multi-domain power simulation
- IR drop analysis at 0.6V
- DVFS transition validation
- Power state machine verification
