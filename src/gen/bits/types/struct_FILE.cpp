#include <cstdio>
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

void bind_bits_types_struct_FILE(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // _IO_FILE file:bits/types/struct_FILE.h line:49
		pybind11::class_<_IO_FILE, std::shared_ptr<_IO_FILE>> cl(M(""), "_IO_FILE", "");
		cl.def( pybind11::init( [](){ return new _IO_FILE(); } ) );
		cl.def_readwrite("_flags", &_IO_FILE::_flags);
		cl.def_readwrite("_fileno", &_IO_FILE::_fileno);
		cl.def_readwrite("_flags2", &_IO_FILE::_flags2);
		cl.def_readwrite("_old_offset", &_IO_FILE::_old_offset);
		cl.def_readwrite("_cur_column", &_IO_FILE::_cur_column);
		cl.def_readwrite("_vtable_offset", &_IO_FILE::_vtable_offset);
		cl.def_readwrite("_offset", &_IO_FILE::_offset);
		cl.def_readwrite("__pad5", &_IO_FILE::__pad5);
		cl.def_readwrite("_mode", &_IO_FILE::_mode);
	}
}
