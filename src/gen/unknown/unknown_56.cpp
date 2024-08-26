
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

void bind_unknown_unknown_56(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::ptr_80_abs(unsigned long) file: line:213
	M("asmjit::x86").def("ptr_80_abs", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_80_abs, "C++: asmjit::x86::ptr_80_abs(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_80_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:214
	M("asmjit::x86").def("ptr_80_abs", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_80_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_80_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_80_abs, "C++: asmjit::x86::ptr_80_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_80_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:215
	M("asmjit::x86").def("ptr_80_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_80_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_80_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_80_abs, "C++: asmjit::x86::ptr_80_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_80_rel(unsigned long) file: line:216
	M("asmjit::x86").def("ptr_80_rel", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_80_rel, "C++: asmjit::x86::ptr_80_rel(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_80_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:217
	M("asmjit::x86").def("ptr_80_rel", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_80_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_80_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_80_rel, "C++: asmjit::x86::ptr_80_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_80_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:218
	M("asmjit::x86").def("ptr_80_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_80_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_80_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_80_rel, "C++: asmjit::x86::ptr_80_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_128(const class asmjit::x86::Gp &, int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](const class asmjit::x86::Gp & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(const class asmjit::x86::Gp &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_128(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_128(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_128(const class asmjit::Label &, int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](const class asmjit::Label & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(const class asmjit::Label &, int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(const class asmjit::Label &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_128(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_128(const class asmjit::x86::Rip &, int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](const class asmjit::x86::Rip & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0); }, "", pybind11::arg("rip_"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(const class asmjit::x86::Rip &, int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(const class asmjit::x86::Rip &, int) --> class asmjit::x86::Mem", pybind11::arg("rip_"), pybind11::arg("offset"));

	// asmjit::x86::ptr_128(unsigned long) file: line:1110
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_128(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_128(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:1110
	M("asmjit::x86").def("ptr_128", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_128, "C++: asmjit::x86::ptr_128(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_128_abs(unsigned long) file: line:219
	M("asmjit::x86").def("ptr_128_abs", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_128_abs, "C++: asmjit::x86::ptr_128_abs(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_128_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:220
	M("asmjit::x86").def("ptr_128_abs", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_128_abs, "C++: asmjit::x86::ptr_128_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_128_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:221
	M("asmjit::x86").def("ptr_128_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_128_abs, "C++: asmjit::x86::ptr_128_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_128_rel(unsigned long) file: line:222
	M("asmjit::x86").def("ptr_128_rel", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::ptr_128_rel, "C++: asmjit::x86::ptr_128_rel(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::ptr_128_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:223
	M("asmjit::x86").def("ptr_128_rel", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::ptr_128_rel, "C++: asmjit::x86::ptr_128_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_128_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:224
	M("asmjit::x86").def("ptr_128_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_128_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_128_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::ptr_128_rel, "C++: asmjit::x86::ptr_128_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::ptr_256(const class asmjit::x86::Gp &, int) file: line:1111
	M("asmjit::x86").def("ptr_256", [](const class asmjit::x86::Gp & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_256", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, int)) &asmjit::x86::ptr_256, "C++: asmjit::x86::ptr_256(const class asmjit::x86::Gp &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_256(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1111
	M("asmjit::x86").def("ptr_256", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_256", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_256", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_256, "C++: asmjit::x86::ptr_256(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_256(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) file: line:1111
	M("asmjit::x86").def("ptr_256", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_256", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_256", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int)) &asmjit::x86::ptr_256, "C++: asmjit::x86::ptr_256(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::ptr_256(const class asmjit::Label &, int) file: line:1111
	M("asmjit::x86").def("ptr_256", [](const class asmjit::Label & a0) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("ptr_256", (class asmjit::x86::Mem (*)(const class asmjit::Label &, int)) &asmjit::x86::ptr_256, "C++: asmjit::x86::ptr_256(const class asmjit::Label &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::ptr_256(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1111
	M("asmjit::x86").def("ptr_256", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("ptr_256", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::ptr_256(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("ptr_256", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::ptr_256, "C++: asmjit::x86::ptr_256(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

}
