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

void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::TypeUtils::TypeData file: line:160
		pybind11::class_<asmjit::TypeUtils::TypeData, std::shared_ptr<asmjit::TypeUtils::TypeData>> cl(M("asmjit::TypeUtils"), "TypeData", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeData(); } ) );
	}
	// asmjit::TypeUtils::scalarOf(enum asmjit::TypeId) file: line:167
	M("asmjit::TypeUtils").def("scalarOf", (enum asmjit::TypeId (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::scalarOf, "Returns the scalar type of `typeId`.\n\nC++: asmjit::TypeUtils::scalarOf(enum asmjit::TypeId) --> enum asmjit::TypeId", pybind11::arg("typeId"));

	// asmjit::TypeUtils::sizeOf(enum asmjit::TypeId) file: line:170
	M("asmjit::TypeUtils").def("sizeOf", (unsigned int (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::sizeOf, "Returns the size [in bytes] of `typeId`.\n\nC++: asmjit::TypeUtils::sizeOf(enum asmjit::TypeId) --> unsigned int", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isBetween(enum asmjit::TypeId, enum asmjit::TypeId, enum asmjit::TypeId) file: line:173
	M("asmjit::TypeUtils").def("isBetween", (bool (*)(enum asmjit::TypeId, enum asmjit::TypeId, enum asmjit::TypeId)) &asmjit::TypeUtils::isBetween, "Tests whether a given type `typeId` is between `a` and `b`.\n\nC++: asmjit::TypeUtils::isBetween(enum asmjit::TypeId, enum asmjit::TypeId, enum asmjit::TypeId) --> bool", pybind11::arg("typeId"), pybind11::arg("a"), pybind11::arg("b"));

	// asmjit::TypeUtils::isVoid(enum asmjit::TypeId) file: line:178
	M("asmjit::TypeUtils").def("isVoid", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isVoid, "Tests whether a given type `typeId` is \n\nC++: asmjit::TypeUtils::isVoid(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isValid(enum asmjit::TypeId) file: line:180
	M("asmjit::TypeUtils").def("isValid", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isValid, "Tests whether a given type `typeId` is a valid non-void type.\n\nC++: asmjit::TypeUtils::isValid(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isScalar(enum asmjit::TypeId) file: line:182
	M("asmjit::TypeUtils").def("isScalar", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isScalar, "Tests whether a given type `typeId` is scalar (has no vector part).\n\nC++: asmjit::TypeUtils::isScalar(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isAbstract(enum asmjit::TypeId) file: line:184
	M("asmjit::TypeUtils").def("isAbstract", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isAbstract, "Tests whether a given type `typeId` is abstract, which means that its size depends on register size.\n\nC++: asmjit::TypeUtils::isAbstract(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isInt(enum asmjit::TypeId) file: line:187
	M("asmjit::TypeUtils").def("isInt", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isInt, "Tests whether a given type is a scalar integer (signed or unsigned) of any size.\n\nC++: asmjit::TypeUtils::isInt(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isInt8(enum asmjit::TypeId) file: line:189
	M("asmjit::TypeUtils").def("isInt8", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isInt8, "Tests whether a given type is a scalar 8-bit integer (signed).\n\nC++: asmjit::TypeUtils::isInt8(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isUInt8(enum asmjit::TypeId) file: line:191
	M("asmjit::TypeUtils").def("isUInt8", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isUInt8, "Tests whether a given type is a scalar 8-bit integer (unsigned).\n\nC++: asmjit::TypeUtils::isUInt8(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isInt16(enum asmjit::TypeId) file: line:193
	M("asmjit::TypeUtils").def("isInt16", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isInt16, "Tests whether a given type is a scalar 16-bit integer (signed).\n\nC++: asmjit::TypeUtils::isInt16(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isUInt16(enum asmjit::TypeId) file: line:195
	M("asmjit::TypeUtils").def("isUInt16", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isUInt16, "Tests whether a given type is a scalar 16-bit integer (unsigned).\n\nC++: asmjit::TypeUtils::isUInt16(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isInt32(enum asmjit::TypeId) file: line:197
	M("asmjit::TypeUtils").def("isInt32", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isInt32, "Tests whether a given type is a scalar 32-bit integer (signed).\n\nC++: asmjit::TypeUtils::isInt32(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isUInt32(enum asmjit::TypeId) file: line:199
	M("asmjit::TypeUtils").def("isUInt32", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isUInt32, "Tests whether a given type is a scalar 32-bit integer (unsigned).\n\nC++: asmjit::TypeUtils::isUInt32(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isInt64(enum asmjit::TypeId) file: line:201
	M("asmjit::TypeUtils").def("isInt64", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isInt64, "Tests whether a given type is a scalar 64-bit integer (signed).\n\nC++: asmjit::TypeUtils::isInt64(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isUInt64(enum asmjit::TypeId) file: line:203
	M("asmjit::TypeUtils").def("isUInt64", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isUInt64, "Tests whether a given type is a scalar 64-bit integer (unsigned).\n\nC++: asmjit::TypeUtils::isUInt64(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isGp8(enum asmjit::TypeId) file: line:206
	M("asmjit::TypeUtils").def("isGp8", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isGp8, "Tests whether a given type is an 8-bit general purpose register representing either signed or unsigned 8-bit integer.\n\nC++: asmjit::TypeUtils::isGp8(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isGp16(enum asmjit::TypeId) file: line:208
	M("asmjit::TypeUtils").def("isGp16", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isGp16, "Tests whether a given type is a 16-bit general purpose register representing either signed or unsigned 16-bit integer\n\nC++: asmjit::TypeUtils::isGp16(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isGp32(enum asmjit::TypeId) file: line:210
	M("asmjit::TypeUtils").def("isGp32", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isGp32, "Tests whether a given type is a 32-bit general purpose register representing either signed or unsigned 32-bit integer\n\nC++: asmjit::TypeUtils::isGp32(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isGp64(enum asmjit::TypeId) file: line:212
	M("asmjit::TypeUtils").def("isGp64", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isGp64, "Tests whether a given type is a 64-bit general purpose register representing either signed or unsigned 64-bit integer\n\nC++: asmjit::TypeUtils::isGp64(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isFloat(enum asmjit::TypeId) file: line:215
	M("asmjit::TypeUtils").def("isFloat", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isFloat, "Tests whether a given type is a scalar floating point of any size.\n\nC++: asmjit::TypeUtils::isFloat(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isFloat32(enum asmjit::TypeId) file: line:217
	M("asmjit::TypeUtils").def("isFloat32", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isFloat32, "Tests whether a given type is a scalar 32-bit float.\n\nC++: asmjit::TypeUtils::isFloat32(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isFloat64(enum asmjit::TypeId) file: line:219
	M("asmjit::TypeUtils").def("isFloat64", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isFloat64, "Tests whether a given type is a scalar 64-bit float.\n\nC++: asmjit::TypeUtils::isFloat64(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isFloat80(enum asmjit::TypeId) file: line:221
	M("asmjit::TypeUtils").def("isFloat80", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isFloat80, "Tests whether a given type is a scalar 80-bit float.\n\nC++: asmjit::TypeUtils::isFloat80(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMask(enum asmjit::TypeId) file: line:224
	M("asmjit::TypeUtils").def("isMask", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMask, "Tests whether a given type is a mask register of any size.\n\nC++: asmjit::TypeUtils::isMask(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMask8(enum asmjit::TypeId) file: line:226
	M("asmjit::TypeUtils").def("isMask8", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMask8, "Tests whether a given type is an 8-bit mask register.\n\nC++: asmjit::TypeUtils::isMask8(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMask16(enum asmjit::TypeId) file: line:228
	M("asmjit::TypeUtils").def("isMask16", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMask16, "Tests whether a given type is an 16-bit mask register.\n\nC++: asmjit::TypeUtils::isMask16(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMask32(enum asmjit::TypeId) file: line:230
	M("asmjit::TypeUtils").def("isMask32", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMask32, "Tests whether a given type is an 32-bit mask register.\n\nC++: asmjit::TypeUtils::isMask32(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMask64(enum asmjit::TypeId) file: line:232
	M("asmjit::TypeUtils").def("isMask64", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMask64, "Tests whether a given type is an 64-bit mask register.\n\nC++: asmjit::TypeUtils::isMask64(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMmx(enum asmjit::TypeId) file: line:237
	M("asmjit::TypeUtils").def("isMmx", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMmx, "Tests whether a given type is an MMX register.\n\n \n MMX functionality is in general deprecated on X86 architecture. AsmJit provides it just for completeness.\n\nC++: asmjit::TypeUtils::isMmx(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMmx32(enum asmjit::TypeId) file: line:241
	M("asmjit::TypeUtils").def("isMmx32", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMmx32, "Tests whether a given type is an MMX register, which only uses the low 32 bits of data (only specific cases).\n\n \n MMX functionality is in general deprecated on X86 architecture. AsmJit provides it just for completeness.\n\nC++: asmjit::TypeUtils::isMmx32(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isMmx64(enum asmjit::TypeId) file: line:245
	M("asmjit::TypeUtils").def("isMmx64", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isMmx64, "Tests whether a given type is an MMX register, which uses 64 bits of data (default).\n\n \n MMX functionality is in general deprecated on X86 architecture. AsmJit provides it just for completeness.\n\nC++: asmjit::TypeUtils::isMmx64(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isVec(enum asmjit::TypeId) file: line:248
	M("asmjit::TypeUtils").def("isVec", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isVec, "Tests whether a given type is a vector register of any size.\n\nC++: asmjit::TypeUtils::isVec(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isVec32(enum asmjit::TypeId) file: line:250
	M("asmjit::TypeUtils").def("isVec32", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isVec32, "Tests whether a given type is a 32-bit or 32-bit view of a vector register.\n\nC++: asmjit::TypeUtils::isVec32(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isVec64(enum asmjit::TypeId) file: line:252
	M("asmjit::TypeUtils").def("isVec64", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isVec64, "Tests whether a given type is a 64-bit or 64-bit view of a vector register.\n\nC++: asmjit::TypeUtils::isVec64(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isVec128(enum asmjit::TypeId) file: line:254
	M("asmjit::TypeUtils").def("isVec128", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isVec128, "Tests whether a given type is a 128-bit or 128-bit view of a vector register.\n\nC++: asmjit::TypeUtils::isVec128(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isVec256(enum asmjit::TypeId) file: line:256
	M("asmjit::TypeUtils").def("isVec256", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isVec256, "Tests whether a given type is a 256-bit or 256-bit view of a vector register.\n\nC++: asmjit::TypeUtils::isVec256(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::isVec512(enum asmjit::TypeId) file: line:258
	M("asmjit::TypeUtils").def("isVec512", (bool (*)(enum asmjit::TypeId)) &asmjit::TypeUtils::isVec512, "Tests whether a given type is a 512-bit or 512-bit view of a vector register.\n\nC++: asmjit::TypeUtils::isVec512(enum asmjit::TypeId) --> bool", pybind11::arg("typeId"));

	// asmjit::TypeUtils::TypeCategory file: line:261
	pybind11::enum_<asmjit::TypeUtils::TypeCategory>(M("asmjit::TypeUtils"), "TypeCategory", pybind11::arithmetic(), "")
		.value("kTypeCategoryUnknown", asmjit::TypeUtils::kTypeCategoryUnknown)
		.value("kTypeCategoryEnum", asmjit::TypeUtils::kTypeCategoryEnum)
		.value("kTypeCategoryIntegral", asmjit::TypeUtils::kTypeCategoryIntegral)
		.value("kTypeCategoryFloatingPoint", asmjit::TypeUtils::kTypeCategoryFloatingPoint)
		.value("kTypeCategoryFunction", asmjit::TypeUtils::kTypeCategoryFunction)
		.export_values();

;

	{ // asmjit::TypeUtils::TypeIdOfT_ByCategory file: line:288
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT_ByCategory<float,asmjit::TypeUtils::kTypeCategoryFloatingPoint>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT_ByCategory<float,asmjit::TypeUtils::kTypeCategoryFloatingPoint>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_ByCategory_float_asmjit_TypeUtils_kTypeCategoryFloatingPoint_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT_ByCategory<float,asmjit::TypeUtils::kTypeCategoryFloatingPoint>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT_ByCategory file: line:288
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT_ByCategory<double,asmjit::TypeUtils::kTypeCategoryFloatingPoint>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT_ByCategory<double,asmjit::TypeUtils::kTypeCategoryFloatingPoint>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_ByCategory_double_asmjit_TypeUtils_kTypeCategoryFloatingPoint_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT_ByCategory<double,asmjit::TypeUtils::kTypeCategoryFloatingPoint>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:318
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<float>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<float>>, asmjit::TypeUtils::TypeIdOfT_ByCategory<float,asmjit::TypeUtils::kTypeCategoryFloatingPoint>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_float_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<float>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:318
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<double>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<double>>, asmjit::TypeUtils::TypeIdOfT_ByCategory<double,asmjit::TypeUtils::kTypeCategoryFloatingPoint>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_double_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<double>(); } ) );
	}
	// asmjit::TypeUtils::deabstractDeltaOfSize(unsigned int) file: line:363
	M("asmjit::TypeUtils").def("deabstractDeltaOfSize", (unsigned int (*)(unsigned int)) &asmjit::TypeUtils::deabstractDeltaOfSize, "Returns offset needed to convert a `kIntPtr` and `kUIntPtr` TypeId into a type that matches `registerSize`\n (general-purpose register size). If you find such TypeId it's then only about adding the offset to it.\n\n For example:\n\n ```\n uint32_t registerSize = /* 4 or 8 */;\n uint32_t deabstractDelta = TypeUtils::deabstractDeltaOfSize(registerSize);\n\n TypeId typeId = 'some type-id';\n\n // Normalize some typeId into a non-abstract typeId.\n if (TypeUtils::isAbstract(typeId)) typeId += deabstractDelta;\n\n // The same, but by using TypeUtils::deabstract() function.\n typeId = TypeUtils::deabstract(typeId, deabstractDelta);\n ```\n\nC++: asmjit::TypeUtils::deabstractDeltaOfSize(unsigned int) --> unsigned int", pybind11::arg("registerSize"));

}
