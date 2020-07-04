// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_FontRom.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VVGATest_FontRom) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VVGATest_FontRom::__Vconfigure(VVGATest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VVGATest_FontRom::~VVGATest_FontRom() {
}

void VVGATest_FontRom::_initial__TOP__VGATest__vga_text__fontrom__2(VVGATest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VVGATest_FontRom::_initial__TOP__VGATest__vga_text__fontrom__2\n"); );
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    __Vtemp1[0U] = 0x2e6d6966U;
    __Vtemp1[1U] = 0x5f726f6dU;
    __Vtemp1[2U] = 0x666f6e74U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 , vlSymsp->TOP__VGATest__vga_text__fontrom.memory
                 , 0U, 0xfffU);
}

void VVGATest_FontRom::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VVGATest_FontRom::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__addr = VL_RAND_RESET_I(12);
    __PVT__dout = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
            memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
}
