cmake_minimum_required(VERSION 3.30)

project(neural-network)

################## Set Variables ##################
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/network)
set(LIB_DIR ${ROOT_DIR}/lib)
###################################################

################## Create Library ##################
file(GLOB LIB_SOURCES ${LIB_DIR}/src/*.c)
file(GLOB LIB_HEADERS ${LIB_DIR}/include/*.h)
set(LIB_NAME networklb)
add_library(${LIB_NAME} STATIC ${LIB_SOURCES} ${LIB_HEADERS})
target_include_directories(${LIB_NAME} PUBLIC ${LIB_DIR}/include)
####################################################

################## Create Executable ##################
set(EXE_NAME network)
add_executable(${EXE_NAME} ${ROOT_DIR}/main.c)
target_link_libraries(${EXE_NAME} ${LIB_NAME} m)
#######################################################

####################################################################################
# Install Test Framework:
####################################################################################
include(FetchContent)
FetchContent_Declare(
  unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG        860062d51b2e8a75d150337b63ca2a472840d13c # v2.6.0
)
if (WIN32)
    add_definitions(-DUNITY_SUPPORT_64)
endif (WIN32)
add_definitions(-DUNITY_INCLUDE_DOUBLE)
FetchContent_MakeAvailable(unity)
include(CTest)

####################################################################################
# Add Matrix Tests:
####################################################################################
set(MATRIX_INSERT matrix_insert)
add_executable(${MATRIX_INSERT}_test tests/matrices/${MATRIX_INSERT}.c)
target_link_libraries(${MATRIX_INSERT}_test ${LIB_NAME} unity)
add_test(${MATRIX_INSERT}_test ${MATRIX_INSERT}_test)

####################################################################################
# Add Vector Tests:
####################################################################################
set(VECTOR_INSERT vector_insert)
add_executable(${VECTOR_INSERT}_test tests/vectors/${VECTOR_INSERT}.c)
target_link_libraries(${VECTOR_INSERT}_test ${LIB_NAME} unity)
add_test(${VECTOR_INSERT}_test ${VECTOR_INSERT}_test)

set(VECTOR_ADD vector_add)
add_executable(${VECTOR_ADD}_test tests/vectors/${VECTOR_ADD}.c)
target_link_libraries(${VECTOR_ADD}_test ${LIB_NAME} unity)
add_test(${VECTOR_ADD}_test ${VECTOR_ADD}_test)