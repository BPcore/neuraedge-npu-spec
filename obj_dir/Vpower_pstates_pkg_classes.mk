# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vpower_pstates_pkg.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vpower_pstates_pkg \
	Vpower_pstates_pkg___024root__DepSet_h1fd6106e__0 \
	Vpower_pstates_pkg___024root__DepSet_h1fd6106e__1 \
	Vpower_pstates_pkg___024root__DepSet_h1fd6106e__2 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__0 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__1 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__2 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__3 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__4 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__5 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__6 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__7 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__8 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__9 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__10 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__11 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__12 \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__13 \
	Vpower_pstates_pkg_sparsity_engine__DepSet_h65ff251c__0 \
	Vpower_pstates_pkg_sparsity_engine__DepSet_h96e4e8c9__0 \
	Vpower_pstates_pkg_sparsity_selector__DepSet_hbe851be6__0 \
	Vpower_pstates_pkg_sparsity_selector__DepSet_h59d2bd8e__0 \
	Vpower_pstates_pkg__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vpower_pstates_pkg__ConstPool_0 \
	Vpower_pstates_pkg___024root__Slow \
	Vpower_pstates_pkg___024root__DepSet_h1fd6106e__0__Slow \
	Vpower_pstates_pkg___024root__DepSet_h1fd6106e__1__Slow \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__0__Slow \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__1__Slow \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__2__Slow \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__3__Slow \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__4__Slow \
	Vpower_pstates_pkg___024root__DepSet_hb905c716__5__Slow \
	Vpower_pstates_pkg_sparsity_engine__Slow \
	Vpower_pstates_pkg_sparsity_engine__DepSet_h96e4e8c9__0__Slow \
	Vpower_pstates_pkg_sparsity_engine__DepSet_h2f1cbba4__0__Slow \
	Vpower_pstates_pkg_sparsity_engine__DepSet_h03d46ed3__0__Slow \
	Vpower_pstates_pkg_sparsity_selector__Slow \
	Vpower_pstates_pkg_sparsity_selector__DepSet_h59d2bd8e__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vpower_pstates_pkg__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
