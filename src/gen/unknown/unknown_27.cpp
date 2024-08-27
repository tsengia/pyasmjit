
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

void bind_unknown_unknown_27(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::InstAPI::stringToInstId(enum asmjit::Arch, const char *, unsigned long) file: line:782
	M("asmjit::InstAPI").def("stringToInstId", (unsigned int (*)(enum asmjit::Arch, const char *, unsigned long)) &asmjit::InstAPI::stringToInstId, "Parses an instruction name in the given string `s`. Length is specified by `len` argument, which can be\n `SIZE_MAX` if `s` is known to be null terminated.\n\n Returns the parsed instruction id or  if no such instruction exists.\n\nC++: asmjit::InstAPI::stringToInstId(enum asmjit::Arch, const char *, unsigned long) --> unsigned int", pybind11::arg("arch"), pybind11::arg("s"), pybind11::arg("len"));

	// asmjit::InstAPI::validate(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, enum asmjit::ValidationFlags) file: line:787
	M("asmjit::InstAPI").def("validate", [](enum asmjit::Arch const & a0, const class asmjit::BaseInst & a1, const struct asmjit::Operand_ * a2, unsigned long const & a3) -> unsigned int { return asmjit::InstAPI::validate(a0, a1, a2, a3); }, "", pybind11::arg("arch"), pybind11::arg("inst"), pybind11::arg("operands"), pybind11::arg("opCount"));
	M("asmjit::InstAPI").def("validate", (unsigned int (*)(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, enum asmjit::ValidationFlags)) &asmjit::InstAPI::validate, "Validates the given instruction considering the given `validationFlags`.\n\nC++: asmjit::InstAPI::validate(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, enum asmjit::ValidationFlags) --> unsigned int", pybind11::arg("arch"), pybind11::arg("inst"), pybind11::arg("operands"), pybind11::arg("opCount"), pybind11::arg("validationFlags"));

	// asmjit::InstAPI::queryRWInfo(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, struct asmjit::InstRWInfo *) file: line:792
	M("asmjit::InstAPI").def("queryRWInfo", (unsigned int (*)(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, struct asmjit::InstRWInfo *)) &asmjit::InstAPI::queryRWInfo, "Gets Read/Write information of the given instruction.\n\nC++: asmjit::InstAPI::queryRWInfo(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, struct asmjit::InstRWInfo *) --> unsigned int", pybind11::arg("arch"), pybind11::arg("inst"), pybind11::arg("operands"), pybind11::arg("opCount"), pybind11::arg("out"));

	// asmjit::InstAPI::queryFeatures(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, class asmjit::CpuFeatures *) file: line:795
	M("asmjit::InstAPI").def("queryFeatures", (unsigned int (*)(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, class asmjit::CpuFeatures *)) &asmjit::InstAPI::queryFeatures, "Gets CPU features required by the given instruction.\n\nC++: asmjit::InstAPI::queryFeatures(enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long, class asmjit::CpuFeatures *) --> unsigned int", pybind11::arg("arch"), pybind11::arg("inst"), pybind11::arg("operands"), pybind11::arg("opCount"), pybind11::arg("out"));

}
