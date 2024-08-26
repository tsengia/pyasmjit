
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

void bind_unknown_unknown_8(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::TypeUtils::deabstract(enum asmjit::TypeId, unsigned int) file: line:370
	M("asmjit::TypeUtils").def("deabstract", (enum asmjit::TypeId (*)(enum asmjit::TypeId, unsigned int)) &asmjit::TypeUtils::deabstract, "Deabstracts a given `typeId` into a native type by using `deabstractDelta`, which was previously\n calculated by calling  with a target native register size.\n\nC++: asmjit::TypeUtils::deabstract(enum asmjit::TypeId, unsigned int) --> enum asmjit::TypeId", pybind11::arg("typeId"), pybind11::arg("deabstractDelta"));

	// asmjit::TypeUtils::scalarToVector(enum asmjit::TypeId, enum asmjit::TypeId) file: line:374
	M("asmjit::TypeUtils").def("scalarToVector", (enum asmjit::TypeId (*)(enum asmjit::TypeId, enum asmjit::TypeId)) &asmjit::TypeUtils::scalarToVector, "C++: asmjit::TypeUtils::scalarToVector(enum asmjit::TypeId, enum asmjit::TypeId) --> enum asmjit::TypeId", pybind11::arg("scalarTypeId"), pybind11::arg("vecStartId"));

}
