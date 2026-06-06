// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gpu_top.h for the primary calling header

#include "Vtb_gpu_top__pch.h"
#include "Vtb_gpu_top___024root.h"

void Vtb_gpu_top___024root___eval_nba(Vtb_gpu_top___024root* vlSelf);

bool Vtb_gpu_top___024root___eval_phase__nba(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_gpu_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__nba(Vtb_gpu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__act(Vtb_gpu_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtb_gpu_top___024root___eval_phase__act(Vtb_gpu_top___024root* vlSelf);

void Vtb_gpu_top___024root___eval(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_gpu_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_gpu_top.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_gpu_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_gpu_top.sv", 7, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_gpu_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_gpu_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_gpu_top___024root___eval_debug_assertions(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
