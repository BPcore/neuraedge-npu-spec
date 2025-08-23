#!/usr/bin/env python3
"""
sanitize_csv_wraps.py <input.csv> [--in-place]

Repairs line-wrapped CSV artifacts where newline characters appear inside tokens (e.g. density_mi\nlli) caused by path-with-spaces staging or terminal wrapping.
Heuristics:
 1. Remove newline between two alphabetic characters (joins split identifiers).
 2. Reconstruct rows so each data row has the same number of commas as header.
 3. Optionally overwrite file in place (default writes <name>_clean.csv).
Safe for already clean CSVs (idempotent).
"""
import sys,re,os

def read(path):
    with open(path,'r',errors='ignore') as f: return f.read()

def write(path,text):
    with open(path,'w') as f: f.write(text)

def sanitize(text):
    # Step 1: join alpha-alpha broken tokens
    text=re.sub(r'([A-Za-z])\n([A-Za-z])', r'\1\2', text)
    lines=[l for l in text.splitlines() if l.strip()!='']
    if not lines: return ''
    # If sentinel present, strip it after reconstruction
    header=lines[0]
    sentinel = '@@ROW@@,'
    has_sentinel = header.startswith('@@ROW@@')
    if has_sentinel:
        header = header[len(sentinel):]
    header_commas=header.count(',')
    # Rebuild data rows: merge successive lines until comma count matches header
    rebuilt=[header]
    buf=''
    for raw in lines[1:]:
        if has_sentinel and raw.startswith('@@ROW@@,'):
            raw = raw[len(sentinel):]
        candidate = (buf+raw) if buf else raw
        if candidate.count(',')==header_commas:
            rebuilt.append(candidate)
            buf=''
        else:
            buf=candidate
    if buf:
        if buf.count(',')==header_commas:
            rebuilt.append(buf)
    return '\n'.join(rebuilt)+'\n'

def main(argv):
    if len(argv)<1:
        print('Usage: sanitize_csv_wraps.py <input.csv> [--in-place]', file=sys.stderr); return 2
    path=argv[0]
    in_place='--in-place' in argv
    raw=read(path)
    cleaned=sanitize(raw)
    out_path=path if in_place else path.rsplit('.',1)[0]+'_clean.csv'
    write(out_path, cleaned)
    print(f'[SANITIZE] Wrote {out_path} (rows={max(0, cleaned.count("\n")-1)})')
    return 0

if __name__=='__main__':
    sys.exit(main(sys.argv[1:]))
