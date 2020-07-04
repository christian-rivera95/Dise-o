// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_RomColorPalette.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VVGATest_RomColorPalette) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VVGATest_RomColorPalette::__Vconfigure(VVGATest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VVGATest_RomColorPalette::~VVGATest_RomColorPalette() {
}

void VVGATest_RomColorPalette::_initial__TOP__VGATest__vga_text__palrom__1(VVGATest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VVGATest_RomColorPalette::_initial__TOP__VGATest__vga_text__palrom__1\n"); );
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[0U] = 0U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[1U] = 2U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[2U] = 0x14U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[3U] = 0x16U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[4U] = 0xa0U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[5U] = 0xa2U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[6U] = 0xa8U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[7U] = 0xb6U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[8U] = 0x49U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[9U] = 0x4bU;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[0xaU] = 0x5dU;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[0xbU] = 0x5fU;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[0xcU] = 0xe9U;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[0xdU] = 0xebU;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[0xeU] = 0xfdU;
    vlSymsp->TOP__VGATest__vga_text__palrom.memory[0xfU] = 0xffU;
}

void VVGATest_RomColorPalette::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VVGATest_RomColorPalette::_ctor_var_reset\n"); );
    // Body
    __PVT__addr1 = VL_RAND_RESET_I(4);
    __PVT__addr2 = VL_RAND_RESET_I(4);
    __PVT__color1 = VL_RAND_RESET_I(8);
    __PVT__color2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
}
