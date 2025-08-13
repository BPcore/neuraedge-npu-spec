# RTL Test Plan: Architecture Freeze Compliance

## 1. Testbench Acceptance
- The Verilator C++ testbench (`sim/top_main.cpp`) is reviewed and confirmed to match the 2×2 flattened-bus NoC architecture, including host interface, packet format, and handshake logic. No changes required as of architecture freeze.

## 2. CI Integration Step
- CI must run:
  - `make sim`
  - `./sim/top_main`
- CI must report a failure if any packets mismatch or if the testbench exits with a nonzero status.

## 3. Trace Analysis Procedure
- On testbench failure, open `wave.vcd` in a waveform viewer (e.g., GTKWave).
- Inspect `ext_valid_in`, `ext_ready_out`, `ext_valid_out`, `ext_ready_in`, and packet payload signals.
- Identify the cycle(s) where handshake or payload deviates from expected behavior.

## 4. Optional: Multicast Coverage Extension
- Extend `sim/top_main.cpp` to inject multicast traffic (one packet to multiple destinations).
- Parameterize the number of destinations per multicast.
- Verify scoreboard correctly tracks and checks all expected returns.
