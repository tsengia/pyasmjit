
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

void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::DebugUtils::unused(unsigned long &) file: line:353
	M("asmjit::DebugUtils").def("unused", (void (*)(unsigned long &)) &asmjit::DebugUtils::unused<unsigned long &>, "C++: asmjit::DebugUtils::unused(unsigned long &) --> void", pybind11::arg(""));

	// asmjit::DebugUtils::errored(unsigned int) file: line:360
	M("asmjit::DebugUtils").def("errored", (unsigned int (*)(unsigned int)) &asmjit::DebugUtils::errored, "Returns the error `err` passed.\n\n Provided for debugging purposes. Putting a breakpoint inside `errored` can help with tracing the origin of any\n error reported / returned by AsmJit.\n\nC++: asmjit::DebugUtils::errored(unsigned int) --> unsigned int", pybind11::arg("err"));

	// asmjit::DebugUtils::errorAsString(unsigned int) file: line:363
	M("asmjit::DebugUtils").def("errorAsString", (const char * (*)(unsigned int)) &asmjit::DebugUtils::errorAsString, "Returns a printable version of `asmjit::Error` code.\n\nC++: asmjit::DebugUtils::errorAsString(unsigned int) --> const char *", pybind11::return_value_policy::automatic, pybind11::arg("err"));

	// asmjit::DebugUtils::debugOutput(const char *) file: line:366
	M("asmjit::DebugUtils").def("debugOutput", (void (*)(const char *)) &asmjit::DebugUtils::debugOutput, "Called to output debugging message(s).\n\nC++: asmjit::DebugUtils::debugOutput(const char *) --> void", pybind11::arg("str"));

	// asmjit::DebugUtils::assertionFailed(const char *, int, const char *) file: line:378
	M("asmjit::DebugUtils").def("assertionFailed", (void (*)(const char *, int, const char *)) &asmjit::DebugUtils::assertionFailed, "Called on assertion failure.\n\n \n Source file name where it happened.\n \n\n Line in the source file.\n \n\n Message to display.\n\n If you have problems with assertion failures a breakpoint can be put at  function\n (asmjit/core/globals.cpp). A call stack will be available when such assertion failure is triggered. AsmJit\n always returns errors on failures, assertions are a last resort and usually mean unrecoverable state due to out\n of range array access or totally invalid arguments like nullptr where a valid pointer should be provided, etc...\n\nC++: asmjit::DebugUtils::assertionFailed(const char *, int, const char *) --> void", pybind11::arg("file"), pybind11::arg("line"), pybind11::arg("msg"));

}
