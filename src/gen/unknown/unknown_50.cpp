
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

void bind_unknown_unknown_50(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::ptr(const class asmjit::x86::Gp &, int, unsigned int) file: line:967
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0, int const & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("offset"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, int, unsigned int)) &asmjit::x86::ptr, "Creates `[base.reg + offset]` memory operand.\n\nC++: asmjit::x86::ptr(const class asmjit::x86::Gp &, int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"), pybind11::arg("size"));

	// asmjit::x86::ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int, unsigned int) file: line:971
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2, int const & a3) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2, a3); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int, unsigned int)) &asmjit::x86::ptr, "Creates `[base.reg + (index << shift) + offset]` memory operand (scalar index).\n\nC++: asmjit::x86::ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"), pybind11::arg("size"));

	// asmjit::x86::ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int, unsigned int) file: line:975
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2, int const & a3) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2, a3); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int, unsigned int)) &asmjit::x86::ptr, "Creates `[base.reg + (index << shift) + offset]` memory operand (vector index).\n\nC++: asmjit::x86::ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"), pybind11::arg("size"));

	// asmjit::x86::ptr(const class asmjit::Label &, int, unsigned int) file: line:980
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0, int const & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("offset"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(const class asmjit::Label &, int, unsigned int)) &asmjit::x86::ptr, "Creates `[base + offset]` memory operand.\n\nC++: asmjit::x86::ptr(const class asmjit::Label &, int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"), pybind11::arg("size"));

	// asmjit::x86::ptr(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int, unsigned int) file: line:984
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2, int const & a3) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2, a3); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int, unsigned int)) &asmjit::x86::ptr, "Creates `[base + (index << shift) + offset]` memory operand.\n\nC++: asmjit::x86::ptr(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"), pybind11::arg("size"));

	// asmjit::x86::ptr(const class asmjit::Label &, const class asmjit::x86::Vec &, unsigned int, int, unsigned int) file: line:988
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2, int const & a3) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2, a3); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Vec &, unsigned int, int, unsigned int)) &asmjit::x86::ptr, "Creates `[base + (index << shift) + offset]` memory operand.\n\nC++: asmjit::x86::ptr(const class asmjit::Label &, const class asmjit::x86::Vec &, unsigned int, int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"), pybind11::arg("size"));

	// asmjit::x86::ptr(const class asmjit::x86::Rip &, int, unsigned int) file: line:993
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Rip & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0); }, "", pybind11::arg("rip_"));
	M("asmjit::x86").def("ptr", [](const class asmjit::x86::Rip & a0, int const & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("rip_"), pybind11::arg("offset"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Rip &, int, unsigned int)) &asmjit::x86::ptr, "Creates `[rip + offset]` memory operand.\n\nC++: asmjit::x86::ptr(const class asmjit::x86::Rip &, int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("rip_"), pybind11::arg("offset"), pybind11::arg("size"));

	// asmjit::x86::ptr(unsigned long, unsigned int) file: line:998
	M("asmjit::x86").def("ptr", [](unsigned long const & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(unsigned long, unsigned int)) &asmjit::x86::ptr, "Creates `[base]` absolute memory operand.\n\nC++: asmjit::x86::ptr(unsigned long, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("size"));

	// asmjit::x86::ptr(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int) file: line:1002
	M("asmjit::x86").def("ptr", [](unsigned long const & a0, const class asmjit::x86::Reg & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr", [](unsigned long const & a0, const class asmjit::x86::Reg & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int)) &asmjit::x86::ptr, "Creates `[base + (index.reg << shift)]` absolute memory operand.\n\nC++: asmjit::x86::ptr(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"));

	// asmjit::x86::ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int) file: line:1006
	M("asmjit::x86").def("ptr", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr", [](unsigned long const & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int)) &asmjit::x86::ptr, "Creates `[base + (index.reg << shift)]` absolute memory operand.\n\nC++: asmjit::x86::ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"));

	// asmjit::x86::ptr_abs(unsigned long, unsigned int) file: line:1011
	M("asmjit::x86").def("ptr_abs", [](unsigned long const & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_abs(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, unsigned int)) &asmjit::x86::ptr_abs, "Creates `[base]` absolute memory operand (absolute).\n\nC++: asmjit::x86::ptr_abs(unsigned long, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("size"));

	// asmjit::x86::ptr_abs(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int) file: line:1015
	M("asmjit::x86").def("ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Reg & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Reg & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_abs(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int)) &asmjit::x86::ptr_abs, "Creates `[base + (index.reg << shift)]` absolute memory operand (absolute).\n\nC++: asmjit::x86::ptr_abs(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"));

	// asmjit::x86::ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int) file: line:1019
	M("asmjit::x86").def("ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_abs(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int)) &asmjit::x86::ptr_abs, "Creates `[base + (index.reg << shift)]` absolute memory operand (absolute).\n\nC++: asmjit::x86::ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"));

	// asmjit::x86::ptr_rel(unsigned long, unsigned int) file: line:1024
	M("asmjit::x86").def("ptr_rel", [](unsigned long const & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_rel(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, unsigned int)) &asmjit::x86::ptr_rel, "Creates `[base]` relative memory operand (relative).\n\nC++: asmjit::x86::ptr_rel(unsigned long, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("size"));

	// asmjit::x86::ptr_rel(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int) file: line:1028
	M("asmjit::x86").def("ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Reg & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Reg & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_rel(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int)) &asmjit::x86::ptr_rel, "Creates `[base + (index.reg << shift)]` relative memory operand (relative).\n\nC++: asmjit::x86::ptr_rel(unsigned long, const class asmjit::x86::Reg &, unsigned int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"));

	// asmjit::x86::ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int) file: line:1032
	M("asmjit::x86").def("ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_rel(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int)) &asmjit::x86::ptr_rel, "Creates `[base + (index.reg << shift)]` relative memory operand (relative).\n\nC++: asmjit::x86::ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"));

	// asmjit::x86::ptr_8(const class asmjit::x86::Gp &, int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](const class asmjit::x86::Gp & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(const class asmjit::x86::Gp &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_8(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

}
