# llvm-tutorial

Code for LLVM's official tutorial

## Instructions

### CMake (recommended)

1. Navigate to the `build` directory: `cd build`
2. Configure and generate build files with CMake (via Ninja): `cmake .. -G Ninja`
3. Build with Ninja: `ninja`

### Manual (with clang)

```cpp
clang++ -g -O3 main.cpp `llvm-config-16 --cxxflags --ldflags --system-libs --libs core` -o toy
```
