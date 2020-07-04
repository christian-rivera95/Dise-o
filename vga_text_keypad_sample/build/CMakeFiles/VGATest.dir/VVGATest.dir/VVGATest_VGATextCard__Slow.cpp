// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_VGATextCard.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VVGATest_VGATextCard) {
    VL_CELL(palrom, VVGATest_RomColorPalette);
    VL_CELL(framebuff, VVGATest_DualPortVGARam);
    VL_CELL(fontrom, VVGATest_FontRom);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VVGATest_VGATextCard::__Vconfigure(VVGATest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VVGATest_VGATextCard::~VVGATest_VGATextCard() {
}

void VVGATest_VGATextCard::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VVGATest_VGATextCard::_ctor_var_reset\n"); );
    // Body
    __PVT__vclk = VL_RAND_RESET_I(1);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__en = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(1);
    __PVT__addr = VL_RAND_RESET_I(12);
    __PVT__wd = VL_RAND_RESET_I(16);
    __PVT__rd = VL_RAND_RESET_I(16);
    __PVT__r = VL_RAND_RESET_I(3);
    __PVT__g = VL_RAND_RESET_I(3);
    __PVT__b = VL_RAND_RESET_I(2);
    __PVT__hs = VL_RAND_RESET_I(1);
    __PVT__vs = VL_RAND_RESET_I(1);
}
