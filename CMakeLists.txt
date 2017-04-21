cmake_minimum_required (VERSION 2.6)

# Project name and version
project (NumMethods)
set(NM_MAJOR_VERSION 0)
set(NM_MINOR_VERSION 1)
set(NM_PATCH_VERSION 1)

# Compiler flags
if (CMAKE_COMPILER_IS_GNUCC)
	SET(CMAKE_C_FLAGS "")
	SET(CMAKE_C_FLAGS_DEBUG "-g -Wall -Wno-unused-function")
	SET(CMAKE_C_FLAGS_RELEASE "-w -O2")
endif (CMAKE_COMPILER_IS_GNUCC)

############################# DO NOT EDIT THESE ################################

# Write cmake settings to header file

# Include edited header file
INCLUDE_DIRECTORIES("${PROJECT_BINARY_DIR}")


add_subdirectory(src)
