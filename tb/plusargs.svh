`ifndef PLUSARGS_SVH
`define PLUSARGS_SVH

// Centralized plusarg parsing macro for coverage testbenches.
// Place this file next to coverage testbenches and `include "plusargs.svh"` at top.
`define PARSE_PLUSARGS \
  if ($value$plusargs("INJ_SOURCES=%d", inj_sources)) begin end; \
  if ($value$plusargs("INJ_SATURATE_PCT=%d", inj_saturate_pct)) begin end; \
  // Optional internal throttling overrides \
  if ($value$plusargs("MESH_INT_THROTTLE=%d", mesh_int_throttle_enable)) begin end; \
  if ($value$plusargs("MESH_INT_THR_PERIOD=%d", mesh_int_throttle_period)) begin end; \
  if ($value$plusargs("MESH_INT_THR_PULSE=%d", mesh_int_throttle_pulse)) begin end; \
  if ($value$plusargs("MESH_PIPELINED_OUT=%d", mesh_pipeline_output)) begin end; \
  if ($value$plusargs("HOTSPOT=%d", hotspot_enable)) begin end; \
  if ($value$plusargs("HOTSPOT_MODE=%d", hotspot_mode)) begin end; \
  if ($value$plusargs("HOTSPOT_SPAN=%d", hotspot_cycle_span)) begin end; \
  if ($value$plusargs("STALL_ESC=%d", stall_escalate_enable)) begin end; \
  if ($value$plusargs("STALL_ESC_MAX=%d", stall_escalate_max)) begin end; \
  if ($value$plusargs("STALL_ESC_STEP_HOLD=%d", stall_esc_step_hold)) begin end; \
  if ($value$plusargs("STALL_ESC_STEP_DRAIN=%d", stall_esc_step_drain)) begin end; \
  if ($value$plusargs("STALL_ESC_PULSE_MIN=%d", stall_esc_pulse_min)) begin end; \
  if ($value$plusargs("PLATEAU_WIN=%d", plateau_window_cycles)) begin end; \
  if ($value$plusargs("PLATEAU_THRESH=%d", plateau_threshold)) begin end; \
  if ($value$plusargs("REQUIRED_METRICS_SCHEMA=%d", metrics_schema_req)) begin \
    if (metrics_schema_req != METRICS_SCHEMA_VERSION) begin \
      $display("[coverage_functional][schema] ERROR metrics schema mismatch required=%0d actual=%0d", metrics_schema_req, METRICS_SCHEMA_VERSION); \
      schema_ok = 0; \
    end else $display("[coverage_functional][schema] metrics schema satisfied (%0d)", METRICS_SCHEMA_VERSION); \
  end; \
  if ($value$plusargs("REQUIRED_STIMULUS_SCHEMA=%d", stimulus_schema_req)) begin \
    if (stimulus_schema_req != STIMULUS_SCHEMA_VERSION) begin \
      $display("[coverage_functional][schema] ERROR stimulus schema mismatch required=%0d actual=%0d", stimulus_schema_req, STIMULUS_SCHEMA_VERSION); \
      schema_ok = 0; \
    end else $display("[coverage_functional][schema] stimulus schema satisfied (%0d)", STIMULUS_SCHEMA_VERSION); \
  end; \
  if (!schema_ok) begin \
    $fatal(1, "Schema requirement mismatch (metrics=%0d/%0d stimulus=%0d/%0d)", metrics_schema_req, METRICS_SCHEMA_VERSION, stimulus_schema_req, STIMULUS_SCHEMA_VERSION); \
  end; \
  if ($value$plusargs("REQUIRED_GATING_TIER=%d", gating_required_tier)) begin end; \
  if ($value$plusargs("GATING_STRICT=%d", gating_strict)) begin end; \
  if ($value$plusargs("MD_UNHIT_ALLOW=%d", md_unhit_allow)) begin end; \
  if ($value$plusargs("MD_RECOVERY=%d", md_recovery_enable)) begin end; \
  if ($value$plusargs("MD_RECOVERY_WIN=%d", md_recovery_window)) begin end; \
  if ($value$plusargs("MATRIX_SWEEP=%d", matrix_sweep_enable)) begin end; \
  if ($value$plusargs("MATRIX_SWEEP_MAX=%d", matrix_sweep_max_cycles)) begin end; \
  if ($value$plusargs("PHASE_SUBSEED=%d", phase_subseed_enable)) begin end; \
  if ($value$plusargs("MESH_THROTTLE_PCT=%d", mesh_throttle_pct)) begin end

`endif // PLUSARGS_SVH
