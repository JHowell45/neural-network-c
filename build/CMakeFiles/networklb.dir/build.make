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
include CMakeFiles/networklb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/networklb.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/networklb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/networklb.dir/flags.make

CMakeFiles/networklb.dir/network/lib/src/vector.c.o: CMakeFiles/networklb.dir/flags.make
CMakeFiles/networklb.dir/network/lib/src/vector.c.o: /home/jacob/Code/neural-network-c/network/lib/src/vector.c
CMakeFiles/networklb.dir/network/lib/src/vector.c.o: CMakeFiles/networklb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jacob/Code/neural-network-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/networklb.dir/network/lib/src/vector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/networklb.dir/network/lib/src/vector.c.o -MF CMakeFiles/networklb.dir/network/lib/src/vector.c.o.d -o CMakeFiles/networklb.dir/network/lib/src/vector.c.o -c /home/jacob/Code/neural-network-c/network/lib/src/vector.c

CMakeFiles/networklb.dir/network/lib/src/vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/networklb.dir/network/lib/src/vector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Code/neural-network-c/network/lib/src/vector.c > CMakeFiles/networklb.dir/network/lib/src/vector.c.i

CMakeFiles/networklb.dir/network/lib/src/vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/networklb.dir/network/lib/src/vector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Code/neural-network-c/network/lib/src/vector.c -o CMakeFiles/networklb.dir/network/lib/src/vector.c.s

# Object files for target networklb
networklb_OBJECTS = \
"CMakeFiles/networklb.dir/network/lib/src/vector.c.o"

# External object files for target networklb
networklb_EXTERNAL_OBJECTS =

libnetworklb.a: CMakeFiles/networklb.dir/network/lib/src/vector.c.o
libnetworklb.a: CMakeFiles/networklb.dir/build.make
libnetworklb.a: CMakeFiles/networklb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jacob/Code/neural-network-c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libnetworklb.a"
	$(CMAKE_COMMAND) -P CMakeFiles/networklb.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/networklb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/networklb.dir/build: libnetworklb.a
.PHONY : CMakeFiles/networklb.dir/build

CMakeFiles/networklb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/networklb.dir/cmake_clean.cmake
.PHONY : CMakeFiles/networklb.dir/clean

CMakeFiles/networklb.dir/depend:
	cd /home/jacob/Code/neural-network-c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacob/Code/neural-network-c /home/jacob/Code/neural-network-c /home/jacob/Code/neural-network-c/build /home/jacob/Code/neural-network-c/build /home/jacob/Code/neural-network-c/build/CMakeFiles/networklb.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/networklb.dir/depend

