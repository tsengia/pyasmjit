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

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::Globals::Init_ file: line:131
		pybind11::class_<asmjit::Globals::Init_, std::shared_ptr<asmjit::Globals::Init_>> cl(M("asmjit::Globals"), "Init_", "");
		cl.def( pybind11::init( [](){ return new asmjit::Globals::Init_(); } ) );
		cl.def( pybind11::init( [](asmjit::Globals::Init_ const &o){ return new asmjit::Globals::Init_(o); } ) );
	}
	{ // asmjit::Globals::NoInit_ file: line:132
		pybind11::class_<asmjit::Globals::NoInit_, std::shared_ptr<asmjit::Globals::NoInit_>> cl(M("asmjit::Globals"), "NoInit_", "");
		cl.def( pybind11::init( [](){ return new asmjit::Globals::NoInit_(); } ) );
		cl.def( pybind11::init( [](asmjit::Globals::NoInit_ const &o){ return new asmjit::Globals::NoInit_(o); } ) );
	}
}
