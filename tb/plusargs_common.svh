`ifndef PLUSARGS_COMMON_SVH
`define PLUSARGS_COMMON_SVH

// Common opt-in plusargs used by deterministic DVFS and memory contention benches
// Use in TBs via `include "tb/plusargs_common.svh"

// DVFS deterministic control
integer UTIL_OVERRIDE_ADDR = 0; // optional CSR address override (0 -> disabled)
integer FORCE_UTIL_UP = 0;
integer FORCE_UTIL_DOWN = 0;
integer SETTLE_CYCLES = 0;

// Memory contention deterministic control
integer MEM_DETER_RUNS = 0;
integer MEM_CONTENTION_CTRL = 0;

// Generic debug/control
integer TB_VERBOSE = 0;

// Parse macro
`define PARSE_COMMON_PLUSARGS \
  if ($value$plusargs("UTIL_OVERRIDE_ADDR=%d", UTIL_OVERRIDE_ADDR)) begin end; \
  if ($value$plusargs("FORCE_UTIL_UP=%d", FORCE_UTIL_UP)) begin end; \
  if ($value$plusargs("FORCE_UTIL_DOWN=%d", FORCE_UTIL_DOWN)) begin end; \
  if ($value$plusargs("SETTLE_CYCLES=%d", SETTLE_CYCLES)) begin end; \
  if ($value$plusargs("MEM_DETER_RUNS=%d", MEM_DETER_RUNS)) begin end; \
  if ($value$plusargs("MEM_CONTENTION_CTRL=%d", MEM_CONTENTION_CTRL)) begin end; \
  if ($value$plusargs("TB_VERBOSE=%d", TB_VERBOSE)) begin end;

`endif // PLUSARGS_COMMON_SVH
