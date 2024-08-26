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

void bind_unknown_unknown_80(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::arm::Utils::encodeAArch32Imm(unsigned long, unsigned int *) file: line:22
	M("asmjit::arm::Utils").def("encodeAArch32Imm", (bool (*)(unsigned long, unsigned int *)) &asmjit::arm::Utils::encodeAArch32Imm, "Encodes a 12-bit immediate part of opcode that ise used by a standard 32-bit ARM encoding.\n\nC++: asmjit::arm::Utils::encodeAArch32Imm(unsigned long, unsigned int *) --> bool", pybind11::arg("imm"), pybind11::arg("encodedImmOut"));

	{ // asmjit::arm::Utils::LogicalImm file: line:53
		pybind11::class_<asmjit::arm::Utils::LogicalImm, std::shared_ptr<asmjit::arm::Utils::LogicalImm>> cl(M("asmjit::arm::Utils"), "LogicalImm", "Decomposed fields of a logical immediate value.");
		cl.def( pybind11::init( [](){ return new asmjit::arm::Utils::LogicalImm(); } ) );
		cl.def( pybind11::init( [](asmjit::arm::Utils::LogicalImm const &o){ return new asmjit::arm::Utils::LogicalImm(o); } ) );
		cl.def_readwrite("n", &asmjit::arm::Utils::LogicalImm::n);
		cl.def_readwrite("s", &asmjit::arm::Utils::LogicalImm::s);
		cl.def_readwrite("r", &asmjit::arm::Utils::LogicalImm::r);
	}
	// asmjit::arm::Utils::encodeLogicalImm(unsigned long, unsigned int, struct asmjit::arm::Utils::LogicalImm *) file: line:77
	M("asmjit::arm::Utils").def("encodeLogicalImm", (bool (*)(unsigned long, unsigned int, struct asmjit::arm::Utils::LogicalImm *)) &asmjit::arm::Utils::encodeLogicalImm, "Encodes the given `imm` value of the given `width` to a logical immediate value represented as N, S, and R fields\n and writes these fields to `out`.\n\n Encoding Table:\n\n ```\n +---+--------+--------+------+\n | N |  ImmS  |  ImmR  | Size |\n +---+--------+--------+------+\n | 1 | ssssss | rrrrrr |  64  |\n | 0 | 0sssss | .rrrrr |  32  |\n | 0 | 10ssss | ..rrrr |  16  |\n | 0 | 110sss | ...rrr |  8   |\n | 0 | 1110ss | ....rr |  4   |\n | 0 | 11110s | .....r |  2   |\n +---+--------+--------+------+\n ```\n\nC++: asmjit::arm::Utils::encodeLogicalImm(unsigned long, unsigned int, struct asmjit::arm::Utils::LogicalImm *) --> bool", pybind11::arg("imm"), pybind11::arg("width"), pybind11::arg("out"));

	// asmjit::arm::Utils::isLogicalImm(unsigned long, unsigned int) file: line:125
	M("asmjit::arm::Utils").def("isLogicalImm", (bool (*)(unsigned long, unsigned int)) &asmjit::arm::Utils::isLogicalImm, "Returns true if the given `imm` value is encodable as a logical immediate. The `width` argument describes the\n width of the operation, and must be either 32 or 64. This function can be used to test whether an immediate\n value can be used with AND, ANDS, BIC, BICS, EON, EOR, ORN, and ORR instruction.\n\nC++: asmjit::arm::Utils::isLogicalImm(unsigned long, unsigned int) --> bool", pybind11::arg("imm"), pybind11::arg("width"));

	// asmjit::arm::Utils::isAddSubImm(unsigned long) file: line:133
	M("asmjit::arm::Utils").def("isAddSubImm", (bool (*)(unsigned long)) &asmjit::arm::Utils::isAddSubImm, "Returns true if the given `imm` value is encodable as an immediate with `add` and `sub` instructions on AArch64.\n These two instructions can encode 12-bit immediate value optionally shifted left by 12 bits.\n\nC++: asmjit::arm::Utils::isAddSubImm(unsigned long) --> bool", pybind11::arg("imm"));

	// asmjit::arm::Utils::encodeImm64ByteMaskToImm8(unsigned long) file: line:147
	M("asmjit::arm::Utils").def("encodeImm64ByteMaskToImm8", (unsigned int (*)(unsigned long)) &asmjit::arm::Utils::encodeImm64ByteMaskToImm8, "C++: asmjit::arm::Utils::encodeImm64ByteMaskToImm8(unsigned long) --> unsigned int", pybind11::arg("imm"));

	// asmjit::arm::Utils::isFPImm8Generic(unsigned int) file: line:156
	M("asmjit::arm::Utils").def("isFPImm8Generic", (bool (*)(unsigned int)) &asmjit::arm::Utils::isFPImm8Generic<unsigned int,3U,6U,6U>, "C++: asmjit::arm::Utils::isFPImm8Generic(unsigned int) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::isFPImm8Generic(unsigned int) file: line:156
	M("asmjit::arm::Utils").def("isFPImm8Generic", (bool (*)(unsigned int)) &asmjit::arm::Utils::isFPImm8Generic<unsigned int,6U,6U,19U>, "C++: asmjit::arm::Utils::isFPImm8Generic(unsigned int) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::isFPImm8Generic(unsigned long) file: line:156
	M("asmjit::arm::Utils").def("isFPImm8Generic", (bool (*)(unsigned long)) &asmjit::arm::Utils::isFPImm8Generic<unsigned long,9U,6U,48U>, "C++: asmjit::arm::Utils::isFPImm8Generic(unsigned long) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::isFP16Imm8(unsigned int) file: line:177
	M("asmjit::arm::Utils").def("isFP16Imm8", (bool (*)(unsigned int)) &asmjit::arm::Utils::isFP16Imm8, "Returns true if the given half precision floating point `val` can be encoded as ARM IMM8 value, which represents\n a limited set of floating point immediate values, which can be used with FMOV instruction.\n\n The floating point must have bits distributed in the following way:\n\n ```\n [aBbbcdef|gh000000]\n ```\n\nC++: asmjit::arm::Utils::isFP16Imm8(unsigned int) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::isFP32Imm8(unsigned int) file: line:187
	M("asmjit::arm::Utils").def("isFP32Imm8", (bool (*)(unsigned int)) &asmjit::arm::Utils::isFP32Imm8, "Returns true if the given single precision floating point `val` can be encoded as ARM IMM8 value, which represents\n a limited set of floating point immediate values, which can be used with FMOV instruction.\n\n The floating point must have bits distributed in the following way:\n\n ```\n [aBbbbbbc|defgh000|00000000|00000000]\n ```\n\nC++: asmjit::arm::Utils::isFP32Imm8(unsigned int) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::isFP32Imm8(float) file: line:189
	M("asmjit::arm::Utils").def("isFP32Imm8", (bool (*)(float)) &asmjit::arm::Utils::isFP32Imm8, "C++: asmjit::arm::Utils::isFP32Imm8(float) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::isFP64Imm8(unsigned long) file: line:199
	M("asmjit::arm::Utils").def("isFP64Imm8", (bool (*)(unsigned long)) &asmjit::arm::Utils::isFP64Imm8, "Returns true if the given double precision floating point `val` can be encoded as ARM IMM8 value, which represents\n a limited set of floating point immediate values, which can be used with FMOV instruction.\n\n The floating point must have bits distributed in the following way:\n\n ```\n [aBbbbbbb|bbcdefgh|00000000|00000000|00000000|00000000|00000000|00000000]\n ```\n\nC++: asmjit::arm::Utils::isFP64Imm8(unsigned long) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::isFP64Imm8(double) file: line:201
	M("asmjit::arm::Utils").def("isFP64Imm8", (bool (*)(double)) &asmjit::arm::Utils::isFP64Imm8, "C++: asmjit::arm::Utils::isFP64Imm8(double) --> bool", pybind11::arg("val"));

	// asmjit::arm::Utils::encodeFPToImm8Generic(unsigned long) file: line:205
	M("asmjit::arm::Utils").def("encodeFPToImm8Generic", (unsigned int (*)(unsigned long)) &asmjit::arm::Utils::encodeFPToImm8Generic<unsigned long,9U,6U,48U>, "C++: asmjit::arm::Utils::encodeFPToImm8Generic(unsigned long) --> unsigned int", pybind11::arg("val"));

	// asmjit::arm::Utils::encodeFP64ToImm8(unsigned long) file: line:215
	M("asmjit::arm::Utils").def("encodeFP64ToImm8", (unsigned int (*)(unsigned long)) &asmjit::arm::Utils::encodeFP64ToImm8, "Encodes a double precision floating point value into IMM8 format.\n\n \n This function expects that `isFP64Imm8(val) == true` so it doesn't perform any checks of the value and just\n rearranges some bits into Imm8 order.\n\nC++: asmjit::arm::Utils::encodeFP64ToImm8(unsigned long) --> unsigned int", pybind11::arg("val"));

	// asmjit::arm::Utils::encodeFP64ToImm8(double) file: line:217
	M("asmjit::arm::Utils").def("encodeFP64ToImm8", (unsigned int (*)(double)) &asmjit::arm::Utils::encodeFP64ToImm8, "C++: asmjit::arm::Utils::encodeFP64ToImm8(double) --> unsigned int", pybind11::arg("val"));

}
