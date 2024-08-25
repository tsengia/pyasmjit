#include <string>

#include "pybind11/pybind11.h"
#include "asmjit/core/api-config.h"

namespace py = pybind11;

void init_core(py::module_ &);
void init_x86(py::module_ &);

std::string get_asm_jit_version() {
    return std::to_string(ASMJIT_LIBRARY_VERSION);
}

PYBIND11_MODULE(_core, m) {
    m.def("get_asm_jit_version", &get_asm_jit_version, "Returns the version of asmjit statically compiled into this package.");

    init_core(m);
    init_x86(m);
}