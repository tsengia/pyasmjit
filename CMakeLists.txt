cmake_minimum_required(VERSION 3.15...3.26)
project(pyasmjit LANGUAGES CXX)

set(PYBIND11_FINDPYTHON ON)
find_package(pybind11 CONFIG REQUIRED)

set(ASMJIT_STATIC TRUE)
add_subdirectory(extern/asmjit)

pybind11_add_module(_core MODULE src/main.cpp)
install(TARGETS _core DESTINATION .)