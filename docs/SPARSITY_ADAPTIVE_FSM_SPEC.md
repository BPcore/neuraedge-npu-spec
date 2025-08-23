# Sparsity Adaptive FSM Specification
Date: 2025-08-19
Status: Draft

## Goal
Automatically adjust sparsity mode (e.g., 2:4, 1:4, 1:8, dense) to balance efficiency and quality based on observed density statistics from incoming activation/weight streams.

## Inputs
| Signal | Description |
|--------|-------------|
| sample_valid | Pulse indicating a new density sample for the current window. |
| nonzero_count | Count of non-zero elements in sample (window). |
| total_count | Total elements considered in sample. |
| manual_override_mode | External CSR override enable. |
| manual_mode_select | Selected sparsity mode when override asserted. |

## Outputs
| Signal | Description |
|--------|-------------|
| current_mode | Encoded active sparsity mode. |
| mode_change_pulse | Single-cycle pulse when mode changes. |
| density_ratio_milli | (nonzero/total)*1000 captured per window. |
| window_complete | Indicates end of an observation window. |

## Parameters / CSRs
| Param/CSR | Width | Function |
|-----------|-------|----------|
| WINDOW_SIZE | 16 | Number of samples per decision window. |
| THRESH_2to4 | 10 | Milli density threshold to switch to 2:4 from denser modes. |
| THRESH_1to4 | 10 | Threshold to switch to 1:4. |
| THRESH_1to8 | 10 | Threshold to switch to 1:8 (sparsest). |
| HYST_MILLI | 10 | Hysteresis margin to avoid oscillations. |
| MIN_HOLD_WINDOWS | 4 | Minimum windows to hold before another change. |

## Mode Encoding (example)
0 = Dense
1 = 2:4
2 = 1:4
3 = 1:8

## Decision Logic (Pseudo)
1. Accumulate density over WINDOW_SIZE samples: sum_nonzero, sum_total.
2. At window end: density_milli = (sum_nonzero * 1000) / sum_total.
3. If manual_override_mode=1: force mode to manual_mode_select.
4. Else compare density_milli against thresholds with hysteresis bands:
   - If current_mode > target candidate and density rises above (threshold + HYST), move toward denser.
   - If density falls below (threshold - HYST), move to sparser.
5. Enforce MIN_HOLD_WINDOWS after each change before allowing next.

## Telemetry
| Signal | Width | Description |
|--------|-------|-------------|
| last_density_milli | 16 | Density of last completed window. |
| change_count | 16 | Number of mode changes since reset. |
| hold_window_counter | 16 | Windows remaining until change allowed. |

## Testbench Plan
1. Directed density ramps: high->low->high ensuring hysteresis prevents flapping.
2. Random density noise around threshold ± small margin verifying hysteresis stability.
3. Manual override assertion mid-window: mode holds override, window accounting continues.
4. MIN_HOLD_WINDOWS enforcement: attempt changes earlier should be blocked.
5. Corner: total_count=0 (ignore sample / no divide by zero).

## Open Questions
- Should thresholds be per-mode band (array) instead of fixed? (Future: array of edges.)
- Add decay factor to density (EMA) instead of strict window accumulation? (Future enhancement.)

## Next Steps
1. Prototype RTL skeleton (`sparsity_adaptive_fsm.v`).
2. Add CSR mapping for parameters.
3. Implement unit TB `tb/sparsity_adaptive_fsm_tb.v`.
4. Integrate with tile control path (replace static sparsity mode CSR when enabled).
