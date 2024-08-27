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

void bind_unknown_unknown_45(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::x86::Gp file: line:212
		pybind11::class_<asmjit::x86::Gp, std::shared_ptr<asmjit::x86::Gp>, asmjit::x86::Reg> cl(M("asmjit::x86"), "Gp", "General purpose register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Gp(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Gp const &o){ return new asmjit::x86::Gp(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );


		pybind11::enum_<asmjit::x86::Gp::Id>(cl, "Id", pybind11::arithmetic(), "Physical id (X86).\n\n \n Register indexes have been reduced to only support general purpose registers. There is no need to\n have enumerations with number suffix that expands to the exactly same value as the suffix value itself.")
			.value("kIdAx", asmjit::x86::Gp::kIdAx)
			.value("kIdCx", asmjit::x86::Gp::kIdCx)
			.value("kIdDx", asmjit::x86::Gp::kIdDx)
			.value("kIdBx", asmjit::x86::Gp::kIdBx)
			.value("kIdSp", asmjit::x86::Gp::kIdSp)
			.value("kIdBp", asmjit::x86::Gp::kIdBp)
			.value("kIdSi", asmjit::x86::Gp::kIdSi)
			.value("kIdDi", asmjit::x86::Gp::kIdDi)
			.value("kIdR8", asmjit::x86::Gp::kIdR8)
			.value("kIdR9", asmjit::x86::Gp::kIdR9)
			.value("kIdR10", asmjit::x86::Gp::kIdR10)
			.value("kIdR11", asmjit::x86::Gp::kIdR11)
			.value("kIdR12", asmjit::x86::Gp::kIdR12)
			.value("kIdR13", asmjit::x86::Gp::kIdR13)
			.value("kIdR14", asmjit::x86::Gp::kIdR14)
			.value("kIdR15", asmjit::x86::Gp::kIdR15)
			.export_values();

		cl.def_static("fromTypeAndId", (class asmjit::x86::Gp (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Gp::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Gp::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Gp", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Gp (asmjit::x86::Gp::*)() const) &asmjit::x86::Gp::clone, "C++: asmjit::x86::Gp::clone() const --> class asmjit::x86::Gp");
		cl.def("assign", (class asmjit::x86::Gp & (asmjit::x86::Gp::*)(const class asmjit::x86::Gp &)) &asmjit::x86::Gp::operator=, "C++: asmjit::x86::Gp::operator=(const class asmjit::x86::Gp &) --> class asmjit::x86::Gp &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("r8", (class asmjit::x86::GpbLo (asmjit::x86::Gp::*)() const) &asmjit::x86::Gp::r8, "Casts this register to 8-bit (LO) part.\n\nC++: asmjit::x86::Gp::r8() const --> class asmjit::x86::GpbLo");
		cl.def("r8Lo", (class asmjit::x86::GpbLo (asmjit::x86::Gp::*)() const) &asmjit::x86::Gp::r8Lo, "Casts this register to 8-bit (LO) part.\n\nC++: asmjit::x86::Gp::r8Lo() const --> class asmjit::x86::GpbLo");
		cl.def("r8Hi", (class asmjit::x86::GpbHi (asmjit::x86::Gp::*)() const) &asmjit::x86::Gp::r8Hi, "Casts this register to 8-bit (HI) part.\n\nC++: asmjit::x86::Gp::r8Hi() const --> class asmjit::x86::GpbHi");
		cl.def("r16", (class asmjit::x86::Gpw (asmjit::x86::Gp::*)() const) &asmjit::x86::Gp::r16, "Casts this register to 16-bit.\n\nC++: asmjit::x86::Gp::r16() const --> class asmjit::x86::Gpw");
		cl.def("r32", (class asmjit::x86::Gpd (asmjit::x86::Gp::*)() const) &asmjit::x86::Gp::r32, "Casts this register to 32-bit.\n\nC++: asmjit::x86::Gp::r32() const --> class asmjit::x86::Gpd");
		cl.def("r64", (class asmjit::x86::Gpq (asmjit::x86::Gp::*)() const) &asmjit::x86::Gp::r64, "Casts this register to 64-bit.\n\nC++: asmjit::x86::Gp::r64() const --> class asmjit::x86::Gpq");
	}
	{ // asmjit::x86::Vec file: line:254
		pybind11::class_<asmjit::x86::Vec, std::shared_ptr<asmjit::x86::Vec>, asmjit::x86::Reg> cl(M("asmjit::x86"), "Vec", "Vector register (XMM|YMM|ZMM) (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Vec(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Vec const &o){ return new asmjit::x86::Vec(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Vec (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Vec::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Vec::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Vec", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Vec (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::clone, "C++: asmjit::x86::Vec::clone() const --> class asmjit::x86::Vec");
		cl.def("assign", (class asmjit::x86::Vec & (asmjit::x86::Vec::*)(const class asmjit::x86::Vec &)) &asmjit::x86::Vec::operator=, "C++: asmjit::x86::Vec::operator=(const class asmjit::x86::Vec &) --> class asmjit::x86::Vec &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("xmm", (class asmjit::x86::Xmm (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::xmm, "Casts this register to XMM (clone).\n\nC++: asmjit::x86::Vec::xmm() const --> class asmjit::x86::Xmm");
		cl.def("ymm", (class asmjit::x86::Ymm (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::ymm, "Casts this register to YMM (clone).\n\nC++: asmjit::x86::Vec::ymm() const --> class asmjit::x86::Ymm");
		cl.def("zmm", (class asmjit::x86::Zmm (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::zmm, "Casts this register to ZMM (clone).\n\nC++: asmjit::x86::Vec::zmm() const --> class asmjit::x86::Zmm");
		cl.def("v128", (class asmjit::x86::Vec (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::v128, "Casts this register to XMM (clone).\n\nC++: asmjit::x86::Vec::v128() const --> class asmjit::x86::Vec");
		cl.def("v256", (class asmjit::x86::Vec (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::v256, "Casts this register to YMM (clone).\n\nC++: asmjit::x86::Vec::v256() const --> class asmjit::x86::Vec");
		cl.def("v512", (class asmjit::x86::Vec (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::v512, "Casts this register to ZMM (clone).\n\nC++: asmjit::x86::Vec::v512() const --> class asmjit::x86::Vec");
		cl.def("half", (class asmjit::x86::Vec (asmjit::x86::Vec::*)() const) &asmjit::x86::Vec::half, "Casts this register to a register that has half the size (or XMM if it's already XMM).\n\nC++: asmjit::x86::Vec::half() const --> class asmjit::x86::Vec");
	}
	{ // asmjit::x86::SReg file: line:278
		pybind11::class_<asmjit::x86::SReg, std::shared_ptr<asmjit::x86::SReg>, asmjit::x86::Reg> cl(M("asmjit::x86"), "SReg", "Segment register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::SReg(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::SReg const &o){ return new asmjit::x86::SReg(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );


		pybind11::enum_<asmjit::x86::SReg::Id>(cl, "Id", pybind11::arithmetic(), "X86 segment id.")
			.value("kIdNone", asmjit::x86::SReg::kIdNone)
			.value("kIdEs", asmjit::x86::SReg::kIdEs)
			.value("kIdCs", asmjit::x86::SReg::kIdCs)
			.value("kIdSs", asmjit::x86::SReg::kIdSs)
			.value("kIdDs", asmjit::x86::SReg::kIdDs)
			.value("kIdFs", asmjit::x86::SReg::kIdFs)
			.value("kIdGs", asmjit::x86::SReg::kIdGs)
			.value("kIdCount", asmjit::x86::SReg::kIdCount)
			.export_values();

		cl.def_static("fromTypeAndId", (class asmjit::x86::SReg (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::SReg::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::SReg::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::SReg", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::SReg (asmjit::x86::SReg::*)() const) &asmjit::x86::SReg::clone, "C++: asmjit::x86::SReg::clone() const --> class asmjit::x86::SReg");
		cl.def("assign", (class asmjit::x86::SReg & (asmjit::x86::SReg::*)(const class asmjit::x86::SReg &)) &asmjit::x86::SReg::operator=, "C++: asmjit::x86::SReg::operator=(const class asmjit::x86::SReg &) --> class asmjit::x86::SReg &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::Gpb file: line:308
		pybind11::class_<asmjit::x86::Gpb, std::shared_ptr<asmjit::x86::Gpb>, asmjit::x86::Gp> cl(M("asmjit::x86"), "Gpb", "GPB low or high register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Gpb(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Gpb const &o){ return new asmjit::x86::Gpb(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Gpb (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Gpb::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Gpb::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Gpb", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Gpb (asmjit::x86::Gpb::*)() const) &asmjit::x86::Gpb::clone, "C++: asmjit::x86::Gpb::clone() const --> class asmjit::x86::Gpb");
		cl.def("assign", (class asmjit::x86::Gpb & (asmjit::x86::Gpb::*)(const class asmjit::x86::Gpb &)) &asmjit::x86::Gpb::operator=, "C++: asmjit::x86::Gpb::operator=(const class asmjit::x86::Gpb &) --> class asmjit::x86::Gpb &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::GpbLo file: line:310
		pybind11::class_<asmjit::x86::GpbLo, std::shared_ptr<asmjit::x86::GpbLo>, asmjit::x86::Gpb> cl(M("asmjit::x86"), "GpbLo", "GPB low register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::GpbLo(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::GpbLo const &o){ return new asmjit::x86::GpbLo(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::GpbLo (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::GpbLo::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::GpbLo::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::GpbLo", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::GpbLo (asmjit::x86::GpbLo::*)() const) &asmjit::x86::GpbLo::clone, "C++: asmjit::x86::GpbLo::clone() const --> class asmjit::x86::GpbLo");
		cl.def("assign", (class asmjit::x86::GpbLo & (asmjit::x86::GpbLo::*)(const class asmjit::x86::GpbLo &)) &asmjit::x86::GpbLo::operator=, "C++: asmjit::x86::GpbLo::operator=(const class asmjit::x86::GpbLo &) --> class asmjit::x86::GpbLo &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::GpbHi file: line:312
		pybind11::class_<asmjit::x86::GpbHi, std::shared_ptr<asmjit::x86::GpbHi>, asmjit::x86::Gpb> cl(M("asmjit::x86"), "GpbHi", "GPB high register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::GpbHi(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::GpbHi const &o){ return new asmjit::x86::GpbHi(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::GpbHi (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::GpbHi::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::GpbHi::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::GpbHi", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::GpbHi (asmjit::x86::GpbHi::*)() const) &asmjit::x86::GpbHi::clone, "C++: asmjit::x86::GpbHi::clone() const --> class asmjit::x86::GpbHi");
		cl.def("assign", (class asmjit::x86::GpbHi & (asmjit::x86::GpbHi::*)(const class asmjit::x86::GpbHi &)) &asmjit::x86::GpbHi::operator=, "C++: asmjit::x86::GpbHi::operator=(const class asmjit::x86::GpbHi &) --> class asmjit::x86::GpbHi &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::Gpw file: line:314
		pybind11::class_<asmjit::x86::Gpw, std::shared_ptr<asmjit::x86::Gpw>, asmjit::x86::Gp> cl(M("asmjit::x86"), "Gpw", "GPW register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Gpw(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Gpw const &o){ return new asmjit::x86::Gpw(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Gpw (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Gpw::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Gpw::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Gpw", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Gpw (asmjit::x86::Gpw::*)() const) &asmjit::x86::Gpw::clone, "C++: asmjit::x86::Gpw::clone() const --> class asmjit::x86::Gpw");
		cl.def("assign", (class asmjit::x86::Gpw & (asmjit::x86::Gpw::*)(const class asmjit::x86::Gpw &)) &asmjit::x86::Gpw::operator=, "C++: asmjit::x86::Gpw::operator=(const class asmjit::x86::Gpw &) --> class asmjit::x86::Gpw &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
	{ // asmjit::x86::Gpd file: line:316
		pybind11::class_<asmjit::x86::Gpd, std::shared_ptr<asmjit::x86::Gpd>, asmjit::x86::Gp> cl(M("asmjit::x86"), "Gpd", "GPD register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Gpd(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Gpd const &o){ return new asmjit::x86::Gpd(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def_static("fromTypeAndId", (class asmjit::x86::Gpd (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Gpd::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Gpd::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Gpd", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Gpd (asmjit::x86::Gpd::*)() const) &asmjit::x86::Gpd::clone, "C++: asmjit::x86::Gpd::clone() const --> class asmjit::x86::Gpd");
		cl.def("assign", (class asmjit::x86::Gpd & (asmjit::x86::Gpd::*)(const class asmjit::x86::Gpd &)) &asmjit::x86::Gpd::operator=, "C++: asmjit::x86::Gpd::operator=(const class asmjit::x86::Gpd &) --> class asmjit::x86::Gpd &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
	}
}
