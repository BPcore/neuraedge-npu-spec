`# docs/power_envelope.md`

`## Power Envelope per 4-Tile System`

`- **Total Power Budget:** ≤ 1.0 W`  

`### Inference Power Profiles`

| `Workload` | `Peak Power (mW)` | `Idle Power (mW)` | `Energy per Inference (mJ)` |
| :---- | :---- | :---- | :---- |
| `ResNet-50` | `1,200` | `50` | `8.5` |
| `Bert (Base)` | `1.000` | `60` | `45` |
| `Sparse Transformer` | `1.024` | `55` | `31` |

                       `|`

`### Breakdown by Subsystem (per Tile)`

| `Subsystem` | `Active Power (mW)` | `Idle Power (mW)` | `Notes` |
| :---- | :---- | :---- | :---- |
| `PE Array`  | `120` | `10` | `INT8 MACs at 600 MHz` |
| `Local SRAM` | `38` | `5` | `32 KB × 4 banks` |
| `Load/Store + XBAR` | `46` | `8` | `AXI4 and NoC buffering` |
| `DVFS + Clock Tree` | `12` | `3` | `PLLs, regulators, clock buffers` |
| `Leakage` | `24` | `24` | `Static leakage at 0.6 V, 25 °C` |
| **`Tile Total`** | **`240`** | **`50`** | **`Under nominal load vs idle`** |

`### Operating Scenarios`

`- **Maximum Load (100% Utilization)**`    
  `- Four tiles at peak: ~960 mW total`    
  `- System overhead (NoC, power mgmt): ~40 mW`    
  `- **Total:** ≈1.0 W`

`- **Idle (No Inference)**`    
  `- Four tiles idle: 4 × 50 mW = 200 mW`    
  `- Background overhead: 50 mW`    
  `- **Total:** ≈250 mW`

`### Energy Efficiency`

`- **ResNet-50**: 8.5 mJ per inference`    
`- **BERT (Base)**: 45 mJ per inference`    
`- **Sparse Transformer**: 31 mJ per inference`  

`### Notes`

`- All power figures measured at nominal 0.6 V, 25 °C.`    
`- Measurements include on-chip sensors and external power meter calibration.`    
`- Peak power bursts may reach +10% for brief conv layers—within 1.1 W envelope.`  

