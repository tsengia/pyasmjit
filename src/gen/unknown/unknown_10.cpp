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

void bind_unknown_unknown_10(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<void>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<void>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_void_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<void>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Bool>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Bool>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_Bool_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Bool>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int8>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int8>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_Int8_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int8>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt8>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt8>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_UInt8_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt8>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int16>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int16>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_Int16_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int16>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt16>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt16>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_UInt16_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt16>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int32>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int32>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_Int32_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int32>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt32>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt32>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_UInt32_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt32>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int64>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int64>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_Int64_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Int64>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt64>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt64>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_UInt64_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UInt64>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::IntPtr>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::IntPtr>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_IntPtr_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::IntPtr>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UIntPtr>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UIntPtr>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_UIntPtr_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::UIntPtr>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Float32>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Float32>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_Float32_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Float32>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Float64>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Float64>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_Type_Float64_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::Type::Float64>(); } ) );
	}
}
