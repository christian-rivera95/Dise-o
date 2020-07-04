// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVGATest.h for the primary calling header

#ifndef _VVGATEST_DUALPORTVGARAM_H_
#define _VVGATEST_DUALPORTVGARAM_H_  // guard

#include "verilated_heavy.h"
#include "VVGATest__Dpi.h"

//==========

class VVGATest__Syms;

//----------

VL_MODULE(VVGATest_DualPortVGARam) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk1,0,0);
    VL_IN8(__PVT__clk2,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN16(__PVT__addr1,11,0);
    VL_IN16(__PVT__write_data,15,0);
    VL_OUT16(__PVT__read_data1,15,0);
    VL_IN16(__PVT__addr2,11,0);
    VL_OUT16(__PVT__read_data2,15,0);
    
    // LOCAL SIGNALS
    SData/*15:0*/ memory[4096];
    
    // INTERNAL VARIABLES
  private:
    VVGATest__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGATest_DualPortVGARam);  ///< Copying not allowed
  public:
    VVGATest_DualPortVGARam(const char* name = "TOP");
    ~VVGATest_DualPortVGARam();
    
    // INTERNAL METHODS
    void __Vconfigure(VVGATest__Syms* symsp, bool first);
    void __Vdpiimwrap_updateVGA_TOP__VGATest__vga_text__framebuff(IData/*31:0*/ addr, IData/*31:0*/ write_data);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__VGATest__vga_text__framebuff__2(VVGATest__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
