# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/karinemiras/Downloads/CLion-2018.3.4/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/karinemiras/Downloads/CLion-2018.3.4/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/karinemiras/projects/revolve

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/karinemiras/projects/revolve/cmake-build-debug

# Include any dependencies generated for this target.
include cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/depend.make

# Include the progress variables for this target.
include cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/flags.make

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.o: cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/flags.make
cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.o: ../cpprevolve/revolve/gazebo/plugin/WorldController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karinemiras/projects/revolve/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.o"
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && /home/karinemiras/miniconda3/bin/x86_64-conda_cos6-linux-gnu-c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.o -c /home/karinemiras/projects/revolve/cpprevolve/revolve/gazebo/plugin/WorldController.cpp

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.i"
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && /home/karinemiras/miniconda3/bin/x86_64-conda_cos6-linux-gnu-c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karinemiras/projects/revolve/cpprevolve/revolve/gazebo/plugin/WorldController.cpp > CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.i

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.s"
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && /home/karinemiras/miniconda3/bin/x86_64-conda_cos6-linux-gnu-c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karinemiras/projects/revolve/cpprevolve/revolve/gazebo/plugin/WorldController.cpp -o CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.s

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.o: cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/flags.make
cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.o: ../cpprevolve/revolve/gazebo/plugin/register_world_plugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/karinemiras/projects/revolve/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.o"
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && /home/karinemiras/miniconda3/bin/x86_64-conda_cos6-linux-gnu-c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.o -c /home/karinemiras/projects/revolve/cpprevolve/revolve/gazebo/plugin/register_world_plugin.cpp

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.i"
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && /home/karinemiras/miniconda3/bin/x86_64-conda_cos6-linux-gnu-c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/karinemiras/projects/revolve/cpprevolve/revolve/gazebo/plugin/register_world_plugin.cpp > CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.i

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.s"
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && /home/karinemiras/miniconda3/bin/x86_64-conda_cos6-linux-gnu-c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/karinemiras/projects/revolve/cpprevolve/revolve/gazebo/plugin/register_world_plugin.cpp -o CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.s

# Object files for target WorldControlPlugin
WorldControlPlugin_OBJECTS = \
"CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.o" \
"CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.o"

# External object files for target WorldControlPlugin
WorldControlPlugin_EXTERNAL_OBJECTS =

../build/lib/libWorldControlPlugin.so: cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/WorldController.cpp.o
../build/lib/libWorldControlPlugin.so: cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/plugin/register_world_plugin.cpp.o
../build/lib/libWorldControlPlugin.so: cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/build.make
../build/lib/libWorldControlPlugin.so: ../build/lib/librevolve-gazebo.a
../build/lib/libWorldControlPlugin.so: ../build/lib/librevolve-proto.a
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_client.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_gui.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_sensors.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_rendering.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_physics.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_ode.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_transport.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_msgs.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_util.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_common.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_gimpact.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_opcode.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgazebo_opende_ou.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_thread.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_system.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_filesystem.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_program_options.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_regex.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_iostreams.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_date_time.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_chrono.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_atomic.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libprotobuf.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libsdformat.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libOgreMain.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libpthread.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_system.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libignition-transport4.so.4.0.0
../build/lib/libWorldControlPlugin.so: /usr/lib64/libignition-msgs1.so.1.0.0
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_filesystem.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_program_options.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_regex.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_iostreams.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_date_time.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_chrono.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libboost_atomic.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libsdformat.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libOgreMain.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libpthread.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libuuid.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libuuid.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libignition-math4.so.4.0.0
../build/lib/libWorldControlPlugin.so: /usr/lib64/libprotobuf.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgsl.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libgslcblas.so
../build/lib/libWorldControlPlugin.so: /usr/lib64/libyaml-cpp.so.0.6.2
../build/lib/libWorldControlPlugin.so: /usr/lib64/libprotobuf.so
../build/lib/libWorldControlPlugin.so: cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/karinemiras/projects/revolve/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../../build/lib/libWorldControlPlugin.so"
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WorldControlPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/build: ../build/lib/libWorldControlPlugin.so

.PHONY : cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/build

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/clean:
	cd /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo && $(CMAKE_COMMAND) -P CMakeFiles/WorldControlPlugin.dir/cmake_clean.cmake
.PHONY : cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/clean

cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/depend:
	cd /home/karinemiras/projects/revolve/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/karinemiras/projects/revolve /home/karinemiras/projects/revolve/cpprevolve/revolve/gazebo /home/karinemiras/projects/revolve/cmake-build-debug /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo /home/karinemiras/projects/revolve/cmake-build-debug/cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cpprevolve/revolve/gazebo/CMakeFiles/WorldControlPlugin.dir/depend

