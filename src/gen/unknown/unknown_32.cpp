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

// asmjit::BaseAssembler file: line:29
struct PyCallBack_asmjit_BaseAssembler : public asmjit::BaseAssembler {
	using asmjit::BaseAssembler::BaseAssembler;

	unsigned int section(class asmjit::Section * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "section");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::section(a0);
	}
	class asmjit::Label newLabel() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "newLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class asmjit::Label>::value) {
				static pybind11::detail::override_caster_t<class asmjit::Label> caster;
				return pybind11::detail::cast_ref<class asmjit::Label>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class asmjit::Label>(std::move(o));
		}
		return BaseAssembler::newLabel();
	}
	class asmjit::Label newNamedLabel(const char * a0, unsigned long a1, enum asmjit::LabelType a2, unsigned int a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "newNamedLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<class asmjit::Label>::value) {
				static pybind11::detail::override_caster_t<class asmjit::Label> caster;
				return pybind11::detail::cast_ref<class asmjit::Label>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class asmjit::Label>(std::move(o));
		}
		return BaseAssembler::newNamedLabel(a0, a1, a2, a3);
	}
	unsigned int bind(const class asmjit::Label & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "bind");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::bind(a0);
	}
	unsigned int embed(const void * a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "embed");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::embed(a0, a1);
	}
	unsigned int embedDataArray(enum asmjit::TypeId a0, const void * a1, unsigned long a2, unsigned long a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "embedDataArray");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::embedDataArray(a0, a1, a2, a3);
	}
	unsigned int embedConstPool(const class asmjit::Label & a0, const class asmjit::ConstPool & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "embedConstPool");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::embedConstPool(a0, a1);
	}
	unsigned int embedLabel(const class asmjit::Label & a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "embedLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::embedLabel(a0, a1);
	}
	unsigned int embedLabelDelta(const class asmjit::Label & a0, const class asmjit::Label & a1, unsigned long a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "embedLabelDelta");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::embedLabelDelta(a0, a1, a2);
	}
	unsigned int comment(const char * a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "comment");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::comment(a0, a1);
	}
	unsigned int onAttach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "onAttach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::onAttach(a0);
	}
	unsigned int onDetach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "onDetach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseAssembler::onDetach(a0);
	}
	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "finalize");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::finalize();
	}
	unsigned int _emit(unsigned int a0, const struct asmjit::Operand_ & a1, const struct asmjit::Operand_ & a2, const struct asmjit::Operand_ & a3, const struct asmjit::Operand_ * a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "_emit");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::_emit(a0, a1, a2, a3, a4);
	}
	unsigned int _emitOpArray(unsigned int a0, const struct asmjit::Operand_ * a1, unsigned long a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "_emitOpArray");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::_emitOpArray(a0, a1, a2);
	}
	unsigned int align(enum asmjit::AlignMode a0, unsigned int a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "align");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::align(a0, a1);
	}
	void onSettingsUpdated() throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseAssembler *>(this), "onSettingsUpdated");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return BaseEmitter::onSettingsUpdated();
	}
};

void bind_unknown_unknown_32(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::BaseAssembler file: line:29
		pybind11::class_<asmjit::BaseAssembler, std::shared_ptr<asmjit::BaseAssembler>, PyCallBack_asmjit_BaseAssembler, asmjit::BaseEmitter> cl(M("asmjit"), "BaseAssembler", "Base assembler.\n\n This is a base class that provides interface used by architecture specific\n assembler implementations. Assembler doesn't hold any data, instead it's\n attached to  which provides all the data that Assembler\n needs and which can be altered by it.\n\n Check out architecture specific assemblers for more details and examples:\n\n   -  - X86/X64 assembler implementation.\n   -  - AArch64 assembler implementation.");
		cl.def( pybind11::init( [](){ return new asmjit::BaseAssembler(); }, [](){ return new PyCallBack_asmjit_BaseAssembler(); } ) );
		cl.def("bufferCapacity", (unsigned long (asmjit::BaseAssembler::*)() const) &asmjit::BaseAssembler::bufferCapacity, "Returns the capacity of the current CodeBuffer.\n\nC++: asmjit::BaseAssembler::bufferCapacity() const --> unsigned long");
		cl.def("remainingSpace", (unsigned long (asmjit::BaseAssembler::*)() const) &asmjit::BaseAssembler::remainingSpace, "Returns the number of remaining bytes in the current CodeBuffer.\n\nC++: asmjit::BaseAssembler::remainingSpace() const --> unsigned long");
		cl.def("offset", (unsigned long (asmjit::BaseAssembler::*)() const) &asmjit::BaseAssembler::offset, "Returns the current position in the CodeBuffer.\n\nC++: asmjit::BaseAssembler::offset() const --> unsigned long");
		cl.def("setOffset", (unsigned int (asmjit::BaseAssembler::*)(unsigned long)) &asmjit::BaseAssembler::setOffset, "Sets the current position in the CodeBuffer to `offset`.\n\n \n The `offset` cannot be greater than buffer size even if it's\n within the buffer's capacity.\n\nC++: asmjit::BaseAssembler::setOffset(unsigned long) --> unsigned int", pybind11::arg("offset"));
		cl.def("bufferData", (unsigned char * (asmjit::BaseAssembler::*)() const) &asmjit::BaseAssembler::bufferData, "Returns the start of the CodeBuffer in the current section.\n\nC++: asmjit::BaseAssembler::bufferData() const --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("bufferEnd", (unsigned char * (asmjit::BaseAssembler::*)() const) &asmjit::BaseAssembler::bufferEnd, "Returns the end (first invalid byte) in the current section.\n\nC++: asmjit::BaseAssembler::bufferEnd() const --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("bufferPtr", (unsigned char * (asmjit::BaseAssembler::*)() const) &asmjit::BaseAssembler::bufferPtr, "Returns the current pointer in the CodeBuffer in the current section.\n\nC++: asmjit::BaseAssembler::bufferPtr() const --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("currentSection", (class asmjit::Section * (asmjit::BaseAssembler::*)() const) &asmjit::BaseAssembler::currentSection, "Returns the current section.\n\nC++: asmjit::BaseAssembler::currentSection() const --> class asmjit::Section *", pybind11::return_value_policy::automatic);
		cl.def("section", (unsigned int (asmjit::BaseAssembler::*)(class asmjit::Section *)) &asmjit::BaseAssembler::section, "C++: asmjit::BaseAssembler::section(class asmjit::Section *) --> unsigned int", pybind11::arg("section"));
		cl.def("newLabel", (class asmjit::Label (asmjit::BaseAssembler::*)()) &asmjit::BaseAssembler::newLabel, "\\{\n\nC++: asmjit::BaseAssembler::newLabel() --> class asmjit::Label");
		cl.def("newNamedLabel", [](asmjit::BaseAssembler &o, const char * a0) -> asmjit::Label { return o.newNamedLabel(a0); }, "", pybind11::arg("name"));
		cl.def("newNamedLabel", [](asmjit::BaseAssembler &o, const char * a0, unsigned long const & a1) -> asmjit::Label { return o.newNamedLabel(a0, a1); }, "", pybind11::arg("name"), pybind11::arg("nameSize"));
		cl.def("newNamedLabel", [](asmjit::BaseAssembler &o, const char * a0, unsigned long const & a1, enum asmjit::LabelType const & a2) -> asmjit::Label { return o.newNamedLabel(a0, a1, a2); }, "", pybind11::arg("name"), pybind11::arg("nameSize"), pybind11::arg("type"));
		cl.def("newNamedLabel", (class asmjit::Label (asmjit::BaseAssembler::*)(const char *, unsigned long, enum asmjit::LabelType, unsigned int)) &asmjit::BaseAssembler::newNamedLabel, "C++: asmjit::BaseAssembler::newNamedLabel(const char *, unsigned long, enum asmjit::LabelType, unsigned int) --> class asmjit::Label", pybind11::arg("name"), pybind11::arg("nameSize"), pybind11::arg("type"), pybind11::arg("parentId"));
		cl.def("bind", (unsigned int (asmjit::BaseAssembler::*)(const class asmjit::Label &)) &asmjit::BaseAssembler::bind, "C++: asmjit::BaseAssembler::bind(const class asmjit::Label &) --> unsigned int", pybind11::arg("label"));
		cl.def("embed", (unsigned int (asmjit::BaseAssembler::*)(const void *, unsigned long)) &asmjit::BaseAssembler::embed, "\\{\n\nC++: asmjit::BaseAssembler::embed(const void *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("dataSize"));
		cl.def("embedDataArray", [](asmjit::BaseAssembler &o, enum asmjit::TypeId const & a0, const void * a1, unsigned long const & a2) -> unsigned int { return o.embedDataArray(a0, a1, a2); }, "", pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("itemCount"));
		cl.def("embedDataArray", (unsigned int (asmjit::BaseAssembler::*)(enum asmjit::TypeId, const void *, unsigned long, unsigned long)) &asmjit::BaseAssembler::embedDataArray, "C++: asmjit::BaseAssembler::embedDataArray(enum asmjit::TypeId, const void *, unsigned long, unsigned long) --> unsigned int", pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("itemCount"), pybind11::arg("repeatCount"));
		cl.def("embedConstPool", (unsigned int (asmjit::BaseAssembler::*)(const class asmjit::Label &, const class asmjit::ConstPool &)) &asmjit::BaseAssembler::embedConstPool, "C++: asmjit::BaseAssembler::embedConstPool(const class asmjit::Label &, const class asmjit::ConstPool &) --> unsigned int", pybind11::arg("label"), pybind11::arg("pool"));
		cl.def("embedLabel", [](asmjit::BaseAssembler &o, const class asmjit::Label & a0) -> unsigned int { return o.embedLabel(a0); }, "", pybind11::arg("label"));
		cl.def("embedLabel", (unsigned int (asmjit::BaseAssembler::*)(const class asmjit::Label &, unsigned long)) &asmjit::BaseAssembler::embedLabel, "C++: asmjit::BaseAssembler::embedLabel(const class asmjit::Label &, unsigned long) --> unsigned int", pybind11::arg("label"), pybind11::arg("dataSize"));
		cl.def("embedLabelDelta", [](asmjit::BaseAssembler &o, const class asmjit::Label & a0, const class asmjit::Label & a1) -> unsigned int { return o.embedLabelDelta(a0, a1); }, "", pybind11::arg("label"), pybind11::arg("base"));
		cl.def("embedLabelDelta", (unsigned int (asmjit::BaseAssembler::*)(const class asmjit::Label &, const class asmjit::Label &, unsigned long)) &asmjit::BaseAssembler::embedLabelDelta, "C++: asmjit::BaseAssembler::embedLabelDelta(const class asmjit::Label &, const class asmjit::Label &, unsigned long) --> unsigned int", pybind11::arg("label"), pybind11::arg("base"), pybind11::arg("dataSize"));
		cl.def("comment", [](asmjit::BaseAssembler &o, const char * a0) -> unsigned int { return o.comment(a0); }, "", pybind11::arg("data"));
		cl.def("comment", (unsigned int (asmjit::BaseAssembler::*)(const char *, unsigned long)) &asmjit::BaseAssembler::comment, "\\{\n\nC++: asmjit::BaseAssembler::comment(const char *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("onAttach", (unsigned int (asmjit::BaseAssembler::*)(class asmjit::CodeHolder *)) &asmjit::BaseAssembler::onAttach, "\\{\n\nC++: asmjit::BaseAssembler::onAttach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onDetach", (unsigned int (asmjit::BaseAssembler::*)(class asmjit::CodeHolder *)) &asmjit::BaseAssembler::onDetach, "C++: asmjit::BaseAssembler::onDetach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
	}
	// asmjit::ConstPoolScope file: line:19
	pybind11::enum_<asmjit::ConstPoolScope>(M("asmjit"), "ConstPoolScope", "Constant pool scope.")
		.value("kLocal", asmjit::ConstPoolScope::kLocal)
		.value("kGlobal", asmjit::ConstPoolScope::kGlobal)
		.value("kMaxValue", asmjit::ConstPoolScope::kMaxValue);

;

	{ // asmjit::ConstPool file: line:33
		pybind11::class_<asmjit::ConstPool, std::shared_ptr<asmjit::ConstPool>> cl(M("asmjit"), "ConstPool", "Constant pool.\n\n Constant pool is designed to hold 1, 2, 4, 8, 16, 32, and 64 byte constants. It's not designed to hold constants\n having arbitrary length like strings and arrays.");

		pybind11::enum_<asmjit::ConstPool::Index>(cl, "Index", pybind11::arithmetic(), "Index of a given size in const-pool table.")
			.value("kIndex1", asmjit::ConstPool::kIndex1)
			.value("kIndex2", asmjit::ConstPool::kIndex2)
			.value("kIndex4", asmjit::ConstPool::kIndex4)
			.value("kIndex8", asmjit::ConstPool::kIndex8)
			.value("kIndex16", asmjit::ConstPool::kIndex16)
			.value("kIndex32", asmjit::ConstPool::kIndex32)
			.value("kIndex64", asmjit::ConstPool::kIndex64)
			.value("kIndexCount", asmjit::ConstPool::kIndexCount)
			.export_values();




		cl.def("empty", (bool (asmjit::ConstPool::*)() const) &asmjit::ConstPool::empty, "Tests whether the constant-pool is empty.\n\nC++: asmjit::ConstPool::empty() const --> bool");
		cl.def("size", (unsigned long (asmjit::ConstPool::*)() const) &asmjit::ConstPool::size, "Returns the size of the constant-pool in bytes.\n\nC++: asmjit::ConstPool::size() const --> unsigned long");
		cl.def("alignment", (unsigned long (asmjit::ConstPool::*)() const) &asmjit::ConstPool::alignment, "Returns minimum alignment.\n\nC++: asmjit::ConstPool::alignment() const --> unsigned long");
		cl.def("minItemSize", (unsigned long (asmjit::ConstPool::*)() const) &asmjit::ConstPool::minItemSize, "Returns the minimum size of all items added to the constant pool.\n\nC++: asmjit::ConstPool::minItemSize() const --> unsigned long");
		cl.def("add", (unsigned int (asmjit::ConstPool::*)(const void *, unsigned long, unsigned long &)) &asmjit::ConstPool::add, "Adds a constant to the constant pool.\n\n The constant must have known size, which is 1, 2, 4, 8, 16 or 32 bytes. The constant is added to the pool only\n if it doesn't not exist, otherwise cached value is returned.\n\n AsmJit is able to subdivide added constants, so for example if you add 8-byte constant 0x1122334455667788 it\n will create the following slots:\n\n   8-byte: 0x1122334455667788\n   4-byte: 0x11223344, 0x55667788\n\n The reason is that when combining MMX/SSE/AVX code some patterns are used frequently. However, AsmJit is not\n able to reallocate a constant that has been already added. For example if you try to add 4-byte constant and\n then 8-byte constant having the same 4-byte pattern as the previous one, two independent slots will be used.\n\nC++: asmjit::ConstPool::add(const void *, unsigned long, unsigned long &) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"), pybind11::arg("dstOffset"));
		cl.def("fill", (void (asmjit::ConstPool::*)(void *) const) &asmjit::ConstPool::fill, "Fills the destination with the content of this constant pool.\n\nC++: asmjit::ConstPool::fill(void *) const --> void", pybind11::arg("dst"));

		{ // asmjit::ConstPool::Gap file: line:52
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::ConstPool::Gap, std::shared_ptr<asmjit::ConstPool::Gap>> cl(enclosing_class, "Gap", "Zone-allocated const-pool gap created by two differently aligned constants.");
			cl.def( pybind11::init( [](){ return new asmjit::ConstPool::Gap(); } ) );


		}

		{ // asmjit::ConstPool::Node file: line:62
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::ConstPool::Node, std::shared_ptr<asmjit::ConstPool::Node>> cl(enclosing_class, "Node", "Zone-allocated const-pool node.");
			cl.def( pybind11::init<unsigned long, bool>(), pybind11::arg("offset"), pybind11::arg("shared") );



			cl.def("data", (void * (asmjit::ConstPool::Node::*)() const) &asmjit::ConstPool::Node::data, "C++: asmjit::ConstPool::Node::data() const --> void *", pybind11::return_value_policy::automatic);
		}

		{ // asmjit::ConstPool::Compare file: line:82
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::ConstPool::Compare, std::shared_ptr<asmjit::ConstPool::Compare>> cl(enclosing_class, "Compare", "Data comparer used internally.");
			cl.def( pybind11::init<unsigned long>(), pybind11::arg("dataSize") );

			cl.def( pybind11::init( [](asmjit::ConstPool::Compare const &o){ return new asmjit::ConstPool::Compare(o); } ) );

			cl.def("__call__", (int (asmjit::ConstPool::Compare::*)(const class asmjit::ConstPool::Node &, const class asmjit::ConstPool::Node &) const) &asmjit::ConstPool::Compare::operator(), "C++: asmjit::ConstPool::Compare::operator()(const class asmjit::ConstPool::Node &, const class asmjit::ConstPool::Node &) const --> int", pybind11::arg("a"), pybind11::arg("b"));
			cl.def("__call__", (int (asmjit::ConstPool::Compare::*)(const class asmjit::ConstPool::Node &, const void *) const) &asmjit::ConstPool::Compare::operator(), "C++: asmjit::ConstPool::Compare::operator()(const class asmjit::ConstPool::Node &, const void *) const --> int", pybind11::arg("a"), pybind11::arg("data"));
		}

		{ // asmjit::ConstPool::Tree file: line:99
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::ConstPool::Tree, std::shared_ptr<asmjit::ConstPool::Tree>> cl(enclosing_class, "Tree", "Zone-allocated const-pool tree.");
			cl.def( pybind11::init( [](){ return new asmjit::ConstPool::Tree(); } ), "doc" );
			cl.def( pybind11::init<unsigned long>(), pybind11::arg("dataSize") );




			cl.def("reset", (void (asmjit::ConstPool::Tree::*)()) &asmjit::ConstPool::Tree::reset, "C++: asmjit::ConstPool::Tree::reset() --> void");
			cl.def("empty", (bool (asmjit::ConstPool::Tree::*)() const) &asmjit::ConstPool::Tree::empty, "C++: asmjit::ConstPool::Tree::empty() const --> bool");
			cl.def("size", (unsigned long (asmjit::ConstPool::Tree::*)() const) &asmjit::ConstPool::Tree::size, "C++: asmjit::ConstPool::Tree::size() const --> unsigned long");
			cl.def("setDataSize", (void (asmjit::ConstPool::Tree::*)(unsigned long)) &asmjit::ConstPool::Tree::setDataSize, "C++: asmjit::ConstPool::Tree::setDataSize(unsigned long) --> void", pybind11::arg("dataSize"));
			cl.def("get", (class asmjit::ConstPool::Node * (asmjit::ConstPool::Tree::*)(const void *)) &asmjit::ConstPool::Tree::get, "C++: asmjit::ConstPool::Tree::get(const void *) --> class asmjit::ConstPool::Node *", pybind11::return_value_policy::automatic, pybind11::arg("data"));
			cl.def("insert", (void (asmjit::ConstPool::Tree::*)(class asmjit::ConstPool::Node *)) &asmjit::ConstPool::Tree::insert, "C++: asmjit::ConstPool::Tree::insert(class asmjit::ConstPool::Node *) --> void", pybind11::arg("node"));
		}

	}
	// asmjit::NodeType file: line:45
	pybind11::enum_<asmjit::NodeType>(M("asmjit"), "NodeType", "Type of node used by  and ")
		.value("kNone", asmjit::NodeType::kNone)
		.value("kInst", asmjit::NodeType::kInst)
		.value("kSection", asmjit::NodeType::kSection)
		.value("kLabel", asmjit::NodeType::kLabel)
		.value("kAlign", asmjit::NodeType::kAlign)
		.value("kEmbedData", asmjit::NodeType::kEmbedData)
		.value("kEmbedLabel", asmjit::NodeType::kEmbedLabel)
		.value("kEmbedLabelDelta", asmjit::NodeType::kEmbedLabelDelta)
		.value("kConstPool", asmjit::NodeType::kConstPool)
		.value("kComment", asmjit::NodeType::kComment)
		.value("kSentinel", asmjit::NodeType::kSentinel)
		.value("kJump", asmjit::NodeType::kJump)
		.value("kFunc", asmjit::NodeType::kFunc)
		.value("kFuncRet", asmjit::NodeType::kFuncRet)
		.value("kInvoke", asmjit::NodeType::kInvoke)
		.value("kUser", asmjit::NodeType::kUser);

;

}
