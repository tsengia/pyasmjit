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

void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::arm::CondCode file: line:25
	pybind11::enum_<asmjit::arm::CondCode>(M("asmjit::arm"), "CondCode", "Condition code (both AArch32 & AArch64).\n\n \n This enumeration doesn't match condition code that is used in AArch32/AArch64 opcodes. In general this\n condition code is encoded as `(cc - 2) & 0xF` so that `kAL` condition code is zero and encoded as 0xE in opcode.\n This makes it easier to use a condition code as an instruction modifier that defaults to 'al'.")
		.value("kAL", asmjit::arm::CondCode::kAL)
		.value("kNA", asmjit::arm::CondCode::kNA)
		.value("kEQ", asmjit::arm::CondCode::kEQ)
		.value("kNE", asmjit::arm::CondCode::kNE)
		.value("kCS", asmjit::arm::CondCode::kCS)
		.value("kHS", asmjit::arm::CondCode::kHS)
		.value("kLO", asmjit::arm::CondCode::kLO)
		.value("kCC", asmjit::arm::CondCode::kCC)
		.value("kMI", asmjit::arm::CondCode::kMI)
		.value("kPL", asmjit::arm::CondCode::kPL)
		.value("kVS", asmjit::arm::CondCode::kVS)
		.value("kVC", asmjit::arm::CondCode::kVC)
		.value("kHI", asmjit::arm::CondCode::kHI)
		.value("kLS", asmjit::arm::CondCode::kLS)
		.value("kGE", asmjit::arm::CondCode::kGE)
		.value("kLT", asmjit::arm::CondCode::kLT)
		.value("kGT", asmjit::arm::CondCode::kGT)
		.value("kLE", asmjit::arm::CondCode::kLE)
		.value("kZero", asmjit::arm::CondCode::kZero)
		.value("kNotZero", asmjit::arm::CondCode::kNotZero)
		.value("kEqual", asmjit::arm::CondCode::kEqual)
		.value("kNotEqual", asmjit::arm::CondCode::kNotEqual)
		.value("kCarry", asmjit::arm::CondCode::kCarry)
		.value("kNotCarry", asmjit::arm::CondCode::kNotCarry)
		.value("kSign", asmjit::arm::CondCode::kSign)
		.value("kNotSign", asmjit::arm::CondCode::kNotSign)
		.value("kNegative", asmjit::arm::CondCode::kNegative)
		.value("kPositive", asmjit::arm::CondCode::kPositive)
		.value("kOverflow", asmjit::arm::CondCode::kOverflow)
		.value("kNotOverflow", asmjit::arm::CondCode::kNotOverflow)
		.value("kSignedLT", asmjit::arm::CondCode::kSignedLT)
		.value("kSignedLE", asmjit::arm::CondCode::kSignedLE)
		.value("kSignedGT", asmjit::arm::CondCode::kSignedGT)
		.value("kSignedGE", asmjit::arm::CondCode::kSignedGE)
		.value("kUnsignedLT", asmjit::arm::CondCode::kUnsignedLT)
		.value("kUnsignedLE", asmjit::arm::CondCode::kUnsignedLE)
		.value("kUnsignedGT", asmjit::arm::CondCode::kUnsignedGT)
		.value("kUnsignedGE", asmjit::arm::CondCode::kUnsignedGE)
		.value("kBTZero", asmjit::arm::CondCode::kBTZero)
		.value("kBTNotZero", asmjit::arm::CondCode::kBTNotZero)
		.value("kAlways", asmjit::arm::CondCode::kAlways)
		.value("kMaxValue", asmjit::arm::CondCode::kMaxValue);

;

	// asmjit::arm::reverseCond(enum asmjit::arm::CondCode) file: line:104
	M("asmjit::arm").def("reverseCond", (enum asmjit::arm::CondCode (*)(enum asmjit::arm::CondCode)) &asmjit::arm::reverseCond, "Reverses a condition code (reverses the corresponding operands of a comparison).\n\nC++: asmjit::arm::reverseCond(enum asmjit::arm::CondCode) --> enum asmjit::arm::CondCode", pybind11::arg("cond"));

	// asmjit::arm::negateCond(enum asmjit::arm::CondCode) file: line:106
	M("asmjit::arm").def("negateCond", (enum asmjit::arm::CondCode (*)(enum asmjit::arm::CondCode)) &asmjit::arm::negateCond, "Negates a condition code.\n\nC++: asmjit::arm::negateCond(enum asmjit::arm::CondCode) --> enum asmjit::arm::CondCode", pybind11::arg("cond"));

	// asmjit::arm::OffsetMode file: line:111
	pybind11::enum_<asmjit::arm::OffsetMode>(M("asmjit::arm"), "OffsetMode", "Memory offset mode.\n\n Describes either fixed, pre-index, or post-index offset modes.")
		.value("kFixed", asmjit::arm::OffsetMode::kFixed)
		.value("kPreIndex", asmjit::arm::OffsetMode::kPreIndex)
		.value("kPostIndex", asmjit::arm::OffsetMode::kPostIndex);

;

	// asmjit::arm::ShiftOp file: line:125
	pybind11::enum_<asmjit::arm::ShiftOp>(M("asmjit::arm"), "ShiftOp", "Shift operation predicate (ARM) describes either SHIFT or EXTEND operation.\n\n \n The constants are AsmJit specific. The first 5 values describe real constants on ARM32 and AArch64 hardware,\n however, the addition constants that describe extend modes are specific to AsmJit and would be translated to the\n AArch64 specific constants by the assembler.")
		.value("kLSL", asmjit::arm::ShiftOp::kLSL)
		.value("kLSR", asmjit::arm::ShiftOp::kLSR)
		.value("kASR", asmjit::arm::ShiftOp::kASR)
		.value("kROR", asmjit::arm::ShiftOp::kROR)
		.value("kRRX", asmjit::arm::ShiftOp::kRRX)
		.value("kMSL", asmjit::arm::ShiftOp::kMSL)
		.value("kUXTB", asmjit::arm::ShiftOp::kUXTB)
		.value("kUXTH", asmjit::arm::ShiftOp::kUXTH)
		.value("kUXTW", asmjit::arm::ShiftOp::kUXTW)
		.value("kUXTX", asmjit::arm::ShiftOp::kUXTX)
		.value("kSXTB", asmjit::arm::ShiftOp::kSXTB)
		.value("kSXTH", asmjit::arm::ShiftOp::kSXTH)
		.value("kSXTW", asmjit::arm::ShiftOp::kSXTW)
		.value("kSXTX", asmjit::arm::ShiftOp::kSXTX);

;

	{ // asmjit::arm::Shift file: line:172
		pybind11::class_<asmjit::arm::Shift, std::shared_ptr<asmjit::arm::Shift>> cl(M("asmjit::arm"), "Shift", "Represents ARM immediate shift operation type and value.");
		cl.def( pybind11::init( [](){ return new asmjit::arm::Shift(); } ) );
		cl.def( pybind11::init( [](asmjit::arm::Shift const &o){ return new asmjit::arm::Shift(o); } ) );
		cl.def( pybind11::init<enum asmjit::arm::ShiftOp, unsigned int>(), pybind11::arg("op"), pybind11::arg("value") );



		cl.def("op", (enum asmjit::arm::ShiftOp (asmjit::arm::Shift::*)() const) &asmjit::arm::Shift::op, "Returns the shift operation.\n\nC++: asmjit::arm::Shift::op() const --> enum asmjit::arm::ShiftOp");
		cl.def("setOp", (void (asmjit::arm::Shift::*)(enum asmjit::arm::ShiftOp)) &asmjit::arm::Shift::setOp, "Sets shift operation to `op`.\n\nC++: asmjit::arm::Shift::setOp(enum asmjit::arm::ShiftOp) --> void", pybind11::arg("op"));
		cl.def("value", (unsigned int (asmjit::arm::Shift::*)() const) &asmjit::arm::Shift::value, "Returns the shift amount.\n\nC++: asmjit::arm::Shift::value() const --> unsigned int");
		cl.def("setValue", (void (asmjit::arm::Shift::*)(unsigned int)) &asmjit::arm::Shift::setValue, "Sets shift amount to `value`.\n\nC++: asmjit::arm::Shift::setValue(unsigned int) --> void", pybind11::arg("value"));
	}
}
