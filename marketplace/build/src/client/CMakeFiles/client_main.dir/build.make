# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mayumar/Escritorio/practicaspoo/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mayumar/Escritorio/practicaspoo/marketplace/build

# Include any dependencies generated for this target.
include src/client/CMakeFiles/client_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/client/CMakeFiles/client_main.dir/compiler_depend.make

# Include the progress variables for this target.
include src/client/CMakeFiles/client_main.dir/progress.make

# Include the compile flags for this target's objects.
include src/client/CMakeFiles/client_main.dir/flags.make

src/client/CMakeFiles/client_main.dir/client_main.cc.o: src/client/CMakeFiles/client_main.dir/flags.make
src/client/CMakeFiles/client_main.dir/client_main.cc.o: ../src/client/client_main.cc
src/client/CMakeFiles/client_main.dir/client_main.cc.o: src/client/CMakeFiles/client_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mayumar/Escritorio/practicaspoo/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/client/CMakeFiles/client_main.dir/client_main.cc.o"
	cd /home/mayumar/Escritorio/practicaspoo/marketplace/build/src/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/client/CMakeFiles/client_main.dir/client_main.cc.o -MF CMakeFiles/client_main.dir/client_main.cc.o.d -o CMakeFiles/client_main.dir/client_main.cc.o -c /home/mayumar/Escritorio/practicaspoo/marketplace/src/client/client_main.cc

src/client/CMakeFiles/client_main.dir/client_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client_main.dir/client_main.cc.i"
	cd /home/mayumar/Escritorio/practicaspoo/marketplace/build/src/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mayumar/Escritorio/practicaspoo/marketplace/src/client/client_main.cc > CMakeFiles/client_main.dir/client_main.cc.i

src/client/CMakeFiles/client_main.dir/client_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client_main.dir/client_main.cc.s"
	cd /home/mayumar/Escritorio/practicaspoo/marketplace/build/src/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mayumar/Escritorio/practicaspoo/marketplace/src/client/client_main.cc -o CMakeFiles/client_main.dir/client_main.cc.s

# Object files for target client_main
client_main_OBJECTS = \
"CMakeFiles/client_main.dir/client_main.cc.o"

# External object files for target client_main
client_main_EXTERNAL_OBJECTS =

src/client/client_main: src/client/CMakeFiles/client_main.dir/client_main.cc.o
src/client/client_main: src/client/CMakeFiles/client_main.dir/build.make
src/client/client_main: src/client/libclient.a
src/client/client_main: src/client/CMakeFiles/client_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mayumar/Escritorio/practicaspoo/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable client_main"
	cd /home/mayumar/Escritorio/practicaspoo/marketplace/build/src/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/client/CMakeFiles/client_main.dir/build: src/client/client_main
.PHONY : src/client/CMakeFiles/client_main.dir/build

src/client/CMakeFiles/client_main.dir/clean:
	cd /home/mayumar/Escritorio/practicaspoo/marketplace/build/src/client && $(CMAKE_COMMAND) -P CMakeFiles/client_main.dir/cmake_clean.cmake
.PHONY : src/client/CMakeFiles/client_main.dir/clean

src/client/CMakeFiles/client_main.dir/depend:
	cd /home/mayumar/Escritorio/practicaspoo/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mayumar/Escritorio/practicaspoo/marketplace /home/mayumar/Escritorio/practicaspoo/marketplace/src/client /home/mayumar/Escritorio/practicaspoo/marketplace/build /home/mayumar/Escritorio/practicaspoo/marketplace/build/src/client /home/mayumar/Escritorio/practicaspoo/marketplace/build/src/client/CMakeFiles/client_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/client/CMakeFiles/client_main.dir/depend

