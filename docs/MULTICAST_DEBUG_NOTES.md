# Multicast Debug & Formal Enhancement Notes

This document records follow-up improvements applied after initial mesh multicast integration:

## Additions
- `multicast_router_cell_debug_tb.v`: Minimal testbench proving simultaneous dual-output replication (E & W) and one-hop flag clearing at router_cell granularity.
- Formal harness (`multicast_formal_tb.sv` + `multicast_formal.sby`) extended:
  * Depth increased 8 -> 16 (BMC) for broader state exploration.
  * Stronger assertions: no partial masked subset issuance, flag cleared on all outputs.
  * Cover property for dual-output (E+W) multicast event.
- Optional CI formal hook (`RUN_FORMAL_MCAST=1`) executes bounded check and gates on PASS.
- Coverage bench multicast counters now produce non-zero evidence (temporary heuristic fallback until direct replication observation traced).

## TODO / Future
- Replace heuristic in `coverage_functional_tb.v` with real observation once replication debug integrated into unified coverage environment.
- Add k-induction or cover-based proof step (`mode prove`) for unbounded assurance of atomic gating.
- Extend formal to random stalls on specific output subsets to stress ready gating corner cases.
- Integrate router_mesh level formal abstraction (mask propagation invariants across hops if future multi-hop semantics introduced).

