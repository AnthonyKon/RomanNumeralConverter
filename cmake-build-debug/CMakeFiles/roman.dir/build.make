# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CP2\koni0028\roman

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CP2\koni0028\roman\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/roman.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/roman.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/roman.dir/flags.make

CMakeFiles/roman.dir/roman.cpp.obj: CMakeFiles/roman.dir/flags.make
CMakeFiles/roman.dir/roman.cpp.obj: ../roman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CP2\koni0028\roman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/roman.dir/roman.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\roman.dir\roman.cpp.obj -c C:\CP2\koni0028\roman\roman.cpp

CMakeFiles/roman.dir/roman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roman.dir/roman.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\CP2\koni0028\roman\roman.cpp > CMakeFiles\roman.dir\roman.cpp.i

CMakeFiles/roman.dir/roman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roman.dir/roman.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\CP2\koni0028\roman\roman.cpp -o CMakeFiles\roman.dir\roman.cpp.s

# Object files for target roman
roman_OBJECTS = \
"CMakeFiles/roman.dir/roman.cpp.obj"

# External object files for target roman
roman_EXTERNAL_OBJECTS =

../roman.exe: CMakeFiles/roman.dir/roman.cpp.obj
../roman.exe: CMakeFiles/roman.dir/build.make
../roman.exe: CMakeFiles/roman.dir/linklibs.rsp
../roman.exe: CMakeFiles/roman.dir/objects1.rsp
../roman.exe: CMakeFiles/roman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CP2\koni0028\roman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\roman.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\roman.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/roman.dir/build: ../roman.exe

.PHONY : CMakeFiles/roman.dir/build

CMakeFiles/roman.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\roman.dir\cmake_clean.cmake
.PHONY : CMakeFiles/roman.dir/clean

CMakeFiles/roman.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CP2\koni0028\roman C:\CP2\koni0028\roman C:\CP2\koni0028\roman\cmake-build-debug C:\CP2\koni0028\roman\cmake-build-debug C:\CP2\koni0028\roman\cmake-build-debug\CMakeFiles\roman.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/roman.dir/depend

