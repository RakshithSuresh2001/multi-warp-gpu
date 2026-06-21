// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gpu_top.h for the primary calling header

#include "Vtb_gpu_top__pch.h"
#include "Vtb_gpu_top___024root.h"

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_static(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_final(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__stl(Vtb_gpu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_gpu_top___024root___eval_phase__stl(Vtb_gpu_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_settle(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_gpu_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_gpu_top.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_gpu_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__stl(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gpu_top___024root___stl_sequent__TOP__0(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_gpu_top__DOT__dut__DOT____VdfgTmp_h85f8c2d9__0;
    tb_gpu_top__DOT__dut__DOT____VdfgTmp_h85f8c2d9__0 = 0;
    CData/*0:0*/ tb_gpu_top__DOT__dut__DOT____VdfgTmp_h253707d1__0;
    tb_gpu_top__DOT__dut__DOT____VdfgTmp_h253707d1__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf956df2b__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf956df2b__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf97c6886__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf97c6886__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf91eae51__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf91eae51__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9485b71__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9485b71__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9543b4e__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9543b4e__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha827dcdd__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha827dcdd__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha892ee47__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha892ee47__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hd9da64b4__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hd9da64b4__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h9e085f0b__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h9e085f0b__0 = 0;
    IData/*31:0*/ tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h1c3c5fe0__0;
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h1c3c5fe0__0 = 0;
    // Body
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_read = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_write = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__branch = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_to_reg = 0U;
    if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                  >> 6U)))) {
        if ((0x20U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
            if ((0x10U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op = 0xaU;
                            }
                        }
                    } else if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op 
                                = (((((((((0U == ((0x3f8U 
                                                   & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                        >> 0xcU)))) 
                                          | (0x100U 
                                             == ((0x3f8U 
                                                  & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                       >> 0xcU))))) 
                                         | (7U == (
                                                   (0x3f8U 
                                                    & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                         >> 0xcU))))) 
                                        | (6U == ((0x3f8U 
                                                   & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                        >> 0xcU))))) 
                                       | (4U == ((0x3f8U 
                                                  & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                       >> 0xcU))))) 
                                      | (1U == ((0x3f8U 
                                                 & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                      >> 0xcU))))) 
                                     | (5U == ((0x3f8U 
                                                & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                     >> 0xcU))))) 
                                    | (0x105U == ((0x3f8U 
                                                   & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                        >> 0xcU)))))
                                    ? ((0U == ((0x3f8U 
                                                & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                     >> 0xcU))))
                                        ? 0U : ((0x100U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                        >> 0xcU))))
                                                 ? 1U
                                                 : 
                                                ((7U 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                         >> 0xcU))))
                                                  ? 2U
                                                  : 
                                                 ((6U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                          >> 0xcU))))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                           >> 0xcU))))
                                                    ? 4U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                            >> 0xcU))))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                             >> 0xcU))))
                                                      ? 6U
                                                      : 7U)))))))
                                    : ((2U == ((0x3f8U 
                                                & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                     >> 0xcU))))
                                        ? 8U : ((3U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                        >> 0xcU))))
                                                 ? 9U
                                                 : 0U)));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
            if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op = 0xbU;
                        }
                    }
                } else if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op 
                            = ((0x4000U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                ? ((0x2000U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                    ? ((0x1000U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                     ? ((0x40000000U 
                                         & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                         ? 7U : 6U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)
                                                    ? 5U
                                                    : 0U)));
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_read = 1U;
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en 
        = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
           & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm_i 
        = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                        >> 0x1fU))) << 0xcU) | (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                >> 0x14U));
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm 
           + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[0U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[1U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[2U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[3U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[4U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[5U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[6U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[7U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen = (
                                                   ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__7__KET____DOT__u_lane__DOT__dmem_wen_r) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__6__KET____DOT__u_lane__DOT__dmem_wen_r) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__5__KET____DOT__u_lane__DOT__dmem_wen_r) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__4__KET____DOT__u_lane__DOT__dmem_wen_r) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__3__KET____DOT__u_lane__DOT__dmem_wen_r) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__2__KET____DOT__u_lane__DOT__dmem_wen_r) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__1__KET____DOT__u_lane__DOT__dmem_wen_r) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__dmem_wen_r))))))));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[0U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[1U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[2U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[3U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[4U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[5U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[6U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[7U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[0U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[1U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[2U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[3U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[4U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[5U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[6U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[7U] = 
        ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
    if ((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                         >> 0xfU)))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[1U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[2U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[3U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[4U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[5U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[6U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[7U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data = 0U;
    } else if ((0x1eU >= (0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                    >> 0xfU) - (IData)(1U))))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[1U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [1U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[2U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [2U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[3U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [3U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[4U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [4U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[5U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [5U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[6U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [6U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[7U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [7U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [0U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0xfU) - (IData)(1U)))];
    } else {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[1U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[2U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[3U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[4U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[5U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[6U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[7U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data = 0U;
    }
    if ((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                         >> 0x14U)))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[1U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[2U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[3U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[4U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[5U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[6U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[7U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data = 0U;
    } else if ((0x1eU >= (0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                    >> 0x14U) - (IData)(1U))))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[1U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [1U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[2U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [2U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[3U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [3U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[4U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [4U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[5U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [5U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[6U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [6U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[7U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [7U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
        vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
            [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
            [0U][(0x1fU & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                            >> 0x14U) - (IData)(1U)))];
    } else {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[1U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[2U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[3U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[4U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[5U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[6U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[7U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data = 0U;
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc 
        = (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr), 5U))));
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken 
        = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
           & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
              & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                 | ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                     ? ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                         ? ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                             ? (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                             : (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                         : ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                             ? VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                             : VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                     : ((1U & (~ ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                  >> 1U))) && ((1U 
                                                & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                   != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                : (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                   == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))))));
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren = (
                                                   ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__7__KET____DOT__u_lane__DOT__dmem_ren_r) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__6__KET____DOT__u_lane__DOT__dmem_ren_r) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__5__KET____DOT__u_lane__DOT__dmem_ren_r) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__4__KET____DOT__u_lane__DOT__dmem_ren_r) 
                                                             << 4U) 
                                                            | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__3__KET____DOT__u_lane__DOT__dmem_ren_r) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__2__KET____DOT__u_lane__DOT__dmem_ren_r) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__1__KET____DOT__u_lane__DOT__dmem_ren_r) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__dmem_ren_r))))))));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
        = ((0xbU == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
            ? vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc
            : vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b 
        = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src)
            ? vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm
            : vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm = 0U;
    if ((0x40U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
        if ((0x20U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
            if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                          >> 4U)))) {
                if ((8U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    if ((4U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = 1U;
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = 1U;
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__branch = 1U;
                                vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x1fU))) 
                                        << 0x15U) | 
                                       ((0x100000U 
                                         & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr) 
                                           | ((0x800U 
                                               & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U))))));
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                     >> 2U)))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__branch = 1U;
                            vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm 
                                = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                >> 0x1fU))) 
                                    << 0xdU) | ((0x1000U 
                                                 & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                            >> 7U))))));
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
        if ((0x10U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
            if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = 1U;
                            vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = 1U;
                            vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm 
                                = (0xfffff000U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr);
                        }
                    }
                } else if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = 1U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = 1U;
                        vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 7U))));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
        if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                      >> 3U)))) {
            if ((4U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = 1U;
                        vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = 1U;
                        vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm 
                            = (0xfffff000U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr);
                    }
                }
            } else if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = 1U;
                    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = 1U;
                    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm_i;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                      >> 2U)))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = 1U;
                    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = 1U;
                    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm_i;
                }
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[0U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data;
    vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[0U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data;
    vlSelf->tb_gpu_top__DOT__dut__DOT__lane_branch_taken 
        = ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
             & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
                & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                   | ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                       ? ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                           ? ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                               ? (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                  >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                               : (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                  < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                           : ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                               ? VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                               : VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                       : ((1U & (~ ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                    >> 1U))) && ((1U 
                                                  & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                  ? 
                                                 (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                  != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                  : 
                                                 (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                  == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))))) 
            << 7U) | ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                        & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
                           & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                              | ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                  ? ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                      ? ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                          ? (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                             >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                          : (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                             < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                                      : ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                          ? VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                          : VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                                  : ((1U & (~ ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                               >> 1U))) 
                                     && ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                          ? (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                             != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                          : (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                             == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))))) 
                       << 6U) | ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                                   & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
                                      & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                                         | ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                             ? ((2U 
                                                 & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                  ? 
                                                 (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                  >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                  : 
                                                 (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                  < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                  ? 
                                                 VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                  : 
                                                 VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                                             : ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                     >> 1U))) 
                                                && ((1U 
                                                     & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                     ? 
                                                    (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                     != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                     : 
                                                    (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                     == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))))) 
                                  << 5U) | ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                                              & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
                                                 & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                                                    | ((4U 
                                                        & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                          ? 
                                                         (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                          >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                          : 
                                                         (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                          < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                          ? 
                                                         VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                          : 
                                                         VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                                                        : 
                                                       ((1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                             >> 1U))) 
                                                        && ((1U 
                                                             & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                             ? 
                                                            (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                             != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                             : 
                                                            (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                             == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                                                 & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
                                                    & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                                                       | ((4U 
                                                           & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                             ? 
                                                            (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                             >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                             : 
                                                            (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                             < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                             ? 
                                                            VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                             : 
                                                            VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                                                           : 
                                                          ((1U 
                                                            & (~ 
                                                               ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                                >> 1U))) 
                                                           && ((1U 
                                                                & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                ? 
                                                               (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                                : 
                                                               (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                                                    & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
                                                       & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                                                          | ((4U 
                                                              & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                              ? 
                                                             ((2U 
                                                               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                               ? 
                                                              ((1U 
                                                                & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                ? 
                                                               (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                                : 
                                                               (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                ? 
                                                               VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                                : 
                                                               VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                                                              : 
                                                             ((1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                                   >> 1U))) 
                                                              && ((1U 
                                                                   & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                   ? 
                                                                  (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                   != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                                   : 
                                                                  (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                   == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                                                       & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch) 
                                                          & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) 
                                                             | ((4U 
                                                                 & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                 ? 
                                                                ((2U 
                                                                  & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                  ? 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                   ? 
                                                                  (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                   >= vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                                   : 
                                                                  (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                   < vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                   ? 
                                                                  VL_GTES_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                                   : 
                                                                  VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out, vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))
                                                                 : 
                                                                ((1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                                      >> 1U))) 
                                                                 && ((1U 
                                                                      & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                                                                      ? 
                                                                     (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                      != vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)
                                                                      : 
                                                                     (vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
                                                                      == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))))) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken))))))));
    tb_gpu_top__DOT__dut__DOT____VdfgTmp_h85f8c2d9__0 
        = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken) 
           & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id));
    tb_gpu_top__DOT__dut__DOT____VdfgTmp_h253707d1__0 
        = ((~ (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id)) 
           & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken));
    vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall = 
        ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr) 
           & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) 
          << 1U) | ((~ (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr)) 
                    & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))));
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf956df2b__0 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
           + vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b);
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf97c6886__0 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
           - vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b);
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf91eae51__0 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
           & vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b);
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9485b71__0 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
           | vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b);
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9543b4e__0 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
           ^ vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b);
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha827dcdd__0 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
           << (0x1fU & vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b));
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha892ee47__0 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
           >> (0x1fU & vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b));
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hd9da64b4__0 
        = VL_SHIFTRS_III(32,32,5, vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a, 
                         (0x1fU & vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b));
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h9e085f0b__0 
        = (VL_LTS_III(32, vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a, vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b)
            ? 1U : 0U);
    tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h1c3c5fe0__0 
        = ((vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
            < vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b)
            ? 1U : 0U);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__next_warp 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(1U) + (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr)), (IData)(2U));
    if ((1U & (~ ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall) 
                  >> (1U & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__idx))))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__next_warp 
            = (1U & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__idx);
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready = 1U;
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(2U) + (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr)), (IData)(2U));
    if ((1U & ((~ (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready)) 
               & (~ ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall) 
                     >> (1U & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__idx)))))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__next_warp 
            = (1U & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__idx);
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready = 1U;
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid 
        = (1U & (~ ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall) 
                    >> (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr))));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
            ? ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                         ? ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                             ? (vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc 
                                + vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b)
                             : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b)
                         : ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                             ? tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h1c3c5fe0__0
                             : tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_h9e085f0b__0)))
            : ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                ? ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                    ? ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                        ? tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hd9da64b4__0
                        : tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha892ee47__0)
                    : ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                        ? tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_ha827dcdd__0
                        : tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9543b4e__0))
                : ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                    ? ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                        ? tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf9485b71__0
                        : tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf91eae51__0)
                    : ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
                        ? tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf97c6886__0
                        : tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT____VdfgExtracted_hf956df2b__0))));
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen_fetch = 0U;
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next_fetch = 0ULL;
    if (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid) 
         & (~ (IData)((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)))))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen_fetch 
            = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen_fetch) 
               | (3U & ((IData)(1U) << (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr))));
        vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next_fetch 
            = (((~ (0xffffffffULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr), 5U)))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next_fetch) 
               | ((QData)((IData)(((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc))) 
                  << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr), 5U))));
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U] 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[0U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[1U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[2U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[3U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[4U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[5U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[6U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[7U] 
        = (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result 
                    >> 2U));
    if (vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[0U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U];
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[1U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U];
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[2U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U];
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[3U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U];
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[4U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U];
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[5U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U];
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[6U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U];
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[7U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U];
    } else if (vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[0U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[1U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[2U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[3U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[4U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[5U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[6U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[7U] 
            = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
    } else {
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[0U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[1U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[2U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[3U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[4U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[5U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[6U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[7U] 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen = ((((IData)(tb_gpu_top__DOT__dut__DOT____VdfgTmp_h85f8c2d9__0) 
                                                   | ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen_fetch) 
                                                      >> 1U)) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(tb_gpu_top__DOT__dut__DOT____VdfgTmp_h253707d1__0) 
                                                       | (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen_fetch))));
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next = (((QData)((IData)(
                                                                   ((IData)(tb_gpu_top__DOT__dut__DOT____VdfgTmp_h85f8c2d9__0)
                                                                     ? vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target
                                                                     : (IData)(
                                                                               (vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next_fetch 
                                                                                >> 0x20U))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(tb_gpu_top__DOT__dut__DOT____VdfgTmp_h253707d1__0)
                                                                      ? vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target
                                                                      : (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next_fetch)))));
}

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_stl(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_gpu_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_triggers__stl(Vtb_gpu_top___024root* vlSelf);

VL_ATTR_COLD bool Vtb_gpu_top___024root___eval_phase__stl(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_gpu_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_gpu_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__act(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_gpu_top.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_gpu_top.clk or negedge tb_gpu_top.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gpu_top___024root___dump_triggers__nba(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_gpu_top.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_gpu_top.clk or negedge tb_gpu_top.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gpu_top___024root___ctor_var_reset(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_gpu_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__pass_count = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__fail_count = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen = VL_RAND_RESET_I(2);
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next = VL_RAND_RESET_Q(64);
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen_fetch = VL_RAND_RESET_I(2);
    vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next_fetch = VL_RAND_RESET_Q(64);
    vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_addr_out = VL_RAND_RESET_I(5);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_addr_out = VL_RAND_RESET_I(5);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3 = VL_RAND_RESET_I(3);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren = VL_RAND_RESET_I(8);
    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr);
    VL_RAND_RESET_W(256, vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata);
    vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall = VL_RAND_RESET_I(2);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lane_branch_taken = VL_RAND_RESET_I(8);
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc = VL_RAND_RESET_Q(64);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__next_warp = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__idx = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 31; ++__Vi2) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__1__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__1__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__2__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__2__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__3__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__3__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__4__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__4__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__5__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__5__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__6__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__6__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__7__KET____DOT__u_lane__DOT__dmem_ren_r = VL_RAND_RESET_I(1);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__7__KET____DOT__u_lane__DOT__dmem_wen_r = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 = 0;
    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 = 0;
    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55 = 0;
    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55 = 0;
    vlSelf->__Vdly__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_gpu_top__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
