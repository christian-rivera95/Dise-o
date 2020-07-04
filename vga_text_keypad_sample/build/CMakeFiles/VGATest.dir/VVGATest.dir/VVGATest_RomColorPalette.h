// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVGATest.h for the primary calling header

#ifndef _VVGATEST_ROMCOLORPALETTE_H_
#define _VVGATEST_ROMCOLORPALETTE_H_  // guard

#include "verilated_heavy.h"
#include "VVGATest__Dpi.h"

//==========

class VVGATest__Syms;

//----------

VL_MODULE(VVGATest_RomColorPalette) {
  public:
    
    // PORTS
    VL_IN8(__PVT__addr1,3,0);
    VL_IN8(__PVT__addr2,3,0);
    VL_OUT8(__PVT__color1,7,0);
    VL_OUT8(__PVT__color2,7,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ memory[16];
    
    // INTERNAL VARIABLES
  private:
    VVGATest__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGATest_RomColorPalette);  ///< Copying not allowed
  public:
    VVGATest_RomColorPalette(const char* name = "TOP");
    ~VVGATest_RomColorPalette();
    
    // INTERNAL METHODS
    void __Vconfigure(VVGATest__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__VGATest__vga_text__palrom__1(VVGATest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
