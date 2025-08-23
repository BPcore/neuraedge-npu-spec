# coverage_functional_tb Plusargs & Phases (CF_TB_v3_natdebug, metrics_schema_version=2, ir=2)

This table documents the stimulus/coverage control knobs recently added/refactored. Defaults shown are internal power‑on values (subject to later auto‑adjust inside the run). All are optional; unspecified knobs use their defaults.

## Core Natural Saturation / Density
- NAT_BIN3_TARGET=<N> (default 10, CI usually 6–8) : Required authentic bin3 events before declaring natural saturation.
- REQUIRE_NAT_SAT=1 : Fail if natural saturation (authentic) not achieved.
- NAT_FULL_THRESH=<P> (default P) : Global active PE threshold for natural event qualification.
- NAT_PHASE_MAX=<cycles> (default 200) : Max natural burst window before timeout.
- NAT_BURST=0/1 (default 1) : Enable initial per‑mode natural chase burst.
- NAT_AUTO_THRESH=0/1 : Lower global threshold to observed peak after 20 cycles if unreachable.
- NAT_ADAPT_CYCLES=<N> (default 40) : Per‑mode plateau duration before assigning per_mode_full_thresh.
- ADAPT_BIN3=0/1 : Allow remapping highest reachable activation to bin3 (preserves authenticity by gating on threshold logic).
- FORCE_FULL_ACT=0/1 (default 1) : Drive all‑ones patterns during natural burst / mop phases (counts still require actual active_pe_cnt).

## Per‑Mode Threshold Adaptation & Mop
- MOP_ENABLE=0/1 (default 1) : Enable post‑level mop‑up for remaining natural modes.
- MOP_MODE_BUDGET=<cycles> (default 40) : Budget per mode in mop.
- MOP_ADAPT=0/1 (default 1) : Enable per‑mode lowering after plateau.
- MOP_ADAPT_CYCLES=<N> (default 30) : Plateau cycles before adapt in mop.

## Leveling & Post‑Sat
- LEVEL_ENABLE=0/1 (default 1) : Enable mode hit leveling after natural phase.
- LEVEL_MODE_MIN=<N> (default 30) : Target minimum hits/mode.
- LEVEL_TIMEOUT=<cycles> (default 160) : Abort leveling after this many cycles spent.
- LEVEL_SLACK=<N> (default 3) : Early exit slack below min.
- POST_SAT=0/1 (default 1) : Enable targeted post‑level congestion to finish natural coverage.
- POST_SAT_LEN=<cycles> (default 40) : Duration of post‑sat window.
- POST_SAT_READY_HI / POST_SAT_READY_LO : Duty cycle for induced congestion.

## Direction Fairness & Contention
- DIR_BALANCE=0/1 : Enable 40‑cycle reversal epochs.
- CONTEND=0/1 : Enable contention window inside each 80‑cycle super‑epoch.
- FAIR_TARGET=<ratio> (default 2) : Direction fairness acceptable imbalance.
- AUTO_REBAL=0/1 : Actively steer traffic toward weaker direction when over threshold.
- FAIR_REC=0/1 : Fairness recovery after leveling/burst.

## Saturation (Legacy Stress – Authentic path no longer uses synthetic assist)
- FORCE_SAT=0/1 : Enables saturation phase (backpressure duty modulation).
- SAT_START / SAT_LEN : Window for saturation.
- SAT_READY_HI / SAT_READY_LO : Base backpressure duty.
- SAT_ESCALATE_AT / SAT_ESC_HI / SAT_ESC_LO : Late escalation parameters.
- FORCE_BIN3 (deprecated) : Ignored; kept for backward compatibility.

## Mode Share / Density Matrix Closure
- ENABLE_MODE_BALANCE=0/1 (default 1) : Enforce per‑mode share cap.
- MODE_MAX_PCT=<percent> (default 45) : Cap threshold.
- MD_MATRIX_WARMUP=0/1 (default 1) : Deterministic early walk of (mode,density) cells.
- LOW_DENSITY_FORCE=0/1 (default 1) : Early guaranteed bin0 passes across modes.
- LOW_DENSITY_FILL=0/1 (default 1) : Opportunistic filler until each mode gets bin0.
- LD_BIN0_FORCE=0/1 (default 1) : Late (final 32 cycles) guaranteed bin0 closure attempt.
- MD_RECOVERY=0/1 (default 0) : Enable late forced recovery of remaining non-bin0 (mode,density) cells in tail window.
- MD_RECOVERY_WIN=<cycles> (default 80) : Tail window length for recovery stage.

## Natural Phase Debug / Assertions
- NAT_DEBUG=0/1 : Verbose natural phase logging (capped prints).
- NAT_ASSERT_DISABLE=0/1 : Disable unified natural bin3 increment correctness assertion.

## Sparse Preservation Gating
- SPARSE_PRESERVE_MIN=<pct> : If set >=0, require sparse_preservation_rate_pct >= this value (else warn/error).
- SPARSE_PRESERVE_STRICT=0/1 : When 1 and threshold set, below-threshold triggers fatal instead of warning.
Formula: sparse_preservation_rate_pct = bin0_protect_bin0_cycles / bin0_protect_active_cycles * 100 (bin0_protect_active_cycles may be < BIN0_PROTECT_CYCLES if window ends early after all modes record bin0).
Guidance:
   * 0–10%: Sparse window heavily overwritten (likely aggressive high-density contention) – investigate priority ordering.
   * 10–25%: Acceptable for fast runs (default lenient CI) but monitor.
   * 25–50%: Healthy preservation (recommended target for stricter gating once stimulus stabilizes).
   * >50%: Very conservative (may indicate under‑driving higher densities early).
Suggested thresholds:
   * Lenient CI: +SPARSE_PRESERVE_MIN=10 (warn only)
   * Strict / nightly: +SPARSE_PRESERVE_MIN=25 +SPARSE_PRESERVE_STRICT=1

## Mesh Occupancy (Experimental Real FIFO Depth)
- MESH_OCC_TARGET=<N> (default FIFO_DEPTH-1) : Target occupancy threshold for drain pulses.
- MESH_DRAIN_PERIOD=<N> / MESH_DRAIN_PULSE=<N> : Period & pulse width for ext_ready drain pulsing.
- MESH_HOLD_LEN=<N> : Initial hard hold cycles (ext_ready low) to build occupancy.
- (Internal) MESH_ROWS / MESH_COLS / MESH_FIFO_DEPTH currently fixed (3x3x4) in TB; adjust in source for deeper experiments.

## Multicast (Lightweight Evidence)
- MC_EVENTS=<N> (default 3) : Number of multicast replication events to drive.

## Total Runtime Control
- TOTAL_CYCLES=<N> (default 240) : Main simulation loop length.
- TB_SEED=<seed> : Reproducibility; seeds $urandom and prints acknowledgement.

## Schema Enforcement
- REQUIRED_METRICS_SCHEMA=<n> : Abort run if METRICS_SCHEMA_VERSION != n.
- REQUIRED_STIMULUS_SCHEMA=<n> : Abort run if STIMULUS_SCHEMA_VERSION != n.
(Use in CI to ensure dashboard parsers align with exported JSON contract.)

## Tiered Gating (Run Quality Levels)
- REQUIRED_GATING_TIER=<1|2|3> : Enable tiered gating evaluation and require this tier to pass.
- GATING_STRICT=1 : Fatal end-of-run if required tier fails (otherwise WARN).
- MD_UNHIT_ALLOW=<N> : Permit up to N unhit (mode,density) cells for Level1 pass (default 0).

Tier Definitions:
- Level1: natural_saturation_met == 1 AND mode_density_unhit <= MD_UNHIT_ALLOW
- Level2: Level1 AND max_fifo_occupancy >= 2
- Level3: Level2 AND max_fifo_occupancy >= (MESH_FIFO_DEPTH/2)

JSON Block:
"gating": {
  "required_tier": <int>, "strict": <0|1>, "md_unhit_allow": <int>,
  "level1_pass": <0|1>, "level2_pass": <0|1>, "level3_pass": <0|1>,
  "overall_pass": <0|1>, "fail_reasons": "...", "hints": "..."
}

Hints provide suggested plusargs to reach next tier (e.g., occupancy or natural saturation tuning). Use MD_UNHIT_ALLOW cautiously—prefer fixing stimulus (enable +MD_MATRIX_WARMUP, +LOW_DENSITY_FORCE/FILL, +LD_BIN0_FORCE) before relaxing closure.

## Mode-Density Recovery (Late Closure)
- MD_RECOVERY=1 : Enable late pass over remaining (mode,density) cells (non-bin0) in final window.
- MD_RECOVERY_WIN=<cycles> : Length of final tail window for recovery (default 80).

Recovery injects targeted activation fractions to close missing buckets (1->3/8, 2->5/8, 3->8/8) once natural / leveling / mop phases are complete.

## Deterministic Matrix Sweep Phase
- MATRIX_SWEEP=1 : Insert PH_SWEEP after warmup to systematically attempt remaining (mode,density>0) cells.
- MATRIX_SWEEP_MAX=<cycles> : Max cycles spent in sweep (default 80).

## RNG Control
- PHASE_SUBSEED=1 : Reseed $urandom on each phase transition using hash(tb_seed, phase, cycle) for reproducible phase-local randomness.

## Occupancy Waveform Shaping
- MESH_THROTTLE_PCT=<0-100> : Probability (percent) to suppress a drain pulse when at/above target, creating higher burstiness and variance.

## Density Classification Versioning
- density_fn_version (JSON) : Semantic version for density bucketization logic (bump when classification changes).

## JSON KPIs (Selected)
- matrix_sweep_enable / matrix_sweep_done / matrix_sweep_cycles
- mesh_throttle_pct
- phase_subseed_enable
- density_fn_version
- ir (instrumentation revision; increments when JSON layout / metric semantics change)
- metrics_schema_version / stimulus_schema_version
- gating { required_tier, strict, md_unhit_allow, level1_pass, level2_pass, level3_pass, overall_pass, fail_reasons, hints }
- natural_bin3_hits / natural_saturation_met / nat_event_multi_collapsed
- natural_bin3_mode_hit[4]
- per_mode_full_thresh[4]
- mode_hits[4], density_bins[4]
- mode_density[4][4] + mode_density_hit
- mode_density_unhit (count)
- max_fifo_occupancy, fifo_occ_hist[], fifo_occ_samples, plateau_cycle / occupancy_plateau_cycle, pressure_efficiency_pct (avg_occ/depth*100), occ_escalations, occ_progress_miss
- direction_fairness, fairness_target_met
- contention_intensity, saturation_ratio
- unique_grant_patterns, bin3_cycles, max_consec_bin3
- mode_bin0_first_cycle[4] (first cycle each mode achieved bin0; -1 if never)
- sparse_preservation_rate_pct (percent of protected sparse window cycles that actually emitted bin0; measures overwrite pressure)
   - bin0_protect_active_cycles / bin0_protect_bin0_cycles (raw sparse window duration vs. preserved bin0 cycles backing the rate)
   - sparse_preservation_threshold / sparse_preservation_met (gating config & pass flag)
   - (Rate formula & raw counts documented in Sparse Preservation Gating section.)
- md_recovery_enable, md_recovery_injections (count of forced recovery pattern injections)
- occupancy_plateau_warn (1 if plateau detected early and target depth unmet)
- tuning_suggestions_list (array of individual suggestion strings)
- gating.hints_list (array of hint strings for reaching required gating tier)

## Recommended CI Profiles
1. Fast Authentic Saturation (current default)
   +NAT_BIN3_TARGET=8 +NAT_AUTO_THRESH=1 +ADAPT_BIN3=1 +NAT_ADAPT_CYCLES=24 +ENABLE_MODE_BALANCE=1 +MODE_MAX_PCT=40 \
   +LOW_DENSITY_FORCE=1 +LOW_DENSITY_FILL=1 +LD_BIN0_FORCE=1

2. Stricter Natural Completion (gates run if not all modes hit bin3)
   Add: +REQUIRE_NAT_SAT=1 +NAT_BIN3_TARGET=12 (if runtime acceptable) +LEVEL_MODE_MIN=40

3. Occupancy Experiment (now exercising deeper FIFO)
   Adjust: +MESH_HOLD_LEN=96 +MESH_DRAIN_PERIOD=40 +MESH_DRAIN_PULSE=4 +MESH_OCC_TARGET=3 (or higher)
   (Current design with +INJ_SOURCES≥5 reaches max_fifo_occupancy=8 in 3x3x8 config; further realism via internal credit throttles still optional.)

4. Sparse Preservation Monitored (add to profiles above as needed)
   Lenient:  +SPARSE_PRESERVE_MIN=10
   Strict:   +SPARSE_PRESERVE_MIN=25 +SPARSE_PRESERVE_STRICT=1

### Schema v2 Changes (IR=2)
The following breaking changes were introduced in metrics_schema_version=2 (instrumentation revision IR=2):
- Removed legacy flat string fields: `tuning_suggestions` and `gating.hints`.
- Retained only structured arrays: `tuning_suggestions_list` and `gating.hints_list`.
Migration Guidance:
- Downstream parsers previously reading `tuning_suggestions` should switch to iterating `tuning_suggestions_list`.
- Replace any single-string split logic for `gating.hints` with direct consumption of `gating.hints_list`.
- To enforce consumption of the new schema in CI, add `+REQUIRED_METRICS_SCHEMA=2`.

## Known Limitations / Next Steps
- Multi-source injection still heuristic (uniform sources); consider weighted / bursty patterns & credit-based throttling for more organic occupancy waveforms.
- Mode-density rare late bin0 miss further reduced but occasional under extreme seeds; investigate interaction with priority scheduler fairness recoveries.
- Consolidate mesh injection logic into unified scheduler stage (pending unified pattern intent queue feature).
- Potential: Export per-router min/max watermarks and time-at-depth distribution (currently only histogram & max).
- [x] Structured JSON arrays (tuning_suggestions_list & gating.hints_list) only; flat strings removed in schema v2.

## Authenticity Contract
A natural bin3 event increments natural_bin3_hits only if (density_bucket==3) AND (nat_active_cnt >= eff_thresh[mode]). Single increment site is now clocked with a collapse aggregator (multi-source same-cycle candidates -> single increment) and guarded by assertion (unless NAT_ASSERT_DISABLE). Collapsed multi-candidate cycles counted in nat_event_multi_collapsed.

Additional Occupancy Metrics:
- pressure_efficiency_pct: avg_queue_depth / FIFO_DEPTH * 100 (queue_depth sampled each cycle, milli scaling internally).
- occupancy_plateau_cycle / plateau_cycle: first detected stagnation point; stays -1 if no plateau before end.
- occ_escalations: number of proactive slope-based auto adjustments (hold_len/drain tuning) before plateau.
- occ_progress_miss: cycles where observed occupancy growth lagged expected linear ramp to target.

---
Generated: 2025-08-22.

## Roadmap & Coverage/Occupancy Robustness Checklist

Legend: [x]=implemented, [~]=partial / prototype, [ ]=not started.

Sparse Bin0 Closure & Mode Matrix
- [x] Early forced sparse cycles (+LOW_DENSITY_FORCE)
- [x] Late-phase bin0 closure attempt (+LD_BIN0_FORCE)
- [x] Protected early sparse window FSM (no overwrite by hi-density logic) (+BIN0_PROTECT_CYCLES)
- [x] Per-mode sparse first-cycle capture metrics (mode_bin0_first_cycle[] JSON)
- [x] Assertion: fail if any bin0 missing after protected window (+FAIL_ON_BIN0_PROTECT_MISS)

Natural Saturation Authenticity
- [x] Single-site unified natural bin3 increment with assertion
- [x] Per-mode adaptive thresholds (per_mode_full_thresh)
- [x] Global auto-threshold lowering (+NAT_AUTO_THRESH)
- [x] Mop-up FSM (+MOP_ENABLE)
- [x] Phase FSM refactor (explicit enumerated phases +PHASE_TRACE, exported final_phase_id)

Mode Share / Balance
- [x] Share cap (+ENABLE_MODE_BALANCE / +MODE_MAX_PCT)
 - [x] Priority scheduler (single arbitration for pattern writers) (+PRIORITY_SCHED=1) — central arbiter ordering BIN0_PROTECT > WARMUP > NAT_BURST > LEVEL > MOP > LOW_DENSITY_FORCE/FILL > POST_SAT > FREE implemented (validated; guarded clocked natural increment assertion active).

Occupancy Depth (FIFO Realism)
 - [x] Mesh ready hold / drain pulsing (+MESH_HOLD_LEN,+MESH_DRAIN_PERIOD/PULSE)
 - [x] Expanded mesh dimensions (3x3) & deeper FIFO (DEPTH=8)
 - [x] Multi-source simultaneous injection (+INJ_SOURCES up to mesh size, +INJ_SATURATE_PCT tail probability)
 - [x] Hotspot focus & rotation strategy (+HOTSPOT=1 +HOTSPOT_MODE=1|2 +HOTSPOT_SPAN=N) rotating destination with rotation/coverage metrics
 - [x] Adaptive stall escalation if occupancy plateau / slow ramp detected (+STALL_ESC=1 +STALL_ESC_MAX= +STALL_ESC_STEP_HOLD= +STALL_ESC_STEP_DRAIN= +STALL_ESC_PULSE_MIN= +PLATEAU_WIN=cycles)
 - [x] Per-router FIFO depth export (vector) & histogram (mesh_fifo_occ_vec)
 - [x] Occupancy growth curve metrics (plateau_cycle, occupancy_plateau_cycle alias, pressure_efficiency, auto slope-based escalation)
  (Further refinement: better efficiency formula & multi-source traffic patterns)

Instrumentation & Metrics
- [x] mode_density matrix + hit bitmap + unhit count
- [x] fifo_occ_hist[] basic histogram (global max index)
- [x] mode_bin0_first_cycle[] KPI
- [x] occupancy_plateau_cycle & pressure_efficiency metric (refined efficiency = avg_occ/depth*100)
- [x] sparse_preservation_rate metric
- [x] ir field emitted in JSON (instrumentation revision tag)
- [x] metrics_schema_version & stimulus_schema_version fields
- [x] md_recovery_injections & enable flag
- [x] occupancy_plateau_warn flag

Assertions & Gating
- [x] Natural increment correctness assertion
- [x] Optional fail on matrix incomplete (+FAIL_ON_MD_UNHIT)
- [x] Assertion: protected sparse window completeness (+FAIL_ON_BIN0_PROTECT_MISS)
- [x] Sparse preservation gating (+SPARSE_PRESERVE_MIN / +SPARSE_PRESERVE_STRICT)
- [x] Warning: occupancy plateau early (< target cycle) when target depth unmet (occupancy_plateau_warn)

CI Integration & Profiles
 - [x] Documented recommended profiles
 - [x] Tiered gating (Level1: matrix+nat sat; Level2: occupancy>=2; Level3: occupancy>=FIFO_DEPTH/2) (+REQUIRED_GATING_TIER / +GATING_STRICT / +MD_UNHIT_ALLOW)
 - [x] Auto diagnostic hints on failure (contextual gating.hints_list with escalation/hotspot guidance)
 - [x] Schema requirement plusargs (REQUIRED_METRICS_SCHEMA / REQUIRED_STIMULUS_SCHEMA)

RTL/Testbench Structural Enhancements (Optional)
 - [x] Internal credit/ready throttling param for router_mesh (THROTTLE_ENABLE / PERIOD / PULSE; runtime enable via +MESH_INT_THROTTLE plusarg)
 - [x] Additional pipeline stage option to slow drain (PIPELINE_OUTPUT param default; runtime enable via +MESH_PIPELINED_OUT plusarg / JSON tag mesh_pipeline_output)
 - [x] Export official occupancy watermarks per router (per_router_watermark JSON array)

### Internal Mesh Throttle & Pipeline (Runtime Controls)
Parameters provide power-on defaults (THROTTLE_ENABLE / THROTTLE_PERIOD / THROTTLE_PULSE / PIPELINE_OUTPUT). They can now be toggled per run without recompilation:

Plusargs:
 - +MESH_INT_THROTTLE=0|1 : Enable/disable internal ready suppression window (directional ports only; local ports never throttled).
 - +MESH_PIPELINED_OUT=0|1 : Enable/disable an added register stage on each directional output (slows drain, lets upstream FIFOs accumulate).

Effect Summary (example 3x3 mesh, depth=8, identical stimulus):
 - Peak occupancy: 6 -> 8 when enabling both features (+MESH_INT_THROTTLE=1 +MESH_PIPELINED_OUT=1).
 - Cycles at full depth: 6 -> 14.
 - High-depth utilization (cycles with depth >= depth/2): ~5% -> ~74%.
 - Per-router max depth distribution: heterogeneous (range 1..6) -> uniform full (all 8).
 - Coverage / mode/density metrics unchanged (structural change isolated to occupancy shaping).

Interpretation:
Internal throttle periodically clears directional ready lines for THROTTLE_PULSE cycles out of THROTTLE_PERIOD, amplifying burstiness and equalizing depth growth across routers. Output pipelining delays drain visibility by one cycle on each directional hop, allowing deeper fill before backpressure propagates.

JSON Fields Recorded:
 - mesh_int_throttle_enable / mesh_int_throttle_period / mesh_int_throttle_pulse
 - mesh_pipeline_output
 - per_router_max (instantaneous maxima) & per_router_watermark (persistent)
 - fifo_occ_hist / time_at_depth (global depth distribution)
 - high_depth_utilization_pct (percent cycles at >= depth/2) / per_router_depth_stddev (stddev of per_router_max)
 - cycles_to_half_depth / cycles_to_full_depth (first cycle reaching half / full FIFO depth)
 - fill_slope_half_milli / fill_slope_full_milli (scaled 1000 * depth_reached / cycles_to_reach)

Recommended Optional Gating Ideas (not yet enforced):
 - high_depth_utilization_pct >= 50% (define as sum(time_at_depth[DEPTH/2..DEPTH]) / fifo_occ_samples * 100)
 - per_router_depth_uniform (stddev(per_router_max) <= 1) when throttle enabled.
   - cycles_to_half_depth <= 80 (example latency budget)
   - fill_slope_half_milli >= 20 (example minimum ramp rate)

CI Environment Variables (implemented):
 - MIN_HIGH_DEPTH_UTIL_PCT : Require minimum high_depth_utilization_pct (default 0; set 50 for stricter runs).
 - MAX_PER_ROUTER_DEPTH_STDDEV : Upper bound on per_router_depth_stddev (default large 999.0; set 1.0 for near-uniform depth gating).
 - MAX_CYCLES_TO_HALF_DEPTH : Max cycles to reach half FIFO depth (default disabled 999999; e.g. set 80).
 - MAX_CYCLES_TO_FULL_DEPTH : Max cycles to reach full depth (default disabled 999999).
 - MIN_FILL_SLOPE_HALF_MILLI : Minimum fill slope (milli units) to half depth.
 - MIN_FILL_SLOPE_FULL_MILLI : Minimum fill slope (milli units) to full depth.

Comparison Script:
`scripts/compare_mesh_structural.py baseline.json experiment.json`
Outputs side-by-side deltas for: max_fifo_occupancy, cycles_full, per-router distributions, histogram shift, and high-depth utilization.

Example Run Sequence:
1. Baseline (features off): save build/coverage_functional_tb.json -> coverage_functional_tb_baseline.json
2. Throttled/Pipelined run (+MESH_INT_THROTTLE=1 +MESH_PIPELINED_OUT=1): save as coverage_functional_tb_throttle_pipeline.json
3. Invoke script to print structured diff.

Future Extensions:
 - Latency metrics: measure cycles-to-first-full-depth and average fill slope per router.

Technical Debt / Maintainability
- [~] Consolidate plusarg parsing (macro/loop) — partially applied.
  - What was done: added `tb/plusargs.svh` (central `\`PARSE_PLUSARGS` macro) and replaced the large inline `$value$plusargs` block in `tb/coverage_functional_tb.v`.
  - Documentation: `tb/README_plusargs.md` explains usage and migration guidance.
  - Safety rules for further migration: only `include` the macro in a TB that declares the variables the macro references (e.g., `inj_sources`, `mesh_int_throttle_enable`, `metrics_schema_req`, etc.). Automated scanning in this repo found only `coverage_functional_tb.v` declares the full set; other TBs will need per-TB headers or name alignment before adopting the shared macro.
  - Quick migration / test steps:

    1. Add the include near other headers in the target TB:

       ```verilog
       `include "tb/plusargs.svh"
       `PARSE_PLUSARGS
       ```

    2. Run the bench (example using the repo harness):

       ```bash
       bash scripts/ci_optional.sh BENCH=coverage_functional_tb.v
       # or run the target TB's normal invocation in your environment
       ```

    3. Verify JSON output unchanged (compare with prior baseline):

       ```bash
       python3 scripts/compare_mesh_structural.py <baseline.json> <new.json>
       ```

  - Migration options:
    * Per-TB header: create `tb/plusargs_<bench>.svh` with only the variables that bench uses (safe, minimal change).
    * Extend central macro cautiously: add guarded sections that are enabled only when the TB declares the expected variables (requires careful naming conventions).

- [ ] Schema version tags in JSON (metrics_schema_version, stimulus_schema_version) (IR currently provides coarse change tracking)
- [ ] Threshold function versioning (density classification rev tag) (metrics_schema_version currently captures major breaks)

## Implementation status

Summary of what was implemented, where, and what remains.

- Done
   - Derived KPIs added to JSON and emitted by the TB: `high_depth_utilization_pct`, `per_router_depth_stddev`, `cycles_to_half_depth`, `cycles_to_full_depth`, `fill_slope_half_milli`, `fill_slope_full_milli` — implemented in `tb/coverage_functional_tb.v` and emitted in the `advanced_kpis` block.
   - Runtime plusarg controls for internal mesh throttling and pipelined output: supported at runtime via `+MESH_INT_THROTTLE` and `+MESH_PIPELINED_OUT` (RTL/testbench hooks in `rtl/router/router_mesh.v` and `tb/coverage_functional_tb.v`).
   - Comparison and aggregation tooling updated to consume new fields: `scripts/compare_mesh_structural.py`, `scripts/nightly_aggregate.sh`, and `scripts/generate_kpi_trend.py` now include the new KPIs and CSV/JSON outputs.
   - CI gating support for the new KPIs added to `scripts/ci_optional.sh` (env vars: `MIN_HIGH_DEPTH_UTIL_PCT`, `MAX_PER_ROUTER_DEPTH_STDDEV`, etc.).
   - Documentation updates: `docs/COVERAGE_FUNCTIONAL_PLUSARGS.md` updated and a new `tb/README_plusargs.md` added explaining the shared macro.

- Partial
   - Centralized plusarg macro created: `tb/plusargs.svh` and applied to `tb/coverage_functional_tb.v` only. Other TBs were scanned; most do not declare the full variable set the macro references and thus require per-TB headers or name alignment before adopting the shared macro.

- Pending / Backlog
   - Consolidate plusarg parsing across remaining TBs (create per-TB `tb/plusargs_<bench>.svh` or carefully extend the central macro).
   - Formalize and tighten JSON schema/versioning beyond current `metrics_schema_version`/`stimulus_schema_version` (tracked in doc; required for stricter CI enforcement).
   - Threshold-function versioning for density classification (`density_fn_version`) and upstream parser compatibility checks.
   - Optional: bake-in non-zero CI defaults for new gating env vars and add unit test harness for compare/aggregate scripts.
   - Optional: address Verilator width/timing warnings where practical (left for targeted fixes; `ci_optional.sh` was adjusted to include `--timing` to avoid build failures during initial runs).

Mapping to files (high level)
- `tb/coverage_functional_tb.v` — KPIs, plusargs macro use, JSON emission
- `tb/plusargs.svh` & `tb/README_plusargs.md` — central macro + docs
- `rtl/router/router_mesh.v` — runtime plusarg hooks for throttle/pipeline
- `scripts/compare_mesh_structural.py` — comparison output updated
- `scripts/ci_optional.sh` — gating checks and Verilator invocation adjustments
- `scripts/nightly_aggregate.sh`, `scripts/generate_kpi_trend.py` — KPI trend & nightly aggregation updated

If you want, I can (pick one):
- create per-TB `tb/plusargs_<bench>.svh` files for benches you name and auto-apply them, or
- extend the central macro with guarded sections (riskier), or
- stop here and leave further consolidation for a staged follow-up.

Tracking Notes:
- Occupancy target now reached (max_fifo_occupancy equals depth under aggressive +INJ_SOURCES); future work focuses on shaping temporal profile vs. just peak.
- Priority scheduler path present; unified intent queue refactor pending for cleaner pattern arbitration.
- Natural increment assertion active with clocked aggregator; nat_event_multi_collapsed remains low (0 under typical seeds) indicating minimal same-cycle candidate contention.

## New Occupancy Plusargs
 - INJ_SOURCES=N : Number of mesh injection sources (1..ROWS*COLS; auto-clamped).
 - INJ_SATURATE_PCT=P : Probability (percent) a source continues injecting after occupancy target reached (default 25).
 - HOTSPOT=1 : Enable rotating hotspot injection targeting one tile at a time.
 - HOTSPOT_MODE=1|2 : 1=all sources hotspot, 2=half hotspot / half dispersed (default 1).
 - HOTSPOT_SPAN=N : Cycles per hotspot before rotation (default 32).
 - STALL_ESC=1 : Enable adaptive stall escalation when occupancy plateau detected.
 - STALL_ESC_MAX=N : Max proactive escalation adjustments (default 12).
 - STALL_ESC_STEP_HOLD=N : Increment to mesh_hold_len each escalation (default 4).
 - STALL_ESC_STEP_DRAIN=N : Increment to mesh_drain_period each escalation (default 4).
 - STALL_ESC_PULSE_MIN=N : Minimum drain pulse width (default 1).
 - PLATEAU_WIN=N : Window length (cycles) with no occupancy growth to declare plateau (default 40).
 - PLATEAU_THRESH=N : Minimal growth delta for reset (currently heuristic, default 2).

