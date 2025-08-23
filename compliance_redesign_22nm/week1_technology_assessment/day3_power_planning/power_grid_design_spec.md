# Power Grid Design Specification - 0.6V Operation

## Grid Architecture

### Metal Layer Assignment (22nm FDX)
```
M8 (Top Metal): Primary VDD distribution
M7: Primary VSS distribution  
M6: Secondary VDD distribution
M5: Secondary VSS distribution
M4: Local VDD branches
M3: Local VSS branches
M2: Fine VDD mesh
M1: Fine VSS mesh + local connections
```

### Grid Sizing and Spacing
```
Primary Rails (M7/M8):
- Width: 2.0 μm (minimum)
- Spacing: 10 μm pitch
- Via Coverage: 80% overlap
- Current Density: <1 mA/μm

Secondary Rails (M5/M6):
- Width: 1.0 μm
- Spacing: 5 μm pitch  
- Via Coverage: 70% overlap
- Current Density: <1.5 mA/μm

Local Mesh (M1-M4):
- Width: 0.5 μm minimum
- Spacing: 2.5 μm pitch
- Via Density: Maximum allowed
- Resistance: <10 Ω per tile
```

### IR Drop Budget
```
Target IR Drop: ≤2% @ 0.6V (≤12 mV)

Breakdown:
- Package: 2 mV (0.33%)
- C4 bumps: 2 mV (0.33%)
- Top metal: 3 mV (0.5%)
- Local grid: 5 mV (0.83%)
Total: 12 mV (2.0%)

Worst-Case Analysis:
- Maximum current: 1.67 A (1W @ 0.6V)
- Temperature: 125°C
- Process: Slow corner
- Margin: 20% design margin
```

### Decoupling Strategy
```
On-Chip Decaps:
- MOM caps between power rails
- Target: 100 nF/mm² density
- Placement: Distributed uniformly
- Frequency Response: 100 MHz - 1 GHz

Package Decaps:
- High-frequency: 1 nF ceramic
- Mid-frequency: 10 nF ceramic  
- Low-frequency: 100 nF tantalum
- Placement: Close to VRM output

Power Switch Integration:
- Header switches in M7/M8
- Switch sizing: 0.1 Ω total
- Distribution: 4 switches per tile
- Control: PMU sequencing
```

## Verification and Analysis

### Power Grid Analysis
```
Static Analysis:
- DC IR drop analysis
- Electromigration verification
- Via current density check
- Metal width verification

Dynamic Analysis:
- AC impedance analysis
- Transient response simulation
- Power noise analysis  
- Supply sensitivity analysis

Sign-off Requirements:
- IR drop: <2% worst case
- EM: <50% current limit
- Noise: <5% supply variation
- Reliability: 10-year lifetime
```

### Power Integrity Verification
```
Package Model:
- S-parameter extraction
- PDN impedance modeling
- Signal/power coupling
- Thermal analysis

System Analysis:
- Board-level PDN design
- VRM selection and design
- Bulk capacitor sizing
- EMI/EMC compliance

Measurement Correlation:
- Silicon validation setup
- Power measurement accuracy
- Correlation to simulation
- Model calibration
```
