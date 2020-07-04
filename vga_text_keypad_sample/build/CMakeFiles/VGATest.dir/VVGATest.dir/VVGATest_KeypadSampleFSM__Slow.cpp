// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_KeypadSampleFSM.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VVGATest_KeypadSampleFSM) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VVGATest_KeypadSampleFSM::__Vconfigure(VVGATest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VVGATest_KeypadSampleFSM::~VVGATest_KeypadSampleFSM() {
}

void VVGATest_KeypadSampleFSM::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VVGATest_KeypadSampleFSM::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__timer = VL_RAND_RESET_I(32);
    __PVT__keypad = VL_RAND_RESET_I(8);
    __PVT__vga_addr = VL_RAND_RESET_I(12);
    __PVT__vga_we = VL_RAND_RESET_I(1);
    __PVT__vga_data = VL_RAND_RESET_I(16);
    cs = VL_RAND_RESET_I(6);
    __PVT__ns = VL_RAND_RESET_I(6);
    __PVT__wb = VL_RAND_RESET_I(4);
    __PVT__nwb = VL_RAND_RESET_I(4);
    row = VL_RAND_RESET_I(7);
    col = VL_RAND_RESET_I(7);
    __PVT__meteor1Row = VL_RAND_RESET_I(7);
    __PVT__meteor1Col = VL_RAND_RESET_I(7);
    __PVT__meteor2Row = VL_RAND_RESET_I(7);
    __PVT__meteor2Col = VL_RAND_RESET_I(7);
    __PVT__meteor3Row = VL_RAND_RESET_I(7);
    __PVT__meteor3Col = VL_RAND_RESET_I(7);
    __PVT__meteor4Row = VL_RAND_RESET_I(7);
    __PVT__meteor4Col = VL_RAND_RESET_I(7);
    vga_addr_reg = VL_RAND_RESET_I(12);
    __PVT__vga_addr_meteor1 = VL_RAND_RESET_I(12);
    __PVT__vga_addr_meteor2 = VL_RAND_RESET_I(12);
    __PVT__vga_addr_meteor3 = VL_RAND_RESET_I(12);
    __PVT__delay = VL_RAND_RESET_I(32);
    __Vdly__vga_addr_reg = VL_RAND_RESET_I(12);
}
