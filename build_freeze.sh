
#!/usr/bin/env bash
set -e

# Build NeuraEdge NPU Spec Freeze Artifacts

BUILD_DIR="build"
FREEZE_MD="${BUILD_DIR}/full_spec.md"
FREEZE_PDF="${BUILD_DIR}/neuraedge_architecture_freeze_v1.0.pdf"
MERGED_PDF="${BUILD_DIR}/existing_pdfs_merged.pdf"

echo "[INFO] Creating build/ directory..."
mkdir -p "$BUILD_DIR"

echo "[INFO] Concatenating all .md files (alphabetical) into $FREEZE_MD ..."
cat $(ls *.md | sort) > "$FREEZE_MD"

echo "[INFO] Generating PDF from $FREEZE_MD ..."
pandoc "$FREEZE_MD" \
  --pdf-engine=xelatex \
  -V geometry:margin=1in \
  --toc --toc-depth=2 \
  -o "$FREEZE_PDF"

echo "[INFO] Merging all .md.pdf files into $MERGED_PDF ..."
pdfunite $(ls *.md.pdf | sort) "$MERGED_PDF"

echo "[INFO] Generating SHA-256 checksums ..."
sha256sum "$FREEZE_PDF" > "$FREEZE_PDF.sha256"
sha256sum "$MERGED_PDF" > "$MERGED_PDF.sha256"

echo "✅ Build complete:"
echo "   • Freeze spec: $FREEZE_PDF"
echo "   • Merged PDFs: $MERGED_PDF"
echo "   • Checksums: $FREEZE_PDF.sha256, $MERGED_PDF.sha256"

