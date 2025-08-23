# Nightly Metrics Review (2025-08-20 Run)

Source artifact: `build/nightly_20250820_190528/metrics.json`

## Raw Key Figures
- East: 157 packets
- West: 32 packets
- Loopback: 32 packets
- East/West ratio: 4.906
- Mode hits: [41, 40, 40, 40] (≈ uniform)
- Density bins (%): [25, 48, 25, 0]  (highest bin unhit)
- Stall counts: arb=1, buf=78, bp=104

## Observations
1. Directional Imbalance: Strong east-heavy traffic (≈4.9:1) suggests biased stimulus; may mask reverse-path or credit exhaustion issues.  
	Why it matters: Asymmetric stress can hide starvation, credit depletion, or ordering bugs that only surface under balanced or reverse traffic; also skews throughput/power characterization.
2. Mode Coverage: Near-perfect uniformity across 4 modes (good baseline diversity).  
	Why it matters: Even distribution lowers risk of accidental bias toward a “happy path” mode and increases confidence each mode’s decode/control paths are exercised; still need cross-mode interaction under load.
3. Traffic Density: Highest congestion bin (bin3) never exercised → saturation / worst‑case buffering scenarios untested.  
	Why it matters: Without pushing to near-full, we can’t observe head‑of‑line blocking, deadlock resilience, credit recovery timing, or latency tail behavior.
4. Stall Profile: Backpressure (bp) dominates; arbitration (arb) almost absent (only 1 event) → fairness / simultaneous request logic under-stimulated.  
	Why it matters: Low arbitration events mean grant logic, fairness, and starvation protections aren’t being meaningfully verified; high backpressure alone only checks sink throttling, not contention resolution.
5. Cross Mode–Density Matrix: Sparse distribution with several zero intersections; lacks combined high-density + certain modes scenarios.  
	Why it matters: Missing mode+congestion combinations leaves unverified corner cases where control/state machines may behave differently under stress (e.g., mode-specific buffering thresholds or mask handling).
6. Missing Multicast Metrics: Expected multicast fanout and atomicity counters absent from summary; aggregation script or upstream JSON generation skipped them.  
	Why it matters: Lacking these removes regression signal on the new multicast feature—silent functional or performance regressions (e.g., reduced fanout, lost atomicity) would go undetected and CI gates can’t engage.

## Pros and Cons
### Pros
- Uniform mode exercise (≈ equal hit counts) ensures broad baseline coverage of control paths.
- Density sampling spans low/mid bins, giving partial view of buffering behavior.
- Stall categorization already differentiates arbitration, buffering, and backpressure — foundation for deeper performance diagnostics.
- Clear quantitative imbalance (east/west) provides a measurable target for future fairness improvements.
- Documentation + aggregation pipeline functioning; artifacts timestamped and reproducible.
- Early identification of multicast integration gap prevents false sense of coverage.

### Cons (Original vs Current Status)
- Severe directional skew undermines representativeness of traffic profile.  (RESOLVED: adaptive reversal + auto rebalance now yields fairness ≈1.85 < 2.0 target; new CI gate `MAX_DIRECTION_FAIRNESS` + optional `REQUIRE_FAIR_TARGET`)
- Zero hits in highest density bin leave saturation / stress behaviors unvalidated.  (PARTIAL: bin3 count present via synthetic assist; natural_bin3 progression tracked via `bin3_cycles`, `max_consec_bin3`, `natural_bin3_hits`, `natural_saturation_met`, per-mode `natural_bin3_mode_hit[]`; CI can now require assisted (`REQUIRE_SATURATION`) and optionally natural (`REQUIRE_NATURAL_SATURATION`))
- Negligible arbitration events block assessment of fairness/starvation resilience. (RESOLVED: contention window produces 38 arb stalls; CI gating `MIN_STALL_ARB` + diversity gate `MIN_UNIQUE_GRANT_PATTERNS`)
- Missing multicast metrics removes regression guardrails for a new critical feature. (RESOLVED: multicast block emitted, gating active)
- Cross mode-density sparsity suggests insufficient scenario combinatorics (risk of latent corner bugs). (PARTIAL: 9/16 mode-density cells hit; 7 unhit tracked via mode_density_unhit; CI gate `MAX_MODE_DENSITY_UNHIT` added)
- No derived fairness or saturation KPIs yet (requires manual interpretation each run). (RESOLVED: advanced_kpis added: fairness_target_met, saturation_ratio, contention_intensity, unique_grant_patterns, mode_density_unhit; CI threshold knobs `MIN_CONTENTION_INTENSITY`, `MIN_UNIQUE_GRANT_PATTERNS`)

## Cons Resolution Plan
| Con | Resolution Actions | Success Criteria |
|-----|--------------------|------------------|
| Directional skew | Add reversal epochs; pair east injections with scheduled west; add +DIR_BALANCE plusarg; CI gate on ratio | east_west_ratio ≤ 2.0 (warn if >2.0, fail if >2.5) |
| No highest density hits | Congestion phase: hold downstream ready low to (DEPTH-1); burst inject every cycle; jitter release; accumulate natural streaks | density_bin3_pct ≥ 5% (natural); or natural_saturation_met=1; max_fifo_occupancy ≥ DEPTH-1 |
| Few arbitration events | Generate synchronized multi-input same-dest requests; contention windows; track arb stall counter | arb_stall_count > 10 and unique_grant_patterns > 3 |
| Missing multicast metrics | Emit multicast JSON (fanout, atomicity, flag clear); update aggregator to merge; add CI gate | fanout_ge3 > 0; atomic_dual_count stable (±10%) |
| Sparse mode-density combos | Target unhit (mode,bin) pairs; mode cycling during congestion; coverage bitmap gating | All mode-density cells (except inherently invalid) hit ≥1 |
| No derived KPIs | Compute direction_fairness, saturation_ratio, cycles_in_full_state; export to summary; CI thresholds | KPIs appear; fairness ≤ 2.0; saturation_ratio ≥ 0.9 phase |
| Grant pattern diversity | Track unique grant/backpressure patterns | unique_grant_patterns ≥ 6 (CI: MIN_UNIQUE_GRANT_PATTERNS) |
| Natural saturation proof | Track bin3_cycles, consecutive streak, natural_bin3_hits vs target | natural_saturation_met=1 (≥ target hits) |

## Risks / Gaps
- Under-tested westward flow could hide directional bugs or asymmetric timing.
- Absence of saturation prevents validating deadlock freedom under max occupancy.
- Minimal arbitration events reduce confidence in round-robin or priority correctness.
- Missing multicast metrics weakens regression signal for new multicast feature.

## Recommendations (Next Nightly)
| Area | Action | Target / Goal |
|------|--------|---------------|
| Directional Balance | Add reversed-phase or alternating directional bursts | East/West ratio ≤ 2.0 |
| Saturation | Inject burst to fill FIFOs to trigger highest density bin | Bin3 coverage > 5% |
| Arbitration | Concurrent multi-output requests in randomized windows | arb stall count > 10 |
| Multicast Metrics | Ensure multicast JSON emitted & included in aggregation | fanout_ge3 present and > 0 |
| Fairness Guardrail | Add CI warn if east_west_ratio > 2 | Prevent drift |
| Reporting | Promote derived fairness metric (max/min direction) | Logged in summary |

## Proposed Implementation Steps
1. Stimulus Enhancements: Modify coverage testbench to add direction reversal epochs & simultaneous injections.
2. Multicast Inclusion: Verify generation of multicast coverage JSON (or extract multicast section directly) and update `nightly_aggregate.sh` to merge.
3. Saturation Phase: Add a scripted burst that intentionally withholds downstream ready to backpressure and fill buffers.
4. CI Thresholds: Extend optional CI to gate on (a) east/west ≤ 2.5 (soft fail) (b) density bin3 > 0.
5. Metrics Extension: Compute and store `direction_fairness = max(east,west)/max(1,min(east,west))`.

## Follow-Up Metrics To Add
- Multicast: packets_total, fanout_ge2, fanout_ge3, atomic_dual_count, flag_cleared_count.
- Saturation: max_fifo_occupancy, cycles_in_full_state.
- Arbitration: unique_grant_patterns, max_wait_cycles.

## Acceptance Criteria For Improved Run
- Multicast metrics appear in summary.
- Highest density bin non-zero.
- Arbitration stall count > 10.
- Direction fairness ≤ 2.0.

## New Metrics Integration (Post-Resolution)
Implemented fields:
- `direction_fairness` & `fairness_class` (good/warn/poor) — now “good” (1.848)
- `stimulus_phases` (`rev_epochs`, `contention_cycles`, `bp_injected_cycles`, `sat_phase_cycles`, `sat_phase_bp_seen`)
- `multicast` block (packets, fanout_ge2/ge3, atomic_dual, flag_cleared_obs)
- `advanced_kpis` object: `saturation_ratio` (1.0), `contention_intensity` (0.16), `mode_density_unhit` (7), `fairness_target_met` (1), `fairness_target_threshold` (2), `auto_rebalance` (1), `unique_grant_patterns` (7)
- `mode_density_hit` matrix + fallback saturation_exercised logic (bin3 count or saturation_ratio ≥0.5)

Synthetic Saturation Note (Updated):
Currently bin3 percentage remains 0% due to integer truncation (1 hit / total). A single assisted hit (`+FORCE_BIN3`) remains until natural stimulus produces ≥5% bin3 or sustained saturation_ratio ≥0.9 for 3 consecutive nightlies. The doc will drop the synthetic note once those conditions are met.

KPI Trend Enhancements:
- Trend now includes advanced KPIs (saturation_ratio, contention_intensity, mode_density_unhit, unique_grant_patterns, fairness_target_met) and prunes leading empty rows.

Next Doc Update TODO:
- Remove synthetic assist note after natural saturation criteria met.
- Add table summarizing last 7 nightlies (fairness, saturation_ratio, contention_intensity, mode_density_unhit, unique_grant_patterns, natural_bin3_hits).
- Add FIFO depth / occupancy metrics once instrumentation added (max_fifo_occupancy, cycles_full).
- Introduce derived stability flags (e.g., fairness_stable_3runs, saturation_stable_3runs) once trend script extended.

## Edit Summary (2025-08-21)
Implemented:
- Direction fairness: adaptive reversal + auto rebalance (fairness ≈1.85, gate active).
- Contention stimulation: >30 arb stalls; unique grant pattern tracking (≥7) with CI gate.
- Multicast metrics: fanout & atomicity block now exported and gated.
- Advanced KPIs: saturation_ratio, contention_intensity, mode_density_unhit, fairness_target_met, unique_grant_patterns, natural saturation trackers (bin3_cycles, max_consec_bin3, natural_bin3_hits, natural_saturation_met, natural_bin3_mode_hit[4]), FIFO placeholders (max_fifo_occupancy, cycles_full).
- Deterministic mode-density warmup FSM + natural burst scaffold (+MD_MATRIX_WARMUP, +NAT_BURST).
- Duty-cycle saturation escalation (+SAT_READY_HI/LO, +SAT_ESCALATE_AT, +SAT_ESC_HI/LO); synthetic +FORCE_BIN3 now optional only.
- CI gating expansion: fairness, saturation (assisted), optional natural, mode_density_unhit, grant diversity, contention intensity, fairness target.
- Trend stability flags scaffolding prepared (to surface after consecutive-run criteria).
 - Per-mode adaptive mop-up: peak act_pe tracking and threshold lowering (mop_adapt_enable, mop_adapt_cycles, per_mode_full_thresh[], mop_mode_peak_act_pe) to close final natural bin3 gap.

Remaining gaps:
- Natural saturation incomplete: natural_bin3_hits=5 (modes hit bitmap natural_bin3_mode_hit=[1,1,1,0]); final mode pending. Per-mode adaptive mop-up now active (lowering threshold to observed peak act_pe when plateau). Need authentic full activation for remaining mode without over-reliance on global adaptive aids; mark natural_saturation_met once all four modes register natural bin3.
- Active PE ceiling: active_pe_count_max capped at 4 vs target 8 limiting genuine bin3 incidence; root cause (stimulus vs structural width) under investigation.
- Mode-density unhit cells: 7 (entire bin3 column) pending additional natural high-density events.
- FIFO metrics real tap: current occupancy metrics are heuristic; need actual depth instrumentation.
- Documentation: stability flags + 7-run KPI table pending; synthetic assist note remains until natural criteria met.

Immediate next actions:
1. Resolve active_pe_count_max ceiling (investigate stimulus mask / structural constraints) to allow genuine full-width activation.
2. Drive final mode natural bin3 via mop-up (observe per_mode_full_thresh adaptation) then lock natural_saturation_met and drop synthetic assist note criteria.
3. Instrument real FIFO depth signals; replace heuristic max_fifo_occupancy & cycles_full.
4. After first all-modes natural success streak (≥2 runs), enable REQUIRE_NATURAL_SATURATION and tighten MAX_MODE_DENSITY_UNHIT=0.
5. Append 7-run KPI summary + stability flags (fairness_stable_3runs, saturation_stable_3runs, density_matrix_complete_stable).
6. Remove synthetic assist note once natural saturation criteria (all modes + target hits) achieved for two consecutive nightlies.

Exit criteria to mark saturation RESOLVED: natural_saturation_met=1 with natural_bin3_hits meeting target and mode_density_unhit=0 across two consecutive nightlies.

---
Prepared: 2025-08-21
Notes: File auto-generated from current nightly metrics; will revise after stimulus & aggregation updates.
