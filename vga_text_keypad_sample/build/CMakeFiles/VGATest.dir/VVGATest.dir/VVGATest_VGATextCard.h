// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVGATest.h for the primary calling header

#ifndef _VVGATEST_VGATEXTCARD_H_
#define _VVGATEST_VGATEXTCARD_H_  // guard

#include "verilated_heavy.h"
#include "VVGATest__Dpi.h"

//==========

class VVGATest__Syms;
class VVGATest_RomColorPalette;
class VVGATest_DualPortVGARam;
class VVGATest_FontRom;


//----------

VL_MODULE(VVGATest_VGATextCard) {
  public:
    // CELLS
    VVGATest_RomColorPalette* palrom;
    VVGATest_DualPortVGARam* framebuff;
    VVGATest_FontRom* fontrom;
    
    // PORTS
    VL_IN8(__PVT__vclk,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__en,0,0);
    VL_IN8(__PVT__we,0,0);
    VL_OUT8(__PVT__r,2,0);
    VL_OUT8(__PVT__g,2,0);
    VL_OUT8(__PVT__b,1,0);
    VL_OUT8(__PVT__hs,0,0);
    VL_OUT8(__PVT__vs,0,0);
    VL_IN16(__PVT__addr,11,0);
    VL_IN16(__PVT__wd,15,0);
    VL_OUT16(__PVT__rd,15,0);
    
    // INTERNAL VARIABLES
  private:
    VVGATest__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGATest_VGATextCard);  ///< Copying not allowed
  public:
    VVGATest_VGATextCard(const char* name = "TOP");
    ~VVGATest_VGATextCard();
    
    // INTERNAL METHODS
    void __Vconfigure(VVGATest__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
