// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_gpu_top__Syms.h"


void Vtb_gpu_top___024root__trace_chg_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_gpu_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_chg_0\n"); );
    // Init
    Vtb_gpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gpu_top___024root*>(voidSelf);
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_gpu_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_gpu_top___024root__trace_chg_0_sub_0(Vtb_gpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_addr_out),5);
        bufp->chgCData(oldp+1,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_addr_out),5);
        bufp->chgBit(oldp+2,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read));
        bufp->chgBit(oldp+3,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write));
        bufp->chgBit(oldp+4,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write));
        bufp->chgBit(oldp+5,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch));
        bufp->chgBit(oldp+6,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state
                             [0U]));
        bufp->chgBit(oldp+7,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state
                             [1U]));
        bufp->chgQData(oldp+8,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc),64);
        bufp->chgIData(oldp+10,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk4__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+14,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0xfU)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [1U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+15,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [1U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+16,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0xfU)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [2U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+17,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [2U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+18,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0xfU)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [3U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+19,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [3U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+20,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0xfU)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [4U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+21,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [4U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+22,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0xfU)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [5U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+23,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [5U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+24,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0xfU)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [6U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+25,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [6U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+26,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0xfU)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [7U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
        bufp->chgIData(oldp+27,(((0U == (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                  >> 0x14U)))
                                  ? 0U : ((0x1eU >= 
                                           (0x1fU & 
                                            ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                          [vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp]
                                          [7U][(0x1fU 
                                                & ((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                           : 0U))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+28,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr));
        bufp->chgIData(oldp+29,(vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc),32);
        bufp->chgBit(oldp+30,(vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid));
        bufp->chgBit(oldp+31,((0U != (0xffU & (- (IData)((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__dmem_ren)))))));
        bufp->chgCData(oldp+32,(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen),2);
        bufp->chgQData(oldp+33,(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next),64);
        bufp->chgBit(oldp+35,(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken));
        bufp->chgIData(oldp+36,(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target),32);
        bufp->chgBit(oldp+37,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id));
        bufp->chgCData(oldp+38,(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen_fetch),2);
        bufp->chgQData(oldp+39,(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next_fetch),64);
        bufp->chgIData(oldp+41,(vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr),32);
        bufp->chgBit(oldp+42,(vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp));
        bufp->chgIData(oldp+43,(vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc),32);
        bufp->chgBit(oldp+44,(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
        bufp->chgIData(oldp+45,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc),32);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+48,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out),32);
        bufp->chgIData(oldp+49,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm),32);
        bufp->chgCData(oldp+51,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr),5);
        bufp->chgCData(oldp+52,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op),4);
        bufp->chgBit(oldp+53,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src));
        bufp->chgBit(oldp+54,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg));
        bufp->chgCData(oldp+55,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3),3);
        bufp->chgBit(oldp+56,(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal));
        bufp->chgBit(oldp+57,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[0]));
        bufp->chgBit(oldp+58,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[1]));
        bufp->chgBit(oldp+59,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[2]));
        bufp->chgBit(oldp+60,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[3]));
        bufp->chgBit(oldp+61,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[4]));
        bufp->chgBit(oldp+62,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[5]));
        bufp->chgBit(oldp+63,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[6]));
        bufp->chgBit(oldp+64,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_wen[7]));
        bufp->chgCData(oldp+65,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[0]),5);
        bufp->chgCData(oldp+66,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[1]),5);
        bufp->chgCData(oldp+67,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[2]),5);
        bufp->chgCData(oldp+68,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[3]),5);
        bufp->chgCData(oldp+69,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[4]),5);
        bufp->chgCData(oldp+70,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[5]),5);
        bufp->chgCData(oldp+71,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[6]),5);
        bufp->chgCData(oldp+72,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_rd_addr[7]),5);
        bufp->chgIData(oldp+73,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[0]),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[1]),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[2]),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[3]),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[4]),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[5]),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[6]),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_data[7]),32);
        bufp->chgBit(oldp+81,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[0]));
        bufp->chgBit(oldp+82,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[1]));
        bufp->chgBit(oldp+83,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[2]));
        bufp->chgBit(oldp+84,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[3]));
        bufp->chgBit(oldp+85,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[4]));
        bufp->chgBit(oldp+86,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[5]));
        bufp->chgBit(oldp+87,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[6]));
        bufp->chgBit(oldp+88,(vlSelf->tb_gpu_top__DOT__dut__DOT__wb_warp_id[7]));
        bufp->chgCData(oldp+89,((0xffU & (- (IData)((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__dmem_ren))))),8);
        bufp->chgCData(oldp+90,((0xffU & (- (IData)((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__dmem_wen))))),8);
        bufp->chgWData(oldp+91,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr),256);
        __Vtemp_1[0U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        __Vtemp_1[1U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        __Vtemp_1[2U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        __Vtemp_1[3U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        __Vtemp_1[4U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        __Vtemp_1[5U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        __Vtemp_1[6U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        __Vtemp_1[7U] = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
        bufp->chgWData(oldp+99,(__Vtemp_1),256);
        bufp->chgIData(oldp+107,((0xffffffU & (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                << 0x15U) 
                                               | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                      << 0xfU) 
                                                     | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                         << 0xcU) 
                                                        | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3) 
                                                                  << 3U) 
                                                                 | (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3)))))))))),24);
        bufp->chgWData(oldp+108,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata),256);
        bufp->chgCData(oldp+116,(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall),2);
        bufp->chgCData(oldp+117,(vlSelf->tb_gpu_top__DOT__dut__DOT__lane_branch_taken),8);
        __Vtemp_2[0U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        __Vtemp_2[1U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        __Vtemp_2[2U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        __Vtemp_2[3U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        __Vtemp_2[4U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        __Vtemp_2[5U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        __Vtemp_2[6U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        __Vtemp_2[7U] = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target;
        bufp->chgWData(oldp+118,(__Vtemp_2),256);
        bufp->chgCData(oldp+126,((0xffU & (- (IData)((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id))))),8);
        bufp->chgBit(oldp+127,(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__dmem_ren));
        bufp->chgBit(oldp+128,(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__dmem_wen));
        bufp->chgIData(oldp+129,(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result),32);
        bufp->chgIData(oldp+130,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]),32);
        bufp->chgBit(oldp+131,(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en));
        bufp->chgIData(oldp+132,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b),32);
        bufp->chgIData(oldp+134,(vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a),32);
        bufp->chgBit(oldp+135,(((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
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
                                            == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out))))));
        bufp->chgIData(oldp+136,(((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)),32);
        bufp->chgIData(oldp+137,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U]),32);
        bufp->chgIData(oldp+138,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgIData(oldp+139,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U]),32);
        bufp->chgIData(oldp+140,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgIData(oldp+141,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U]),32);
        bufp->chgIData(oldp+142,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgIData(oldp+143,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U]),32);
        bufp->chgIData(oldp+144,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgIData(oldp+145,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U]),32);
        bufp->chgIData(oldp+146,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgIData(oldp+147,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U]),32);
        bufp->chgIData(oldp+148,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgIData(oldp+149,(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U]),32);
        bufp->chgIData(oldp+150,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                                   ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U]
                                   : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                                       : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result))),32);
        bufp->chgCData(oldp+151,((0x7fU & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)),7);
        bufp->chgCData(oldp+152,((0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                           >> 7U))),5);
        bufp->chgCData(oldp+153,((7U & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+154,((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+155,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm_i),32);
        bufp->chgIData(oldp+156,((((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+157,((((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
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
                                                           >> 7U))))))),32);
        bufp->chgIData(oldp+158,((0xfffff000U & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr)),32);
        bufp->chgIData(oldp+159,((((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                               >> 0x1fU))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr) 
                                                   | ((0x800U 
                                                       & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                            >> 0x14U))))))),32);
        bufp->chgIData(oldp+160,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm),32);
        bufp->chgCData(oldp+161,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op),4);
        bufp->chgBit(oldp+162,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src));
        bufp->chgBit(oldp+163,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_read));
        bufp->chgBit(oldp+164,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_write));
        bufp->chgBit(oldp+165,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write));
        bufp->chgBit(oldp+166,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__branch));
        bufp->chgBit(oldp+167,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_to_reg));
        bufp->chgSData(oldp+168,((0x3ffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc 
                                            >> 2U))),10);
        bufp->chgBit(oldp+169,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__next_warp));
        bufp->chgBit(oldp+170,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready));
        bufp->chgBit(oldp+171,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk5__DOT__unnamedblk6__DOT__candidate));
        bufp->chgCData(oldp+172,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[0]),8);
        bufp->chgCData(oldp+173,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[1]),8);
        bufp->chgCData(oldp+174,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[2]),8);
        bufp->chgCData(oldp+175,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[3]),8);
        bufp->chgCData(oldp+176,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[4]),8);
        bufp->chgCData(oldp+177,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[5]),8);
        bufp->chgCData(oldp+178,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[6]),8);
        bufp->chgCData(oldp+179,(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr[7]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+180,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[0]),32);
        bufp->chgIData(oldp+181,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[1]),32);
        bufp->chgIData(oldp+182,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[2]),32);
        bufp->chgIData(oldp+183,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[3]),32);
        bufp->chgIData(oldp+184,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[4]),32);
        bufp->chgIData(oldp+185,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[5]),32);
        bufp->chgIData(oldp+186,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[6]),32);
        bufp->chgIData(oldp+187,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs1[7]),32);
        bufp->chgIData(oldp+188,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[0]),32);
        bufp->chgIData(oldp+189,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[1]),32);
        bufp->chgIData(oldp+190,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[2]),32);
        bufp->chgIData(oldp+191,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[3]),32);
        bufp->chgIData(oldp+192,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[4]),32);
        bufp->chgIData(oldp+193,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[5]),32);
        bufp->chgIData(oldp+194,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[6]),32);
        bufp->chgIData(oldp+195,(vlSelf->tb_gpu_top__DOT__dut__DOT__rf_rs2[7]),32);
        bufp->chgIData(oldp+196,(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data),32);
        bufp->chgIData(oldp+197,(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data),32);
    }
    bufp->chgBit(oldp+198,(vlSelf->tb_gpu_top__DOT__clk));
    bufp->chgBit(oldp+199,(vlSelf->tb_gpu_top__DOT__rst_n));
    bufp->chgIData(oldp+200,(vlSelf->tb_gpu_top__DOT__pass_count),32);
    bufp->chgIData(oldp+201,(vlSelf->tb_gpu_top__DOT__fail_count),32);
    bufp->chgBit(oldp+202,(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
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
                                                 == vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out)))))))));
}

void Vtb_gpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_gpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_gpu_top___024root*>(voidSelf);
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
