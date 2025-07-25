`# docs/perf_summary.md`

`## Performance & Power Summary`

| `Sub-block` | `Power (mW)` | `Throughput (TOPS)` | `Efficiency (TOPS/W)` |
| :---- | :---- | :---- | :---- |
| `PE arrays` | `120` | `10.2` | `85.0` |
| `SRAM banks` | `38` |  |  |
| `LSU + Crossbar` | `46` |  |  |
| `DVFS & Clock` | `12` |  |  |
| `Leakage` | `24` |  |  |
| **`Tile Total`** | **`240`** | **`12.5`** | **`52.1`** |

`### Notes`

`- **PE arrays**: 2,048 INT8 MACs per tile, 600 MHz operation`    
`- **SRAM banks**: Includes local 32 KB × 4 banks, 1–2 cycle access`    
`- **LSU + Crossbar**: Load/store units and 5×5 crossbar interconnect`    
`- **DVFS & Clock**: Power for voltage regulators, PLLs, clock distribution`    
`- **Leakage**: Static leakage at nominal voltage/temperature`  

