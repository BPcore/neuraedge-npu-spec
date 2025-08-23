#!/usr/bin/env python3
"""
validate_csv_consistency.py <file.csv>
Checks that every non-empty line has the same number of commas as the header (after optional sentinel @@ROW@@ stripping).
Reports:
  CSV_VALID,<file>,rows,data_rows,columns
  CSV_INVALID_LINE,<lineno>,<comma_count>
Exits non-zero on inconsistency.
"""
import sys

def main():
    if len(sys.argv)<2:
        print('Usage: validate_csv_consistency.py <file.csv>', file=sys.stderr); return 2
    path=sys.argv[1]
    try:
        with open(path,'r',errors='ignore') as f:
            lines=f.read().splitlines()
    except FileNotFoundError:
        print(f'CSV_ERROR,{path},not_found'); return 2
    lines=[l for l in lines if l.strip()!='']
    if not lines:
        print(f'CSV_ERROR,{path},empty'); return 2
    header=lines[0]
    if header.startswith('@@ROW@@,'): header=header[len('@@ROW@@,'):]
    expected_commas=header.count(',')
    bad=[]; data_rows=0
    for idx,l in enumerate(lines[1:], start=2):
        raw=l
        if raw.startswith('@@ROW@@,'): raw=raw[len('@@ROW@@,'):]
        c=raw.count(',')
        if c!=expected_commas:
            bad.append((idx,c))
        else:
            data_rows+=1
    if bad:
        for lineno,cnt in bad:
            print(f'CSV_INVALID_LINE,{path},{lineno},{cnt},expected,{expected_commas}')
        print(f'CSV_RESULT,FAIL,{path},invalid_lines={len(bad)}')
        return 1
    print(f'CSV_VALID,{path},{len(lines)},{data_rows},{expected_commas+1}')
    return 0

if __name__=='__main__':
    sys.exit(main())
