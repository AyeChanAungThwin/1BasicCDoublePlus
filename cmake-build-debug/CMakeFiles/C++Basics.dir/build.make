# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /opt/CLion-2020.1.1/clion-2020.1.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/CLion-2020.1.1/clion-2020.1.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dracula/CLionProjects/BasicCDoublePlus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dracula/CLionProjects/BasicCDoublePlus/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C++Basics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C++Basics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C++Basics.dir/flags.make

CMakeFiles/C++Basics.dir/App.cpp.o: CMakeFiles/C++Basics.dir/flags.make
CMakeFiles/C++Basics.dir/App.cpp.o: ../App.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dracula/CLionProjects/BasicCDoublePlus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C++Basics.dir/App.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C++Basics.dir/App.cpp.o -c /home/dracula/CLionProjects/BasicCDoublePlus/App.cpp

CMakeFiles/C++Basics.dir/App.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C++Basics.dir/App.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dracula/CLionProjects/BasicCDoublePlus/App.cpp > CMakeFiles/C++Basics.dir/App.cpp.i

CMakeFiles/C++Basics.dir/App.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C++Basics.dir/App.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dracula/CLionProjects/BasicCDoublePlus/App.cpp -o CMakeFiles/C++Basics.dir/App.cpp.s

# Object files for target C++Basics
C______Basics_OBJECTS = \
"CMakeFiles/C++Basics.dir/App.cpp.o"

# External object files for target C++Basics
C______Basics_EXTERNAL_OBJECTS =

C++Basics: CMakeFiles/C++Basics.dir/App.cpp.o
C++Basics: CMakeFiles/C++Basics.dir/build.make
C++Basics: CMakeFiles/C++Basics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dracula/CLionProjects/BasicCDoublePlus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C++Basics"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C++Basics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C++Basics.dir/build: C++Basics

.PHONY : CMakeFiles/C++Basics.dir/build

CMakeFiles/C++Basics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C++Basics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C++Basics.dir/clean

CMakeFiles/C++Basics.dir/depend:
	cd /home/dracula/CLionProjects/BasicCDoublePlus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dracula/CLionProjects/BasicCDoublePlus /home/dracula/CLionProjects/BasicCDoublePlus /home/dracula/CLionProjects/BasicCDoublePlus/cmake-build-debug /home/dracula/CLionProjects/BasicCDoublePlus/cmake-build-debug /home/dracula/CLionProjects/BasicCDoublePlus/cmake-build-debug/CMakeFiles/C++Basics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C++Basics.dir/depend

