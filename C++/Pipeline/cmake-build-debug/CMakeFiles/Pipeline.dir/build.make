# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Software Develop Learning\TestDome\C++\Pipeline"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Software Develop Learning\TestDome\C++\Pipeline\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Pipeline.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pipeline.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pipeline.dir/flags.make

CMakeFiles/Pipeline.dir/main.cpp.obj: CMakeFiles/Pipeline.dir/flags.make
CMakeFiles/Pipeline.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Develop Learning\TestDome\C++\Pipeline\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pipeline.dir/main.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Pipeline.dir\main.cpp.obj -c "D:\Software Develop Learning\TestDome\C++\Pipeline\main.cpp"

CMakeFiles/Pipeline.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pipeline.dir/main.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Develop Learning\TestDome\C++\Pipeline\main.cpp" > CMakeFiles\Pipeline.dir\main.cpp.i

CMakeFiles/Pipeline.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pipeline.dir/main.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Develop Learning\TestDome\C++\Pipeline\main.cpp" -o CMakeFiles\Pipeline.dir\main.cpp.s

# Object files for target Pipeline
Pipeline_OBJECTS = \
"CMakeFiles/Pipeline.dir/main.cpp.obj"

# External object files for target Pipeline
Pipeline_EXTERNAL_OBJECTS =

Pipeline.exe: CMakeFiles/Pipeline.dir/main.cpp.obj
Pipeline.exe: CMakeFiles/Pipeline.dir/build.make
Pipeline.exe: CMakeFiles/Pipeline.dir/linklibs.rsp
Pipeline.exe: CMakeFiles/Pipeline.dir/objects1.rsp
Pipeline.exe: CMakeFiles/Pipeline.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Software Develop Learning\TestDome\C++\Pipeline\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pipeline.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Pipeline.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pipeline.dir/build: Pipeline.exe

.PHONY : CMakeFiles/Pipeline.dir/build

CMakeFiles/Pipeline.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Pipeline.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Pipeline.dir/clean

CMakeFiles/Pipeline.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Software Develop Learning\TestDome\C++\Pipeline" "D:\Software Develop Learning\TestDome\C++\Pipeline" "D:\Software Develop Learning\TestDome\C++\Pipeline\cmake-build-debug" "D:\Software Develop Learning\TestDome\C++\Pipeline\cmake-build-debug" "D:\Software Develop Learning\TestDome\C++\Pipeline\cmake-build-debug\CMakeFiles\Pipeline.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Pipeline.dir/depend

