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
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kGp8Hi>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kGp8Hi>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kGp8Hi_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kGp8Hi>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kGp16>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kGp16>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kGp16_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kGp16>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kGp32>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kGp32>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kGp32_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kGp32>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kGp64>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kGp64>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kGp64_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kGp64>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kVec128>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kVec128>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kVec128_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kVec128>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kVec256>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kVec256>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kVec256_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kVec256>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kVec512>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kVec512>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kVec512_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kVec512>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kMask>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kMask>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kMask_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kMask>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kExtra>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kExtra>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kExtra_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kExtra>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kX86_SReg>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kX86_SReg>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kX86_SReg_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kX86_SReg>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kX86_CReg>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kX86_CReg>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kX86_CReg_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kX86_CReg>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kX86_DReg>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kX86_DReg>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kX86_DReg_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kX86_DReg>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kX86_St>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kX86_St>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kX86_St_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kX86_St>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kX86_Bnd>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kX86_Bnd>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kX86_Bnd_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kX86_Bnd>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kX86_Tmm>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kX86_Tmm>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kX86_Tmm_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kX86_Tmm>(); } ) );
	}
	{ // asmjit::x86::Reg file: line:75
		pybind11::class_<asmjit::x86::Reg, std::shared_ptr<asmjit::x86::Reg>, asmjit::BaseReg> cl(M("asmjit::x86"), "Reg", "Register (X86).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Reg(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Reg const &o){ return new asmjit::x86::Reg(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("sgn"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def_static("signatureOfT", (struct asmjit::OperandSignature (*)()) &asmjit::x86::Reg::signatureOfT<asmjit::RegType::kVec256>, "C++: asmjit::x86::Reg::signatureOfT() --> struct asmjit::OperandSignature");
		cl.def_static("signatureOfT", (struct asmjit::OperandSignature (*)()) &asmjit::x86::Reg::signatureOfT<asmjit::RegType::kVec128>, "C++: asmjit::x86::Reg::signatureOfT() --> struct asmjit::OperandSignature");
		cl.def_static("fromTypeAndId", (class asmjit::x86::Reg (*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Reg::fromTypeAndId, "Creates a new register from register type and id. \n\nC++: asmjit::x86::Reg::fromTypeAndId(enum asmjit::RegType, unsigned int) --> class asmjit::x86::Reg", pybind11::arg("type"), pybind11::arg("id"));
		cl.def("clone", (class asmjit::x86::Reg (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::clone, "C++: asmjit::x86::Reg::clone() const --> class asmjit::x86::Reg");
		cl.def("assign", (class asmjit::x86::Reg & (asmjit::x86::Reg::*)(const class asmjit::x86::Reg &)) &asmjit::x86::Reg::operator=, "C++: asmjit::x86::Reg::operator=(const class asmjit::x86::Reg &) --> class asmjit::x86::Reg &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("isGpb", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGpb, "Tests whether the register is a GPB register (8-bit).\n\nC++: asmjit::x86::Reg::isGpb() const --> bool");
		cl.def("isGpbLo", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGpbLo, "Tests whether the register is a low GPB register (8-bit).\n\nC++: asmjit::x86::Reg::isGpbLo() const --> bool");
		cl.def("isGpbHi", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGpbHi, "Tests whether the register is a high GPB register (8-bit).\n\nC++: asmjit::x86::Reg::isGpbHi() const --> bool");
		cl.def("isGpw", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGpw, "Tests whether the register is a GPW register (16-bit).\n\nC++: asmjit::x86::Reg::isGpw() const --> bool");
		cl.def("isGpd", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGpd, "Tests whether the register is a GPD register (32-bit).\n\nC++: asmjit::x86::Reg::isGpd() const --> bool");
		cl.def("isGpq", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGpq, "Tests whether the register is a GPQ register (64-bit).\n\nC++: asmjit::x86::Reg::isGpq() const --> bool");
		cl.def("isGp32", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGp32, "Tests whether the register is a 32-bit general purpose register, alias of \n\nC++: asmjit::x86::Reg::isGp32() const --> bool");
		cl.def("isGp64", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isGp64, "Tests whether the register is a 64-bit general purpose register, alias of \n\nC++: asmjit::x86::Reg::isGp64() const --> bool");
		cl.def("isXmm", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isXmm, "Tests whether the register is an XMM register (128-bit).\n\nC++: asmjit::x86::Reg::isXmm() const --> bool");
		cl.def("isYmm", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isYmm, "Tests whether the register is a YMM register (256-bit).\n\nC++: asmjit::x86::Reg::isYmm() const --> bool");
		cl.def("isZmm", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isZmm, "Tests whether the register is a ZMM register (512-bit).\n\nC++: asmjit::x86::Reg::isZmm() const --> bool");
		cl.def("isVec128", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isVec128, "Tests whether the register is a 128-bit vector register, alias of \n\nC++: asmjit::x86::Reg::isVec128() const --> bool");
		cl.def("isVec256", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isVec256, "Tests whether the register is a 256-bit vector register, alias of \n\nC++: asmjit::x86::Reg::isVec256() const --> bool");
		cl.def("isVec512", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isVec512, "Tests whether the register is a 512-bit vector register, alias of \n\nC++: asmjit::x86::Reg::isVec512() const --> bool");
		cl.def("isMm", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isMm, "Tests whether the register is an MMX register (64-bit).\n\nC++: asmjit::x86::Reg::isMm() const --> bool");
		cl.def("isKReg", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isKReg, "Tests whether the register is a K register (64-bit).\n\nC++: asmjit::x86::Reg::isKReg() const --> bool");
		cl.def("isSReg", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isSReg, "Tests whether the register is a segment register.\n\nC++: asmjit::x86::Reg::isSReg() const --> bool");
		cl.def("isCReg", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isCReg, "Tests whether the register is a control register.\n\nC++: asmjit::x86::Reg::isCReg() const --> bool");
		cl.def("isDReg", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isDReg, "Tests whether the register is a debug register.\n\nC++: asmjit::x86::Reg::isDReg() const --> bool");
		cl.def("isSt", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isSt, "Tests whether the register is an FPU register (80-bit).\n\nC++: asmjit::x86::Reg::isSt() const --> bool");
		cl.def("isBnd", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isBnd, "Tests whether the register is a bound register.\n\nC++: asmjit::x86::Reg::isBnd() const --> bool");
		cl.def("isTmm", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isTmm, "Tests whether the register is a TMM register.\n\nC++: asmjit::x86::Reg::isTmm() const --> bool");
		cl.def("isRip", (bool (asmjit::x86::Reg::*)() const) &asmjit::x86::Reg::isRip, "Tests whether the register is RIP.\n\nC++: asmjit::x86::Reg::isRip() const --> bool");
		cl.def("setTypeAndId", (void (asmjit::x86::Reg::*)(enum asmjit::RegType, unsigned int)) &asmjit::x86::Reg::setTypeAndId, "C++: asmjit::x86::Reg::setTypeAndId(enum asmjit::RegType, unsigned int) --> void", pybind11::arg("type"), pybind11::arg("id"));
		cl.def_static("groupOf", (enum asmjit::RegGroup (*)(enum asmjit::RegType)) &asmjit::x86::Reg::groupOf, "C++: asmjit::x86::Reg::groupOf(enum asmjit::RegType) --> enum asmjit::RegGroup", pybind11::arg("type"));
		cl.def_static("typeIdOf", (enum asmjit::TypeId (*)(enum asmjit::RegType)) &asmjit::x86::Reg::typeIdOf, "C++: asmjit::x86::Reg::typeIdOf(enum asmjit::RegType) --> enum asmjit::TypeId", pybind11::arg("type"));
		cl.def_static("signatureOf", (struct asmjit::OperandSignature (*)(enum asmjit::RegType)) &asmjit::x86::Reg::signatureOf, "C++: asmjit::x86::Reg::signatureOf(enum asmjit::RegType) --> struct asmjit::OperandSignature", pybind11::arg("type"));
		cl.def_static("signatureOfVecByType", (struct asmjit::OperandSignature (*)(enum asmjit::TypeId)) &asmjit::x86::Reg::signatureOfVecByType, "C++: asmjit::x86::Reg::signatureOfVecByType(enum asmjit::TypeId) --> struct asmjit::OperandSignature", pybind11::arg("typeId"));
		cl.def_static("signatureOfVecBySize", (struct asmjit::OperandSignature (*)(unsigned int)) &asmjit::x86::Reg::signatureOfVecBySize, "C++: asmjit::x86::Reg::signatureOfVecBySize(unsigned int) --> struct asmjit::OperandSignature", pybind11::arg("size"));
		cl.def_static("isGpb", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isGpb, "Tests whether the `op` operand is either a low or high 8-bit GPB register.\n\nC++: asmjit::x86::Reg::isGpb(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpbLo", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isGpbLo, "C++: asmjit::x86::Reg::isGpbLo(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpbHi", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isGpbHi, "C++: asmjit::x86::Reg::isGpbHi(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpw", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isGpw, "C++: asmjit::x86::Reg::isGpw(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpd", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isGpd, "C++: asmjit::x86::Reg::isGpd(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpq", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isGpq, "C++: asmjit::x86::Reg::isGpq(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isXmm", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isXmm, "C++: asmjit::x86::Reg::isXmm(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isYmm", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isYmm, "C++: asmjit::x86::Reg::isYmm(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isZmm", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isZmm, "C++: asmjit::x86::Reg::isZmm(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isMm", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isMm, "C++: asmjit::x86::Reg::isMm(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isKReg", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isKReg, "C++: asmjit::x86::Reg::isKReg(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isSReg", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isSReg, "C++: asmjit::x86::Reg::isSReg(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isCReg", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isCReg, "C++: asmjit::x86::Reg::isCReg(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isDReg", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isDReg, "C++: asmjit::x86::Reg::isDReg(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isSt", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isSt, "C++: asmjit::x86::Reg::isSt(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isBnd", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isBnd, "C++: asmjit::x86::Reg::isBnd(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isTmm", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isTmm, "C++: asmjit::x86::Reg::isTmm(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isRip", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::x86::Reg::isRip, "C++: asmjit::x86::Reg::isRip(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGpb", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isGpb, "C++: asmjit::x86::Reg::isGpb(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isGpbLo", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isGpbLo, "C++: asmjit::x86::Reg::isGpbLo(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isGpbHi", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isGpbHi, "C++: asmjit::x86::Reg::isGpbHi(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isGpw", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isGpw, "C++: asmjit::x86::Reg::isGpw(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isGpd", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isGpd, "C++: asmjit::x86::Reg::isGpd(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isGpq", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isGpq, "C++: asmjit::x86::Reg::isGpq(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isXmm", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isXmm, "C++: asmjit::x86::Reg::isXmm(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isYmm", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isYmm, "C++: asmjit::x86::Reg::isYmm(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isZmm", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isZmm, "C++: asmjit::x86::Reg::isZmm(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isMm", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isMm, "C++: asmjit::x86::Reg::isMm(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isKReg", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isKReg, "C++: asmjit::x86::Reg::isKReg(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isSReg", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isSReg, "C++: asmjit::x86::Reg::isSReg(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isCReg", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isCReg, "C++: asmjit::x86::Reg::isCReg(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isDReg", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isDReg, "C++: asmjit::x86::Reg::isDReg(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isSt", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isSt, "C++: asmjit::x86::Reg::isSt(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isBnd", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isBnd, "C++: asmjit::x86::Reg::isBnd(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isTmm", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isTmm, "C++: asmjit::x86::Reg::isTmm(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
		cl.def_static("isRip", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::x86::Reg::isRip, "C++: asmjit::x86::Reg::isRip(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("rId"));
	}
}
