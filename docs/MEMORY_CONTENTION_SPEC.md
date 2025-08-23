# Memory Contention Mode Specification

Date: 2025-08-19
Status: Draft (to implement in memory_latency_injector + stress TB)

## Goal
Augment existing memory latency model with a simple contention mechanism modeling limited DRAM bandwidth shared across multiple request sources.

## Model Overview
We introduce a token bucket representing DRAM bandwidth capacity (tokens per cycle). Each DRAM (or cache-miss) request consumes tokens proportional to its size. If insufficient tokens remain, the request's effective latency is increased by deferring dequeue until enough tokens accumulate.

Optional additional stall due to queue occupancy models arbitration delay among multiple sources feeding the injector.

## Parameters (New)
| Param / CSR | Width | Description | Default |
|-------------|-------|-------------|---------|
| DRAM_TOKENS_PER_CYCLE | 8 | Tokens replenished each cycle (bandwidth rate) | 8 |
| DRAM_TOKEN_CAPACITY | 16 | Max bucket depth (burst capacity) | 256 |
| ENABLE_CONTENTION | 1 | Master enable for contention logic | 0 |
| SIZE_TO_TOKENS_SHIFT | 4 | Shift right on size (bytes) to convert to tokens (tokens = size >> shift) | 3 |
| EXTRA_QUEUE_ARB_DELAY | 4 | Additional cycles added per queued request ahead (simple arbitration model) | 0 |

## Behavioral Rules
1. On cycle, refill bucket: `tokens = min(capacity, tokens + DRAM_TOKENS_PER_CYCLE)`.
2. When enqueuing a DRAM (post cache-hit decision) request, compute `req_tokens = max(1, req_size_bytes >> SIZE_TO_TOKENS_SHIFT)`.
3. Completion eligibility: latency countdown reaches 0 AND (if ENABLE_CONTENTION & req_is_dram) the bucket holds >= req_tokens.
4. If eligible but insufficient tokens, stall (count stall_cycles) until tokens available; then consume tokens and emit response.
5. Arbitration delay (if EXTRA_QUEUE_ARB_DELAY>0): add `queued_ahead * EXTRA_QUEUE_ARB_DELAY` to base latency at enqueue.

## Telemetry Additions
| Signal | Width | Description |
|--------|-------|-------------|
| dram_tokens_level | 16 | Current tokens in bucket |
| dram_token_stall_cycles | 32 | Cycles stalled waiting for tokens |
| dram_contention_events | 32 | Number of times a request had to wait for tokens |

## Stress Testbench Plan
1. Configure two or more synthetic sources generating DRAM-sized requests into shared injector (future multi-source wrapper) or sequential bursts.
2. Sweep tokens_per_cycle (1,2,4,8) vs request size (8B..256B) vs queue depth.
3. Collect: average added latency over base, stall histogram, total throughput.
4. Assertions: No request latency inflation beyond theoretical bound (size_to_tokens + queue derived), token count never exceeds capacity, no starvation (each request completes within bounded extra cycles).

## Implementation Strategy
- Extend `memory_latency_injector` with optional contention (guarded by parameter/CSR) to avoid impact on existing tests when disabled.
- Minimal increase in state: `dram_tokens_level` register and token stall counters.
- Integrate arbitration delay via added cycles to `final_lat` when enqueueing.

## Open Questions
- Do we need separate read/write token rates? (Future: DRAM_RD_TOKENS_PER_CYCLE / DRAM_WR_TOKENS_PER_CYCLE)
- Should token cost scale non-linearly for large bursts? (Future: piecewise scaling table)
- Interaction with cache-hit modeling: cache hits should bypass contention (treat as SRAM path) – maintained.

## Next Steps
1. Add parameters + internal regs.
2. Add CSR hooks (if CSR block routes config) or plusargs for TB.
3. Implement token gate at completion path.
4. Add telemetry outputs.
5. Create stress TB `tb/mem_contention_stress_tb.v`.
6. Integrate into optional CI tier (longer runtime gating).
