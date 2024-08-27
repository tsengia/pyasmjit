
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
	// asmjit::x86::byte_ptr(const class asmjit::Label &, int) file: line:1115
	M("asmjit::x86").def("byte_ptr", [](const class asmjit::Label & a0) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("byte_ptr", (class asmjit::x86::Mem (*)(const class asmjit::Label &, int)) &asmjit::x86::byte_ptr, "C++: asmjit::x86::byte_ptr(const class asmjit::Label &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::byte_ptr(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1115
	M("asmjit::x86").def("byte_ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("byte_ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("byte_ptr", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::byte_ptr, "C++: asmjit::x86::byte_ptr(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::byte_ptr(const class asmjit::x86::Rip &, int) file: line:1115
	M("asmjit::x86").def("byte_ptr", [](const class asmjit::x86::Rip & a0) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr(a0); }, "", pybind11::arg("rip_"));
	M("asmjit::x86").def("byte_ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Rip &, int)) &asmjit::x86::byte_ptr, "C++: asmjit::x86::byte_ptr(const class asmjit::x86::Rip &, int) --> class asmjit::x86::Mem", pybind11::arg("rip_"), pybind11::arg("offset"));

	// asmjit::x86::byte_ptr(unsigned long) file: line:1115
	M("asmjit::x86").def("byte_ptr", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::byte_ptr, "C++: asmjit::x86::byte_ptr(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::byte_ptr(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:1115
	M("asmjit::x86").def("byte_ptr", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("byte_ptr", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::byte_ptr, "C++: asmjit::x86::byte_ptr(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::byte_ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:1115
	M("asmjit::x86").def("byte_ptr", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("byte_ptr", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::byte_ptr, "C++: asmjit::x86::byte_ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::byte_ptr_abs(unsigned long) file: line:237
	M("asmjit::x86").def("byte_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::byte_ptr_abs, "C++: asmjit::x86::byte_ptr_abs(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::byte_ptr_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:238
	M("asmjit::x86").def("byte_ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("byte_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::byte_ptr_abs, "C++: asmjit::x86::byte_ptr_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::byte_ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:239
	M("asmjit::x86").def("byte_ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("byte_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::byte_ptr_abs, "C++: asmjit::x86::byte_ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::byte_ptr_rel(unsigned long) file: line:240
	M("asmjit::x86").def("byte_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::byte_ptr_rel, "C++: asmjit::x86::byte_ptr_rel(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::byte_ptr_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:241
	M("asmjit::x86").def("byte_ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("byte_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::byte_ptr_rel, "C++: asmjit::x86::byte_ptr_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::byte_ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:242
	M("asmjit::x86").def("byte_ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::byte_ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("byte_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::byte_ptr_rel, "C++: asmjit::x86::byte_ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::word_ptr(const class asmjit::x86::Gp &, int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](const class asmjit::x86::Gp & a0) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(const class asmjit::x86::Gp &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::word_ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::word_ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr", [](const class asmjit::x86::Gp & a0, const class asmjit::x86::Vec & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(const class asmjit::x86::Gp &, const class asmjit::x86::Vec &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::word_ptr(const class asmjit::Label &, int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](const class asmjit::Label & a0) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(const class asmjit::Label &, int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(const class asmjit::Label &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

	// asmjit::x86::word_ptr(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr", [](const class asmjit::Label & a0, const class asmjit::x86::Gp & a1, unsigned int const & a2) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1, a2); }, "", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(const class asmjit::Label &, const class asmjit::x86::Gp &, unsigned int, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("offset"));

	// asmjit::x86::word_ptr(const class asmjit::x86::Rip &, int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](const class asmjit::x86::Rip & a0) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0); }, "", pybind11::arg("rip_"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Rip &, int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(const class asmjit::x86::Rip &, int) --> class asmjit::x86::Mem", pybind11::arg("rip_"), pybind11::arg("offset"));

	// asmjit::x86::word_ptr(unsigned long) file: line:1116
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::word_ptr(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::word_ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:1116
	M("asmjit::x86").def("word_ptr", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::word_ptr, "C++: asmjit::x86::word_ptr(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::word_ptr_abs(unsigned long) file: line:243
	M("asmjit::x86").def("word_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::word_ptr_abs, "C++: asmjit::x86::word_ptr_abs(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::word_ptr_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:244
	M("asmjit::x86").def("word_ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::word_ptr_abs, "C++: asmjit::x86::word_ptr_abs(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::word_ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:245
	M("asmjit::x86").def("word_ptr_abs", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr_abs(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr_abs", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::word_ptr_abs, "C++: asmjit::x86::word_ptr_abs(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::word_ptr_rel(unsigned long) file: line:246
	M("asmjit::x86").def("word_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long)) &asmjit::x86::word_ptr_rel, "C++: asmjit::x86::word_ptr_rel(unsigned long) --> class asmjit::x86::Mem", pybind11::arg("base"));

	// asmjit::x86::word_ptr_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) file: line:247
	M("asmjit::x86").def("word_ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Gp & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Gp &, unsigned int)) &asmjit::x86::word_ptr_rel, "C++: asmjit::x86::word_ptr_rel(unsigned long, const class asmjit::x86::Gp &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::word_ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) file: line:248
	M("asmjit::x86").def("word_ptr_rel", [](unsigned long const & a0, const class asmjit::x86::Vec & a1) -> asmjit::x86::Mem { return asmjit::x86::word_ptr_rel(a0, a1); }, "", pybind11::arg("base"), pybind11::arg("index"));
	M("asmjit::x86").def("word_ptr_rel", (class asmjit::x86::Mem (*)(unsigned long, const class asmjit::x86::Vec &, unsigned int)) &asmjit::x86::word_ptr_rel, "C++: asmjit::x86::word_ptr_rel(unsigned long, const class asmjit::x86::Vec &, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));

	// asmjit::x86::dword_ptr(const class asmjit::x86::Gp &, int) file: line:1117
	M("asmjit::x86").def("dword_ptr", [](const class asmjit::x86::Gp & a0) -> asmjit::x86::Mem { return asmjit::x86::dword_ptr(a0); }, "", pybind11::arg("base"));
	M("asmjit::x86").def("dword_ptr", (class asmjit::x86::Mem (*)(const class asmjit::x86::Gp &, int)) &asmjit::x86::dword_ptr, "C++: asmjit::x86::dword_ptr(const class asmjit::x86::Gp &, int) --> class asmjit::x86::Mem", pybind11::arg("base"), pybind11::arg("offset"));

}
