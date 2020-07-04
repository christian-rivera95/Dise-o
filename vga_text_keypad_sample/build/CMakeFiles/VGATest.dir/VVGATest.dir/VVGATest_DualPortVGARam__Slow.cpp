// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_DualPortVGARam.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VVGATest_DualPortVGARam) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VVGATest_DualPortVGARam::__Vconfigure(VVGATest__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

VVGATest_DualPortVGARam::~VVGATest_DualPortVGARam() {
}

void VVGATest_DualPortVGARam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VVGATest_DualPortVGARam::_ctor_var_reset\n"); );
    // Body
    __PVT__clk1 = VL_RAND_RESET_I(1);
    __PVT__write_en = VL_RAND_RESET_I(1);
    __PVT__addr1 = VL_RAND_RESET_I(12);
    __PVT__write_data = VL_RAND_RESET_I(16);
    __PVT__read_data1 = VL_RAND_RESET_I(16);
    __PVT__clk2 = VL_RAND_RESET_I(1);
    __PVT__addr2 = VL_RAND_RESET_I(12);
    __PVT__read_data2 = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
            memory[__Vi0] = VL_RAND_RESET_I(16);
    }}
}
