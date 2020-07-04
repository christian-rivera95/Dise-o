// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_VGATest.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VVGATest_VGATest::__Vdpiimwrap_ms_counter__DOT__millis_TOP__VGATest(IData/*31:0*/ (&millis__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVGATest_VGATest::__Vdpiimwrap_ms_counter__DOT__millis_TOP__VGATest\n"); );
    // Body
    int millis__Vfuncrtn__Vcvt;
    millis__Vfuncrtn__Vcvt = millis();
    millis__Vfuncrtn = millis__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VVGATest_VGATest::_sequent__TOP__VGATest__2(VVGATest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVGATest_VGATest::_sequent__TOP__VGATest__2\n"); );
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__VGATest.__PVT__ms_counter__DOT__ms_count 
        = 
    // $c function at verilog/vga/MillisCounter.v:26:21
millis()    
    ;
}
