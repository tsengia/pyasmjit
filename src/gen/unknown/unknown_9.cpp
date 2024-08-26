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

void bind_unknown_unknown_9(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::Type::Bool file: line:384
		pybind11::class_<asmjit::Type::Bool, std::shared_ptr<asmjit::Type::Bool>> cl(M("asmjit::Type"), "Bool", "bool as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::Bool(); } ) );
	}
	{ // asmjit::Type::Int8 file: line:386
		pybind11::class_<asmjit::Type::Int8, std::shared_ptr<asmjit::Type::Int8>> cl(M("asmjit::Type"), "Int8", "int8_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::Int8(); } ) );
	}
	{ // asmjit::Type::UInt8 file: line:388
		pybind11::class_<asmjit::Type::UInt8, std::shared_ptr<asmjit::Type::UInt8>> cl(M("asmjit::Type"), "UInt8", "uint8_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::UInt8(); } ) );
	}
	{ // asmjit::Type::Int16 file: line:390
		pybind11::class_<asmjit::Type::Int16, std::shared_ptr<asmjit::Type::Int16>> cl(M("asmjit::Type"), "Int16", "int16_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::Int16(); } ) );
	}
	{ // asmjit::Type::UInt16 file: line:392
		pybind11::class_<asmjit::Type::UInt16, std::shared_ptr<asmjit::Type::UInt16>> cl(M("asmjit::Type"), "UInt16", "uint16_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::UInt16(); } ) );
	}
	{ // asmjit::Type::Int32 file: line:394
		pybind11::class_<asmjit::Type::Int32, std::shared_ptr<asmjit::Type::Int32>> cl(M("asmjit::Type"), "Int32", "int32_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::Int32(); } ) );
	}
	{ // asmjit::Type::UInt32 file: line:396
		pybind11::class_<asmjit::Type::UInt32, std::shared_ptr<asmjit::Type::UInt32>> cl(M("asmjit::Type"), "UInt32", "uint32_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::UInt32(); } ) );
	}
	{ // asmjit::Type::Int64 file: line:398
		pybind11::class_<asmjit::Type::Int64, std::shared_ptr<asmjit::Type::Int64>> cl(M("asmjit::Type"), "Int64", "int64_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::Int64(); } ) );
	}
	{ // asmjit::Type::UInt64 file: line:400
		pybind11::class_<asmjit::Type::UInt64, std::shared_ptr<asmjit::Type::UInt64>> cl(M("asmjit::Type"), "UInt64", "uint64_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::UInt64(); } ) );
	}
	{ // asmjit::Type::IntPtr file: line:402
		pybind11::class_<asmjit::Type::IntPtr, std::shared_ptr<asmjit::Type::IntPtr>> cl(M("asmjit::Type"), "IntPtr", "intptr_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::IntPtr(); } ) );
	}
	{ // asmjit::Type::UIntPtr file: line:404
		pybind11::class_<asmjit::Type::UIntPtr, std::shared_ptr<asmjit::Type::UIntPtr>> cl(M("asmjit::Type"), "UIntPtr", "uintptr_t as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::UIntPtr(); } ) );
	}
	{ // asmjit::Type::Float32 file: line:406
		pybind11::class_<asmjit::Type::Float32, std::shared_ptr<asmjit::Type::Float32>> cl(M("asmjit::Type"), "Float32", "float as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::Float32(); } ) );
	}
	{ // asmjit::Type::Float64 file: line:408
		pybind11::class_<asmjit::Type::Float64, std::shared_ptr<asmjit::Type::Float64>> cl(M("asmjit::Type"), "Float64", "double as C++ type-name.");
		cl.def( pybind11::init( [](){ return new asmjit::Type::Float64(); } ) );
	}
}
