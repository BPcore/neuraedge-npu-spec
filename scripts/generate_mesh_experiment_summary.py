#!/usr/bin/env python3
"""
Generate a small Markdown summary for mesh experiments saved under a directory (e.g. build/ci_optional).
Usage: generate_mesh_experiment_summary.py <artifacts_dir>
"""
import sys,os
if len(sys.argv)<2:
    print("Usage: generate_mesh_experiment_summary.py <artifacts_dir>")
    sys.exit(1)
artdir=sys.argv[1]
base=os.path.abspath(artdir)
out=os.path.join(base,'mesh_experiment_summary.md')
compare_files=[('baseline vs pipelined','compare_baseline_vs_pipelined.txt'),('baseline vs pipelined+throttle','compare_baseline_vs_pipe_throttle.txt'),('pipelined vs pipelined+throttle','compare_pipelined_vs_pipe_throttle.txt')]
lines=[]
lines.append('# Mesh Experiment Summary')
lines.append('')
lines.append('Artifacts directory: `'+base+'`')
lines.append('')
for title,f in compare_files:
    p=os.path.join(base,f)
    lines.append('## '+title)
    lines.append('')
    if os.path.isfile(p):
        txt=open(p).read()
        # include as fenced block
        lines.append('```')
        lines.append(txt.strip())
        lines.append('```')
    else:
        lines.append('*Missing compare file: '+f+'*')
    lines.append('')
# Write out
open(out,'w').write('\n'.join(lines)+"\n")
print('Wrote',out)
