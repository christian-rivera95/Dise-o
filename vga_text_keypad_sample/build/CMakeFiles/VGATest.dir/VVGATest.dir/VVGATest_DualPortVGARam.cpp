// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVGATest.h for the primary calling header

#include "VVGATest_DualPortVGARam.h"
#include "VVGATest__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VVGATest_DualPortVGARam::__Vdpiimwrap_updateVGA_TOP__VGATest__vga_text__framebuff(IData/*31:0*/ addr, IData/*31:0*/ write_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VVGATest_DualPortVGARam::__Vdpiimwrap_updateVGA_TOP__VGATest__vga_text__framebuff\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int write_data__Vcvt;
    write_data__Vcvt = write_data;
    updateVGA(addr__Vcvt, write_data__Vcvt);
}

VL_INLINE_OPT void VVGATest_DualPortVGARam::_sequent__TOP__VGATest__vga_text__framebuff__2(VVGATest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VVGATest_DualPortVGARam::_sequent__TOP__VGATest__vga_text__framebuff__2\n"); );
    VVGATest* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__memory__v0;
    SData/*11:0*/ __Vdlyvdim0__memory__v0;
    SData/*15:0*/ __Vdlyvval__memory__v0;
    // Body
    __Vdlyvset__memory__v0 = 0U;
    if (vlSymsp->TOP__VGATest.vga_we) {
        vlSymsp->TOP__VGATest__vga_text__framebuff.__Vdpiimwrap_updateVGA_TOP__VGATest__vga_text__framebuff(vlSymsp->TOP__VGATest__kps_fsm.vga_addr_reg, (IData)(vlSymsp->TOP__VGATest__kps_fsm.__PVT__vga_data));
        vlSymsp->TOP__VGATest__vga_text__framebuff.__PVT__read_data1 
            = vlSymsp->TOP__VGATest__vga_text__framebuff.memory
            [vlSymsp->TOP__VGATest__kps_fsm.vga_addr_reg];
        __Vdlyvval__memory__v0 = vlSymsp->TOP__VGATest__kps_fsm.__PVT__vga_data;
        __Vdlyvset__memory__v0 = 1U;
        __Vdlyvdim0__memory__v0 = vlSymsp->TOP__VGATest__kps_fsm.vga_addr_reg;
    }
    if (__Vdlyvset__memory__v0) {
        vlSymsp->TOP__VGATest__vga_text__framebuff.memory[__Vdlyvdim0__memory__v0] 
            = __Vdlyvval__memory__v0;
    }
}
