// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VVGATEST_H_
#define _VVGATEST_H_  // guard

#include "verilated_heavy.h"
#include "VVGATest__Dpi.h"

//==========

class VVGATest__Syms;
class VVGATest_VGATest;


//----------

VL_MODULE(VVGATest) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VVGATest_VGATest* VGATest;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(keypad,7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__VGATest__vga_text____PVT__vclk;
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VVGATest__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVGATest);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VVGATest(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VVGATest();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VVGATest__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VVGATest__Syms* symsp, bool first);
  private:
    static QData _change_request(VVGATest__Syms* __restrict vlSymsp);
    static QData _change_request_1(VVGATest__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VVGATest__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VVGATest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VVGATest__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
