// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVGATest__Syms.h"
#include "VVGATest.h"
#include "VVGATest_VGATest.h"
#include "VVGATest_VGATextCard.h"
#include "VVGATest_KeypadSampleFSM.h"
#include "VVGATest_DualPortVGARam.h"
#include "VVGATest_FontRom.h"
#include "VVGATest_RomColorPalette.h"



// FUNCTIONS
VVGATest__Syms::VVGATest__Syms(VVGATest* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__VGATest(Verilated::catName(topp->name(), "VGATest"))
    , TOP__VGATest__kps_fsm(Verilated::catName(topp->name(), "VGATest.kps_fsm"))
    , TOP__VGATest__vga_text(Verilated::catName(topp->name(), "VGATest.vga_text"))
    , TOP__VGATest__vga_text__fontrom(Verilated::catName(topp->name(), "VGATest.vga_text.fontrom"))
    , TOP__VGATest__vga_text__framebuff(Verilated::catName(topp->name(), "VGATest.vga_text.framebuff"))
    , TOP__VGATest__vga_text__palrom(Verilated::catName(topp->name(), "VGATest.vga_text.palrom"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->VGATest = &TOP__VGATest;
    TOPp->VGATest->kps_fsm = &TOP__VGATest__kps_fsm;
    TOPp->VGATest->vga_text = &TOP__VGATest__vga_text;
    TOPp->VGATest->vga_text->fontrom = &TOP__VGATest__vga_text__fontrom;
    TOPp->VGATest->vga_text->framebuff = &TOP__VGATest__vga_text__framebuff;
    TOPp->VGATest->vga_text->palrom = &TOP__VGATest__vga_text__palrom;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__VGATest.__Vconfigure(this, true);
    TOP__VGATest__kps_fsm.__Vconfigure(this, true);
    TOP__VGATest__vga_text.__Vconfigure(this, true);
    TOP__VGATest__vga_text__fontrom.__Vconfigure(this, true);
    TOP__VGATest__vga_text__framebuff.__Vconfigure(this, true);
    TOP__VGATest__vga_text__palrom.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_VGATest.configure(this, name(), "VGATest", "VGATest", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_VGATest__kps_fsm.configure(this, name(), "VGATest.kps_fsm", "kps_fsm", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_VGATest__vga_text__fontrom.configure(this, name(), "VGATest.vga_text.fontrom", "fontrom", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_VGATest__vga_text__framebuff.configure(this, name(), "VGATest.vga_text.framebuff", "framebuff", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_VGATest__vga_text__palrom.configure(this, name(), "VGATest.vga_text.palrom", "palrom", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_VGATest.varInsert(__Vfinal,"vga_we", &(TOP__VGATest.vga_we), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_VGATest__kps_fsm.varInsert(__Vfinal,"col", &(TOP__VGATest__kps_fsm.col), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_VGATest__kps_fsm.varInsert(__Vfinal,"cs", &(TOP__VGATest__kps_fsm.cs), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_VGATest__kps_fsm.varInsert(__Vfinal,"row", &(TOP__VGATest__kps_fsm.row), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_VGATest__kps_fsm.varInsert(__Vfinal,"vga_addr_reg", &(TOP__VGATest__kps_fsm.vga_addr_reg), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_VGATest__vga_text__fontrom.varInsert(__Vfinal,"memory", &(TOP__VGATest__vga_text__fontrom.memory), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,7,0 ,4095,0);
        __Vscope_VGATest__vga_text__framebuff.varInsert(__Vfinal,"memory", &(TOP__VGATest__vga_text__framebuff.memory), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,4095,0);
        __Vscope_VGATest__vga_text__palrom.varInsert(__Vfinal,"memory", &(TOP__VGATest__vga_text__palrom.memory), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,7,0 ,15,0);
    }
}
