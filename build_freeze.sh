
#!/usr/bin/env bash
set -e

# Debug: Print each command and timestamp
set -x
date

# Configuration
BUILD_DIR="build"
FREEZE_MD="${BUILD_DIR}/full_spec.md"
FREEZE_PDF="${BUILD_DIR}/neuraedge_architecture_freeze_v1.0.pdf"
MERGED_PDF="${BUILD_DIR}/existing_pdfs_merged.pdf"

echo "[INFO] Step 1: Creating build/ directory..."
mkdir -p "${BUILD_DIR}"
date

echo "[INFO] Step 2: Concatenating all .md files (alphabetical) into one Markdown..."
cat $(ls *.md | sort) > "${FREEZE_MD}"
date

echo "[INFO] Step 3: Generating freeze PDF with Pandoc + XeLaTeX..."
pandoc "${FREEZE_MD}" \
  --pdf-engine=xelatex \
  -V geometry:margin=1in \
  --toc --toc-depth=2 \
  -o "${FREEZE_PDF}"
date

echo "[INFO] Step 4: Merging all individual .md.pdf files into one PDF..."
pdfunite $(ls *.md.pdf | sort) "${MERGED_PDF}"
date

echo "[INFO] Step 5: Producing SHA-256 checksums..."
sha256sum "${FREEZE_PDF}" > "${FREEZE_PDF}.sha256"
sha256sum "${MERGED_PDF}" > "${MERGED_PDF}.sha256"
date

echo "✅ Build complete:"
echo "   • Freeze spec: ${FREEZE_PDF}"
echo "   • Merged PDFs: ${MERGED_PDF}"
echo "   • Checksums: ${FREEZE_PDF}.sha256, ${MERGED_PDF}.sha256"

