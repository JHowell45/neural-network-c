# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_SOURCE_DIR = /home/jacob/Code/neural-network-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jacob/Code/neural-network-c/build

# Include any dependencies generated for this target.
include CMakeFiles/network.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/network.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/network.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/network.dir/flags.make

CMakeFiles/network.dir/network/main.c.o: CMakeFiles/network.dir/flags.make
CMakeFiles/network.dir/network/main.c.o: /home/jacob/Code/neural-network-c/network/main.c
CMakeFiles/network.dir/network/main.c.o: CMakeFiles/network.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jacob/Code/neural-network-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/network.dir/network/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/network.dir/network/main.c.o -MF CMakeFiles/network.dir/network/main.c.o.d -o CMakeFiles/network.dir/network/main.c.o -c /home/jacob/Code/neural-network-c/network/main.c

CMakeFiles/network.dir/network/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/network.dir/network/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Code/neural-network-c/network/main.c > CMakeFiles/network.dir/network/main.c.i

CMakeFiles/network.dir/network/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/network.dir/network/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Code/neural-network-c/network/main.c -o CMakeFiles/network.dir/network/main.c.s

# Object files for target network
network_OBJECTS = \
"CMakeFiles/network.dir/network/main.c.o"

# External object files for target network
network_EXTERNAL_OBJECTS =

network: CMakeFiles/network.dir/network/main.c.o
network: CMakeFiles/network.dir/build.make
network: libnetworklb.a
network: CMakeFiles/network.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jacob/Code/neural-network-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable network"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/network.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/network.dir/build: network
.PHONY : CMakeFiles/network.dir/build

CMakeFiles/network.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/network.dir/cmake_clean.cmake
.PHONY : CMakeFiles/network.dir/clean

CMakeFiles/network.dir/depend:
	cd /home/jacob/Code/neural-network-c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacob/Code/neural-network-c /home/jacob/Code/neural-network-c /home/jacob/Code/neural-network-c/build /home/jacob/Code/neural-network-c/build /home/jacob/Code/neural-network-c/build/CMakeFiles/network.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/network.dir/depend

