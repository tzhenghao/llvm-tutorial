set(CMAKE_CXX_STANDARD 17)            # Enable c++17 standard

set(EXPR_AST "ExprAST")
set(EXE_NAME "main")

add_library(${EXPR_AST} ExprAST.cpp LogError.cpp)
target_include_directories(${EXPR_AST} PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(${EXE_NAME} main.cpp)
target_link_libraries(${EXE_NAME} ${EXPR_AST})
