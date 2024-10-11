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
target_link_libraries(${EXE_NAME} ${LIB_NAME})
#######################################################