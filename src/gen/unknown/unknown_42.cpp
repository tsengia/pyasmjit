
#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include "asmjit/asmjit.h"
#include "asmjit/arm.h"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>, false)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*, false)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_42(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::Inst::isDefinedId(unsigned int) file: line:1852
	M("asmjit::x86::Inst").def("isDefinedId", (bool (*)(unsigned int)) &asmjit::x86::Inst::isDefinedId, "Tests whether the `instId` is defined.\n\nC++: asmjit::x86::Inst::isDefinedId(unsigned int) --> bool", pybind11::arg("instId"));

	// asmjit::x86::Inst::jccFromCond(enum asmjit::x86::CondCode) file: line:1869
	M("asmjit::x86::Inst").def("jccFromCond", (unsigned int (*)(enum asmjit::x86::CondCode)) &asmjit::x86::Inst::jccFromCond, "Translates a condition code `cond` to a `jcc` instruction id.\n\nC++: asmjit::x86::Inst::jccFromCond(enum asmjit::x86::CondCode) --> unsigned int", pybind11::arg("cond"));

	// asmjit::x86::Inst::setccFromCond(enum asmjit::x86::CondCode) file: line:1871
	M("asmjit::x86::Inst").def("setccFromCond", (unsigned int (*)(enum asmjit::x86::CondCode)) &asmjit::x86::Inst::setccFromCond, "Translates a condition code `cond` to a `setcc` instruction id.\n\nC++: asmjit::x86::Inst::setccFromCond(enum asmjit::x86::CondCode) --> unsigned int", pybind11::arg("cond"));

	// asmjit::x86::Inst::cmovccFromCond(enum asmjit::x86::CondCode) file: line:1873
	M("asmjit::x86::Inst").def("cmovccFromCond", (unsigned int (*)(enum asmjit::x86::CondCode)) &asmjit::x86::Inst::cmovccFromCond, "Translates a condition code `cond` to a `cmovcc` instruction id.\n\nC++: asmjit::x86::Inst::cmovccFromCond(enum asmjit::x86::CondCode) --> unsigned int", pybind11::arg("cond"));

}
