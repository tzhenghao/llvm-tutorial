# llvm-tutorial

Code for LLVM's official tutorial

## Instructions

```cpp
clang++ -g -O3 main.cpp `llvm-config-16 --cxxflags --ldflags --system-libs --libs core` -o toy
```
