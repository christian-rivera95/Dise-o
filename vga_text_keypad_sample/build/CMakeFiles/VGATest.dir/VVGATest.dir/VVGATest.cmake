# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/local/Cellar/verilator/4.036/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VVGATest_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VVGATest_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VVGATest_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(VVGATest_COVERAGE 0)
# Threaded output mode?  0/1/N threads (from --threads)
set(VVGATest_THREADS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(VVGATest_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(VVGATest_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(VVGATest_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_dpi.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VVGATest_CLASSES_SLOW "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest__Slow.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_VGATest__Slow.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_VGATextCard__Slow.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_KeypadSampleFSM__Slow.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_DualPortVGARam__Slow.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_FontRom__Slow.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_RomColorPalette__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(VVGATest_CLASSES_FAST "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_VGATest.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_VGATextCard.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_KeypadSampleFSM.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_DualPortVGARam.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_FontRom.cpp" "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest_RomColorPalette.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VVGATest_SUPPORT_SLOW "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest__Syms.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(VVGATest_SUPPORT_FAST "/Users/christianrivera/Downloads/vga_text_keypad_sample/build/CMakeFiles/VGATest.dir/VVGATest.dir/VVGATest__Dpi.cpp")
# All dependencies
set(VVGATest_DEPS "/usr/local/bin/verilator_bin" "verilog/KeypadSampleFSM.v" "verilog/VGATest.v" "verilog/vga/DualPortVGARam.v" "verilog/vga/FontRom.v" "verilog/vga/MillisCounter.v" "verilog/vga/RomColorPalette.v" "verilog/vga/VGATextCard.v")
# User .cpp files (from .cpp's on Verilator command line)
set(VVGATest_USER_CLASSES )
