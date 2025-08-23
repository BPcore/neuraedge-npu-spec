// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpower_pstates_pkg.h for the primary calling header

#include "Vpower_pstates_pkg__pch.h"
#include "Vpower_pstates_pkg__Syms.h"
#include "Vpower_pstates_pkg_sparsity_selector.h"

VL_INLINE_OPT void Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0(Vpower_pstates_pkg_sparsity_selector* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__mask_out = 0xfU;
    } else if (vlSymsp->TOP.global_sparsity_enable) {
        if ((2U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
            if ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
                vlSelf->__PVT__nonzero_count = 0U;
                if ((0U != vlSelf->__PVT__abs_values
                     [0U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [1U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [2U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [3U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((2U >= (IData)(vlSelf->__PVT__nonzero_count))) {
                    vlSelf->__PVT__mask_out = ((0xcU 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->__PVT__abs_values
                                                            [1U])) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     vlSelf->__PVT__abs_values
                                                     [0U])));
                    vlSelf->__PVT__mask_out = ((3U 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | ((((IData)(
                                                            (0U 
                                                             != 
                                                             vlSelf->__PVT__abs_values
                                                             [3U])) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      vlSelf->__PVT__abs_values
                                                      [2U])) 
                                                  << 2U));
                } else {
                    vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                                  [0U] 
                                                  >= 
                                                  vlSelf->__PVT__abs_values
                                                  [1U]) 
                                                 & (vlSelf->__PVT__abs_values
                                                    [0U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [2U])) 
                                                & (vlSelf->__PVT__abs_values
                                                   [0U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 3U
                                                    : 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 5U
                                                     : 9U))
                                                : (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 6U
                                                     : 0xaU)
                                                    : 0xcU));
                }
            } else {
                vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 0U);
            }
        } else {
            vlSelf->__PVT__mask_out = ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__0__KET____DOT__tile_inst__DOT__sparsity_mode_eff))
                                        ? ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 
                                           (((vlSelf->__PVT__abs_values
                                              [1U] 
                                              >= vlSelf->__PVT__abs_values
                                              [2U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [1U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [3U]))
                                             ? 2U : 
                                            ((vlSelf->__PVT__abs_values
                                              [2U] 
                                              >= vlSelf->__PVT__abs_values
                                              [3U])
                                              ? 4U : 8U)))
                                        : ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? 3U
                                                : (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 5U
                                                    : 9U))
                                            : (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 6U
                                                    : 0xaU)
                                                : 0xcU)));
        }
    } else {
        vlSelf->__PVT__mask_out = 0xfU;
    }
}

VL_INLINE_OPT void Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0(Vpower_pstates_pkg_sparsity_selector* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__mask_out = 0xfU;
    } else if (vlSymsp->TOP.global_sparsity_enable) {
        if ((2U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
            if ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
                vlSelf->__PVT__nonzero_count = 0U;
                if ((0U != vlSelf->__PVT__abs_values
                     [0U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [1U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [2U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [3U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((2U >= (IData)(vlSelf->__PVT__nonzero_count))) {
                    vlSelf->__PVT__mask_out = ((0xcU 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->__PVT__abs_values
                                                            [1U])) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     vlSelf->__PVT__abs_values
                                                     [0U])));
                    vlSelf->__PVT__mask_out = ((3U 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | ((((IData)(
                                                            (0U 
                                                             != 
                                                             vlSelf->__PVT__abs_values
                                                             [3U])) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      vlSelf->__PVT__abs_values
                                                      [2U])) 
                                                  << 2U));
                } else {
                    vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                                  [0U] 
                                                  >= 
                                                  vlSelf->__PVT__abs_values
                                                  [1U]) 
                                                 & (vlSelf->__PVT__abs_values
                                                    [0U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [2U])) 
                                                & (vlSelf->__PVT__abs_values
                                                   [0U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 3U
                                                    : 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 5U
                                                     : 9U))
                                                : (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 6U
                                                     : 0xaU)
                                                    : 0xcU));
                }
            } else {
                vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 0U);
            }
        } else {
            vlSelf->__PVT__mask_out = ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__1__KET____DOT__tile_inst__DOT__sparsity_mode_eff))
                                        ? ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 
                                           (((vlSelf->__PVT__abs_values
                                              [1U] 
                                              >= vlSelf->__PVT__abs_values
                                              [2U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [1U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [3U]))
                                             ? 2U : 
                                            ((vlSelf->__PVT__abs_values
                                              [2U] 
                                              >= vlSelf->__PVT__abs_values
                                              [3U])
                                              ? 4U : 8U)))
                                        : ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? 3U
                                                : (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 5U
                                                    : 9U))
                                            : (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 6U
                                                    : 0xaU)
                                                : 0xcU)));
        }
    } else {
        vlSelf->__PVT__mask_out = 0xfU;
    }
}

VL_INLINE_OPT void Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0(Vpower_pstates_pkg_sparsity_selector* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__mask_out = 0xfU;
    } else if (vlSymsp->TOP.global_sparsity_enable) {
        if ((2U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
            if ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
                vlSelf->__PVT__nonzero_count = 0U;
                if ((0U != vlSelf->__PVT__abs_values
                     [0U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [1U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [2U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [3U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((2U >= (IData)(vlSelf->__PVT__nonzero_count))) {
                    vlSelf->__PVT__mask_out = ((0xcU 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->__PVT__abs_values
                                                            [1U])) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     vlSelf->__PVT__abs_values
                                                     [0U])));
                    vlSelf->__PVT__mask_out = ((3U 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | ((((IData)(
                                                            (0U 
                                                             != 
                                                             vlSelf->__PVT__abs_values
                                                             [3U])) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      vlSelf->__PVT__abs_values
                                                      [2U])) 
                                                  << 2U));
                } else {
                    vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                                  [0U] 
                                                  >= 
                                                  vlSelf->__PVT__abs_values
                                                  [1U]) 
                                                 & (vlSelf->__PVT__abs_values
                                                    [0U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [2U])) 
                                                & (vlSelf->__PVT__abs_values
                                                   [0U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 3U
                                                    : 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 5U
                                                     : 9U))
                                                : (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 6U
                                                     : 0xaU)
                                                    : 0xcU));
                }
            } else {
                vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 0U);
            }
        } else {
            vlSelf->__PVT__mask_out = ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__2__KET____DOT__tile_inst__DOT__sparsity_mode_eff))
                                        ? ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 
                                           (((vlSelf->__PVT__abs_values
                                              [1U] 
                                              >= vlSelf->__PVT__abs_values
                                              [2U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [1U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [3U]))
                                             ? 2U : 
                                            ((vlSelf->__PVT__abs_values
                                              [2U] 
                                              >= vlSelf->__PVT__abs_values
                                              [3U])
                                              ? 4U : 8U)))
                                        : ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? 3U
                                                : (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 5U
                                                    : 9U))
                                            : (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 6U
                                                    : 0xaU)
                                                : 0xcU)));
        }
    } else {
        vlSelf->__PVT__mask_out = 0xfU;
    }
}

VL_INLINE_OPT void Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0(Vpower_pstates_pkg_sparsity_selector* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpower_pstates_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpower_pstates_pkg_sparsity_selector___nba_sequent__TOP__neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_eng__sparse_block__BRA__0__KET____DOT__sparse_sel__0\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__mask_out = 0xfU;
    } else if (vlSymsp->TOP.global_sparsity_enable) {
        if ((2U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
            if ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_mode_eff))) {
                vlSelf->__PVT__nonzero_count = 0U;
                if ((0U != vlSelf->__PVT__abs_values
                     [0U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [1U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [2U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((0U != vlSelf->__PVT__abs_values
                     [3U])) {
                    vlSelf->__PVT__nonzero_count = 
                        (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__nonzero_count)));
                }
                if ((2U >= (IData)(vlSelf->__PVT__nonzero_count))) {
                    vlSelf->__PVT__mask_out = ((0xcU 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->__PVT__abs_values
                                                            [1U])) 
                                                   << 1U) 
                                                  | (0U 
                                                     != 
                                                     vlSelf->__PVT__abs_values
                                                     [0U])));
                    vlSelf->__PVT__mask_out = ((3U 
                                                & (IData)(vlSelf->__PVT__mask_out)) 
                                               | ((((IData)(
                                                            (0U 
                                                             != 
                                                             vlSelf->__PVT__abs_values
                                                             [3U])) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      vlSelf->__PVT__abs_values
                                                      [2U])) 
                                                  << 2U));
                } else {
                    vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                                  [0U] 
                                                  >= 
                                                  vlSelf->__PVT__abs_values
                                                  [1U]) 
                                                 & (vlSelf->__PVT__abs_values
                                                    [0U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [2U])) 
                                                & (vlSelf->__PVT__abs_values
                                                   [0U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 3U
                                                    : 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 5U
                                                     : 9U))
                                                : (
                                                   ((vlSelf->__PVT__abs_values
                                                     [1U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [2U]) 
                                                    & (vlSelf->__PVT__abs_values
                                                       [1U] 
                                                       >= 
                                                       vlSelf->__PVT__abs_values
                                                       [3U]))
                                                    ? 
                                                   ((vlSelf->__PVT__abs_values
                                                     [2U] 
                                                     >= 
                                                     vlSelf->__PVT__abs_values
                                                     [3U])
                                                     ? 6U
                                                     : 0xaU)
                                                    : 0xcU));
                }
            } else {
                vlSelf->__PVT__mask_out = ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 0U);
            }
        } else {
            vlSelf->__PVT__mask_out = ((1U & (IData)(vlSymsp->TOP.neuraedge_npu_50tops__DOT__tiles__BRA__3__KET____DOT__tile_inst__DOT__sparsity_mode_eff))
                                        ? ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? 1U : 
                                           (((vlSelf->__PVT__abs_values
                                              [1U] 
                                              >= vlSelf->__PVT__abs_values
                                              [2U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [1U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [3U]))
                                             ? 2U : 
                                            ((vlSelf->__PVT__abs_values
                                              [2U] 
                                              >= vlSelf->__PVT__abs_values
                                              [3U])
                                              ? 4U : 8U)))
                                        : ((((vlSelf->__PVT__abs_values
                                              [0U] 
                                              >= vlSelf->__PVT__abs_values
                                              [1U]) 
                                             & (vlSelf->__PVT__abs_values
                                                [0U] 
                                                >= 
                                                vlSelf->__PVT__abs_values
                                                [2U])) 
                                            & (vlSelf->__PVT__abs_values
                                               [0U] 
                                               >= vlSelf->__PVT__abs_values
                                               [3U]))
                                            ? (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? 3U
                                                : (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 5U
                                                    : 9U))
                                            : (((vlSelf->__PVT__abs_values
                                                 [1U] 
                                                 >= 
                                                 vlSelf->__PVT__abs_values
                                                 [2U]) 
                                                & (vlSelf->__PVT__abs_values
                                                   [1U] 
                                                   >= 
                                                   vlSelf->__PVT__abs_values
                                                   [3U]))
                                                ? (
                                                   (vlSelf->__PVT__abs_values
                                                    [2U] 
                                                    >= 
                                                    vlSelf->__PVT__abs_values
                                                    [3U])
                                                    ? 6U
                                                    : 0xaU)
                                                : 0xcU)));
        }
    } else {
        vlSelf->__PVT__mask_out = 0xfU;
    }
}
