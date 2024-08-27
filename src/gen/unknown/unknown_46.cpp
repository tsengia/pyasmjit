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

void bind_unknown_unknown_46(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::x86::Gpq file: line:318
		pybind11::class_<asmjit::x86::Gpq, std::shared_ptr<asmjit::x86::Gpq>, asmjit::x86::Gp> cl(M("asmjit::x86"), "Gpq", "GPQ register (X86_64).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Gpq(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Gpq const &o){ return new asmjit::x86::Gpq(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Gpq (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Gpq::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Gpq::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Gpq", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Gpq (asmjit::x86::Gpq::*)() const) &asmjit::x86::Gpq::clone, "C++: asmjit::x86::Gpq::clone() const --> class asmjit::x86::Gpq");
		cl.def("assign", (class asmjit::x86::Gpq & (asmjit::x86::Gpq::*)(const class asmjit::x86::Gpq &)) &asmjit::x86::Gpq::operator=, "C++: asmjit::x86::Gpq::operator=(const class asmjit::x86::Gpq &) --> class asmjit::x86::Gpq &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::Xmm file: line:321
		pybind11::class_<asmjit::x86::Xmm, std::shared_ptr<asmjit::x86::Xmm>, asmjit::x86::Vec> cl(M("asmjit::x86"), "Xmm", "128-bit XMM register (SSE+).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Xmm(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Xmm const &o){ return new asmjit::x86::Xmm(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Xmm (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Xmm::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Xmm::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Xmm", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Xmm (asmjit::x86::Xmm::*)() const) &asmjit::x86::Xmm::clone, "C++: asmjit::x86::Xmm::clone() const --> class asmjit::x86::Xmm");
		cl.def("assign", (class asmjit::x86::Xmm & (asmjit::x86::Xmm::*)(const class asmjit::x86::Xmm &)) &asmjit::x86::Xmm::operator=, "C++: asmjit::x86::Xmm::operator=(const class asmjit::x86::Xmm &) --> class asmjit::x86::Xmm &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("half", (class asmjit::x86::Xmm (asmjit::x86::Xmm::*)() const) &asmjit::x86::Xmm::half, "Casts this register to a register that has half the size (XMM).\n\nC++: asmjit::x86::Xmm::half() const --> class asmjit::x86::Xmm");
	}
	{ // asmjit::x86::Ymm file: line:328
		pybind11::class_<asmjit::x86::Ymm, std::shared_ptr<asmjit::x86::Ymm>, asmjit::x86::Vec> cl(M("asmjit::x86"), "Ymm", "256-bit YMM register (AVX+).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Ymm(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Ymm const &o){ return new asmjit::x86::Ymm(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Ymm (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Ymm::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Ymm::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Ymm", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Ymm (asmjit::x86::Ymm::*)() const) &asmjit::x86::Ymm::clone, "C++: asmjit::x86::Ymm::clone() const --> class asmjit::x86::Ymm");
		cl.def("assign", (class asmjit::x86::Ymm & (asmjit::x86::Ymm::*)(const class asmjit::x86::Ymm &)) &asmjit::x86::Ymm::operator=, "C++: asmjit::x86::Ymm::operator=(const class asmjit::x86::Ymm &) --> class asmjit::x86::Ymm &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("half", (class asmjit::x86::Xmm (asmjit::x86::Ymm::*)() const) &asmjit::x86::Ymm::half, "Casts this register to a register that has half the size (XMM).\n\nC++: asmjit::x86::Ymm::half() const --> class asmjit::x86::Xmm");
	}
	{ // asmjit::x86::Zmm file: line:335
		pybind11::class_<asmjit::x86::Zmm, std::shared_ptr<asmjit::x86::Zmm>, asmjit::x86::Vec> cl(M("asmjit::x86"), "Zmm", "512-bit ZMM register (AVX512+).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Zmm(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Zmm const &o){ return new asmjit::x86::Zmm(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Zmm (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Zmm::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Zmm::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Zmm", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Zmm (asmjit::x86::Zmm::*)() const) &asmjit::x86::Zmm::clone, "C++: asmjit::x86::Zmm::clone() const --> class asmjit::x86::Zmm");
		cl.def("assign", (class asmjit::x86::Zmm & (asmjit::x86::Zmm::*)(const class asmjit::x86::Zmm &)) &asmjit::x86::Zmm::operator=, "C++: asmjit::x86::Zmm::operator=(const class asmjit::x86::Zmm &) --> class asmjit::x86::Zmm &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("half", (class asmjit::x86::Ymm (asmjit::x86::Zmm::*)() const) &asmjit::x86::Zmm::half, "Casts this register to a register that has half the size (YMM).\n\nC++: asmjit::x86::Zmm::half() const --> class asmjit::x86::Ymm");
	}
	{ // asmjit::x86::Mm file: line:342
		pybind11::class_<asmjit::x86::Mm, std::shared_ptr<asmjit::x86::Mm>, asmjit::x86::Reg> cl(M("asmjit::x86"), "Mm", "64-bit MMX register (MMX+).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Mm(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Mm const &o){ return new asmjit::x86::Mm(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Mm (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Mm::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Mm::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Mm", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Mm (asmjit::x86::Mm::*)() const) &asmjit::x86::Mm::clone, "C++: asmjit::x86::Mm::clone() const --> class asmjit::x86::Mm");
		cl.def("assign", (class asmjit::x86::Mm & (asmjit::x86::Mm::*)(const class asmjit::x86::Mm &)) &asmjit::x86::Mm::operator=, "C++: asmjit::x86::Mm::operator=(const class asmjit::x86::Mm &) --> class asmjit::x86::Mm &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::KReg file: line:344
		pybind11::class_<asmjit::x86::KReg, std::shared_ptr<asmjit::x86::KReg>, asmjit::x86::Reg> cl(M("asmjit::x86"), "KReg", "64-bit K register (AVX512+).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::KReg(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::KReg const &o){ return new asmjit::x86::KReg(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::KReg (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::KReg::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::KReg::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::KReg", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::KReg (asmjit::x86::KReg::*)() const) &asmjit::x86::KReg::clone, "C++: asmjit::x86::KReg::clone() const --> class asmjit::x86::KReg");
		cl.def("assign", (class asmjit::x86::KReg & (asmjit::x86::KReg::*)(const class asmjit::x86::KReg &)) &asmjit::x86::KReg::operator=, "C++: asmjit::x86::KReg::operator=(const class asmjit::x86::KReg &) --> class asmjit::x86::KReg &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::CReg file: line:346
		pybind11::class_<asmjit::x86::CReg, std::shared_ptr<asmjit::x86::CReg>, asmjit::x86::Reg> cl(M("asmjit::x86"), "CReg", "32-bit or 64-bit control register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::CReg(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::CReg const &o){ return new asmjit::x86::CReg(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::CReg (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::CReg::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::CReg::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::CReg", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::CReg (asmjit::x86::CReg::*)() const) &asmjit::x86::CReg::clone, "C++: asmjit::x86::CReg::clone() const --> class asmjit::x86::CReg");
		cl.def("assign", (class asmjit::x86::CReg & (asmjit::x86::CReg::*)(const class asmjit::x86::CReg &)) &asmjit::x86::CReg::operator=, "C++: asmjit::x86::CReg::operator=(const class asmjit::x86::CReg &) --> class asmjit::x86::CReg &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::DReg file: line:348
		pybind11::class_<asmjit::x86::DReg, std::shared_ptr<asmjit::x86::DReg>, asmjit::x86::Reg> cl(M("asmjit::x86"), "DReg", "32-bit or 64-bit debug register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::DReg(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::DReg const &o){ return new asmjit::x86::DReg(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::DReg (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::DReg::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::DReg::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::DReg", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::DReg (asmjit::x86::DReg::*)() const) &asmjit::x86::DReg::clone, "C++: asmjit::x86::DReg::clone() const --> class asmjit::x86::DReg");
		cl.def("assign", (class asmjit::x86::DReg & (asmjit::x86::DReg::*)(const class asmjit::x86::DReg &)) &asmjit::x86::DReg::operator=, "C++: asmjit::x86::DReg::operator=(const class asmjit::x86::DReg &) --> class asmjit::x86::DReg &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::St file: line:350
		pybind11::class_<asmjit::x86::St, std::shared_ptr<asmjit::x86::St>, asmjit::x86::Reg> cl(M("asmjit::x86"), "St", "80-bit FPU register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::St(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::St const &o){ return new asmjit::x86::St(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::St (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::St::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::St::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::St", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::St (asmjit::x86::St::*)() const) &asmjit::x86::St::clone, "C++: asmjit::x86::St::clone() const --> class asmjit::x86::St");
		cl.def("assign", (class asmjit::x86::St & (asmjit::x86::St::*)(const class asmjit::x86::St &)) &asmjit::x86::St::operator=, "C++: asmjit::x86::St::operator=(const class asmjit::x86::St &) --> class asmjit::x86::St &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::Bnd file: line:352
		pybind11::class_<asmjit::x86::Bnd, std::shared_ptr<asmjit::x86::Bnd>, asmjit::x86::Reg> cl(M("asmjit::x86"), "Bnd", "128-bit BND register (BND+).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Bnd(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Bnd const &o){ return new asmjit::x86::Bnd(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Bnd (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Bnd::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Bnd::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Bnd", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Bnd (asmjit::x86::Bnd::*)() const) &asmjit::x86::Bnd::clone, "C++: asmjit::x86::Bnd::clone() const --> class asmjit::x86::Bnd");
		cl.def("assign", (class asmjit::x86::Bnd & (asmjit::x86::Bnd::*)(const class asmjit::x86::Bnd &)) &asmjit::x86::Bnd::operator=, "C++: asmjit::x86::Bnd::operator=(const class asmjit::x86::Bnd &) --> class asmjit::x86::Bnd &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::Tmm file: line:354
		pybind11::class_<asmjit::x86::Tmm, std::shared_ptr<asmjit::x86::Tmm>, asmjit::x86::Reg> cl(M("asmjit::x86"), "Tmm", "8192-bit TMM register (AMX).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Tmm(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Tmm const &o){ return new asmjit::x86::Tmm(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Tmm (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Tmm::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Tmm::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Tmm", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Tmm (asmjit::x86::Tmm::*)() const) &asmjit::x86::Tmm::clone, "C++: asmjit::x86::Tmm::clone() const --> class asmjit::x86::Tmm");
		cl.def("assign", (class asmjit::x86::Tmm & (asmjit::x86::Tmm::*)(const class asmjit::x86::Tmm &)) &asmjit::x86::Tmm::operator=, "C++: asmjit::x86::Tmm::operator=(const class asmjit::x86::Tmm &) --> class asmjit::x86::Tmm &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
}
