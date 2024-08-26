#include <sstream> // __str__
#include <type_traits>

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

void bind_std_type_traits(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::integral_constant file:type_traits line:62
		pybind11::class_<std::integral_constant<bool,true>, std::shared_ptr<std::integral_constant<bool,true>>> cl(M("std"), "integral_constant_bool_true_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<bool,true>(); } ) );
	}
	{ // std::integral_constant file:type_traits line:62
		pybind11::class_<std::integral_constant<bool,false>, std::shared_ptr<std::integral_constant<bool,false>>> cl(M("std"), "integral_constant_bool_false_t", "");
		cl.def( pybind11::init( [](){ return new std::integral_constant<bool,false>(); } ) );
	}
}
