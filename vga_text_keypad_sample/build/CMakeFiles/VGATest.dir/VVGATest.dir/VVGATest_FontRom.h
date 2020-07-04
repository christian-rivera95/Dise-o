// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVGATest.h for the primary calling header

#ifndef _VVGATEST_FONTROM_H_
#define _VVGATEST_FONTROM_H_  // guard

#include "verilated_heavy.h"
#include "VVGATest__Dpi.h"

//==========

class VVGATest__Syms;

//----------

VL_MODULE(VVGATest_FontRom) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_OUT8(__PVT__dout,7,0);
    VL_IN16(__PVT__addr,11,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ memory[4096];
    
    // INTERNAL VARIABLES
  private:
    VVGATest__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGATest_FontRom);  ///< Copying not allowed
  public:
    VVGATest_FontRom(const char* name = "TOP");
    ~VVGATest_FontRom();
    
    // INTERNAL METHODS
    void __Vconfigure(VVGATest__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__VGATest__vga_text__fontrom__2(VVGATest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
