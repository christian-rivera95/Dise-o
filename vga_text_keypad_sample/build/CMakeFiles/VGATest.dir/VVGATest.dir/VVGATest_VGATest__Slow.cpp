// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_VGATest.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VVGATest_VGATest) {
    VL_CELL(kps_fsm, VVGATest_KeypadSampleFSM);
    VL_CELL(vga_text, VVGATest_VGATextCard);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VVGATest_VGATest::__Vconfigure(VVGATest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VVGATest_VGATest::~VVGATest_VGATest() {
}

void VVGATest_VGATest::_settle__TOP__VGATest__3(VVGATest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVGATest_VGATest::_settle__TOP__VGATest__3\n"); );
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__VGATest.vga_we = 1U;
}

void VVGATest_VGATest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVGATest_VGATest::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    keypad = VL_RAND_RESET_I(8);
    vga_we = VL_RAND_RESET_I(1);
    __PVT__ms_counter__DOT__ms_count = VL_RAND_RESET_I(32);
}
