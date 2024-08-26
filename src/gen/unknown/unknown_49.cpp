#include <sstream> // __str__

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

void bind_unknown_unknown_49(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::x86::Rip file: line:356
		pybind11::class_<asmjit::x86::Rip, std::shared_ptr<asmjit::x86::Rip>, asmjit::x86::Reg> cl(M("asmjit::x86"), "Rip", "RIP register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Rip(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Rip const &o){ return new asmjit::x86::Rip(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Rip (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Rip::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Rip::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Rip", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Rip (asmjit::x86::Rip::*)() const) &asmjit::x86::Rip::clone, "C++: asmjit::x86::Rip::clone() const --> class asmjit::x86::Rip");
		cl.def("assign", (class asmjit::x86::Rip & (asmjit::x86::Rip::*)(const class asmjit::x86::Rip &)) &asmjit::x86::Rip::operator=, "C++: asmjit::x86::Rip::operator=(const class asmjit::x86::Rip &) --> class asmjit::x86::Rip &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
}
