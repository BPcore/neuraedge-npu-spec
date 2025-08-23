UVM scaffold README

This directory contains a minimal UVM scaffold to be expanded into a CSR agent + traffic + DVFS/sparsity sequences.

Files:
- uvm_env.sv: top-level UVM environment (placeholder)
- agents/uvm_csr_agent.sv: CSR agent skeleton (transactions, driver, monitor)
- sequences/uvm_traffic_seq.sv: Example sequences for traffic + DVFS + sparsity exercises

Notes & next steps:
- Install a UVM-capable simulator (VCS, Questa, Xcelium). Verilator does not fully support UVM.
- Flesh out transactors to match the CSR bus and stimulus ports in your top-level.
- Integrate `scripts/ci_optional.sh` to optionally run UVM regressions in CI (opt-in).
