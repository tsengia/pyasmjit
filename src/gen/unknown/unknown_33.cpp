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

// asmjit::BaseBuilder file: line:185
struct PyCallBack_asmjit_BaseBuilder : public asmjit::BaseBuilder {
	using asmjit::BaseBuilder::BaseBuilder;

	unsigned int section(class asmjit::Section * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "section");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::section(a0);
	}
	class asmjit::Label newLabel() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "newLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class asmjit::Label>::value) {
				static pybind11::detail::override_caster_t<class asmjit::Label> caster;
				return pybind11::detail::cast_ref<class asmjit::Label>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class asmjit::Label>(std::move(o));
		}
		return BaseBuilder::newLabel();
	}
	class asmjit::Label newNamedLabel(const char * a0, unsigned long a1, enum asmjit::LabelType a2, unsigned int a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "newNamedLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<class asmjit::Label>::value) {
				static pybind11::detail::override_caster_t<class asmjit::Label> caster;
				return pybind11::detail::cast_ref<class asmjit::Label>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class asmjit::Label>(std::move(o));
		}
		return BaseBuilder::newNamedLabel(a0, a1, a2, a3);
	}
	unsigned int bind(const class asmjit::Label & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "bind");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::bind(a0);
	}
	unsigned int _emit(unsigned int a0, const struct asmjit::Operand_ & a1, const struct asmjit::Operand_ & a2, const struct asmjit::Operand_ & a3, const struct asmjit::Operand_ * a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "_emit");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::_emit(a0, a1, a2, a3, a4);
	}
	unsigned int align(enum asmjit::AlignMode a0, unsigned int a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "align");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::align(a0, a1);
	}
	unsigned int embed(const void * a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "embed");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::embed(a0, a1);
	}
	unsigned int embedDataArray(enum asmjit::TypeId a0, const void * a1, unsigned long a2, unsigned long a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "embedDataArray");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::embedDataArray(a0, a1, a2, a3);
	}
	unsigned int embedConstPool(const class asmjit::Label & a0, const class asmjit::ConstPool & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "embedConstPool");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::embedConstPool(a0, a1);
	}
	unsigned int embedLabel(const class asmjit::Label & a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "embedLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::embedLabel(a0, a1);
	}
	unsigned int embedLabelDelta(const class asmjit::Label & a0, const class asmjit::Label & a1, unsigned long a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "embedLabelDelta");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::embedLabelDelta(a0, a1, a2);
	}
	unsigned int comment(const char * a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "comment");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::comment(a0, a1);
	}
	unsigned int onAttach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "onAttach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::onAttach(a0);
	}
	unsigned int onDetach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "onDetach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseBuilder::onDetach(a0);
	}
	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "finalize");
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
	unsigned int _emitOpArray(unsigned int a0, const struct asmjit::Operand_ * a1, unsigned long a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "_emitOpArray");
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
	void onSettingsUpdated() throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseBuilder *>(this), "onSettingsUpdated");
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

void bind_unknown_unknown_33(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::NodeFlags file: line:90
	pybind11::enum_<asmjit::NodeFlags>(M("asmjit"), "NodeFlags", "Node flags, specify what the node is and/or does.")
		.value("kNone", asmjit::NodeFlags::kNone)
		.value("kIsCode", asmjit::NodeFlags::kIsCode)
		.value("kIsData", asmjit::NodeFlags::kIsData)
		.value("kIsInformative", asmjit::NodeFlags::kIsInformative)
		.value("kIsRemovable", asmjit::NodeFlags::kIsRemovable)
		.value("kHasNoEffect", asmjit::NodeFlags::kHasNoEffect)
		.value("kActsAsInst", asmjit::NodeFlags::kActsAsInst)
		.value("kActsAsLabel", asmjit::NodeFlags::kActsAsLabel)
		.value("kIsActive", asmjit::NodeFlags::kIsActive);

;

	// asmjit::SentinelType file: line:113
	pybind11::enum_<asmjit::SentinelType>(M("asmjit"), "SentinelType", "Type of the sentinel (purely informative purpose).")
		.value("kUnknown", asmjit::SentinelType::kUnknown)
		.value("kFuncEnd", asmjit::SentinelType::kFuncEnd);

;

	{ // asmjit::NodeList file: line:125
		pybind11::class_<asmjit::NodeList, std::shared_ptr<asmjit::NodeList>> cl(M("asmjit"), "NodeList", "Node list.\n\n A double-linked list of pointers to  managed by  or \n\n \n At the moment NodeList is just a view, but it's planned that it will get more functionality in the future.");
		cl.def( pybind11::init( [](){ return new asmjit::NodeList(); } ) );
		cl.def( pybind11::init<class asmjit::BaseNode *, class asmjit::BaseNode *>(), pybind11::arg("first"), pybind11::arg("last") );

		cl.def( pybind11::init( [](asmjit::NodeList const &o){ return new asmjit::NodeList(o); } ) );
		cl.def("reset", (void (asmjit::NodeList::*)()) &asmjit::NodeList::reset, "\\{\n\nC++: asmjit::NodeList::reset() --> void");
		cl.def("reset", (void (asmjit::NodeList::*)(class asmjit::BaseNode *, class asmjit::BaseNode *)) &asmjit::NodeList::reset, "C++: asmjit::NodeList::reset(class asmjit::BaseNode *, class asmjit::BaseNode *) --> void", pybind11::arg("first"), pybind11::arg("last"));
		cl.def("empty", (bool (asmjit::NodeList::*)() const) &asmjit::NodeList::empty, "\\{\n\nC++: asmjit::NodeList::empty() const --> bool");
		cl.def("first", (class asmjit::BaseNode * (asmjit::NodeList::*)() const) &asmjit::NodeList::first, "C++: asmjit::NodeList::first() const --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic);
		cl.def("last", (class asmjit::BaseNode * (asmjit::NodeList::*)() const) &asmjit::NodeList::last, "C++: asmjit::NodeList::last() const --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic);
	}
	{ // asmjit::BaseBuilder file: line:185
		pybind11::class_<asmjit::BaseBuilder, std::shared_ptr<asmjit::BaseBuilder>, PyCallBack_asmjit_BaseBuilder, asmjit::BaseEmitter> cl(M("asmjit"), "BaseBuilder", "Builder interface.\n\n `BaseBuilder` interface was designed to be used as a  replacement in case pre-processing or\n post-processing of the generated code is required. The code can be modified during or after code generation.\n Pre processing or post processing can be done manually or through a  object.  stores\n the emitted code as a double-linked list of nodes, which allows O(1) insertion and removal during processing.\n\n Check out architecture specific builders for more details and examples:\n\n   -  - X86/X64 builder implementation.\n   -  - AArch64 builder implementation.");
		cl.def( pybind11::init( [](){ return new asmjit::BaseBuilder(); }, [](){ return new PyCallBack_asmjit_BaseBuilder(); } ) );










		cl.def("nodeList", (class asmjit::NodeList (asmjit::BaseBuilder::*)() const) &asmjit::BaseBuilder::nodeList, "\\{\n\nC++: asmjit::BaseBuilder::nodeList() const --> class asmjit::NodeList");
		cl.def("firstNode", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)() const) &asmjit::BaseBuilder::firstNode, "Returns the first node.\n\nC++: asmjit::BaseBuilder::firstNode() const --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic);
		cl.def("lastNode", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)() const) &asmjit::BaseBuilder::lastNode, "Returns the last node.\n\nC++: asmjit::BaseBuilder::lastNode() const --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic);
		cl.def("addNode", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)(class asmjit::BaseNode *)) &asmjit::BaseBuilder::addNode, "Adds `node` after the current and sets the current node to the given `node`.\n\nC++: asmjit::BaseBuilder::addNode(class asmjit::BaseNode *) --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic, pybind11::arg("node"));
		cl.def("addAfter", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)(class asmjit::BaseNode *, class asmjit::BaseNode *)) &asmjit::BaseBuilder::addAfter, "Inserts the given `node` after `ref`.\n\nC++: asmjit::BaseBuilder::addAfter(class asmjit::BaseNode *, class asmjit::BaseNode *) --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic, pybind11::arg("node"), pybind11::arg("ref"));
		cl.def("addBefore", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)(class asmjit::BaseNode *, class asmjit::BaseNode *)) &asmjit::BaseBuilder::addBefore, "Inserts the given `node` before `ref`.\n\nC++: asmjit::BaseBuilder::addBefore(class asmjit::BaseNode *, class asmjit::BaseNode *) --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic, pybind11::arg("node"), pybind11::arg("ref"));
		cl.def("removeNode", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)(class asmjit::BaseNode *)) &asmjit::BaseBuilder::removeNode, "Removes the given `node`.\n\nC++: asmjit::BaseBuilder::removeNode(class asmjit::BaseNode *) --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic, pybind11::arg("node"));
		cl.def("removeNodes", (void (asmjit::BaseBuilder::*)(class asmjit::BaseNode *, class asmjit::BaseNode *)) &asmjit::BaseBuilder::removeNodes, "Removes multiple nodes.\n\nC++: asmjit::BaseBuilder::removeNodes(class asmjit::BaseNode *, class asmjit::BaseNode *) --> void", pybind11::arg("first"), pybind11::arg("last"));
		cl.def("cursor", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)() const) &asmjit::BaseBuilder::cursor, "Returns the cursor.\n\n When the Builder/Compiler is created it automatically creates a '.text'  which will be the\n initial one. When instructions are added they are always added after the cursor and the cursor is changed\n to be that newly added node. Use `setCursor()` to change where new nodes are inserted.\n\nC++: asmjit::BaseBuilder::cursor() const --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic);
		cl.def("setCursor", (class asmjit::BaseNode * (asmjit::BaseBuilder::*)(class asmjit::BaseNode *)) &asmjit::BaseBuilder::setCursor, "Sets the current node to `node` and return the previous one.\n\nC++: asmjit::BaseBuilder::setCursor(class asmjit::BaseNode *) --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic, pybind11::arg("node"));

		cl.def("hasRegisteredSectionNode", (bool (asmjit::BaseBuilder::*)(unsigned int) const) &asmjit::BaseBuilder::hasRegisteredSectionNode, "Tests whether the `SectionNode` of the given `sectionId` was registered.\n\nC++: asmjit::BaseBuilder::hasRegisteredSectionNode(unsigned int) const --> bool", pybind11::arg("sectionId"));
		cl.def("section", (unsigned int (asmjit::BaseBuilder::*)(class asmjit::Section *)) &asmjit::BaseBuilder::section, "C++: asmjit::BaseBuilder::section(class asmjit::Section *) --> unsigned int", pybind11::arg("section"));
		cl.def("hasDirtySectionLinks", (bool (asmjit::BaseBuilder::*)() const) &asmjit::BaseBuilder::hasDirtySectionLinks, "Returns whether the section links of active section nodes are dirty. You can update these links by calling\n `updateSectionLinks()` in such case.\n\nC++: asmjit::BaseBuilder::hasDirtySectionLinks() const --> bool");
		cl.def("updateSectionLinks", (void (asmjit::BaseBuilder::*)()) &asmjit::BaseBuilder::updateSectionLinks, "Updates links of all active section nodes.\n\nC++: asmjit::BaseBuilder::updateSectionLinks() --> void");
		cl.def("hasRegisteredLabelNode", (bool (asmjit::BaseBuilder::*)(unsigned int) const) &asmjit::BaseBuilder::hasRegisteredLabelNode, "Tests whether the `LabelNode` of the given `labelId` was registered.\n\nC++: asmjit::BaseBuilder::hasRegisteredLabelNode(unsigned int) const --> bool", pybind11::arg("labelId"));
		cl.def("hasRegisteredLabelNode", (bool (asmjit::BaseBuilder::*)(const class asmjit::Label &) const) &asmjit::BaseBuilder::hasRegisteredLabelNode, "C++: asmjit::BaseBuilder::hasRegisteredLabelNode(const class asmjit::Label &) const --> bool", pybind11::arg("label"));
		cl.def("registerLabelNode", (unsigned int (asmjit::BaseBuilder::*)(class asmjit::LabelNode *)) &asmjit::BaseBuilder::registerLabelNode, "Registers this  (internal).\n\n This function is used internally to register a newly created `LabelNode` with this instance of Builder/Compiler.\n Use  functions to get back  from a label or its identifier.\n\nC++: asmjit::BaseBuilder::registerLabelNode(class asmjit::LabelNode *) --> unsigned int", pybind11::arg("node"));
		cl.def("newLabel", (class asmjit::Label (asmjit::BaseBuilder::*)()) &asmjit::BaseBuilder::newLabel, "C++: asmjit::BaseBuilder::newLabel() --> class asmjit::Label");
		cl.def("newNamedLabel", [](asmjit::BaseBuilder &o, const char * a0) -> asmjit::Label { return o.newNamedLabel(a0); }, "", pybind11::arg("name"));
		cl.def("newNamedLabel", [](asmjit::BaseBuilder &o, const char * a0, unsigned long const & a1) -> asmjit::Label { return o.newNamedLabel(a0, a1); }, "", pybind11::arg("name"), pybind11::arg("nameSize"));
		cl.def("newNamedLabel", [](asmjit::BaseBuilder &o, const char * a0, unsigned long const & a1, enum asmjit::LabelType const & a2) -> asmjit::Label { return o.newNamedLabel(a0, a1, a2); }, "", pybind11::arg("name"), pybind11::arg("nameSize"), pybind11::arg("type"));
		cl.def("newNamedLabel", (class asmjit::Label (asmjit::BaseBuilder::*)(const char *, unsigned long, enum asmjit::LabelType, unsigned int)) &asmjit::BaseBuilder::newNamedLabel, "C++: asmjit::BaseBuilder::newNamedLabel(const char *, unsigned long, enum asmjit::LabelType, unsigned int) --> class asmjit::Label", pybind11::arg("name"), pybind11::arg("nameSize"), pybind11::arg("type"), pybind11::arg("parentId"));
		cl.def("bind", (unsigned int (asmjit::BaseBuilder::*)(const class asmjit::Label &)) &asmjit::BaseBuilder::bind, "C++: asmjit::BaseBuilder::bind(const class asmjit::Label &) --> unsigned int", pybind11::arg("label"));
		cl.def("passByName", (class asmjit::Pass * (asmjit::BaseBuilder::*)(const char *) const) &asmjit::BaseBuilder::passByName, "Returns `Pass` by name.\n\n If the pass having the given `name` doesn't exist `nullptr` is returned.\n\nC++: asmjit::BaseBuilder::passByName(const char *) const --> class asmjit::Pass *", pybind11::return_value_policy::automatic, pybind11::arg("name"));
		cl.def("addPass", (unsigned int (asmjit::BaseBuilder::*)(class asmjit::Pass *)) &asmjit::BaseBuilder::addPass, "Adds `pass` to the list of passes.\n\nC++: asmjit::BaseBuilder::addPass(class asmjit::Pass *) --> unsigned int", pybind11::arg("pass"));
		cl.def("deletePass", (unsigned int (asmjit::BaseBuilder::*)(class asmjit::Pass *)) &asmjit::BaseBuilder::deletePass, "Removes `pass` from the list of passes and delete it.\n\nC++: asmjit::BaseBuilder::deletePass(class asmjit::Pass *) --> unsigned int", pybind11::arg("pass"));
		cl.def("runPasses", (unsigned int (asmjit::BaseBuilder::*)()) &asmjit::BaseBuilder::runPasses, "Runs all passes in order.\n\nC++: asmjit::BaseBuilder::runPasses() --> unsigned int");

		cl.def("align", (unsigned int (asmjit::BaseBuilder::*)(enum asmjit::AlignMode, unsigned int)) &asmjit::BaseBuilder::align, "\\{\n\nC++: asmjit::BaseBuilder::align(enum asmjit::AlignMode, unsigned int) --> unsigned int", pybind11::arg("alignMode"), pybind11::arg("alignment"));
		cl.def("embed", (unsigned int (asmjit::BaseBuilder::*)(const void *, unsigned long)) &asmjit::BaseBuilder::embed, "\\{\n\nC++: asmjit::BaseBuilder::embed(const void *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("dataSize"));
		cl.def("embedDataArray", [](asmjit::BaseBuilder &o, enum asmjit::TypeId const & a0, const void * a1, unsigned long const & a2) -> unsigned int { return o.embedDataArray(a0, a1, a2); }, "", pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("count"));
		cl.def("embedDataArray", (unsigned int (asmjit::BaseBuilder::*)(enum asmjit::TypeId, const void *, unsigned long, unsigned long)) &asmjit::BaseBuilder::embedDataArray, "C++: asmjit::BaseBuilder::embedDataArray(enum asmjit::TypeId, const void *, unsigned long, unsigned long) --> unsigned int", pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("count"), pybind11::arg("repeat"));
		cl.def("embedConstPool", (unsigned int (asmjit::BaseBuilder::*)(const class asmjit::Label &, const class asmjit::ConstPool &)) &asmjit::BaseBuilder::embedConstPool, "C++: asmjit::BaseBuilder::embedConstPool(const class asmjit::Label &, const class asmjit::ConstPool &) --> unsigned int", pybind11::arg("label"), pybind11::arg("pool"));
		cl.def("embedLabel", [](asmjit::BaseBuilder &o, const class asmjit::Label & a0) -> unsigned int { return o.embedLabel(a0); }, "", pybind11::arg("label"));
		cl.def("embedLabel", (unsigned int (asmjit::BaseBuilder::*)(const class asmjit::Label &, unsigned long)) &asmjit::BaseBuilder::embedLabel, "C++: asmjit::BaseBuilder::embedLabel(const class asmjit::Label &, unsigned long) --> unsigned int", pybind11::arg("label"), pybind11::arg("dataSize"));
		cl.def("embedLabelDelta", [](asmjit::BaseBuilder &o, const class asmjit::Label & a0, const class asmjit::Label & a1) -> unsigned int { return o.embedLabelDelta(a0, a1); }, "", pybind11::arg("label"), pybind11::arg("base"));
		cl.def("embedLabelDelta", (unsigned int (asmjit::BaseBuilder::*)(const class asmjit::Label &, const class asmjit::Label &, unsigned long)) &asmjit::BaseBuilder::embedLabelDelta, "C++: asmjit::BaseBuilder::embedLabelDelta(const class asmjit::Label &, const class asmjit::Label &, unsigned long) --> unsigned int", pybind11::arg("label"), pybind11::arg("base"), pybind11::arg("dataSize"));
		cl.def("comment", [](asmjit::BaseBuilder &o, const char * a0) -> unsigned int { return o.comment(a0); }, "", pybind11::arg("data"));
		cl.def("comment", (unsigned int (asmjit::BaseBuilder::*)(const char *, unsigned long)) &asmjit::BaseBuilder::comment, "\\{\n\nC++: asmjit::BaseBuilder::comment(const char *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("serializeTo", (unsigned int (asmjit::BaseBuilder::*)(class asmjit::BaseEmitter *)) &asmjit::BaseBuilder::serializeTo, "Serializes everything the given emitter `dst`.\n\n Although not explicitly required the emitter will most probably be of Assembler type. The reason is that\n there is no known use of serializing nodes held by Builder/Compiler into another Builder-like emitter.\n\nC++: asmjit::BaseBuilder::serializeTo(class asmjit::BaseEmitter *) --> unsigned int", pybind11::arg("dst"));
		cl.def("onAttach", (unsigned int (asmjit::BaseBuilder::*)(class asmjit::CodeHolder *)) &asmjit::BaseBuilder::onAttach, "\\{\n\nC++: asmjit::BaseBuilder::onAttach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onDetach", (unsigned int (asmjit::BaseBuilder::*)(class asmjit::CodeHolder *)) &asmjit::BaseBuilder::onDetach, "C++: asmjit::BaseBuilder::onDetach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
	}
}
