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

void bind_unknown_unknown_11(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::OperandType file: line:19
	pybind11::enum_<asmjit::OperandType>(M("asmjit"), "OperandType", "Operand type used by ")
		.value("kNone", asmjit::OperandType::kNone)
		.value("kReg", asmjit::OperandType::kReg)
		.value("kMem", asmjit::OperandType::kMem)
		.value("kRegList", asmjit::OperandType::kRegList)
		.value("kImm", asmjit::OperandType::kImm)
		.value("kLabel", asmjit::OperandType::kLabel)
		.value("kMaxValue", asmjit::OperandType::kMaxValue);

;

	// asmjit::RegType file: line:48
	pybind11::enum_<asmjit::RegType>(M("asmjit"), "RegType", "Register type.\n\n Provides a unique type that can be used to identify a register or its view.")
		.value("kNone", asmjit::RegType::kNone)
		.value("kLabelTag", asmjit::RegType::kLabelTag)
		.value("kPC", asmjit::RegType::kPC)
		.value("kGp8Lo", asmjit::RegType::kGp8Lo)
		.value("kGp8Hi", asmjit::RegType::kGp8Hi)
		.value("kGp16", asmjit::RegType::kGp16)
		.value("kGp32", asmjit::RegType::kGp32)
		.value("kGp64", asmjit::RegType::kGp64)
		.value("kVec8", asmjit::RegType::kVec8)
		.value("kVec16", asmjit::RegType::kVec16)
		.value("kVec32", asmjit::RegType::kVec32)
		.value("kVec64", asmjit::RegType::kVec64)
		.value("kVec128", asmjit::RegType::kVec128)
		.value("kVec256", asmjit::RegType::kVec256)
		.value("kVec512", asmjit::RegType::kVec512)
		.value("kVec1024", asmjit::RegType::kVec1024)
		.value("kVecNLen", asmjit::RegType::kVecNLen)
		.value("kMask", asmjit::RegType::kMask)
		.value("kExtra", asmjit::RegType::kExtra)
		.value("kX86_Rip", asmjit::RegType::kX86_Rip)
		.value("kX86_GpbLo", asmjit::RegType::kX86_GpbLo)
		.value("kX86_GpbHi", asmjit::RegType::kX86_GpbHi)
		.value("kX86_Gpw", asmjit::RegType::kX86_Gpw)
		.value("kX86_Gpd", asmjit::RegType::kX86_Gpd)
		.value("kX86_Gpq", asmjit::RegType::kX86_Gpq)
		.value("kX86_Xmm", asmjit::RegType::kX86_Xmm)
		.value("kX86_Ymm", asmjit::RegType::kX86_Ymm)
		.value("kX86_Zmm", asmjit::RegType::kX86_Zmm)
		.value("kX86_KReg", asmjit::RegType::kX86_KReg)
		.value("kX86_Mm", asmjit::RegType::kX86_Mm)
		.value("kX86_SReg", asmjit::RegType::kX86_SReg)
		.value("kX86_CReg", asmjit::RegType::kX86_CReg)
		.value("kX86_DReg", asmjit::RegType::kX86_DReg)
		.value("kX86_St", asmjit::RegType::kX86_St)
		.value("kX86_Bnd", asmjit::RegType::kX86_Bnd)
		.value("kX86_Tmm", asmjit::RegType::kX86_Tmm)
		.value("kARM_PC", asmjit::RegType::kARM_PC)
		.value("kARM_GpW", asmjit::RegType::kARM_GpW)
		.value("kARM_GpX", asmjit::RegType::kARM_GpX)
		.value("kARM_VecB", asmjit::RegType::kARM_VecB)
		.value("kARM_VecH", asmjit::RegType::kARM_VecH)
		.value("kARM_VecS", asmjit::RegType::kARM_VecS)
		.value("kARM_VecD", asmjit::RegType::kARM_VecD)
		.value("kARM_VecQ", asmjit::RegType::kARM_VecQ)
		.value("kARM_VecV", asmjit::RegType::kARM_VecV)
		.value("kMaxValue", asmjit::RegType::kMaxValue);

;

	// asmjit::RegGroup file: line:168
	pybind11::enum_<asmjit::RegGroup>(M("asmjit"), "RegGroup", "Register group.\n\n Provides a unique value that identifies groups of registers and their views.")
		.value("kGp", asmjit::RegGroup::kGp)
		.value("kVec", asmjit::RegGroup::kVec)
		.value("kMask", asmjit::RegGroup::kMask)
		.value("kExtraVirt3", asmjit::RegGroup::kExtraVirt3)
		.value("kPC", asmjit::RegGroup::kPC)
		.value("kExtraNonVirt", asmjit::RegGroup::kExtraNonVirt)
		.value("kX86_K", asmjit::RegGroup::kX86_K)
		.value("kX86_MM", asmjit::RegGroup::kX86_MM)
		.value("kX86_Rip", asmjit::RegGroup::kX86_Rip)
		.value("kX86_SReg", asmjit::RegGroup::kX86_SReg)
		.value("kX86_CReg", asmjit::RegGroup::kX86_CReg)
		.value("kX86_DReg", asmjit::RegGroup::kX86_DReg)
		.value("kX86_St", asmjit::RegGroup::kX86_St)
		.value("kX86_Bnd", asmjit::RegGroup::kX86_Bnd)
		.value("kX86_Tmm", asmjit::RegGroup::kX86_Tmm)
		.value("k0", asmjit::RegGroup::k0)
		.value("kMaxVirt", asmjit::RegGroup::kMaxVirt)
		.value("kMaxValue", asmjit::RegGroup::kMaxValue);

;

	{ // asmjit::OperandSignature file: line:227
		pybind11::class_<asmjit::OperandSignature, std::shared_ptr<asmjit::OperandSignature>> cl(M("asmjit"), "OperandSignature", "Operand signature is a 32-bit number describing  and some of its payload.\n\n In AsmJit operand signature is used to store additional payload of register, memory, and immediate operands.\n In practice the biggest pressure on OperandSignature is from  and architecture specific memory\n operands that need to store additional payload that cannot be stored elsewhere as values of all other members\n are fully specified by ");
		cl.def( pybind11::init( [](){ return new asmjit::OperandSignature(); } ) );
		cl.def( pybind11::init( [](asmjit::OperandSignature const &o){ return new asmjit::OperandSignature(o); } ) );

		cl.def("hasField", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::hasField<4278190080U>, "C++: asmjit::OperandSignature::hasField() const --> bool");
		cl.def("hasField", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::hasField<8192U>, "C++: asmjit::OperandSignature::hasField() const --> bool");
		cl.def("hasField", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::hasField<1835008U>, "C++: asmjit::OperandSignature::hasField() const --> bool");
		cl.def("hasField", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::hasField<196608U>, "C++: asmjit::OperandSignature::hasField() const --> bool");
		cl.def("hasField", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::hasField<14680064U>, "C++: asmjit::OperandSignature::hasField() const --> bool");
		cl.def("hasField", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::hasField<32768U>, "C++: asmjit::OperandSignature::hasField() const --> bool");
		cl.def("hasField", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::hasField<507904U>, "C++: asmjit::OperandSignature::hasField() const --> bool");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<7U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<248U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<3840U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<7936U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<15728640U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<4278190080U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<8184U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<8U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<49152U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<1835008U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<196608U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<14680064U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<983040U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<50331648U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("getField", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::getField<507904U>, "C++: asmjit::OperandSignature::getField() const --> unsigned int");
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<7U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<248U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<3840U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<7936U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<15728640U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<4278190080U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<8U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<49152U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<1835008U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<196608U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<14680064U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<983040U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<50331648U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def("setField", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setField<507904U>, "C++: asmjit::OperandSignature::setField(unsigned int) --> void", pybind11::arg("value"));
		cl.def_static("fromValue", (struct asmjit::OperandSignature (*)(const unsigned int &)) &asmjit::OperandSignature::fromValue<196608U,unsigned int>, "C++: asmjit::OperandSignature::fromValue(const unsigned int &) --> struct asmjit::OperandSignature", pybind11::arg("value"));
		cl.def_static("fromValue", (struct asmjit::OperandSignature (*)(const enum asmjit::x86::Mem::Broadcast &)) &asmjit::OperandSignature::fromValue<14680064U,asmjit::x86::Mem::Broadcast>, "C++: asmjit::OperandSignature::fromValue(const enum asmjit::x86::Mem::Broadcast &) --> struct asmjit::OperandSignature", pybind11::arg("value"));
		cl.def_static("fromValue", (struct asmjit::OperandSignature (*)(const enum asmjit::x86::Mem::AddrType &)) &asmjit::OperandSignature::fromValue<49152U,asmjit::x86::Mem::AddrType>, "C++: asmjit::OperandSignature::fromValue(const enum asmjit::x86::Mem::AddrType &) --> struct asmjit::OperandSignature", pybind11::arg("value"));
		cl.def_static("fromValue", (struct asmjit::OperandSignature (*)(const unsigned int &)) &asmjit::OperandSignature::fromValue<15728640U,unsigned int>, "C++: asmjit::OperandSignature::fromValue(const unsigned int &) --> struct asmjit::OperandSignature", pybind11::arg("value"));
		cl.def_static("fromValue", (struct asmjit::OperandSignature (*)(const unsigned int &)) &asmjit::OperandSignature::fromValue<507904U,unsigned int>, "C++: asmjit::OperandSignature::fromValue(const unsigned int &) --> struct asmjit::OperandSignature", pybind11::arg("value"));
		cl.def("__ior__", (struct asmjit::OperandSignature & (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::operator|=, "C++: asmjit::OperandSignature::operator|=(unsigned int) --> struct asmjit::OperandSignature &", pybind11::return_value_policy::automatic, pybind11::arg("x"));
		cl.def("__iand__", (struct asmjit::OperandSignature & (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::operator&=, "C++: asmjit::OperandSignature::operator&=(unsigned int) --> struct asmjit::OperandSignature &", pybind11::return_value_policy::automatic, pybind11::arg("x"));
		cl.def("__ixor__", (struct asmjit::OperandSignature & (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::operator^=, "C++: asmjit::OperandSignature::operator^=(unsigned int) --> struct asmjit::OperandSignature &", pybind11::return_value_policy::automatic, pybind11::arg("x"));
		cl.def("__ior__", (struct asmjit::OperandSignature & (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &)) &asmjit::OperandSignature::operator|=, "C++: asmjit::OperandSignature::operator|=(const struct asmjit::OperandSignature &) --> struct asmjit::OperandSignature &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("__iand__", (struct asmjit::OperandSignature & (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &)) &asmjit::OperandSignature::operator&=, "C++: asmjit::OperandSignature::operator&=(const struct asmjit::OperandSignature &) --> struct asmjit::OperandSignature &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("__ixor__", (struct asmjit::OperandSignature & (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &)) &asmjit::OperandSignature::operator^=, "C++: asmjit::OperandSignature::operator^=(const struct asmjit::OperandSignature &) --> struct asmjit::OperandSignature &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("__invert__", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::operator~, "C++: asmjit::OperandSignature::operator~() const --> struct asmjit::OperandSignature");
		cl.def("__or__", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)(unsigned int) const) &asmjit::OperandSignature::operator|, "C++: asmjit::OperandSignature::operator|(unsigned int) const --> struct asmjit::OperandSignature", pybind11::arg("x"));
		cl.def("__and__", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)(unsigned int) const) &asmjit::OperandSignature::operator&, "C++: asmjit::OperandSignature::operator&(unsigned int) const --> struct asmjit::OperandSignature", pybind11::arg("x"));
		cl.def("__xor__", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)(unsigned int) const) &asmjit::OperandSignature::operator^, "C++: asmjit::OperandSignature::operator^(unsigned int) const --> struct asmjit::OperandSignature", pybind11::arg("x"));
		cl.def("__or__", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &) const) &asmjit::OperandSignature::operator|, "C++: asmjit::OperandSignature::operator|(const struct asmjit::OperandSignature &) const --> struct asmjit::OperandSignature", pybind11::arg("other"));
		cl.def("__and__", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &) const) &asmjit::OperandSignature::operator&, "C++: asmjit::OperandSignature::operator&(const struct asmjit::OperandSignature &) const --> struct asmjit::OperandSignature", pybind11::arg("other"));
		cl.def("__xor__", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &) const) &asmjit::OperandSignature::operator^, "C++: asmjit::OperandSignature::operator^(const struct asmjit::OperandSignature &) const --> struct asmjit::OperandSignature", pybind11::arg("other"));
		cl.def("__eq__", (bool (asmjit::OperandSignature::*)(unsigned int) const) &asmjit::OperandSignature::operator==, "C++: asmjit::OperandSignature::operator==(unsigned int) const --> bool", pybind11::arg("x"));
		cl.def("__ne__", (bool (asmjit::OperandSignature::*)(unsigned int) const) &asmjit::OperandSignature::operator!=, "C++: asmjit::OperandSignature::operator!=(unsigned int) const --> bool", pybind11::arg("x"));
		cl.def("__eq__", (bool (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &) const) &asmjit::OperandSignature::operator==, "C++: asmjit::OperandSignature::operator==(const struct asmjit::OperandSignature &) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &) const) &asmjit::OperandSignature::operator!=, "C++: asmjit::OperandSignature::operator!=(const struct asmjit::OperandSignature &) const --> bool", pybind11::arg("other"));
		cl.def("reset", (void (asmjit::OperandSignature::*)()) &asmjit::OperandSignature::reset, "\\{\n\nC++: asmjit::OperandSignature::reset() --> void");
		cl.def("bits", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::bits, "C++: asmjit::OperandSignature::bits() const --> unsigned int");
		cl.def("setBits", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setBits, "C++: asmjit::OperandSignature::setBits(unsigned int) --> void", pybind11::arg("bits"));
		cl.def("subset", (struct asmjit::OperandSignature (asmjit::OperandSignature::*)(unsigned int) const) &asmjit::OperandSignature::subset, "C++: asmjit::OperandSignature::subset(unsigned int) const --> struct asmjit::OperandSignature", pybind11::arg("mask"));
		cl.def("isValid", (bool (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::isValid, "C++: asmjit::OperandSignature::isValid() const --> bool");
		cl.def("opType", (enum asmjit::OperandType (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::opType, "C++: asmjit::OperandSignature::opType() const --> enum asmjit::OperandType");
		cl.def("regType", (enum asmjit::RegType (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::regType, "C++: asmjit::OperandSignature::regType() const --> enum asmjit::RegType");
		cl.def("regGroup", (enum asmjit::RegGroup (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::regGroup, "C++: asmjit::OperandSignature::regGroup() const --> enum asmjit::RegGroup");
		cl.def("memBaseType", (enum asmjit::RegType (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::memBaseType, "C++: asmjit::OperandSignature::memBaseType() const --> enum asmjit::RegType");
		cl.def("memIndexType", (enum asmjit::RegType (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::memIndexType, "C++: asmjit::OperandSignature::memIndexType() const --> enum asmjit::RegType");
		cl.def("predicate", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::predicate, "C++: asmjit::OperandSignature::predicate() const --> unsigned int");
		cl.def("size", (unsigned int (asmjit::OperandSignature::*)() const) &asmjit::OperandSignature::size, "C++: asmjit::OperandSignature::size() const --> unsigned int");
		cl.def("setOpType", (void (asmjit::OperandSignature::*)(enum asmjit::OperandType)) &asmjit::OperandSignature::setOpType, "C++: asmjit::OperandSignature::setOpType(enum asmjit::OperandType) --> void", pybind11::arg("opType"));
		cl.def("setRegType", (void (asmjit::OperandSignature::*)(enum asmjit::RegType)) &asmjit::OperandSignature::setRegType, "C++: asmjit::OperandSignature::setRegType(enum asmjit::RegType) --> void", pybind11::arg("regType"));
		cl.def("setRegGroup", (void (asmjit::OperandSignature::*)(enum asmjit::RegGroup)) &asmjit::OperandSignature::setRegGroup, "C++: asmjit::OperandSignature::setRegGroup(enum asmjit::RegGroup) --> void", pybind11::arg("regGroup"));
		cl.def("setMemBaseType", (void (asmjit::OperandSignature::*)(enum asmjit::RegType)) &asmjit::OperandSignature::setMemBaseType, "C++: asmjit::OperandSignature::setMemBaseType(enum asmjit::RegType) --> void", pybind11::arg("baseType"));
		cl.def("setMemIndexType", (void (asmjit::OperandSignature::*)(enum asmjit::RegType)) &asmjit::OperandSignature::setMemIndexType, "C++: asmjit::OperandSignature::setMemIndexType(enum asmjit::RegType) --> void", pybind11::arg("indexType"));
		cl.def("setPredicate", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setPredicate, "C++: asmjit::OperandSignature::setPredicate(unsigned int) --> void", pybind11::arg("predicate"));
		cl.def("setSize", (void (asmjit::OperandSignature::*)(unsigned int)) &asmjit::OperandSignature::setSize, "C++: asmjit::OperandSignature::setSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def_static("fromBits", (struct asmjit::OperandSignature (*)(unsigned int)) &asmjit::OperandSignature::fromBits, "\\{\n\nC++: asmjit::OperandSignature::fromBits(unsigned int) --> struct asmjit::OperandSignature", pybind11::arg("bits"));
		cl.def_static("fromOpType", (struct asmjit::OperandSignature (*)(enum asmjit::OperandType)) &asmjit::OperandSignature::fromOpType, "C++: asmjit::OperandSignature::fromOpType(enum asmjit::OperandType) --> struct asmjit::OperandSignature", pybind11::arg("opType"));
		cl.def_static("fromRegType", (struct asmjit::OperandSignature (*)(enum asmjit::RegType)) &asmjit::OperandSignature::fromRegType, "C++: asmjit::OperandSignature::fromRegType(enum asmjit::RegType) --> struct asmjit::OperandSignature", pybind11::arg("regType"));
		cl.def_static("fromRegGroup", (struct asmjit::OperandSignature (*)(enum asmjit::RegGroup)) &asmjit::OperandSignature::fromRegGroup, "C++: asmjit::OperandSignature::fromRegGroup(enum asmjit::RegGroup) --> struct asmjit::OperandSignature", pybind11::arg("regGroup"));
		cl.def_static("fromRegTypeAndGroup", (struct asmjit::OperandSignature (*)(enum asmjit::RegType, enum asmjit::RegGroup)) &asmjit::OperandSignature::fromRegTypeAndGroup, "C++: asmjit::OperandSignature::fromRegTypeAndGroup(enum asmjit::RegType, enum asmjit::RegGroup) --> struct asmjit::OperandSignature", pybind11::arg("regType"), pybind11::arg("regGroup"));
		cl.def_static("fromMemBaseType", (struct asmjit::OperandSignature (*)(enum asmjit::RegType)) &asmjit::OperandSignature::fromMemBaseType, "C++: asmjit::OperandSignature::fromMemBaseType(enum asmjit::RegType) --> struct asmjit::OperandSignature", pybind11::arg("baseType"));
		cl.def_static("fromMemIndexType", (struct asmjit::OperandSignature (*)(enum asmjit::RegType)) &asmjit::OperandSignature::fromMemIndexType, "C++: asmjit::OperandSignature::fromMemIndexType(enum asmjit::RegType) --> struct asmjit::OperandSignature", pybind11::arg("indexType"));
		cl.def_static("fromPredicate", (struct asmjit::OperandSignature (*)(unsigned int)) &asmjit::OperandSignature::fromPredicate, "C++: asmjit::OperandSignature::fromPredicate(unsigned int) --> struct asmjit::OperandSignature", pybind11::arg("predicate"));
		cl.def_static("fromSize", (struct asmjit::OperandSignature (*)(unsigned int)) &asmjit::OperandSignature::fromSize, "C++: asmjit::OperandSignature::fromSize(unsigned int) --> struct asmjit::OperandSignature", pybind11::arg("size"));
		cl.def("assign", (struct asmjit::OperandSignature & (asmjit::OperandSignature::*)(const struct asmjit::OperandSignature &)) &asmjit::OperandSignature::operator=, "C++: asmjit::OperandSignature::operator=(const struct asmjit::OperandSignature &) --> struct asmjit::OperandSignature &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
