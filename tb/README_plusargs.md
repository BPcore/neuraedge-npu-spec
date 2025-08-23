Overview
--------
This file documents the centralized plusarg parsing helper introduced for coverage testbenches.

What was added
- `tb/plusargs.svh` — a SystemVerilog header providing a `\`PARSE_PLUSARGS` macro that centralizes common `$value$plusargs` calls used by `coverage_functional_tb.v`.

Usage
- To adopt the macro in a testbench, add at the top of the file (near other `include`s):

  `include "plusargs.svh"
  `PARSE_PLUSARGS

- The macro expands to a list of non-invasive `$value$plusargs` calls and preserves schema gating behavior (REQUIRED_METRICS_SCHEMA / REQUIRED_STIMULUS_SCHEMA).

Safety notes
- The macro currently references a set of variables that are expected to exist in the target TB (e.g. `inj_sources`, `mesh_int_throttle_enable`, `metrics_schema_req`, etc.). Only include the macro in TBs that declare those same variables or where name alignment is acceptable.
- This file intentionally does not attempt to automatically rename or introduce variables. For TBs with differing variable names, prefer manual extraction into a local `plusargs.svh` or extend this header intentionally.

Contributing
- When adding new plusargs that are broadly useful across multiple TBs, append them to `tb/plusargs.svh` with care: maintain the single-line `if ($value$plusargs(...)) begin end;` style to avoid introducing side effects during elaboration.
- If a TB contains only a small number of unique plusargs, keep local parsing inline to avoid overgeneralization.

Next steps
- A follow-up step is to safely migrate other TBs that declare the same variables; it's best to perform that migration per-TB and run the associated simulation quickly to confirm behavior.
