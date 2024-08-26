
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

void bind_unknown_unknown_79(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::arm::lsl(unsigned int) file: line:365
	M("asmjit::arm").def("lsl", (class asmjit::arm::Shift (*)(unsigned int)) &asmjit::arm::lsl, "Constructs a `LSL #value` shift (logical shift left).\n\nC++: asmjit::arm::lsl(unsigned int) --> class asmjit::arm::Shift", pybind11::arg("value"));

	// asmjit::arm::lsr(unsigned int) file: line:367
	M("asmjit::arm").def("lsr", (class asmjit::arm::Shift (*)(unsigned int)) &asmjit::arm::lsr, "Constructs a `LSR #value` shift (logical shift right).\n\nC++: asmjit::arm::lsr(unsigned int) --> class asmjit::arm::Shift", pybind11::arg("value"));

	// asmjit::arm::asr(unsigned int) file: line:369
	M("asmjit::arm").def("asr", (class asmjit::arm::Shift (*)(unsigned int)) &asmjit::arm::asr, "Constructs a `ASR #value` shift (arithmetic shift right).\n\nC++: asmjit::arm::asr(unsigned int) --> class asmjit::arm::Shift", pybind11::arg("value"));

	// asmjit::arm::ror(unsigned int) file: line:371
	M("asmjit::arm").def("ror", (class asmjit::arm::Shift (*)(unsigned int)) &asmjit::arm::ror, "Constructs a `ROR #value` shift (rotate right).\n\nC++: asmjit::arm::ror(unsigned int) --> class asmjit::arm::Shift", pybind11::arg("value"));

	// asmjit::arm::rrx() file: line:373
	M("asmjit::arm").def("rrx", (class asmjit::arm::Shift (*)()) &asmjit::arm::rrx, "Constructs a `RRX` shift (rotate with carry by 1).\n\nC++: asmjit::arm::rrx() --> class asmjit::arm::Shift");

	// asmjit::arm::msl(unsigned int) file: line:375
	M("asmjit::arm").def("msl", (class asmjit::arm::Shift (*)(unsigned int)) &asmjit::arm::msl, "Constructs a `MSL #value` shift (logical shift left filling ones).\n\nC++: asmjit::arm::msl(unsigned int) --> class asmjit::arm::Shift", pybind11::arg("value"));

	// asmjit::arm::ptr(unsigned long) file: line:388
	M("asmjit::arm").def("ptr", (class asmjit::arm::Mem (*)(unsigned long)) &asmjit::arm::ptr, "Creates `[base]` absolute memory operand (AArch32 or AArch64).\n\n \n The concept of absolute memory operands doesn't exist on ARM, the ISA only provides PC relative addressing.\n Absolute memory operands can only be used if it's known that the PC relative offset is encodable and that it\n would be within the limits. Absolute address is also often output from disassemblers, so AsmJit supports it to\n make it possible to assemble such output back.\n\nC++: asmjit::arm::ptr(unsigned long) --> class asmjit::arm::Mem", pybind11::arg("base"));

}
