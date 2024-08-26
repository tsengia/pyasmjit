
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

void bind_unknown_unknown_16(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::ArchUtils::typeIdToRegSignature(enum asmjit::Arch, enum asmjit::TypeId, enum asmjit::TypeId *, struct asmjit::OperandSignature *) file: line:285
	M("asmjit::ArchUtils").def("typeIdToRegSignature", (unsigned int (*)(enum asmjit::Arch, enum asmjit::TypeId, enum asmjit::TypeId *, struct asmjit::OperandSignature *)) &asmjit::ArchUtils::typeIdToRegSignature, "C++: asmjit::ArchUtils::typeIdToRegSignature(enum asmjit::Arch, enum asmjit::TypeId, enum asmjit::TypeId *, struct asmjit::OperandSignature *) --> unsigned int", pybind11::arg("arch"), pybind11::arg("typeId"), pybind11::arg("typeIdOut"), pybind11::arg("regSignatureOut"));

}
