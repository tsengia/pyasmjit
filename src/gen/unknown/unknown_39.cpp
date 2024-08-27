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

// asmjit::JitRuntime file: line:27
struct PyCallBack_asmjit_JitRuntime : public asmjit::JitRuntime {
	using asmjit::JitRuntime::JitRuntime;

	unsigned int _release(void * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::JitRuntime *>(this), "_release");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return JitRuntime::_release(a0);
	}
};

// asmjit::Logger file: line:28
struct PyCallBack_asmjit_Logger : public asmjit::Logger {
	using asmjit::Logger::Logger;

	unsigned int _log(const char * a0, unsigned long a1) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::Logger *>(this), "_log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Logger::_log(a0, a1);
	}
};

// asmjit::FileLogger file: line:110
struct PyCallBack_asmjit_FileLogger : public asmjit::FileLogger {
	using asmjit::FileLogger::FileLogger;

	unsigned int _log(const char * a0, unsigned long a1) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::FileLogger *>(this), "_log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return FileLogger::_log(a0, a1);
	}
};

// asmjit::StringLogger file: line:145
struct PyCallBack_asmjit_StringLogger : public asmjit::StringLogger {
	using asmjit::StringLogger::StringLogger;

	unsigned int _log(const char * a0, unsigned long a1) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::StringLogger *>(this), "_log");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return StringLogger::_log(a0, a1);
	}
};

void bind_unknown_unknown_39(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::JitRuntime file: line:27
		pybind11::class_<asmjit::JitRuntime, std::shared_ptr<asmjit::JitRuntime>, PyCallBack_asmjit_JitRuntime, asmjit::Target> cl(M("asmjit"), "JitRuntime", "JIT execution runtime is a special `Target` that is designed to store and execute a generated code.\n\n JIT runtime is the easiest way of using AsmJit as it abstracts allocation and deallocation of virtual memory\n where executable code can be placed and from which it can be executed as well.");
		cl.def( pybind11::init( [](){ return new asmjit::JitRuntime(); }, [](){ return new PyCallBack_asmjit_JitRuntime(); } ), "doc");
		cl.def( pybind11::init<const struct asmjit::JitAllocator::CreateParams *>(), pybind11::arg("params") );


		cl.def("reset", [](asmjit::JitRuntime &o) -> void { return o.reset(); }, "");
		cl.def("reset", (void (asmjit::JitRuntime::*)(enum asmjit::ResetPolicy)) &asmjit::JitRuntime::reset, "Resets the  freeing everything that was allocated by it.\n\n Depending on `resetPolicy` the currently held memory can be either freed entirely when ResetPolicy::kHard is used,\n or the allocator can keep some of it for next allocations when ResetPolicy::kSoft is used, which is the default\n behavior.\n\nC++: asmjit::JitRuntime::reset(enum asmjit::ResetPolicy) --> void", pybind11::arg("resetPolicy"));
		cl.def("allocator", (class asmjit::JitAllocator * (asmjit::JitRuntime::*)() const) &asmjit::JitRuntime::allocator, "Returns the associated `JitAllocator`.\n\nC++: asmjit::JitRuntime::allocator() const --> class asmjit::JitAllocator *", pybind11::return_value_policy::automatic);

	}
	{ // asmjit::Logger file: line:28
		pybind11::class_<asmjit::Logger, std::shared_ptr<asmjit::Logger>, PyCallBack_asmjit_Logger> cl(M("asmjit"), "Logger", "Logging interface.\n\n This class can be inherited and reimplemented to fit into your own logging needs. When reimplementing a logger\n use  method to log customize the output.\n\n There are two `Logger` implementations offered by AsmJit:\n   -  - logs into a `FILE*`.\n   -  - concatenates all logs into a ");
		cl.def( pybind11::init( [](){ return new asmjit::Logger(); }, [](){ return new PyCallBack_asmjit_Logger(); } ) );

		cl.def("options", (class asmjit::FormatOptions & (asmjit::Logger::*)()) &asmjit::Logger::options, "Returns  of this logger.\n\nC++: asmjit::Logger::options() --> class asmjit::FormatOptions &", pybind11::return_value_policy::automatic);
		cl.def("setOptions", (void (asmjit::Logger::*)(const class asmjit::FormatOptions &)) &asmjit::Logger::setOptions, "Sets formatting options of this Logger to `options`.\n\nC++: asmjit::Logger::setOptions(const class asmjit::FormatOptions &) --> void", pybind11::arg("options"));
		cl.def("resetOptions", (void (asmjit::Logger::*)()) &asmjit::Logger::resetOptions, "Resets formatting options of this Logger to defaults.\n\nC++: asmjit::Logger::resetOptions() --> void");
		cl.def("flags", (enum asmjit::FormatFlags (asmjit::Logger::*)() const) &asmjit::Logger::flags, "Returns formatting flags.\n\nC++: asmjit::Logger::flags() const --> enum asmjit::FormatFlags");
		cl.def("hasFlag", (bool (asmjit::Logger::*)(enum asmjit::FormatFlags) const) &asmjit::Logger::hasFlag, "Tests whether the logger has the given `flag` enabled.\n\nC++: asmjit::Logger::hasFlag(enum asmjit::FormatFlags) const --> bool", pybind11::arg("flag"));
		cl.def("setFlags", (void (asmjit::Logger::*)(enum asmjit::FormatFlags)) &asmjit::Logger::setFlags, "Sets formatting flags to `flags`.\n\nC++: asmjit::Logger::setFlags(enum asmjit::FormatFlags) --> void", pybind11::arg("flags"));
		cl.def("addFlags", (void (asmjit::Logger::*)(enum asmjit::FormatFlags)) &asmjit::Logger::addFlags, "Enables the given formatting `flags`.\n\nC++: asmjit::Logger::addFlags(enum asmjit::FormatFlags) --> void", pybind11::arg("flags"));
		cl.def("clearFlags", (void (asmjit::Logger::*)(enum asmjit::FormatFlags)) &asmjit::Logger::clearFlags, "Disables the given formatting `flags`.\n\nC++: asmjit::Logger::clearFlags(enum asmjit::FormatFlags) --> void", pybind11::arg("flags"));
		cl.def("indentation", (unsigned int (asmjit::Logger::*)(enum asmjit::FormatIndentationGroup) const) &asmjit::Logger::indentation, "Returns indentation of a given indentation `group`.\n\nC++: asmjit::Logger::indentation(enum asmjit::FormatIndentationGroup) const --> unsigned int", pybind11::arg("type"));
		cl.def("setIndentation", (void (asmjit::Logger::*)(enum asmjit::FormatIndentationGroup, unsigned int)) &asmjit::Logger::setIndentation, "Sets indentation of the given indentation `group` to `n` spaces.\n\nC++: asmjit::Logger::setIndentation(enum asmjit::FormatIndentationGroup, unsigned int) --> void", pybind11::arg("type"), pybind11::arg("n"));
		cl.def("resetIndentation", (void (asmjit::Logger::*)(enum asmjit::FormatIndentationGroup)) &asmjit::Logger::resetIndentation, "Resets indentation of the given indentation `group` to 0 spaces.\n\nC++: asmjit::Logger::resetIndentation(enum asmjit::FormatIndentationGroup) --> void", pybind11::arg("type"));
		cl.def("padding", (unsigned long (asmjit::Logger::*)(enum asmjit::FormatPaddingGroup) const) &asmjit::Logger::padding, "Returns padding of a given padding `group`.\n\nC++: asmjit::Logger::padding(enum asmjit::FormatPaddingGroup) const --> unsigned long", pybind11::arg("type"));
		cl.def("setPadding", (void (asmjit::Logger::*)(enum asmjit::FormatPaddingGroup, unsigned int)) &asmjit::Logger::setPadding, "Sets padding of a given padding `group` to `n`.\n\nC++: asmjit::Logger::setPadding(enum asmjit::FormatPaddingGroup, unsigned int) --> void", pybind11::arg("type"), pybind11::arg("n"));
		cl.def("resetPadding", (void (asmjit::Logger::*)(enum asmjit::FormatPaddingGroup)) &asmjit::Logger::resetPadding, "Resets padding of a given padding `group` to 0, which means that a default will be used.\n\nC++: asmjit::Logger::resetPadding(enum asmjit::FormatPaddingGroup) --> void", pybind11::arg("type"));

		cl.def("log", [](asmjit::Logger &o, const char * a0) -> unsigned int { return o.log(a0); }, "", pybind11::arg("data"));
		cl.def("log", (unsigned int (asmjit::Logger::*)(const char *, unsigned long)) &asmjit::Logger::log, "Logs string `str`, which is either null terminated or having size `size`.\n\nC++: asmjit::Logger::log(const char *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("logf", [](asmjit::Logger &o, const char * a0) -> unsigned int { return o.logf(a0); }, "", pybind11::arg("fmt"));
	}
	{ // asmjit::FileLogger file: line:110
		pybind11::class_<asmjit::FileLogger, std::shared_ptr<asmjit::FileLogger>, PyCallBack_asmjit_FileLogger, asmjit::Logger> cl(M("asmjit"), "FileLogger", "Logger that can log to a `FILE*`.");
		cl.def( pybind11::init( [](){ return new asmjit::FileLogger(); }, [](){ return new PyCallBack_asmjit_FileLogger(); } ), "doc");
		cl.def( pybind11::init<struct _IO_FILE *>(), pybind11::arg("file") );

		cl.def("file", (struct _IO_FILE * (asmjit::FileLogger::*)() const) &asmjit::FileLogger::file, "Returns the logging output stream or null if the logger has no output stream.\n\nC++: asmjit::FileLogger::file() const --> struct _IO_FILE *", pybind11::return_value_policy::automatic);
		cl.def("setFile", (void (asmjit::FileLogger::*)(struct _IO_FILE *)) &asmjit::FileLogger::setFile, "Sets the logging output stream to `stream` or null.\n\n \n If the `file` is null the logging will be disabled. When a logger is attached to `CodeHolder` or any\n emitter the logging API will always be called regardless of the output file. This means that if you really\n want to disable logging at emitter level you must not attach a logger to it.\n\nC++: asmjit::FileLogger::setFile(struct _IO_FILE *) --> void", pybind11::arg("file"));


	}
	{ // asmjit::StringLogger file: line:145
		pybind11::class_<asmjit::StringLogger, std::shared_ptr<asmjit::StringLogger>, PyCallBack_asmjit_StringLogger, asmjit::Logger> cl(M("asmjit"), "StringLogger", "Logger that stores everything in an internal string buffer.");
		cl.def( pybind11::init( [](){ return new asmjit::StringLogger(); }, [](){ return new PyCallBack_asmjit_StringLogger(); } ) );

		cl.def("data", (const char * (asmjit::StringLogger::*)() const) &asmjit::StringLogger::data, "Returns aggregated logger data as `char*` pointer.\n\n The pointer is owned by `StringLogger`, it can't be modified or freed.\n\nC++: asmjit::StringLogger::data() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("dataSize", (unsigned long (asmjit::StringLogger::*)() const) &asmjit::StringLogger::dataSize, "Returns size of the data returned by `data()`.\n\nC++: asmjit::StringLogger::dataSize() const --> unsigned long");
		cl.def("clear", (void (asmjit::StringLogger::*)()) &asmjit::StringLogger::clear, "Clears the accumulated logger data.\n\nC++: asmjit::StringLogger::clear() --> void");


	}
	{ // asmjit::ZoneStackBase file: line:17
		pybind11::class_<asmjit::ZoneStackBase, std::shared_ptr<asmjit::ZoneStackBase>> cl(M("asmjit"), "ZoneStackBase", "Base class used by ");
		cl.def( pybind11::init( [](){ return new asmjit::ZoneStackBase(); } ) );
		cl.def("isInitialized", (bool (asmjit::ZoneStackBase::*)() const) &asmjit::ZoneStackBase::isInitialized, "C++: asmjit::ZoneStackBase::isInitialized() const --> bool");
		cl.def("reset", (unsigned int (asmjit::ZoneStackBase::*)()) &asmjit::ZoneStackBase::reset, "C++: asmjit::ZoneStackBase::reset() --> unsigned int");
		cl.def("empty", (bool (asmjit::ZoneStackBase::*)() const) &asmjit::ZoneStackBase::empty, "C++: asmjit::ZoneStackBase::empty() const --> bool");



		{ // asmjit::ZoneStackBase::Block file: line:39
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::ZoneStackBase::Block, std::shared_ptr<asmjit::ZoneStackBase::Block>> cl(enclosing_class, "Block", "\\{");
			cl.def( pybind11::init( [](){ return new asmjit::ZoneStackBase::Block(); } ) );
			cl.def("start", (void * (asmjit::ZoneStackBase::Block::*)() const) &asmjit::ZoneStackBase::Block::start<void>, "C++: asmjit::ZoneStackBase::Block::start() const --> void *", pybind11::return_value_policy::automatic);
			cl.def("end", (void * (asmjit::ZoneStackBase::Block::*)() const) &asmjit::ZoneStackBase::Block::end<void>, "C++: asmjit::ZoneStackBase::Block::end() const --> void *", pybind11::return_value_policy::automatic);
			cl.def("data", (void * (asmjit::ZoneStackBase::Block::*)() const) &asmjit::ZoneStackBase::Block::data<void>, "C++: asmjit::ZoneStackBase::Block::data() const --> void *", pybind11::return_value_policy::automatic);
			cl.def("empty", (bool (asmjit::ZoneStackBase::Block::*)() const) &asmjit::ZoneStackBase::Block::empty, "C++: asmjit::ZoneStackBase::Block::empty() const --> bool");
			cl.def("prev", (struct asmjit::ZoneStackBase::Block * (asmjit::ZoneStackBase::Block::*)() const) &asmjit::ZoneStackBase::Block::prev, "C++: asmjit::ZoneStackBase::Block::prev() const --> struct asmjit::ZoneStackBase::Block *", pybind11::return_value_policy::automatic);
			cl.def("next", (struct asmjit::ZoneStackBase::Block * (asmjit::ZoneStackBase::Block::*)() const) &asmjit::ZoneStackBase::Block::next, "C++: asmjit::ZoneStackBase::Block::next() const --> struct asmjit::ZoneStackBase::Block *", pybind11::return_value_policy::automatic);
			cl.def("setPrev", (void (asmjit::ZoneStackBase::Block::*)(struct asmjit::ZoneStackBase::Block *)) &asmjit::ZoneStackBase::Block::setPrev, "C++: asmjit::ZoneStackBase::Block::setPrev(struct asmjit::ZoneStackBase::Block *) --> void", pybind11::arg("block"));
			cl.def("setNext", (void (asmjit::ZoneStackBase::Block::*)(struct asmjit::ZoneStackBase::Block *)) &asmjit::ZoneStackBase::Block::setNext, "C++: asmjit::ZoneStackBase::Block::setNext(struct asmjit::ZoneStackBase::Block *) --> void", pybind11::arg("block"));
		}

	}
}
