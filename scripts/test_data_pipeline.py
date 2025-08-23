#!/usr/bin/env python3
"""Light unit tests for data pipeline scripts.
Run: python3 scripts/test_data_pipeline.py
"""
import subprocess, json, csv, tempfile, pathlib, sys
ROOT = pathlib.Path(__file__).resolve().parent.parent


def run(cmd, text=None):
    r = subprocess.run(cmd, input=text, text=True, capture_output=True, cwd=ROOT)
    if r.returncode != 0:
        print("CMD FAIL:", cmd, r.stdout, r.stderr)
        raise SystemExit(1)
    return r


def test_sanitize_idempotent():
    tmp = tempfile.NamedTemporaryFile(delete=False, suffix='.csv')
    tmp.write(b"col1,col2\n1,2\n3,4\n")
    tmp.close()
    out = run(["python3","scripts/sanitize_csv_wraps.py", tmp.name, "--in-place"]).stdout
    assert "rows=3" in out


def test_dual_pareto_deltas():
    # Minimal synthetic CSVs
    base_csv = tempfile.NamedTemporaryFile(delete=False, suffix='.csv')
    base_csv.write(b"pstate,precision_mode,lane_mask_pct,sparsity_mode,sparsity_scale_milli,util_pct,freq_MHz,volt_mV,dyn_mW,leak_mW,power_mW,tops_milli,eff_milli\n")
    base_csv.write(b"0,0,100,0,1000,80,800,700,1000,100,1100,5000,900\n")
    base_csv.write(b"0,0,100,0,1000,80,1000,750,1200,120,1320,6500,900\n")
    base_csv.close()
    adapt_csv = tempfile.NamedTemporaryFile(delete=False, suffix='.csv')
    adapt_csv.write(b"freq_MHz,volt_mV,util_pct,dyn_mW,leak_mW,scaled_dyn_mW,scaled_tops_milli,tops_milli,adapt_mode_eff_milli\n")
    adapt_csv.write(b"800,700,80,1000,100,850,4250,5000,850\n")
    adapt_csv.close()
    out_csv = tempfile.NamedTemporaryFile(delete=False, suffix='.csv')
    out_csv.close()
    run(["python3","scripts/compute_dual_pareto.py", base_csv.name, adapt_csv.name, out_csv.name])
    # Sanitize and summarize
    run(["python3","scripts/sanitize_csv_wraps.py", out_csv.name, "--in-place"])  # ensure sentinel stripped
    js = run(["python3","scripts/generate_dual_pareto_json.py", out_csv.name]).stdout
    data = json.loads(js)
    assert data['adaptive_points'] == 1
    assert data['points'][0]['delta_dyn_pct'] > 0


def main():
    test_sanitize_idempotent()
    test_dual_pareto_deltas()
    print("DATA_PIPELINE_TESTS_PASS")

if __name__ == '__main__':
    main()
