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

void bind_unknown_unknown_15(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::Arch file: line:19
	pybind11::enum_<asmjit::Arch>(M("asmjit"), "Arch", "Instruction set architecture (ISA).")
		.value("kUnknown", asmjit::Arch::kUnknown)
		.value("kX86", asmjit::Arch::kX86)
		.value("kX64", asmjit::Arch::kX64)
		.value("kRISCV32", asmjit::Arch::kRISCV32)
		.value("kRISCV64", asmjit::Arch::kRISCV64)
		.value("kARM", asmjit::Arch::kARM)
		.value("kAArch64", asmjit::Arch::kAArch64)
		.value("kThumb", asmjit::Arch::kThumb)
		.value("kMIPS32_LE", asmjit::Arch::kMIPS32_LE)
		.value("kMIPS64_LE", asmjit::Arch::kMIPS64_LE)
		.value("kARM_BE", asmjit::Arch::kARM_BE)
		.value("kAArch64_BE", asmjit::Arch::kAArch64_BE)
		.value("kThumb_BE", asmjit::Arch::kThumb_BE)
		.value("kMIPS32_BE", asmjit::Arch::kMIPS32_BE)
		.value("kMIPS64_BE", asmjit::Arch::kMIPS64_BE)
		.value("kMaxValue", asmjit::Arch::kMaxValue)
		.value("k32BitMask", asmjit::Arch::k32BitMask)
		.value("kBigEndian", asmjit::Arch::kBigEndian)
		.value("kHost", asmjit::Arch::kHost);

;

	// asmjit::SubArch file: line:95
	pybind11::enum_<asmjit::SubArch>(M("asmjit"), "SubArch", "Sub-architecture.")
		.value("kUnknown", asmjit::SubArch::kUnknown)
		.value("kMaxValue", asmjit::SubArch::kMaxValue)
		.value("kHost", asmjit::SubArch::kHost);

;

	// asmjit::ArchTypeNameId file: line:112
	pybind11::enum_<asmjit::ArchTypeNameId>(M("asmjit"), "ArchTypeNameId", "Identifier used to represent names of different data types across architectures.")
		.value("kDB", asmjit::ArchTypeNameId::kDB)
		.value("kDW", asmjit::ArchTypeNameId::kDW)
		.value("kDD", asmjit::ArchTypeNameId::kDD)
		.value("kDQ", asmjit::ArchTypeNameId::kDQ)
		.value("kByte", asmjit::ArchTypeNameId::kByte)
		.value("kHalf", asmjit::ArchTypeNameId::kHalf)
		.value("kWord", asmjit::ArchTypeNameId::kWord)
		.value("kHWord", asmjit::ArchTypeNameId::kHWord)
		.value("kDWord", asmjit::ArchTypeNameId::kDWord)
		.value("kQWord", asmjit::ArchTypeNameId::kQWord)
		.value("kXWord", asmjit::ArchTypeNameId::kXWord)
		.value("kShort", asmjit::ArchTypeNameId::kShort)
		.value("kLong", asmjit::ArchTypeNameId::kLong)
		.value("kQuad", asmjit::ArchTypeNameId::kQuad)
		.value("kMaxValue", asmjit::ArchTypeNameId::kMaxValue);

;

	// asmjit::InstHints file: line:154
	pybind11::enum_<asmjit::InstHints>(M("asmjit"), "InstHints", "Instruction feature hints for each register group provided by \n\n Instruction feature hints describe miscellaneous instructions provided by the architecture that can be used by\n register allocator to make certain things simpler - like register swaps or emitting register push/pop sequences.\n\n \n Instruction feature hints are only defined for register groups that can be used with \n infrastructure. Register groups that are not managed by Compiler are not provided by\n  and cannot be queried.")
		.value("kNoHints", asmjit::InstHints::kNoHints)
		.value("kRegSwap", asmjit::InstHints::kRegSwap)
		.value("kPushPop", asmjit::InstHints::kPushPop);

;

	{ // asmjit::ArchTraits file: line:166
		pybind11::class_<asmjit::ArchTraits, std::shared_ptr<asmjit::ArchTraits>> cl(M("asmjit"), "ArchTraits", "Architecture traits used by Function API and Compiler's register allocator.");
		cl.def( pybind11::init( [](){ return new asmjit::ArchTraits(); } ) );











		cl.def("spRegId", (unsigned int (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::spRegId, "Returns stack pointer register id.\n\nC++: asmjit::ArchTraits::spRegId() const --> unsigned int");
		cl.def("fpRegId", (unsigned int (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::fpRegId, "Returns stack frame register id.\n\nC++: asmjit::ArchTraits::fpRegId() const --> unsigned int");
		cl.def("linkRegId", (unsigned int (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::linkRegId, "Returns link register id, if the architecture provides it.\n\nC++: asmjit::ArchTraits::linkRegId() const --> unsigned int");
		cl.def("ipRegId", (unsigned int (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::ipRegId, "Returns instruction pointer register id, if the architecture provides it.\n\nC++: asmjit::ArchTraits::ipRegId() const --> unsigned int");
		cl.def("hwStackAlignment", (unsigned int (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::hwStackAlignment, "Returns a hardware stack alignment requirement.\n\n \n This is a hardware constraint. Architectures that don't constrain it would return the lowest alignment\n (1), however, some architectures may constrain the alignment, for example AArch64 requires 16-byte alignment.\n\nC++: asmjit::ArchTraits::hwStackAlignment() const --> unsigned int");
		cl.def("hasLinkReg", (bool (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::hasLinkReg, "Tests whether the architecture provides link register, which is used across function calls. If the link\n register is not provided then a function call pushes the return address on stack (X86/X64).\n\nC++: asmjit::ArchTraits::hasLinkReg() const --> bool");
		cl.def("minStackOffset", (unsigned int (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::minStackOffset, "Returns minimum addressable offset on stack guaranteed for all instructions.\n\nC++: asmjit::ArchTraits::minStackOffset() const --> unsigned int");
		cl.def("maxStackOffset", (unsigned int (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::maxStackOffset, "Returns maximum addressable offset on stack depending on specific instruction.\n\nC++: asmjit::ArchTraits::maxStackOffset() const --> unsigned int");
		cl.def("instFeatureHints", (enum asmjit::InstHints (asmjit::ArchTraits::*)(enum asmjit::RegGroup) const) &asmjit::ArchTraits::instFeatureHints, "Returns ISA flags of the given register `group`.\n\nC++: asmjit::ArchTraits::instFeatureHints(enum asmjit::RegGroup) const --> enum asmjit::InstHints", pybind11::arg("group"));
		cl.def("hasInstHint", (bool (asmjit::ArchTraits::*)(enum asmjit::RegGroup, enum asmjit::InstHints) const) &asmjit::ArchTraits::hasInstHint, "Tests whether the given register `group` has the given `flag` set.\n\nC++: asmjit::ArchTraits::hasInstHint(enum asmjit::RegGroup, enum asmjit::InstHints) const --> bool", pybind11::arg("group"), pybind11::arg("feature"));
		cl.def("hasInstRegSwap", (bool (asmjit::ArchTraits::*)(enum asmjit::RegGroup) const) &asmjit::ArchTraits::hasInstRegSwap, "Tests whether the ISA provides register swap instruction for the given register `group`.\n\nC++: asmjit::ArchTraits::hasInstRegSwap(enum asmjit::RegGroup) const --> bool", pybind11::arg("group"));
		cl.def("hasInstPushPop", (bool (asmjit::ArchTraits::*)(enum asmjit::RegGroup) const) &asmjit::ArchTraits::hasInstPushPop, "Tests whether the ISA provides push/pop instructions for the given register `group`.\n\nC++: asmjit::ArchTraits::hasInstPushPop(enum asmjit::RegGroup) const --> bool", pybind11::arg("group"));
		cl.def("hasRegType", (bool (asmjit::ArchTraits::*)(enum asmjit::RegType) const) &asmjit::ArchTraits::hasRegType, "C++: asmjit::ArchTraits::hasRegType(enum asmjit::RegType) const --> bool", pybind11::arg("type"));
		cl.def("regTypeToSignature", (struct asmjit::OperandSignature (asmjit::ArchTraits::*)(enum asmjit::RegType) const) &asmjit::ArchTraits::regTypeToSignature, "Returns an operand signature from the given register `type` of this architecture.\n\nC++: asmjit::ArchTraits::regTypeToSignature(enum asmjit::RegType) const --> struct asmjit::OperandSignature", pybind11::arg("type"));
		cl.def("regTypeToGroup", (enum asmjit::RegGroup (asmjit::ArchTraits::*)(enum asmjit::RegType) const) &asmjit::ArchTraits::regTypeToGroup, "Returns a register from the given register `type` of this architecture.\n\nC++: asmjit::ArchTraits::regTypeToGroup(enum asmjit::RegType) const --> enum asmjit::RegGroup", pybind11::arg("type"));
		cl.def("regTypeToSize", (unsigned int (asmjit::ArchTraits::*)(enum asmjit::RegType) const) &asmjit::ArchTraits::regTypeToSize, "Returns a register size the given register `type` of this architecture.\n\nC++: asmjit::ArchTraits::regTypeToSize(enum asmjit::RegType) const --> unsigned int", pybind11::arg("type"));
		cl.def("regTypeToTypeId", (enum asmjit::TypeId (asmjit::ArchTraits::*)(enum asmjit::RegType) const) &asmjit::ArchTraits::regTypeToTypeId, "Returns a corresponding `TypeId` from the given register `type` of this architecture.\n\nC++: asmjit::ArchTraits::regTypeToTypeId(enum asmjit::RegType) const --> enum asmjit::TypeId", pybind11::arg("type"));
		cl.def("typeNameIdTable", (const enum asmjit::ArchTypeNameId * (asmjit::ArchTraits::*)() const) &asmjit::ArchTraits::typeNameIdTable, "Returns a table of ISA word names that appear in formatted text. Word names are ISA dependent.\n\n The index of this table is log2 of the size:\n   - [0] 8-bits\n   - [1] 16-bits\n   - [2] 32-bits\n   - [3] 64-bits\n\nC++: asmjit::ArchTraits::typeNameIdTable() const --> const enum asmjit::ArchTypeNameId *", pybind11::return_value_policy::automatic);
		cl.def("typeNameIdByIndex", (enum asmjit::ArchTypeNameId (asmjit::ArchTraits::*)(unsigned int) const) &asmjit::ArchTraits::typeNameIdByIndex, "Returns an ISA word name identifier of the given `index`, see  for more details.\n\nC++: asmjit::ArchTraits::typeNameIdByIndex(unsigned int) const --> enum asmjit::ArchTypeNameId", pybind11::arg("index"));
		cl.def_static("byArch", (const struct asmjit::ArchTraits & (*)(enum asmjit::Arch)) &asmjit::ArchTraits::byArch, "Returns a const reference to `ArchTraits` for the given architecture `arch`.\n\nC++: asmjit::ArchTraits::byArch(enum asmjit::Arch) --> const struct asmjit::ArchTraits &", pybind11::return_value_policy::automatic, pybind11::arg("arch"));
	}
}
