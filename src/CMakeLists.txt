set(CMAKE_CXX_STANDARD 17)            # Enable c++17 standard

set(EXPR_AST "ExprAST")
set(EXE_NAME "main")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_library(${EXPR_AST} util.cpp)
target_include_directories(${EXPR_AST} PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(${EXE_NAME} main.cpp)
target_link_libraries(${EXE_NAME} ${EXPR_AST})
