# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/build

# Include any dependencies generated for this target.
include CMakeFiles/tests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tests.dir/flags.make

CMakeFiles/tests.dir/test_case/test_case.cpp.o: CMakeFiles/tests.dir/flags.make
CMakeFiles/tests.dir/test_case/test_case.cpp.o: ../test_case/test_case.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tests.dir/test_case/test_case.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/test_case/test_case.cpp.o -c /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/test_case/test_case.cpp

CMakeFiles/tests.dir/test_case/test_case.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/test_case/test_case.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/test_case/test_case.cpp > CMakeFiles/tests.dir/test_case/test_case.cpp.i

CMakeFiles/tests.dir/test_case/test_case.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/test_case/test_case.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/test_case/test_case.cpp -o CMakeFiles/tests.dir/test_case/test_case.cpp.s

CMakeFiles/tests.dir/test_case/test_case.cpp.o.requires:

.PHONY : CMakeFiles/tests.dir/test_case/test_case.cpp.o.requires

CMakeFiles/tests.dir/test_case/test_case.cpp.o.provides: CMakeFiles/tests.dir/test_case/test_case.cpp.o.requires
	$(MAKE) -f CMakeFiles/tests.dir/build.make CMakeFiles/tests.dir/test_case/test_case.cpp.o.provides.build
.PHONY : CMakeFiles/tests.dir/test_case/test_case.cpp.o.provides

CMakeFiles/tests.dir/test_case/test_case.cpp.o.provides.build: CMakeFiles/tests.dir/test_case/test_case.cpp.o


# Object files for target tests
tests_OBJECTS = \
"CMakeFiles/tests.dir/test_case/test_case.cpp.o"

# External object files for target tests
tests_EXTERNAL_OBJECTS =

tests: CMakeFiles/tests.dir/test_case/test_case.cpp.o
tests: CMakeFiles/tests.dir/build.make
tests: CMakeFiles/tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tests.dir/build: tests

.PHONY : CMakeFiles/tests.dir/build

CMakeFiles/tests.dir/requires: CMakeFiles/tests.dir/test_case/test_case.cpp.o.requires

.PHONY : CMakeFiles/tests.dir/requires

CMakeFiles/tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tests.dir/clean

CMakeFiles/tests.dir/depend:
	cd /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1 /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1 /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/build /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/build /Users/tom/dev/study/coding_interview/questions/chapter01/q1-1/build/CMakeFiles/tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tests.dir/depend

