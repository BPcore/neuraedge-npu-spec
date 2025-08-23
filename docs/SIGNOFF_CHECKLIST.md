# RTL Sign-off Checklist (Draft)

## 1. Scope & Feature Freeze
- [ ] Multicast one-hop replication (ENABLE_MCAST, MCAST_CLEAR_ON_SEND) verified (dual/triple, flag clear)
- [ ] Credit/backpressure semantics frozen & documented
- [ ] Adaptive sparsity real mask path decision (implemented vs deferred) recorded

## 2. Verification
- [ ] All P0 testbenches PASS (list attached)
- [ ] Functional coverage JSON thresholds met (dir, modes, density, multicast)
- [ ] Multicast mesh & flag-clear TBs in CI (RUN_MCAST_TESTS=1) stable 3 consecutive runs
- [ ] Energy accuracy benches within tightened thresholds (total/dyn/leak)
- [ ] Backpressure/credit propagation & stall classification TBs PASS
- [ ] Formal multicast atomicity BMC run PASS (multicast_formal.sby)

## 3. Power / Energy Model
- [ ] Dyn/leak coefficient calibration residuals within spec
- [ ] Cycle-time precise energy accumulation validated vs reference
- [ ] Leakage residual & idle delta documented (<2%)

## 4. Telemetry & CSRs
- [ ] CSR map final (no address churn)
- [ ] All exposed metrics documented (units, width)
- [ ] No unintended CSR side effects (write/readback tests)

## 5. Quality
- [ ] Lint zero new warnings (waiver file for accepted cases)
- [ ] CDC (if multi-clock) run clean / waivers
- [ ] Synthesis trial: no inferred latches, no unmapped cells

## 6. Documentation
- [ ] Architectural status doc frozen
- [ ] Multicast section (mask format, one-hop semantics, future extension notes)
- [ ] DVFS state diagram
- [ ] Energy accumulation & calibration procedure
- [ ] Coverage methodology description

## 7. Automation
- [ ] Nightly aggregation script includes multicast histogram & percentiles
- [ ] Pareto frontier artifacts auto-generated & validated
- [ ] Coverage gating env vars locked & documented

## 8. Sign-offs
| Role | Name | Date | Notes |
|------|------|------|-------|
| Design |  |  |  |
| Verification |  |  |  |
| Power Modeling |  |  |  |
| Architecture |  |  |  |
| QA/Tools |  |  |  |

## Appendix
- P0 Testbench List
- Coverage JSON Schema
- Calibration Residual Report
