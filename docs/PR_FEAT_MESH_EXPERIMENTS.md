# PR: feat/mesh-experiments

This PR adds the mesh experiments runner, optional CI hooks, TB scaffolds, and analytics scripts used for the mesh / DVFS / energy experiment suite.

Highlights:
- scripts/run_mesh_experiments.sh : orchestrates experiment matrix and writes JSON/CSV/PNG artifacts into `build/ci_optional/`
- scripts/generate_mesh_experiment_summary.py : aggregates per-bench CSV into a summary JSON + MD
- TBs: `tb/router_mesh_stress_random_multidest_tb.sv`, `tb/dvfs_energy_convergence_tb.sv`, `tb/mem_contention_multitile_tb.sv` and related scaffolds
- formal/ and tb/uvm/ scaffolds for iterative verification improvements

Artifacts created under CI: `build/ci_optional/*.json`, `build/ci_optional/*.csv`, `build/ci_optional/*.png`.

Recommended PR actions after merge:
- Enable nightly run by editing `.github/workflows/phase4_integration.yml` to set environment variable `RUN_MESH_EXPERIMENTS=1` for the nightly job (keeps opt-in by default).

See `docs/ARCH_IMPLEMENTATION_STATUS.md` for the run summary and next steps.
