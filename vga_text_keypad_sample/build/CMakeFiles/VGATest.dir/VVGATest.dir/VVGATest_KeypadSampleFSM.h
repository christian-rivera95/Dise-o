// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVGATest.h for the primary calling header

#ifndef _VVGATEST_KEYPADSAMPLEFSM_H_
#define _VVGATEST_KEYPADSAMPLEFSM_H_  // guard

#include "verilated_heavy.h"
#include "VVGATest__Dpi.h"

//==========

class VVGATest__Syms;

//----------

VL_MODULE(VVGATest_KeypadSampleFSM) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__keypad,7,0);
    VL_OUT8(__PVT__vga_we,0,0);
    VL_OUT16(__PVT__vga_addr,11,0);
    VL_OUT16(__PVT__vga_data,15,0);
    VL_IN(__PVT__timer,31,0);
    
    // LOCAL SIGNALS
    CData/*5:0*/ cs;
    CData/*5:0*/ __PVT__ns;
    CData/*3:0*/ __PVT__wb;
    CData/*3:0*/ __PVT__nwb;
    CData/*6:0*/ row;
    CData/*6:0*/ col;
    CData/*6:0*/ __PVT__meteor1Row;
    CData/*6:0*/ __PVT__meteor1Col;
    CData/*6:0*/ __PVT__meteor2Row;
    CData/*6:0*/ __PVT__meteor2Col;
    CData/*6:0*/ __PVT__meteor3Row;
    CData/*6:0*/ __PVT__meteor3Col;
    CData/*6:0*/ __PVT__meteor4Row;
    CData/*6:0*/ __PVT__meteor4Col;
    SData/*11:0*/ vga_addr_reg;
    SData/*11:0*/ __PVT__vga_addr_meteor1;
    SData/*11:0*/ __PVT__vga_addr_meteor2;
    SData/*11:0*/ __PVT__vga_addr_meteor3;
    IData/*31:0*/ __PVT__delay;
    
    // LOCAL VARIABLES
    SData/*11:0*/ __Vdly__vga_addr_reg;
    
    // INTERNAL VARIABLES
  private:
    VVGATest__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGATest_KeypadSampleFSM);  ///< Copying not allowed
  public:
    VVGATest_KeypadSampleFSM(const char* name = "TOP");
    ~VVGATest_KeypadSampleFSM();
    
    // INTERNAL METHODS
    void __Vconfigure(VVGATest__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__VGATest__kps_fsm__1(VVGATest__Syms* __restrict vlSymsp);
    static void _sequent__TOP__VGATest__kps_fsm__2(VVGATest__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
