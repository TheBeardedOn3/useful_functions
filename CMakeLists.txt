cmake_minimum_required(VERSION 3.5)
project(useful_functions)

SET(CMAKE_CXX_FLAGS "-O3 -std=c++17")

########################
#######DIRECTORY########
########################
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)

########################
######Dependencies######
########################
INCLUDE_DIRECTORIES(
	include
	src
	${PROJECT_SOURCE_DIR}
    
)

#######################
########Library########
#######################
set(useful_lib_SRCS
src/vector.cpp
    #src/math.cpp

)
add_library(useful_lib SHARED  ${useful_lib_SRCS}  
)

# target_link_libraries(useful_lib 
# 	
#  )

########################
########Examples########
########################

#########################
##########Tests##########
#########################
add_executable(test_vec src/test/test_vector.cpp)
target_link_libraries(test_vec
  useful_lib 
)

add_executable(test_math src/test/test_math.cpp)
target_link_libraries(test_math
  useful_lib 
)

#########################
#########INSTALL#########
#########################
#install(TARGETS lib1 LIBRARY DESTINATION lib)

# insert include to usr/lib/include

# export libs to lib path (may need to set permissions)

#learn to make install
