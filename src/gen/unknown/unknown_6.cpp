
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

void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::TypeId file: line:22
	pybind11::enum_<asmjit::TypeId>(M("asmjit"), "TypeId", "Type identifier provides a minimalist type system used across AsmJit library.\n\n This is an additional information that can be used to describe a value-type of physical or virtual register. It's\n used mostly by BaseCompiler to describe register representation (the group of data stored in the register and the\n width used) and it's also used by APIs that allow to describe and work with function signatures.")
		.value("kVoid", asmjit::TypeId::kVoid)
		.value("_kBaseStart", asmjit::TypeId::_kBaseStart)
		.value("_kBaseEnd", asmjit::TypeId::_kBaseEnd)
		.value("_kIntStart", asmjit::TypeId::_kIntStart)
		.value("_kIntEnd", asmjit::TypeId::_kIntEnd)
		.value("kIntPtr", asmjit::TypeId::kIntPtr)
		.value("kUIntPtr", asmjit::TypeId::kUIntPtr)
		.value("kInt8", asmjit::TypeId::kInt8)
		.value("kUInt8", asmjit::TypeId::kUInt8)
		.value("kInt16", asmjit::TypeId::kInt16)
		.value("kUInt16", asmjit::TypeId::kUInt16)
		.value("kInt32", asmjit::TypeId::kInt32)
		.value("kUInt32", asmjit::TypeId::kUInt32)
		.value("kInt64", asmjit::TypeId::kInt64)
		.value("kUInt64", asmjit::TypeId::kUInt64)
		.value("_kFloatStart", asmjit::TypeId::_kFloatStart)
		.value("_kFloatEnd", asmjit::TypeId::_kFloatEnd)
		.value("kFloat32", asmjit::TypeId::kFloat32)
		.value("kFloat64", asmjit::TypeId::kFloat64)
		.value("kFloat80", asmjit::TypeId::kFloat80)
		.value("_kMaskStart", asmjit::TypeId::_kMaskStart)
		.value("_kMaskEnd", asmjit::TypeId::_kMaskEnd)
		.value("kMask8", asmjit::TypeId::kMask8)
		.value("kMask16", asmjit::TypeId::kMask16)
		.value("kMask32", asmjit::TypeId::kMask32)
		.value("kMask64", asmjit::TypeId::kMask64)
		.value("_kMmxStart", asmjit::TypeId::_kMmxStart)
		.value("_kMmxEnd", asmjit::TypeId::_kMmxEnd)
		.value("kMmx32", asmjit::TypeId::kMmx32)
		.value("kMmx64", asmjit::TypeId::kMmx64)
		.value("_kVec32Start", asmjit::TypeId::_kVec32Start)
		.value("_kVec32End", asmjit::TypeId::_kVec32End)
		.value("kInt8x4", asmjit::TypeId::kInt8x4)
		.value("kUInt8x4", asmjit::TypeId::kUInt8x4)
		.value("kInt16x2", asmjit::TypeId::kInt16x2)
		.value("kUInt16x2", asmjit::TypeId::kUInt16x2)
		.value("kInt32x1", asmjit::TypeId::kInt32x1)
		.value("kUInt32x1", asmjit::TypeId::kUInt32x1)
		.value("kFloat32x1", asmjit::TypeId::kFloat32x1)
		.value("_kVec64Start", asmjit::TypeId::_kVec64Start)
		.value("_kVec64End", asmjit::TypeId::_kVec64End)
		.value("kInt8x8", asmjit::TypeId::kInt8x8)
		.value("kUInt8x8", asmjit::TypeId::kUInt8x8)
		.value("kInt16x4", asmjit::TypeId::kInt16x4)
		.value("kUInt16x4", asmjit::TypeId::kUInt16x4)
		.value("kInt32x2", asmjit::TypeId::kInt32x2)
		.value("kUInt32x2", asmjit::TypeId::kUInt32x2)
		.value("kInt64x1", asmjit::TypeId::kInt64x1)
		.value("kUInt64x1", asmjit::TypeId::kUInt64x1)
		.value("kFloat32x2", asmjit::TypeId::kFloat32x2)
		.value("kFloat64x1", asmjit::TypeId::kFloat64x1)
		.value("_kVec128Start", asmjit::TypeId::_kVec128Start)
		.value("_kVec128End", asmjit::TypeId::_kVec128End)
		.value("kInt8x16", asmjit::TypeId::kInt8x16)
		.value("kUInt8x16", asmjit::TypeId::kUInt8x16)
		.value("kInt16x8", asmjit::TypeId::kInt16x8)
		.value("kUInt16x8", asmjit::TypeId::kUInt16x8)
		.value("kInt32x4", asmjit::TypeId::kInt32x4)
		.value("kUInt32x4", asmjit::TypeId::kUInt32x4)
		.value("kInt64x2", asmjit::TypeId::kInt64x2)
		.value("kUInt64x2", asmjit::TypeId::kUInt64x2)
		.value("kFloat32x4", asmjit::TypeId::kFloat32x4)
		.value("kFloat64x2", asmjit::TypeId::kFloat64x2)
		.value("_kVec256Start", asmjit::TypeId::_kVec256Start)
		.value("_kVec256End", asmjit::TypeId::_kVec256End)
		.value("kInt8x32", asmjit::TypeId::kInt8x32)
		.value("kUInt8x32", asmjit::TypeId::kUInt8x32)
		.value("kInt16x16", asmjit::TypeId::kInt16x16)
		.value("kUInt16x16", asmjit::TypeId::kUInt16x16)
		.value("kInt32x8", asmjit::TypeId::kInt32x8)
		.value("kUInt32x8", asmjit::TypeId::kUInt32x8)
		.value("kInt64x4", asmjit::TypeId::kInt64x4)
		.value("kUInt64x4", asmjit::TypeId::kUInt64x4)
		.value("kFloat32x8", asmjit::TypeId::kFloat32x8)
		.value("kFloat64x4", asmjit::TypeId::kFloat64x4)
		.value("_kVec512Start", asmjit::TypeId::_kVec512Start)
		.value("_kVec512End", asmjit::TypeId::_kVec512End)
		.value("kInt8x64", asmjit::TypeId::kInt8x64)
		.value("kUInt8x64", asmjit::TypeId::kUInt8x64)
		.value("kInt16x32", asmjit::TypeId::kInt16x32)
		.value("kUInt16x32", asmjit::TypeId::kUInt16x32)
		.value("kInt32x16", asmjit::TypeId::kInt32x16)
		.value("kUInt32x16", asmjit::TypeId::kUInt32x16)
		.value("kInt64x8", asmjit::TypeId::kInt64x8)
		.value("kUInt64x8", asmjit::TypeId::kUInt64x8)
		.value("kFloat32x16", asmjit::TypeId::kFloat32x16)
		.value("kFloat64x8", asmjit::TypeId::kFloat64x8)
		.value("kLastAssigned", asmjit::TypeId::kLastAssigned)
		.value("kMaxValue", asmjit::TypeId::kMaxValue);

;

}
