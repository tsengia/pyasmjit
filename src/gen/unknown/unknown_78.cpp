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

void bind_unknown_unknown_78(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kGp32>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kGp32>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kGp32_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kGp32>(); } ) );
	}
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kGp64>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kGp64>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kGp64_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kGp64>(); } ) );
	}
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kVec8>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kVec8>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kVec8_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kVec8>(); } ) );
	}
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kVec16>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kVec16>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kVec16_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kVec16>(); } ) );
	}
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kVec32>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kVec32>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kVec32_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kVec32>(); } ) );
	}
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kVec64>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kVec64>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kVec64_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kVec64>(); } ) );
	}
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kVec128>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kVec128>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kVec128_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kVec128>(); } ) );
	}
	{ // asmjit::arm::RegTraits file: line:1168
		pybind11::class_<asmjit::arm::RegTraits<asmjit::RegType::kPC>, std::shared_ptr<asmjit::arm::RegTraits<asmjit::RegType::kPC>>> cl(M("asmjit::arm"), "RegTraits_asmjit_RegType_kPC_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::arm::RegTraits<asmjit::RegType::kPC>(); } ) );
	}
	{ // asmjit::arm::Reg file: line:45
		pybind11::class_<asmjit::arm::Reg, std::shared_ptr<asmjit::arm::Reg>, asmjit::BaseReg> cl(M("asmjit::arm"), "Reg", "Register operand that can represent AArch32 and AArch64 registers.");
		cl.def( pybind11::init( [](){ return new asmjit::arm::Reg(); } ) );
		cl.def( pybind11::init( [](asmjit::arm::Reg const &o){ return new asmjit::arm::Reg(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def_static("fromTypeAndId", (class asmjit::arm::Reg (*)(enum asmjit::RegType, unsigned int)) &asmjit::arm::Reg::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::arm::Reg::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::arm::Reg", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::arm::Reg (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::clone, "C++: asmjit::arm::Reg::clone() const --> class asmjit::arm::Reg");
		cl.def("assign", (class asmjit::arm::Reg & (asmjit::arm::Reg::*)(const class asmjit::arm::Reg &)) &asmjit::arm::Reg::operator=, "C++: asmjit::arm::Reg::operator=(const class asmjit::arm::Reg &) --> class asmjit::arm::Reg &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("isGpR", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isGpR, "Gets whether the register is either `R` or `W` register (32-bit).\n\nC++: asmjit::arm::Reg::isGpR() const --> bool");
		cl.def("isGpW", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isGpW, "Gets whether the register is either `R` or `W` register (32-bit).\n\nC++: asmjit::arm::Reg::isGpW() const --> bool");
		cl.def("isGpX", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isGpX, "Gets whether the register is an `X` register (64-bit).\n\nC++: asmjit::arm::Reg::isGpX() const --> bool");
		cl.def("isVecB", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVecB, "Gets whether the register is a VEC-B register (8-bit).\n\nC++: asmjit::arm::Reg::isVecB() const --> bool");
		cl.def("isVecH", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVecH, "Gets whether the register is a VEC-H register (16-bit).\n\nC++: asmjit::arm::Reg::isVecH() const --> bool");
		cl.def("isVecS", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVecS, "Gets whether the register is a VEC-S register (32-bit).\n\nC++: asmjit::arm::Reg::isVecS() const --> bool");
		cl.def("isVecD", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVecD, "Gets whether the register is a VEC-D register (64-bit).\n\nC++: asmjit::arm::Reg::isVecD() const --> bool");
		cl.def("isVecQ", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVecQ, "Gets whether the register is a VEC-Q register (128-bit).\n\nC++: asmjit::arm::Reg::isVecQ() const --> bool");
		cl.def("isVecDOrQ", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVecDOrQ, "Gets whether the register is either VEC-D (64-bit) or VEC-Q (128-bit).\n\nC++: asmjit::arm::Reg::isVecDOrQ() const --> bool");
		cl.def("isVecV", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVecV, "Gets whether the register is a VEC-V register (128-bit).\n\nC++: asmjit::arm::Reg::isVecV() const --> bool");
		cl.def("isVec8", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVec8, "Gets whether the register is an 8-bit vector register or view, alias if \n\nC++: asmjit::arm::Reg::isVec8() const --> bool");
		cl.def("isVec16", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVec16, "Gets whether the register is a 16-bit vector register or view, alias if \n\nC++: asmjit::arm::Reg::isVec16() const --> bool");
		cl.def("isVec32", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVec32, "Gets whether the register is a 32-bit vector register or view, alias if \n\nC++: asmjit::arm::Reg::isVec32() const --> bool");
		cl.def("isVec64", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVec64, "Gets whether the register is a 64-bit vector register or view, alias if \n\nC++: asmjit::arm::Reg::isVec64() const --> bool");
		cl.def("isVec128", (bool (asmjit::arm::Reg::*)() const) &asmjit::arm::Reg::isVec128, "Gets whether the register is a 128-bit vector register or view, alias if \n\nC++: asmjit::arm::Reg::isVec128() const --> bool");
		cl.def("setTypeAndId", (void (asmjit::arm::Reg::*)(enum asmjit::RegType, unsigned int)) &asmjit::arm::Reg::setTypeAndId, "C++: asmjit::arm::Reg::setTypeAndId(enum asmjit::RegType, unsigned int) --> void", pybind11::arg("type"), pybind11::arg("id"));
		cl.def_static("groupOf", (enum asmjit::RegGroup (*)(enum asmjit::RegType)) &asmjit::arm::Reg::groupOf, "C++: asmjit::arm::Reg::groupOf(enum asmjit::RegType) --> enum asmjit::RegGroup", pybind11::arg("type"));
		cl.def_static("typeIdOf", (enum asmjit::TypeId (*)(enum asmjit::RegType)) &asmjit::arm::Reg::typeIdOf, "C++: asmjit::arm::Reg::typeIdOf(enum asmjit::RegType) --> enum asmjit::TypeId", pybind11::arg("type"));
		cl.def_static("signatureOf", (struct asmjit::OperandSignature (*)(enum asmjit::RegType)) &asmjit::arm::Reg::signatureOf, "C++: asmjit::arm::Reg::signatureOf(enum asmjit::RegType) --> struct asmjit::OperandSignature", pybind11::arg("type"));
		cl.def_static("isGpW", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isGpW, "C++: asmjit::arm::Reg::isGpW(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpX", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isGpX, "C++: asmjit::arm::Reg::isGpX(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isVecB", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isVecB, "C++: asmjit::arm::Reg::isVecB(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isVecH", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isVecH, "C++: asmjit::arm::Reg::isVecH(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isVecS", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isVecS, "C++: asmjit::arm::Reg::isVecS(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isVecD", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isVecD, "C++: asmjit::arm::Reg::isVecD(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isVecQ", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isVecQ, "C++: asmjit::arm::Reg::isVecQ(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isVecV", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::arm::Reg::isVecV, "C++: asmjit::arm::Reg::isVecV(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpW", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isGpW, "C++: asmjit::arm::Reg::isGpW(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isGpX", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isGpX, "C++: asmjit::arm::Reg::isGpX(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isVecB", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isVecB, "C++: asmjit::arm::Reg::isVecB(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isVecH", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isVecH, "C++: asmjit::arm::Reg::isVecH(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isVecS", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isVecS, "C++: asmjit::arm::Reg::isVecS(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isVecD", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isVecD, "C++: asmjit::arm::Reg::isVecD(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isVecQ", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isVecQ, "C++: asmjit::arm::Reg::isVecQ(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isVecV", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::arm::Reg::isVecV, "C++: asmjit::arm::Reg::isVecV(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
	}
	{ // asmjit::arm::BaseVec file: line:126
		pybind11::class_<asmjit::arm::BaseVec, std::shared_ptr<asmjit::arm::BaseVec>, asmjit::arm::Reg> cl(M("asmjit::arm"), "BaseVec", "Vector register base - a common base for both AArch32 & AArch64 vector register.");
		cl.def( pybind11::init( [](){ return new asmjit::arm::BaseVec(); } ) );
		cl.def( pybind11::init( [](asmjit::arm::BaseVec const &o){ return new asmjit::arm::BaseVec(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );


		pybind11::enum_<asmjit::arm::BaseVec::AdditionalBits>(cl, "AdditionalBits", pybind11::arithmetic(), "Additional signature bits used by a vector register.")
			.value("kSignatureRegElementTypeShift", asmjit::arm::BaseVec::kSignatureRegElementTypeShift)
			.value("kSignatureRegElementTypeMask", asmjit::arm::BaseVec::kSignatureRegElementTypeMask)
			.value("kSignatureRegElementFlagShift", asmjit::arm::BaseVec::kSignatureRegElementFlagShift)
			.value("kSignatureRegElementFlagMask", asmjit::arm::BaseVec::kSignatureRegElementFlagMask)
			.value("kSignatureRegElementIndexShift", asmjit::arm::BaseVec::kSignatureRegElementIndexShift)
			.value("kSignatureRegElementIndexMask", asmjit::arm::BaseVec::kSignatureRegElementIndexMask)
			.export_values();

		cl.def_static("fromTypeAndId", (class asmjit::arm::BaseVec (*)(enum asmjit::RegType, unsigned int)) &asmjit::arm::BaseVec::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::arm::BaseVec::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::arm::BaseVec", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::arm::BaseVec (asmjit::arm::BaseVec::*)() const) &asmjit::arm::BaseVec::clone, "C++: asmjit::arm::BaseVec::clone() const --> class asmjit::arm::BaseVec");
		cl.def("assign", (class asmjit::arm::BaseVec & (asmjit::arm::BaseVec::*)(const class asmjit::arm::BaseVec &)) &asmjit::arm::BaseVec::operator=, "C++: asmjit::arm::BaseVec::operator=(const class asmjit::arm::BaseVec &) --> class asmjit::arm::BaseVec &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("hasElementIndex", (bool (asmjit::arm::BaseVec::*)() const) &asmjit::arm::BaseVec::hasElementIndex, "Returns whether the register has element index (it's an element index access).\n\nC++: asmjit::arm::BaseVec::hasElementIndex() const --> bool");
		cl.def("elementIndex", (unsigned int (asmjit::arm::BaseVec::*)() const) &asmjit::arm::BaseVec::elementIndex, "Returns element index of the register.\n\nC++: asmjit::arm::BaseVec::elementIndex() const --> unsigned int");
		cl.def("setElementIndex", (void (asmjit::arm::BaseVec::*)(unsigned int)) &asmjit::arm::BaseVec::setElementIndex, "Sets element index of the register to `elementType`.\n\nC++: asmjit::arm::BaseVec::setElementIndex(unsigned int) --> void", pybind11::arg("elementIndex"));
		cl.def("resetElementIndex", (void (asmjit::arm::BaseVec::*)()) &asmjit::arm::BaseVec::resetElementIndex, "Resets element index of the register.\n\nC++: asmjit::arm::BaseVec::resetElementIndex() --> void");
	}
	{ // asmjit::arm::Mem file: line:164
		pybind11::class_<asmjit::arm::Mem, std::shared_ptr<asmjit::arm::Mem>, asmjit::BaseMem> cl(M("asmjit::arm"), "Mem", "Memory operand (ARM).");
		cl.def( pybind11::init( [](){ return new asmjit::arm::Mem(); } ) );
		cl.def( pybind11::init( [](asmjit::arm::Mem const &o){ return new asmjit::arm::Mem(o); } ) );
		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int, unsigned int, int>(), pybind11::arg("signature"), pybind11::arg("baseId"), pybind11::arg("indexId"), pybind11::arg("offset") );

		cl.def( pybind11::init( [](const class asmjit::Label & a0){ return new asmjit::arm::Mem(a0); } ), "doc" , pybind11::arg("base"));
		cl.def( pybind11::init( [](const class asmjit::Label & a0, int const & a1){ return new asmjit::arm::Mem(a0, a1); } ), "doc" , pybind11::arg("base"), pybind11::arg("off"));
		cl.def( pybind11::init<const class asmjit::Label &, int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("off"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0){ return new asmjit::arm::Mem(a0); } ), "doc" , pybind11::arg("base"));
		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0, int const & a1){ return new asmjit::arm::Mem(a0, a1); } ), "doc" , pybind11::arg("base"), pybind11::arg("off"));
		cl.def( pybind11::init<const class asmjit::BaseReg &, int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("off"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0, const class asmjit::BaseReg & a1){ return new asmjit::arm::Mem(a0, a1); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"));
		cl.def( pybind11::init<const class asmjit::BaseReg &, const class asmjit::BaseReg &, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0, const class asmjit::BaseReg & a1, const class asmjit::arm::Shift & a2){ return new asmjit::arm::Mem(a0, a1, a2); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
		cl.def( pybind11::init<const class asmjit::BaseReg &, const class asmjit::BaseReg &, const class asmjit::arm::Shift &, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new asmjit::arm::Mem(a0); } ), "doc" , pybind11::arg("base"));
		cl.def( pybind11::init<unsigned long, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("signature") );


		pybind11::enum_<asmjit::arm::Mem::AdditionalBits>(cl, "AdditionalBits", pybind11::arithmetic(), "Additional bits of operand's signature used by `arm::Mem`.")
			.value("kSignatureMemShiftValueShift", asmjit::arm::Mem::kSignatureMemShiftValueShift)
			.value("kSignatureMemShiftValueMask", asmjit::arm::Mem::kSignatureMemShiftValueMask)
			.value("kSignatureMemShiftOpShift", asmjit::arm::Mem::kSignatureMemShiftOpShift)
			.value("kSignatureMemShiftOpMask", asmjit::arm::Mem::kSignatureMemShiftOpMask)
			.value("kSignatureMemOffsetModeShift", asmjit::arm::Mem::kSignatureMemOffsetModeShift)
			.value("kSignatureMemOffsetModeMask", asmjit::arm::Mem::kSignatureMemOffsetModeMask)
			.export_values();

		cl.def("setIndex", [](asmjit::arm::Mem &o, const class asmjit::BaseReg & a0) -> void { return o.setIndex(a0); }, "", pybind11::arg("index"));
		cl.def("assign", (class asmjit::arm::Mem & (asmjit::arm::Mem::*)(const class asmjit::arm::Mem &)) &asmjit::arm::Mem::operator=, "\\{\n\nC++: asmjit::arm::Mem::operator=(const class asmjit::arm::Mem &) --> class asmjit::arm::Mem &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("clone", (class asmjit::arm::Mem (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::clone, "Clones the memory operand.\n\nC++: asmjit::arm::Mem::clone() const --> class asmjit::arm::Mem");
		cl.def("cloneAdjusted", (class asmjit::arm::Mem (asmjit::arm::Mem::*)(long) const) &asmjit::arm::Mem::cloneAdjusted, "Gets new memory operand adjusted by `off`.\n\nC++: asmjit::arm::Mem::cloneAdjusted(long) const --> class asmjit::arm::Mem", pybind11::arg("off"));
		cl.def("pre", (class asmjit::arm::Mem (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::pre, "Clones the memory operand and makes it pre-index.\n\nC++: asmjit::arm::Mem::pre() const --> class asmjit::arm::Mem");
		cl.def("pre", (class asmjit::arm::Mem (asmjit::arm::Mem::*)(long) const) &asmjit::arm::Mem::pre, "Clones the memory operand, applies a given offset `off` and makes it pre-index.\n\nC++: asmjit::arm::Mem::pre(long) const --> class asmjit::arm::Mem", pybind11::arg("off"));
		cl.def("post", (class asmjit::arm::Mem (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::post, "Clones the memory operand and makes it post-index.\n\nC++: asmjit::arm::Mem::post() const --> class asmjit::arm::Mem");
		cl.def("post", (class asmjit::arm::Mem (asmjit::arm::Mem::*)(long) const) &asmjit::arm::Mem::post, "Clones the memory operand, applies a given offset `off` and makes it post-index.\n\nC++: asmjit::arm::Mem::post(long) const --> class asmjit::arm::Mem", pybind11::arg("off"));
		cl.def("baseReg", (class asmjit::arm::Reg (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::baseReg, "Converts memory `baseType` and `baseId` to `arm::Reg` instance.\n\n The memory must have a valid base register otherwise the result will be wrong.\n\nC++: asmjit::arm::Mem::baseReg() const --> class asmjit::arm::Reg");
		cl.def("indexReg", (class asmjit::arm::Reg (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::indexReg, "Converts memory `indexType` and `indexId` to `arm::Reg` instance.\n\n The memory must have a valid index register otherwise the result will be wrong.\n\nC++: asmjit::arm::Mem::indexReg() const --> class asmjit::arm::Reg");
		cl.def("setIndex", (void (asmjit::arm::Mem::*)(const class asmjit::BaseReg &, unsigned int)) &asmjit::arm::Mem::setIndex, "C++: asmjit::arm::Mem::setIndex(const class asmjit::BaseReg &, unsigned int) --> void", pybind11::arg("index"), pybind11::arg("shift"));
		cl.def("setIndex", (void (asmjit::arm::Mem::*)(const class asmjit::BaseReg &, class asmjit::arm::Shift)) &asmjit::arm::Mem::setIndex, "C++: asmjit::arm::Mem::setIndex(const class asmjit::BaseReg &, class asmjit::arm::Shift) --> void", pybind11::arg("index"), pybind11::arg("shift"));
		cl.def("offsetMode", (enum asmjit::arm::OffsetMode (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::offsetMode, "Gets offset mode.\n\nC++: asmjit::arm::Mem::offsetMode() const --> enum asmjit::arm::OffsetMode");
		cl.def("setOffsetMode", (void (asmjit::arm::Mem::*)(enum asmjit::arm::OffsetMode)) &asmjit::arm::Mem::setOffsetMode, "Sets offset mode to `mode`.\n\nC++: asmjit::arm::Mem::setOffsetMode(enum asmjit::arm::OffsetMode) --> void", pybind11::arg("mode"));
		cl.def("resetOffsetMode", (void (asmjit::arm::Mem::*)()) &asmjit::arm::Mem::resetOffsetMode, "Resets offset mode to default (fixed offset, without write-back).\n\nC++: asmjit::arm::Mem::resetOffsetMode() --> void");
		cl.def("isFixedOffset", (bool (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::isFixedOffset, "Tests whether the current memory offset mode is fixed (see \n\nC++: asmjit::arm::Mem::isFixedOffset() const --> bool");
		cl.def("isPreOrPost", (bool (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::isPreOrPost, "Tests whether the current memory offset mode is either pre-index or post-index (write-back is used).\n\nC++: asmjit::arm::Mem::isPreOrPost() const --> bool");
		cl.def("isPreIndex", (bool (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::isPreIndex, "Tests whether the current memory offset mode is pre-index (write-back is used).\n\nC++: asmjit::arm::Mem::isPreIndex() const --> bool");
		cl.def("isPostIndex", (bool (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::isPostIndex, "Tests whether the current memory offset mode is post-index (write-back is used).\n\nC++: asmjit::arm::Mem::isPostIndex() const --> bool");
		cl.def("makePreIndex", (void (asmjit::arm::Mem::*)()) &asmjit::arm::Mem::makePreIndex, "Sets offset mode of this memory operand to pre-index (write-back is used).\n\nC++: asmjit::arm::Mem::makePreIndex() --> void");
		cl.def("makePostIndex", (void (asmjit::arm::Mem::*)()) &asmjit::arm::Mem::makePostIndex, "Sets offset mode of this memory operand to post-index (write-back is used).\n\nC++: asmjit::arm::Mem::makePostIndex() --> void");
		cl.def("shiftOp", (enum asmjit::arm::ShiftOp (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::shiftOp, "Gets shift operation that is used by index register.\n\nC++: asmjit::arm::Mem::shiftOp() const --> enum asmjit::arm::ShiftOp");
		cl.def("setShiftOp", (void (asmjit::arm::Mem::*)(enum asmjit::arm::ShiftOp)) &asmjit::arm::Mem::setShiftOp, "Sets shift operation that is used by index register.\n\nC++: asmjit::arm::Mem::setShiftOp(enum asmjit::arm::ShiftOp) --> void", pybind11::arg("sop"));
		cl.def("resetShiftOp", (void (asmjit::arm::Mem::*)()) &asmjit::arm::Mem::resetShiftOp, "Resets shift operation that is used by index register to LSL (default value).\n\nC++: asmjit::arm::Mem::resetShiftOp() --> void");
		cl.def("hasShift", (bool (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::hasShift, "Gets whether the memory operand has shift (aka scale) constant.\n\nC++: asmjit::arm::Mem::hasShift() const --> bool");
		cl.def("shift", (unsigned int (asmjit::arm::Mem::*)() const) &asmjit::arm::Mem::shift, "Gets the memory operand's shift (aka scale) constant.\n\nC++: asmjit::arm::Mem::shift() const --> unsigned int");
		cl.def("setShift", (void (asmjit::arm::Mem::*)(unsigned int)) &asmjit::arm::Mem::setShift, "Sets the memory operand's shift (aka scale) constant.\n\nC++: asmjit::arm::Mem::setShift(unsigned int) --> void", pybind11::arg("shift"));
		cl.def("setShift", (void (asmjit::arm::Mem::*)(class asmjit::arm::Shift)) &asmjit::arm::Mem::setShift, "Sets the memory operand's shift and shift operation.\n\nC++: asmjit::arm::Mem::setShift(class asmjit::arm::Shift) --> void", pybind11::arg("shift"));
		cl.def("resetShift", (void (asmjit::arm::Mem::*)()) &asmjit::arm::Mem::resetShift, "Resets the memory operand's shift (aka scale) constant to zero.\n\nC++: asmjit::arm::Mem::resetShift() --> void");
	}
}
