cmake_minimum_required(VERSION 3.15...3.26)
project(pyasmjit LANGUAGES CXX)

add_subdirectory(extern/asmjit)
add_subdirectory(extern/pybind11)

file(GLOB_RECURSE BinderGeneratedSourceCode RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "src/gen/*.cpp")

message("Sources: ${BinderGeneratedSourceCode}")

pybind11_add_module(_pyasmjit MODULE ${BinderGeneratedSourceCode})
target_link_libraries(_pyasmjit PRIVATE asmjit::asmjit)
install(TARGETS _pyasmjit DESTINATION .)