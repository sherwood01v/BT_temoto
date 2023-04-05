# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/veronika/BT_temoto/reactive_seq

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/veronika/BT_temoto/reactive_seq/build

# Include any dependencies generated for this target.
include CMakeFiles/calculator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator.dir/flags.make

CMakeFiles/calculator.dir/src/crossdoor.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/src/crossdoor.cpp.o: ../src/crossdoor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veronika/BT_temoto/reactive_seq/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator.dir/src/crossdoor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculator.dir/src/crossdoor.cpp.o -c /home/veronika/BT_temoto/reactive_seq/src/crossdoor.cpp

CMakeFiles/calculator.dir/src/crossdoor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/src/crossdoor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veronika/BT_temoto/reactive_seq/src/crossdoor.cpp > CMakeFiles/calculator.dir/src/crossdoor.cpp.i

CMakeFiles/calculator.dir/src/crossdoor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/src/crossdoor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veronika/BT_temoto/reactive_seq/src/crossdoor.cpp -o CMakeFiles/calculator.dir/src/crossdoor.cpp.s

CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.o: CMakeFiles/calculator.dir/flags.make
CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.o: ../sample_nodes/crossdoor_nodes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/veronika/BT_temoto/reactive_seq/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.o -c /home/veronika/BT_temoto/reactive_seq/sample_nodes/crossdoor_nodes.cpp

CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/veronika/BT_temoto/reactive_seq/sample_nodes/crossdoor_nodes.cpp > CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.i

CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/veronika/BT_temoto/reactive_seq/sample_nodes/crossdoor_nodes.cpp -o CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.s

# Object files for target calculator
calculator_OBJECTS = \
"CMakeFiles/calculator.dir/src/crossdoor.cpp.o" \
"CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.o"

# External object files for target calculator
calculator_EXTERNAL_OBJECTS =

calculator: CMakeFiles/calculator.dir/src/crossdoor.cpp.o
calculator: CMakeFiles/calculator.dir/sample_nodes/crossdoor_nodes.cpp.o
calculator: CMakeFiles/calculator.dir/build.make
calculator: /usr/local/lib/libbehaviortree_cpp.so
calculator: CMakeFiles/calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/veronika/BT_temoto/reactive_seq/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable calculator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator.dir/build: calculator

.PHONY : CMakeFiles/calculator.dir/build

CMakeFiles/calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculator.dir/clean

CMakeFiles/calculator.dir/depend:
	cd /home/veronika/BT_temoto/reactive_seq/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/veronika/BT_temoto/reactive_seq /home/veronika/BT_temoto/reactive_seq /home/veronika/BT_temoto/reactive_seq/build /home/veronika/BT_temoto/reactive_seq/build /home/veronika/BT_temoto/reactive_seq/build/CMakeFiles/calculator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculator.dir/depend

