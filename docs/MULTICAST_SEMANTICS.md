# Multicast Semantics (Current One-Hop Implementation)

## Overview
The router supports minimal mask-based multicast replication when `ENABLE_MCAST=1`.
A flit is marked multicast when header bit 31 is set. Bits [30:26] form a 5-bit fan-out mask (order: N,E,S,W,L). Each 1 in the mask requests replication to that egress.

## One-Hop Semantic
Replication occurs only at the originating router of the flit. After replication, each emitted copy has its multicast flag cleared (`MCAST_CLEAR_ON_SEND=1` by default), so downstream routers treat the flits as ordinary unicast and perform standard dimension-order routing.

Rationale: Limits verification surface and avoids uncontrolled exponential replication while establishing atomic multi-egress correctness.

## Atomicity Guarantee
All targeted egress ports for a multicast flit assert `out_valid` in the same cycle, or none do. If any targeted egress `ready` is deasserted, the flit is held (no partial advance) until all are ready, then all copies emit simultaneously. FIFO pop occurs exactly once after successful atomic emission.

## Header Bit Summary
| Bit(s) | Name | Description |
|--------|------|-------------|
| 31 | MCAST_FLAG | 1 indicates multicast request (subject to mask). Cleared post first-hop replication when `MCAST_CLEAR_ON_SEND=1`. |
| 30:26 | MCAST_MASK[4:0] | Fan-out mask (N,E,S,W,L). Each set bit requests atomic replication to that egress. |

## Testbenches
- `multicast_basic_tb.v`: Smoke enable.
- `multicast_dual_fanout_tb.v`: Dual (E,W) replication correctness.
- `multicast_backpressure_tb.v`: Atomic hold until all targets ready.
- `multicast_mesh_smoke_tb.v`: Mesh-level dual (E,S) atomic replication.
- `multicast_mesh_end_to_end_tb.v`: Dual & triple (E,S,L) atomic replication at source.
- `multicast_flag_clear_tb.v`: Verifies downstream copies have flag cleared (one-hop containment).

## Formal Harness
`formal/multicast_formal.sby` + `multicast_formal_tb.sv` provide bounded model checks for atomic selection properties (depth 8).

## Future Extensions
Potential staged multi-hop replication would:
1. Retain multicast flag downstream.
2. Introduce per-hop residual mask and/or hop limit field.
3. Add per-egress credit-aware partial emission with fairness arbitration.
4. Extend telemetry: fan-out histogram, duplicate suppression counters.

## Gating & Metrics
Coverage JSON exports multicast packet counts, fanout histogram, and atomic dual replication occurrences. Optional CI gating env vars allow thresholds (`MIN_MCAST_PACKETS`, `MIN_MCAST_FANOUT2`, `MIN_MCAST_ATOMIC_DUAL`).

## Risks & Mitigations
| Risk | Mitigation |
|------|------------|
| Starvation due to one stalled target | Atomic gating ensures no duplication; future per-egress buffering could mitigate latency. |
| Flag clearing hides desired multi-hop use case | Controlled via parameter (`MCAST_CLEAR_ON_SEND`); disabling requires new verification scope. |
| Mask all-zero with flag set | Fallback to unicast (route_dir) path inside RTL. |

