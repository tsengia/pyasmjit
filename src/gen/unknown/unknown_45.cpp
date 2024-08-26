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
	// asmjit::x86::FpuStatusWord file: line:1877
	pybind11::enum_<asmjit::x86::FpuStatusWord>(M("asmjit::x86"), "FpuStatusWord", "FPU status word bits.")
		.value("kNone", asmjit::x86::FpuStatusWord::kNone)
		.value("kInvalid", asmjit::x86::FpuStatusWord::kInvalid)
		.value("kDenormalized", asmjit::x86::FpuStatusWord::kDenormalized)
		.value("kDivByZero", asmjit::x86::FpuStatusWord::kDivByZero)
		.value("kOverflow", asmjit::x86::FpuStatusWord::kOverflow)
		.value("kUnderflow", asmjit::x86::FpuStatusWord::kUnderflow)
		.value("kPrecision", asmjit::x86::FpuStatusWord::kPrecision)
		.value("kStackFault", asmjit::x86::FpuStatusWord::kStackFault)
		.value("kInterrupt", asmjit::x86::FpuStatusWord::kInterrupt)
		.value("kC0", asmjit::x86::FpuStatusWord::kC0)
		.value("kC1", asmjit::x86::FpuStatusWord::kC1)
		.value("kC2", asmjit::x86::FpuStatusWord::kC2)
		.value("kTopMask", asmjit::x86::FpuStatusWord::kTopMask)
		.value("kC3", asmjit::x86::FpuStatusWord::kC3)
		.value("kBusy", asmjit::x86::FpuStatusWord::kBusy);

;

	// asmjit::x86::FpuControlWord file: line:1898
	pybind11::enum_<asmjit::x86::FpuControlWord>(M("asmjit::x86"), "FpuControlWord", "FPU control word bits.")
		.value("kNone", asmjit::x86::FpuControlWord::kNone)
		.value("kEM_Mask", asmjit::x86::FpuControlWord::kEM_Mask)
		.value("kEM_Invalid", asmjit::x86::FpuControlWord::kEM_Invalid)
		.value("kEM_Denormal", asmjit::x86::FpuControlWord::kEM_Denormal)
		.value("kEM_DivByZero", asmjit::x86::FpuControlWord::kEM_DivByZero)
		.value("kEM_Overflow", asmjit::x86::FpuControlWord::kEM_Overflow)
		.value("kEM_Underflow", asmjit::x86::FpuControlWord::kEM_Underflow)
		.value("kEM_Inexact", asmjit::x86::FpuControlWord::kEM_Inexact)
		.value("kPC_Mask", asmjit::x86::FpuControlWord::kPC_Mask)
		.value("kPC_Float", asmjit::x86::FpuControlWord::kPC_Float)
		.value("kPC_Reserved", asmjit::x86::FpuControlWord::kPC_Reserved)
		.value("kPC_Double", asmjit::x86::FpuControlWord::kPC_Double)
		.value("kPC_Extended", asmjit::x86::FpuControlWord::kPC_Extended)
		.value("kRC_Mask", asmjit::x86::FpuControlWord::kRC_Mask)
		.value("kRC_Nearest", asmjit::x86::FpuControlWord::kRC_Nearest)
		.value("kRC_Down", asmjit::x86::FpuControlWord::kRC_Down)
		.value("kRC_Up", asmjit::x86::FpuControlWord::kRC_Up)
		.value("kRC_Truncate", asmjit::x86::FpuControlWord::kRC_Truncate)
		.value("kIC_Mask", asmjit::x86::FpuControlWord::kIC_Mask)
		.value("kIC_Projective", asmjit::x86::FpuControlWord::kIC_Projective)
		.value("kIC_Affine", asmjit::x86::FpuControlWord::kIC_Affine);

;

	// asmjit::x86::CmpImm file: line:1940
	pybind11::enum_<asmjit::x86::CmpImm>(M("asmjit::x86"), "CmpImm", "An immediate value that can be used with CMP[PD|PS|SD|SS] instructions.")
		.value("kEQ", asmjit::x86::CmpImm::kEQ)
		.value("kLT", asmjit::x86::CmpImm::kLT)
		.value("kLE", asmjit::x86::CmpImm::kLE)
		.value("kUNORD", asmjit::x86::CmpImm::kUNORD)
		.value("kNEQ", asmjit::x86::CmpImm::kNEQ)
		.value("kNLT", asmjit::x86::CmpImm::kNLT)
		.value("kNLE", asmjit::x86::CmpImm::kNLE)
		.value("kORD", asmjit::x86::CmpImm::kORD);

;

	// asmjit::x86::PCmpStrImm file: line:1952
	pybind11::enum_<asmjit::x86::PCmpStrImm>(M("asmjit::x86"), "PCmpStrImm", "An immediate value that can be used with [V]PCMP[I|E]STR[I|M] instructions.")
		.value("kUB", asmjit::x86::PCmpStrImm::kUB)
		.value("kUW", asmjit::x86::PCmpStrImm::kUW)
		.value("kSB", asmjit::x86::PCmpStrImm::kSB)
		.value("kSW", asmjit::x86::PCmpStrImm::kSW)
		.value("kEqualAny", asmjit::x86::PCmpStrImm::kEqualAny)
		.value("kRanges", asmjit::x86::PCmpStrImm::kRanges)
		.value("kEqualEach", asmjit::x86::PCmpStrImm::kEqualEach)
		.value("kEqualOrdered", asmjit::x86::PCmpStrImm::kEqualOrdered)
		.value("kPosPolarity", asmjit::x86::PCmpStrImm::kPosPolarity)
		.value("kNegPolarity", asmjit::x86::PCmpStrImm::kNegPolarity)
		.value("kPosMasked", asmjit::x86::PCmpStrImm::kPosMasked)
		.value("kNegMasked", asmjit::x86::PCmpStrImm::kNegMasked)
		.value("kOutputLSI", asmjit::x86::PCmpStrImm::kOutputLSI)
		.value("kOutputMSI", asmjit::x86::PCmpStrImm::kOutputMSI)
		.value("kBitMask", asmjit::x86::PCmpStrImm::kBitMask)
		.value("kIndexMask", asmjit::x86::PCmpStrImm::kIndexMask);

;

	// asmjit::x86::RoundImm file: line:1995
	pybind11::enum_<asmjit::x86::RoundImm>(M("asmjit::x86"), "RoundImm", "An immediate value that can be used with ROUND[PD|PS|SD|SS] instructions.\n\n \n `kSuppress` is a mask that can be used with any other value.")
		.value("kNearest", asmjit::x86::RoundImm::kNearest)
		.value("kDown", asmjit::x86::RoundImm::kDown)
		.value("kUp", asmjit::x86::RoundImm::kUp)
		.value("kTrunc", asmjit::x86::RoundImm::kTrunc)
		.value("kCurrent", asmjit::x86::RoundImm::kCurrent)
		.value("kSuppress", asmjit::x86::RoundImm::kSuppress);

;

	// asmjit::x86::VCmpImm file: line:2008
	pybind11::enum_<asmjit::x86::VCmpImm>(M("asmjit::x86"), "VCmpImm", "An immediate value that can be used with VCMP[PD|PS|SD|SS] instructions (AVX).\n\n The first 8 values are compatible with ")
		.value("kEQ_OQ", asmjit::x86::VCmpImm::kEQ_OQ)
		.value("kLT_OS", asmjit::x86::VCmpImm::kLT_OS)
		.value("kLE_OS", asmjit::x86::VCmpImm::kLE_OS)
		.value("kUNORD_Q", asmjit::x86::VCmpImm::kUNORD_Q)
		.value("kNEQ_UQ", asmjit::x86::VCmpImm::kNEQ_UQ)
		.value("kNLT_US", asmjit::x86::VCmpImm::kNLT_US)
		.value("kNLE_US", asmjit::x86::VCmpImm::kNLE_US)
		.value("kORD_Q", asmjit::x86::VCmpImm::kORD_Q)
		.value("kEQ_UQ", asmjit::x86::VCmpImm::kEQ_UQ)
		.value("kNGE_US", asmjit::x86::VCmpImm::kNGE_US)
		.value("kNGT_US", asmjit::x86::VCmpImm::kNGT_US)
		.value("kFALSE_OQ", asmjit::x86::VCmpImm::kFALSE_OQ)
		.value("kNEQ_OQ", asmjit::x86::VCmpImm::kNEQ_OQ)
		.value("kGE_OS", asmjit::x86::VCmpImm::kGE_OS)
		.value("kGT_OS", asmjit::x86::VCmpImm::kGT_OS)
		.value("kTRUE_UQ", asmjit::x86::VCmpImm::kTRUE_UQ)
		.value("kEQ_OS", asmjit::x86::VCmpImm::kEQ_OS)
		.value("kLT_OQ", asmjit::x86::VCmpImm::kLT_OQ)
		.value("kLE_OQ", asmjit::x86::VCmpImm::kLE_OQ)
		.value("kUNORD_S", asmjit::x86::VCmpImm::kUNORD_S)
		.value("kNEQ_US", asmjit::x86::VCmpImm::kNEQ_US)
		.value("kNLT_UQ", asmjit::x86::VCmpImm::kNLT_UQ)
		.value("kNLE_UQ", asmjit::x86::VCmpImm::kNLE_UQ)
		.value("kORD_S", asmjit::x86::VCmpImm::kORD_S)
		.value("kEQ_US", asmjit::x86::VCmpImm::kEQ_US)
		.value("kNGE_UQ", asmjit::x86::VCmpImm::kNGE_UQ)
		.value("kNGT_UQ", asmjit::x86::VCmpImm::kNGT_UQ)
		.value("kFALSE_OS", asmjit::x86::VCmpImm::kFALSE_OS)
		.value("kNEQ_OS", asmjit::x86::VCmpImm::kNEQ_OS)
		.value("kGE_OQ", asmjit::x86::VCmpImm::kGE_OQ)
		.value("kGT_OQ", asmjit::x86::VCmpImm::kGT_OQ)
		.value("kTRUE_US", asmjit::x86::VCmpImm::kTRUE_US);

;

	// asmjit::x86::VFixupImm file: line:2046
	pybind11::enum_<asmjit::x86::VFixupImm>(M("asmjit::x86"), "VFixupImm", "An immediate value that can be used with VFIXUPIMM[PD|PS|SD|SS] instructions (AVX-512).\n\n The final immediate is a combination of all possible control bits.")
		.value("kNone", asmjit::x86::VFixupImm::kNone)
		.value("kZEOnZero", asmjit::x86::VFixupImm::kZEOnZero)
		.value("kIEOnZero", asmjit::x86::VFixupImm::kIEOnZero)
		.value("kZEOnOne", asmjit::x86::VFixupImm::kZEOnOne)
		.value("kIEOnOne", asmjit::x86::VFixupImm::kIEOnOne)
		.value("kIEOnSNaN", asmjit::x86::VFixupImm::kIEOnSNaN)
		.value("kIEOnNInf", asmjit::x86::VFixupImm::kIEOnNInf)
		.value("kIEOnNegative", asmjit::x86::VFixupImm::kIEOnNegative)
		.value("kIEOnPInf", asmjit::x86::VFixupImm::kIEOnPInf);

;

	// asmjit::x86::VFPClassImm file: line:2062
	pybind11::enum_<asmjit::x86::VFPClassImm>(M("asmjit::x86"), "VFPClassImm", "An immediate value that can be used with VFPCLASS[PD|PS|SD|SS] instructions (AVX-512).\n\n The values can be combined together to form the final 8-bit mask.")
		.value("kNone", asmjit::x86::VFPClassImm::kNone)
		.value("kQNaN", asmjit::x86::VFPClassImm::kQNaN)
		.value("kPZero", asmjit::x86::VFPClassImm::kPZero)
		.value("kNZero", asmjit::x86::VFPClassImm::kNZero)
		.value("kPInf", asmjit::x86::VFPClassImm::kPInf)
		.value("kNInf", asmjit::x86::VFPClassImm::kNInf)
		.value("kDenormal", asmjit::x86::VFPClassImm::kDenormal)
		.value("kNegative", asmjit::x86::VFPClassImm::kNegative)
		.value("kSNaN", asmjit::x86::VFPClassImm::kSNaN);

;

	// asmjit::x86::VGetMantImm file: line:2078
	pybind11::enum_<asmjit::x86::VGetMantImm>(M("asmjit::x86"), "VGetMantImm", "An immediate value that can be used with VGETMANT[PD|PS|SD|SS] instructions (AVX-512).\n\n The value is a combination of a normalization interval and a sign control.")
		.value("k1To2", asmjit::x86::VGetMantImm::k1To2)
		.value("k1Div2To2", asmjit::x86::VGetMantImm::k1Div2To2)
		.value("k1Div2To1", asmjit::x86::VGetMantImm::k1Div2To1)
		.value("k3Div4To3Div2", asmjit::x86::VGetMantImm::k3Div4To3Div2)
		.value("kSrcSign", asmjit::x86::VGetMantImm::kSrcSign)
		.value("kNoSign", asmjit::x86::VGetMantImm::kNoSign)
		.value("kQNaNIfSign", asmjit::x86::VGetMantImm::kQNaNIfSign);

;

	// asmjit::x86::VPCmpImm file: line:2097
	pybind11::enum_<asmjit::x86::VPCmpImm>(M("asmjit::x86"), "VPCmpImm", "A predicate used by VPCMP[U][B|W|D|Q] instructions (AVX-512).")
		.value("kEQ", asmjit::x86::VPCmpImm::kEQ)
		.value("kLT", asmjit::x86::VPCmpImm::kLT)
		.value("kLE", asmjit::x86::VPCmpImm::kLE)
		.value("kFALSE", asmjit::x86::VPCmpImm::kFALSE)
		.value("kNE", asmjit::x86::VPCmpImm::kNE)
		.value("kGE", asmjit::x86::VPCmpImm::kGE)
		.value("kGT", asmjit::x86::VPCmpImm::kGT)
		.value("kTRUE", asmjit::x86::VPCmpImm::kTRUE);

;

	// asmjit::x86::VPComImm file: line:2109
	pybind11::enum_<asmjit::x86::VPComImm>(M("asmjit::x86"), "VPComImm", "A predicate used by VPCOM[U][B|W|D|Q] instructions (XOP).")
		.value("kLT", asmjit::x86::VPComImm::kLT)
		.value("kLE", asmjit::x86::VPComImm::kLE)
		.value("kGT", asmjit::x86::VPComImm::kGT)
		.value("kGE", asmjit::x86::VPComImm::kGE)
		.value("kEQ", asmjit::x86::VPComImm::kEQ)
		.value("kNE", asmjit::x86::VPComImm::kNE)
		.value("kFALSE", asmjit::x86::VPComImm::kFALSE)
		.value("kTRUE", asmjit::x86::VPComImm::kTRUE);

;

	// asmjit::x86::VRangeImm file: line:2121
	pybind11::enum_<asmjit::x86::VRangeImm>(M("asmjit::x86"), "VRangeImm", "A predicate used by VRANGE[PD|PS|SD|SS] instructions (AVX-512).")
		.value("kSelectMin", asmjit::x86::VRangeImm::kSelectMin)
		.value("kSelectMax", asmjit::x86::VRangeImm::kSelectMax)
		.value("kSelectAbsMin", asmjit::x86::VRangeImm::kSelectAbsMin)
		.value("kSelectAbsMax", asmjit::x86::VRangeImm::kSelectAbsMax)
		.value("kSignSrc1", asmjit::x86::VRangeImm::kSignSrc1)
		.value("kSignSrc2", asmjit::x86::VRangeImm::kSignSrc2)
		.value("kSign0", asmjit::x86::VRangeImm::kSign0)
		.value("kSign1", asmjit::x86::VRangeImm::kSign1);

;

	// asmjit::x86::VReduceImm file: line:2141
	pybind11::enum_<asmjit::x86::VReduceImm>(M("asmjit::x86"), "VReduceImm", "A predicate used by VREDUCE[PD|PS|SD|SS] instructions (AVX-512).")
		.value("kRoundEven", asmjit::x86::VReduceImm::kRoundEven)
		.value("kRoundDown", asmjit::x86::VReduceImm::kRoundDown)
		.value("kRoundUp", asmjit::x86::VReduceImm::kRoundUp)
		.value("kRoundTrunc", asmjit::x86::VReduceImm::kRoundTrunc)
		.value("kRoundCurrent", asmjit::x86::VReduceImm::kRoundCurrent)
		.value("kSuppress", asmjit::x86::VReduceImm::kSuppress)
		.value("kFixedImmMask", asmjit::x86::VReduceImm::kFixedImmMask);

;

	// asmjit::x86::vReduceImm(enum asmjit::x86::VReduceImm, unsigned int) file: line:2153
	M("asmjit::x86").def("vReduceImm", (enum asmjit::x86::VReduceImm (*)(enum asmjit::x86::VReduceImm, unsigned int)) &asmjit::x86::vReduceImm, "Creates a  from a combination of `flags` and `fixedPointLength`.\n\nC++: asmjit::x86::vReduceImm(enum asmjit::x86::VReduceImm, unsigned int) --> enum asmjit::x86::VReduceImm", pybind11::arg("flags"), pybind11::arg("fixedPointLength"));

	// asmjit::x86::TLogImm file: line:2164
	pybind11::enum_<asmjit::x86::TLogImm>(M("asmjit::x86"), "TLogImm", "A predicate that can be used as an immediate value with VPTERNLOG[D|Q] instruction.\n\n There are 3 inputs to the instruction (   Ternary logic can define any combination\n that would be performed on these 3 inputs to get the desired output - any combination of AND, OR, XOR, NOT\n is possible.\n\n \n  and ")
		.value("k0", asmjit::x86::TLogImm::k0)
		.value("k1", asmjit::x86::TLogImm::k1)
		.value("kA", asmjit::x86::TLogImm::kA)
		.value("kB", asmjit::x86::TLogImm::kB)
		.value("kC", asmjit::x86::TLogImm::kC)
		.value("kNotA", asmjit::x86::TLogImm::kNotA)
		.value("kNotB", asmjit::x86::TLogImm::kNotB)
		.value("kNotC", asmjit::x86::TLogImm::kNotC)
		.value("kAB", asmjit::x86::TLogImm::kAB)
		.value("kAC", asmjit::x86::TLogImm::kAC)
		.value("kBC", asmjit::x86::TLogImm::kBC)
		.value("kNotAB", asmjit::x86::TLogImm::kNotAB)
		.value("kNotAC", asmjit::x86::TLogImm::kNotAC)
		.value("kNotBC", asmjit::x86::TLogImm::kNotBC)
		.value("kABC", asmjit::x86::TLogImm::kABC)
		.value("kNotABC", asmjit::x86::TLogImm::kNotABC);

;

	// asmjit::x86::tLogFromBits(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char) file: line:2188
	M("asmjit::x86").def("tLogFromBits", (enum asmjit::x86::TLogImm (*)(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char)) &asmjit::x86::tLogFromBits, "Creates an immediate that can be used by VPTERNLOG[D|Q] instructions.\n\nC++: asmjit::x86::tLogFromBits(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char) --> enum asmjit::x86::TLogImm", pybind11::arg("b000"), pybind11::arg("b001"), pybind11::arg("b010"), pybind11::arg("b011"), pybind11::arg("b100"), pybind11::arg("b101"), pybind11::arg("b110"), pybind11::arg("b111"));

	// asmjit::x86::fLogIfElse(enum asmjit::x86::TLogImm, enum asmjit::x86::TLogImm, enum asmjit::x86::TLogImm) file: line:2200
	M("asmjit::x86").def("fLogIfElse", (enum asmjit::x86::TLogImm (*)(enum asmjit::x86::TLogImm, enum asmjit::x86::TLogImm, enum asmjit::x86::TLogImm)) &asmjit::x86::fLogIfElse, "Creates an if/else logic that can be used by VPTERNLOG[D|Q] instructions.\n\nC++: asmjit::x86::fLogIfElse(enum asmjit::x86::TLogImm, enum asmjit::x86::TLogImm, enum asmjit::x86::TLogImm) --> enum asmjit::x86::TLogImm", pybind11::arg("condition"), pybind11::arg("a"), pybind11::arg("b"));

	// asmjit::x86::shuffleImm(unsigned int, unsigned int) file: line:2209
	M("asmjit::x86").def("shuffleImm", (unsigned int (*)(unsigned int, unsigned int)) &asmjit::x86::shuffleImm, "Creates a shuffle immediate value that be used with SSE/AVX/AVX-512 instructions to shuffle 2 elements in a vector.\n\n \n Position of the first  component [0, 1].\n \n\n Position of the second component [0, 1].\n\n Shuffle constants can be used to encode an immediate for these instructions:\n   - `shufpd|vshufpd`\n\nC++: asmjit::x86::shuffleImm(unsigned int, unsigned int) --> unsigned int", pybind11::arg("a"), pybind11::arg("b"));

	// asmjit::x86::shuffleImm(unsigned int, unsigned int, unsigned int, unsigned int) file: line:2226
	M("asmjit::x86").def("shuffleImm", (unsigned int (*)(unsigned int, unsigned int, unsigned int, unsigned int)) &asmjit::x86::shuffleImm, "Creates a shuffle immediate value that be used with SSE/AVX/AVX-512 instructions to shuffle 4 elements in a vector.\n\n \n Position of the first  component [0, 3].\n \n\n Position of the second component [0, 3].\n \n\n Position of the third  component [0, 3].\n \n\n Position of the fourth component [0, 3].\n\n Shuffle constants can be used to encode an immediate for these instructions:\n   - `pshufw`\n   - `pshuflw|vpshuflw`\n   - `pshufhw|vpshufhw`\n   - `pshufd|vpshufd`\n   - `shufps|vshufps`\n\nC++: asmjit::x86::shuffleImm(unsigned int, unsigned int, unsigned int, unsigned int) --> unsigned int", pybind11::arg("a"), pybind11::arg("b"), pybind11::arg("c"), pybind11::arg("d"));

	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kPC>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kPC>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kPC_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kPC>(); } ) );
	}
	{ // asmjit::x86::RegTraits file: line:1168
		pybind11::class_<asmjit::x86::RegTraits<asmjit::RegType::kGp8Lo>, std::shared_ptr<asmjit::x86::RegTraits<asmjit::RegType::kGp8Lo>>> cl(M("asmjit::x86"), "RegTraits_asmjit_RegType_kGp8Lo_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::x86::RegTraits<asmjit::RegType::kGp8Lo>(); } ) );
	}
}
