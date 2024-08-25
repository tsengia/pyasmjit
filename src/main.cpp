#include <string>

#include "pybind11/pybind11.h"
#include "asmjit/core/api-config.h"

namespace py = pybind11;

std::string get_asm_jit_version() {
    return std::to_string(ASMJIT_LIBRARY_VERSION);
}

PYBIND11_MODULE(pyasmjit, m) {
    m.def("get_asm_jit_version", &get_asm_jit_version, "Returns the version of asmjit statically compiled into this package.");

}