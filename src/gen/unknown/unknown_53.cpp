
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

void bind_unknown_unknown_53(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::ptr_8(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_8(const class asmjit::Label &, int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](const class asmjit::Label & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(const class asmjit::Label &, int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(const class asmjit::Label &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_8(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_8(const class asmjit::x86::Rip &, int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](const class asmjit::x86::Rip & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0); }, "", pybind11::arg("rip_"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(const class asmjit::x86::Rip &, int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(const class asmjit::x86::Rip &, int) --> class asmjit::x86::Mem", pybind11::arg("rip_"), pybind11::arg("offset"));

	// asmjit::x86::ptr_8(unsigned long) file: line:1104
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_8(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_8(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:1104
	M("asmjit::x86").def("ptr_8", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_8, "C++: asmjit::x86::ptr_8(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_8_abs(unsigned long) file: line:183
	M("asmjit::x86").def("ptr_8_abs", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_8_abs, "C++: asmjit::x86::ptr_8_abs(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_8_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:184
	M("asmjit::x86").def("ptr_8_abs", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_8_abs, "C++: asmjit::x86::ptr_8_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_8_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:185
	M("asmjit::x86").def("ptr_8_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_8_abs, "C++: asmjit::x86::ptr_8_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_8_rel(unsigned long) file: line:186
	M("asmjit::x86").def("ptr_8_rel", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_8_rel, "C++: asmjit::x86::ptr_8_rel(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_8_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:187
	M("asmjit::x86").def("ptr_8_rel", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_8_rel, "C++: asmjit::x86::ptr_8_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_8_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:188
	M("asmjit::x86").def("ptr_8_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_8_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_8_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_8_rel, "C++: asmjit::x86::ptr_8_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_16(const class asmjit::x86::Gp &, int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](const class asmjit::x86::Gp & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(const class asmjit::x86::Gp &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_16(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_16(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_16(const class asmjit::Label &, int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](const class asmjit::Label & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(const class asmjit::Label &, int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(const class asmjit::Label &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_16(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_16(const class asmjit::x86::Rip &, int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](const class asmjit::x86::Rip & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0); }, "", pybind11::arg("rip_"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(const class asmjit::x86::Rip &, int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(const class asmjit::x86::Rip &, int) --> class asmjit::x86::Mem", pybind11::arg("rip_"), pybind11::arg("offset"));

	// asmjit::x86::ptr_16(unsigned long) file: line:1105
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_16(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_16(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:1105
	M("asmjit::x86").def("ptr_16", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_16, "C++: asmjit::x86::ptr_16(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_16_abs(unsigned long) file: line:189
	M("asmjit::x86").def("ptr_16_abs", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_16_abs, "C++: asmjit::x86::ptr_16_abs(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_16_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:190
	M("asmjit::x86").def("ptr_16_abs", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_16_abs, "C++: asmjit::x86::ptr_16_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_16_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:191
	M("asmjit::x86").def("ptr_16_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_16_abs, "C++: asmjit::x86::ptr_16_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_16_rel(unsigned long) file: line:192
	M("asmjit::x86").def("ptr_16_rel", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_16_rel, "C++: asmjit::x86::ptr_16_rel(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_16_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:193
	M("asmjit::x86").def("ptr_16_rel", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_16_rel, "C++: asmjit::x86::ptr_16_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_16_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:194
	M("asmjit::x86").def("ptr_16_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_16_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_16_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_16_rel, "C++: asmjit::x86::ptr_16_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

}
