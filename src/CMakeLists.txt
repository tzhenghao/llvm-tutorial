set(CMAKE_CXX_STANDARD 17)            # Enable c++17 standard

set(EXPR_AST "ExprAST")
set(EXE_NAME "main")

add_executable(${EXE_NAME} main.cpp)
target_include_directories(${EXE_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${EXE_NAME} LLVM)