cmake_minimum_required(VERSION 3.20)
# "C" is needed here or else LLVM would not be linked correctly.
project(llvm-tutorial LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
set(CMAKE_CXX_STANDARD 17)            # Enable c++17 standard

set(EXE_NAME "toy")

add_executable(${EXE_NAME} src/main.cpp)
target_include_directories(${EXE_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${EXE_NAME} LLVM)
 