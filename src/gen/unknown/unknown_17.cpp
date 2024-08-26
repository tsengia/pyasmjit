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

// asmjit::ErrorHandler file: line:186
struct PyCallBack_asmjit_ErrorHandler : public asmjit::ErrorHandler {
	using asmjit::ErrorHandler::ErrorHandler;

	void handleError(unsigned int a0, const char * a1, class asmjit::BaseEmitter * a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::ErrorHandler *>(this), "handleError");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return ErrorHandler::handleError(a0, a1, a2);
	}
};

void bind_unknown_unknown_17(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::CodeBufferFlags file: line:18
	pybind11::enum_<asmjit::CodeBufferFlags>(M("asmjit"), "CodeBufferFlags", "Flags used by ")
		.value("kNone", asmjit::CodeBufferFlags::kNone)
		.value("kIsExternal", asmjit::CodeBufferFlags::kIsExternal)
		.value("kIsFixed", asmjit::CodeBufferFlags::kIsFixed);

;

	{ // asmjit::CodeBuffer file: line:29
		pybind11::class_<asmjit::CodeBuffer, std::shared_ptr<asmjit::CodeBuffer>> cl(M("asmjit"), "CodeBuffer", "Code or data buffer.");
		cl.def( pybind11::init( [](){ return new asmjit::CodeBuffer(); } ) );



		cl.def("__getitem__", (unsigned char & (asmjit::CodeBuffer::*)(unsigned long)) &asmjit::CodeBuffer::operator[], "Returns a reference to the byte at the given `index`.\n\nC++: asmjit::CodeBuffer::operator[](unsigned long) --> unsigned char &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("flags", (enum asmjit::CodeBufferFlags (asmjit::CodeBuffer::*)() const) &asmjit::CodeBuffer::flags, "Returns code buffer flags.\n\nC++: asmjit::CodeBuffer::flags() const --> enum asmjit::CodeBufferFlags");
		cl.def("hasFlag", (bool (asmjit::CodeBuffer::*)(enum asmjit::CodeBufferFlags) const) &asmjit::CodeBuffer::hasFlag, "Tests whether the code buffer has the given `flag` set.\n\nC++: asmjit::CodeBuffer::hasFlag(enum asmjit::CodeBufferFlags) const --> bool", pybind11::arg("flag"));
		cl.def("isFixed", (bool (asmjit::CodeBuffer::*)() const) &asmjit::CodeBuffer::isFixed, "Tests whether this code buffer has a fixed size.\n\n Fixed size means that the code buffer is fixed and cannot grow.\n\nC++: asmjit::CodeBuffer::isFixed() const --> bool");
		cl.def("isExternal", (bool (asmjit::CodeBuffer::*)() const) &asmjit::CodeBuffer::isExternal, "Tests whether the data in this code buffer is external.\n\n External data can only be provided by users, it's never used by AsmJit.\n\nC++: asmjit::CodeBuffer::isExternal() const --> bool");
		cl.def("isAllocated", (bool (asmjit::CodeBuffer::*)() const) &asmjit::CodeBuffer::isAllocated, "Tests whether the data in this code buffer is allocated (non-null).\n\nC++: asmjit::CodeBuffer::isAllocated() const --> bool");
		cl.def("empty", (bool (asmjit::CodeBuffer::*)() const) &asmjit::CodeBuffer::empty, "Tests whether the code buffer is empty.\n\nC++: asmjit::CodeBuffer::empty() const --> bool");
		cl.def("size", (unsigned long (asmjit::CodeBuffer::*)() const) &asmjit::CodeBuffer::size, "Returns the size of the data.\n\nC++: asmjit::CodeBuffer::size() const --> unsigned long");
		cl.def("capacity", (unsigned long (asmjit::CodeBuffer::*)() const) &asmjit::CodeBuffer::capacity, "Returns the capacity of the data.\n\nC++: asmjit::CodeBuffer::capacity() const --> unsigned long");
		cl.def("data", (unsigned char * (asmjit::CodeBuffer::*)()) &asmjit::CodeBuffer::data, "Returns the pointer to the data the buffer references.\n\nC++: asmjit::CodeBuffer::data() --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("begin", (unsigned char * (asmjit::CodeBuffer::*)()) &asmjit::CodeBuffer::begin, "\\{\n\nC++: asmjit::CodeBuffer::begin() --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("end", (unsigned char * (asmjit::CodeBuffer::*)()) &asmjit::CodeBuffer::end, "C++: asmjit::CodeBuffer::end() --> unsigned char *", pybind11::return_value_policy::automatic);
	}
	{ // asmjit::ErrorHandler file: line:186
		pybind11::class_<asmjit::ErrorHandler, std::shared_ptr<asmjit::ErrorHandler>, PyCallBack_asmjit_ErrorHandler> cl(M("asmjit"), "ErrorHandler", "Error handler can be used to override the default behavior of error handling.\n\n It's available to all classes that inherit `BaseEmitter`. Override  to implement\n your own error handler.\n\n The following use-cases are supported:\n\n   - Record the error and continue code generation. This is the simplest approach that can be used to at least log\n     possible errors.\n   - Throw an exception. AsmJit doesn't use exceptions and is completely exception-safe, but it's perfectly legal\n     to throw an exception from the error handler.\n   - Use plain old C's `setjmp()` and `longjmp()`. Asmjit always puts Assembler, Builder and Compiler to\n     a consistent state before calling  so `longjmp()` can be used without issues to cancel the\n     code generation if an error occurred. This method can be used if exception handling in your project is turned\n     off and you still want some comfort. In most cases it should be safe as AsmJit uses  memory and the\n     ownership of memory it allocates always ends with the instance that allocated it. If using this approach please\n     never jump outside the life-time of  and \n\n  can be attached to  or  which has a priority. The example below\n uses error handler that just prints the error, but lets AsmJit continue:\n\n ```\n // Error Handling #1 - Logging and returning Error.\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Error handler that just prints the error and lets AsmJit ignore it.\n class SimpleErrorHandler : public ErrorHandler {\n public:\n   Error err;\n\n   inline SimpleErrorHandler() : err(kErrorOk) {}\n\n   void handleError(Error err, const char* message, BaseEmitter* origin) override {\n     this->err = err;\n     fprintf(stderr, \"ERROR: %s\\n\", message);\n   }\n };\n\n int main() {\n   JitRuntime rt;\n   SimpleErrorHandler eh;\n\n   CodeHolder code;\n   code.init(rt.environment(), rt.cpuFeatures());\n   code.setErrorHandler(&eh);\n\n   // Try to emit instruction that doesn't exist.\n   x86::Assembler a(&code);\n   a.emit(x86::Inst::kIdMov, x86::xmm0, x86::xmm1);\n\n   if (eh.err) {\n     // Assembler failed!\n     return 1;\n   }\n\n   return 0;\n }\n ```\n\n If error happens during instruction emitting / encoding the assembler behaves transactionally - the output buffer\n won't advance if encoding failed, thus either a fully encoded instruction or nothing is emitted. The error handling\n shown above is useful, but it's still not the best way of dealing with errors in AsmJit. The following example\n shows how to use exception handling to handle errors in a more C++ way:\n\n ```\n // Error Handling #2 - Throwing an exception.\n #include <asmjit/x86.h>\n #include <exception>\n #include <string>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Error handler that throws a user-defined `AsmJitException`.\n class AsmJitException : public std::exception {\n public:\n   Error err;\n   std::string message;\n\n   AsmJitException(Error err, const char* message) noexcept\n     : err(err),\n       message(message) {}\n\n   const char* what() const noexcept override { return message.c_str(); }\n };\n\n class ThrowableErrorHandler : public ErrorHandler {\n public:\n   // Throw is possible, functions that use ErrorHandler are never 'noexcept'.\n   void handleError(Error err, const char* message, BaseEmitter* origin) override {\n     throw AsmJitException(err, message);\n   }\n };\n\n int main() {\n   JitRuntime rt;\n   ThrowableErrorHandler eh;\n\n   CodeHolder code;\n   code.init(rt.environment(), rt.cpuFeatures());\n   code.setErrorHandler(&eh);\n\n   x86::Assembler a(&code);\n\n   // Try to emit instruction that doesn't exist.\n   try {\n     a.emit(x86::Inst::kIdMov, x86::xmm0, x86::xmm1);\n   }\n   catch (const AsmJitException& ex) {\n     printf(\"EXCEPTION THROWN: %s\\n\", ex.what());\n     return 1;\n   }\n\n   return 0;\n }\n ```\n\n If C++ exceptions are not what you like or your project turns off them completely there is still a way of reducing\n the error handling to a minimum by using a standard setjmp/longjmp approach. AsmJit is exception-safe and cleans\n up everything before calling the ErrorHandler, so any approach is safe. You can simply jump from the error handler\n without causing any side-effects or memory leaks. The following example demonstrates how it could be done:\n\n ```\n // Error Handling #3 - Using setjmp/longjmp if exceptions are not allowed.\n #include <asmjit/x86.h>\n #include <setjmp.h>\n #include <stdio.h>\n\n class LongJmpErrorHandler : public asmjit::ErrorHandler {\n public:\n   inline LongJmpErrorHandler() : err(asmjit::kErrorOk) {}\n\n   void handleError(asmjit::Error err, const char* message, asmjit::BaseEmitter* origin) override {\n     this->err = err;\n     longjmp(state, 1);\n   }\n\n   jmp_buf state;\n   asmjit::Error err;\n };\n\n int main(int argc, char* argv[]) {\n   using namespace asmjit;\n\n   JitRuntime rt;\n   LongJmpErrorHandler eh;\n\n   CodeHolder code;\n   code.init(rt.environment(), rt.cpuFeatures());\n   code.setErrorHandler(&eh);\n\n   x86::Assembler a(&code);\n\n   if (!setjmp(eh.state)) {\n     // Try to emit instruction that doesn't exist.\n     a.emit(x86::Inst::kIdMov, x86::xmm0, x86::xmm1);\n   }\n   else {\n     Error err = eh.err;\n     printf(\"ASMJIT ERROR: 0x%08X [%s]\\n\", err, DebugUtils::errorAsString(err));\n   }\n\n   return 0;\n }\n ```");
		cl.def( pybind11::init( [](){ return new asmjit::ErrorHandler(); }, [](){ return new PyCallBack_asmjit_ErrorHandler(); } ) );
		cl.def("handleError", (void (asmjit::ErrorHandler::*)(unsigned int, const char *, class asmjit::BaseEmitter *)) &asmjit::ErrorHandler::handleError, "Error handler (must be reimplemented).\n\n Error handler is called after an error happened and before it's propagated to the caller. There are multiple\n ways how the error handler can be used:\n\n 1. User-based error handling without throwing exception or using C's`longjmp()`. This is for users that don't\n     use exceptions and want customized error handling.\n\n 2. Throwing an exception. AsmJit doesn't use exceptions and is completely exception-safe, but you can throw\n     exception from your error handler if this way is the preferred way of handling errors in your project.\n\n 3. Using plain old C's `setjmp()` and `longjmp()`. Asmjit always puts `BaseEmitter` to a consistent state before\n    calling `handleError()`  so `longjmp()` can be used without any issues to cancel the code generation if an\n    error occurred. There is no difference between exceptions and `longjmp()` from AsmJit's perspective, however,\n    never jump outside of `CodeHolder` and `BaseEmitter` scope as you would leak memory.\n\nC++: asmjit::ErrorHandler::handleError(unsigned int, const char *, class asmjit::BaseEmitter *) --> void", pybind11::arg("err"), pybind11::arg("message"), pybind11::arg("origin"));
		cl.def("assign", (class asmjit::ErrorHandler & (asmjit::ErrorHandler::*)(const class asmjit::ErrorHandler &)) &asmjit::ErrorHandler::operator=, "C++: asmjit::ErrorHandler::operator=(const class asmjit::ErrorHandler &) --> class asmjit::ErrorHandler &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	// asmjit::StringFormatFlags file: line:18
	pybind11::enum_<asmjit::StringFormatFlags>(M("asmjit"), "StringFormatFlags", "Format flags used by  API.")
		.value("kNone", asmjit::StringFormatFlags::kNone)
		.value("kShowSign", asmjit::StringFormatFlags::kShowSign)
		.value("kShowSpace", asmjit::StringFormatFlags::kShowSpace)
		.value("kAlternate", asmjit::StringFormatFlags::kAlternate)
		.value("kSigned", asmjit::StringFormatFlags::kSigned);

;

	{ // asmjit::FixedString file: line:34
		pybind11::class_<asmjit::FixedString<16UL>, std::shared_ptr<asmjit::FixedString<16UL>>> cl(M("asmjit"), "FixedString_16UL_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::FixedString<16UL>(); } ) );
		cl.def( pybind11::init( [](asmjit::FixedString<16UL> const &o){ return new asmjit::FixedString<16UL>(o); } ) );
		cl.def("equals", (bool (asmjit::FixedString<16UL>::*)(const char *) const) &asmjit::FixedString<16>::equals, "C++: asmjit::FixedString<16>::equals(const char *) const --> bool", pybind11::arg("other"));
		cl.def("assign", (union asmjit::FixedString<16> & (asmjit::FixedString<16UL>::*)(const union asmjit::FixedString<16> &)) &asmjit::FixedString<16>::operator=, "C++: asmjit::FixedString<16>::operator=(const union asmjit::FixedString<16> &) --> union asmjit::FixedString<16> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // asmjit::FixedString file: line:34
		pybind11::class_<asmjit::FixedString<64UL>, std::shared_ptr<asmjit::FixedString<64UL>>> cl(M("asmjit"), "FixedString_64UL_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::FixedString<64UL>(); } ) );
		cl.def( pybind11::init( [](asmjit::FixedString<64UL> const &o){ return new asmjit::FixedString<64UL>(o); } ) );
		cl.def("equals", (bool (asmjit::FixedString<64UL>::*)(const char *) const) &asmjit::FixedString<64>::equals, "C++: asmjit::FixedString<64>::equals(const char *) const --> bool", pybind11::arg("other"));
		cl.def("assign", (union asmjit::FixedString<64> & (asmjit::FixedString<64UL>::*)(const union asmjit::FixedString<64> &)) &asmjit::FixedString<64>::operator=, "C++: asmjit::FixedString<64>::operator=(const union asmjit::FixedString<64> &) --> union asmjit::FixedString<64> &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // asmjit::FixedString file: line:34
		pybind11::class_<asmjit::FixedString<36UL>, std::shared_ptr<asmjit::FixedString<36UL>>> cl(M("asmjit"), "FixedString_36UL_t", "");
		cl.def( pybind11::init( [](){ return new asmjit::FixedString<36UL>(); } ) );
		cl.def("equals", (bool (asmjit::FixedString<36UL>::*)(const char *) const) &asmjit::FixedString<36>::equals, "C++: asmjit::FixedString<36>::equals(const char *) const --> bool", pybind11::arg("other"));
	}
	{ // asmjit::String file: line:80
		pybind11::class_<asmjit::String, std::shared_ptr<asmjit::String>> cl(M("asmjit"), "String", "A simple non-reference counted string that uses small string optimization (SSO).\n\n This string has 3 allocation possibilities:\n\n   1. Small    - embedded buffer is used for up to `kSSOCapacity` characters. This should handle most small\n                 strings and thus avoid dynamic memory allocation for most use-cases.\n\n   2. Large    - string that doesn't fit into an embedded buffer (or string that was truncated from a larger\n                 buffer) and is owned by AsmJit. When you destroy the string AsmJit would automatically\n                 release the large buffer.\n\n   3. External - like Large (2), however, the large buffer is not owned by AsmJit and won't be released when\n                 the string is destroyed or reallocated. This is mostly useful for working with larger temporary\n                 strings allocated on stack or with immutable strings.");
		cl.def( pybind11::init( [](){ return new asmjit::String(); } ) );

		pybind11::enum_<asmjit::String::ModifyOp>(cl, "ModifyOp", "String operation.")
			.value("kAssign", asmjit::String::ModifyOp::kAssign)
			.value("kAppend", asmjit::String::ModifyOp::kAppend);


		pybind11::enum_<asmjit::String::Type>(cl, "Type", pybind11::arithmetic(), "String type.")
			.value("kTypeLarge", asmjit::String::kTypeLarge)
			.value("kTypeExternal", asmjit::String::kTypeExternal)
			.export_values();

		cl.def("reset", (unsigned int (asmjit::String::*)()) &asmjit::String::reset, "Reset the string into a construction state.\n\nC++: asmjit::String::reset() --> unsigned int");
		cl.def("__eq__", (bool (asmjit::String::*)(const char *) const) &asmjit::String::operator==, "C++: asmjit::String::operator==(const char *) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (asmjit::String::*)(const char *) const) &asmjit::String::operator!=, "C++: asmjit::String::operator!=(const char *) const --> bool", pybind11::arg("other"));
		cl.def("__eq__", (bool (asmjit::String::*)(const class asmjit::String &) const) &asmjit::String::operator==, "C++: asmjit::String::operator==(const class asmjit::String &) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (asmjit::String::*)(const class asmjit::String &) const) &asmjit::String::operator!=, "C++: asmjit::String::operator!=(const class asmjit::String &) const --> bool", pybind11::arg("other"));
		cl.def("isExternal", (bool (asmjit::String::*)() const) &asmjit::String::isExternal, "\\{\n\nC++: asmjit::String::isExternal() const --> bool");
		cl.def("isLargeOrExternal", (bool (asmjit::String::*)() const) &asmjit::String::isLargeOrExternal, "C++: asmjit::String::isLargeOrExternal() const --> bool");
		cl.def("empty", (bool (asmjit::String::*)() const) &asmjit::String::empty, "Tests whether the string is empty.\n\nC++: asmjit::String::empty() const --> bool");
		cl.def("size", (unsigned long (asmjit::String::*)() const) &asmjit::String::size, "Returns the size of the string.\n\nC++: asmjit::String::size() const --> unsigned long");
		cl.def("capacity", (unsigned long (asmjit::String::*)() const) &asmjit::String::capacity, "Returns the capacity of the string.\n\nC++: asmjit::String::capacity() const --> unsigned long");
		cl.def("data", (char * (asmjit::String::*)()) &asmjit::String::data, "Returns the data of the string.\n\nC++: asmjit::String::data() --> char *", pybind11::return_value_policy::automatic);
		cl.def("start", (char * (asmjit::String::*)()) &asmjit::String::start, "C++: asmjit::String::start() --> char *", pybind11::return_value_policy::automatic);
		cl.def("end", (char * (asmjit::String::*)()) &asmjit::String::end, "C++: asmjit::String::end() --> char *", pybind11::return_value_policy::automatic);
		cl.def("swap", (void (asmjit::String::*)(class asmjit::String &)) &asmjit::String::swap, "Swaps the content of this string with `other`.\n\nC++: asmjit::String::swap(class asmjit::String &) --> void", pybind11::arg("other"));
		cl.def("clear", (unsigned int (asmjit::String::*)()) &asmjit::String::clear, "Clears the content of the string.\n\nC++: asmjit::String::clear() --> unsigned int");
		cl.def("prepare", (char * (asmjit::String::*)(enum asmjit::String::ModifyOp, unsigned long)) &asmjit::String::prepare, "C++: asmjit::String::prepare(enum asmjit::String::ModifyOp, unsigned long) --> char *", pybind11::return_value_policy::automatic, pybind11::arg("op"), pybind11::arg("size"));











		cl.def("assign", [](asmjit::String &o, const char * a0) -> unsigned int { return o.assign(a0); }, "", pybind11::arg("data"));
		cl.def("assign", (unsigned int (asmjit::String::*)(const char *, unsigned long)) &asmjit::String::assign, "Replaces the current of the string with `data` of the given `size`.\n\n Null terminated strings can set `size` to `SIZE_MAX`.\n\nC++: asmjit::String::assign(const char *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("assign", (unsigned int (asmjit::String::*)(const class asmjit::String &)) &asmjit::String::assign, "Replaces the current of the string with `other` string.\n\nC++: asmjit::String::assign(const class asmjit::String &) --> unsigned int", pybind11::arg("other"));
		cl.def("assign", (unsigned int (asmjit::String::*)(char)) &asmjit::String::assign, "Replaces the current of the string by a single `c` character.\n\nC++: asmjit::String::assign(char) --> unsigned int", pybind11::arg("c"));
		cl.def("assignChars", (unsigned int (asmjit::String::*)(char, unsigned long)) &asmjit::String::assignChars, "Replaces the current of the string by a `c` character, repeated `n` times.\n\nC++: asmjit::String::assignChars(char, unsigned long) --> unsigned int", pybind11::arg("c"), pybind11::arg("n"));
		cl.def("assignInt", [](asmjit::String &o, long const & a0) -> unsigned int { return o.assignInt(a0); }, "", pybind11::arg("i"));
		cl.def("assignInt", [](asmjit::String &o, long const & a0, unsigned int const & a1) -> unsigned int { return o.assignInt(a0, a1); }, "", pybind11::arg("i"), pybind11::arg("base"));
		cl.def("assignInt", [](asmjit::String &o, long const & a0, unsigned int const & a1, unsigned long const & a2) -> unsigned int { return o.assignInt(a0, a1, a2); }, "", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"));
		cl.def("assignInt", (unsigned int (asmjit::String::*)(long, unsigned int, unsigned long, enum asmjit::StringFormatFlags)) &asmjit::String::assignInt, "Replaces the current of the string by a formatted integer `i` (signed).\n\nC++: asmjit::String::assignInt(long, unsigned int, unsigned long, enum asmjit::StringFormatFlags) --> unsigned int", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"), pybind11::arg("flags"));
		cl.def("assignUInt", [](asmjit::String &o, unsigned long const & a0) -> unsigned int { return o.assignUInt(a0); }, "", pybind11::arg("i"));
		cl.def("assignUInt", [](asmjit::String &o, unsigned long const & a0, unsigned int const & a1) -> unsigned int { return o.assignUInt(a0, a1); }, "", pybind11::arg("i"), pybind11::arg("base"));
		cl.def("assignUInt", [](asmjit::String &o, unsigned long const & a0, unsigned int const & a1, unsigned long const & a2) -> unsigned int { return o.assignUInt(a0, a1, a2); }, "", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"));
		cl.def("assignUInt", (unsigned int (asmjit::String::*)(unsigned long, unsigned int, unsigned long, enum asmjit::StringFormatFlags)) &asmjit::String::assignUInt, "Replaces the current of the string by a formatted integer `i` (unsigned).\n\nC++: asmjit::String::assignUInt(unsigned long, unsigned int, unsigned long, enum asmjit::StringFormatFlags) --> unsigned int", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"), pybind11::arg("flags"));
		cl.def("assignHex", [](asmjit::String &o, const void * a0, unsigned long const & a1) -> unsigned int { return o.assignHex(a0, a1); }, "", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("assignHex", (unsigned int (asmjit::String::*)(const void *, unsigned long, char)) &asmjit::String::assignHex, "Replaces the current of the string by the given `data` converted to a HEX string.\n\nC++: asmjit::String::assignHex(const void *, unsigned long, char) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"), pybind11::arg("separator"));
		cl.def("append", [](asmjit::String &o, const char * a0) -> unsigned int { return o.append(a0); }, "", pybind11::arg("str"));
		cl.def("append", (unsigned int (asmjit::String::*)(const char *, unsigned long)) &asmjit::String::append, "Appends `str` having the given size `size` to the string.\n\n Null terminated strings can set `size` to `SIZE_MAX`.\n\nC++: asmjit::String::append(const char *, unsigned long) --> unsigned int", pybind11::arg("str"), pybind11::arg("size"));
		cl.def("append", (unsigned int (asmjit::String::*)(const class asmjit::String &)) &asmjit::String::append, "Appends `other` string to this string.\n\nC++: asmjit::String::append(const class asmjit::String &) --> unsigned int", pybind11::arg("other"));
		cl.def("append", (unsigned int (asmjit::String::*)(char)) &asmjit::String::append, "Appends a single `c` character.\n\nC++: asmjit::String::append(char) --> unsigned int", pybind11::arg("c"));
		cl.def("appendChars", (unsigned int (asmjit::String::*)(char, unsigned long)) &asmjit::String::appendChars, "Appends `c` character repeated `n` times.\n\nC++: asmjit::String::appendChars(char, unsigned long) --> unsigned int", pybind11::arg("c"), pybind11::arg("n"));
		cl.def("appendInt", [](asmjit::String &o, long const & a0) -> unsigned int { return o.appendInt(a0); }, "", pybind11::arg("i"));
		cl.def("appendInt", [](asmjit::String &o, long const & a0, unsigned int const & a1) -> unsigned int { return o.appendInt(a0, a1); }, "", pybind11::arg("i"), pybind11::arg("base"));
		cl.def("appendInt", [](asmjit::String &o, long const & a0, unsigned int const & a1, unsigned long const & a2) -> unsigned int { return o.appendInt(a0, a1, a2); }, "", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"));
		cl.def("appendInt", (unsigned int (asmjit::String::*)(long, unsigned int, unsigned long, enum asmjit::StringFormatFlags)) &asmjit::String::appendInt, "Appends a formatted integer `i` (signed).\n\nC++: asmjit::String::appendInt(long, unsigned int, unsigned long, enum asmjit::StringFormatFlags) --> unsigned int", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"), pybind11::arg("flags"));
		cl.def("appendUInt", [](asmjit::String &o, unsigned long const & a0) -> unsigned int { return o.appendUInt(a0); }, "", pybind11::arg("i"));
		cl.def("appendUInt", [](asmjit::String &o, unsigned long const & a0, unsigned int const & a1) -> unsigned int { return o.appendUInt(a0, a1); }, "", pybind11::arg("i"), pybind11::arg("base"));
		cl.def("appendUInt", [](asmjit::String &o, unsigned long const & a0, unsigned int const & a1, unsigned long const & a2) -> unsigned int { return o.appendUInt(a0, a1, a2); }, "", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"));
		cl.def("appendUInt", (unsigned int (asmjit::String::*)(unsigned long, unsigned int, unsigned long, enum asmjit::StringFormatFlags)) &asmjit::String::appendUInt, "Appends a formatted integer `i` (unsigned).\n\nC++: asmjit::String::appendUInt(unsigned long, unsigned int, unsigned long, enum asmjit::StringFormatFlags) --> unsigned int", pybind11::arg("i"), pybind11::arg("base"), pybind11::arg("width"), pybind11::arg("flags"));
		cl.def("appendHex", [](asmjit::String &o, const void * a0, unsigned long const & a1) -> unsigned int { return o.appendHex(a0, a1); }, "", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("appendHex", (unsigned int (asmjit::String::*)(const void *, unsigned long, char)) &asmjit::String::appendHex, "Appends the given `data` converted to a HEX string.\n\nC++: asmjit::String::appendHex(const void *, unsigned long, char) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"), pybind11::arg("separator"));
		cl.def("padEnd", [](asmjit::String &o, unsigned long const & a0) -> unsigned int { return o.padEnd(a0); }, "", pybind11::arg("n"));
		cl.def("padEnd", (unsigned int (asmjit::String::*)(unsigned long, char)) &asmjit::String::padEnd, "C++: asmjit::String::padEnd(unsigned long, char) --> unsigned int", pybind11::arg("n"), pybind11::arg("c"));
		cl.def("truncate", (unsigned int (asmjit::String::*)(unsigned long)) &asmjit::String::truncate, "Truncate the string length into `newSize`.\n\nC++: asmjit::String::truncate(unsigned long) --> unsigned int", pybind11::arg("newSize"));
		cl.def("equals", [](asmjit::String const &o, const char * a0) -> bool { return o.equals(a0); }, "", pybind11::arg("other"));
		cl.def("equals", (bool (asmjit::String::*)(const char *, unsigned long) const) &asmjit::String::equals, "C++: asmjit::String::equals(const char *, unsigned long) const --> bool", pybind11::arg("other"), pybind11::arg("size"));
		cl.def("equals", (bool (asmjit::String::*)(const class asmjit::String &) const) &asmjit::String::equals, "C++: asmjit::String::equals(const class asmjit::String &) const --> bool", pybind11::arg("other"));



		{ // asmjit::String::Raw file: line:106
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::String::Raw, std::shared_ptr<asmjit::String::Raw>> cl(enclosing_class, "Raw", "");
			cl.def( pybind11::init( [](asmjit::String::Raw const &o){ return new asmjit::String::Raw(o); } ) );
			cl.def( pybind11::init( [](){ return new asmjit::String::Raw(); } ) );
			cl.def("assign", (union asmjit::String::Raw & (asmjit::String::Raw::*)(const union asmjit::String::Raw &)) &asmjit::String::Raw::operator=, "C++: asmjit::String::Raw::operator=(const union asmjit::String::Raw &) --> union asmjit::String::Raw &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::String::Small file: line:112
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::String::Small, std::shared_ptr<asmjit::String::Small>> cl(enclosing_class, "Small", "");
			cl.def( pybind11::init( [](){ return new asmjit::String::Small(); } ) );
			cl.def( pybind11::init( [](asmjit::String::Small const &o){ return new asmjit::String::Small(o); } ) );
			cl.def_readwrite("type", &asmjit::String::Small::type);
			cl.def("assign", (struct asmjit::String::Small & (asmjit::String::Small::*)(const struct asmjit::String::Small &)) &asmjit::String::Small::operator=, "C++: asmjit::String::Small::operator=(const struct asmjit::String::Small &) --> struct asmjit::String::Small &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::String::Large file: line:117
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::String::Large, std::shared_ptr<asmjit::String::Large>> cl(enclosing_class, "Large", "");
			cl.def( pybind11::init( [](){ return new asmjit::String::Large(); } ) );
			cl.def( pybind11::init( [](asmjit::String::Large const &o){ return new asmjit::String::Large(o); } ) );
			cl.def_readwrite("type", &asmjit::String::Large::type);
			cl.def_readwrite("size", &asmjit::String::Large::size);
			cl.def_readwrite("capacity", &asmjit::String::Large::capacity);
			cl.def("assign", (struct asmjit::String::Large & (asmjit::String::Large::*)(const struct asmjit::String::Large &)) &asmjit::String::Large::operator=, "C++: asmjit::String::Large::operator=(const struct asmjit::String::Large &) --> struct asmjit::String::Large &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::String::(anonymous union at extern/asmjit/src/asmjit/./core/../core/../core/string.h:125:3) file: line:125




		}

	}
}
