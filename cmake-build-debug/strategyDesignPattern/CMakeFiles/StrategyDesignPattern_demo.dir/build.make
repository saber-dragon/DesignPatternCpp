# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\GitHub\coding\designPateterns

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitHub\coding\designPateterns\cmake-build-debug

# Include any dependencies generated for this target.
include strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/depend.make

# Include the progress variables for this target.
include strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/progress.make

# Include the compile flags for this target's objects.
include strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/flags.make

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/flags.make
strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj: ../strategyDesignPattern/sdd_demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\GitHub\coding\designPateterns\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj"
	cd /d E:\GitHub\coding\designPateterns\cmake-build-debug\strategyDesignPattern && E:\GCC72\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StrategyDesignPattern_demo.dir\sdd_demo.cpp.obj -c E:\GitHub\coding\designPateterns\strategyDesignPattern\sdd_demo.cpp

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.i"
	cd /d E:\GitHub\coding\designPateterns\cmake-build-debug\strategyDesignPattern && E:\GCC72\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitHub\coding\designPateterns\strategyDesignPattern\sdd_demo.cpp > CMakeFiles\StrategyDesignPattern_demo.dir\sdd_demo.cpp.i

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.s"
	cd /d E:\GitHub\coding\designPateterns\cmake-build-debug\strategyDesignPattern && E:\GCC72\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitHub\coding\designPateterns\strategyDesignPattern\sdd_demo.cpp -o CMakeFiles\StrategyDesignPattern_demo.dir\sdd_demo.cpp.s

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.requires:

.PHONY : strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.requires

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.provides: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.requires
	$(MAKE) -f strategyDesignPattern\CMakeFiles\StrategyDesignPattern_demo.dir\build.make strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.provides.build
.PHONY : strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.provides

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.provides.build: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj


# Object files for target StrategyDesignPattern_demo
StrategyDesignPattern_demo_OBJECTS = \
"CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj"

# External object files for target StrategyDesignPattern_demo
StrategyDesignPattern_demo_EXTERNAL_OBJECTS =

strategyDesignPattern/StrategyDesignPattern_demo.exe: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj
strategyDesignPattern/StrategyDesignPattern_demo.exe: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/build.make
strategyDesignPattern/StrategyDesignPattern_demo.exe: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/linklibs.rsp
strategyDesignPattern/StrategyDesignPattern_demo.exe: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/objects1.rsp
strategyDesignPattern/StrategyDesignPattern_demo.exe: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\GitHub\coding\designPateterns\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable StrategyDesignPattern_demo.exe"
	cd /d E:\GitHub\coding\designPateterns\cmake-build-debug\strategyDesignPattern && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StrategyDesignPattern_demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/build: strategyDesignPattern/StrategyDesignPattern_demo.exe

.PHONY : strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/build

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/requires: strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/sdd_demo.cpp.obj.requires

.PHONY : strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/requires

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/clean:
	cd /d E:\GitHub\coding\designPateterns\cmake-build-debug\strategyDesignPattern && $(CMAKE_COMMAND) -P CMakeFiles\StrategyDesignPattern_demo.dir\cmake_clean.cmake
.PHONY : strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/clean

strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GitHub\coding\designPateterns E:\GitHub\coding\designPateterns\strategyDesignPattern E:\GitHub\coding\designPateterns\cmake-build-debug E:\GitHub\coding\designPateterns\cmake-build-debug\strategyDesignPattern E:\GitHub\coding\designPateterns\cmake-build-debug\strategyDesignPattern\CMakeFiles\StrategyDesignPattern_demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : strategyDesignPattern/CMakeFiles/StrategyDesignPattern_demo.dir/depend
