## NeuraEdge 30 TOPS/W Effective NPU Architecture Blueprint

Status: Draft (Foundational blueprint)
Goal: Achieve 30 effective INT8 TOPS/W (mobile/edge thermal envelope 1–5 W per tile group) via a combination of:
1) High physical compute efficiency (>=14 physical TOPS/W)  
2) Structured + dynamic sparsity (≥1.5–2.0× effective boost)  
3) Precision scaling / packing (INT8→INT4→INT2→INT1) (≥1.3–2.0× where workload permits)  
4) Memory movement minimization + data reuse (>=70% operand reuse on-chip)  
5) Aggressive power + clock gating + DVFS  

Physical TOPS/W * (Sparsity Gain * Precision Packing Gain * Workload Fusion Gain) ≈ Effective TOPS/W.
Example target: 14 phys TOPS/W * 1.6 sparsity * 1.4 packing ≈ 31 effective TOPS/W.

---
### 1. Design Philosophy (Patent-Risk Conscious)
We adopt well-established, public-domain architectural primitives (systolic & clustered SIMD arrays, on-chip scratchpads, simple packet NoC) without embedding proprietary scheduling or compression schemes unique to a specific vendor. All specialized behavior is parameterized and compiler-driven.

Core prior-art anchors (prevalent & broadly published):
- Systolic / weight/output/row-stationary dataflows (Kung & Leiserson 1978; widely academic).  
- Loop tiling, blocking, double-buffering (compiler classic).  
- Structured sparsity masks (generic binary masks; we avoid vendor-specific 2:4 enforcement micro-architectures—our engine simply consumes a mask + metadata).  
- Quantization & per-tensor/per-channel scaling (widely standardized in ONNX, TFLite).  

Avoided / Caution Zones (perform independent FTO search before productization):
- Proprietary encodings (e.g. vendor-specific entropy-coded formats).  
- Patented sparse pattern enforcement logic (hardware that transforms dense to specific 2:4 pattern at runtime).  
- Warp-scheduling algorithms tied to specific GPU architectures.  
- Exotic analog compute / in-SRAM bit-line compute claims if not implementing them.  
- Specific memory compression dictionaries (check for active patents if adopting).  

Mitigation Strategy:
1. Parameterized generic mask application: engine only skips lanes indicated by a pre-supplied activation/weight mask.  
2. Use open ISA (RISC-V) for control / microcode instead of inventing a novel opaque instruction fusion mechanism potentially overlapping with existing proprietary decoders.  
3. Keep compression optional and rely on plain run-length + simple zero-bitmaps (long-standing).  
4. Document each micro-architectural novelty; trace prior art references; if value-differentiated (e.g. multi-objective DVFS governor), consider our own provisional filing.  
5. Maintain an internal patent log matrix: Feature | Public Prior Art Reference | Distinguishing Implementation Notes.  

Legal Disclaimer: This blueprint is technical strategy, not formal freedom-to-operate (FTO) legal advice. A patent attorney review + database search (USPTO / EPO / WIPO) is required before tape-out.

---
### 2. High-Level Block Diagram (Textual)
```
                +-----------------------------+  Firmware / Control Plane
                |  RISC-V uC (Ibex/PicoRV32)  |  - DVFS policy
                |  µcode / Command Sequencer  |  - Scheduling / QoS
                +--------------+--------------+
                               |
        +----------------------+-----------------------+
        |   Global Interconnect / Lightweight NoC      |
        +----------------------+-----------------------+
                               |
     +---------- Tile Cluster (replicated N times) ----------+
     | +----------------+   +-----------------------------+ |
     | | Local SRAM     |   | Prefetch / DMA Engine       | |
     | | (Weight/Act)   |   | (AXI/NoC master)            | |
     | +-------+--------+   +--------------+--------------+ |
     |         |                          |                |
     |   +-----v------+   +---------------v-------------+  |
     |   | Sparsity &  |   |  Compute Array (MAC Lanes)  |  |
     |   | Mask Apply  |   | (Grouped MAC clusters)      |  |
     |   +-----+------+   +---------------+--------------+  |
     |         |                          |                 |
     |   +-----v------+            +------v------+          |
     |   | Precision  |            | Accumulate  |          |
     |   | Pack/Unpack|            | / Post Proc |          |
     |   +-----+------+            +------+------+
     |         |                          |
     |   +-----v------+            +------v------+
     |   | Power &    |<-----------| Perf Counters|
     |   | DVFS Agent |            +-------------+
     +-------------------------------------------------------+
```

---
### 3. Compute Array Architecture
Parameter: MAC_LANES per PE cluster; CLUSTERS per tile; TILE_COUNT for scaling.

Lane Organization:
- Each lane: (A x B) -> partial sum (INT8 baseline).  
- Pack factor: 2^p (p = 0..3) for INT8/4/2/1 (logical ops reuse same datapath slices).  
- Clock gating per lane; power gating per cluster.  
- Accumulator width sized for worst-case low precision packing to avoid saturation (e.g., INT1 accumulation over K with guard bits).  

Dataflow Selection:
- Compile-time schedule chooses one of: weight-stationary, output-stationary, row-stationary.  
- Hardware offers double-buffered operand SRAM banks; programmable stride & tile dimensions.  
- Microcode writes descriptor registers (loop bounds, strides, mask base addresses).  

Sparsity Engine:
- Accepts per-chunk (e.g. 16–64 elements) bitmap & optional run-length pairs.  
- Generates enable vector for lanes; disabled lanes clock-gated that cycle.  
- Structured (2:4) realized by compiler producing masks—hardware is agnostic to pattern semantics (generic).  

---
### 4. Memory Hierarchy & Bandwidth Strategy
Target: Achieve operand reuse ratio >70% (bytes fetched per MAC < 0.3).  

Levels:
1. L0 Register/Lane Buffer: small shift buffers (few words) for streaming.  
2. L1 Cluster SRAM: partitioned banks (multi-ported via time-multiplex + banking).  
3. L2 Tile SRAM (Global Buffer): ping-pong double-buffer enabling overlap of DMA and compute.  
4. Off-chip DRAM / System Memory via AXI/NoC.  

Features:
- Address generation units support 2D/3D tiled traversal.  
- On-the-fly decompression of zero-bitmaps (single cycle).  
- Prefetch descriptors chainable (scatter/gather optional later).  
- Bank-aware placement to avoid conflicts (compiler schedule).  

Compression (Optional Stage 2): Simple per-block zero bitmap + optional 4-bit run-length. Avoid complex dictionary forms to minimize patent risk.

---
### 5. Control Subsystem (RISC-V Integration)
Rationale: Flexible scheduling, DVFS policy updates, and future feature extensibility.

Core Choice: PicoRV32 (ultra small) or Ibex (additional security/debug).  
Interfaces:
- Memory-mapped CSR window to: compute descriptors, mask base, precision mode, DVFS governor hints, performance counters.  
- Interrupt sources: DMA complete, tile done, thermal event, voltage droop, watchdog.  
- Optional custom RISC-V instructions for block launch (encoded as CSR writes for first revision to minimize complexity).  

---
### 6. Power & Performance Management
Key Techniques:
- DVFS per tile: P-states table (freq, voltage) with hysteresis on utilization & thermal headroom.  
- Fine-grained clock gating: lane, cluster, sparsity pipeline, accumulator, DMA idle gating.  
- Power gating domains: RISC-V core (sleep), compute clusters, L2 SRAM retention.  
- Dynamic precision gating: mask higher bits of multiplier when in low precision to cut toggles (operand slicing).  
- Activity monitors feed moving-average utilization to DVFS agent (in RTL already partially represented).  

Energy Model (First-order Formulas):
E_op = E_mac_logic + E_regfile + E_local_sram_access * (bytes/op) + E_interconnect(optional).  
Goal physical: E_op_phys <= ~70 fJ (=> ~14 phys TOPS/W).  
Effective: E_op_eff = E_op_phys / (Sparsity_Gain * Packing_Gain).  
To reach 30 eff TOPS/W, require combined gain ≈ 2.1× (e.g., 1.5× sparsity * 1.4× packing).  

Thermal Limit Management: Utilization clamp if instantaneous power > budget; microcode can adapt batch size or lower precision.

---
### 7. Performance Counters & Telemetry
Counters (implemented / in RTL):
- physical_ops, effective_ops, skipped_physical_ops (by sparsity mask)  
- cycles_active, cycles_stalled_dma, cycles_stalled_mask  
- bytes_read_sram, bytes_read_dram (driven by integrated memory latency injector responses)  
- energy_estimate_pj (accumulate dynamic estimate)  

Notes:
- cycles_stalled_dma represents cycles a memory request was needed but injector/back-end not ready.
- cycles_stalled_mask captures sparsity pipeline bubbles when enabled but no valid sparse output.
- A future aggregated cycles_stalled_memory can be defined as dma+mask if needed for higher level KPIs.

Export via CSR reads; snapshot/clear handshake.

---
### 8. Software Stack Overview
Toolchain Path:
1. Frontend: ONNX / TFLite importer.  
2. Graph Optimizer: fusion (conv+bn+relu), precision calibration, sparsity pruning.  
3. Scheduler: tile shaping, dataflow selection, bank assignment, mask & pack generation.  
4. Binary Generator: microcode + descriptor emission; builds firmware image + weight blobs + masks.  
5. Runtime (RISC-V): queue mgmt, DVFS policy, telemetry service.  

Open Source Dependence (Risk Minimal): Leverage existing ONNX/TFLite parsers (licenses review). Avoid integrating GPL-incompatible code into firmware (prefer Apache/BSD/MIT).  

---
### 9. Patent Risk Review Matrix (Initial Skeleton)
| Feature | Implementation Style | Prior Art Reference (Illustrative) | Risk Level | Mitigation |
|---------|---------------------|------------------------------------|-----------|------------|
| Structured Sparsity | Generic mask apply | Han et al. "Learning both Weights and Connections" (2015); generic pruning literature | Low | No pattern enforcement hardware |
| Precision Packing | Bit-sliced datapath reuse | Bit-serial / SIMD reuse (e.g. QNN quantization papers, ARM SIMD docs) | Low | Public quantization literature |
| DVFS Governor | Utilization + thermal PID | Linux schedutil / academic PID DVFS control loops | Medium | Keep algorithm simple; consider internal filing if novel policy |
| Compression (Phase 2) | Zero bitmap + RLE | Classic RLE + bitmap (image/text compression prior art) | Low | Long-established techniques |
| Custom ISA Ext | CSR-based launch | RISC-V Privileged Spec CSR extension model | Low | Based on open RISC-V spec |
| Power Gating FSM | Standard handshake | Common low-power gating sequences (UPF/CPF methodology) | Low | Common low-power design practice |

Note: References are indicative placeholders; replace with specific citations & patent numbers during formal prior-art matrix build before design freeze.

#### 9.a Patent Hygiene & IP Compliance Process (Non-Legal Operational Guide)
Objective: Minimize infringement risk and external royalty exposure by restricting design to well-documented prior art and openly licensed components, while creating an auditable evidence trail. This is NOT a substitute for formal Freedom-to-Operate (FTO) legal opinion.

Process Stages:
1. Feature Inventory (Continuous): Maintain a living spreadsheet: Feature | Owner | Status | Prior Art Refs | Differential Notes | OSS Dependencies.
2. Prior Art Dossier (Per Feature Before RTL Freeze): For each non-trivial mechanism (e.g. DVFS governor policy, sparsity mask handling), attach 2–3 dated public references (papers, standards, published patents expired/expiring) establishing broad prior practice.
3. Risk Triage (Monthly Review): Classify features High / Medium / Low risk (novel control heuristics, compression schemes = higher). High → trigger preliminary patent counsel query before additional investment.
4. Design Principles Enforcement: a) Keep algorithms parameterized & general. b) Avoid embedding workload‑specific heuristics that appear proprietary. c) Prefer table/descriptor driven behavior.
5. Open Source License Compliance: a) Restrict to permissive licenses (Apache-2.0, BSD, MIT). b) Track every imported file with SPDX header. c) No GPL/LGPL in synthesizable RTL or firmware unless cleared.
6. Clean-Room Verification (If Re-Implementing Known Concept): One engineer writes spec summary from public docs; separate engineer codes from summary (avoid copying protected expression).
7. Defensive Publication (When Novel but Not to Patent): Draft concise public disclosure (whitepaper/blog) timestamping innovation to prevent future blocking patents, if strategic.
8. Internal Provisional Filing Decision (When Novel & Differentiating): If a feature provides measurable advantage & isn’t plainly covered by abundant prior art, escalate to IP committee for provisional filing (protects while avoiding later lockout).
9. FTO Escalation Triggers: Entering Phase 3 (real workloads), adopting any new compression/encoding, adding hardware dynamic policy controllers, or integrating third-party macros.
10. Evidence Archive: Version control the prior art matrix & meeting minutes; ensure reproducible hash of each cited reference (PDF checksum) for audit trail.

Design Guardrails Already Applied:
- Sparsity: Pure mask consumption; no on-the-fly pattern transformation logic.
- Precision Packing: Bit-slice reuse; aligns with long-standing sub-word SIMD / bit-serial literature.
- DVFS Governor: Generic utilization + thermal hysteresis (common control patterns); keep coefficients firmware-configurable.
- Compression (future): Limiting to bitmap + RLE (decades-old methods) unless legal review approves expansion.

Prohibited Until Cleared:
- Proprietary entropy / dictionary compression schemes.
- Runtime hardware that enforces structured sparsity patterns (e.g. automatic 2:4 canonicalization).
- Closed, undocumented scheduling heuristics embedded in hardware state machines.

OSS Intake Checklist (Per New Dependency):
1. Identify license & SPDX tag.
2. Verify no copyleft obligations extend to distributed binaries / silicon deliverables.
3. Record version & commit hash in dependency manifest.
4. Run automated license scanner (e.g. Fossology ORT) weekly; diff report stored.

Audit & Gate Hooks:
- Phase 1 Exit: Prior art matrix ≥80% populated for implemented features.
- Phase 2 Entry: Formal counsel FTO scoping session scheduled.
- Phase 3 Exit: All High-risk items resolved (design-around, defensive pub, or filing) before silicon planning.

Disclaimer: Only qualified IP counsel can provide definitive infringement clearance. This process reduces, not eliminates, risk.

---
### 10. Implementation Phases & Milestones
Phase 0 (Current Partial): Basic tile, counters, synthetic power model.
Phase 1: RISC-V control, refined DVFS, add bytes counters, clean efficiency formula, full synthesis for lane sweet spot.
Phase 2: SRAM banking finalization, activity-driven operand gating, integration tests, accurate tech-mapped power (SAIF), predictive DVFS (moving-average + trend), dynamic vs leakage energy counters, mask FIFO bitmap buffering, CSR-driven control loop closure.  
Phase 3: Sparsity + packing compiler toolchain, real workloads (ResNet, MobileNet) with effective gain measurement.  
Phase 4: Compression (optional), thermal throttling hooks, final FTO legal review.  
Phase 5: Silicon planning (floorplan studies, timing closure, signoff).  

Exit Criteria (Phase 3): Demonstrated ≥14 physical TOPS/W on representative kernels at target P-state; ≥2.0 combined effective gain across evaluation suite; stable runtime + counters alignment within ±2%.  

---
### 11. Quantitative Back-of-Envelope
Assumptions (Example):
- 2048 INT8 MACs per tile @ 1.0 GHz => 2.048 TOPS physical.  
- Energy per INT8 MAC (logic + local SRAM) ≈ 0.07 pJ (70 fJ) target => Power ~2.048 TOPS * 0.07 pJ/op * 1e12 ops/TOPS = 143.4 mW (compute core).  
- Add memory + control overhead ~2× => ~287 mW per tile.  
- Physical Efficiency ≈ 2.048 / 0.287 ≈ 7.1 TOPS/W (needs improvement).  
Optimization levers to reach 14 phys TOPS/W: lower E_mac to 40 fJ (advanced node + gating), raise frequency while maintaining voltage scaling, increase MAC density (more MACs, but watch leakage).  
Effective: With 1.6× sparsity & 1.4× packing => 2.24× → target 14 * 2.24 ≈ 31.4 TOPS/W.  

Action: Iterate tech node PPA modeling; refine E_op dissections (logic vs memory vs interconnect).  

---
### 12. Risk & Mitigation Summary
| Risk | Impact | Mitigation |
|------|--------|------------|
| Underestimated memory energy | Efficiency shortfall | Early SAIF on SRAM macros; increase reuse / compression |
| Sparse mask irregularity stalls | Throughput dips | Add prefetch + mask FIFO; stall counters & tuning |
| DVFS oscillation | Efficiency instability | Hysteresis + moving average windows |
| Patent conflict discovered late | Re-spin delay | Continuous logging + early legal reviews each phase |
| Timing closure at low voltage | P-state reduction | Early multi-corner static timing + path balancing |

---
### 13. Immediate Action Items
1. Correct efficiency units in RTL (milli TOPS/W → consistent scaling).  
2. Integrate simple RISC-V core stub + CSR map (Phase 1).  
3. Implement mask FIFO & lane gating instrumentation.  
4. Run full synthesis (lanes 1,4,8) with timing estimate; derive energy/area scaling spreadsheet.  
5. Begin patent prior art matrix population (internal doc).  
6. Expose memory latency injector configuration (latencies, hit ratio) via CSRs + directed latency/stall validation TB.  
7. Plan NoC router backpressure & input FIFO depth parameterization (post memory stall validation).  

---
### 14. CSR Map (Implemented Subset + Phase 2 Extensions)
| Address Offset | Name | Description |
|----------------|------|-------------|
| 0x000 | CONTROL | start, stop (write-pulse) |
| 0x004 | STATUS | busy, grade, efficiency (milli TOPS/W) |
| 0x010 | PRECISION_MODE | 0=INT8 .. 3=INT1 |
| 0x014 | SPARSITY_CTRL | enable + mode bits (temp) |
| 0x018 | PACK_CONFIG | active lane mask (packing implicit) |
| 0x030 | PHYS_OPS_LO | physical ops (low 32b) |
| 0x038 | EFF_OPS_LO | effective ops (low 32b) |
| 0x040 | SKIPPED_OPS_LO | skipped phys ops (low 32b) |
| 0x050 | BYTES_SRAM | SRAM bytes (approx) |
| 0x054 | BYTES_DRAM | DRAM bytes (approx) |
| 0x060 | ENERGY_PJ_LO | energy estimate low |
| 0x064 | ENERGY_PJ_HI | energy estimate high |
| 0x070 | SPARSITY_RATIO | instantaneous sparsity metric |
| 0x074 | DYNAMIC_POWER | dynamic power (mW) |
| 0x078 | LEAKAGE_POWER | leakage power (mW) |
| 0x080 | DYN_ENERGY_PJ_LO | dynamic energy low 32b |
| 0x084 | DYN_ENERGY_PJ_HI | dynamic energy high 32b |
| 0x088 | LEAK_ENERGY_PJ_LO | leakage energy low 32b |
| 0x08C | LEAK_ENERGY_PJ_HI | leakage energy high 32b |
| 0x090 | UTILIZATION_MILLI_PCT | instantaneous util (0-1000) |
| 0x07C | VERSION | build / feature bitmap (future) |

---
### 15. Open Questions
- Optimal cluster size vs frequency sweet spot?  
- Acceptable SRAM banking granularity vs routing complexity?  
- Minimum viable sparsity granularity (4, 8, 16 elements)?  
- Thermal sensor integration (digital vs analog macro) timing?  

---
### 16. Summary
This architecture pursues 30 effective TOPS/W by pairing a realistic (and legally conservative) physical efficiency base with multiplicative algorithmic gains (sparsity + precision). It emphasizes modularity (RISC-V control), observability (rich counters), and patent-risk mitigation via generic, parameterized mechanisms rather than vendor-specific heuristics. The staged roadmap ensures early measurement of true energy contributors and provides off-ramps if gains underperform.

Action Now: Phase 2.5 integrated (CSR overrides, dynamic/leakage split, utilization & hysteresis-ready DVFS). Memory latency injector is now wired into tile bytes & stall counters, enabling realistic memory stall modeling. Next: finalize DVFS hysteresis tuning constants, add moving-average utilization CSR if needed, expose injector CSR overrides, and update synthesis energy calibration.

Recent Integration Highlight:
- Memory latency injector replacing heuristic byte/stall accumulation: counters now reflect actual request/response timing (SRAM vs DRAM) to improve power & bandwidth modeling fidelity.

---
### 17. Performance Metrics (Definitions & Units)
| Metric | Symbol | Definition | Unit | Notes |
|--------|--------|------------|------|-------|
| Physical MACs | N_mac | Total independent INT8 multiply-accumulate units | count | One MAC = (A*B + Acc) per cycle |
| Ops per MAC per cycle | O_mac | 2 (mult + add) or 1 (if counting MAC as one op) | ops/cycle | We adopt 2 ops per MAC (industry common) |
| Peak Physical OPS | OPS_peak_phys | N_mac * O_mac * f_clk | ops/s | No utilization/power gating accounted |
| Physical Utilization | U_phys | active_cycles / total_cycles | ratio | Derived from counters |
| Physical OPS (sustained) | OPS_phys | OPS_peak_phys * U_phys | ops/s |  |
| Packing Gain | G_pack | 2^p (p=precision_mode) * Eff_pack_efficiency | x | Eff_pack_efficiency<=1 accounts for overhead |
| Sparsity Gain | G_sparse | physical_ops / executed_physical_ops | x | (1/(1 - skip_fraction)) ideal; capped by pipeline bubbles |
| Effective OPS | OPS_eff | OPS_phys * G_pack * G_sparse | ops/s | Capped by memory bw / issue limits |
| Physical TOPS | TOPS_phys | OPS_phys / 1e12 | TOPS | Using 2 ops per MAC policy |
| Effective TOPS | TOPS_eff | OPS_eff / 1e12 | TOPS |  |
| Power (Total) | P_total | P_compute + P_sram + P_interconnect + P_ctrl + P_leak | W |  |
| Physical Efficiency | Eff_phys | TOPS_phys / P_total | TOPS/W |  |
| Effective Efficiency | Eff_eff | TOPS_eff / P_total | TOPS/W | Target ≥30 |
| Energy per Physical Op | E_op_phys | P_total / OPS_phys | J/op | fJ range |
| Energy per Effective Op | E_op_eff | P_total / OPS_eff | J/op | E_op_eff = E_op_phys / (G_pack*G_sparse) |

Adopt a consistent header in RTL counters: physical_ops counts (MACs * 2 ops). effective_ops counts logical scaled operations. Report both.

---
### 18. Analytical Performance & Power Model
Given parameters: N_mac, f_clk, U_phys, p (precision exponent), skip_fraction (s), memory bytes per physical op (B/op).

Formulas:
1. OPS_peak_phys = N_mac * 2 * f_clk.
2. OPS_phys = OPS_peak_phys * U_phys.
3. G_pack = 2^p * η_pack (η_pack≈0.9–1.0 to reflect overhead).
4. G_sparse = 1 / (1 - s) * η_sparse (η_sparse≈0.85–0.95 capturing pipeline gaps).
5. OPS_eff = OPS_phys * G_pack * G_sparse (cap by memory: OPS_mem_cap = BW_mem_bytes / (B/op_eff)).
6. P_compute_dyn = α_mac * N_mac * C_mac * V^2 * f_clk * U_phys.
7. P_sram_dyn = (Access_rate * E_access) * f_clk (derive from bytes_read counters).
8. P_interconnect = α_inter * C_inter * V^2 * f_clk.
9. P_leak = (N_mac*C_mac + C_misc) * V * I_leak_density.
10. P_total = Σ components.
11. Eff_phys = (N_mac * 2 * f_clk * U_phys) / 1e12 / P_total.
12. Eff_eff = Eff_phys * G_pack * G_sparse * η_bw (η_bw accounts for bandwidth stalls).

Bandwidth Ceiling:
B_required_phys = OPS_phys * B/op_phys.
For effective operations, packing/sparsity reduce bytes per effective op: B/op_eff = B/op_phys / (G_pack * G_sparse) (ideal). Memory-limited regime when BW_available < B_required_phys.

---
### 19. Representative Workload Portfolio & Expected Gains
| Workload | Characteristics | Expected Sparsity (s) | Precision Mode (p) | Est. G_sparse | Est. G_pack | Combined Gain |
|----------|-----------------|-----------------------|--------------------|--------------|------------|---------------|
| MobileNetV3 | depthwise + pointwise conv | 0.35 act prune | INT8 (p=0) | 1/(0.65)*0.9≈1.38 | 1.0 | 1.38 |
| Transformer Encoder (INT8) | MatMul + LayerNorm | 0.25 weight prune | INT8 | 1/(0.75)*0.9≈1.20 | 1.0 | 1.20 |
| Pruned ResNet50 | structured channel prune | 0.45 weights | INT8 | 1/(0.55)*0.9≈1.64 | 1.0 | 1.64 |
| Quant-Aware Retrained Model | Mixed precision | 0.30 combined | INT4 (p=1) | 1/(0.70)*0.9≈1.29 | 2*0.95≈1.90 | 2.45 |
| Aggressive Edge Model | Highly sparse & low precision | 0.55 | INT2 (p=2) | 1/(0.45)*0.9≈2.00 | 4*0.9≈3.60 | 7.20 (upper bound) |

Portfolio Target: Average combined gain ≥2.0 while maintaining accuracy loss <1% absolute top-1.

---
### 20. Memory Bandwidth & Reuse Calculations
Define: R_weight_reuse = (Total weight uses) / (Distinct weight loads). R_act_reuse similarly.

Bytes per physical MAC (conv):
B/op_phys ≈ ( (1/R_weight_reuse)*Bytes_weight + (1/R_act_reuse)*Bytes_activation + Bytes_output_write / K_mac ) / 2 ops.

Example (INT8 conv, 3x3): Suppose R_weight_reuse=64, R_act_reuse=9, weight bytes per MAC=1/64, activation bytes=1/9, output write amortized= (1 byte / 9 MACs) => B/op_phys≈ (0.0156 + 0.111 + 0.111) /2 ≈0.119 bytes/op.

With G_pack=2 (INT4) and G_sparse=1.5: B/op_eff≈0.119 / (3) ≈0.04 bytes/op_eff.
At 30 TOPS_eff (30e12 ops/s): memory BW need ≈1.2 TB/s effective; but phys ops = 30 / (G_pack*G_sparse) ≈ 10 TOPS_phys, requiring 10e12 *0.119 ≈ 1.19e11 bytes/s ≈119 GB/s. Reusing on-chip SRAM reduces DRAM to fraction (target <20% of total => <24 GB/s external).

---
### 21. Utilization & Bottleneck Analysis
Utilization Loss Sources & Targets:
- Load latency / DMA stalls: <5% cycles.
- Sparsity mask bubbles: <8% cycles (η_sparse ≥0.92).
- Precision mode switches: amortize over large tiles; overhead <1%.
- DVFS transitions: frequency change latency hidden by prefetch; <0.5%.
- Thermal throttling: design to <2% average under 45°C ambient at 3 W.

Utilization Model: U_phys = 1 - (stall_dma + stall_mask + stall_cfg + stall_thermal).
Counters: cycles_stalled_dma, cycles_stalled_mask required to calibrate.

---
### 22. Verification & Measurement Plan
Stage A (RTL Simulation):
- Instrument counters; run synthetic kernels to ensure expected scaling (pack & sparsity toggles).
Stage B (Gate-Level w/ SAIF):
- Capture switching for representative kernels; map to early library to estimate C_mac & E_sram.
Stage C (FPGA Emulation - Optional):
- Throughput validation (frequency lower, but utilization patterns validated).
Stage D (Silicon Correlation Plan):
- On-chip ring oscillators for voltage/frequency tracking.
- Firmware routine sweeps p & sparsity masks; logs ops, energy (from PMBus / on-die sensors) to correlate model.

Correlation Acceptance: Model vs measured TOPS_eff within ±7%; power within ±10% after Phase 2.

---
### 23. PPA Assumptions Table (Initial)
| Item | Node | Value | Source | Notes |
|------|------|-------|--------|-------|
| V_nom | 0.7 V | 0.70 | Assumed | Advanced low-power node |
| f_nom | 1.2 GHz | 1.2e9 | Assumed | After timing margin |
| C_mac | fF | 1.2 fF/op-bit | Est. | Includes gating overhead |
| E_sram_rd (8b) | pJ/access | 0.025 | Foundry early PDK proxy | 32b wide macro scaled |
| Leakage density | nA/um^2 | tech avg | Placeholder | To refine with library |
| Gating efficiency | % idle cut | 60% | Literature | For fine-grained gating |
| η_pack | 0.95 | 0.95 | Est. | Control overhead loss |
| η_sparse | 0.90–0.95 | 0.92 | Est. | Pipeline misalignment |

Will refine with actual .lib characterization once available.

---
### 24. Scaling Projections
| Scenario | N_mac | f_clk (GHz) | U_phys | G_pack | G_sparse | TOPS_eff | P_total (W) | Eff_eff (TOPS/W) |
|----------|-------|------------|--------|--------|----------|----------|-------------|------------------|
| Baseline A | 2048 | 1.0 | 0.75 | 1.0 | 1.3 | ~3.98 | 0.60 | 6.6 |
| Optimized B | 3072 | 1.1 | 0.82 | 1.0 | 1.4 | ~7.05 | 0.90 | 7.8 |
| Precision C | 3072 | 1.1 | 0.82 | 2.0 | 1.4 | ~14.1 | 0.96 | 14.7 |
| Target D | 4096 | 1.2 | 0.85 | 2.0 | 1.5 | ~24.9 | 1.10 | 22.6 |
| Stretch E | 4096 | 1.3 | 0.88 | 2.0 | 1.6 | ~27.4 | 1.05 | 26.1 |
| Portfolio Avg F | 4096 | 1.2 | 0.85 | 2.0 | 1.7 | ~28.2 | 1.00 | 28.2 |
| Final Goal G | 4096 | 1.25 | 0.88 | 2.0 | 1.8 | ~31.7 | 1.05 | 30.2 |

Numbers illustrative; require calibration run (Phase 2–3).

---
### 25. Metric Acceptance & Gates
| Phase | Gate | Criteria |
|-------|------|----------|
| 1 | Counter Integrity | physical_ops aligns with cycle*lanes within 1% |
| 2 | Power Model Alpha | SAIF-based dynamic vs model <15% error |
| 2 | Utilization Floor | U_phys ≥0.80 on synthetic conv/GEMM |
| 3 | Effective Gain | Average combined gain ≥2.0 across portfolio |
| 3 | Physical Efficiency | ≥12 TOPS/W measured (path to 14) |
| 3 | Effective Efficiency | ≥24 TOPS/W (path to 30) |
| 4 | Calibrated Model | Power & TOPS predictions ±7% |
| 5 | Pre-Tapeout Signoff | All metrics meet/ exceed final goal gates |

Failure Response: If a gate fails, root-cause using counter correlation (stall, bandwidth, gating) and re-spin microcode / RTL optimizations within one iteration before scope change.

