# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = Z:\dev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = Z:\dev\build

# Utility rule file for ContinuousTest.

# Include the progress variables for this target.
include CMakeFiles/ContinuousTest.dir/progress.make

CMakeFiles/ContinuousTest:
	"D:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\ctest.exe" -D ContinuousTest

ContinuousTest: CMakeFiles/ContinuousTest
ContinuousTest: CMakeFiles/ContinuousTest.dir/build.make

.PHONY : ContinuousTest

# Rule to build all files generated by this target.
CMakeFiles/ContinuousTest.dir/build: ContinuousTest

.PHONY : CMakeFiles/ContinuousTest.dir/build

CMakeFiles/ContinuousTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ContinuousTest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ContinuousTest.dir/clean

CMakeFiles/ContinuousTest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" Z:\dev Z:\dev Z:\dev\build Z:\dev\build Z:\dev\build\CMakeFiles\ContinuousTest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ContinuousTest.dir/depend

