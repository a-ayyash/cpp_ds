# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.4.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.4.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ayyash/Code/cpp/ds/heap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ayyash/Code/cpp/ds/heap

# Include any dependencies generated for this target.
include CMakeFiles/Heap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Heap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Heap.dir/flags.make

CMakeFiles/Heap.dir/BinaryHeap.cpp.o: CMakeFiles/Heap.dir/flags.make
CMakeFiles/Heap.dir/BinaryHeap.cpp.o: BinaryHeap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ayyash/Code/cpp/ds/heap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Heap.dir/BinaryHeap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Heap.dir/BinaryHeap.cpp.o -c /Users/ayyash/Code/cpp/ds/heap/BinaryHeap.cpp

CMakeFiles/Heap.dir/BinaryHeap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Heap.dir/BinaryHeap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ayyash/Code/cpp/ds/heap/BinaryHeap.cpp > CMakeFiles/Heap.dir/BinaryHeap.cpp.i

CMakeFiles/Heap.dir/BinaryHeap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Heap.dir/BinaryHeap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ayyash/Code/cpp/ds/heap/BinaryHeap.cpp -o CMakeFiles/Heap.dir/BinaryHeap.cpp.s

CMakeFiles/Heap.dir/BinaryHeap.cpp.o.requires:

.PHONY : CMakeFiles/Heap.dir/BinaryHeap.cpp.o.requires

CMakeFiles/Heap.dir/BinaryHeap.cpp.o.provides: CMakeFiles/Heap.dir/BinaryHeap.cpp.o.requires
	$(MAKE) -f CMakeFiles/Heap.dir/build.make CMakeFiles/Heap.dir/BinaryHeap.cpp.o.provides.build
.PHONY : CMakeFiles/Heap.dir/BinaryHeap.cpp.o.provides

CMakeFiles/Heap.dir/BinaryHeap.cpp.o.provides.build: CMakeFiles/Heap.dir/BinaryHeap.cpp.o


CMakeFiles/Heap.dir/main.cpp.o: CMakeFiles/Heap.dir/flags.make
CMakeFiles/Heap.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ayyash/Code/cpp/ds/heap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Heap.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Heap.dir/main.cpp.o -c /Users/ayyash/Code/cpp/ds/heap/main.cpp

CMakeFiles/Heap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Heap.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ayyash/Code/cpp/ds/heap/main.cpp > CMakeFiles/Heap.dir/main.cpp.i

CMakeFiles/Heap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Heap.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ayyash/Code/cpp/ds/heap/main.cpp -o CMakeFiles/Heap.dir/main.cpp.s

CMakeFiles/Heap.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Heap.dir/main.cpp.o.requires

CMakeFiles/Heap.dir/main.cpp.o.provides: CMakeFiles/Heap.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Heap.dir/build.make CMakeFiles/Heap.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Heap.dir/main.cpp.o.provides

CMakeFiles/Heap.dir/main.cpp.o.provides.build: CMakeFiles/Heap.dir/main.cpp.o


# Object files for target Heap
Heap_OBJECTS = \
"CMakeFiles/Heap.dir/BinaryHeap.cpp.o" \
"CMakeFiles/Heap.dir/main.cpp.o"

# External object files for target Heap
Heap_EXTERNAL_OBJECTS =

Heap: CMakeFiles/Heap.dir/BinaryHeap.cpp.o
Heap: CMakeFiles/Heap.dir/main.cpp.o
Heap: CMakeFiles/Heap.dir/build.make
Heap: CMakeFiles/Heap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ayyash/Code/cpp/ds/heap/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Heap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Heap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Heap.dir/build: Heap

.PHONY : CMakeFiles/Heap.dir/build

CMakeFiles/Heap.dir/requires: CMakeFiles/Heap.dir/BinaryHeap.cpp.o.requires
CMakeFiles/Heap.dir/requires: CMakeFiles/Heap.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Heap.dir/requires

CMakeFiles/Heap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Heap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Heap.dir/clean

CMakeFiles/Heap.dir/depend:
	cd /Users/ayyash/Code/cpp/ds/heap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ayyash/Code/cpp/ds/heap /Users/ayyash/Code/cpp/ds/heap /Users/ayyash/Code/cpp/ds/heap /Users/ayyash/Code/cpp/ds/heap /Users/ayyash/Code/cpp/ds/heap/CMakeFiles/Heap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Heap.dir/depend
