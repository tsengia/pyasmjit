
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

void bind_unknown_unknown_65(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::zmmword_ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:1127
	M("asmjit::x86").def("zmmword_ptr", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::zmmword_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("zmmword_ptr", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::zmmword_ptr, "C++: asmjit::x86::zmmword_ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::zmmword_ptr_abs(unsigned long) file: line:309
	M("asmjit::x86").def("zmmword_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::zmmword_ptr_abs, "C++: asmjit::x86::zmmword_ptr_abs(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::zmmword_ptr_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:310
	M("asmjit::x86").def("zmmword_ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::zmmword_ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("zmmword_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::zmmword_ptr_abs, "C++: asmjit::x86::zmmword_ptr_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::zmmword_ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:311
	M("asmjit::x86").def("zmmword_ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::zmmword_ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("zmmword_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::zmmword_ptr_abs, "C++: asmjit::x86::zmmword_ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::zmmword_ptr_rel(unsigned long) file: line:312
	M("asmjit::x86").def("zmmword_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::zmmword_ptr_rel, "C++: asmjit::x86::zmmword_ptr_rel(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::zmmword_ptr_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:313
	M("asmjit::x86").def("zmmword_ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::zmmword_ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("zmmword_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::zmmword_ptr_rel, "C++: asmjit::x86::zmmword_ptr_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::zmmword_ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:314
	M("asmjit::x86").def("zmmword_ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::zmmword_ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("zmmword_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::zmmword_ptr_rel, "C++: asmjit::x86::zmmword_ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

}
