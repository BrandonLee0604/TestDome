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
CMAKE_SOURCE_DIR = "D:\Self Learning\TestDome\C++\nMostRareElements"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Self Learning\TestDome\C++\nMostRareElements\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/nMostRareElements.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nMostRareElements.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nMostRareElements.dir/flags.make

CMakeFiles/nMostRareElements.dir/main.cpp.obj: CMakeFiles/nMostRareElements.dir/flags.make
CMakeFiles/nMostRareElements.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Self Learning\TestDome\C++\nMostRareElements\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nMostRareElements.dir/main.cpp.obj"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\nMostRareElements.dir\main.cpp.obj -c "D:\Self Learning\TestDome\C++\nMostRareElements\main.cpp"

CMakeFiles/nMostRareElements.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nMostRareElements.dir/main.cpp.i"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Self Learning\TestDome\C++\nMostRareElements\main.cpp" > CMakeFiles\nMostRareElements.dir\main.cpp.i

CMakeFiles/nMostRareElements.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nMostRareElements.dir/main.cpp.s"
	C:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Self Learning\TestDome\C++\nMostRareElements\main.cpp" -o CMakeFiles\nMostRareElements.dir\main.cpp.s

# Object files for target nMostRareElements
nMostRareElements_OBJECTS = \
"CMakeFiles/nMostRareElements.dir/main.cpp.obj"

# External object files for target nMostRareElements
nMostRareElements_EXTERNAL_OBJECTS =

nMostRareElements.exe: CMakeFiles/nMostRareElements.dir/main.cpp.obj
nMostRareElements.exe: CMakeFiles/nMostRareElements.dir/build.make
nMostRareElements.exe: CMakeFiles/nMostRareElements.dir/linklibs.rsp
nMostRareElements.exe: CMakeFiles/nMostRareElements.dir/objects1.rsp
nMostRareElements.exe: CMakeFiles/nMostRareElements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Self Learning\TestDome\C++\nMostRareElements\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nMostRareElements.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nMostRareElements.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nMostRareElements.dir/build: nMostRareElements.exe

.PHONY : CMakeFiles/nMostRareElements.dir/build

CMakeFiles/nMostRareElements.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nMostRareElements.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nMostRareElements.dir/clean

CMakeFiles/nMostRareElements.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Self Learning\TestDome\C++\nMostRareElements" "D:\Self Learning\TestDome\C++\nMostRareElements" "D:\Self Learning\TestDome\C++\nMostRareElements\cmake-build-debug" "D:\Self Learning\TestDome\C++\nMostRareElements\cmake-build-debug" "D:\Self Learning\TestDome\C++\nMostRareElements\cmake-build-debug\CMakeFiles\nMostRareElements.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/nMostRareElements.dir/depend
