# CSR Map (Updated)

Address bits [7:0]; tile select via csr_addr[7:6]; broadcast writes when tile select == 2'b11.

This CSR map matches the currently implemented `simple_csr_block` (word addressed via csr_addr[7:2]). Unimplemented legacy entries removed.

| Word Addr (csr_addr[7:2]) | Byte Offset | Name                          | Width | R/W | Reset  | Implemented | Description |
|---------------------------|-------------|-------------------------------|-------|-----|--------|------------|-------------|
| 0x00                      | 0x00        | CONTROL                       | 32    | R/W | 0      | Yes        | bit0 start (pulse), bit1 stop (pulse) |
| 0x01                      | 0x04        | STATUS                        | 32    | R   | 0      | Yes        | [31]busy,[30:27]grade,[15:0]eff_milli_tops_w |
| 0x04                      | 0x10        | PRECISION_MODE                | 32    | R/W | 0      | Yes        | bits[1:0] precision_mode |
| 0x05                      | 0x14        | SPARSITY_CTRL                 | 32    | R/W | 0      | Yes        | bit0 enable, bits[2:1] mode |
| 0x06                      | 0x18        | LANE_MASK                     | 32    | R/W | 0xF..1 | Yes        | Active lane bitmask (MAC_LANES LSBs) |
| 0x0C                      | 0x30        | PHYS_OPS_LO                   | 32    | R   | 0      | Yes        | Physical ops count low 32b (saturating) |
| 0x0E                      | 0x38        | EFF_OPS_LO                    | 32    | R   | 0      | Yes        | Effective ops count low 32b |
| 0x10                      | 0x40        | SKIPPED_OPS_LO                | 32    | R   | 0      | Yes        | Skipped (sparse) ops count low 32b |
| 0x14                      | 0x50        | BYTES_SRAM                    | 32    | R   | 0      | Yes        | SRAM bytes transferred (scaled by reuse) |
| 0x15                      | 0x54        | BYTES_DRAM                    | 32    | R   | 0      | Yes        | DRAM bytes transferred (scaled) |
| 0x18                      | 0x60        | ENERGY_PJ_LO                  | 32    | R   | 0      | Yes        | Total energy pJ low |
| 0x19                      | 0x64        | ENERGY_PJ_HI                  | 32    | R   | 0      | Yes        | Total energy pJ high |
| 0x1C                      | 0x70        | SPARSITY_RATIO                | 32    | R   | 0      | Yes        | [15:0] sparsity ratio actual |
| 0x1D                      | 0x74        | DYNAMIC_POWER_MW              | 32    | R   | 0      | Yes        | [15:0] dynamic power mW |
| 0x1E                      | 0x78        | LEAKAGE_POWER_MW              | 32    | R   | 0      | Yes        | [15:0] leakage power mW |
| 0x20                      | 0x80        | DYNAMIC_ENERGY_PJ_LO          | 32    | R   | 0      | Yes        | Dynamic energy pJ low |
| 0x21                      | 0x84        | DYNAMIC_ENERGY_PJ_HI          | 32    | R   | 0      | Yes        | Dynamic energy pJ high |
| 0x22                      | 0x88        | LEAKAGE_ENERGY_PJ_LO          | 32    | R   | 0      | Yes        | Leakage energy pJ low |
| 0x23                      | 0x8C        | LEAKAGE_ENERGY_PJ_HI          | 32    | R   | 0      | Yes        | Leakage energy pJ high |
| 0x24                      | 0x90        | UTILIZATION_MILLI_PCT         | 32    | R   | 0      | Yes        | [15:0] instantaneous util (0-1000) |
| 0x25                      | 0x94        | UTILIZATION_MA_MILLI_PCT      | 32    | R   | 0      | Yes        | [15:0] moving average util |
| 0x26                      | 0x98        | VERSION_FEAT_BITMAP           | 32    | R   | 0x00020001 | Yes   | Version & feature bits |
| 0x27                      | 0x9C        | OVERFLOW_FLAGS                | 32    | R   | 0      | Yes        | [7:0] overflow sticky flags |
| 0x28                      | 0xA0        | UTIL_HIGH_THRESH_PCT          | 32    | R/W | 75     | Yes        | DVFS high utilization threshold (%) |
| 0x29                      | 0xA4        | UTIL_LOW_THRESH_PCT           | 32    | R/W | 55     | Yes        | DVFS low utilization threshold (%) |
| 0x2A                      | 0xA8        | PERF_HYST_MARGIN_MILLI        | 32    | R/W | 500    | Yes        | DVFS hysteresis perf margin (milli) |
| 0x2B                      | 0xAC        | DVFS_MIN_SETTLE_CYCLES        | 32    | R/W | 50     | Yes        | Minimum cycles between DVFS adjustments |
| 0x2C                      | 0xB0        | REUSE_FACTOR                  | 32    | R/W | 1      | Yes        | DRAM byte divisor (>=1) |
| 0x2D                      | 0xB4        | PACK_EFF_MILLI                | 32    | R/W | 1000   | Yes        | Packing efficiency milli-factor |
| 0x2E                      | 0xB8        | SPARSE_EFF_MILLI              | 32    | R/W | 1000   | Yes        | Sparsity efficiency milli-factor |
| 0x40                      | 0x100       | LEAK_REF_TEMP_C               | 32    | R/W | 50     | Yes        | Leakage reference temperature (C) |
| 0x41                      | 0x104       | LEAK_ALPHA_MILLI              | 32    | R/W | 20     | Yes        | Leakage scaling milli per +1C above ref |
| 0x42                      | 0x108       | ADAPT_CURRENT_MODE            | 32    | R   | 0      | Yes        | [1:0] adaptive sparsity mode (0 dense,1 2:4,2 1:4,3 1:8) |
| 0x43                      | 0x10C       | ADAPT_MODE_EFF_MILLI          | 32    | R   | 1000   | Yes        | Adaptive mode efficiency milli-factor (dynamic scaling) |
| 0x39                      | 0xE4        | ROUTER_FLITS_IN               | 32    | R   | 0      | Yes        | Aggregated router ingress flits |
| 0x3A                      | 0xE8        | ROUTER_FLITS_OUT              | 32    | R   | 0      | Yes        | Aggregated router egress flits |
| 0x3B                      | 0xEC        | ROUTER_PORT_SEL               | 32    | R/W | 0      | Yes        | [2:0] port select (0:N 1:S 2:E 3:W 4:L) |
| 0x3C                      | 0xF0        | ROUTER_PORT_IN                | 32    | R   | 0      | Yes        | Banked ingress flits for selected port |
| 0x3D                      | 0xF4        | ROUTER_PORT_OUT               | 32    | R   | 0      | Yes        | Banked egress flits for selected port |
| 0x3E                      | 0xF8        | ROUTER_PORT_STALL             | 32    | R   | 0      | Yes        | Banked ingress stall cycles selected port |
| 0x3F                      | 0xFC        | ROUTER_CONGESTION_INDEX       | 32    | R   | 0      | Yes        | Instantaneous occupancy ratio (milli of inputs valid/5) |
| 0x44                      | 0x110       | ROUTER_PEAK_INFLIGHT_MILLI    | 32    | R   | 0      | Yes        | Peak simultaneous active ingress (milli of 5) per window |
| 0x45                      | 0x114       | ROUTER_AVG_QDEPTH_MILLI       | 32    | R   | 0      | Yes        | Avg queue depth milli (inputs holding flits) per window |
| 0x46                      | 0x118       | ROUTER_STALL_ARB_COUNT        | 32    | R   | 0      | Yes        | Cycles an input flit stalled due to arbitration (contention) |
| 0x47                      | 0x11C       | ROUTER_STALL_BUF_COUNT        | 32    | R   | 0      | Yes        | Cycles flit arrival stalled due to single-depth buffer full |
| 0x48                      | 0x120       | ROUTER_STALL_BP_COUNT         | 32    | R   | 0      | Yes        | Cycles an egress flit is held because downstream not-ready or credits exhausted (backpressure) |
| 0x49                      | 0x124       | ROUTER_PRED_CONG_MILLI        | 32    | R   | 0      | Yes        | Predicted congestion EMA (post-buffer active inputs milli, alpha=1/8) |
| 0x4A                      | 0x128       | ROUTER_PORT_CREDITS           | 32    | R   | 0      | Yes        | Banked remaining credits (4-bit) for selected egress port (PORT_SEL); 0 if credit mode disabled |

Notes:
- Multi-word counters currently expose only LOW 32b segments; high parts may be added later (addresses reserved but unused).
- Predicted congestion counts inputs with a flit resident (buffered or direct). With INPUT_BUFFER=1 a continuously asserted raw valid may appear inactive every other cycle while its buffer refills; the EMA intentionally smooths this effect.
 - Predicted congestion counts inputs with a flit resident (buffered or direct). With INPUT_BUFFER=1 a continuously asserted raw valid may appear inactive every other cycle while its buffer refills; the EMA intentionally smooths this effect. A raw instantaneous active-count milli signal is available in RTL (`predicted_congestion_raw_instant_milli`) for debug and may be mapped to a future CSR if needed.
 - Predicted congestion counts active pressure sources = buffered inputs (+ held egress flits under backpressure/credit stall) unless `PRED_CONG_RAW_MODE=1` (raw asserted valids basis). This prevents artificial dips when buffers drain into held egress registers during credit starvation.
 - Average queue depth similarly includes held egress flits (credit/backpressure) to reflect real pipeline occupancy.
 - Backpressure stall count (0x120) increments each cycle a valid flit is ready to transmit but cannot due to downstream not-ready or zero credits (in credit mode).
 - Router credit mode: when `USE_CREDIT=1`, each egress decrements its credit counter on handshake and increments on corresponding `credit_in_*` pulse. `ROUTER_PORT_CREDITS` (0x128) returns the 4-bit remaining credit level (zero-extended) for the selected egress (PORT_SEL 0:N 1:S 2:E 3:W 4:L). If credit mode is disabled credits read as 0.
- Broadcast writes update all tiles; read requires selecting tile via `csr_addr[7:6]`.
- Unlisted legacy DVFS/override CSRs removed for clarity (manual freq/volt overrides not implemented).

### Overflow Flags (CSR OVERFLOW_FLAGS [7:0])
| Bit | Meaning |
|-----|---------|
| 0   | phys_ops_lo saturated |
| 1   | eff_ops_lo saturated |
| 2   | bytes_sram saturated |
| 3   | bytes_dram saturated |
| 4   | dma_stall_cycles saturated |
| 5   | mask_stall_cycles saturated |
| 6   | reserved |
| 7   | reserved |

### Version / Feature Bitmap (VERSION_FEAT_BITMAP)
Format: 0xVVVV_FFFF
- VVVV: 16-bit semantic version (e.g., 0x0002 => major=0, minor=2)
- FFFF: Feature bits

| Feature Bit | Meaning |
|-------------|---------|
| 0           | Runtime DVFS thresholds implemented |
| 1           | Dynamic / leakage power split telemetry |
| 2           | Moving average utilization exposed |
| 3           | Dynamic/leakage energy accumulation |
| 4           | Sparsity efficiency scaling CSR |
| 5           | Packing efficiency scaling CSR |
| 6           | Reuse factor CSR |
| 7           | Reserved |
| 8-15        | Reserved for future features |

### Access Semantics
- Writes to control registers assert `start`/`stop` for one cycle (self-clearing pulses).
- Writing zero to `REUSE_FACTOR` ignored (guard against divide-by-zero semantics).
- Efficiency milli-factors expected range 0-1000 (values >1000 allowed but may over-scale ops accounting).

### Planned Extensions
- High 32-bit segments for ops & energy counters (addresses 0x0D,0x0F,0x11, etc.)
- Counter reset register (write-one-to-clear) consolidated control.
- Interrupt status/enable once event sources defined (error, overflow, DVFS transition).
- Router max_queue_depth counters & congestion index sampling logic.
 - (DONE) Banked per-egress credit level CSR (0x128) when credit mode enabled.
