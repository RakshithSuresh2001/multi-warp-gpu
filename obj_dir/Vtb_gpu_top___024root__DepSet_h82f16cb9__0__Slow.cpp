// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gpu_top.h for the primary calling header

#include "Vtb_gpu_top__pch.h"
#include "Vtb_gpu_top__Syms.h"
#include "Vtb_gpu_top___024root.h"

extern const VlWide<11>/*351:0*/ Vtb_gpu_top__ConstPool__CONST_h2e655fda_0;

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_initial__TOP(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_gpu_top__DOT__clk = 0U;
    vlSelf->tb_gpu_top__DOT__pass_count = 0U;
    vlSelf->tb_gpu_top__DOT__fail_count = 0U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(11, Vtb_gpu_top__ConstPool__CONST_h2e655fda_0));
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 32, 1024, 0, std::string{"imem.hex"}
                 ,  &(vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__stl(Vtb_gpu_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_triggers__stl(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gpu_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
