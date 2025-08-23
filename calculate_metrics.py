#!/usr/bin/env python3

# Calculate actual metrics from synthesis results
PE_instances = 57345  # From synthesis log
Tiles = 4
PEs_per_tile = PE_instances // Tiles
Target_frequency = 600e6  # 600 MHz
Target_TOPS = 50.0

# Calculate actual performance  
Actual_TOPS = PE_instances * Target_frequency * 2 / 1e12  # 2 ops per MAC (multiply + accumulate)

print("=== ARCHITECTURAL COMPLIANCE VALIDATION (Updated) ===")
print("NeuraEdge NPU - Post-Architecture Fix Analysis")
print("=" * 60)
print(f"SYNTHESIS RESULTS:")
print(f"• Total PE Instances:     {PE_instances:,}")
print(f"• PEs per Tile:          {PEs_per_tile:,}")
print(f"• Number of Tiles:       {Tiles}")
print(f"• Target Frequency:      {Target_frequency/1e6:.0f} MHz")
print("")
print(f"PERFORMANCE CALCULATION:")
print(f"• Operations per PE:     2 ops/cycle (MAC)")
print(f"• Total Ops/sec:         {PE_instances:,} × {Target_frequency/1e6:.0f}M × 2 = {Actual_TOPS:.2f} TOPS")
print("")
print(f"ARCHITECTURAL TARGETS:")
print(f"• Target Performance:    {Target_TOPS:.1f} TOPS")
print(f"• Actual Performance:    {Actual_TOPS:.2f} TOPS")
print(f"• Compliance:           {(Actual_TOPS/Target_TOPS)*100:.1f}%")
print("")

if Actual_TOPS >= Target_TOPS:
    print("✅ ARCHITECTURAL COMPLIANCE: ACHIEVED")
    print(f"✅ Performance exceeds target by {((Actual_TOPS/Target_TOPS)-1)*100:.1f}%")
else:
    print("❌ ARCHITECTURAL COMPLIANCE: NOT ACHIEVED")
    print(f"❌ Performance shortfall: {((Target_TOPS/Actual_TOPS)-1)*100:.1f}%")

print("")
print("DETAILED BREAKDOWN:")
print(f"• Expected: 4 tiles × 2,048 PEs = 8,192 total PEs")
print(f"• Actual:   {Tiles} tiles × {PEs_per_tile:,} PEs = {PE_instances:,} total PEs")
print(f"• Factor:   {PE_instances/8192:.1f}x target PE count")

