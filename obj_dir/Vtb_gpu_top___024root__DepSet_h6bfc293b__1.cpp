// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gpu_top.h for the primary calling header

#include "Vtb_gpu_top__pch.h"
#include "Vtb_gpu_top___024root.h"

VL_INLINE_OPT void Vtb_gpu_top___024root___nba_comb__TOP__0(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_comb__TOP__0\n"); );
    // Body
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
    vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[0U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data;
    vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[0U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data;
}

void Vtb_gpu_top___024root___nba_sequent__TOP__0(Vtb_gpu_top___024root* vlSelf);
void Vtb_gpu_top___024root___nba_sequent__TOP__1(Vtb_gpu_top___024root* vlSelf);
void Vtb_gpu_top___024root___nba_sequent__TOP__2(Vtb_gpu_top___024root* vlSelf);
void Vtb_gpu_top___024root___nba_sequent__TOP__3(Vtb_gpu_top___024root* vlSelf);

void Vtb_gpu_top___024root___eval_nba(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gpu_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gpu_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gpu_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gpu_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gpu_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_gpu_top___024root___timing_resume(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4954a85e__0.resume("@(posedge tb_gpu_top.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_gpu_top___024root___timing_commit(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4954a85e__0.commit("@(posedge tb_gpu_top.clk)");
    }
}

void Vtb_gpu_top___024root___eval_triggers__act(Vtb_gpu_top___024root* vlSelf);
void Vtb_gpu_top___024root___eval_act(Vtb_gpu_top___024root* vlSelf);

bool Vtb_gpu_top___024root___eval_phase__act(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gpu_top___024root___eval_triggers__act(vlSelf);
    Vtb_gpu_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_gpu_top___024root___timing_resume(vlSelf);
        Vtb_gpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

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
