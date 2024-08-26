
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

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::ByteOrder file: line:53
	pybind11::enum_<asmjit::ByteOrder>(M("asmjit"), "ByteOrder", "Byte order.")
		.value("kLE", asmjit::ByteOrder::kLE)
		.value("kBE", asmjit::ByteOrder::kBE)
		.value("kNative", asmjit::ByteOrder::kNative)
		.value("kSwapped", asmjit::ByteOrder::kSwapped);

;

	// asmjit::ResetPolicy file: line:65
	pybind11::enum_<asmjit::ResetPolicy>(M("asmjit"), "ResetPolicy", "A policy that can be used with some `reset()` member functions.")
		.value("kSoft", asmjit::ResetPolicy::kSoft)
		.value("kHard", asmjit::ResetPolicy::kHard);

;

}
