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
CMAKE_COMMAND = "D:\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\DataStruct\DataStruct\linearList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\DataStruct\DataStruct\linearList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/seqList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/seqList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/seqList.dir/flags.make

CMakeFiles/seqList.dir/seqTest.cpp.obj: CMakeFiles/seqList.dir/flags.make
CMakeFiles/seqList.dir/seqTest.cpp.obj: ../seqTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\DataStruct\DataStruct\linearList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/seqList.dir/seqTest.cpp.obj"
	D:\mingw64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\seqList.dir\seqTest.cpp.obj -c D:\DataStruct\DataStruct\linearList\seqTest.cpp

CMakeFiles/seqList.dir/seqTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/seqList.dir/seqTest.cpp.i"
	D:\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\DataStruct\DataStruct\linearList\seqTest.cpp > CMakeFiles\seqList.dir\seqTest.cpp.i

CMakeFiles/seqList.dir/seqTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/seqList.dir/seqTest.cpp.s"
	D:\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\DataStruct\DataStruct\linearList\seqTest.cpp -o CMakeFiles\seqList.dir\seqTest.cpp.s

CMakeFiles/seqList.dir/seqList.cpp.obj: CMakeFiles/seqList.dir/flags.make
CMakeFiles/seqList.dir/seqList.cpp.obj: ../seqList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\DataStruct\DataStruct\linearList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/seqList.dir/seqList.cpp.obj"
	D:\mingw64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\seqList.dir\seqList.cpp.obj -c D:\DataStruct\DataStruct\linearList\seqList.cpp

CMakeFiles/seqList.dir/seqList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/seqList.dir/seqList.cpp.i"
	D:\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\DataStruct\DataStruct\linearList\seqList.cpp > CMakeFiles\seqList.dir\seqList.cpp.i

CMakeFiles/seqList.dir/seqList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/seqList.dir/seqList.cpp.s"
	D:\mingw64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\DataStruct\DataStruct\linearList\seqList.cpp -o CMakeFiles\seqList.dir\seqList.cpp.s

# Object files for target seqList
seqList_OBJECTS = \
"CMakeFiles/seqList.dir/seqTest.cpp.obj" \
"CMakeFiles/seqList.dir/seqList.cpp.obj"

# External object files for target seqList
seqList_EXTERNAL_OBJECTS =

seqList.exe: CMakeFiles/seqList.dir/seqTest.cpp.obj
seqList.exe: CMakeFiles/seqList.dir/seqList.cpp.obj
seqList.exe: CMakeFiles/seqList.dir/build.make
seqList.exe: CMakeFiles/seqList.dir/linklibs.rsp
seqList.exe: CMakeFiles/seqList.dir/objects1.rsp
seqList.exe: CMakeFiles/seqList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\DataStruct\DataStruct\linearList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable seqList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\seqList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/seqList.dir/build: seqList.exe

.PHONY : CMakeFiles/seqList.dir/build

CMakeFiles/seqList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\seqList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/seqList.dir/clean

CMakeFiles/seqList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\DataStruct\DataStruct\linearList D:\DataStruct\DataStruct\linearList D:\DataStruct\DataStruct\linearList\cmake-build-debug D:\DataStruct\DataStruct\linearList\cmake-build-debug D:\DataStruct\DataStruct\linearList\cmake-build-debug\CMakeFiles\seqList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/seqList.dir/depend

