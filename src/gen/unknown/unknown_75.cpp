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

void bind_unknown_unknown_75(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::x86::InstDB::InstInfo file: line:444
		pybind11::class_<asmjit::x86::InstDB::InstInfo, std::shared_ptr<asmjit::x86::InstDB::InstInfo>> cl(M("asmjit::x86::InstDB"), "InstInfo", "Instruction information.");
		cl.def( pybind11::init( [](){ return new asmjit::x86::InstDB::InstInfo(); } ) );







		cl.def("commonInfo", (const struct asmjit::x86::InstDB::CommonInfo & (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::commonInfo, "Returns common information, see \n\nC++: asmjit::x86::InstDB::InstInfo::commonInfo() const --> const struct asmjit::x86::InstDB::CommonInfo &", pybind11::return_value_policy::automatic);
		cl.def("flags", (enum asmjit::x86::InstDB::InstFlags (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::flags, "Returns instruction flags, see \n\nC++: asmjit::x86::InstDB::InstInfo::flags() const --> enum asmjit::x86::InstDB::InstFlags");
		cl.def("hasFlag", (bool (asmjit::x86::InstDB::InstInfo::*)(enum asmjit::x86::InstDB::InstFlags) const) &asmjit::x86::InstDB::InstInfo::hasFlag, "Tests whether the instruction has flag `flag`, see \n\nC++: asmjit::x86::InstDB::InstInfo::hasFlag(enum asmjit::x86::InstDB::InstFlags) const --> bool", pybind11::arg("flag"));
		cl.def("avx512Flags", (enum asmjit::x86::InstDB::Avx512Flags (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::avx512Flags, "Returns instruction AVX-512 flags, see \n\nC++: asmjit::x86::InstDB::InstInfo::avx512Flags() const --> enum asmjit::x86::InstDB::Avx512Flags");
		cl.def("hasAvx512Flag", (bool (asmjit::x86::InstDB::InstInfo::*)(enum asmjit::x86::InstDB::Avx512Flags) const) &asmjit::x86::InstDB::InstInfo::hasAvx512Flag, "Tests whether the instruction has an AVX-512 `flag`, see \n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512Flag(enum asmjit::x86::InstDB::Avx512Flags) const --> bool", pybind11::arg("flag"));
		cl.def("isFpu", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isFpu, "Tests whether the instruction is FPU instruction.\n\nC++: asmjit::x86::InstDB::InstInfo::isFpu() const --> bool");
		cl.def("isMmx", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isMmx, "Tests whether the instruction is MMX/3DNOW instruction that accesses MMX registers (includes EMMS and FEMMS).\n\nC++: asmjit::x86::InstDB::InstInfo::isMmx() const --> bool");
		cl.def("isVec", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isVec, "Tests whether the instruction is SSE|AVX|AVX512 instruction that accesses XMM|YMM|ZMM registers.\n\nC++: asmjit::x86::InstDB::InstInfo::isVec() const --> bool");
		cl.def("isSse", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isSse, "Tests whether the instruction is SSE+ (SSE4.2, AES, SHA included) instruction that accesses XMM registers.\n\nC++: asmjit::x86::InstDB::InstInfo::isSse() const --> bool");
		cl.def("isAvx", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isAvx, "Tests whether the instruction is AVX+ (FMA included) instruction that accesses XMM|YMM|ZMM registers.\n\nC++: asmjit::x86::InstDB::InstInfo::isAvx() const --> bool");
		cl.def("hasLockPrefix", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasLockPrefix, "Tests whether the instruction can be prefixed with LOCK prefix.\n\nC++: asmjit::x86::InstDB::InstInfo::hasLockPrefix() const --> bool");
		cl.def("hasRepPrefix", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasRepPrefix, "Tests whether the instruction can be prefixed with REP (REPE|REPZ) prefix.\n\nC++: asmjit::x86::InstDB::InstInfo::hasRepPrefix() const --> bool");
		cl.def("hasXAcquirePrefix", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasXAcquirePrefix, "Tests whether the instruction can be prefixed with XACQUIRE prefix.\n\nC++: asmjit::x86::InstDB::InstInfo::hasXAcquirePrefix() const --> bool");
		cl.def("hasXReleasePrefix", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasXReleasePrefix, "Tests whether the instruction can be prefixed with XRELEASE prefix.\n\nC++: asmjit::x86::InstDB::InstInfo::hasXReleasePrefix() const --> bool");
		cl.def("isRepIgnored", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isRepIgnored, "Tests whether the rep prefix is supported by the instruction, but ignored (has no effect).\n\nC++: asmjit::x86::InstDB::InstInfo::isRepIgnored() const --> bool");
		cl.def("isMibOp", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isMibOp, "Tests whether the instruction uses MIB.\n\nC++: asmjit::x86::InstDB::InstInfo::isMibOp() const --> bool");
		cl.def("isVsibOp", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isVsibOp, "Tests whether the instruction uses VSIB.\n\nC++: asmjit::x86::InstDB::InstInfo::isVsibOp() const --> bool");
		cl.def("isVex", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isVex, "Tests whether the instruction uses VEX (can be set together with EVEX if both are encodable).\n\nC++: asmjit::x86::InstDB::InstInfo::isVex() const --> bool");
		cl.def("isEvex", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isEvex, "Tests whether the instruction uses EVEX (can be set together with VEX if both are encodable).\n\nC++: asmjit::x86::InstDB::InstInfo::isEvex() const --> bool");
		cl.def("isVexOrEvex", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isVexOrEvex, "Tests whether the instruction uses EVEX (can be set together with VEX if both are encodable).\n\nC++: asmjit::x86::InstDB::InstInfo::isVexOrEvex() const --> bool");
		cl.def("isEvexCompatible", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isEvexCompatible, "C++: asmjit::x86::InstDB::InstInfo::isEvexCompatible() const --> bool");
		cl.def("isEvexKRegOnly", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isEvexKRegOnly, "C++: asmjit::x86::InstDB::InstInfo::isEvexKRegOnly() const --> bool");
		cl.def("isEvexTwoOpOnly", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isEvexTwoOpOnly, "C++: asmjit::x86::InstDB::InstInfo::isEvexTwoOpOnly() const --> bool");
		cl.def("isEvexTransformable", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::isEvexTransformable, "C++: asmjit::x86::InstDB::InstInfo::isEvexTransformable() const --> bool");
		cl.def("hasAvx512K", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512K, "Tests whether the instruction supports AVX512 masking {k}.\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512K() const --> bool");
		cl.def("hasAvx512Z", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512Z, "Tests whether the instruction supports AVX512 zeroing {k}{z}.\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512Z() const --> bool");
		cl.def("hasAvx512ER", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512ER, "Tests whether the instruction supports AVX512 embedded-rounding {er}.\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512ER() const --> bool");
		cl.def("hasAvx512SAE", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512SAE, "Tests whether the instruction supports AVX512 suppress-all-exceptions {sae}.\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512SAE() const --> bool");
		cl.def("hasAvx512B", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512B, "Tests whether the instruction supports AVX512 broadcast (either 32-bit or 64-bit).\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512B() const --> bool");
		cl.def("hasAvx512B16", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512B16, "Tests whether the instruction supports AVX512 broadcast (16-bit).\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512B16() const --> bool");
		cl.def("hasAvx512B32", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512B32, "Tests whether the instruction supports AVX512 broadcast (32-bit).\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512B32() const --> bool");
		cl.def("hasAvx512B64", (bool (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::hasAvx512B64, "Tests whether the instruction supports AVX512 broadcast (64-bit).\n\nC++: asmjit::x86::InstDB::InstInfo::hasAvx512B64() const --> bool");
		cl.def("controlFlow", (enum asmjit::InstControlFlow (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::controlFlow, "Returns a control flow category of the instruction.\n\nC++: asmjit::x86::InstDB::InstInfo::controlFlow() const --> enum asmjit::InstControlFlow");
		cl.def("sameRegHint", (enum asmjit::InstSameRegHint (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::sameRegHint, "Returns a hint that can be used when both inputs are the same register.\n\nC++: asmjit::x86::InstDB::InstInfo::sameRegHint() const --> enum asmjit::InstSameRegHint");
		cl.def("signatureIndex", (unsigned int (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::signatureIndex, "C++: asmjit::x86::InstDB::InstInfo::signatureIndex() const --> unsigned int");
		cl.def("signatureCount", (unsigned int (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::signatureCount, "C++: asmjit::x86::InstDB::InstInfo::signatureCount() const --> unsigned int");
		cl.def("signatureData", (const struct asmjit::x86::InstDB::InstSignature * (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::signatureData, "C++: asmjit::x86::InstDB::InstInfo::signatureData() const --> const struct asmjit::x86::InstDB::InstSignature *", pybind11::return_value_policy::automatic);
		cl.def("signatureEnd", (const struct asmjit::x86::InstDB::InstSignature * (asmjit::x86::InstDB::InstInfo::*)() const) &asmjit::x86::InstDB::InstInfo::signatureEnd, "C++: asmjit::x86::InstDB::InstInfo::signatureEnd() const --> const struct asmjit::x86::InstDB::InstSignature *", pybind11::return_value_policy::automatic);
	}
	// asmjit::x86::InstDB::infoById(unsigned int) file: line:548
	M("asmjit::x86::InstDB").def("infoById", (const struct asmjit::x86::InstDB::InstInfo & (*)(unsigned int)) &asmjit::x86::InstDB::infoById, "C++: asmjit::x86::InstDB::infoById(unsigned int) --> const struct asmjit::x86::InstDB::InstInfo &", pybind11::return_value_policy::automatic, pybind11::arg("instId"));

}
