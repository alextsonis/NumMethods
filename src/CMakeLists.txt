# Create executable
add_executable (NumMethods test.cpp)

# Source files for library
set(NM_SRC essentials.cpp)
# Create static libraries
add_library(nm STATIC ${NM_SRC})
if (CMAKE_COMPILER_IS_GNUCC)
	target_link_libraries (nm m)
endif (CMAKE_COMPILER_IS_GNUCC)

# Link the libraries
target_link_libraries (NumMethods nm)

# Set executable output directory
SET_TARGET_PROPERTIES(NumMethods PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
