// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVGATest.h for the primary calling header

#ifndef _VVGATEST_VGATEST_H_
#define _VVGATEST_VGATEST_H_  // guard

#include "verilated_heavy.h"
#include "VVGATest__Dpi.h"

//==========

class VVGATest__Syms;
class VVGATest_KeypadSampleFSM;
class VVGATest_VGATextCard;


//----------

VL_MODULE(VVGATest_VGATest) {
  public:
    // CELLS
    VVGATest_KeypadSampleFSM* kps_fsm;
    VVGATest_VGATextCard* vga_text;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(keypad,7,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ vga_we;
    IData/*31:0*/ __PVT__ms_counter__DOT__ms_count;
    
    // INTERNAL VARIABLES
  private:
    VVGATest__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGATest_VGATest);  ///< Copying not allowed
  public:
    VVGATest_VGATest(const char* name = "TOP");
    ~VVGATest_VGATest();
    
    // INTERNAL METHODS
    void __Vconfigure(VVGATest__Syms* symsp, bool first);
    void __Vdpiimwrap_ms_counter__DOT__millis_TOP__VGATest(IData/*31:0*/ (&millis__Vfuncrtn));
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__VGATest__2(VVGATest__Syms* __restrict vlSymsp);
    static void _settle__TOP__VGATest__3(VVGATest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
