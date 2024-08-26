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

void bind_unknown_unknown_13(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::Label file: line:830
		pybind11::class_<asmjit::Label, std::shared_ptr<asmjit::Label>, asmjit::Operand> cl(M("asmjit"), "Label", "Label (jump target or data location).\n\n Label represents a location in code typically used as a jump target, but may be also a reference to some data or\n a static variable. Label has to be explicitly created by BaseEmitter.\n\n Example of using labels:\n\n ```\n // Create some emitter (for example x86::Assembler).\n x86::Assembler a;\n\n // Create Label instance.\n Label L1 = a.newLabel();\n\n // ... your code ...\n\n // Using label.\n a.jump(L1);\n\n // ... your code ...\n\n // Bind label to the current position, see `BaseEmitter::bind()`.\n a.bind(L1);\n ```");
		cl.def( pybind11::init( [](){ return new asmjit::Label(); } ) );
		cl.def( pybind11::init( [](asmjit::Label const &o){ return new asmjit::Label(o); } ) );
		cl.def( pybind11::init<unsigned int>(), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def("reset", (void (asmjit::Label::*)()) &asmjit::Label::reset, "Resets the label, will reset all properties and set its ID to `Globals::kInvalidId`.\n\nC++: asmjit::Label::reset() --> void");
		cl.def("assign", (class asmjit::Label & (asmjit::Label::*)(const class asmjit::Label &)) &asmjit::Label::operator=, "\\{\n\nC++: asmjit::Label::operator=(const class asmjit::Label &) --> class asmjit::Label &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("isValid", (bool (asmjit::Label::*)() const) &asmjit::Label::isValid, "Tests whether the label was created by CodeHolder and/or an attached emitter.\n\nC++: asmjit::Label::isValid() const --> bool");
		cl.def("setId", (void (asmjit::Label::*)(unsigned int)) &asmjit::Label::setId, "Sets the label `id`.\n\nC++: asmjit::Label::setId(unsigned int) --> void", pybind11::arg("id"));
	}
	{ // asmjit::BaseRegTraits file: line:880
		pybind11::class_<asmjit::BaseRegTraits, std::shared_ptr<asmjit::BaseRegTraits>> cl(M("asmjit"), "BaseRegTraits", "Default register traits.");
		cl.def( pybind11::init( [](){ return new asmjit::BaseRegTraits(); } ) );
	}
	{ // asmjit::BaseReg file: line:901
		pybind11::class_<asmjit::BaseReg, std::shared_ptr<asmjit::BaseReg>, asmjit::Operand> cl(M("asmjit"), "BaseReg", "Physical or virtual register operand (base).");
		cl.def( pybind11::init( [](){ return new asmjit::BaseReg(); } ) );
		cl.def( pybind11::init( [](asmjit::BaseReg const &o){ return new asmjit::BaseReg(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseReg &, unsigned int>(), pybind11::arg("other"), pybind11::arg("id") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("signature"), pybind11::arg("id") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def("isReg", [](asmjit::BaseReg const &o, enum asmjit::RegGroup const & a0, unsigned int const & a1) -> bool { return o.isReg(a0, a1); }, "", pybind11::arg("regGroup"), pybind11::arg("regId"));
		cl.def("isReg", [](asmjit::BaseReg const &o, enum asmjit::RegGroup const & a0) -> bool { return o.isReg(a0); }, "", pybind11::arg("regGroup"));
		cl.def("isReg", [](asmjit::BaseReg const &o) -> bool { return o.isReg(); }, "");
		cl.def("assign", (class asmjit::BaseReg & (asmjit::BaseReg::*)(const class asmjit::BaseReg &)) &asmjit::BaseReg::operator=, "\\{\n\nC++: asmjit::BaseReg::operator=(const class asmjit::BaseReg &) --> class asmjit::BaseReg &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("baseSignature", (struct asmjit::OperandSignature (asmjit::BaseReg::*)() const) &asmjit::BaseReg::baseSignature, "Returns base signature of the register associated with each register type.\n\n Base signature only contains the operand type, register type, register group, and register size. It doesn't\n contain element type, predicate, or other architecture-specific data. Base signature is a signature that is\n provided by architecture-specific `RegTraits`, like \n\nC++: asmjit::BaseReg::baseSignature() const --> struct asmjit::OperandSignature");
		cl.def("hasBaseSignature", (bool (asmjit::BaseReg::*)(unsigned int) const) &asmjit::BaseReg::hasBaseSignature, "Tests whether the operand's base signature matches the given signature `sign`.\n\nC++: asmjit::BaseReg::hasBaseSignature(unsigned int) const --> bool", pybind11::arg("signature"));
		cl.def("hasBaseSignature", (bool (asmjit::BaseReg::*)(const struct asmjit::OperandSignature &) const) &asmjit::BaseReg::hasBaseSignature, "Tests whether the operand's base signature matches the given signature `sign`.\n\nC++: asmjit::BaseReg::hasBaseSignature(const struct asmjit::OperandSignature &) const --> bool", pybind11::arg("signature"));
		cl.def("hasBaseSignature", (bool (asmjit::BaseReg::*)(const class asmjit::BaseReg &) const) &asmjit::BaseReg::hasBaseSignature, "Tests whether the operand's base signature matches the base signature of the `other` operand.\n\nC++: asmjit::BaseReg::hasBaseSignature(const class asmjit::BaseReg &) const --> bool", pybind11::arg("other"));
		cl.def("isSame", (bool (asmjit::BaseReg::*)(const class asmjit::BaseReg &) const) &asmjit::BaseReg::isSame, "Tests whether this register is the same as `other`.\n\n This is just an optimization. Registers by default only use the first 8 bytes of Operand data, so this method\n takes advantage of this knowledge and only compares these 8 bytes. If both operands were created correctly\n both  and  should give the same answer, however, if any of these two contains garbage\n or other metadata in the upper 8 bytes then  may return `true` in cases in which \n returns false.\n\nC++: asmjit::BaseReg::isSame(const class asmjit::BaseReg &) const --> bool", pybind11::arg("other"));
		cl.def("isValid", (bool (asmjit::BaseReg::*)() const) &asmjit::BaseReg::isValid, "Tests whether the register is valid (either virtual or physical).\n\nC++: asmjit::BaseReg::isValid() const --> bool");
		cl.def("isPhysReg", (bool (asmjit::BaseReg::*)() const) &asmjit::BaseReg::isPhysReg, "Tests whether this is a physical register.\n\nC++: asmjit::BaseReg::isPhysReg() const --> bool");
		cl.def("isVirtReg", (bool (asmjit::BaseReg::*)() const) &asmjit::BaseReg::isVirtReg, "Tests whether this is a virtual register.\n\nC++: asmjit::BaseReg::isVirtReg() const --> bool");
		cl.def("isType", (bool (asmjit::BaseReg::*)(enum asmjit::RegType) const) &asmjit::BaseReg::isType, "Tests whether the register type matches `type` - same as `isReg(type)`, provided for convenience.\n\nC++: asmjit::BaseReg::isType(enum asmjit::RegType) const --> bool", pybind11::arg("type"));
		cl.def("isGroup", (bool (asmjit::BaseReg::*)(enum asmjit::RegGroup) const) &asmjit::BaseReg::isGroup, "Tests whether the register group matches `group`.\n\nC++: asmjit::BaseReg::isGroup(enum asmjit::RegGroup) const --> bool", pybind11::arg("group"));
		cl.def("isGp", (bool (asmjit::BaseReg::*)() const) &asmjit::BaseReg::isGp, "Tests whether the register is a general purpose register (any size).\n\nC++: asmjit::BaseReg::isGp() const --> bool");
		cl.def("isVec", (bool (asmjit::BaseReg::*)() const) &asmjit::BaseReg::isVec, "Tests whether the register is a vector register of any size.\n\nC++: asmjit::BaseReg::isVec() const --> bool");
		cl.def("isMask", (bool (asmjit::BaseReg::*)() const) &asmjit::BaseReg::isMask, "Tests whether the register is a mask register of any size.\n\nC++: asmjit::BaseReg::isMask() const --> bool");
		cl.def("isReg", (bool (asmjit::BaseReg::*)(enum asmjit::RegType) const) &asmjit::BaseReg::isReg, "Same as `isType()`, provided for convenience.\n\nC++: asmjit::BaseReg::isReg(enum asmjit::RegType) const --> bool", pybind11::arg("rType"));
		cl.def("isReg", (bool (asmjit::BaseReg::*)(enum asmjit::RegType, unsigned int) const) &asmjit::BaseReg::isReg, "Tests whether the register type matches `type` and register id matches `id`.\n\nC++: asmjit::BaseReg::isReg(enum asmjit::RegType, unsigned int) const --> bool", pybind11::arg("rType"), pybind11::arg("id"));
		cl.def("type", (enum asmjit::RegType (asmjit::BaseReg::*)() const) &asmjit::BaseReg::type, "Returns the register type.\n\nC++: asmjit::BaseReg::type() const --> enum asmjit::RegType");
		cl.def("group", (enum asmjit::RegGroup (asmjit::BaseReg::*)() const) &asmjit::BaseReg::group, "Returns the register group.\n\nC++: asmjit::BaseReg::group() const --> enum asmjit::RegGroup");
		cl.def("hasSize", (bool (asmjit::BaseReg::*)() const) &asmjit::BaseReg::hasSize, "Tests whether the register specifies a size (i.e. the size is not zero).\n\nC++: asmjit::BaseReg::hasSize() const --> bool");
		cl.def("hasSize", (bool (asmjit::BaseReg::*)(unsigned int) const) &asmjit::BaseReg::hasSize, "Tests whether the register size matches size `s`.\n\nC++: asmjit::BaseReg::hasSize(unsigned int) const --> bool", pybind11::arg("s"));
		cl.def("size", (unsigned int (asmjit::BaseReg::*)() const) &asmjit::BaseReg::size, "Returns the size of the register in bytes. If the register size depends on architecture (like `x86::CReg` and\n `x86::DReg`) the size returned should be the greatest possible (so it should return 64-bit size in such case).\n\nC++: asmjit::BaseReg::size() const --> unsigned int");
		cl.def("predicate", (unsigned int (asmjit::BaseReg::*)() const) &asmjit::BaseReg::predicate, "Returns operation predicate of the register (ARM/AArch64).\n\n The meaning depends on architecture, for example on ARM hardware this describes \n of the register.\n\nC++: asmjit::BaseReg::predicate() const --> unsigned int");
		cl.def("setPredicate", (void (asmjit::BaseReg::*)(unsigned int)) &asmjit::BaseReg::setPredicate, "Sets operation predicate of the register to `predicate` (ARM/AArch64).\n\n The meaning depends on architecture, for example on ARM hardware this describes \n of the register.\n\nC++: asmjit::BaseReg::setPredicate(unsigned int) --> void", pybind11::arg("predicate"));
		cl.def("resetPredicate", (void (asmjit::BaseReg::*)()) &asmjit::BaseReg::resetPredicate, "Resets shift operation type of the register to the default value (ARM/AArch64).\n\nC++: asmjit::BaseReg::resetPredicate() --> void");
		cl.def("clone", (class asmjit::BaseReg (asmjit::BaseReg::*)() const) &asmjit::BaseReg::clone, "Clones the register operand.\n\nC++: asmjit::BaseReg::clone() const --> class asmjit::BaseReg");
		cl.def("setId", (void (asmjit::BaseReg::*)(unsigned int)) &asmjit::BaseReg::setId, "Sets the register id to `id`.\n\nC++: asmjit::BaseReg::setId(unsigned int) --> void", pybind11::arg("id"));
		cl.def("setSignatureAndId", (void (asmjit::BaseReg::*)(const struct asmjit::OperandSignature &, unsigned int)) &asmjit::BaseReg::setSignatureAndId, "Sets the register `signature` and `id`.\n\nC++: asmjit::BaseReg::setSignatureAndId(const struct asmjit::OperandSignature &, unsigned int) --> void", pybind11::arg("signature"), pybind11::arg("id"));
		cl.def_static("isGp", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::BaseReg::isGp, "Tests whether the `op` operand is a general purpose register.\n\nC++: asmjit::BaseReg::isGp(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isVec", (bool (*)(const struct asmjit::Operand_ &)) &asmjit::BaseReg::isVec, "Tests whether the `op` operand is a vector register.\n\nC++: asmjit::BaseReg::isVec(const struct asmjit::Operand_ &) --> bool", pybind11::arg("op"));
		cl.def_static("isGp", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::BaseReg::isGp, "Tests whether the `op` is a general purpose register of the given `id`.\n\nC++: asmjit::BaseReg::isGp(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
		cl.def_static("isVec", (bool (*)(const struct asmjit::Operand_ &, unsigned int)) &asmjit::BaseReg::isVec, "Tests whether the `op` is a vector register of the given `id`.\n\nC++: asmjit::BaseReg::isVec(const struct asmjit::Operand_ &, unsigned int) --> bool", pybind11::arg("op"), pybind11::arg("id"));
	}
	{ // asmjit::RegOnly file: line:1093
		pybind11::class_<asmjit::RegOnly, std::shared_ptr<asmjit::RegOnly>> cl(M("asmjit"), "RegOnly", "RegOnly is 8-byte version of `BaseReg` that allows to store either register or nothing.\n\n It's designed to decrease the space consumed by an extra \"operand\" in  and ");
		cl.def( pybind11::init( [](){ return new asmjit::RegOnly(); } ) );
		cl.def( pybind11::init( [](asmjit::RegOnly const &o){ return new asmjit::RegOnly(o); } ) );


		cl.def("init", (void (asmjit::RegOnly::*)(const struct asmjit::OperandSignature &, unsigned int)) &asmjit::RegOnly::init, "Initializes the `RegOnly` instance to hold register `signature` and `id`.\n\nC++: asmjit::RegOnly::init(const struct asmjit::OperandSignature &, unsigned int) --> void", pybind11::arg("signature"), pybind11::arg("id"));
		cl.def("init", (void (asmjit::RegOnly::*)(const class asmjit::BaseReg &)) &asmjit::RegOnly::init, "C++: asmjit::RegOnly::init(const class asmjit::BaseReg &) --> void", pybind11::arg("reg"));
		cl.def("init", (void (asmjit::RegOnly::*)(const struct asmjit::RegOnly &)) &asmjit::RegOnly::init, "C++: asmjit::RegOnly::init(const struct asmjit::RegOnly &) --> void", pybind11::arg("reg"));
		cl.def("reset", (void (asmjit::RegOnly::*)()) &asmjit::RegOnly::reset, "Resets the `RegOnly` members to zeros (none).\n\nC++: asmjit::RegOnly::reset() --> void");
		cl.def("isNone", (bool (asmjit::RegOnly::*)() const) &asmjit::RegOnly::isNone, "Tests whether this ExtraReg is none (same as calling `Operand_::isNone()`).\n\nC++: asmjit::RegOnly::isNone() const --> bool");
		cl.def("isReg", (bool (asmjit::RegOnly::*)() const) &asmjit::RegOnly::isReg, "Tests whether the register is valid (either virtual or physical).\n\nC++: asmjit::RegOnly::isReg() const --> bool");
		cl.def("isPhysReg", (bool (asmjit::RegOnly::*)() const) &asmjit::RegOnly::isPhysReg, "Tests whether this is a physical register.\n\nC++: asmjit::RegOnly::isPhysReg() const --> bool");
		cl.def("isVirtReg", (bool (asmjit::RegOnly::*)() const) &asmjit::RegOnly::isVirtReg, "Tests whether this is a virtual register (used by `BaseCompiler`).\n\nC++: asmjit::RegOnly::isVirtReg() const --> bool");
		cl.def("signature", (struct asmjit::OperandSignature (asmjit::RegOnly::*)() const) &asmjit::RegOnly::signature, "Returns the register signature or 0 if no register is assigned.\n\nC++: asmjit::RegOnly::signature() const --> struct asmjit::OperandSignature");
		cl.def("id", (unsigned int (asmjit::RegOnly::*)() const) &asmjit::RegOnly::id, "Returns the register id.\n\n \n Always check whether the register is assigned before using the returned identifier as\n non-assigned `RegOnly` instance would return zero id, which is still a valid register id.\n\nC++: asmjit::RegOnly::id() const --> unsigned int");
		cl.def("setId", (void (asmjit::RegOnly::*)(unsigned int)) &asmjit::RegOnly::setId, "Sets the register id.\n\nC++: asmjit::RegOnly::setId(unsigned int) --> void", pybind11::arg("id"));
		cl.def("type", (enum asmjit::RegType (asmjit::RegOnly::*)() const) &asmjit::RegOnly::type, "Returns the register type.\n\nC++: asmjit::RegOnly::type() const --> enum asmjit::RegType");
		cl.def("group", (enum asmjit::RegGroup (asmjit::RegOnly::*)() const) &asmjit::RegOnly::group, "Returns the register group.\n\nC++: asmjit::RegOnly::group() const --> enum asmjit::RegGroup");
		cl.def("assign", (struct asmjit::RegOnly & (asmjit::RegOnly::*)(const struct asmjit::RegOnly &)) &asmjit::RegOnly::operator=, "C++: asmjit::RegOnly::operator=(const struct asmjit::RegOnly &) --> struct asmjit::RegOnly &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // asmjit::BaseRegList file: line:1236
		pybind11::class_<asmjit::BaseRegList, std::shared_ptr<asmjit::BaseRegList>, asmjit::Operand> cl(M("asmjit"), "BaseRegList", "List of physical registers (base).\n\n \n List of registers is only used by some ARM instructions at the moment.");
		cl.def( pybind11::init( [](){ return new asmjit::BaseRegList(); } ) );
		cl.def( pybind11::init( [](asmjit::BaseRegList const &o){ return new asmjit::BaseRegList(o); } ) );
		cl.def( pybind11::init<const class asmjit::BaseRegList &, unsigned int>(), pybind11::arg("other"), pybind11::arg("regMask") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int>(), pybind11::arg("signature"), pybind11::arg("regMask") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def("assign", (class asmjit::BaseRegList & (asmjit::BaseRegList::*)(const class asmjit::BaseRegList &)) &asmjit::BaseRegList::operator=, "\\{\n\nC++: asmjit::BaseRegList::operator=(const class asmjit::BaseRegList &) --> class asmjit::BaseRegList &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("isValid", (bool (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::isValid, "Tests whether the register-list is valid, which means it has a type and at least a single register in the list.\n\nC++: asmjit::BaseRegList::isValid() const --> bool");
		cl.def("isType", (bool (asmjit::BaseRegList::*)(enum asmjit::RegType) const) &asmjit::BaseRegList::isType, "Tests whether the register type matches `type` - same as `isReg(type)`, provided for convenience.\n\nC++: asmjit::BaseRegList::isType(enum asmjit::RegType) const --> bool", pybind11::arg("type"));
		cl.def("isGroup", (bool (asmjit::BaseRegList::*)(enum asmjit::RegGroup) const) &asmjit::BaseRegList::isGroup, "Tests whether the register group matches `group`.\n\nC++: asmjit::BaseRegList::isGroup(enum asmjit::RegGroup) const --> bool", pybind11::arg("group"));
		cl.def("isGp", (bool (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::isGp, "Tests whether the register is a general purpose register (any size).\n\nC++: asmjit::BaseRegList::isGp() const --> bool");
		cl.def("isVec", (bool (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::isVec, "Tests whether the register is a vector register.\n\nC++: asmjit::BaseRegList::isVec() const --> bool");
		cl.def("type", (enum asmjit::RegType (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::type, "Returns the register type.\n\nC++: asmjit::BaseRegList::type() const --> enum asmjit::RegType");
		cl.def("group", (enum asmjit::RegGroup (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::group, "Returns the register group.\n\nC++: asmjit::BaseRegList::group() const --> enum asmjit::RegGroup");
		cl.def("size", (unsigned int (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::size, "Returns the size of a single register in this register-list or 0 if unspecified.\n\nC++: asmjit::BaseRegList::size() const --> unsigned int");
		cl.def("list", (unsigned int (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::list, "Returns the register list as a mask, where each bit represents one physical register.\n\nC++: asmjit::BaseRegList::list() const --> unsigned int");
		cl.def("setList", (void (asmjit::BaseRegList::*)(unsigned int)) &asmjit::BaseRegList::setList, "Sets the register list to `mask`.\n\nC++: asmjit::BaseRegList::setList(unsigned int) --> void", pybind11::arg("mask"));
		cl.def("resetList", (void (asmjit::BaseRegList::*)()) &asmjit::BaseRegList::resetList, "Remoes all registers from the register-list by making the underlying register-mask zero.\n\nC++: asmjit::BaseRegList::resetList() --> void");
		cl.def("addList", (void (asmjit::BaseRegList::*)(unsigned int)) &asmjit::BaseRegList::addList, "Adds registers passed by a register `mask` to the register-list.\n\nC++: asmjit::BaseRegList::addList(unsigned int) --> void", pybind11::arg("mask"));
		cl.def("clearList", (void (asmjit::BaseRegList::*)(unsigned int)) &asmjit::BaseRegList::clearList, "Removes registers passed by a register `mask` to the register-list.\n\nC++: asmjit::BaseRegList::clearList(unsigned int) --> void", pybind11::arg("mask"));
		cl.def("andList", (void (asmjit::BaseRegList::*)(unsigned int)) &asmjit::BaseRegList::andList, "Uses AND operator to combine the current register-list with other register `mask`.\n\nC++: asmjit::BaseRegList::andList(unsigned int) --> void", pybind11::arg("mask"));
		cl.def("xorList", (void (asmjit::BaseRegList::*)(unsigned int)) &asmjit::BaseRegList::xorList, "Uses XOR operator to combine the current register-list with other register `mask`.\n\nC++: asmjit::BaseRegList::xorList(unsigned int) --> void", pybind11::arg("mask"));
		cl.def("hasReg", (bool (asmjit::BaseRegList::*)(unsigned int) const) &asmjit::BaseRegList::hasReg, "Checks whether a physical register `physId` is in the register-list.\n\nC++: asmjit::BaseRegList::hasReg(unsigned int) const --> bool", pybind11::arg("physId"));
		cl.def("addReg", (void (asmjit::BaseRegList::*)(unsigned int)) &asmjit::BaseRegList::addReg, "Adds a physical register `physId` to the register-list.\n\nC++: asmjit::BaseRegList::addReg(unsigned int) --> void", pybind11::arg("physId"));
		cl.def("clearReg", (void (asmjit::BaseRegList::*)(unsigned int)) &asmjit::BaseRegList::clearReg, "Removes a physical register `physId` from the register-list.\n\nC++: asmjit::BaseRegList::clearReg(unsigned int) --> void", pybind11::arg("physId"));
		cl.def("clone", (class asmjit::BaseRegList (asmjit::BaseRegList::*)() const) &asmjit::BaseRegList::clone, "Clones the register-list operand.\n\nC++: asmjit::BaseRegList::clone() const --> class asmjit::BaseRegList");
	}
}
