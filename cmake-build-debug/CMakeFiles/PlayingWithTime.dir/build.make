# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PlayingWithTime.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/PlayingWithTime.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PlayingWithTime.dir/flags.make

CMakeFiles/PlayingWithTime.dir/main.cpp.obj: CMakeFiles/PlayingWithTime.dir/flags.make
CMakeFiles/PlayingWithTime.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PlayingWithTime.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PlayingWithTime.dir\main.cpp.obj -c C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\main.cpp

CMakeFiles/PlayingWithTime.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlayingWithTime.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\main.cpp > CMakeFiles\PlayingWithTime.dir\main.cpp.i

CMakeFiles/PlayingWithTime.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlayingWithTime.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\main.cpp -o CMakeFiles\PlayingWithTime.dir\main.cpp.s

# Object files for target PlayingWithTime
PlayingWithTime_OBJECTS = \
"CMakeFiles/PlayingWithTime.dir/main.cpp.obj"

# External object files for target PlayingWithTime
PlayingWithTime_EXTERNAL_OBJECTS =

PlayingWithTime.exe: CMakeFiles/PlayingWithTime.dir/main.cpp.obj
PlayingWithTime.exe: CMakeFiles/PlayingWithTime.dir/build.make
PlayingWithTime.exe: CMakeFiles/PlayingWithTime.dir/linklibs.rsp
PlayingWithTime.exe: CMakeFiles/PlayingWithTime.dir/objects1.rsp
PlayingWithTime.exe: CMakeFiles/PlayingWithTime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PlayingWithTime.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PlayingWithTime.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PlayingWithTime.dir/build: PlayingWithTime.exe
.PHONY : CMakeFiles/PlayingWithTime.dir/build

CMakeFiles/PlayingWithTime.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PlayingWithTime.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PlayingWithTime.dir/clean

CMakeFiles/PlayingWithTime.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\cmake-build-debug C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\cmake-build-debug C:\Users\ogunw\Documents\scripts\cdevtutorial\tutorial1\PlayingWithTime\cmake-build-debug\CMakeFiles\PlayingWithTime.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PlayingWithTime.dir/depend

