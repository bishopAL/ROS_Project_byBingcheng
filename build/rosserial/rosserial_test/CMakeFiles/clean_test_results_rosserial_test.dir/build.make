# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bingbing/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bingbing/catkin_ws/build

# Utility rule file for clean_test_results_rosserial_test.

# Include the progress variables for this target.
include rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/progress.make

rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test:
	cd /home/bingbing/catkin_ws/build/rosserial/rosserial_test && /usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/remove_test_results.py /home/bingbing/catkin_ws/build/test_results/rosserial_test

clean_test_results_rosserial_test: rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test
clean_test_results_rosserial_test: rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/build.make

.PHONY : clean_test_results_rosserial_test

# Rule to build all files generated by this target.
rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/build: clean_test_results_rosserial_test

.PHONY : rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/build

rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/clean:
	cd /home/bingbing/catkin_ws/build/rosserial/rosserial_test && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_rosserial_test.dir/cmake_clean.cmake
.PHONY : rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/clean

rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/depend:
	cd /home/bingbing/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bingbing/catkin_ws/src /home/bingbing/catkin_ws/src/rosserial/rosserial_test /home/bingbing/catkin_ws/build /home/bingbing/catkin_ws/build/rosserial/rosserial_test /home/bingbing/catkin_ws/build/rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rosserial/rosserial_test/CMakeFiles/clean_test_results_rosserial_test.dir/depend

