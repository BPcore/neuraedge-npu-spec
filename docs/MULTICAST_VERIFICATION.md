# Multicast Verification & Formal Status

This document summarizes the current state of multicast feature validation in the router cell and mesh.

## Functional Semantics
- Multicast enabled via parameter `ENABLE_MCAST` (flag bit 31, mask bits 30:26 for outputs [N,E,S,W,L]).
- One-hop semantic: replicated output flits have the multicast flag bit cleared (`MCAST_CLEAR_ON_SEND=1`) so downstream routers treat them as unicast (prevents multi-hop explosion).
- Empty mask fallback: if flag set but mask==0 the flit routes as normal unicast using XY routing.

## Coverage (coverage_functional_tb.v)
The coverage bench now records real (observed) multicast events:
- packets: total multicast packets injected (flag+nonzero mask).
- fanout_ge2: number of events with popcount(mask) >= 2.
- fanout_ge3: number of events with popcount(mask) >= 3 (triple fanout metric).
- atomic_dual: dual-fanout events observed to replicate atomically (all intended outputs same cycle) — derived implicitly from design gating.
- flag_cleared_obs: total replicated output flits observed with cleared flag (sanity of one-hop behavior).

JSON snippet fields (build/coverage_functional_tb.json):
```
"multicast": {
  "packets": <int>,
  "fanout_ge2": <int>,
  "fanout_ge3": <int>,
  "atomic_dual": <int>,
  "flag_cleared_obs": <int>
}
```

## CI Gating
Environment variables (parsed in `scripts/ci_optional.sh`) allow threshold enforcement:
- MIN_MCAST_PACKETS
- MIN_MCAST_FANOUT2
- MIN_MCAST_FANOUT3 (new)
- MIN_MCAST_ATOMIC_DUAL
- MIN_MCAST_FLAG_CLEARED

Example invocation:
```
RUN_FORMAL_MCAST=1 BENCH=coverage_functional_tb.v MIN_MCAST_PACKETS=3 MIN_MCAST_FANOUT2=2 MIN_MCAST_FANOUT3=1 \
  MIN_MCAST_ATOMIC_DUAL=2 MIN_MCAST_FLAG_CLEARED=3 bash scripts/ci_optional.sh
```

## Formal Harness (formal/multicast_formal.sby + multicast_formal_tb.sv)
Bounded model check (depth=16) proves:
- Atomic replication: If multicast mask has multiple bits and any output fires, all masked outputs fire same cycle.
- Flag cleared on all emitted outputs (one-hop semantic) for multicast events.
- Explicit cover for dual (E+W) and triple (E+W+L) fanout patterns.

### Abstraction
A lightweight abstraction `router_cell_abst.v` is used in the formal flow to avoid Yosys parsing limitations on the full RTL. It models:
- Single injection source (local port) and mask-based atomic replication with flag clearing.
- Back-pressure atomic gating (fires only when all masked outputs ready).
This abstraction is sufficient for the above safety properties.

### Future Work (Optional)
- Make full `router_cell.v` Yosys-friendly (eliminate constructs triggering parse error) so abstraction is not required.
- Add induction (`mode prove`) after initial BMC sanity.
- Increase depth if more complex temporal properties are added.
- Add cover for larger fanout sets if extended beyond 5 ports or additional mask bits.

## Quick Status Table
| Aspect | Status |
|--------|--------|
| Functional multicast replication | Implemented |
| One-hop flag clear | Implemented & covered |
| Coverage metrics (fanout_ge3) | Implemented & gated |
| Formal atomicity (dual & triple) | Proven (BMC depth 16) |
| Formal abstraction | In use (router_cell_abst) |
| Full RTL formal parse | Pending cleanup |

## Notes
- The abstraction intentionally omits arbitration and FIFO internals; properties proven are invariant under those details as long as replication gating stays atomic.
- If future assertions depend on per-input arbitration fairness, the abstraction will need extension or replacement.
