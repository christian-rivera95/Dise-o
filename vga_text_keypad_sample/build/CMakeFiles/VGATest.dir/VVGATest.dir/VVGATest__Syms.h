// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VVGATEST__SYMS_H_
#define _VVGATEST__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VVGATest.h"
#include "VVGATest_VGATest.h"
#include "VVGATest_VGATextCard.h"
#include "VVGATest_KeypadSampleFSM.h"
#include "VVGATest_DualPortVGARam.h"
#include "VVGATest_FontRom.h"
#include "VVGATest_RomColorPalette.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VVGATest__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VVGATest*                      TOPp;
    VVGATest_VGATest               TOP__VGATest;
    VVGATest_KeypadSampleFSM       TOP__VGATest__kps_fsm;
    VVGATest_VGATextCard           TOP__VGATest__vga_text;
    VVGATest_FontRom               TOP__VGATest__vga_text__fontrom;
    VVGATest_DualPortVGARam        TOP__VGATest__vga_text__framebuff;
    VVGATest_RomColorPalette       TOP__VGATest__vga_text__palrom;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_VGATest;
    VerilatedScope __Vscope_VGATest__kps_fsm;
    VerilatedScope __Vscope_VGATest__vga_text__fontrom;
    VerilatedScope __Vscope_VGATest__vga_text__framebuff;
    VerilatedScope __Vscope_VGATest__vga_text__palrom;
    
    // CREATORS
    VVGATest__Syms(VVGATest* topp, const char* namep);
    ~VVGATest__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
