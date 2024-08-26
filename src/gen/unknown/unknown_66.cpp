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

void bind_unknown_unknown_66(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpb>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpb>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Gpb_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpb>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpw>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpw>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Gpw_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpw>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpd>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpd>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Gpd_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpd>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpq>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpq>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Gpq_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Gpq>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Mm>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Mm>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Mm_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Mm>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Xmm>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Xmm>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Xmm_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Xmm>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Ymm>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Ymm>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Ymm_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Ymm>(); } ) );
	}
	{ // asmjit::TypeUtils::TypeIdOfT file: line:416
		pybind11::class_<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Zmm>, std::shared_ptr<asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Zmm>>> cl(M("asmjit::TypeUtils"), "TypeIdOfT_asmjit_x86_Zmm_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::TypeUtils::TypeIdOfT<asmjit::x86::Zmm>(); } ) );
	}
}
