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

void bind_unknown_unknown_26(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::InstIdParts file: line:34
	pybind11::enum_<asmjit::InstIdParts>(M("asmjit"), "InstIdParts", "Instruction id parts.\n\n A mask that specifies a bit-layout of ")
		.value("kRealId", asmjit::InstIdParts::kRealId)
		.value("kAbstract", asmjit::InstIdParts::kAbstract)
		.value("kA32_DT", asmjit::InstIdParts::kA32_DT)
		.value("kA32_DT2", asmjit::InstIdParts::kA32_DT2)
		.value("kARM_Cond", asmjit::InstIdParts::kARM_Cond);

;

	// asmjit::InstOptions file: line:57
	pybind11::enum_<asmjit::InstOptions>(M("asmjit"), "InstOptions", "Instruction options.\n\n Instruction options complement instruction identifier and attributes.")
		.value("kNone", asmjit::InstOptions::kNone)
		.value("kReserved", asmjit::InstOptions::kReserved)
		.value("kUnfollow", asmjit::InstOptions::kUnfollow)
		.value("kOverwrite", asmjit::InstOptions::kOverwrite)
		.value("kShortForm", asmjit::InstOptions::kShortForm)
		.value("kLongForm", asmjit::InstOptions::kLongForm)
		.value("kTaken", asmjit::InstOptions::kTaken)
		.value("kNotTaken", asmjit::InstOptions::kNotTaken)
		.value("kX86_ModMR", asmjit::InstOptions::kX86_ModMR)
		.value("kX86_ModRM", asmjit::InstOptions::kX86_ModRM)
		.value("kX86_Vex3", asmjit::InstOptions::kX86_Vex3)
		.value("kX86_Vex", asmjit::InstOptions::kX86_Vex)
		.value("kX86_Evex", asmjit::InstOptions::kX86_Evex)
		.value("kX86_Lock", asmjit::InstOptions::kX86_Lock)
		.value("kX86_Rep", asmjit::InstOptions::kX86_Rep)
		.value("kX86_Repne", asmjit::InstOptions::kX86_Repne)
		.value("kX86_XAcquire", asmjit::InstOptions::kX86_XAcquire)
		.value("kX86_XRelease", asmjit::InstOptions::kX86_XRelease)
		.value("kX86_ER", asmjit::InstOptions::kX86_ER)
		.value("kX86_SAE", asmjit::InstOptions::kX86_SAE)
		.value("kX86_RN_SAE", asmjit::InstOptions::kX86_RN_SAE)
		.value("kX86_RD_SAE", asmjit::InstOptions::kX86_RD_SAE)
		.value("kX86_RU_SAE", asmjit::InstOptions::kX86_RU_SAE)
		.value("kX86_RZ_SAE", asmjit::InstOptions::kX86_RZ_SAE)
		.value("kX86_ZMask", asmjit::InstOptions::kX86_ZMask)
		.value("kX86_ERMask", asmjit::InstOptions::kX86_ERMask)
		.value("kX86_AVX512Mask", asmjit::InstOptions::kX86_AVX512Mask)
		.value("kX86_OpCodeB", asmjit::InstOptions::kX86_OpCodeB)
		.value("kX86_OpCodeX", asmjit::InstOptions::kX86_OpCodeX)
		.value("kX86_OpCodeR", asmjit::InstOptions::kX86_OpCodeR)
		.value("kX86_OpCodeW", asmjit::InstOptions::kX86_OpCodeW)
		.value("kX86_Rex", asmjit::InstOptions::kX86_Rex)
		.value("kX86_InvalidRex", asmjit::InstOptions::kX86_InvalidRex);

;

	// asmjit::InstControlFlow file: line:174
	pybind11::enum_<asmjit::InstControlFlow>(M("asmjit"), "InstControlFlow", "Instruction control flow.")
		.value("kRegular", asmjit::InstControlFlow::kRegular)
		.value("kJump", asmjit::InstControlFlow::kJump)
		.value("kBranch", asmjit::InstControlFlow::kBranch)
		.value("kCall", asmjit::InstControlFlow::kCall)
		.value("kReturn", asmjit::InstControlFlow::kReturn)
		.value("kMaxValue", asmjit::InstControlFlow::kMaxValue);

;

	// asmjit::InstSameRegHint file: line:195
	pybind11::enum_<asmjit::InstSameRegHint>(M("asmjit"), "InstSameRegHint", "Hint that is used when both input operands to the instruction are the same.\n\n Provides hints to the instruction RW query regarding special cases in which two or more operands are the same\n registers. This is required by instructions such as XOR, AND, OR, SUB, etc... These hints will influence the\n RW operations query.")
		.value("kNone", asmjit::InstSameRegHint::kNone)
		.value("kRO", asmjit::InstSameRegHint::kRO)
		.value("kWO", asmjit::InstSameRegHint::kWO);

;

	{ // asmjit::BaseInst file: line:206
		pybind11::class_<asmjit::BaseInst, std::shared_ptr<asmjit::BaseInst>> cl(M("asmjit"), "BaseInst", "Instruction id, options, and extraReg in a single structure. This structure exists mainly to simplify analysis\n and validation API that requires `BaseInst` and `Operand[]` array.");
		cl.def( pybind11::init( [](){ return new asmjit::BaseInst(); } ), "doc" );
		cl.def( pybind11::init( [](unsigned int const & a0){ return new asmjit::BaseInst(a0); } ), "doc" , pybind11::arg("instId"));
		cl.def( pybind11::init<unsigned int, enum asmjit::InstOptions>(), pybind11::arg("instId"), pybind11::arg("options") );

		cl.def( pybind11::init<unsigned int, enum asmjit::InstOptions, const struct asmjit::RegOnly &>(), pybind11::arg("instId"), pybind11::arg("options"), pybind11::arg("extraReg") );

		cl.def( pybind11::init<unsigned int, enum asmjit::InstOptions, const class asmjit::BaseReg &>(), pybind11::arg("instId"), pybind11::arg("options"), pybind11::arg("extraReg") );

		cl.def( pybind11::init( [](asmjit::BaseInst const &o){ return new asmjit::BaseInst(o); } ) );

		pybind11::enum_<asmjit::BaseInst::Id>(cl, "Id", pybind11::arithmetic(), "")
			.value("kIdNone", asmjit::BaseInst::kIdNone)
			.value("kIdAbstract", asmjit::BaseInst::kIdAbstract)
			.export_values();




		cl.def("getInstIdPart", (unsigned int (asmjit::BaseInst::*)() const) &asmjit::BaseInst::getInstIdPart<asmjit::InstIdParts::kARM_Cond>, "C++: asmjit::BaseInst::getInstIdPart() const --> unsigned int");
		cl.def("getInstIdPart", (unsigned int (asmjit::BaseInst::*)() const) &asmjit::BaseInst::getInstIdPart<asmjit::InstIdParts::kA32_DT>, "C++: asmjit::BaseInst::getInstIdPart() const --> unsigned int");
		cl.def("getInstIdPart", (unsigned int (asmjit::BaseInst::*)() const) &asmjit::BaseInst::getInstIdPart<asmjit::InstIdParts::kA32_DT2>, "C++: asmjit::BaseInst::getInstIdPart() const --> unsigned int");
		cl.def("setInstIdPart", (void (asmjit::BaseInst::*)(unsigned int)) &asmjit::BaseInst::setInstIdPart<asmjit::InstIdParts::kARM_Cond>, "C++: asmjit::BaseInst::setInstIdPart(unsigned int) --> void", pybind11::arg("value"));
		cl.def("id", (unsigned int (asmjit::BaseInst::*)() const) &asmjit::BaseInst::id, "Returns the instruction id with modifiers.\n\nC++: asmjit::BaseInst::id() const --> unsigned int");
		cl.def("setId", (void (asmjit::BaseInst::*)(unsigned int)) &asmjit::BaseInst::setId, "Sets the instruction id and modiiers from `id`.\n\nC++: asmjit::BaseInst::setId(unsigned int) --> void", pybind11::arg("id"));
		cl.def("resetId", (void (asmjit::BaseInst::*)()) &asmjit::BaseInst::resetId, "Resets the instruction id and modifiers to zero, see \n\nC++: asmjit::BaseInst::resetId() --> void");
		cl.def("realId", (unsigned int (asmjit::BaseInst::*)() const) &asmjit::BaseInst::realId, "Returns a real instruction id that doesn't contain any modifiers.\n\nC++: asmjit::BaseInst::realId() const --> unsigned int");
		cl.def("options", (enum asmjit::InstOptions (asmjit::BaseInst::*)() const) &asmjit::BaseInst::options, "\\{\n\nC++: asmjit::BaseInst::options() const --> enum asmjit::InstOptions");
		cl.def("hasOption", (bool (asmjit::BaseInst::*)(enum asmjit::InstOptions) const) &asmjit::BaseInst::hasOption, "C++: asmjit::BaseInst::hasOption(enum asmjit::InstOptions) const --> bool", pybind11::arg("option"));
		cl.def("setOptions", (void (asmjit::BaseInst::*)(enum asmjit::InstOptions)) &asmjit::BaseInst::setOptions, "C++: asmjit::BaseInst::setOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("addOptions", (void (asmjit::BaseInst::*)(enum asmjit::InstOptions)) &asmjit::BaseInst::addOptions, "C++: asmjit::BaseInst::addOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("clearOptions", (void (asmjit::BaseInst::*)(enum asmjit::InstOptions)) &asmjit::BaseInst::clearOptions, "C++: asmjit::BaseInst::clearOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("resetOptions", (void (asmjit::BaseInst::*)()) &asmjit::BaseInst::resetOptions, "C++: asmjit::BaseInst::resetOptions() --> void");
		cl.def("hasExtraReg", (bool (asmjit::BaseInst::*)() const) &asmjit::BaseInst::hasExtraReg, "\\{\n\nC++: asmjit::BaseInst::hasExtraReg() const --> bool");
		cl.def("extraReg", (struct asmjit::RegOnly & (asmjit::BaseInst::*)()) &asmjit::BaseInst::extraReg, "C++: asmjit::BaseInst::extraReg() --> struct asmjit::RegOnly &", pybind11::return_value_policy::automatic);
		cl.def("setExtraReg", (void (asmjit::BaseInst::*)(const class asmjit::BaseReg &)) &asmjit::BaseInst::setExtraReg, "C++: asmjit::BaseInst::setExtraReg(const class asmjit::BaseReg &) --> void", pybind11::arg("reg"));
		cl.def("setExtraReg", (void (asmjit::BaseInst::*)(const struct asmjit::RegOnly &)) &asmjit::BaseInst::setExtraReg, "C++: asmjit::BaseInst::setExtraReg(const struct asmjit::RegOnly &) --> void", pybind11::arg("reg"));
		cl.def("resetExtraReg", (void (asmjit::BaseInst::*)()) &asmjit::BaseInst::resetExtraReg, "C++: asmjit::BaseInst::resetExtraReg() --> void");
		cl.def("armCondCode", (enum asmjit::arm::CondCode (asmjit::BaseInst::*)() const) &asmjit::BaseInst::armCondCode, "\\{\n\nC++: asmjit::BaseInst::armCondCode() const --> enum asmjit::arm::CondCode");
		cl.def("setArmCondCode", (void (asmjit::BaseInst::*)(enum asmjit::arm::CondCode)) &asmjit::BaseInst::setArmCondCode, "C++: asmjit::BaseInst::setArmCondCode(enum asmjit::arm::CondCode) --> void", pybind11::arg("cc"));
		cl.def("armDt", (enum asmjit::a32::DataType (asmjit::BaseInst::*)() const) &asmjit::BaseInst::armDt, "C++: asmjit::BaseInst::armDt() const --> enum asmjit::a32::DataType");
		cl.def("armDt2", (enum asmjit::a32::DataType (asmjit::BaseInst::*)() const) &asmjit::BaseInst::armDt2, "C++: asmjit::BaseInst::armDt2() const --> enum asmjit::a32::DataType");
		cl.def_static("composeARMInstId", (unsigned int (*)(unsigned int, enum asmjit::arm::CondCode)) &asmjit::BaseInst::composeARMInstId, "\\{\n\nC++: asmjit::BaseInst::composeARMInstId(unsigned int, enum asmjit::arm::CondCode) --> unsigned int", pybind11::arg("id"), pybind11::arg("cc"));
		cl.def_static("composeARMInstId", [](unsigned int const & a0, enum asmjit::a32::DataType const & a1) -> unsigned int { return asmjit::BaseInst::composeARMInstId(a0, a1); }, "", pybind11::arg("id"), pybind11::arg("dt"));
		cl.def_static("composeARMInstId", (unsigned int (*)(unsigned int, enum asmjit::a32::DataType, enum asmjit::arm::CondCode)) &asmjit::BaseInst::composeARMInstId, "C++: asmjit::BaseInst::composeARMInstId(unsigned int, enum asmjit::a32::DataType, enum asmjit::arm::CondCode) --> unsigned int", pybind11::arg("id"), pybind11::arg("dt"), pybind11::arg("cc"));
		cl.def_static("composeARMInstId", [](unsigned int const & a0, enum asmjit::a32::DataType const & a1, enum asmjit::a32::DataType const & a2) -> unsigned int { return asmjit::BaseInst::composeARMInstId(a0, a1, a2); }, "", pybind11::arg("id"), pybind11::arg("dt"), pybind11::arg("dt2"));
		cl.def_static("composeARMInstId", (unsigned int (*)(unsigned int, enum asmjit::a32::DataType, enum asmjit::a32::DataType, enum asmjit::arm::CondCode)) &asmjit::BaseInst::composeARMInstId, "C++: asmjit::BaseInst::composeARMInstId(unsigned int, enum asmjit::a32::DataType, enum asmjit::a32::DataType, enum asmjit::arm::CondCode) --> unsigned int", pybind11::arg("id"), pybind11::arg("dt"), pybind11::arg("dt2"), pybind11::arg("cc"));
		cl.def_static("extractRealId", (unsigned int (*)(unsigned int)) &asmjit::BaseInst::extractRealId, "C++: asmjit::BaseInst::extractRealId(unsigned int) --> unsigned int", pybind11::arg("id"));
		cl.def_static("extractARMCondCode", (enum asmjit::arm::CondCode (*)(unsigned int)) &asmjit::BaseInst::extractARMCondCode, "C++: asmjit::BaseInst::extractARMCondCode(unsigned int) --> enum asmjit::arm::CondCode", pybind11::arg("id"));
		cl.def("assign", (class asmjit::BaseInst & (asmjit::BaseInst::*)(const class asmjit::BaseInst &)) &asmjit::BaseInst::operator=, "C++: asmjit::BaseInst::operator=(const class asmjit::BaseInst &) --> class asmjit::BaseInst &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	// asmjit::CpuRWFlags file: line:343
	pybind11::enum_<asmjit::CpuRWFlags>(M("asmjit"), "CpuRWFlags", "CPU read/write flags used by \n\n These flags can be used to get a basic overview about CPU specifics flags used by instructions.")
		.value("kNone", asmjit::CpuRWFlags::kNone)
		.value("kOF", asmjit::CpuRWFlags::kOF)
		.value("kCF", asmjit::CpuRWFlags::kCF)
		.value("kZF", asmjit::CpuRWFlags::kZF)
		.value("kSF", asmjit::CpuRWFlags::kSF)
		.value("kX86_CF", asmjit::CpuRWFlags::kX86_CF)
		.value("kX86_OF", asmjit::CpuRWFlags::kX86_OF)
		.value("kX86_SF", asmjit::CpuRWFlags::kX86_SF)
		.value("kX86_ZF", asmjit::CpuRWFlags::kX86_ZF)
		.value("kX86_AF", asmjit::CpuRWFlags::kX86_AF)
		.value("kX86_PF", asmjit::CpuRWFlags::kX86_PF)
		.value("kX86_DF", asmjit::CpuRWFlags::kX86_DF)
		.value("kX86_IF", asmjit::CpuRWFlags::kX86_IF)
		.value("kX86_AC", asmjit::CpuRWFlags::kX86_AC)
		.value("kX86_C0", asmjit::CpuRWFlags::kX86_C0)
		.value("kX86_C1", asmjit::CpuRWFlags::kX86_C1)
		.value("kX86_C2", asmjit::CpuRWFlags::kX86_C2)
		.value("kX86_C3", asmjit::CpuRWFlags::kX86_C3)
		.value("kARM_V", asmjit::CpuRWFlags::kARM_V)
		.value("kARM_C", asmjit::CpuRWFlags::kARM_C)
		.value("kARM_Z", asmjit::CpuRWFlags::kARM_Z)
		.value("kARM_N", asmjit::CpuRWFlags::kARM_N)
		.value("kARM_Q", asmjit::CpuRWFlags::kARM_Q)
		.value("kARM_GE", asmjit::CpuRWFlags::kARM_GE);

;

	// asmjit::OpRWFlags file: line:405
	pybind11::enum_<asmjit::OpRWFlags>(M("asmjit"), "OpRWFlags", "Operand read/write flags describe how the operand is accessed and some additional features.")
		.value("kNone", asmjit::OpRWFlags::kNone)
		.value("kRead", asmjit::OpRWFlags::kRead)
		.value("kWrite", asmjit::OpRWFlags::kWrite)
		.value("kRW", asmjit::OpRWFlags::kRW)
		.value("kRegMem", asmjit::OpRWFlags::kRegMem)
		.value("kConsecutive", asmjit::OpRWFlags::kConsecutive)
		.value("kZExt", asmjit::OpRWFlags::kZExt)
		.value("kUnique", asmjit::OpRWFlags::kUnique)
		.value("kRegPhysId", asmjit::OpRWFlags::kRegPhysId)
		.value("kMemPhysId", asmjit::OpRWFlags::kMemPhysId)
		.value("kMemFake", asmjit::OpRWFlags::kMemFake)
		.value("kMemBaseRead", asmjit::OpRWFlags::kMemBaseRead)
		.value("kMemBaseWrite", asmjit::OpRWFlags::kMemBaseWrite)
		.value("kMemBaseRW", asmjit::OpRWFlags::kMemBaseRW)
		.value("kMemIndexRead", asmjit::OpRWFlags::kMemIndexRead)
		.value("kMemIndexWrite", asmjit::OpRWFlags::kMemIndexWrite)
		.value("kMemIndexRW", asmjit::OpRWFlags::kMemIndexRW)
		.value("kMemBasePreModify", asmjit::OpRWFlags::kMemBasePreModify)
		.value("kMemBasePostModify", asmjit::OpRWFlags::kMemBasePostModify);

;

	{ // asmjit::OpRWInfo file: line:477
		pybind11::class_<asmjit::OpRWInfo, std::shared_ptr<asmjit::OpRWInfo>> cl(M("asmjit"), "OpRWInfo", "Read/Write information related to a single operand, used by ");
		cl.def( pybind11::init( [](){ return new asmjit::OpRWInfo(); } ) );







		cl.def("reset", (void (asmjit::OpRWInfo::*)()) &asmjit::OpRWInfo::reset, "Resets this operand information to all zeros.\n\nC++: asmjit::OpRWInfo::reset() --> void");
		cl.def("reset", [](asmjit::OpRWInfo &o, enum asmjit::OpRWFlags const & a0, unsigned int const & a1) -> void { return o.reset(a0, a1); }, "", pybind11::arg("opFlags"), pybind11::arg("regSize"));
		cl.def("reset", (void (asmjit::OpRWInfo::*)(enum asmjit::OpRWFlags, unsigned int, unsigned int)) &asmjit::OpRWInfo::reset, "Resets this operand info (resets all members) and set common information\n to the given `opFlags`, `regSize`, and possibly `physId`.\n\nC++: asmjit::OpRWInfo::reset(enum asmjit::OpRWFlags, unsigned int, unsigned int) --> void", pybind11::arg("opFlags"), pybind11::arg("regSize"), pybind11::arg("physId"));

		cl.def("opFlags", (enum asmjit::OpRWFlags (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::opFlags, "Returns operand flags.\n\nC++: asmjit::OpRWInfo::opFlags() const --> enum asmjit::OpRWFlags");
		cl.def("hasOpFlag", (bool (asmjit::OpRWInfo::*)(enum asmjit::OpRWFlags) const) &asmjit::OpRWInfo::hasOpFlag, "Tests whether operand flags contain the given `flag`.\n\nC++: asmjit::OpRWInfo::hasOpFlag(enum asmjit::OpRWFlags) const --> bool", pybind11::arg("flag"));
		cl.def("addOpFlags", (void (asmjit::OpRWInfo::*)(enum asmjit::OpRWFlags)) &asmjit::OpRWInfo::addOpFlags, "Adds the given `flags` to operand flags.\n\nC++: asmjit::OpRWInfo::addOpFlags(enum asmjit::OpRWFlags) --> void", pybind11::arg("flags"));
		cl.def("clearOpFlags", (void (asmjit::OpRWInfo::*)(enum asmjit::OpRWFlags)) &asmjit::OpRWInfo::clearOpFlags, "Removes the given `flags` from operand flags.\n\nC++: asmjit::OpRWInfo::clearOpFlags(enum asmjit::OpRWFlags) --> void", pybind11::arg("flags"));
		cl.def("isRead", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isRead, "Tests whether this operand is read from.\n\nC++: asmjit::OpRWInfo::isRead() const --> bool");
		cl.def("isWrite", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isWrite, "Tests whether this operand is written to.\n\nC++: asmjit::OpRWInfo::isWrite() const --> bool");
		cl.def("isReadWrite", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isReadWrite, "Tests whether this operand is both read and write.\n\nC++: asmjit::OpRWInfo::isReadWrite() const --> bool");
		cl.def("isReadOnly", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isReadOnly, "Tests whether this operand is read only.\n\nC++: asmjit::OpRWInfo::isReadOnly() const --> bool");
		cl.def("isWriteOnly", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isWriteOnly, "Tests whether this operand is write only.\n\nC++: asmjit::OpRWInfo::isWriteOnly() const --> bool");
		cl.def("consecutiveLeadCount", (unsigned int (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::consecutiveLeadCount, "Returns the type of a lead register, which is followed by consecutive registers.\n\nC++: asmjit::OpRWInfo::consecutiveLeadCount() const --> unsigned int");
		cl.def("isRm", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isRm, "Tests whether this operand is Reg/Mem\n\n Reg/Mem operands can use either register or memory.\n\nC++: asmjit::OpRWInfo::isRm() const --> bool");
		cl.def("isZExt", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isZExt, "Tests whether the operand will be zero extended.\n\nC++: asmjit::OpRWInfo::isZExt() const --> bool");
		cl.def("isUnique", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isUnique, "Tests whether the operand must have allocated a unique physical id that cannot be shared with other register\n operands.\n\nC++: asmjit::OpRWInfo::isUnique() const --> bool");
		cl.def("isMemFake", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemFake, "Tests whether this is a fake memory operand, which is only used, because of encoding. Fake memory operands do\n not access any memory, they are only used to encode registers.\n\nC++: asmjit::OpRWInfo::isMemFake() const --> bool");
		cl.def("isMemBaseUsed", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBaseUsed, "Tests whether the instruction's memory BASE register is used.\n\nC++: asmjit::OpRWInfo::isMemBaseUsed() const --> bool");
		cl.def("isMemBaseRead", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBaseRead, "Tests whether the instruction reads from its BASE registers.\n\nC++: asmjit::OpRWInfo::isMemBaseRead() const --> bool");
		cl.def("isMemBaseWrite", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBaseWrite, "Tests whether the instruction writes to its BASE registers.\n\nC++: asmjit::OpRWInfo::isMemBaseWrite() const --> bool");
		cl.def("isMemBaseReadWrite", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBaseReadWrite, "Tests whether the instruction reads and writes from/to its BASE registers.\n\nC++: asmjit::OpRWInfo::isMemBaseReadWrite() const --> bool");
		cl.def("isMemBaseReadOnly", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBaseReadOnly, "Tests whether the instruction only reads from its BASE registers.\n\nC++: asmjit::OpRWInfo::isMemBaseReadOnly() const --> bool");
		cl.def("isMemBaseWriteOnly", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBaseWriteOnly, "Tests whether the instruction only writes to its BASE registers.\n\nC++: asmjit::OpRWInfo::isMemBaseWriteOnly() const --> bool");
		cl.def("isMemBasePreModify", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBasePreModify, "Tests whether the instruction modifies the BASE register before it uses it to calculate the target address.\n\nC++: asmjit::OpRWInfo::isMemBasePreModify() const --> bool");
		cl.def("isMemBasePostModify", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemBasePostModify, "Tests whether the instruction modifies the BASE register after it uses it to calculate the target address.\n\nC++: asmjit::OpRWInfo::isMemBasePostModify() const --> bool");
		cl.def("isMemIndexUsed", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemIndexUsed, "Tests whether the instruction's memory INDEX register is used.\n\nC++: asmjit::OpRWInfo::isMemIndexUsed() const --> bool");
		cl.def("isMemIndexRead", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemIndexRead, "Tests whether the instruction reads the INDEX registers.\n\nC++: asmjit::OpRWInfo::isMemIndexRead() const --> bool");
		cl.def("isMemIndexWrite", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemIndexWrite, "Tests whether the instruction writes to its INDEX registers.\n\nC++: asmjit::OpRWInfo::isMemIndexWrite() const --> bool");
		cl.def("isMemIndexReadWrite", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemIndexReadWrite, "Tests whether the instruction reads and writes from/to its INDEX registers.\n\nC++: asmjit::OpRWInfo::isMemIndexReadWrite() const --> bool");
		cl.def("isMemIndexReadOnly", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemIndexReadOnly, "Tests whether the instruction only reads from its INDEX registers.\n\nC++: asmjit::OpRWInfo::isMemIndexReadOnly() const --> bool");
		cl.def("isMemIndexWriteOnly", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::isMemIndexWriteOnly, "Tests whether the instruction only writes to its INDEX registers.\n\nC++: asmjit::OpRWInfo::isMemIndexWriteOnly() const --> bool");
		cl.def("physId", (unsigned int (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::physId, "Returns a physical id of the register that is fixed for this operand.\n\n Returns  if any register can be used.\n\nC++: asmjit::OpRWInfo::physId() const --> unsigned int");
		cl.def("hasPhysId", (bool (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::hasPhysId, "Tests whether  would return a valid physical register id.\n\nC++: asmjit::OpRWInfo::hasPhysId() const --> bool");
		cl.def("setPhysId", (void (asmjit::OpRWInfo::*)(unsigned int)) &asmjit::OpRWInfo::setPhysId, "Sets physical register id, which would be fixed for this operand.\n\nC++: asmjit::OpRWInfo::setPhysId(unsigned int) --> void", pybind11::arg("physId"));
		cl.def("rmSize", (unsigned int (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::rmSize, "Returns Reg/Mem size of the operand.\n\nC++: asmjit::OpRWInfo::rmSize() const --> unsigned int");
		cl.def("setRmSize", (void (asmjit::OpRWInfo::*)(unsigned int)) &asmjit::OpRWInfo::setRmSize, "Sets Reg/Mem size of the operand.\n\nC++: asmjit::OpRWInfo::setRmSize(unsigned int) --> void", pybind11::arg("rmSize"));
		cl.def("readByteMask", (unsigned long (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::readByteMask, "Returns read mask.\n\nC++: asmjit::OpRWInfo::readByteMask() const --> unsigned long");
		cl.def("writeByteMask", (unsigned long (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::writeByteMask, "Returns write mask.\n\nC++: asmjit::OpRWInfo::writeByteMask() const --> unsigned long");
		cl.def("extendByteMask", (unsigned long (asmjit::OpRWInfo::*)() const) &asmjit::OpRWInfo::extendByteMask, "Returns extend mask.\n\nC++: asmjit::OpRWInfo::extendByteMask() const --> unsigned long");
		cl.def("setReadByteMask", (void (asmjit::OpRWInfo::*)(unsigned long)) &asmjit::OpRWInfo::setReadByteMask, "Sets read mask.\n\nC++: asmjit::OpRWInfo::setReadByteMask(unsigned long) --> void", pybind11::arg("mask"));
		cl.def("setWriteByteMask", (void (asmjit::OpRWInfo::*)(unsigned long)) &asmjit::OpRWInfo::setWriteByteMask, "Sets write mask.\n\nC++: asmjit::OpRWInfo::setWriteByteMask(unsigned long) --> void", pybind11::arg("mask"));
		cl.def("setExtendByteMask", (void (asmjit::OpRWInfo::*)(unsigned long)) &asmjit::OpRWInfo::setExtendByteMask, "Sets extend mask.\n\nC++: asmjit::OpRWInfo::setExtendByteMask(unsigned long) --> void", pybind11::arg("mask"));
		cl.def("assign", (struct asmjit::OpRWInfo & (asmjit::OpRWInfo::*)(const struct asmjit::OpRWInfo &)) &asmjit::OpRWInfo::operator=, "C++: asmjit::OpRWInfo::operator=(const struct asmjit::OpRWInfo &) --> struct asmjit::OpRWInfo &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
