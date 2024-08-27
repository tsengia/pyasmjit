
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

void bind_unknown_unknown_40(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::CondCode file: line:23
	pybind11::enum_<asmjit::x86::CondCode>(M("asmjit::x86"), "CondCode", "Condition code.")
		.value("kO", asmjit::x86::CondCode::kO)
		.value("kNO", asmjit::x86::CondCode::kNO)
		.value("kC", asmjit::x86::CondCode::kC)
		.value("kB", asmjit::x86::CondCode::kB)
		.value("kNAE", asmjit::x86::CondCode::kNAE)
		.value("kNC", asmjit::x86::CondCode::kNC)
		.value("kAE", asmjit::x86::CondCode::kAE)
		.value("kNB", asmjit::x86::CondCode::kNB)
		.value("kE", asmjit::x86::CondCode::kE)
		.value("kZ", asmjit::x86::CondCode::kZ)
		.value("kNE", asmjit::x86::CondCode::kNE)
		.value("kNZ", asmjit::x86::CondCode::kNZ)
		.value("kBE", asmjit::x86::CondCode::kBE)
		.value("kNA", asmjit::x86::CondCode::kNA)
		.value("kA", asmjit::x86::CondCode::kA)
		.value("kNBE", asmjit::x86::CondCode::kNBE)
		.value("kS", asmjit::x86::CondCode::kS)
		.value("kNS", asmjit::x86::CondCode::kNS)
		.value("kP", asmjit::x86::CondCode::kP)
		.value("kPE", asmjit::x86::CondCode::kPE)
		.value("kPO", asmjit::x86::CondCode::kPO)
		.value("kNP", asmjit::x86::CondCode::kNP)
		.value("kL", asmjit::x86::CondCode::kL)
		.value("kNGE", asmjit::x86::CondCode::kNGE)
		.value("kGE", asmjit::x86::CondCode::kGE)
		.value("kNL", asmjit::x86::CondCode::kNL)
		.value("kLE", asmjit::x86::CondCode::kLE)
		.value("kNG", asmjit::x86::CondCode::kNG)
		.value("kG", asmjit::x86::CondCode::kG)
		.value("kNLE", asmjit::x86::CondCode::kNLE)
		.value("kZero", asmjit::x86::CondCode::kZero)
		.value("kNotZero", asmjit::x86::CondCode::kNotZero)
		.value("kEqual", asmjit::x86::CondCode::kEqual)
		.value("kNotEqual", asmjit::x86::CondCode::kNotEqual)
		.value("kCarry", asmjit::x86::CondCode::kCarry)
		.value("kNotCarry", asmjit::x86::CondCode::kNotCarry)
		.value("kSign", asmjit::x86::CondCode::kSign)
		.value("kNotSign", asmjit::x86::CondCode::kNotSign)
		.value("kNegative", asmjit::x86::CondCode::kNegative)
		.value("kPositive", asmjit::x86::CondCode::kPositive)
		.value("kOverflow", asmjit::x86::CondCode::kOverflow)
		.value("kNotOverflow", asmjit::x86::CondCode::kNotOverflow)
		.value("kSignedLT", asmjit::x86::CondCode::kSignedLT)
		.value("kSignedLE", asmjit::x86::CondCode::kSignedLE)
		.value("kSignedGT", asmjit::x86::CondCode::kSignedGT)
		.value("kSignedGE", asmjit::x86::CondCode::kSignedGE)
		.value("kUnsignedLT", asmjit::x86::CondCode::kUnsignedLT)
		.value("kUnsignedLE", asmjit::x86::CondCode::kUnsignedLE)
		.value("kUnsignedGT", asmjit::x86::CondCode::kUnsignedGT)
		.value("kUnsignedGE", asmjit::x86::CondCode::kUnsignedGE)
		.value("kBTZero", asmjit::x86::CondCode::kBTZero)
		.value("kBTNotZero", asmjit::x86::CondCode::kBTNotZero)
		.value("kParityEven", asmjit::x86::CondCode::kParityEven)
		.value("kParityOdd", asmjit::x86::CondCode::kParityOdd)
		.value("kMaxValue", asmjit::x86::CondCode::kMaxValue);

;

	// asmjit::x86::reverseCond(enum asmjit::x86::CondCode) file: line:114
	M("asmjit::x86").def("reverseCond", (enum asmjit::x86::CondCode (*)(enum asmjit::x86::CondCode)) &asmjit::x86::reverseCond, "Reverses a condition code (reverses the corresponding operands of a comparison).\n\nC++: asmjit::x86::reverseCond(enum asmjit::x86::CondCode) --> enum asmjit::x86::CondCode", pybind11::arg("cond"));

	// asmjit::x86::negateCond(enum asmjit::x86::CondCode) file: line:116
	M("asmjit::x86").def("negateCond", (enum asmjit::x86::CondCode (*)(enum asmjit::x86::CondCode)) &asmjit::x86::negateCond, "Negates a condition code.\n\nC++: asmjit::x86::negateCond(enum asmjit::x86::CondCode) --> enum asmjit::x86::CondCode", pybind11::arg("cond"));

}
