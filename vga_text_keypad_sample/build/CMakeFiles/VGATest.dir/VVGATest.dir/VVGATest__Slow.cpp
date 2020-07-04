// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VVGATest) {
    VVGATest__Syms* __restrict vlSymsp = __VlSymsp = new VVGATest__Syms(this, name());
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(VGATest, VVGATest_VGATest);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VVGATest::__Vconfigure(VVGATest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VVGATest::~VVGATest() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VVGATest::_eval_initial(VVGATest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGATest::_eval_initial\n"); );
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__VGATest__vga_text____PVT__vclk 
        = vlSymsp->TOP__VGATest__vga_text.__PVT__vclk;
    vlSymsp->TOP__VGATest__vga_text__fontrom._initial__TOP__VGATest__vga_text__fontrom__2(vlSymsp);
    vlSymsp->TOP__VGATest__vga_text__palrom._initial__TOP__VGATest__vga_text__palrom__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VVGATest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGATest::final\n"); );
    // Variables
    VVGATest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVGATest::_eval_settle(VVGATest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGATest::_eval_settle\n"); );
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__VGATest._settle__TOP__VGATest__3(vlSymsp);
}

void VVGATest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVGATest::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    keypad = VL_RAND_RESET_I(8);
}
