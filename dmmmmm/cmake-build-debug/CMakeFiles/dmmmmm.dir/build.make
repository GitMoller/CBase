# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CBase\dmmmmm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CBase\dmmmmm\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dmmmmm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dmmmmm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dmmmmm.dir/flags.make

CMakeFiles/dmmmmm.dir/library.c.obj: CMakeFiles/dmmmmm.dir/flags.make
CMakeFiles/dmmmmm.dir/library.c.obj: ../library.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CBase\dmmmmm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/dmmmmm.dir/library.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\dmmmmm.dir\library.c.obj   -c D:\CBase\dmmmmm\library.c

CMakeFiles/dmmmmm.dir/library.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dmmmmm.dir/library.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\CBase\dmmmmm\library.c > CMakeFiles\dmmmmm.dir\library.c.i

CMakeFiles/dmmmmm.dir/library.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dmmmmm.dir/library.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\CBase\dmmmmm\library.c -o CMakeFiles\dmmmmm.dir\library.c.s

# Object files for target dmmmmm
dmmmmm_OBJECTS = \
"CMakeFiles/dmmmmm.dir/library.c.obj"

# External object files for target dmmmmm
dmmmmm_EXTERNAL_OBJECTS =

libdmmmmm.a: CMakeFiles/dmmmmm.dir/library.c.obj
libdmmmmm.a: CMakeFiles/dmmmmm.dir/build.make
libdmmmmm.a: CMakeFiles/dmmmmm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CBase\dmmmmm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libdmmmmm.a"
	$(CMAKE_COMMAND) -P CMakeFiles\dmmmmm.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dmmmmm.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dmmmmm.dir/build: libdmmmmm.a

.PHONY : CMakeFiles/dmmmmm.dir/build

CMakeFiles/dmmmmm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dmmmmm.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dmmmmm.dir/clean

CMakeFiles/dmmmmm.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CBase\dmmmmm D:\CBase\dmmmmm D:\CBase\dmmmmm\cmake-build-debug D:\CBase\dmmmmm\cmake-build-debug D:\CBase\dmmmmm\cmake-build-debug\CMakeFiles\dmmmmm.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dmmmmm.dir/depend

