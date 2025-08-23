# Artifact Upload Instructions

Use these steps to publish `build/ci_optional` artifacts to GitHub Releases or an external artifact store.

1) Create a release on GitHub (tag or draft) and upload files via web UI.

2) Using GitHub CLI (recommended):

```bash
# create draft release (replace TAG)
gh release create TAG build/ci_optional/* --title "mesh-experiments-artifacts-TAG" --notes "Experiment artifacts"
```

3) S3 upload (example):

```bash
aws s3 cp --recursive build/ci_optional/ s3://my-bucket/neuraedge/mesh-experiments/TAG/
```

4) For automated CI upload, add a workflow step that runs after `ci_optional.sh` and uses `actions/upload-artifact` or `gh release upload`.
