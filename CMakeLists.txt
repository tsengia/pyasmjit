cmake_minimum_required(VERSION 3.15...3.26)
project(pyasmjit LANGUAGES CXX)

add_subdirectory(extern/asmjit)
add_subdirectory(extern/pybind11)

pybind11_add_module(_core MODULE src/main.cpp src/core.cpp src/x86.cpp)
target_link_libraries(_core PRIVATE asmjit::asmjit)
install(TARGETS _core DESTINATION .)