
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

void bind_unknown_unknown_30(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::Formatter::formatTypeId(class asmjit::String &, enum asmjit::TypeId) file: line:141
	M("asmjit::Formatter").def("formatTypeId", (unsigned int (*)(class asmjit::String &, enum asmjit::TypeId)) &asmjit::Formatter::formatTypeId, "Appends a formatted `typeId` to the output string `sb`.\n\nC++: asmjit::Formatter::formatTypeId(class asmjit::String &, enum asmjit::TypeId) --> unsigned int", pybind11::arg("sb"), pybind11::arg("typeId"));

	// asmjit::Formatter::formatFeature(class asmjit::String &, enum asmjit::Arch, unsigned int) file: line:148
	M("asmjit::Formatter").def("formatFeature", (unsigned int (*)(class asmjit::String &, enum asmjit::Arch, unsigned int)) &asmjit::Formatter::formatFeature, "Appends a formatted `featureId` to the output string `sb`.\n\n See \n\nC++: asmjit::Formatter::formatFeature(class asmjit::String &, enum asmjit::Arch, unsigned int) --> unsigned int", pybind11::arg("sb"), pybind11::arg("arch"), pybind11::arg("featureId"));

	// asmjit::Formatter::formatRegister(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, enum asmjit::RegType, unsigned int) file: line:157
	M("asmjit::Formatter").def("formatRegister", (unsigned int (*)(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, enum asmjit::RegType, unsigned int)) &asmjit::Formatter::formatRegister, "Appends a formatted register to the output string `sb`.\n\n \n Emitter is optional, but it's required to format virtual registers, which won't be formatted properly\n if the `emitter` is not provided.\n\nC++: asmjit::Formatter::formatRegister(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, enum asmjit::RegType, unsigned int) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatFlags"), pybind11::arg("emitter"), pybind11::arg("arch"), pybind11::arg("regType"), pybind11::arg("regId"));

	// asmjit::Formatter::formatLabel(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, unsigned int) file: line:169
	M("asmjit::Formatter").def("formatLabel", (unsigned int (*)(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, unsigned int)) &asmjit::Formatter::formatLabel, "Appends a formatted label to the output string `sb`.\n\n \n Emitter is optional, but it's required to format named labels properly, otherwise the formatted as\n it is an anonymous label.\n\nC++: asmjit::Formatter::formatLabel(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, unsigned int) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatFlags"), pybind11::arg("emitter"), pybind11::arg("labelId"));

	// asmjit::Formatter::formatOperand(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, const struct asmjit::Operand_ &) file: line:179
	M("asmjit::Formatter").def("formatOperand", (unsigned int (*)(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, const struct asmjit::Operand_ &)) &asmjit::Formatter::formatOperand, "Appends a formatted operand to the output string `sb`.\n\n \n Emitter is optional, but it's required to format named labels and virtual registers. See\n  and  for more details.\n\nC++: asmjit::Formatter::formatOperand(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, const struct asmjit::Operand_ &) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatFlags"), pybind11::arg("emitter"), pybind11::arg("arch"), pybind11::arg("op"));

	// asmjit::Formatter::formatDataType(class asmjit::String &, enum asmjit::FormatFlags, enum asmjit::Arch, enum asmjit::TypeId) file: line:187
	M("asmjit::Formatter").def("formatDataType", (unsigned int (*)(class asmjit::String &, enum asmjit::FormatFlags, enum asmjit::Arch, enum asmjit::TypeId)) &asmjit::Formatter::formatDataType, "Appends a formatted data-type to the output string `sb`.\n\nC++: asmjit::Formatter::formatDataType(class asmjit::String &, enum asmjit::FormatFlags, enum asmjit::Arch, enum asmjit::TypeId) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatFlags"), pybind11::arg("arch"), pybind11::arg("typeId"));

	// asmjit::Formatter::formatData(class asmjit::String &, enum asmjit::FormatFlags, enum asmjit::Arch, enum asmjit::TypeId, const void *, unsigned long, unsigned long) file: line:194
	M("asmjit::Formatter").def("formatData", [](class asmjit::String & a0, enum asmjit::FormatFlags const & a1, enum asmjit::Arch const & a2, enum asmjit::TypeId const & a3, const void * a4, unsigned long const & a5) -> unsigned int { return asmjit::Formatter::formatData(a0, a1, a2, a3, a4, a5); }, "", pybind11::arg("sb"), pybind11::arg("formatFlags"), pybind11::arg("arch"), pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("itemCount"));
	M("asmjit::Formatter").def("formatData", (unsigned int (*)(class asmjit::String &, enum asmjit::FormatFlags, enum asmjit::Arch, enum asmjit::TypeId, const void *, unsigned long, unsigned long)) &asmjit::Formatter::formatData, "Appends a formatted data to the output string `sb`.\n\nC++: asmjit::Formatter::formatData(class asmjit::String &, enum asmjit::FormatFlags, enum asmjit::Arch, enum asmjit::TypeId, const void *, unsigned long, unsigned long) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatFlags"), pybind11::arg("arch"), pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("itemCount"), pybind11::arg("repeatCount"));

	// asmjit::Formatter::formatInstruction(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long) file: line:204
	M("asmjit::Formatter").def("formatInstruction", (unsigned int (*)(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long)) &asmjit::Formatter::formatInstruction, "Appends a formatted instruction to the output string `sb`.\n\n \n Emitter is optional, but it's required to format named labels and virtual registers. See\n  and  for more details.\n\nC++: asmjit::Formatter::formatInstruction(class asmjit::String &, enum asmjit::FormatFlags, const class asmjit::BaseEmitter *, enum asmjit::Arch, const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatFlags"), pybind11::arg("emitter"), pybind11::arg("arch"), pybind11::arg("inst"), pybind11::arg("operands"), pybind11::arg("opCount"));

	// asmjit::Formatter::formatNode(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *, const class asmjit::BaseNode *) file: line:215
	M("asmjit::Formatter").def("formatNode", (unsigned int (*)(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *, const class asmjit::BaseNode *)) &asmjit::Formatter::formatNode, "Appends a formatted node to the output string `sb`.\n\n The `node` must belong to the provided `builder`.\n\nC++: asmjit::Formatter::formatNode(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *, const class asmjit::BaseNode *) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatOptions"), pybind11::arg("builder"), pybind11::arg("node"));

	// asmjit::Formatter::formatNodeList(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *) file: line:224
	M("asmjit::Formatter").def("formatNodeList", (unsigned int (*)(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *)) &asmjit::Formatter::formatNodeList, "Appends formatted nodes to the output string `sb`.\n\n All nodes that are part of the given `builder` will be appended.\n\nC++: asmjit::Formatter::formatNodeList(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatOptions"), pybind11::arg("builder"));

	// asmjit::Formatter::formatNodeList(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *, const class asmjit::BaseNode *, const class asmjit::BaseNode *) file: line:233
	M("asmjit::Formatter").def("formatNodeList", (unsigned int (*)(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *, const class asmjit::BaseNode *, const class asmjit::BaseNode *)) &asmjit::Formatter::formatNodeList, "Appends formatted nodes to the output string `sb`.\n\n This function works the same as  but appends more nodes to the output string,\n separating each node with a newline '' character.\n\nC++: asmjit::Formatter::formatNodeList(class asmjit::String &, const class asmjit::FormatOptions &, const class asmjit::BaseBuilder *, const class asmjit::BaseNode *, const class asmjit::BaseNode *) --> unsigned int", pybind11::arg("sb"), pybind11::arg("formatOptions"), pybind11::arg("builder"), pybind11::arg("begin"), pybind11::arg("end"));

}
