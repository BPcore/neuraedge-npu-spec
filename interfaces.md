\# docs/interfaces.md

\#\# AXI4 Master Interface

\- Data Width: 128 bits    
\- Address Width: 64 bits    
\- ID Width: 4 bits per tile- Outstanding Transactions: 16    
\- Burst Length: Up to 256 beats    
\- Clock Domain: 600 MHz nominal    
\- Protocol: AXI4 Full (AXI4-Lite for configuration)

\#\# NoC (NX-NWK) Protocol

\- Topology: 2D mesh (e.g., 4×4 for 16-tile scaling)    
\- Flit Size: 64 bits    
\- Virtual Channels: 4 per input port    
\- Buffer Depth: 10 entries per VC    
\- Routing Algorithm: Odd-Even adaptive routing    
\- Flow Control: Credit-based    
\- Single-Hop Latency: ≤ 40 ns  

\#\# Interrupt Interface

| Signal | Direction | Description |
| :---- | :---- | :---- |
| irq\_global | out | Global interrupt to host CPU   |
| irq\_perf\_overflow \[3:0\] | out | Per-tile performance-counter overflow flags |
| irq\_power\_throttle \[1:0\] | out | Power-management throttle signals |
| irq\_security\_violation  | out | Side-channel/security violation |

\#\# JTAG / Boundary-Scan

\- Standard: IEEE 1149.1    
\- TAP Controller: Single instance shared across tiles    
\- TDI→TDO chaining: Tile0 → Tile1 → … → TileN    
\- Instruction Set:    
  \- EXTEST (external pin test)    
  \- INTEST (internal logic test)    
  \- BYPASS    
  \- SAMPLE/PRELOAD    
\- Clock: tck (optionally divided for long chains)    
\- Reset: trst\_n  

\#\# Summary Table of All Interfaces

| Interface | Data Width | Protocol | Clock Domain | Notes |
| :---- | :---- | :---- | :---- | :---- |
| AXI4 Master | 128 nits | AXI4 Full | 600 MHz | 16 outstandings, 256-beat bursts |
| NoC Mesh | 64 bits | Credit-based | 800 MHz | 4 VCs, 10-entery Buffers, adaptive routing |
| Interrupts |  | Level-triggered |  | 8 signals per tile |
| JTAG/boundary | 1 bit | IEEE 1149.1 | tck | Shared TAP across all tiles |

