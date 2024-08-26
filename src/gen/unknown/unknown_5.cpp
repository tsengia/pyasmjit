
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

void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::a32::DataType file: line:214
	pybind11::enum_<asmjit::a32::DataType>(M("asmjit::a32"), "DataType", "Data type that can be encoded with AArch32 instruction identifier.\n\n \n Data types are frequently used with AArch32 SIMD instructions. For example `VMAX` instruction can\n use almost all datatypes in a form `VMAX.F32`, `VMAX.S16`, `VMAX.U32`, etc... Emitter automatically adds\n the required data type at emit level.")
		.value("kNone", asmjit::a32::DataType::kNone)
		.value("kS8", asmjit::a32::DataType::kS8)
		.value("kS16", asmjit::a32::DataType::kS16)
		.value("kS32", asmjit::a32::DataType::kS32)
		.value("kS64", asmjit::a32::DataType::kS64)
		.value("kU8", asmjit::a32::DataType::kU8)
		.value("kU16", asmjit::a32::DataType::kU16)
		.value("kU32", asmjit::a32::DataType::kU32)
		.value("kU64", asmjit::a32::DataType::kU64)
		.value("kF16", asmjit::a32::DataType::kF16)
		.value("kF32", asmjit::a32::DataType::kF32)
		.value("kF64", asmjit::a32::DataType::kF64)
		.value("kP8", asmjit::a32::DataType::kP8)
		.value("kBF16", asmjit::a32::DataType::kBF16)
		.value("kP64", asmjit::a32::DataType::kP64)
		.value("kMaxValue", asmjit::a32::DataType::kMaxValue);

;

	// asmjit::a32::dataTypeSize(enum asmjit::a32::DataType) file: line:250
	M("asmjit::a32").def("dataTypeSize", (unsigned int (*)(enum asmjit::a32::DataType)) &asmjit::a32::dataTypeSize, "C++: asmjit::a32::dataTypeSize(enum asmjit::a32::DataType) --> unsigned int", pybind11::arg("dt"));

}
