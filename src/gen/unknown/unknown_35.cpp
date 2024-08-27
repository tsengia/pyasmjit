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

// asmjit::BaseCompiler file: line:51
struct PyCallBack_asmjit_BaseCompiler : public asmjit::BaseCompiler {
	using asmjit::BaseCompiler::BaseCompiler;

	unsigned int onAttach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "onAttach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseCompiler::onAttach(a0);
	}
	unsigned int onDetach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "onDetach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseCompiler::onDetach(a0);
	}
	unsigned int section(class asmjit::Section * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "section");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "newLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "newNamedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "bind");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "_emit");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "align");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "embed");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "embedDataArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "embedConstPool");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "embedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "embedLabelDelta");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "comment");
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
	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "finalize");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "_emitOpArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseCompiler *>(this), "onSettingsUpdated");
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

void bind_unknown_unknown_35(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::BaseCompiler file: line:51
		pybind11::class_<asmjit::BaseCompiler, std::shared_ptr<asmjit::BaseCompiler>, PyCallBack_asmjit_BaseCompiler, asmjit::BaseBuilder> cl(M("asmjit"), "BaseCompiler", "Code emitter that uses virtual registers and performs register allocation.\n\n Compiler is a high-level code-generation tool that provides register allocation and automatic handling of function\n calling conventions. It was primarily designed for merging multiple parts of code into a function without worrying\n about registers and function calling conventions.\n\n BaseCompiler can be used, with a minimum effort, to handle 32-bit and 64-bit code generation within a single code\n base.\n\n BaseCompiler is based on BaseBuilder and contains all the features it provides. It means that the code it stores\n can be modified (removed, added, injected) and analyzed. When the code is finalized the compiler can emit the code\n into an Assembler to translate the abstract representation into a machine code.\n\n Check out architecture specific compilers for more details and examples:\n\n   -  - X86/X64 compiler implementation.\n   -  - AArch64 compiler implementation.");
		cl.def( pybind11::init( [](){ return new asmjit::BaseCompiler(); }, [](){ return new PyCallBack_asmjit_BaseCompiler(); } ) );



		cl.def("func", (class asmjit::FuncNode * (asmjit::BaseCompiler::*)() const) &asmjit::BaseCompiler::func, "Returns the current function.\n\nC++: asmjit::BaseCompiler::func() const --> class asmjit::FuncNode *", pybind11::return_value_policy::automatic);
		cl.def("newFunc", (class asmjit::FuncNode * (asmjit::BaseCompiler::*)(const struct asmjit::FuncSignature &)) &asmjit::BaseCompiler::newFunc, "Creates a new  with the given `signature` and returns it.\n\nC++: asmjit::BaseCompiler::newFunc(const struct asmjit::FuncSignature &) --> class asmjit::FuncNode *", pybind11::return_value_policy::automatic, pybind11::arg("signature"));
		cl.def("addFunc", (class asmjit::FuncNode * (asmjit::BaseCompiler::*)(const struct asmjit::FuncSignature &)) &asmjit::BaseCompiler::addFunc, "Creates a new  with the given `signature`, adds it to the instruction stream by using\n the  overload, and returns it.\n\nC++: asmjit::BaseCompiler::addFunc(const struct asmjit::FuncSignature &) --> class asmjit::FuncNode *", pybind11::return_value_policy::automatic, pybind11::arg("signature"));
		cl.def("addFunc", (class asmjit::FuncNode * (asmjit::BaseCompiler::*)(class asmjit::FuncNode *)) &asmjit::BaseCompiler::addFunc, "Adds a function `node` to the instruction stream.\n\nC++: asmjit::BaseCompiler::addFunc(class asmjit::FuncNode *) --> class asmjit::FuncNode *", pybind11::return_value_policy::automatic, pybind11::arg("func"));
		cl.def("endFunc", (unsigned int (asmjit::BaseCompiler::*)()) &asmjit::BaseCompiler::endFunc, "Emits a sentinel that marks the end of the current function.\n\nC++: asmjit::BaseCompiler::endFunc() --> unsigned int");
		cl.def("addRet", (unsigned int (asmjit::BaseCompiler::*)(const struct asmjit::Operand_ &, const struct asmjit::Operand_ &)) &asmjit::BaseCompiler::addRet, "C++: asmjit::BaseCompiler::addRet(const struct asmjit::Operand_ &, const struct asmjit::Operand_ &) --> unsigned int", pybind11::arg("o0"), pybind11::arg("o1"));







		cl.def("isVirtIdValid", (bool (asmjit::BaseCompiler::*)(unsigned int) const) &asmjit::BaseCompiler::isVirtIdValid, "Tests whether the given `id` is a valid virtual register id.\n\nC++: asmjit::BaseCompiler::isVirtIdValid(unsigned int) const --> bool", pybind11::arg("id"));
		cl.def("isVirtRegValid", (bool (asmjit::BaseCompiler::*)(const class asmjit::BaseReg &) const) &asmjit::BaseCompiler::isVirtRegValid, "Tests whether the given `reg` is a virtual register having a valid id.\n\nC++: asmjit::BaseCompiler::isVirtRegValid(const class asmjit::BaseReg &) const --> bool", pybind11::arg("reg"));
		cl.def("virtRegById", (class asmjit::VirtReg * (asmjit::BaseCompiler::*)(unsigned int) const) &asmjit::BaseCompiler::virtRegById, "Returns  associated with the given `id`.\n\nC++: asmjit::BaseCompiler::virtRegById(unsigned int) const --> class asmjit::VirtReg *", pybind11::return_value_policy::automatic, pybind11::arg("id"));
		cl.def("virtRegByReg", (class asmjit::VirtReg * (asmjit::BaseCompiler::*)(const class asmjit::BaseReg &) const) &asmjit::BaseCompiler::virtRegByReg, "Returns  associated with the given `reg`.\n\nC++: asmjit::BaseCompiler::virtRegByReg(const class asmjit::BaseReg &) const --> class asmjit::VirtReg *", pybind11::return_value_policy::automatic, pybind11::arg("reg"));
		cl.def("virtRegByIndex", (class asmjit::VirtReg * (asmjit::BaseCompiler::*)(unsigned int) const) &asmjit::BaseCompiler::virtRegByIndex, "Returns  associated with the given virtual register `index`.\n\n \n This is not the same as virtual register id. The conversion between id and its index is implemented\n by  and  functions.\n\nC++: asmjit::BaseCompiler::virtRegByIndex(unsigned int) const --> class asmjit::VirtReg *", pybind11::return_value_policy::automatic, pybind11::arg("index"));


		cl.def("setStackSize", [](asmjit::BaseCompiler &o, unsigned int const & a0, unsigned int const & a1) -> unsigned int { return o.setStackSize(a0, a1); }, "", pybind11::arg("virtId"), pybind11::arg("newSize"));
		cl.def("setStackSize", (unsigned int (asmjit::BaseCompiler::*)(unsigned int, unsigned int, unsigned int)) &asmjit::BaseCompiler::setStackSize, "Updates the stack size of a stack created by `_newStack()` by its `virtId`.\n\nC++: asmjit::BaseCompiler::setStackSize(unsigned int, unsigned int, unsigned int) --> unsigned int", pybind11::arg("virtId"), pybind11::arg("newSize"), pybind11::arg("newAlignment"));
		cl.def("setStackSize", [](asmjit::BaseCompiler &o, const class asmjit::BaseMem & a0, unsigned int const & a1) -> unsigned int { return o.setStackSize(a0, a1); }, "", pybind11::arg("mem"), pybind11::arg("newSize"));
		cl.def("setStackSize", (unsigned int (asmjit::BaseCompiler::*)(const class asmjit::BaseMem &, unsigned int, unsigned int)) &asmjit::BaseCompiler::setStackSize, "Updates the stack size of a stack created by `_newStack()`.\n\nC++: asmjit::BaseCompiler::setStackSize(const class asmjit::BaseMem &, unsigned int, unsigned int) --> unsigned int", pybind11::arg("mem"), pybind11::arg("newSize"), pybind11::arg("newAlignment"));

		cl.def("rename", [](asmjit::BaseCompiler &o, const class asmjit::BaseReg & a0, const char * a1) -> void { return o.rename(a0, a1); }, "", pybind11::arg("reg"), pybind11::arg("fmt"));
		cl.def("emitAnnotatedJump", (unsigned int (asmjit::BaseCompiler::*)(unsigned int, const struct asmjit::Operand_ &, class asmjit::JumpAnnotation *)) &asmjit::BaseCompiler::emitAnnotatedJump, "C++: asmjit::BaseCompiler::emitAnnotatedJump(unsigned int, const struct asmjit::Operand_ &, class asmjit::JumpAnnotation *) --> unsigned int", pybind11::arg("instId"), pybind11::arg("o0"), pybind11::arg("annotation"));
		cl.def("newJumpAnnotation", (class asmjit::JumpAnnotation * (asmjit::BaseCompiler::*)()) &asmjit::BaseCompiler::newJumpAnnotation, "Returns a new `JumpAnnotation` instance, which can be used to aggregate possible targets of a jump where the\n target is not a label, for example to implement jump tables.\n\nC++: asmjit::BaseCompiler::newJumpAnnotation() --> class asmjit::JumpAnnotation *", pybind11::return_value_policy::automatic);
		cl.def("onAttach", (unsigned int (asmjit::BaseCompiler::*)(class asmjit::CodeHolder *)) &asmjit::BaseCompiler::onAttach, "\\{\n\nC++: asmjit::BaseCompiler::onAttach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onDetach", (unsigned int (asmjit::BaseCompiler::*)(class asmjit::CodeHolder *)) &asmjit::BaseCompiler::onDetach, "C++: asmjit::BaseCompiler::onDetach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
	}
	{ // asmjit::JumpAnnotation file: line:273
		pybind11::class_<asmjit::JumpAnnotation, std::shared_ptr<asmjit::JumpAnnotation>> cl(M("asmjit"), "JumpAnnotation", "Jump annotation used to annotate jumps.\n\n  allows to emit jumps where the target is either register or memory operand. Such jumps cannot be\n trivially inspected, so instead of doing heuristics AsmJit allows to annotate such jumps with possible targets.\n Register allocator then uses the annotation to construct control-flow, which is then used by liveness analysis and\n other tools to prepare ground for register allocation.");
		cl.def( pybind11::init<class asmjit::BaseCompiler *, unsigned int>(), pybind11::arg("compiler"), pybind11::arg("annotationId") );



		cl.def("compiler", (class asmjit::BaseCompiler * (asmjit::JumpAnnotation::*)() const) &asmjit::JumpAnnotation::compiler, "Returns the compiler that owns this JumpAnnotation.\n\nC++: asmjit::JumpAnnotation::compiler() const --> class asmjit::BaseCompiler *", pybind11::return_value_policy::automatic);
		cl.def("annotationId", (unsigned int (asmjit::JumpAnnotation::*)() const) &asmjit::JumpAnnotation::annotationId, "Returns the annotation id.\n\nC++: asmjit::JumpAnnotation::annotationId() const --> unsigned int");
		cl.def("hasLabel", (bool (asmjit::JumpAnnotation::*)(const class asmjit::Label &) const) &asmjit::JumpAnnotation::hasLabel, "Tests whether the given `label` is a target of this JumpAnnotation.\n\nC++: asmjit::JumpAnnotation::hasLabel(const class asmjit::Label &) const --> bool", pybind11::arg("label"));
		cl.def("hasLabelId", (bool (asmjit::JumpAnnotation::*)(unsigned int) const) &asmjit::JumpAnnotation::hasLabelId, "Tests whether the given `labelId` is a target of this JumpAnnotation.\n\nC++: asmjit::JumpAnnotation::hasLabelId(unsigned int) const --> bool", pybind11::arg("labelId"));
		cl.def("addLabel", (unsigned int (asmjit::JumpAnnotation::*)(const class asmjit::Label &)) &asmjit::JumpAnnotation::addLabel, "Adds the `label` to the list of targets of this JumpAnnotation.\n\nC++: asmjit::JumpAnnotation::addLabel(const class asmjit::Label &) --> unsigned int", pybind11::arg("label"));
		cl.def("addLabelId", (unsigned int (asmjit::JumpAnnotation::*)(unsigned int)) &asmjit::JumpAnnotation::addLabelId, "Adds the `labelId` to the list of targets of this JumpAnnotation.\n\nC++: asmjit::JumpAnnotation::addLabelId(unsigned int) --> unsigned int", pybind11::arg("labelId"));
	}
	{ // asmjit::JumpNode file: line:331
		pybind11::class_<asmjit::JumpNode, std::shared_ptr<asmjit::JumpNode>, asmjit::InstNodeWithOperands<4U>> cl(M("asmjit"), "JumpNode", "Jump instruction with \n\n \n This node should be only used to represent jump where the jump target cannot be deduced by examining\n instruction operands. For example if the jump target is register or memory location. This pattern is often\n used to perform indirect jumps that use jump table, e.g. to implement `switch{}` statement.");
		cl.def( pybind11::init<class asmjit::BaseCompiler *, unsigned int, enum asmjit::InstOptions, unsigned int, class asmjit::JumpAnnotation *>(), pybind11::arg("cc"), pybind11::arg("instId"), pybind11::arg("options"), pybind11::arg("opCount"), pybind11::arg("annotation") );

		cl.def("hasAnnotation", (bool (asmjit::JumpNode::*)() const) &asmjit::JumpNode::hasAnnotation, "Tests whether this JumpNode has associated a \n\nC++: asmjit::JumpNode::hasAnnotation() const --> bool");
		cl.def("annotation", (class asmjit::JumpAnnotation * (asmjit::JumpNode::*)() const) &asmjit::JumpNode::annotation, "Returns the  associated with this jump, or `nullptr`.\n\nC++: asmjit::JumpNode::annotation() const --> class asmjit::JumpAnnotation *", pybind11::return_value_policy::automatic);
		cl.def("setAnnotation", (void (asmjit::JumpNode::*)(class asmjit::JumpAnnotation *)) &asmjit::JumpNode::setAnnotation, "Sets the  associated with this jump to `annotation`.\n\nC++: asmjit::JumpNode::setAnnotation(class asmjit::JumpAnnotation *) --> void", pybind11::arg("annotation"));
	}
	{ // asmjit::FuncNode file: line:406
		pybind11::class_<asmjit::FuncNode, std::shared_ptr<asmjit::FuncNode>, asmjit::LabelNode> cl(M("asmjit"), "FuncNode", "Function node represents a function used by \n\n A function is composed of the following:\n\n   - Function entry,  acts as a label, so the entry is implicit. To get the entry, simply use\n      which is the same as \n\n   - Function exit, which is represented by  A helper function\n      exists and returns an exit label instead of node.\n\n   - Function  sentinel. This node marks the end of a function - there should be no\n     code that belongs to the function after this node, but the Compiler doesn't enforce that at the moment.\n\n   - Function detail, see \n\n   - Function frame, see \n\n   - Function arguments mapped to virtual registers, see \n\n In a node list, the function and its body looks like the following:\n\n \n\n\n\n\n\n\n\n\n\n\n\n\n\n When a function is added to the instruction stream by  it actually inserts 3 nodes\n (FuncNode, ExitLabel, and FuncEnd) and sets the current cursor to be FuncNode. When \n is called the cursor is set to FuncEnd. This guarantees that user can use ExitLabel as a marker after additional\n code or data can be placed, which is a common practice.");
		cl.def( pybind11::init<class asmjit::BaseBuilder *>(), pybind11::arg("cb") );



		cl.def("exitNode", (class asmjit::LabelNode * (asmjit::FuncNode::*)() const) &asmjit::FuncNode::exitNode, "Returns function exit `LabelNode`.\n\nC++: asmjit::FuncNode::exitNode() const --> class asmjit::LabelNode *", pybind11::return_value_policy::automatic);
		cl.def("exitLabel", (class asmjit::Label (asmjit::FuncNode::*)() const) &asmjit::FuncNode::exitLabel, "Returns function exit label.\n\nC++: asmjit::FuncNode::exitLabel() const --> class asmjit::Label");
		cl.def("endNode", (class asmjit::SentinelNode * (asmjit::FuncNode::*)() const) &asmjit::FuncNode::endNode, "Returns \"End of Func\" sentinel node.\n\nC++: asmjit::FuncNode::endNode() const --> class asmjit::SentinelNode *", pybind11::return_value_policy::automatic);
		cl.def("detail", (class asmjit::FuncDetail & (asmjit::FuncNode::*)()) &asmjit::FuncNode::detail, "Returns function detail.\n\nC++: asmjit::FuncNode::detail() --> class asmjit::FuncDetail &", pybind11::return_value_policy::automatic);
		cl.def("frame", (class asmjit::FuncFrame & (asmjit::FuncNode::*)()) &asmjit::FuncNode::frame, "Returns function frame.\n\nC++: asmjit::FuncNode::frame() --> class asmjit::FuncFrame &", pybind11::return_value_policy::automatic);
		cl.def("attributes", (enum asmjit::FuncAttributes (asmjit::FuncNode::*)() const) &asmjit::FuncNode::attributes, "Returns function attributes.\n\nC++: asmjit::FuncNode::attributes() const --> enum asmjit::FuncAttributes");
		cl.def("addAttributes", (void (asmjit::FuncNode::*)(enum asmjit::FuncAttributes)) &asmjit::FuncNode::addAttributes, "Adds `attrs` to the function attributes.\n\nC++: asmjit::FuncNode::addAttributes(enum asmjit::FuncAttributes) --> void", pybind11::arg("attrs"));
		cl.def("argCount", (unsigned int (asmjit::FuncNode::*)() const) &asmjit::FuncNode::argCount, "Returns arguments count.\n\nC++: asmjit::FuncNode::argCount() const --> unsigned int");
		cl.def("argPacks", (struct asmjit::FuncNode::ArgPack * (asmjit::FuncNode::*)() const) &asmjit::FuncNode::argPacks, "Returns argument packs.\n\nC++: asmjit::FuncNode::argPacks() const --> struct asmjit::FuncNode::ArgPack *", pybind11::return_value_policy::automatic);
		cl.def("hasRet", (bool (asmjit::FuncNode::*)() const) &asmjit::FuncNode::hasRet, "Tests whether the function has a return value.\n\nC++: asmjit::FuncNode::hasRet() const --> bool");
		cl.def("argPack", (struct asmjit::FuncNode::ArgPack & (asmjit::FuncNode::*)(unsigned long) const) &asmjit::FuncNode::argPack, "Returns argument pack at `argIndex`.\n\nC++: asmjit::FuncNode::argPack(unsigned long) const --> struct asmjit::FuncNode::ArgPack &", pybind11::return_value_policy::automatic, pybind11::arg("argIndex"));
		cl.def("setArg", (void (asmjit::FuncNode::*)(unsigned long, const class asmjit::BaseReg &)) &asmjit::FuncNode::setArg, "Sets argument at `argIndex`.\n\nC++: asmjit::FuncNode::setArg(unsigned long, const class asmjit::BaseReg &) --> void", pybind11::arg("argIndex"), pybind11::arg("vReg"));
		cl.def("setArg", (void (asmjit::FuncNode::*)(unsigned long, const struct asmjit::RegOnly &)) &asmjit::FuncNode::setArg, "C++: asmjit::FuncNode::setArg(unsigned long, const struct asmjit::RegOnly &) --> void", pybind11::arg("argIndex"), pybind11::arg("vReg"));
		cl.def("setArg", (void (asmjit::FuncNode::*)(unsigned long, unsigned long, const class asmjit::BaseReg &)) &asmjit::FuncNode::setArg, "Sets argument at `argIndex` and `valueIndex`.\n\nC++: asmjit::FuncNode::setArg(unsigned long, unsigned long, const class asmjit::BaseReg &) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("vReg"));
		cl.def("setArg", (void (asmjit::FuncNode::*)(unsigned long, unsigned long, const struct asmjit::RegOnly &)) &asmjit::FuncNode::setArg, "C++: asmjit::FuncNode::setArg(unsigned long, unsigned long, const struct asmjit::RegOnly &) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("vReg"));
		cl.def("resetArg", (void (asmjit::FuncNode::*)(unsigned long)) &asmjit::FuncNode::resetArg, "Resets argument pack at `argIndex`.\n\nC++: asmjit::FuncNode::resetArg(unsigned long) --> void", pybind11::arg("argIndex"));
		cl.def("resetArg", (void (asmjit::FuncNode::*)(unsigned long, unsigned long)) &asmjit::FuncNode::resetArg, "Resets argument pack at `argIndex`.\n\nC++: asmjit::FuncNode::resetArg(unsigned long, unsigned long) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"));

		{ // asmjit::FuncNode::ArgPack file: line:411
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::FuncNode::ArgPack, std::shared_ptr<asmjit::FuncNode::ArgPack>> cl(enclosing_class, "ArgPack", "Arguments pack.");
			cl.def( pybind11::init( [](){ return new asmjit::FuncNode::ArgPack(); } ) );
			cl.def("reset", (void (asmjit::FuncNode::ArgPack::*)()) &asmjit::FuncNode::ArgPack::reset, "C++: asmjit::FuncNode::ArgPack::reset() --> void");
			cl.def("__getitem__", (struct asmjit::RegOnly & (asmjit::FuncNode::ArgPack::*)(unsigned long)) &asmjit::FuncNode::ArgPack::operator[], "C++: asmjit::FuncNode::ArgPack::operator[](unsigned long) --> struct asmjit::RegOnly &", pybind11::return_value_policy::automatic, pybind11::arg("valueIndex"));
		}

	}
}
