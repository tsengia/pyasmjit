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
	// asmjit::InstRWFlags file: line:654
	pybind11::enum_<asmjit::InstRWFlags>(M("asmjit"), "InstRWFlags", "Flags used by ")
		.value("kNone", asmjit::InstRWFlags::kNone)
		.value("kMovOp", asmjit::InstRWFlags::kMovOp);

;

	{ // asmjit::InstRWInfo file: line:666
		pybind11::class_<asmjit::InstRWInfo, std::shared_ptr<asmjit::InstRWInfo>> cl(M("asmjit"), "InstRWInfo", "Read/Write information of an instruction.");
		cl.def( pybind11::init( [](){ return new asmjit::InstRWInfo(); } ) );






		cl.def("reset", (void (asmjit::InstRWInfo::*)()) &asmjit::InstRWInfo::reset, "Resets this RW information to all zeros.\n\nC++: asmjit::InstRWInfo::reset() --> void");
		cl.def("instFlags", (enum asmjit::InstRWFlags (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::instFlags, "Returns flags associated with the instruction, see \n\nC++: asmjit::InstRWInfo::instFlags() const --> enum asmjit::InstRWFlags");
		cl.def("hasInstFlag", (bool (asmjit::InstRWInfo::*)(enum asmjit::InstRWFlags) const) &asmjit::InstRWInfo::hasInstFlag, "Tests whether the instruction flags contain `flag`.\n\nC++: asmjit::InstRWInfo::hasInstFlag(enum asmjit::InstRWFlags) const --> bool", pybind11::arg("flag"));
		cl.def("isMovOp", (bool (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::isMovOp, "Tests whether the instruction flags contain \n\nC++: asmjit::InstRWInfo::isMovOp() const --> bool");
		cl.def("readFlags", (enum asmjit::CpuRWFlags (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::readFlags, "Returns a mask of CPU flags read.\n\nC++: asmjit::InstRWInfo::readFlags() const --> enum asmjit::CpuRWFlags");
		cl.def("writeFlags", (enum asmjit::CpuRWFlags (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::writeFlags, "Returns a mask of CPU flags written.\n\nC++: asmjit::InstRWInfo::writeFlags() const --> enum asmjit::CpuRWFlags");
		cl.def("rmFeature", (unsigned int (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::rmFeature, "Returns the CPU feature required to replace a register operand with memory operand. If the returned feature is\n zero (none) then this instruction either doesn't provide memory operand combination or there is no extra CPU\n feature required.\n\n X86 Specific\n ------------\n\n Some AVX+ instructions may require extra features for replacing registers with memory operands, for example\n VPSLLDQ instruction only supports `vpslldq reg, reg, imm` combination on AVX/AVX2 capable CPUs and requires\n AVX-512 for `vpslldq reg, mem, imm` combination.\n\nC++: asmjit::InstRWInfo::rmFeature() const --> unsigned int");
		cl.def("extraReg", (const struct asmjit::OpRWInfo & (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::extraReg, "Returns RW information of extra register operand (extraReg).\n\nC++: asmjit::InstRWInfo::extraReg() const --> const struct asmjit::OpRWInfo &", pybind11::return_value_policy::automatic);
		cl.def("operands", (const struct asmjit::OpRWInfo * (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::operands, "Returns RW information of all instruction's operands.\n\nC++: asmjit::InstRWInfo::operands() const --> const struct asmjit::OpRWInfo *", pybind11::return_value_policy::automatic);
		cl.def("operand", (const struct asmjit::OpRWInfo & (asmjit::InstRWInfo::*)(unsigned long) const) &asmjit::InstRWInfo::operand, "Returns RW information of the operand at the given `index`.\n\nC++: asmjit::InstRWInfo::operand(unsigned long) const --> const struct asmjit::OpRWInfo &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("opCount", (unsigned int (asmjit::InstRWInfo::*)() const) &asmjit::InstRWInfo::opCount, "Returns the number of operands this instruction has.\n\nC++: asmjit::InstRWInfo::opCount() const --> unsigned int");
		cl.def("assign", (struct asmjit::InstRWInfo & (asmjit::InstRWInfo::*)(const struct asmjit::InstRWInfo &)) &asmjit::InstRWInfo::operator=, "C++: asmjit::InstRWInfo::operator=(const struct asmjit::InstRWInfo &) --> struct asmjit::InstRWInfo &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	// asmjit::ValidationFlags file: line:760
	pybind11::enum_<asmjit::ValidationFlags>(M("asmjit"), "ValidationFlags", "Validation flags that can be used with ")
		.value("kNone", asmjit::ValidationFlags::kNone)
		.value("kEnableVirtRegs", asmjit::ValidationFlags::kEnableVirtRegs);

;

}
