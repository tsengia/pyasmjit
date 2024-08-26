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

void bind_unknown_unknown_12(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::Operand_ file: line:461
		pybind11::class_<asmjit::Operand_, std::shared_ptr<asmjit::Operand_>> cl(M("asmjit"), "Operand_", "Base class representing an operand in AsmJit (non-default constructed version).\n\n Contains no initialization code and can be used safely to define an array of operands that won't be initialized.\n This is a  base structure designed to be statically initialized, static const, or to be used by user\n code to define an array of operands without having them default initialized at construction time.\n\n The key difference between  and  is:\n\n ```\n Operand_ xArray[10];    // Not initialized, contains garbage.\n Operand_ yArray[10] {}; // All operands initialized to none explicitly (zero initialized).\n Operand  yArray[10];    // All operands initialized to none implicitly (zero initialized).\n ```");
		cl.def( pybind11::init( [](asmjit::Operand_ const &o){ return new asmjit::Operand_(o); } ) );
		cl.def( pybind11::init( [](){ return new asmjit::Operand_(); } ) );

		pybind11::enum_<asmjit::Operand_::DataIndex>(cl, "DataIndex", pybind11::arithmetic(), "\\{")
			.value("kDataMemIndexId", asmjit::Operand_::kDataMemIndexId)
			.value("kDataMemOffsetLo", asmjit::Operand_::kDataMemOffsetLo)
			.value("kDataImmValueLo", asmjit::Operand_::kDataImmValueLo)
			.value("kDataImmValueHi", asmjit::Operand_::kDataImmValueHi)
			.export_values();


		pybind11::enum_<asmjit::Operand_::VirtIdConstants>(cl, "VirtIdConstants", pybind11::arithmetic(), "Constants useful for VirtId <-> Index translation.")
			.value("kVirtIdMin", asmjit::Operand_::kVirtIdMin)
			.value("kVirtIdMax", asmjit::Operand_::kVirtIdMax)
			.value("kVirtIdCount", asmjit::Operand_::kVirtIdCount)
			.export_values();



		cl.def("as", (class asmjit::Operand & (asmjit::Operand_::*)()) &asmjit::Operand_::as<asmjit::Operand>, "C++: asmjit::Operand_::as() --> class asmjit::Operand &", pybind11::return_value_policy::automatic);
		cl.def("as", (const class asmjit::Operand & (asmjit::Operand_::*)() const) &asmjit::Operand_::as<asmjit::Operand>, "C++: asmjit::Operand_::as() const --> const class asmjit::Operand &", pybind11::return_value_policy::automatic);
		cl.def("as", (const class asmjit::x86::Reg & (asmjit::Operand_::*)() const) &asmjit::Operand_::as<asmjit::x86::Reg>, "C++: asmjit::Operand_::as() const --> const class asmjit::x86::Reg &", pybind11::return_value_policy::automatic);
		cl.def("as", (const class asmjit::arm::Reg & (asmjit::Operand_::*)() const) &asmjit::Operand_::as<asmjit::arm::Reg>, "C++: asmjit::Operand_::as() const --> const class asmjit::arm::Reg &", pybind11::return_value_policy::automatic);
		cl.def_static("isVirtId", (bool (*)(unsigned int)) &asmjit::Operand_::isVirtId, "Tests whether the given `id` is a valid virtual register id. Since AsmJit supports both physical and virtual\n registers it must be able to distinguish between these two. The idea is that physical registers are always\n limited in size, so virtual identifiers start from `kVirtIdMin` and end at `kVirtIdMax`.\n\nC++: asmjit::Operand_::isVirtId(unsigned int) --> bool", pybind11::arg("id"));
		cl.def_static("indexToVirtId", (unsigned int (*)(unsigned int)) &asmjit::Operand_::indexToVirtId, "Converts a real-id into a packed-id that can be stored in Operand.\n\nC++: asmjit::Operand_::indexToVirtId(unsigned int) --> unsigned int", pybind11::arg("id"));
		cl.def_static("virtIdToIndex", (unsigned int (*)(unsigned int)) &asmjit::Operand_::virtIdToIndex, "Converts a packed-id back to real-id.\n\nC++: asmjit::Operand_::virtIdToIndex(unsigned int) --> unsigned int", pybind11::arg("id"));

		cl.def("copyFrom", (void (asmjit::Operand_::*)(const struct asmjit::Operand_ &)) &asmjit::Operand_::copyFrom, "Initializes the operand from `other` operand (used by operator overloads).\n\nC++: asmjit::Operand_::copyFrom(const struct asmjit::Operand_ &) --> void", pybind11::arg("other"));
		cl.def("reset", (void (asmjit::Operand_::*)()) &asmjit::Operand_::reset, "Resets the `Operand` to none.\n\n None operand is defined the following way:\n   - Its signature is zero (OperandType::kNone, and the rest zero as well).\n   - Its id is `0`.\n   - The reserved8_4 field is set to `0`.\n   - The reserved12_4 field is set to zero.\n\n In other words, reset operands have all members set to zero. Reset operand must match the Operand state\n right after its construction. Alternatively, if you have an array of operands, you can simply use `memset()`.\n\n ```\n using namespace asmjit;\n\n Operand a;\n Operand b;\n assert(a == b);\n\n b = x86::eax;\n assert(a != b);\n\n b.reset();\n assert(a == b);\n\n memset(&b, 0, sizeof(Operand));\n assert(a == b);\n ```\n\nC++: asmjit::Operand_::reset() --> void");
		cl.def("__eq__", (bool (asmjit::Operand_::*)(const struct asmjit::Operand_ &) const) &asmjit::Operand_::operator==, "Tests whether this operand is the same as `other`.\n\nC++: asmjit::Operand_::operator==(const struct asmjit::Operand_ &) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (asmjit::Operand_::*)(const struct asmjit::Operand_ &) const) &asmjit::Operand_::operator!=, "Tests whether this operand is not the same as `other`.\n\nC++: asmjit::Operand_::operator!=(const struct asmjit::Operand_ &) const --> bool", pybind11::arg("other"));
		cl.def("equals", (bool (asmjit::Operand_::*)(const struct asmjit::Operand_ &) const) &asmjit::Operand_::equals, "Tests whether the operand is 100% equal to `other` operand.\n\n \n This basically performs a binary comparison, if aby bit is\n different the operands are not equal.\n\nC++: asmjit::Operand_::equals(const struct asmjit::Operand_ &) const --> bool", pybind11::arg("other"));
		cl.def("hasSignature", (bool (asmjit::Operand_::*)(const struct asmjit::Operand_ &) const) &asmjit::Operand_::hasSignature, "Tests whether the operand's signature matches the signature of the `other` operand.\n\nC++: asmjit::Operand_::hasSignature(const struct asmjit::Operand_ &) const --> bool", pybind11::arg("other"));
		cl.def("hasSignature", (bool (asmjit::Operand_::*)(const struct asmjit::OperandSignature &) const) &asmjit::Operand_::hasSignature, "Tests whether the operand's signature matches the given signature `sign`.\n\nC++: asmjit::Operand_::hasSignature(const struct asmjit::OperandSignature &) const --> bool", pybind11::arg("other"));
		cl.def("signature", (struct asmjit::OperandSignature (asmjit::Operand_::*)() const) &asmjit::Operand_::signature, "Returns operand signature as unsigned 32-bit integer.\n\n Signature is first 4 bytes of the operand data. It's used mostly for operand checking as it's\n much faster to check packed 4 bytes at once than having to check these bytes individually.\n\nC++: asmjit::Operand_::signature() const --> struct asmjit::OperandSignature");
		cl.def("setSignature", (void (asmjit::Operand_::*)(const struct asmjit::OperandSignature &)) &asmjit::Operand_::setSignature, "Sets the operand signature, see `signature()`.\n\n \n Improper use of `setSignature()` can lead to hard-to-debug errors.\n\nC++: asmjit::Operand_::setSignature(const struct asmjit::OperandSignature &) --> void", pybind11::arg("signature"));
		cl.def("setSignature", (void (asmjit::Operand_::*)(unsigned int)) &asmjit::Operand_::setSignature, "C++: asmjit::Operand_::setSignature(unsigned int) --> void", pybind11::arg("signature"));
		cl.def("opType", (enum asmjit::OperandType (asmjit::Operand_::*)() const) &asmjit::Operand_::opType, "Returns the type of the operand, see `OpType`.\n\nC++: asmjit::Operand_::opType() const --> enum asmjit::OperandType");
		cl.def("isNone", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isNone, "Tests whether the operand is none (`OperandType::kNone`).\n\nC++: asmjit::Operand_::isNone() const --> bool");
		cl.def("isReg", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isReg, "Tests whether the operand is a register (`OperandType::kReg`).\n\nC++: asmjit::Operand_::isReg() const --> bool");
		cl.def("isRegList", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isRegList, "Tests whether the operand is a register-list.\n\n \n Register-list is currently only used by 32-bit ARM architecture.\n\nC++: asmjit::Operand_::isRegList() const --> bool");
		cl.def("isMem", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isMem, "Tests whether the operand is a memory location (`OperandType::kMem`).\n\nC++: asmjit::Operand_::isMem() const --> bool");
		cl.def("isImm", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isImm, "Tests whether the operand is an immediate (`OperandType::kImm`).\n\nC++: asmjit::Operand_::isImm() const --> bool");
		cl.def("isLabel", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isLabel, "Tests whether the operand is a label (`OperandType::kLabel`).\n\nC++: asmjit::Operand_::isLabel() const --> bool");
		cl.def("isPhysReg", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isPhysReg, "Tests whether the operand is a physical register.\n\nC++: asmjit::Operand_::isPhysReg() const --> bool");
		cl.def("isVirtReg", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVirtReg, "Tests whether the operand is a virtual register.\n\nC++: asmjit::Operand_::isVirtReg() const --> bool");
		cl.def("id", (unsigned int (asmjit::Operand_::*)() const) &asmjit::Operand_::id, "Returns the operand id.\n\n The value returned should be interpreted accordingly to the operand type:\n   * None  - Should be `0`.\n   * Reg   - Physical or virtual register id.\n   * Mem   - Multiple meanings - BASE address (register or label id), or high value of a 64-bit absolute address.\n   * Imm   - Should be `0`.\n   * Label - Label id if it was created by using `newLabel()` or `Globals::kInvalidId` if the label is invalid or\n             not initialized.\n\nC++: asmjit::Operand_::id() const --> unsigned int");
		cl.def("isReg", (bool (asmjit::Operand_::*)(enum asmjit::RegType) const) &asmjit::Operand_::isReg, "Tests whether the operand is a register matching the given register `type`.\n\nC++: asmjit::Operand_::isReg(enum asmjit::RegType) const --> bool", pybind11::arg("type"));
		cl.def("isReg", (bool (asmjit::Operand_::*)(enum asmjit::RegGroup) const) &asmjit::Operand_::isReg, "Tests whether the operand is a register of the provided register group `regGroup`.\n\nC++: asmjit::Operand_::isReg(enum asmjit::RegGroup) const --> bool", pybind11::arg("regGroup"));
		cl.def("isReg", (bool (asmjit::Operand_::*)(enum asmjit::RegType, unsigned int) const) &asmjit::Operand_::isReg, "Tests whether the operand is register and of register type `regType` and `regId`.\n\nC++: asmjit::Operand_::isReg(enum asmjit::RegType, unsigned int) const --> bool", pybind11::arg("regType"), pybind11::arg("regId"));
		cl.def("isReg", (bool (asmjit::Operand_::*)(enum asmjit::RegGroup, unsigned int) const) &asmjit::Operand_::isReg, "Tests whether the operand is register and of register group `regGroup` and `regId`.\n\nC++: asmjit::Operand_::isReg(enum asmjit::RegGroup, unsigned int) const --> bool", pybind11::arg("regGroup"), pybind11::arg("regId"));
		cl.def("isGp", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isGp, "Tests whether the register is a general purpose register (any size).\n\nC++: asmjit::Operand_::isGp() const --> bool");
		cl.def("isGp32", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isGp32, "Tests whether the register is a 32-bit general purpose register.\n\nC++: asmjit::Operand_::isGp32() const --> bool");
		cl.def("isGp64", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isGp64, "Tests whether the register is a 64-bit general purpose register.\n\nC++: asmjit::Operand_::isGp64() const --> bool");
		cl.def("isVec", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec, "Tests whether the register is a vector register of any size.\n\nC++: asmjit::Operand_::isVec() const --> bool");
		cl.def("isVec8", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec8, "Tests whether the register is an 8-bit vector register or view (AArch64).\n\nC++: asmjit::Operand_::isVec8() const --> bool");
		cl.def("isVec16", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec16, "Tests whether the register is a 16-bit vector register or view (AArch64).\n\nC++: asmjit::Operand_::isVec16() const --> bool");
		cl.def("isVec32", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec32, "Tests whether the register is a 32-bit vector register or view (AArch32, AArch64).\n\nC++: asmjit::Operand_::isVec32() const --> bool");
		cl.def("isVec64", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec64, "Tests whether the register is a 64-bit vector register or view (AArch32, AArch64).\n\nC++: asmjit::Operand_::isVec64() const --> bool");
		cl.def("isVec128", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec128, "Tests whether the register is a 128-bit vector register or view (AArch32, AArch64, X86, X86_64).\n\nC++: asmjit::Operand_::isVec128() const --> bool");
		cl.def("isVec256", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec256, "Tests whether the register is a 256-bit vector register or view (X86, X86_64).\n\nC++: asmjit::Operand_::isVec256() const --> bool");
		cl.def("isVec512", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isVec512, "Tests whether the register is a 512-bit vector register or view (X86, X86_64).\n\nC++: asmjit::Operand_::isVec512() const --> bool");
		cl.def("isMask", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isMask, "Tests whether the register is a mask register of any size.\n\nC++: asmjit::Operand_::isMask() const --> bool");
		cl.def("isRegList", (bool (asmjit::Operand_::*)(enum asmjit::RegType) const) &asmjit::Operand_::isRegList, "Tests whether the operand is a register matching the given register `type`.\n\nC++: asmjit::Operand_::isRegList(enum asmjit::RegType) const --> bool", pybind11::arg("type"));
		cl.def("isRegOrMem", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isRegOrMem, "Tests whether the operand is a register or memory.\n\n \n This is useful on X86 and X86_64 architectures as many instructions support Reg/Mem operand combination.\n So if the user code works with just  it's possible to check whether the operand is either a register\n or memory location with a single check.\n\nC++: asmjit::Operand_::isRegOrMem() const --> bool");
		cl.def("isRegOrRegListOrMem", (bool (asmjit::Operand_::*)() const) &asmjit::Operand_::isRegOrRegListOrMem, "Tests whether the operand is a register, register-list, or memory.\n\n \n This is useful on 32-bit ARM architecture to check whether an operand references a register. It can be\n used in other architectures too, but it would work identically to  as other architectures\n don't provide register lists.\n\nC++: asmjit::Operand_::isRegOrRegListOrMem() const --> bool");
		cl.def("x86RmSize", (unsigned int (asmjit::Operand_::*)() const) &asmjit::Operand_::x86RmSize, "Returns a size of a register or an X86 memory operand.\n\n \n At the moment only X86 and X86_64 memory operands have a size - other memory operands can use bits\n that represent size as an additional payload. This means that memory size is architecture specific and should\n be accessed via  Sometimes when the user knows that the operand is either a register or\n memory operand this function can be helpful as it avoids casting, but it only works when it targets X86 and X86_64.\n\nC++: asmjit::Operand_::x86RmSize() const --> unsigned int");
		cl.def("assign", (struct asmjit::Operand_ & (asmjit::Operand_::*)(const struct asmjit::Operand_ &)) &asmjit::Operand_::operator=, "C++: asmjit::Operand_::operator=(const struct asmjit::Operand_ &) --> struct asmjit::Operand_ &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // asmjit::Operand file: line:762
		pybind11::class_<asmjit::Operand, std::shared_ptr<asmjit::Operand>, asmjit::Operand_> cl(M("asmjit"), "Operand", "Base class representing an operand in AsmJit (default constructed version).");
		cl.def( pybind11::init( [](){ return new asmjit::Operand(); } ) );
		cl.def( pybind11::init( [](asmjit::Operand const &o){ return new asmjit::Operand(o); } ) );
		cl.def( pybind11::init<const struct asmjit::Operand_ &>(), pybind11::arg("other") );

		cl.def( pybind11::init<struct asmjit::Globals::Init_, const struct asmjit::OperandSignature &, unsigned int, unsigned int, unsigned int>(), pybind11::arg(""), pybind11::arg("u0"), pybind11::arg("u1"), pybind11::arg("u2"), pybind11::arg("u3") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def("assign", (class asmjit::Operand & (asmjit::Operand::*)(const class asmjit::Operand &)) &asmjit::Operand::operator=, "\\{\n\nC++: asmjit::Operand::operator=(const class asmjit::Operand &) --> class asmjit::Operand &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("assign", (class asmjit::Operand & (asmjit::Operand::*)(const struct asmjit::Operand_ &)) &asmjit::Operand::operator=, "C++: asmjit::Operand::operator=(const struct asmjit::Operand_ &) --> class asmjit::Operand &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("clone", (class asmjit::Operand (asmjit::Operand::*)() const) &asmjit::Operand::clone, "Clones this operand and returns its copy.\n\nC++: asmjit::Operand::clone() const --> class asmjit::Operand");
	}
}
