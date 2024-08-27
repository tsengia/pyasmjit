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

void bind_unknown_unknown_74(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::InstDB::Mode file: line:20
	pybind11::enum_<asmjit::x86::InstDB::Mode>(M("asmjit::x86::InstDB"), "Mode", "Describes which operation mode is supported by an instruction.")
		.value("kNone", asmjit::x86::InstDB::Mode::kNone)
		.value("kX86", asmjit::x86::InstDB::Mode::kX86)
		.value("kX64", asmjit::x86::InstDB::Mode::kX64)
		.value("kAny", asmjit::x86::InstDB::Mode::kAny);

;

	// asmjit::x86::InstDB::modeFromArch(enum asmjit::Arch) file: line:33
	M("asmjit::x86::InstDB").def("modeFromArch", (enum asmjit::x86::InstDB::Mode (*)(enum asmjit::Arch)) &asmjit::x86::InstDB::modeFromArch, "Converts architecture to operation mode, see \n\nC++: asmjit::x86::InstDB::modeFromArch(enum asmjit::Arch) --> enum asmjit::x86::InstDB::Mode", pybind11::arg("arch"));

	// asmjit::x86::InstDB::OpFlags file: line:39
	pybind11::enum_<asmjit::x86::InstDB::OpFlags>(M("asmjit::x86::InstDB"), "OpFlags", "Operand signature flags used by ")
		.value("kNone", asmjit::x86::InstDB::OpFlags::kNone)
		.value("kRegGpbLo", asmjit::x86::InstDB::OpFlags::kRegGpbLo)
		.value("kRegGpbHi", asmjit::x86::InstDB::OpFlags::kRegGpbHi)
		.value("kRegGpw", asmjit::x86::InstDB::OpFlags::kRegGpw)
		.value("kRegGpd", asmjit::x86::InstDB::OpFlags::kRegGpd)
		.value("kRegGpq", asmjit::x86::InstDB::OpFlags::kRegGpq)
		.value("kRegXmm", asmjit::x86::InstDB::OpFlags::kRegXmm)
		.value("kRegYmm", asmjit::x86::InstDB::OpFlags::kRegYmm)
		.value("kRegZmm", asmjit::x86::InstDB::OpFlags::kRegZmm)
		.value("kRegMm", asmjit::x86::InstDB::OpFlags::kRegMm)
		.value("kRegKReg", asmjit::x86::InstDB::OpFlags::kRegKReg)
		.value("kRegSReg", asmjit::x86::InstDB::OpFlags::kRegSReg)
		.value("kRegCReg", asmjit::x86::InstDB::OpFlags::kRegCReg)
		.value("kRegDReg", asmjit::x86::InstDB::OpFlags::kRegDReg)
		.value("kRegSt", asmjit::x86::InstDB::OpFlags::kRegSt)
		.value("kRegBnd", asmjit::x86::InstDB::OpFlags::kRegBnd)
		.value("kRegTmm", asmjit::x86::InstDB::OpFlags::kRegTmm)
		.value("kRegMask", asmjit::x86::InstDB::OpFlags::kRegMask)
		.value("kMemUnspecified", asmjit::x86::InstDB::OpFlags::kMemUnspecified)
		.value("kMem8", asmjit::x86::InstDB::OpFlags::kMem8)
		.value("kMem16", asmjit::x86::InstDB::OpFlags::kMem16)
		.value("kMem32", asmjit::x86::InstDB::OpFlags::kMem32)
		.value("kMem48", asmjit::x86::InstDB::OpFlags::kMem48)
		.value("kMem64", asmjit::x86::InstDB::OpFlags::kMem64)
		.value("kMem80", asmjit::x86::InstDB::OpFlags::kMem80)
		.value("kMem128", asmjit::x86::InstDB::OpFlags::kMem128)
		.value("kMem256", asmjit::x86::InstDB::OpFlags::kMem256)
		.value("kMem512", asmjit::x86::InstDB::OpFlags::kMem512)
		.value("kMem1024", asmjit::x86::InstDB::OpFlags::kMem1024)
		.value("kMemMask", asmjit::x86::InstDB::OpFlags::kMemMask)
		.value("kVm32x", asmjit::x86::InstDB::OpFlags::kVm32x)
		.value("kVm32y", asmjit::x86::InstDB::OpFlags::kVm32y)
		.value("kVm32z", asmjit::x86::InstDB::OpFlags::kVm32z)
		.value("kVm64x", asmjit::x86::InstDB::OpFlags::kVm64x)
		.value("kVm64y", asmjit::x86::InstDB::OpFlags::kVm64y)
		.value("kVm64z", asmjit::x86::InstDB::OpFlags::kVm64z)
		.value("kVmMask", asmjit::x86::InstDB::OpFlags::kVmMask)
		.value("kImmI4", asmjit::x86::InstDB::OpFlags::kImmI4)
		.value("kImmU4", asmjit::x86::InstDB::OpFlags::kImmU4)
		.value("kImmI8", asmjit::x86::InstDB::OpFlags::kImmI8)
		.value("kImmU8", asmjit::x86::InstDB::OpFlags::kImmU8)
		.value("kImmI16", asmjit::x86::InstDB::OpFlags::kImmI16)
		.value("kImmU16", asmjit::x86::InstDB::OpFlags::kImmU16)
		.value("kImmI32", asmjit::x86::InstDB::OpFlags::kImmI32)
		.value("kImmU32", asmjit::x86::InstDB::OpFlags::kImmU32)
		.value("kImmI64", asmjit::x86::InstDB::OpFlags::kImmI64)
		.value("kImmU64", asmjit::x86::InstDB::OpFlags::kImmU64)
		.value("kImmMask", asmjit::x86::InstDB::OpFlags::kImmMask)
		.value("kRel8", asmjit::x86::InstDB::OpFlags::kRel8)
		.value("kRel32", asmjit::x86::InstDB::OpFlags::kRel32)
		.value("kRelMask", asmjit::x86::InstDB::OpFlags::kRelMask)
		.value("kFlagMemBase", asmjit::x86::InstDB::OpFlags::kFlagMemBase)
		.value("kFlagMemDs", asmjit::x86::InstDB::OpFlags::kFlagMemDs)
		.value("kFlagMemEs", asmjit::x86::InstDB::OpFlags::kFlagMemEs)
		.value("kFlagMib", asmjit::x86::InstDB::OpFlags::kFlagMib)
		.value("kFlagTMem", asmjit::x86::InstDB::OpFlags::kFlagTMem)
		.value("kFlagImplicit", asmjit::x86::InstDB::OpFlags::kFlagImplicit)
		.value("kFlagMask", asmjit::x86::InstDB::OpFlags::kFlagMask)
		.value("kOpMask", asmjit::x86::InstDB::OpFlags::kOpMask);

;

	{ // asmjit::x86::InstDB::OpSignature file: line:117
		pybind11::class_<asmjit::x86::InstDB::OpSignature, std::shared_ptr<asmjit::x86::InstDB::OpSignature>> cl(M("asmjit::x86::InstDB"), "OpSignature", "Operand signature.\n\n Contains all possible operand combinations, memory size information, and a fixed register id (or `BaseReg::kIdBad`\n if fixed id isn't required).");
		cl.def( pybind11::init( [](){ return new asmjit::x86::InstDB::OpSignature(); } ) );


		cl.def("flags", (enum asmjit::x86::InstDB::OpFlags (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::flags, "Returns operand signature flags.\n\nC++: asmjit::x86::InstDB::OpSignature::flags() const --> enum asmjit::x86::InstDB::OpFlags");
		cl.def("hasFlag", (bool (asmjit::x86::InstDB::OpSignature::*)(enum asmjit::x86::InstDB::OpFlags) const) &asmjit::x86::InstDB::OpSignature::hasFlag, "Tests whether the given `flag` is set.\n\nC++: asmjit::x86::InstDB::OpSignature::hasFlag(enum asmjit::x86::InstDB::OpFlags) const --> bool", pybind11::arg("flag"));
		cl.def("hasReg", (bool (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::hasReg, "Tests whether this signature contains at least one register operand of any type.\n\nC++: asmjit::x86::InstDB::OpSignature::hasReg() const --> bool");
		cl.def("hasMem", (bool (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::hasMem, "Tests whether this signature contains at least one scalar memory operand of any type.\n\nC++: asmjit::x86::InstDB::OpSignature::hasMem() const --> bool");
		cl.def("hasVm", (bool (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::hasVm, "Tests whether this signature contains at least one vector memory operand of any type.\n\nC++: asmjit::x86::InstDB::OpSignature::hasVm() const --> bool");
		cl.def("hasImm", (bool (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::hasImm, "Tests whether this signature contains at least one immediate operand of any type.\n\nC++: asmjit::x86::InstDB::OpSignature::hasImm() const --> bool");
		cl.def("hasRel", (bool (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::hasRel, "Tests whether this signature contains at least one relative displacement operand of any type.\n\nC++: asmjit::x86::InstDB::OpSignature::hasRel() const --> bool");
		cl.def("isImplicit", (bool (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::isImplicit, "Tests whether the operand is implicit.\n\nC++: asmjit::x86::InstDB::OpSignature::isImplicit() const --> bool");
		cl.def("regMask", (unsigned int (asmjit::x86::InstDB::OpSignature::*)() const) &asmjit::x86::InstDB::OpSignature::regMask, "Returns a physical register mask.\n\nC++: asmjit::x86::InstDB::OpSignature::regMask() const --> unsigned int");
	}
	{ // asmjit::x86::InstDB::InstSignature file: line:161
		pybind11::class_<asmjit::x86::InstDB::InstSignature, std::shared_ptr<asmjit::x86::InstDB::InstSignature>> cl(M("asmjit::x86::InstDB"), "InstSignature", "Instruction signature.\n\n Contains a sequence of operands' combinations and other metadata that defines a single instruction. This data is\n used by instruction validator.");
		cl.def( pybind11::init( [](){ return new asmjit::x86::InstDB::InstSignature(); } ) );




		cl.def("mode", (enum asmjit::x86::InstDB::Mode (asmjit::x86::InstDB::InstSignature::*)() const) &asmjit::x86::InstDB::InstSignature::mode, "Returns instruction operation mode.\n\nC++: asmjit::x86::InstDB::InstSignature::mode() const --> enum asmjit::x86::InstDB::Mode");
		cl.def("supportsMode", (bool (asmjit::x86::InstDB::InstSignature::*)(enum asmjit::x86::InstDB::Mode) const) &asmjit::x86::InstDB::InstSignature::supportsMode, "Tests whether the instruction supports the given operating mode.\n\nC++: asmjit::x86::InstDB::InstSignature::supportsMode(enum asmjit::x86::InstDB::Mode) const --> bool", pybind11::arg("mode"));
		cl.def("opCount", (unsigned int (asmjit::x86::InstDB::InstSignature::*)() const) &asmjit::x86::InstDB::InstSignature::opCount, "Returns the number of operands of this signature.\n\nC++: asmjit::x86::InstDB::InstSignature::opCount() const --> unsigned int");
		cl.def("implicitOpCount", (unsigned int (asmjit::x86::InstDB::InstSignature::*)() const) &asmjit::x86::InstDB::InstSignature::implicitOpCount, "Returns the number of implicit operands this signature has.\n\nC++: asmjit::x86::InstDB::InstSignature::implicitOpCount() const --> unsigned int");
		cl.def("hasImplicitOperands", (bool (asmjit::x86::InstDB::InstSignature::*)() const) &asmjit::x86::InstDB::InstSignature::hasImplicitOperands, "Tests whether this instruction signature has at least one implicit operand.\n\nC++: asmjit::x86::InstDB::InstSignature::hasImplicitOperands() const --> bool");
		cl.def("opSignatureIndexes", (const unsigned char * (asmjit::x86::InstDB::InstSignature::*)() const) &asmjit::x86::InstDB::InstSignature::opSignatureIndexes, "Returns indexes to  for each operand of the instruction.\n\n \n The returned array always provides indexes for all operands (see  even if the\n instruction provides less operands. Undefined operands have always index of zero.\n\nC++: asmjit::x86::InstDB::InstSignature::opSignatureIndexes() const --> const unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("opSignatureIndex", (unsigned char (asmjit::x86::InstDB::InstSignature::*)(unsigned long) const) &asmjit::x86::InstDB::InstSignature::opSignatureIndex, "Returns index to  corresponding to the requested operand `index` of the instruction.\n\nC++: asmjit::x86::InstDB::InstSignature::opSignatureIndex(unsigned long) const --> unsigned char", pybind11::arg("index"));
		cl.def("opSignature", (const struct asmjit::x86::InstDB::OpSignature & (asmjit::x86::InstDB::InstSignature::*)(unsigned long) const) &asmjit::x86::InstDB::InstSignature::opSignature, "Returns  corresponding to the requested operand `index` of the instruction.\n\nC++: asmjit::x86::InstDB::InstSignature::opSignature(unsigned long) const --> const struct asmjit::x86::InstDB::OpSignature &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
	}
	// asmjit::x86::InstDB::InstFlags file: line:219
	pybind11::enum_<asmjit::x86::InstDB::InstFlags>(M("asmjit::x86::InstDB"), "InstFlags", "Instruction flags.\n\n Details about instruction encoding, operation, features, and some limitations.")
		.value("kNone", asmjit::x86::InstDB::InstFlags::kNone)
		.value("kFpu", asmjit::x86::InstDB::InstFlags::kFpu)
		.value("kMmx", asmjit::x86::InstDB::InstFlags::kMmx)
		.value("kVec", asmjit::x86::InstDB::InstFlags::kVec)
		.value("kFpuM16", asmjit::x86::InstDB::InstFlags::kFpuM16)
		.value("kFpuM32", asmjit::x86::InstDB::InstFlags::kFpuM32)
		.value("kFpuM64", asmjit::x86::InstDB::InstFlags::kFpuM64)
		.value("kFpuM80", asmjit::x86::InstDB::InstFlags::kFpuM80)
		.value("kRep", asmjit::x86::InstDB::InstFlags::kRep)
		.value("kRepIgnored", asmjit::x86::InstDB::InstFlags::kRepIgnored)
		.value("kLock", asmjit::x86::InstDB::InstFlags::kLock)
		.value("kXAcquire", asmjit::x86::InstDB::InstFlags::kXAcquire)
		.value("kXRelease", asmjit::x86::InstDB::InstFlags::kXRelease)
		.value("kMib", asmjit::x86::InstDB::InstFlags::kMib)
		.value("kVsib", asmjit::x86::InstDB::InstFlags::kVsib)
		.value("kTsib", asmjit::x86::InstDB::InstFlags::kTsib)
		.value("kVex", asmjit::x86::InstDB::InstFlags::kVex)
		.value("kEvex", asmjit::x86::InstDB::InstFlags::kEvex)
		.value("kPreferEvex", asmjit::x86::InstDB::InstFlags::kPreferEvex)
		.value("kEvexCompat", asmjit::x86::InstDB::InstFlags::kEvexCompat)
		.value("kEvexKReg", asmjit::x86::InstDB::InstFlags::kEvexKReg)
		.value("kEvexTwoOp", asmjit::x86::InstDB::InstFlags::kEvexTwoOp)
		.value("kEvexTransformable", asmjit::x86::InstDB::InstFlags::kEvexTransformable)
		.value("kConsecutiveRegs", asmjit::x86::InstDB::InstFlags::kConsecutiveRegs);

;

	// asmjit::x86::InstDB::Avx512Flags file: line:302
	pybind11::enum_<asmjit::x86::InstDB::Avx512Flags>(M("asmjit::x86::InstDB"), "Avx512Flags", "AVX-512 flags.")
		.value("kNone", asmjit::x86::InstDB::Avx512Flags::kNone)
		.value("k_", asmjit::x86::InstDB::Avx512Flags::k_)
		.value("kK", asmjit::x86::InstDB::Avx512Flags::kK)
		.value("kZ", asmjit::x86::InstDB::Avx512Flags::kZ)
		.value("kER", asmjit::x86::InstDB::Avx512Flags::kER)
		.value("kSAE", asmjit::x86::InstDB::Avx512Flags::kSAE)
		.value("kB16", asmjit::x86::InstDB::Avx512Flags::kB16)
		.value("kB32", asmjit::x86::InstDB::Avx512Flags::kB32)
		.value("kB64", asmjit::x86::InstDB::Avx512Flags::kB64)
		.value("kT4X", asmjit::x86::InstDB::Avx512Flags::kT4X)
		.value("kImplicitZ", asmjit::x86::InstDB::Avx512Flags::kImplicitZ);

;

	{ // asmjit::x86::InstDB::CommonInfo file: line:333
		pybind11::class_<asmjit::x86::InstDB::CommonInfo, std::shared_ptr<asmjit::x86::InstDB::CommonInfo>> cl(M("asmjit::x86::InstDB"), "CommonInfo", "Instruction common information.\n\n Aggregated information shared across one or more instruction.");
		cl.def( pybind11::init( [](){ return new asmjit::x86::InstDB::CommonInfo(); } ) );






		cl.def("flags", (enum asmjit::x86::InstDB::InstFlags (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::flags, "Returns instruction flags.\n\nC++: asmjit::x86::InstDB::CommonInfo::flags() const --> enum asmjit::x86::InstDB::InstFlags");
		cl.def("hasFlag", (bool (asmjit::x86::InstDB::CommonInfo::*)(enum asmjit::x86::InstDB::InstFlags) const) &asmjit::x86::InstDB::CommonInfo::hasFlag, "Tests whether the instruction has a `flag`.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasFlag(enum asmjit::x86::InstDB::InstFlags) const --> bool", pybind11::arg("flag"));
		cl.def("avx512Flags", (enum asmjit::x86::InstDB::Avx512Flags (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::avx512Flags, "Returns instruction AVX-512 flags.\n\nC++: asmjit::x86::InstDB::CommonInfo::avx512Flags() const --> enum asmjit::x86::InstDB::Avx512Flags");
		cl.def("hasAvx512Flag", (bool (asmjit::x86::InstDB::CommonInfo::*)(enum asmjit::x86::InstDB::Avx512Flags) const) &asmjit::x86::InstDB::CommonInfo::hasAvx512Flag, "Tests whether the instruction has an AVX-512 `flag`.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512Flag(enum asmjit::x86::InstDB::Avx512Flags) const --> bool", pybind11::arg("flag"));
		cl.def("isFpu", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isFpu, "Tests whether the instruction is FPU instruction.\n\nC++: asmjit::x86::InstDB::CommonInfo::isFpu() const --> bool");
		cl.def("isMmx", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isMmx, "Tests whether the instruction is MMX/3DNOW instruction that accesses MMX registers (includes EMMS and FEMMS).\n\nC++: asmjit::x86::InstDB::CommonInfo::isMmx() const --> bool");
		cl.def("isVec", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isVec, "Tests whether the instruction is SSE|AVX|AVX512 instruction that accesses XMM|YMM|ZMM registers.\n\nC++: asmjit::x86::InstDB::CommonInfo::isVec() const --> bool");
		cl.def("isSse", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isSse, "Tests whether the instruction is SSE+ (SSE4.2, AES, SHA included) instruction that accesses XMM registers.\n\nC++: asmjit::x86::InstDB::CommonInfo::isSse() const --> bool");
		cl.def("isAvx", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isAvx, "Tests whether the instruction is AVX+ (FMA included) instruction that accesses XMM|YMM|ZMM registers.\n\nC++: asmjit::x86::InstDB::CommonInfo::isAvx() const --> bool");
		cl.def("hasLockPrefix", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasLockPrefix, "Tests whether the instruction can be prefixed with LOCK prefix.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasLockPrefix() const --> bool");
		cl.def("hasRepPrefix", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasRepPrefix, "Tests whether the instruction can be prefixed with REP (REPE|REPZ) prefix.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasRepPrefix() const --> bool");
		cl.def("hasXAcquirePrefix", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasXAcquirePrefix, "Tests whether the instruction can be prefixed with XACQUIRE prefix.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasXAcquirePrefix() const --> bool");
		cl.def("hasXReleasePrefix", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasXReleasePrefix, "Tests whether the instruction can be prefixed with XRELEASE prefix.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasXReleasePrefix() const --> bool");
		cl.def("isRepIgnored", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isRepIgnored, "Tests whether the rep prefix is supported by the instruction, but ignored (has no effect).\n\nC++: asmjit::x86::InstDB::CommonInfo::isRepIgnored() const --> bool");
		cl.def("isMibOp", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isMibOp, "Tests whether the instruction uses MIB.\n\nC++: asmjit::x86::InstDB::CommonInfo::isMibOp() const --> bool");
		cl.def("isVsibOp", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isVsibOp, "Tests whether the instruction uses VSIB.\n\nC++: asmjit::x86::InstDB::CommonInfo::isVsibOp() const --> bool");
		cl.def("isTsibOp", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isTsibOp, "Tests whether the instruction uses TSIB (AMX, instruction requires MOD+SIB).\n\nC++: asmjit::x86::InstDB::CommonInfo::isTsibOp() const --> bool");
		cl.def("isVex", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isVex, "Tests whether the instruction uses VEX (can be set together with EVEX if both are encodable).\n\nC++: asmjit::x86::InstDB::CommonInfo::isVex() const --> bool");
		cl.def("isEvex", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isEvex, "Tests whether the instruction uses EVEX (can be set together with VEX if both are encodable).\n\nC++: asmjit::x86::InstDB::CommonInfo::isEvex() const --> bool");
		cl.def("isVexOrEvex", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isVexOrEvex, "Tests whether the instruction uses EVEX (can be set together with VEX if both are encodable).\n\nC++: asmjit::x86::InstDB::CommonInfo::isVexOrEvex() const --> bool");
		cl.def("preferEvex", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::preferEvex, "Tests whether the instruction should prefer EVEX prefix instead of VEX prefix.\n\nC++: asmjit::x86::InstDB::CommonInfo::preferEvex() const --> bool");
		cl.def("isEvexCompatible", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isEvexCompatible, "C++: asmjit::x86::InstDB::CommonInfo::isEvexCompatible() const --> bool");
		cl.def("isEvexKRegOnly", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isEvexKRegOnly, "C++: asmjit::x86::InstDB::CommonInfo::isEvexKRegOnly() const --> bool");
		cl.def("isEvexTwoOpOnly", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isEvexTwoOpOnly, "C++: asmjit::x86::InstDB::CommonInfo::isEvexTwoOpOnly() const --> bool");
		cl.def("isEvexTransformable", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::isEvexTransformable, "C++: asmjit::x86::InstDB::CommonInfo::isEvexTransformable() const --> bool");
		cl.def("hasAvx512K", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512K, "Tests whether the instruction supports AVX512 masking {k}.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512K() const --> bool");
		cl.def("hasAvx512Z", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512Z, "Tests whether the instruction supports AVX512 zeroing {k}{z}.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512Z() const --> bool");
		cl.def("hasAvx512ER", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512ER, "Tests whether the instruction supports AVX512 embedded-rounding {er}.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512ER() const --> bool");
		cl.def("hasAvx512SAE", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512SAE, "Tests whether the instruction supports AVX512 suppress-all-exceptions {sae}.\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512SAE() const --> bool");
		cl.def("hasAvx512B", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512B, "Tests whether the instruction supports AVX512 broadcast (either 32-bit or 64-bit).\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512B() const --> bool");
		cl.def("hasAvx512B16", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512B16, "Tests whether the instruction supports AVX512 broadcast (16-bit).\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512B16() const --> bool");
		cl.def("hasAvx512B32", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512B32, "Tests whether the instruction supports AVX512 broadcast (32-bit).\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512B32() const --> bool");
		cl.def("hasAvx512B64", (bool (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::hasAvx512B64, "Tests whether the instruction supports AVX512 broadcast (64-bit).\n\nC++: asmjit::x86::InstDB::CommonInfo::hasAvx512B64() const --> bool");
		cl.def("broadcastSize", (unsigned int (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::broadcastSize, "C++: asmjit::x86::InstDB::CommonInfo::broadcastSize() const --> unsigned int");
		cl.def("signatureIndex", (unsigned int (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::signatureIndex, "C++: asmjit::x86::InstDB::CommonInfo::signatureIndex() const --> unsigned int");
		cl.def("signatureCount", (unsigned int (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::signatureCount, "C++: asmjit::x86::InstDB::CommonInfo::signatureCount() const --> unsigned int");
		cl.def("signatureData", (const struct asmjit::x86::InstDB::InstSignature * (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::signatureData, "C++: asmjit::x86::InstDB::CommonInfo::signatureData() const --> const struct asmjit::x86::InstDB::InstSignature *", pybind11::return_value_policy::automatic);
		cl.def("signatureEnd", (const struct asmjit::x86::InstDB::InstSignature * (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::signatureEnd, "C++: asmjit::x86::InstDB::CommonInfo::signatureEnd() const --> const struct asmjit::x86::InstDB::InstSignature *", pybind11::return_value_policy::automatic);
		cl.def("controlFlow", (enum asmjit::InstControlFlow (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::controlFlow, "Returns a control flow category of the instruction.\n\nC++: asmjit::x86::InstDB::CommonInfo::controlFlow() const --> enum asmjit::InstControlFlow");
		cl.def("sameRegHint", (enum asmjit::InstSameRegHint (asmjit::x86::InstDB::CommonInfo::*)() const) &asmjit::x86::InstDB::CommonInfo::sameRegHint, "Returns a hint that can be used when both inputs are the same register.\n\nC++: asmjit::x86::InstDB::CommonInfo::sameRegHint() const --> enum asmjit::InstSameRegHint");
	}
}
