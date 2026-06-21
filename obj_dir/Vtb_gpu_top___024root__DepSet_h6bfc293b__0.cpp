// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gpu_top.h for the primary calling header

#include "Vtb_gpu_top__pch.h"
#include "Vtb_gpu_top___024root.h"

VL_ATTR_COLD void Vtb_gpu_top___024root___eval_initial__TOP(Vtb_gpu_top___024root* vlSelf);
VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0(Vtb_gpu_top___024root* vlSelf);
VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1(Vtb_gpu_top___024root* vlSelf);
VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__2(Vtb_gpu_top___024root* vlSelf);

void Vtb_gpu_top___024root___eval_initial(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial\n"); );
    // Body
    Vtb_gpu_top___024root___eval_initial__TOP(vlSelf);
    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_gpu_top__DOT__clk__0 
        = vlSelf->tb_gpu_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_gpu_top__DOT__rst_n__0 
        = vlSelf->tb_gpu_top__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_gpu_top__DOT____Vrepeat2;
    tb_gpu_top__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__wait_cycles__4__n;
    __Vtask_tb_gpu_top__DOT__wait_cycles__4__n = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__5__warp;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__5__lane;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__5__addr;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__5__expected;
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0;
    std::string __Vtask_tb_gpu_top__DOT__check_reg__5__test_name;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__5__actual;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__6__warp;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__6__lane;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__6__addr;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__6__expected;
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 0;
    std::string __Vtask_tb_gpu_top__DOT__check_reg__6__test_name;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__6__actual;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__7__warp;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__7__lane;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__7__addr;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__7__expected;
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0;
    std::string __Vtask_tb_gpu_top__DOT__check_reg__7__test_name;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__7__actual;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__8__warp;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__8__lane;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__8__addr;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__8__expected;
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0;
    std::string __Vtask_tb_gpu_top__DOT__check_reg__8__test_name;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__8__actual;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 0;
    std::string __Vtask_tb_gpu_top__DOT__load_imem__10__hex_file;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__wait_cycles__12__n;
    __Vtask_tb_gpu_top__DOT__wait_cycles__12__n = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__13__warp;
    __Vtask_tb_gpu_top__DOT__check_reg__13__warp = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__13__lane;
    __Vtask_tb_gpu_top__DOT__check_reg__13__lane = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__13__addr;
    __Vtask_tb_gpu_top__DOT__check_reg__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__13__expected;
    __Vtask_tb_gpu_top__DOT__check_reg__13__expected = 0;
    std::string __Vtask_tb_gpu_top__DOT__check_reg__13__test_name;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__13__actual;
    __Vtask_tb_gpu_top__DOT__check_reg__13__actual = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__14__warp;
    __Vtask_tb_gpu_top__DOT__check_reg__14__warp = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__14__lane;
    __Vtask_tb_gpu_top__DOT__check_reg__14__lane = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__14__addr;
    __Vtask_tb_gpu_top__DOT__check_reg__14__addr = 0;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__14__expected;
    __Vtask_tb_gpu_top__DOT__check_reg__14__expected = 0;
    std::string __Vtask_tb_gpu_top__DOT__check_reg__14__test_name;
    IData/*31:0*/ __Vtask_tb_gpu_top__DOT__check_reg__14__actual;
    __Vtask_tb_gpu_top__DOT__check_reg__14__actual = 0;
    // Body
    VL_WRITEF("--- Test 1: Single warp ALU sequence ---\n");
    VL_READMEM_N(true, 32, 1024, 0, std::string{"tb/imem_alu.hex"}
                 ,  &(vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem)
                 , 0, ~0ULL);
    VL_WRITEF("Loaded IMEM: tb/imem_alu.hex\n");
    VL_WRITEF("IMEM contents:\n  [0] = 0x%08x\n  [1] = 0x%08x\n  [2] = 0x%08x\n  [3] = 0x%08x\n  [4] = 0x%08x\n  [5] = 0x%08x\n  [6] = 0x%08x\n  [7] = 0x%08x\n",
              32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [0U],32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [1U],32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [2U],32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [3U],32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [4U],32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [5U],32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [6U],32,vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
              [7U]);
    vlSelf->tb_gpu_top__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    vlSelf->tb_gpu_top__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       43);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       43);
    __Vtask_tb_gpu_top__DOT__wait_cycles__4__n = 0x1eU;
    tb_gpu_top__DOT____Vrepeat2 = __Vtask_tb_gpu_top__DOT__wait_cycles__4__n;
    while (VL_LTS_III(32, 0U, tb_gpu_top__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_gpu_top.clk)", 
                                                           "tb/tb_gpu_top.sv", 
                                                           47);
        tb_gpu_top__DOT____Vrepeat2 = (tb_gpu_top__DOT____Vrepeat2 
                                       - (IData)(1U));
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 2U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 2U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 2U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 2U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 3U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 3U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 3U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 3U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 4U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 4U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 4U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 4U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__5__test_name = 
        std::string{"ADD"};
    __Vtask_tb_gpu_top__DOT__check_reg__5__expected = 0x21U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__addr = 5U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__lane = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__5__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__5__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__5__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__5__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__5__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__5__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__5__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__5__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__6__test_name = 
        std::string{"SUB"};
    __Vtask_tb_gpu_top__DOT__check_reg__6__expected = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__addr = 6U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__lane = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__6__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__6__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__6__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__6__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__6__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__6__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__6__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__6__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__7__test_name = 
        std::string{"AND"};
    __Vtask_tb_gpu_top__DOT__check_reg__7__expected = 0x10U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__addr = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__lane = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__7__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__7__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__7__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__7__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__7__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__7__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__7__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__7__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__8__test_name = 
        std::string{"OR"};
    __Vtask_tb_gpu_top__DOT__check_reg__8__expected = 0x11U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__addr = 8U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__lane = 7U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__8__actual = 
        ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__addr)
          ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane) 
                         | (1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                        | (2U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                       | (3U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                      | (4U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                     | (5U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                    | (6U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)) 
                   | (7U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane))
                   ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                       ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                              - (IData)(1U))))
                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                          [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                         - (IData)(1U)))]
                           : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                     ? ((0x1eU >= (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                      - (IData)(1U))))
                                         ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                        [(1U & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                        [1U][(0x1fU 
                                              & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                 - (IData)(1U)))]
                                         : 0U) : ((2U 
                                                   == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                                   [
                                                   (1U 
                                                    & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                   [2U]
                                                   [
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                       - (IData)(1U)))]
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U))))
                                                     ? 
                                                    vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                                    [
                                                    (1U 
                                                     & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                    [3U]
                                                    [
                                                    (0x1fU 
                                                     & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                        - (IData)(1U)))]
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                     ? 
                                                    ((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U))))
                                                      ? 
                                                     vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                                     [
                                                     (1U 
                                                      & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                     [4U]
                                                     [
                                                     (0x1fU 
                                                      & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                         - (IData)(1U)))]
                                                      : 0U)
                                                     : 
                                                    ((5U 
                                                      == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                      ? 
                                                     ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U))))
                                                       ? 
                                                      vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                      [
                                                      (1U 
                                                       & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                      [5U]
                                                      [
                                                      (0x1fU 
                                                       & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                          - (IData)(1U)))]
                                                       : 0U)
                                                      : 
                                                     ((6U 
                                                       == __Vtask_tb_gpu_top__DOT__check_reg__8__lane)
                                                       ? 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [6U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U)
                                                       : 
                                                      ((0x1eU 
                                                        >= 
                                                        (0x1fU 
                                                         & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                            - (IData)(1U))))
                                                        ? 
                                                       vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                       [
                                                       (1U 
                                                        & __Vtask_tb_gpu_top__DOT__check_reg__8__warp)]
                                                       [7U]
                                                       [
                                                       (0x1fU 
                                                        & (__Vtask_tb_gpu_top__DOT__check_reg__8__addr 
                                                           - (IData)(1U)))]
                                                        : 0U))))))))
                   : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__8__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__8__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__8__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__8__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    VL_WRITEF("--- Test 2: 2-warp round-robin switch ---\n");
    __Vtask_tb_gpu_top__DOT__load_imem__10__hex_file = 
        std::string{"tb/imem_2warp_v2.hex"};
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NN(__Vtask_tb_gpu_top__DOT__load_imem__10__hex_file)
                 ,  &(vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem)
                 , 0, ~0ULL);
    VL_WRITEF("Loaded IMEM: %@\n",-1,&(__Vtask_tb_gpu_top__DOT__load_imem__10__hex_file));
    vlSelf->tb_gpu_top__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       41);
    vlSelf->tb_gpu_top__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       43);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       43);
    co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_gpu_top.clk)", 
                                                       "tb/tb_gpu_top.sv", 
                                                       108);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_gpu_top.sv", 
                                       108);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc 
        = (0x2000000000ULL | (0xffffffffULL & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc));
    __Vtask_tb_gpu_top__DOT__wait_cycles__12__n = 0x28U;
    tb_gpu_top__DOT____Vrepeat2 = __Vtask_tb_gpu_top__DOT__wait_cycles__12__n;
    while (VL_LTS_III(32, 0U, tb_gpu_top__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_h4954a85e__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_gpu_top.clk)", 
                                                           "tb/tb_gpu_top.sv", 
                                                           47);
        tb_gpu_top__DOT____Vrepeat2 = (tb_gpu_top__DOT____Vrepeat2 
                                       - (IData)(1U));
    }
    __Vtask_tb_gpu_top__DOT__check_reg__13__test_name = 
        std::string{"W0_ADDI"};
    __Vtask_tb_gpu_top__DOT__check_reg__13__expected = 0xaU;
    __Vtask_tb_gpu_top__DOT__check_reg__13__addr = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__13__lane = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__13__warp = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__13__actual 
        = ((0U == __Vtask_tb_gpu_top__DOT__check_reg__13__addr)
            ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane) 
                           | (1U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)) 
                          | (2U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)) 
                         | (3U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)) 
                        | (4U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)) 
                       | (5U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)) 
                      | (6U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)) 
                     | (7U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane))
                     ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)
                         ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                - (IData)(1U))))
                             ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                            [(1U & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                            [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                           - (IData)(1U)))]
                             : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)
                                       ? ((0x1eU >= 
                                           (0x1fU & 
                                            (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                                          [1U][(0x1fU 
                                                & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                   - (IData)(1U)))]
                                           : 0U) : 
                                      ((2U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)
                                        ? ((0x1eU >= 
                                            (0x1fU 
                                             & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                - (IData)(1U))))
                                            ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                           [(1U & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                                           [2U][(0x1fU 
                                                 & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                    - (IData)(1U)))]
                                            : 0U) : 
                                       ((3U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)
                                         ? ((0x1eU 
                                             >= (0x1fU 
                                                 & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                    - (IData)(1U))))
                                             ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                            [(1U & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                                            [3U][(0x1fU 
                                                  & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                     - (IData)(1U)))]
                                             : 0U) : 
                                        ((4U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)
                                          ? ((0x1eU 
                                              >= (0x1fU 
                                                  & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                     - (IData)(1U))))
                                              ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                             [(1U & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                                             [4U][(0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                      - (IData)(1U)))]
                                              : 0U)
                                          : ((5U == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                 [(1U 
                                                   & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                                                 [5U]
                                                 [(0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : ((6U 
                                                  == __Vtask_tb_gpu_top__DOT__check_reg__13__lane)
                                                  ? 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                  [
                                                  (1U 
                                                   & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                                                  [6U]
                                                  [
                                                  (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                      - (IData)(1U)))]
                                                   : 0U)
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                  [
                                                  (1U 
                                                   & __Vtask_tb_gpu_top__DOT__check_reg__13__warp)]
                                                  [7U]
                                                  [
                                                  (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__13__addr 
                                                      - (IData)(1U)))]
                                                   : 0U))))))))
                     : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__13__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__13__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__13__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__13__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__13__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    __Vtask_tb_gpu_top__DOT__check_reg__14__test_name = 
        std::string{"W1_ADDI"};
    __Vtask_tb_gpu_top__DOT__check_reg__14__expected = 0x14U;
    __Vtask_tb_gpu_top__DOT__check_reg__14__addr = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__14__lane = 0U;
    __Vtask_tb_gpu_top__DOT__check_reg__14__warp = 1U;
    __Vtask_tb_gpu_top__DOT__check_reg__14__actual 
        = ((0U == __Vtask_tb_gpu_top__DOT__check_reg__14__addr)
            ? 0U : (((((((((0U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane) 
                           | (1U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)) 
                          | (2U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)) 
                         | (3U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)) 
                        | (4U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)) 
                       | (5U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)) 
                      | (6U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)) 
                     | (7U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane))
                     ? ((0U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)
                         ? ((0x1eU >= (0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                - (IData)(1U))))
                             ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                            [(1U & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                            [0U][(0x1fU & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                           - (IData)(1U)))]
                             : 0U) : ((1U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)
                                       ? ((0x1eU >= 
                                           (0x1fU & 
                                            (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                             - (IData)(1U))))
                                           ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs
                                          [(1U & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                                          [1U][(0x1fU 
                                                & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                   - (IData)(1U)))]
                                           : 0U) : 
                                      ((2U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)
                                        ? ((0x1eU >= 
                                            (0x1fU 
                                             & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                - (IData)(1U))))
                                            ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs
                                           [(1U & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                                           [2U][(0x1fU 
                                                 & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                    - (IData)(1U)))]
                                            : 0U) : 
                                       ((3U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)
                                         ? ((0x1eU 
                                             >= (0x1fU 
                                                 & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                    - (IData)(1U))))
                                             ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs
                                            [(1U & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                                            [3U][(0x1fU 
                                                  & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                     - (IData)(1U)))]
                                             : 0U) : 
                                        ((4U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)
                                          ? ((0x1eU 
                                              >= (0x1fU 
                                                  & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                     - (IData)(1U))))
                                              ? vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs
                                             [(1U & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                                             [4U][(0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                      - (IData)(1U)))]
                                              : 0U)
                                          : ((5U == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs
                                                 [(1U 
                                                   & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                                                 [5U]
                                                 [(0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : ((6U 
                                                  == __Vtask_tb_gpu_top__DOT__check_reg__14__lane)
                                                  ? 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs
                                                  [
                                                  (1U 
                                                   & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                                                  [6U]
                                                  [
                                                  (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                      - (IData)(1U)))]
                                                   : 0U)
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs
                                                  [
                                                  (1U 
                                                   & __Vtask_tb_gpu_top__DOT__check_reg__14__warp)]
                                                  [7U]
                                                  [
                                                  (0x1fU 
                                                   & (__Vtask_tb_gpu_top__DOT__check_reg__14__addr 
                                                      - (IData)(1U)))]
                                                   : 0U))))))))
                     : 0xdeadbeefU));
    if ((__Vtask_tb_gpu_top__DOT__check_reg__14__actual 
         == __Vtask_tb_gpu_top__DOT__check_reg__14__expected)) {
        VL_WRITEF("PASS [%@] warp=%0d lane=%0d x%0d = 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__14__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__actual);
        vlSelf->tb_gpu_top__DOT__pass_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__pass_count);
    } else {
        VL_WRITEF("FAIL [%@] warp=%0d lane=%0d x%0d = 0x%08x, expected 0x%08x\n",
                  -1,&(__Vtask_tb_gpu_top__DOT__check_reg__14__test_name),
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__warp,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__lane,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__addr,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__actual,
                  32,__Vtask_tb_gpu_top__DOT__check_reg__14__expected);
        vlSelf->tb_gpu_top__DOT__fail_count = ((IData)(1U) 
                                               + vlSelf->tb_gpu_top__DOT__fail_count);
    }
    VL_WRITEF("=============================\nResults: %0d PASS, %0d FAIL\n=============================\n",
              32,vlSelf->tb_gpu_top__DOT__pass_count,
              32,vlSelf->tb_gpu_top__DOT__fail_count);
    if ((0U == vlSelf->tb_gpu_top__DOT__fail_count)) {
        VL_WRITEF("ALL TESTS PASSED\n");
    } else {
        VL_WRITEF("FAILURES DETECTED\n");
    }
    VL_FINISH_MT("tb/tb_gpu_top.sv", 130, "");
}

VL_INLINE_OPT VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x989680ULL, 
                                       nullptr, "tb/tb_gpu_top.sv", 
                                       355);
    VL_WRITEF("TIMEOUT\n");
    VL_FINISH_MT("tb/tb_gpu_top.sv", 357, "");
}

VL_INLINE_OPT VlCoroutine Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__2(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_gpu_top.sv", 
                                           13);
        vlSelf->tb_gpu_top__DOT__clk = (1U & (~ (IData)(vlSelf->tb_gpu_top__DOT__clk)));
    }
}

void Vtb_gpu_top___024root___eval_act(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_gpu_top___024root___nba_sequent__TOP__0(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0 = 0;
    CData/*0:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v1;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v2;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v2 = 0;
    // Body
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v2 = 0U;
    vlSelf->__Vdly__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr 
        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr;
    if ((1U & (~ (IData)(vlSelf->tb_gpu_top__DOT__rst_n)))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk3__DOT__i = 2U;
    }
    if (vlSelf->tb_gpu_top__DOT__rst_n) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk2__DOT__i = 2U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__unnamedblk4__DOT__i = 2U;
        __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0 
            = (1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall));
        __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0 = 1U;
        __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v1 
            = (1U & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall) 
                     >> 1U));
        if ((1U & (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall) 
                    >> (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr)) 
                   | (~ (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready))))) {
            vlSelf->__Vdly__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__next_warp;
        }
        if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen))) {
            vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc 
                = ((0xffffffff00000000ULL & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc) 
                   | (IData)((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next)));
        }
        if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__pc_wen))) {
            vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc 
                = ((0xffffffffULL & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc) 
                   | ((QData)((IData)((IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__pc_next 
                                               >> 0x20U)))) 
                      << 0x20U));
        }
    } else {
        __Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v2 = 1U;
        vlSelf->__Vdly__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc = 0ULL;
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__7__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__6__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__5__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__4__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__3__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__2__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__1__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__dmem_wen_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__7__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__6__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__5__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__4__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__3__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__2__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__1__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__dmem_ren_r 
        = ((IData)(vlSelf->tb_gpu_top__DOT__rst_n) 
           && ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
               & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read)));
    if ((1U & ((~ (IData)(vlSelf->tb_gpu_top__DOT__rst_n)) 
               | (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken)))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_addr_out = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_addr_out = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read = 0U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)))))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_branch 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__branch;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__reg_write;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_addr_out 
            = (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                        >> 0xfU));
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_addr_out 
            = (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                        >> 0x14U));
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_write 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_write;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_read 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_read;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state[0U] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v0;
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state[1U] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v1;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state__v2) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state[0U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_state[1U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_gpu_top___024root___nba_sequent__TOP__1(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 = 0;
    // Body
    VL_WRITEF("RR: rr_ptr=%0# next=%0# any_ready=%0b ws0=%0b ws1=%0b\n",
              1,vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr,
              1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__next_warp),
              1,vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__any_ready,
              1,(1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall)),
              1,(1U & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall) 
                       >> 1U)));
    if (VL_UNLIKELY((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall)))) {
        VL_WRITEF("WSTALL: warp_stall=%02b active_warp=%0# dmem_pending=%0b\n",
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  1,(0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)));
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall)))) {
        VL_WRITEF("WSTALL: warp_stall=%02b active_warp=%0# dmem_pending=%0b\n",
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  1,(0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)));
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall)))) {
        VL_WRITEF("WSTALL: warp_stall=%02b active_warp=%0# dmem_pending=%0b\n",
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  1,(0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)));
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall)))) {
        VL_WRITEF("WSTALL: warp_stall=%02b active_warp=%0# dmem_pending=%0b\n",
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  1,(0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)));
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__rst_n)) {
        VL_WRITEF("SCHED: valid=%0# active_warp=%0# stall=%0b dmem_ren=%0b\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  8,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren));
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__rst_n)) {
        VL_WRITEF("SCHED: valid=%0# active_warp=%0# stall=%0b dmem_ren=%0b\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  8,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren));
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__rst_n)) {
        VL_WRITEF("SCHED: valid=%0# active_warp=%0# stall=%0b dmem_ren=%0b\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  8,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren));
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__rst_n)) {
        VL_WRITEF("SCHED: valid=%0# active_warp=%0# stall=%0b dmem_ren=%0b\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid,
                  1,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr),
                  2,vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall,
                  8,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren));
    }
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 = 0U;
    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en) 
                     & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr))))) {
        VL_WRITEF("RF_WR: warp=%0# lane=0 rd=x%0# data=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id,
                  5,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr),
                  32,((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                       ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]
                       : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                           ? ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                           : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result)));
    }
    if (VL_UNLIKELY((0U != (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                     >> 0xfU))))) {
        VL_WRITEF("RF_RD: warp=%0# lane=0 rs1_addr=x%0# rs1_data=0x%08x regs[0][0][1]=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp,
                  5,(0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                              >> 0xfU)),32,vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                  [0U][0U][0U]);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en) 
                     & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr))))) {
        VL_WRITEF("RF_WR: warp=%0# lane=0 rd=x%0# data=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id,
                  5,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr),
                  32,((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                       ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]
                       : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                           ? ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                           : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result)));
    }
    if (VL_UNLIKELY((0U != (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                     >> 0xfU))))) {
        VL_WRITEF("RF_RD: warp=%0# lane=0 rs1_addr=x%0# rs1_data=0x%08x regs[0][0][1]=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp,
                  5,(0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                              >> 0xfU)),32,vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                  [0U][0U][0U]);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en) 
                     & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr))))) {
        VL_WRITEF("RF_WR: warp=%0# lane=0 rd=x%0# data=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id,
                  5,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr),
                  32,((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                       ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]
                       : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                           ? ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                           : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result)));
    }
    if (VL_UNLIKELY((0U != (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                     >> 0xfU))))) {
        VL_WRITEF("RF_RD: warp=%0# lane=0 rs1_addr=x%0# rs1_data=0x%08x regs[0][0][1]=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp,
                  5,(0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                              >> 0xfU)),32,vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                  [0U][0U][0U]);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en) 
                     & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr))))) {
        VL_WRITEF("RF_WR: warp=%0# lane=0 rd=x%0# data=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id,
                  5,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr),
                  32,((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                       ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]
                       : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                           ? ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                           : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result)));
    }
    if (VL_UNLIKELY((0U != (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                     >> 0xfU))))) {
        VL_WRITEF("RF_RD: warp=%0# lane=0 rs1_addr=x%0# rs1_data=0x%08x regs[0][0][1]=0x%08x\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp,
                  5,(0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                              >> 0xfU)),32,vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs
                  [0U][0U][0U]);
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en)) {
        VL_WRITEF("WB: warp=%0# rd=x%0# data=0x%08x @ t=%0t\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id,
                  5,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr),
                  32,((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                       ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]
                       : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                           ? ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                           : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result)),
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid)) {
        VL_WRITEF("IF: warp=%0# pc=0x%08x instr=0x%08x @ t=%0t\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en)) {
        VL_WRITEF("WB: warp=%0# rd=x%0# data=0x%08x @ t=%0t\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id,
                  5,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr),
                  32,((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg)
                       ? vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U]
                       : ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal)
                           ? ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc)
                           : vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result)),
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid)) {
        VL_WRITEF("IF: warp=%0# pc=0x%08x instr=0x%08x @ t=%0t\n",
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr,
                  64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                     & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr))))) {
        VL_WRITEF("EX: rd=x%0# rs1=0x%08x rs2=0x%08x imm=0x%08x alu_op=%0# alu_src=%0# result=0x%08x\n",
                  5,vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm,
                  4,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op),
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid) 
                     & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr))))) {
        VL_WRITEF("EX: rd=x%0# rs1=0x%08x rs2=0x%08x imm=0x%08x alu_op=%0# alu_src=%0# result=0x%08x\n",
                  5,vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm,
                  4,(IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op),
                  1,vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src,
                  32,vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result);
    }
    if (((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en) 
         & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr)))) {
        if (vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg) {
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U];
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U];
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U];
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U];
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U];
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U];
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U];
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U];
        } else if (vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal) {
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = ((IData)(4U) + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
        } else {
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
            vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_result;
        }
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                                - (IData)(1U))))) {
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
            __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT____Vlvbound_hec9a31ed__0;
            __Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 
                = (0x1fU & ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr) 
                            - (IData)(1U)));
            __Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id;
        }
    }
    if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [0U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [0U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [0U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [0U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [0U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [0U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [0U];
        }
    }
    if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [1U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [1U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [1U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [1U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [1U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [1U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [1U];
        }
    }
    if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [2U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [2U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [2U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [2U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [2U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [2U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [2U];
        }
    }
    if ((8U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [3U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [3U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [3U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [3U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [3U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [3U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [3U];
        }
    }
    if ((0x10U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [4U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [4U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [4U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [4U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [4U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [4U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [4U];
        }
    }
    if ((0x20U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [5U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [5U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [5U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [5U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [5U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [5U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [5U];
        }
    }
    if ((0x40U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [6U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [6U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [6U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [6U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [6U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [6U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [6U];
        }
    }
    if ((0x80U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_wen))) {
        if ((0U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 = 0x18U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [7U];
                } else {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 
                        = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [7U];
                }
            } else if ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 = 8U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [7U];
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 
                    = (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [7U];
            }
        } else if ((1U == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
            if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                    vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 
                        = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                    vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 = 1U;
                    vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 = 0x10U;
                    vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [7U];
                }
            } else {
                vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 
                    = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
                vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 = 1U;
                vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 = 0U;
                vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                    [7U];
            }
        } else {
            vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out;
            vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55 = 1U;
            vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                [7U];
        }
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0][7U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__7__KET____DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0][6U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__6__KET____DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0][5U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__5__KET____DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0][4U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__4__KET____DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0][3U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__3__KET____DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0][2U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__2__KET____DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0][1U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__1__KET____DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs[__Vdlyvdim0__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0][0U][__Vdlyvdim2__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__tb_gpu_top__DOT__dut__DOT__regfiles__BRA__0__KET____DOT__u_regfile__DOT__regs__v0;
    }
}

VL_INLINE_OPT void Vtb_gpu_top___024root___nba_sequent__TOP__2(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_sequent__TOP__2\n"); );
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
    if (vlSelf->tb_gpu_top__DOT__rst_n) {
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)))))) {
            vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid 
                = vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid;
        }
        if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [0U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [0U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [0U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [0U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [0U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [0U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [0U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [0U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [0U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [0U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [0U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [0U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [0U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [0U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [0U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [0U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [0U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [0U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [0U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [0U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[0U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [0U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [0U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [0U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [0U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [0U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [0U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [0U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [0U]]))));
            }
        }
        if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [1U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [1U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [1U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [1U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [1U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [1U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [1U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [1U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [1U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [1U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [1U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [1U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [1U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [1U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [1U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [1U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [1U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [1U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [1U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [1U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[1U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [1U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [1U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [1U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [1U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [1U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [1U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [1U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [1U]]))));
            }
        }
        if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [2U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [2U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [2U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [2U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [2U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [2U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [2U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [2U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [2U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [2U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [2U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [2U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [2U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [2U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [2U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [2U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [2U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [2U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [2U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [2U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[2U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [2U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [2U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [2U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [2U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [2U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [2U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [2U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [2U]]))));
            }
        }
        if ((8U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [3U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [3U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [3U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [3U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [3U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [3U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [3U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [3U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [3U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [3U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [3U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [3U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [3U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [3U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [3U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [3U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [3U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [3U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [3U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [3U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[3U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [3U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [3U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [3U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [3U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [3U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [3U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [3U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [3U]]))));
            }
        }
        if ((0x10U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [4U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [4U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [4U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [4U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [4U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [4U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [4U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [4U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [4U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [4U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [4U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [4U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [4U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [4U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [4U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [4U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [4U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [4U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [4U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [4U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[4U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [4U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [4U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [4U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [4U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [4U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [4U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [4U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [4U]]))));
            }
        }
        if ((0x20U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [5U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [5U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [5U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [5U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [5U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [5U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [5U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [5U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [5U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [5U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [5U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [5U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [5U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [5U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [5U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [5U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [5U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [5U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [5U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [5U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[5U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [5U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [5U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [5U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [5U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [5U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [5U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [5U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [5U]]))));
            }
        }
        if ((0x40U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [6U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [6U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [6U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [6U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [6U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [6U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [6U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [6U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [6U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [6U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [6U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [6U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [6U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [6U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [6U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [6U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [6U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [6U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [6U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [6U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[6U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [6U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [6U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [6U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [6U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [6U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [6U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [6U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [6U]]))));
            }
        }
        if ((0x80U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) {
            if ((4U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                        = vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                        [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                        [7U]];
                } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                        if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                            vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                                = (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [7U]] >> 0x10U);
                        }
                    } else {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                            = (0xffffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                               [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                               [7U]]);
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                        = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])
                            ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])
                                ? (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [7U]] >> 0x18U) : 
                               (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [7U]] >> 0x10U)))
                            : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])
                                ? (0xffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [7U]] >> 8U))
                                : (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                   [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                   [7U]])));
                }
            } else if ((2U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                    = ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))
                        ? vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [7U]] : vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                       [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                       [7U]]);
            } else if ((1U & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3))) {
                if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                    if ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])) {
                        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                            = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [7U]] >> 0x1fU))) 
                                << 0x10U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                             [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                             [7U]] 
                                             >> 0x10U));
                    }
                } else {
                    vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                        = (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                              [7U][
                                              vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                              [7U]] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                         [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                         [7U]]));
                }
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] 
                    = ((2U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])
                        ? ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])
                            ? (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                            [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                            [7U]] >> 0x1fU))) 
                                << 8U) | (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [7U]] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [7U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [7U]] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [7U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [7U]] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_addr[7U])
                            ? (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [7U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [7U]] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                   [7U]
                                                   [
                                                   vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                   [7U]] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                                  [7U]
                                                  [
                                                  vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                                  [7U]] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                                          [7U][vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__word_addr
                                          [7U]]))));
            }
        }
    } else {
        vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[0U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[1U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[2U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[3U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[4U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[5U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[6U] = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_rdata[7U] = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->tb_gpu_top__DOT__rst_n)) 
               | (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_taken)))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3 = 0U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)))))) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out 
            = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs1_data;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_op;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__alu_src;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out 
            = vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__regfiles__BRA__0__KET____DOT__u_regfile__rs2_data;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_mem_to_reg 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__mem_to_reg;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_rd_addr 
            = (0x1fU & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                        >> 7U));
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_warp_id 
            = vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_jal = 
            (0x6fU == (0x7fU & vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr));
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc = vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc;
        vlSelf->tb_gpu_top__DOT__dut__DOT__id_funct3 
            = (7U & (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                     >> 0xcU));
    }
    if (vlSelf->tb_gpu_top__DOT__rst_n) {
        if ((1U & (~ (IData)((0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren)))))) {
            vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp 
                = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid) 
                   && (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr));
            if (vlSelf->tb_gpu_top__DOT__dut__DOT__sched_valid) {
                vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc;
                vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                    = vlSelf->tb_gpu_top__DOT__dut__DOT__u_fetch__DOT__imem
                    [(0x3ffU & (vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc 
                                >> 2U))];
            } else {
                vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc = 0U;
                vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr = 0x13U;
            }
        }
    } else {
        vlSelf->tb_gpu_top__DOT__dut__DOT__if_warp = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__if_pc = 0U;
        vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr = 0x13U;
    }
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellinp__regfiles__BRA__0__KET____DOT__u_regfile__wr_en 
        = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_reg_write) 
           & (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__if_valid));
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
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_b 
        = ((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_src)
            ? vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm
            : vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs2_out);
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
    vlSelf->tb_gpu_top__DOT__dut__DOT____Vcellout__lanes__BRA__0__KET____DOT__u_lane__branch_target 
        = (vlSelf->tb_gpu_top__DOT__dut__DOT__id_imm 
           + vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc);
    vlSelf->tb_gpu_top__DOT__dut__DOT__lanes__BRA__0__KET____DOT__u_lane__DOT__alu_in_a 
        = ((0xbU == (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__id_alu_op))
            ? vlSelf->tb_gpu_top__DOT__dut__DOT__id_pc
            : vlSelf->tb_gpu_top__DOT__dut__DOT__id_rs1_out);
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr 
        = vlSelf->__Vdly__tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr;
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
    vlSelf->tb_gpu_top__DOT__dut__DOT__sched_active_pc 
        = (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__warp_pc 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr), 5U))));
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
    vlSelf->tb_gpu_top__DOT__dut__DOT__warp_stall = 
        ((((IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr) 
           & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))) 
          << 1U) | ((~ (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__u_scheduler__DOT__rr_ptr)) 
                    & (0U != (IData)(vlSelf->tb_gpu_top__DOT__dut__DOT__dmem_ren))));
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
    vlSelf->tb_gpu_top__DOT__dut__DOT__u_decode__DOT__imm_i 
        = (((- (IData)((vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                        >> 0x1fU))) << 0xcU) | (vlSelf->tb_gpu_top__DOT__dut__DOT__if_instr 
                                                >> 0x14U));
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

VL_INLINE_OPT void Vtb_gpu_top___024root___nba_sequent__TOP__3(Vtb_gpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_gpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gpu_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v2))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v3))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v4))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v5))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[0U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v6;
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v7))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v8))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v9))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v10))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v11))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v12))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[1U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v13;
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v14))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v15))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v16))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v17))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v18))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v19))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[2U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v20;
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v21))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v22))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v23))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v24))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v25))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v26))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[3U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v27;
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v28))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v29))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v30))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v31))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v32))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v33))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[4U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v34;
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v35))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v36))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v37))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v38))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v39))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v40))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[5U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v41;
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v42))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v43))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v44))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v45))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v46))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v47))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[6U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v48;
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v49))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v50))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v51))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v52))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v53))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54] 
            = (((~ ((IData)(0xffffU) << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54))) 
                & vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem
                [7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54) 
                                   << (IData)(vlSelf->__Vdlyvlsb__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v54))));
    }
    if (vlSelf->__Vdlyvset__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55) {
        vlSelf->tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem[7U][vlSelf->__Vdlyvdim1__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55] 
            = vlSelf->__Vdlyvval__tb_gpu_top__DOT__dut__DOT__u_scratchpad__DOT__mem__v55;
    }
}
