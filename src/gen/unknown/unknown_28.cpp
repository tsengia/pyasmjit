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

void bind_unknown_unknown_28(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::FormatFlags file: line:25
	pybind11::enum_<asmjit::FormatFlags>(M("asmjit"), "FormatFlags", "Format flags used by  and ")
		.value("kNone", asmjit::FormatFlags::kNone)
		.value("kMachineCode", asmjit::FormatFlags::kMachineCode)
		.value("kExplainImms", asmjit::FormatFlags::kExplainImms)
		.value("kHexImms", asmjit::FormatFlags::kHexImms)
		.value("kHexOffsets", asmjit::FormatFlags::kHexOffsets)
		.value("kRegCasts", asmjit::FormatFlags::kRegCasts)
		.value("kPositions", asmjit::FormatFlags::kPositions)
		.value("kRegType", asmjit::FormatFlags::kRegType);

;

	// asmjit::FormatIndentationGroup file: line:47
	pybind11::enum_<asmjit::FormatIndentationGroup>(M("asmjit"), "FormatIndentationGroup", "Format indentation group, used by ")
		.value("kCode", asmjit::FormatIndentationGroup::kCode)
		.value("kLabel", asmjit::FormatIndentationGroup::kLabel)
		.value("kComment", asmjit::FormatIndentationGroup::kComment)
		.value("kReserved", asmjit::FormatIndentationGroup::kReserved)
		.value("kMaxValue", asmjit::FormatIndentationGroup::kMaxValue);

;

	// asmjit::FormatPaddingGroup file: line:65
	pybind11::enum_<asmjit::FormatPaddingGroup>(M("asmjit"), "FormatPaddingGroup", "Format padding group, used by ")
		.value("kRegularLine", asmjit::FormatPaddingGroup::kRegularLine)
		.value("kMachineCode", asmjit::FormatPaddingGroup::kMachineCode)
		.value("kMaxValue", asmjit::FormatPaddingGroup::kMaxValue);

;

	{ // asmjit::FormatOptions file: line:76
		pybind11::class_<asmjit::FormatOptions, std::shared_ptr<asmjit::FormatOptions>> cl(M("asmjit"), "FormatOptions", "Formatting options used by  and ");
		cl.def( pybind11::init( [](){ return new asmjit::FormatOptions(); } ) );
		cl.def( pybind11::init( [](asmjit::FormatOptions const &o){ return new asmjit::FormatOptions(o); } ) );



		cl.def("reset", (void (asmjit::FormatOptions::*)()) &asmjit::FormatOptions::reset, "Resets FormatOptions to its default initialized state.\n\nC++: asmjit::FormatOptions::reset() --> void");
		cl.def("flags", (enum asmjit::FormatFlags (asmjit::FormatOptions::*)() const) &asmjit::FormatOptions::flags, "Returns format flags.\n\nC++: asmjit::FormatOptions::flags() const --> enum asmjit::FormatFlags");
		cl.def("hasFlag", (bool (asmjit::FormatOptions::*)(enum asmjit::FormatFlags) const) &asmjit::FormatOptions::hasFlag, "Tests whether the given `flag` is set in format flags.\n\nC++: asmjit::FormatOptions::hasFlag(enum asmjit::FormatFlags) const --> bool", pybind11::arg("flag"));
		cl.def("setFlags", (void (asmjit::FormatOptions::*)(enum asmjit::FormatFlags)) &asmjit::FormatOptions::setFlags, "Resets all format flags to `flags`.\n\nC++: asmjit::FormatOptions::setFlags(enum asmjit::FormatFlags) --> void", pybind11::arg("flags"));
		cl.def("addFlags", (void (asmjit::FormatOptions::*)(enum asmjit::FormatFlags)) &asmjit::FormatOptions::addFlags, "Adds `flags` to format flags.\n\nC++: asmjit::FormatOptions::addFlags(enum asmjit::FormatFlags) --> void", pybind11::arg("flags"));
		cl.def("clearFlags", (void (asmjit::FormatOptions::*)(enum asmjit::FormatFlags)) &asmjit::FormatOptions::clearFlags, "Removes `flags` from format flags.\n\nC++: asmjit::FormatOptions::clearFlags(enum asmjit::FormatFlags) --> void", pybind11::arg("flags"));
		cl.def("indentation", (unsigned char (asmjit::FormatOptions::*)(enum asmjit::FormatIndentationGroup) const) &asmjit::FormatOptions::indentation, "Returns indentation for the given indentation `group`.\n\nC++: asmjit::FormatOptions::indentation(enum asmjit::FormatIndentationGroup) const --> unsigned char", pybind11::arg("group"));
		cl.def("setIndentation", (void (asmjit::FormatOptions::*)(enum asmjit::FormatIndentationGroup, unsigned int)) &asmjit::FormatOptions::setIndentation, "Sets indentation for the given indentation `group`.\n\nC++: asmjit::FormatOptions::setIndentation(enum asmjit::FormatIndentationGroup, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("n"));
		cl.def("resetIndentation", (void (asmjit::FormatOptions::*)(enum asmjit::FormatIndentationGroup)) &asmjit::FormatOptions::resetIndentation, "Resets indentation for the given indentation `group` to zero.\n\nC++: asmjit::FormatOptions::resetIndentation(enum asmjit::FormatIndentationGroup) --> void", pybind11::arg("group"));
		cl.def("padding", (unsigned long (asmjit::FormatOptions::*)(enum asmjit::FormatPaddingGroup) const) &asmjit::FormatOptions::padding, "Returns padding for the given padding `group`.\n\nC++: asmjit::FormatOptions::padding(enum asmjit::FormatPaddingGroup) const --> unsigned long", pybind11::arg("group"));
		cl.def("setPadding", (void (asmjit::FormatOptions::*)(enum asmjit::FormatPaddingGroup, unsigned long)) &asmjit::FormatOptions::setPadding, "Sets padding for the given padding `group`.\n\nC++: asmjit::FormatOptions::setPadding(enum asmjit::FormatPaddingGroup, unsigned long) --> void", pybind11::arg("group"), pybind11::arg("n"));
		cl.def("resetPadding", (void (asmjit::FormatOptions::*)(enum asmjit::FormatPaddingGroup)) &asmjit::FormatOptions::resetPadding, "Resets padding for the given padding `group` to zero, which means that a default padding will be used\n based on the target architecture properties.\n\nC++: asmjit::FormatOptions::resetPadding(enum asmjit::FormatPaddingGroup) --> void", pybind11::arg("group"));
		cl.def("assign", (class asmjit::FormatOptions & (asmjit::FormatOptions::*)(const class asmjit::FormatOptions &)) &asmjit::FormatOptions::operator=, "C++: asmjit::FormatOptions::operator=(const class asmjit::FormatOptions &) --> class asmjit::FormatOptions &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
