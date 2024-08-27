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

	// asmjit::Vendor file: line:23
	pybind11::enum_<asmjit::Vendor>(M("asmjit"), "Vendor", "Vendor.\n\n \n AsmJit doesn't use vendor information at the moment. It's provided for future use, if required.")
		.value("kUnknown", asmjit::Vendor::kUnknown)
		.value("kMaxValue", asmjit::Vendor::kMaxValue)
		.value("kHost", asmjit::Vendor::kHost);

;

	// asmjit::Platform file: line:40
	pybind11::enum_<asmjit::Platform>(M("asmjit"), "Platform", "Platform - runtime environment or operating system.")
		.value("kUnknown", asmjit::Platform::kUnknown)
		.value("kWindows", asmjit::Platform::kWindows)
		.value("kOther", asmjit::Platform::kOther)
		.value("kLinux", asmjit::Platform::kLinux)
		.value("kHurd", asmjit::Platform::kHurd)
		.value("kFreeBSD", asmjit::Platform::kFreeBSD)
		.value("kOpenBSD", asmjit::Platform::kOpenBSD)
		.value("kNetBSD", asmjit::Platform::kNetBSD)
		.value("kDragonFlyBSD", asmjit::Platform::kDragonFlyBSD)
		.value("kHaiku", asmjit::Platform::kHaiku)
		.value("kOSX", asmjit::Platform::kOSX)
		.value("kIOS", asmjit::Platform::kIOS)
		.value("kTVOS", asmjit::Platform::kTVOS)
		.value("kWatchOS", asmjit::Platform::kWatchOS)
		.value("kEmscripten", asmjit::Platform::kEmscripten)
		.value("kMaxValue", asmjit::Platform::kMaxValue)
		.value("kHost", asmjit::Platform::kHost);

;

	// asmjit::PlatformABI file: line:118
	pybind11::enum_<asmjit::PlatformABI>(M("asmjit"), "PlatformABI", "Platform ABI (application binary interface).")
		.value("kUnknown", asmjit::PlatformABI::kUnknown)
		.value("kMSVC", asmjit::PlatformABI::kMSVC)
		.value("kGNU", asmjit::PlatformABI::kGNU)
		.value("kAndroid", asmjit::PlatformABI::kAndroid)
		.value("kCygwin", asmjit::PlatformABI::kCygwin)
		.value("kDarwin", asmjit::PlatformABI::kDarwin)
		.value("kMaxValue", asmjit::PlatformABI::kMaxValue)
		.value("kHost", asmjit::PlatformABI::kHost);

;

	// asmjit::FloatABI file: line:155
	pybind11::enum_<asmjit::FloatABI>(M("asmjit"), "FloatABI", "Floating point ABI (ARM).")
		.value("kHardFloat", asmjit::FloatABI::kHardFloat)
		.value("kSoftFloat", asmjit::FloatABI::kSoftFloat)
		.value("kHost", asmjit::FloatABI::kHost);

;

	// asmjit::ObjectFormat file: line:172
	pybind11::enum_<asmjit::ObjectFormat>(M("asmjit"), "ObjectFormat", "Object format.\n\n \n AsmJit doesn't really use anything except  and  at\n the moment. Object file formats are provided for future extensibility and a possibility to generate object\n files at some point.")
		.value("kUnknown", asmjit::ObjectFormat::kUnknown)
		.value("kJIT", asmjit::ObjectFormat::kJIT)
		.value("kELF", asmjit::ObjectFormat::kELF)
		.value("kCOFF", asmjit::ObjectFormat::kCOFF)
		.value("kXCOFF", asmjit::ObjectFormat::kXCOFF)
		.value("kMachO", asmjit::ObjectFormat::kMachO)
		.value("kMaxValue", asmjit::ObjectFormat::kMaxValue);

;

	{ // asmjit::Environment file: line:200
		pybind11::class_<asmjit::Environment, std::shared_ptr<asmjit::Environment>> cl(M("asmjit"), "Environment", "Represents an environment, which is usually related to a \n\n Environment has usually an 'arch-subarch-vendor-os-abi' format, which is sometimes called \"Triple\" (historically\n it used to be 3 only parts) or \"Tuple\", which is a convention used by Debian Linux.\n\n AsmJit doesn't support all possible combinations or architectures and ABIs, however, it models the environment\n similarly to other compilers for future extensibility.");
		cl.def( pybind11::init( [](){ return new asmjit::Environment(); } ) );
		cl.def( pybind11::init( [](asmjit::Environment const &o){ return new asmjit::Environment(o); } ) );
		cl.def( pybind11::init( [](enum asmjit::Arch const & a0){ return new asmjit::Environment(a0); } ), "doc" , pybind11::arg("arch"));
		cl.def( pybind11::init( [](enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1){ return new asmjit::Environment(a0, a1); } ), "doc" , pybind11::arg("arch"), pybind11::arg("subArch"));
		cl.def( pybind11::init( [](enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2){ return new asmjit::Environment(a0, a1, a2); } ), "doc" , pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"));
		cl.def( pybind11::init( [](enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2, enum asmjit::Platform const & a3){ return new asmjit::Environment(a0, a1, a2, a3); } ), "doc" , pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"));
		cl.def( pybind11::init( [](enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2, enum asmjit::Platform const & a3, enum asmjit::PlatformABI const & a4){ return new asmjit::Environment(a0, a1, a2, a3, a4); } ), "doc" , pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"), pybind11::arg("platformABI"));
		cl.def( pybind11::init( [](enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2, enum asmjit::Platform const & a3, enum asmjit::PlatformABI const & a4, enum asmjit::ObjectFormat const & a5){ return new asmjit::Environment(a0, a1, a2, a3, a4, a5); } ), "doc" , pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"), pybind11::arg("platformABI"), pybind11::arg("objectFormat"));
		cl.def( pybind11::init<enum asmjit::Arch, enum asmjit::SubArch, enum asmjit::Vendor, enum asmjit::Platform, enum asmjit::PlatformABI, enum asmjit::ObjectFormat, enum asmjit::FloatABI>(), pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"), pybind11::arg("platformABI"), pybind11::arg("objectFormat"), pybind11::arg("floatABI") );









		cl.def_static("host", (class asmjit::Environment (*)()) &asmjit::Environment::host, "Returns the host environment constructed from preprocessor macros defined by the compiler.\n\n The returned environment should precisely match the target host architecture, sub-architecture, platform,\n and ABI.\n\nC++: asmjit::Environment::host() --> class asmjit::Environment");
		cl.def("assign", (class asmjit::Environment & (asmjit::Environment::*)(const class asmjit::Environment &)) &asmjit::Environment::operator=, "\\{\n\nC++: asmjit::Environment::operator=(const class asmjit::Environment &) --> class asmjit::Environment &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("__eq__", (bool (asmjit::Environment::*)(const class asmjit::Environment &) const) &asmjit::Environment::operator==, "C++: asmjit::Environment::operator==(const class asmjit::Environment &) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (asmjit::Environment::*)(const class asmjit::Environment &) const) &asmjit::Environment::operator!=, "C++: asmjit::Environment::operator!=(const class asmjit::Environment &) const --> bool", pybind11::arg("other"));
		cl.def("empty", (bool (asmjit::Environment::*)() const) &asmjit::Environment::empty, "Tests whether the environment is not set up.\n\n Returns true if all members are zero, and thus unknown.\n\nC++: asmjit::Environment::empty() const --> bool");
		cl.def("isInitialized", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isInitialized, "Tests whether the environment is initialized, which means it must have\n a valid architecture.\n\nC++: asmjit::Environment::isInitialized() const --> bool");

		cl.def("reset", (void (asmjit::Environment::*)()) &asmjit::Environment::reset, "Resets all members of the environment to zero / unknown.\n\nC++: asmjit::Environment::reset() --> void");
		cl.def("equals", (bool (asmjit::Environment::*)(const class asmjit::Environment &) const) &asmjit::Environment::equals, "Tests whether this environment is equal to `other`.\n\nC++: asmjit::Environment::equals(const class asmjit::Environment &) const --> bool", pybind11::arg("other"));
		cl.def("arch", (enum asmjit::Arch (asmjit::Environment::*)() const) &asmjit::Environment::arch, "Returns the architecture.\n\nC++: asmjit::Environment::arch() const --> enum asmjit::Arch");
		cl.def("subArch", (enum asmjit::SubArch (asmjit::Environment::*)() const) &asmjit::Environment::subArch, "Returns the sub-architecture.\n\nC++: asmjit::Environment::subArch() const --> enum asmjit::SubArch");
		cl.def("vendor", (enum asmjit::Vendor (asmjit::Environment::*)() const) &asmjit::Environment::vendor, "Returns vendor.\n\nC++: asmjit::Environment::vendor() const --> enum asmjit::Vendor");
		cl.def("platform", (enum asmjit::Platform (asmjit::Environment::*)() const) &asmjit::Environment::platform, "Returns target's platform or operating system.\n\nC++: asmjit::Environment::platform() const --> enum asmjit::Platform");
		cl.def("platformABI", (enum asmjit::PlatformABI (asmjit::Environment::*)() const) &asmjit::Environment::platformABI, "Returns target's ABI.\n\nC++: asmjit::Environment::platformABI() const --> enum asmjit::PlatformABI");
		cl.def("objectFormat", (enum asmjit::ObjectFormat (asmjit::Environment::*)() const) &asmjit::Environment::objectFormat, "Returns target's object format.\n\nC++: asmjit::Environment::objectFormat() const --> enum asmjit::ObjectFormat");
		cl.def("floatABI", (enum asmjit::FloatABI (asmjit::Environment::*)() const) &asmjit::Environment::floatABI, "Returns floating point ABI.\n\nC++: asmjit::Environment::floatABI() const --> enum asmjit::FloatABI");
		cl.def("init", [](asmjit::Environment &o, enum asmjit::Arch const & a0) -> void { return o.init(a0); }, "", pybind11::arg("arch"));
		cl.def("init", [](asmjit::Environment &o, enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1) -> void { return o.init(a0, a1); }, "", pybind11::arg("arch"), pybind11::arg("subArch"));
		cl.def("init", [](asmjit::Environment &o, enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2) -> void { return o.init(a0, a1, a2); }, "", pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"));
		cl.def("init", [](asmjit::Environment &o, enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2, enum asmjit::Platform const & a3) -> void { return o.init(a0, a1, a2, a3); }, "", pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"));
		cl.def("init", [](asmjit::Environment &o, enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2, enum asmjit::Platform const & a3, enum asmjit::PlatformABI const & a4) -> void { return o.init(a0, a1, a2, a3, a4); }, "", pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"), pybind11::arg("platformABI"));
		cl.def("init", [](asmjit::Environment &o, enum asmjit::Arch const & a0, enum asmjit::SubArch const & a1, enum asmjit::Vendor const & a2, enum asmjit::Platform const & a3, enum asmjit::PlatformABI const & a4, enum asmjit::ObjectFormat const & a5) -> void { return o.init(a0, a1, a2, a3, a4, a5); }, "", pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"), pybind11::arg("platformABI"), pybind11::arg("objectFormat"));
		cl.def("init", (void (asmjit::Environment::*)(enum asmjit::Arch, enum asmjit::SubArch, enum asmjit::Vendor, enum asmjit::Platform, enum asmjit::PlatformABI, enum asmjit::ObjectFormat, enum asmjit::FloatABI)) &asmjit::Environment::init, "Initializes  to `arch`, `subArch`, `vendor`, `platform`, `platformABI`, `objectFormat`,\n and `floatABI`.\n\nC++: asmjit::Environment::init(enum asmjit::Arch, enum asmjit::SubArch, enum asmjit::Vendor, enum asmjit::Platform, enum asmjit::PlatformABI, enum asmjit::ObjectFormat, enum asmjit::FloatABI) --> void", pybind11::arg("arch"), pybind11::arg("subArch"), pybind11::arg("vendor"), pybind11::arg("platform"), pybind11::arg("platformABI"), pybind11::arg("objectFormat"), pybind11::arg("floatABI"));
		cl.def("isArchX86", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchX86, "Tests whether this environment describes a 32-bit X86.\n\nC++: asmjit::Environment::isArchX86() const --> bool");
		cl.def("isArchX64", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchX64, "Tests whether this environment describes a 64-bit X86.\n\nC++: asmjit::Environment::isArchX64() const --> bool");
		cl.def("isArchARM", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchARM, "Tests whether this environment describes a 32-bit ARM.\n\nC++: asmjit::Environment::isArchARM() const --> bool");
		cl.def("isArchThumb", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchThumb, "Tests whether this environment describes a 32-bit ARM in THUMB mode.\n\nC++: asmjit::Environment::isArchThumb() const --> bool");
		cl.def("isArchAArch64", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchAArch64, "Tests whether this environment describes a 64-bit X86.\n\nC++: asmjit::Environment::isArchAArch64() const --> bool");
		cl.def("isArchMIPS32", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchMIPS32, "Tests whether this environment describes a 32-bit MIPS.\n\nC++: asmjit::Environment::isArchMIPS32() const --> bool");
		cl.def("isArchMIPS64", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchMIPS64, "Tests whether this environment describes a 64-bit MIPS.\n\nC++: asmjit::Environment::isArchMIPS64() const --> bool");
		cl.def("isArchRISCV32", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchRISCV32, "Tests whether this environment describes a 32-bit RISC-V.\n\nC++: asmjit::Environment::isArchRISCV32() const --> bool");
		cl.def("isArchRISCV64", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isArchRISCV64, "Tests whether this environment describes a 64-bit RISC-V.\n\nC++: asmjit::Environment::isArchRISCV64() const --> bool");
		cl.def("is32Bit", (bool (asmjit::Environment::*)() const) &asmjit::Environment::is32Bit, "Tests whether the architecture is 32-bit.\n\nC++: asmjit::Environment::is32Bit() const --> bool");
		cl.def("is64Bit", (bool (asmjit::Environment::*)() const) &asmjit::Environment::is64Bit, "Tests whether the architecture is 64-bit.\n\nC++: asmjit::Environment::is64Bit() const --> bool");
		cl.def("isLittleEndian", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isLittleEndian, "Tests whether the architecture is little endian.\n\nC++: asmjit::Environment::isLittleEndian() const --> bool");
		cl.def("isBigEndian", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isBigEndian, "Tests whether the architecture is big endian.\n\nC++: asmjit::Environment::isBigEndian() const --> bool");
		cl.def("isFamilyX86", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isFamilyX86, "Tests whether this architecture is of X86 family.\n\nC++: asmjit::Environment::isFamilyX86() const --> bool");
		cl.def("isFamilyARM", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isFamilyARM, "Tests whether this architecture family is ARM, THUMB, or AArch64.\n\nC++: asmjit::Environment::isFamilyARM() const --> bool");
		cl.def("isFamilyAArch32", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isFamilyAArch32, "Tests whether this architecture family is AArch32 (ARM or THUMB).\n\nC++: asmjit::Environment::isFamilyAArch32() const --> bool");
		cl.def("isFamilyAArch64", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isFamilyAArch64, "Tests whether this architecture family is AArch64.\n\nC++: asmjit::Environment::isFamilyAArch64() const --> bool");
		cl.def("isFamilyMIPS", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isFamilyMIPS, "Tests whether this architecture family is MISP or MIPS64.\n\nC++: asmjit::Environment::isFamilyMIPS() const --> bool");
		cl.def("isFamilyRISCV", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isFamilyRISCV, "Tests whether this architecture family is RISC-V (both 32-bit and 64-bit).\n\nC++: asmjit::Environment::isFamilyRISCV() const --> bool");
		cl.def("isPlatformWindows", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isPlatformWindows, "Tests whether the environment platform is Windows.\n\nC++: asmjit::Environment::isPlatformWindows() const --> bool");
		cl.def("isPlatformLinux", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isPlatformLinux, "Tests whether the environment platform is Linux.\n\nC++: asmjit::Environment::isPlatformLinux() const --> bool");
		cl.def("isPlatformHurd", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isPlatformHurd, "Tests whether the environment platform is Hurd.\n\nC++: asmjit::Environment::isPlatformHurd() const --> bool");
		cl.def("isPlatformHaiku", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isPlatformHaiku, "Tests whether the environment platform is Haiku.\n\nC++: asmjit::Environment::isPlatformHaiku() const --> bool");
		cl.def("isPlatformBSD", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isPlatformBSD, "Tests whether the environment platform is any BSD.\n\nC++: asmjit::Environment::isPlatformBSD() const --> bool");
		cl.def("isPlatformApple", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isPlatformApple, "Tests whether the environment platform is any Apple platform (OSX, iOS, TVOS, WatchOS).\n\nC++: asmjit::Environment::isPlatformApple() const --> bool");
		cl.def("isMSVC", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isMSVC, "Tests whether the ABI is MSVC.\n\nC++: asmjit::Environment::isMSVC() const --> bool");
		cl.def("isGNU", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isGNU, "Tests whether the ABI is GNU.\n\nC++: asmjit::Environment::isGNU() const --> bool");
		cl.def("isDarwin", (bool (asmjit::Environment::*)() const) &asmjit::Environment::isDarwin, "Tests whether the ABI is GNU.\n\nC++: asmjit::Environment::isDarwin() const --> bool");
		cl.def("stackAlignment", (unsigned int (asmjit::Environment::*)() const) &asmjit::Environment::stackAlignment, "Returns a calculated stack alignment for this environment.\n\nC++: asmjit::Environment::stackAlignment() const --> unsigned int");
		cl.def("registerSize", (unsigned int (asmjit::Environment::*)() const) &asmjit::Environment::registerSize, "Returns a native register size of this architecture.\n\nC++: asmjit::Environment::registerSize() const --> unsigned int");
		cl.def("setArch", (void (asmjit::Environment::*)(enum asmjit::Arch)) &asmjit::Environment::setArch, "Sets the architecture to `arch`.\n\nC++: asmjit::Environment::setArch(enum asmjit::Arch) --> void", pybind11::arg("arch"));
		cl.def("setSubArch", (void (asmjit::Environment::*)(enum asmjit::SubArch)) &asmjit::Environment::setSubArch, "Sets the sub-architecture to `subArch`.\n\nC++: asmjit::Environment::setSubArch(enum asmjit::SubArch) --> void", pybind11::arg("subArch"));
		cl.def("setVendor", (void (asmjit::Environment::*)(enum asmjit::Vendor)) &asmjit::Environment::setVendor, "Sets the vendor to `vendor`.\n\nC++: asmjit::Environment::setVendor(enum asmjit::Vendor) --> void", pybind11::arg("vendor"));
		cl.def("setPlatform", (void (asmjit::Environment::*)(enum asmjit::Platform)) &asmjit::Environment::setPlatform, "Sets the platform to `platform`.\n\nC++: asmjit::Environment::setPlatform(enum asmjit::Platform) --> void", pybind11::arg("platform"));
		cl.def("setPlatformABI", (void (asmjit::Environment::*)(enum asmjit::PlatformABI)) &asmjit::Environment::setPlatformABI, "Sets the ABI to `platformABI`.\n\nC++: asmjit::Environment::setPlatformABI(enum asmjit::PlatformABI) --> void", pybind11::arg("platformABI"));
		cl.def("setObjectFormat", (void (asmjit::Environment::*)(enum asmjit::ObjectFormat)) &asmjit::Environment::setObjectFormat, "Sets the object format to `objectFormat`.\n\nC++: asmjit::Environment::setObjectFormat(enum asmjit::ObjectFormat) --> void", pybind11::arg("objectFormat"));
		cl.def("setFloatABI", (void (asmjit::Environment::*)(enum asmjit::FloatABI)) &asmjit::Environment::setFloatABI, "Sets floating point ABI to `floatABI`.\n\nC++: asmjit::Environment::setFloatABI(enum asmjit::FloatABI) --> void", pybind11::arg("floatABI"));
		cl.def_static("isDefinedArch", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isDefinedArch, "\\{\n\nC++: asmjit::Environment::isDefinedArch(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isValidArch", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isValidArch, "C++: asmjit::Environment::isValidArch(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitecture32Bit", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::is32Bit, "Tests whether the given architecture `arch` is 32-bit.\n\nC++: asmjit::Environment::is32Bit(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitecture64Bit", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::is64Bit, "Tests whether the given architecture `arch` is 64-bit.\n\nC++: asmjit::Environment::is64Bit(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureLittleEndian", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isLittleEndian, "Tests whether the given architecture `arch` is little endian.\n\nC++: asmjit::Environment::isLittleEndian(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureBigEndian", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isBigEndian, "Tests whether the given architecture `arch` is big endian.\n\nC++: asmjit::Environment::isBigEndian(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureThumb", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isArchThumb, "Tests whether the given architecture is Thumb or Thumb_BE.\n\nC++: asmjit::Environment::isArchThumb(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureARM", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isArchARM, "Tests whether the given architecture is ARM or ARM_BE.\n\nC++: asmjit::Environment::isArchARM(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureAArch64", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isArchAArch64, "Tests whether the given architecture is AArch64 or AArch64_BE.\n\nC++: asmjit::Environment::isArchAArch64(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureMIPS32", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isArchMIPS32, "Tests whether the given architecture is MIPS32_LE or MIPS32_BE.\n\nC++: asmjit::Environment::isArchMIPS32(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureMIPS64", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isArchMIPS64, "Tests whether the given architecture is MIPS64_LE or MIPS64_BE.\n\nC++: asmjit::Environment::isArchMIPS64(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureFamilyX86", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isFamilyX86, "Tests whether the given architecture family is X86 or X64.\n\nC++: asmjit::Environment::isFamilyX86(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureFamilyAArch32", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isFamilyAArch32, "Tests whether the given architecture family is AArch32 (ARM or THUMB).\n\nC++: asmjit::Environment::isFamilyAArch32(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureFamilyAArch64", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isFamilyAArch64, "Tests whether the given architecture family is AArch64.\n\nC++: asmjit::Environment::isFamilyAArch64(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureFamilyARM", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isFamilyARM, "Tests whether the given architecture family is ARM, THUMB, or AArch64.\n\nC++: asmjit::Environment::isFamilyARM(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureFamilyMIPS", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isFamilyMIPS, "Tests whether the given architecture family is MIPS or MIPS64.\n\nC++: asmjit::Environment::isFamilyMIPS(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("isArchitectureFamilyRISCV", (bool (*)(enum asmjit::Arch)) &asmjit::Environment::isFamilyRISCV, "Tests whether the given architecture family is RISC-V (both 32-bit and 64-bit).\n\nC++: asmjit::Environment::isFamilyRISCV(enum asmjit::Arch) --> bool", pybind11::arg("arch"));
		cl.def_static("registerSizeFromArch", (unsigned int (*)(enum asmjit::Arch)) &asmjit::Environment::registerSizeFromArch, "Returns a native general purpose register size from the given architecture.\n\nC++: asmjit::Environment::registerSizeFromArch(enum asmjit::Arch) --> unsigned int", pybind11::arg("arch"));
	}
}
