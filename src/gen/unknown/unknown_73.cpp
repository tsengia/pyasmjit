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

// asmjit::x86::Builder file: line:318
struct PyCallBack_asmjit_x86_Builder : public asmjit::x86::Builder {
	using asmjit::x86::Builder::Builder;

	unsigned int onAttach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "onAttach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Builder::onAttach(a0);
	}
	unsigned int onDetach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "onDetach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Builder::onDetach(a0);
	}
	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "finalize");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Builder::finalize();
	}
	unsigned int section(class asmjit::Section * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "section");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "newLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "newNamedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "bind");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "_emit");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "align");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "embed");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "embedDataArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "embedConstPool");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "embedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "embedLabelDelta");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "comment");
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
	unsigned int _emitOpArray(unsigned int a0, const struct asmjit::Operand_ * a1, unsigned long a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "_emitOpArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Builder *>(this), "onSettingsUpdated");
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

// asmjit::x86::Compiler file: line:486
struct PyCallBack_asmjit_x86_Compiler : public asmjit::x86::Compiler {
	using asmjit::x86::Compiler::Compiler;

	unsigned int onAttach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "onAttach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Compiler::onAttach(a0);
	}
	unsigned int onDetach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "onDetach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Compiler::onDetach(a0);
	}
	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "finalize");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Compiler::finalize();
	}
	unsigned int section(class asmjit::Section * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "section");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "newLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "newNamedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "bind");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "_emit");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "align");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "embed");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "embedDataArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "embedConstPool");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "embedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "embedLabelDelta");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "comment");
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
	unsigned int _emitOpArray(unsigned int a0, const struct asmjit::Operand_ * a1, unsigned long a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "_emitOpArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Compiler *>(this), "onSettingsUpdated");
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

void bind_unknown_unknown_73(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::x86::Builder file: line:318
		pybind11::class_<asmjit::x86::Builder, std::shared_ptr<asmjit::x86::Builder>, PyCallBack_asmjit_x86_Builder, asmjit::BaseBuilder, asmjit::x86::EmitterImplicitT<asmjit::x86::Builder>> cl(M("asmjit::x86"), "Builder", "X86/X64 builder implementation.\n\n The code representation used by  is compatible with everything AsmJit provides. Each instruction\n is stored as  which contains instruction id, options, and operands. Each instruction emitted will\n create a new  instance and add it to the current cursor in the double-linked list of nodes. Since\n the instruction stream used by  can be manipulated, we can rewrite the SumInts example from\n  into the following:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n typedef void (*SumIntsFunc)(int* dst, const int* a, const int* b);\n\n // Small helper function to print the current content of `cb`.\n static void dumpCode(BaseBuilder& builder, const char* phase) {\n   String sb;\n   formatOptions formatOptions {};\n\n   Formatter::formatNodeList(sb, formatOptions, &builder);\n   printf(\"%s:\\n%s\\n\", phase, sb.data());\n }\n\n int main() {\n   JitRuntime rt;                    // Create JIT Runtime.\n   CodeHolder code;                  // Create a CodeHolder.\n\n   code.init(rt.environment(),       // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Builder cb(&code);           // Create and attach x86::Builder to `code`.\n\n   // Decide which registers will be mapped to function arguments. Try changing registers\n   // of `dst`, `srcA`, and `srcB` and see what happens in function's prolog and epilog.\n   x86::Gp dst = cb.zax();\n   x86::Gp srcA = cb.zcx();\n   x86::Gp srcB = cb.zdx();\n\n   X86::Xmm vec0 = x86::xmm0;\n   X86::Xmm vec1 = x86::xmm1;\n\n   // Create and initialize `FuncDetail`.\n   FuncDetail func;\n   func.init(FuncSignature::build<void, int*, const int*, const int*>());\n\n   // Remember prolog insertion point.\n   BaseNode* prologInsertionPoint = cb.cursor();\n\n   // Emit function body:\n   cb.movdqu(vec0, x86::ptr(srcA));  // Load 4 ints from [srcA] to XMM0.\n   cb.movdqu(vec1, x86::ptr(srcB));  // Load 4 ints from [srcB] to XMM1.\n   cb.paddd(vec0, vec1);             // Add 4 ints in XMM1 to XMM0.\n   cb.movdqu(x86::ptr(dst), vec0);   // Store the result to [dst].\n\n   // Remember epilog insertion point.\n   BaseNode* epilogInsertionPoint = cb.cursor();\n\n   // Let's see what we have now.\n   dumpCode(cb, \"Raw Function\");\n\n   // Now, after we emitted the function body, we can insert the prolog, arguments\n   // allocation, and epilog. This is not possible with using pure x86::Assembler.\n   FuncFrame frame;\n   frame.init(func);\n\n   // Make XMM0 and XMM1 dirty; RegGroup::kVec describes XMM|YMM|ZMM registers.\n   frame.setDirtyRegs(RegGroup::kVec, IntUtils::mask(0, 1));\n\n   FuncArgsAssignment args(&func);   // Create arguments assignment context.\n   args.assignAll(dst, srcA, srcB);  // Assign our registers to arguments.\n   args.updateFrame(frame);          // Reflect our args in FuncFrame.\n   frame.finalize();                 // Finalize the FuncFrame (updates it).\n\n   // Insert function prolog and allocate arguments to registers.\n   cb.setCursor(prologInsertionPoint);\n   cb.emitProlog(frame);\n   cb.emitArgsAssignment(frame, args);\n\n   // Insert function epilog.\n   cb.setCursor(epilogInsertionPoint);\n   cb.emitEpilog(frame);\n\n   // Let's see how the function's prolog and epilog looks.\n   dumpCode(cb, \"Prolog & Epilog\");\n\n   // IMPORTANT: Builder requires finalize() to be called to serialize its\n   // code to the Assembler (it automatically creates one if not attached).\n   cb.finalize();\n\n   SumIntsFunc fn;\n   Error err = rt.add(&fn, &code);   // Add the generated code to the runtime.\n   if (err) return 1;                // Handle a possible error case.\n\n   // Execute the generated function.\n   int inA[4] = { 4, 3, 2, 1 };\n   int inB[4] = { 1, 5, 2, 8 };\n   int out[4];\n   fn(out, inA, inB);\n\n   // Prints {5 8 4 9}\n   printf(\"{%d %d %d %d}\\n\", out[0], out[1], out[2], out[3]);\n\n   rt.release(fn);                   // Explicitly remove the function from the runtime.\n   return 0;\n }\n ```\n\n When the example is executed it should output the following (this one using AMD64-SystemV ABI):\n\n ```\n Raw Function:\n movdqu xmm0, [rcx]\n movdqu xmm1, [rdx]\n paddd xmm0, xmm1\n movdqu [rax], xmm0\n\n Prolog & Epilog:\n mov rax, rdi\n mov rcx, rsi\n movdqu xmm0, [rcx]\n movdqu xmm1, [rdx]\n paddd xmm0, xmm1\n movdqu [rax], xmm0\n ret\n\n {5 8 4 9}\n ```\n\n The number of use-cases of  is not limited and highly depends on your creativity and experience.\n The previous example can be easily improved to collect all dirty registers inside the function programmatically\n and to pass them to \n\n ```\n #include <asmjit/x86.h>\n\n using namespace asmjit;\n\n // NOTE: This function doesn't cover all possible constructs. It ignores instructions that write\n // to implicit registers that are not part of the operand list. It also counts read-only registers.\n // Real implementation would be a bit more complicated, but still relatively easy to implement.\n static void collectDirtyRegs(const BaseNode* first,\n                              const BaseNode* last,\n                              Support::Array<RegMask, Globals::kNumVirtGroups>& regMask) {\n   const BaseNode* node = first;\n   while (node) {\n     if (node->actsAsInst()) {\n       const InstNode* inst = node->as<InstNode>();\n       const Operand* opArray = inst->operands();\n\n       for (uint32_t i = 0, opCount = inst->opCount(); i < opCount; i++) {\n         const Operand& op = opArray[i];\n         if (op.isReg()) {\n           const x86::Reg& reg = op.as<x86::Reg>();\n           if (reg.group() <= RegGroup::kMaxVirt) {\n             regMask[reg.group()] |= 1u << reg.id();\n           }\n         }\n       }\n     }\n\n     if (node == last)\n       break;\n     node = node->next();\n   }\n }\n\n static void setDirtyRegsOfFuncFrame(const x86::Builder& builder, FuncFrame& frame) {\n   Support::Array<RegMask, Globals::kNumVirtGroups> regMask {};\n   collectDirtyRegs(builder.firstNode(), builder.lastNode(), regMask);\n\n   // X86/X64 ABIs only require to save GP/XMM registers:\n   frame.setDirtyRegs(RegGroup::kGp, regMask[RegGroup::kGp]);\n   frame.setDirtyRegs(RegGroup::kVec, regMask[RegGroup::kVec]);\n }\n ```\n\n ### Casting Between Various Emitters\n\n Even when  and  provide the same interface as defined by  their\n platform dependent variants like  and  cannot be interchanged or casted to each\n other by using a C++ `static_cast<>`. The main reason is the inheritance graph of these classes is different and\n cast-incompatible, as illustrated below:\n\n ```\n                                             +--------------+      +=========================+\n                    +----------------------->| x86::Emitter |<--+--# x86::EmitterImplicitT<> #<--+\n                    |                        +--------------+   |  +=========================+   |\n                    |                           (abstract)      |           (mixin)              |\n                    |   +--------------+     +~~~~~~~~~~~~~~+   |                                |\n                    +-->| BaseAssembler|---->|x86::Assembler|<--+                                |\n                    |   +--------------+     +~~~~~~~~~~~~~~+   |                                |\n                    |      (abstract)            (final)        |                                |\n +===============+  |   +--------------+     +~~~~~~~~~~~~~~+   |                                |\n #  BaseEmitter  #--+-->|  BaseBuilder |--+->| x86::Builder |<--+                                |\n +===============+      +--------------+  |  +~~~~~~~~~~~~~~+                                    |\n    (abstract)             (abstract)     |      (final)                                         |\n                    +---------------------+                                                      |\n                    |                                                                            |\n                    |   +--------------+     +~~~~~~~~~~~~~~+      +=========================+   |\n                    +-->| BaseCompiler |---->| x86::Compiler|<-----# x86::EmitterExplicitT<> #---+\n                        +--------------+     +~~~~~~~~~~~~~~+      +=========================+\n                           (abstract)            (final)                   (mixin)\n ```\n\n The graph basically shows that it's not possible to cast between  and \n However, since both share the base interface ( it's possible to cast them to a class that\n cannot be instantiated, but defines the same interface - the class is called  and was\n introduced to make it possible to write a function that can emit to both  and \n Note that  cannot be created, it's abstract and has private constructors and\n destructors; it was only designed to be casted to and used as an interface.\n\n Each architecture-specific emitter implements a member function called\n `as<arch::Emitter>()`, which casts the instance to the architecture\n specific emitter as illustrated below:\n\n ```\n #include <asmjit/x86.h>\n\n using namespace asmjit;\n\n static void emitSomething(x86::Emitter* e) {\n   e->mov(x86::eax, x86::ebx);\n }\n\n static void assemble(CodeHolder& code, bool useAsm) {\n   if (useAsm) {\n     x86::Assembler assembler(&code);\n     emitSomething(assembler.as<x86::Emitter>());\n   }\n   else {\n     x86::Builder builder(&code);\n     emitSomething(builder.as<x86::Emitter>());\n\n     // NOTE: Builder requires `finalize()` to be called to serialize its\n     // content to Assembler (it automatically creates one if not attached).\n     builder.finalize();\n   }\n }\n ```\n\n The example above shows how to create a function that can emit code to either  or \n through  which provides emitter-neutral functionality. \n however, doesn't provide any emitter-specific functionality like `setCursor()`.\n\n ### Code Injection and Manipulation\n\n  emitter stores its nodes in a double-linked list, which makes it easy to manipulate that\n list during the code generation or afterwards. Each node is always emitted next to the current cursor and\n the cursor is advanced to that newly emitted node. The cursor can be retrieved and changed by \n and  respectively.\n\n The example below demonstrates how to remember a node and inject something\n next to it.\n\n ```\n static void example(x86::Builder& builder) {\n   // Emit something, after it returns the cursor would point at the last\n   // emitted node.\n   builder.mov(x86::rax, x86::rdx); // [1]\n\n   // We can retrieve the node.\n   BaseNode* node = builder.cursor();\n\n   // Change the instruction we just emitted, just for fun...\n   if (node->isInst()) {\n     InstNode* inst = node->as<InstNode>();\n     // Changes the operands at index [1] to RCX.\n     inst->setOp(1, x86::rcx);\n   }\n\n   // ------------------------- Generate Some Code -------------------------\n   builder.add(x86::rax, x86::rdx); // [2]\n   builder.shr(x86::rax, 3);        // [3]\n   // ----------------------------------------------------------------------\n\n   // Now, we know where our node is, and we can simply change the cursor\n   // and start emitting something after it. The setCursor() function\n   // returns the previous cursor, and it's always a good practice to remember\n   // it, because you never know if you are not already injecting the code\n   // somewhere else...\n   BaseNode* oldCursor = builder.setCursor(node);\n\n   builder.mul(x86::rax, 8);        // [4]\n\n   // Restore the cursor\n   builder.setCursor(oldCursor);\n }\n ```\n\n The function above would actually emit the following:\n\n ```\n mov rax, rcx ; [1] Patched at the beginning.\n mul rax, 8   ; [4] Injected.\n add rax, rdx ; [2] Followed [1] initially.\n shr rax, 3   ; [3] Follows [2].\n ```");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Builder(); }, [](){ return new PyCallBack_asmjit_x86_Builder(); } ), "doc");
		cl.def( pybind11::init<class asmjit::CodeHolder *>(), pybind11::arg("code") );

		cl.def("onAttach", (unsigned int (asmjit::x86::Builder::*)(class asmjit::CodeHolder *)) &asmjit::x86::Builder::onAttach, "\\{\n\nC++: asmjit::x86::Builder::onAttach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onDetach", (unsigned int (asmjit::x86::Builder::*)(class asmjit::CodeHolder *)) &asmjit::x86::Builder::onDetach, "C++: asmjit::x86::Builder::onDetach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("finalize", (unsigned int (asmjit::x86::Builder::*)()) &asmjit::x86::Builder::finalize, "\\{\n\nC++: asmjit::x86::Builder::finalize() --> unsigned int");
	}
	{ // asmjit::x86::Compiler file: line:486
		pybind11::class_<asmjit::x86::Compiler, std::shared_ptr<asmjit::x86::Compiler>, PyCallBack_asmjit_x86_Compiler, asmjit::BaseCompiler, asmjit::x86::EmitterExplicitT<asmjit::x86::Compiler>> cl(M("asmjit::x86"), "Compiler", "X86/X64 compiler implementation.\n\n ### Compiler Basics\n\n The first  example shows how to generate a function that simply returns an integer value. It's\n an analogy to the first Assembler example:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Signature of the generated function.\n typedef int (*Func)(void);\n\n int main() {\n   JitRuntime rt;                           // Runtime specialized for JIT code execution.\n   CodeHolder code;                         // Holds code and relocation information.\n\n   code.init(rt.environment(),              // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Compiler cc(&code);                 // Create and attach x86::Compiler to code.\n\n   cc.addFunc(FuncSignature::build<int>()); // Begin a function of `int fn(void)` signature.\n\n   x86::Gp vReg = cc.newGpd();              // Create a 32-bit general purpose register.\n   cc.mov(vReg, 1);                         // Move one to our virtual register `vReg`.\n   cc.ret(vReg);                            // Return `vReg` from the function.\n\n   cc.endFunc();                            // End of the function body.\n   cc.finalize();                           // Translate and assemble the whole 'cc' content.\n   // ----> x86::Compiler is no longer needed from here and can be destroyed <----\n\n   Func fn;\n   Error err = rt.add(&fn, &code);          // Add the generated code to the runtime.\n   if (err) return 1;                       // Handle a possible error returned by AsmJit.\n   // ----> CodeHolder is no longer needed from here and can be destroyed <----\n\n   int result = fn();                       // Execute the generated code.\n   printf(\"%d\\n\", result);                  // Print the resulting \"1\".\n\n   rt.release(fn);                          // Explicitly remove the function from the runtime.\n   return 0;\n }\n ```\n\n The  and  functions are used to define the function and\n its end. Both must be called per function, but the body doesn't have to be generated in sequence. An example of\n generating two functions will be shown later. The next example shows more complicated code that contain a loop\n and generates a simple memory copy function that uses `uint32_t` items:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Signature of the generated function.\n typedef void (*MemCpy32)(uint32_t* dst, const uint32_t* src, size_t count);\n\n int main() {\n   JitRuntime rt;                           // Runtime specialized for JIT code execution.\n   CodeHolder code;                         // Holds code and relocation information.\n\n   code.init(rt.environment(),              // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Compiler cc(&code);                 // Create and attach x86::Compiler to code.\n\n   FuncNode* funcNode = cc.addFunc     (    // Begin the function of the following signature:\n     FuncSignature::build<void,             //   Return value - void      (no return value).\n       uint32_t*,                           //   1st argument - uint32_t* (machine reg-size).\n       const uint32_t*,                     //   2nd argument - uint32_t* (machine reg-size).\n       size_t>());                          //   3rd argument - size_t    (machine reg-size).\n\n   Label L_Loop = cc.newLabel();            // Start of the loop.\n   Label L_Exit = cc.newLabel();            // Used to exit early.\n\n   x86::Gp dst = cc.newIntPtr(\"dst\");       // Create `dst` register (destination pointer).\n   x86::Gp src = cc.newIntPtr(\"src\");       // Create `src` register (source pointer).\n   x86::Gp i = cc.newUIntPtr(\"i\");          // Create `i` register (loop counter).\n\n   funcNode->setArg(0, dst);                // Assign `dst` argument.\n   funcNode->setArg(1, src);                // Assign `src` argument.\n   funcNode->setArg(2, i);                  // Assign `i` argument.\n\n   cc.test(i, i);                           // Early exit if length is zero.\n   cc.jz(L_Exit);\n\n   cc.bind(L_Loop);                         // Bind the beginning of the loop here.\n\n   x86::Gp tmp = cc.newInt32(\"tmp\");        // Copy a single dword (4 bytes).\n   cc.mov(tmp, x86::dword_ptr(src));        // Load DWORD from [src] address.\n   cc.mov(x86::dword_ptr(dst), tmp);        // Store DWORD to [dst] address.\n\n   cc.add(src, 4);                          // Increment `src`.\n   cc.add(dst, 4);                          // Increment `dst`.\n\n   cc.dec(i);                               // Loop until `i` is non-zero.\n   cc.jnz(L_Loop);\n\n   cc.bind(L_Exit);                         // Label used by early exit.\n   cc.endFunc();                            // End of the function body.\n\n   cc.finalize();                           // Translate and assemble the whole 'cc' content.\n   // ----> x86::Compiler is no longer needed from here and can be destroyed <----\n\n   // Add the generated code to the runtime.\n   MemCpy32 memcpy32;\n   Error err = rt.add(&memcpy32, &code);\n\n   // Handle a possible error returned by AsmJit.\n   if (err)\n     return 1;\n   // ----> CodeHolder is no longer needed from here and can be destroyed <----\n\n   // Test the generated code.\n   uint32_t input[6] = { 1, 2, 3, 5, 8, 13 };\n   uint32_t output[6];\n   memcpy32(output, input, 6);\n\n   for (uint32_t i = 0; i < 6; i++)\n     printf(\"%d\\n\", output[i]);\n\n   rt.release(memcpy32);\n   return 0;\n }\n ```\n\n ### AVX and AVX-512\n\n AVX and AVX-512 code generation must be explicitly enabled via  to work properly. If it's not setup\n correctly then Prolog & Epilog would use SSE instead of AVX instructions to work with SIMD registers. In addition,\n Compiler requires explicitly enable AVX-512 via  in order to use all 32 SIMD registers.\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Signature of the generated function.\n typedef void (*Func)(void*);\n\n int main() {\n   JitRuntime rt;                           // Runtime specialized for JIT code execution.\n   CodeHolder code;                         // Holds code and relocation information.\n\n   code.init(rt.environment(),              // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Compiler cc(&code);                 // Create and attach x86::Compiler to code.\n\n   FuncNode* funcNode = cc.addFunc(FuncSignature::build<void, void*>());\n\n   // Use the following to enable AVX and/or AVX-512.\n   funcNode->frame().setAvxEnabled();\n   funcNode->frame().setAvx512Enabled();\n\n   // Do something with the input pointer.\n   x86::Gp addr = cc.newIntPtr(\"addr\");\n   x86::Zmm vreg = cc.newZmm(\"vreg\");\n\n   funcNode->setArg(0, addr);\n\n   cc.vmovdqu32(vreg, x86::ptr(addr));\n   cc.vpaddq(vreg, vreg, vreg);\n   cc.vmovdqu32(x86::ptr(addr), vreg);\n\n   cc.endFunc();                            // End of the function body.\n   cc.finalize();                           // Translate and assemble the whole 'cc' content.\n   // ----> x86::Compiler is no longer needed from here and can be destroyed <----\n\n   Func fn;\n   Error err = rt.add(&fn, &code);          // Add the generated code to the runtime.\n   if (err) return 1;                       // Handle a possible error returned by AsmJit.\n   // ----> CodeHolder is no longer needed from here and can be destroyed <----\n\n   // Execute the generated code and print some output.\n   uint64_t data[] = { 1, 2, 3, 4, 5, 6, 7, 8 };\n   fn(data);\n   printf(\"%llu\\n\", (unsigned long long)data[0]);\n\n   rt.release(fn);                          // Explicitly remove the function from the runtime.\n   return 0;\n }\n ```\n\n ### Recursive Functions\n\n It's possible to create more functions by using the same  instance and make links between them.\n In such case it's important to keep the pointer to \n\n The example below creates a simple Fibonacci function that calls itself recursively:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Signature of the generated function.\n typedef uint32_t (*Fibonacci)(uint32_t x);\n\n int main() {\n   JitRuntime rt;                           // Runtime specialized for JIT code execution.\n   CodeHolder code;                         // Holds code and relocation information.\n\n   code.init(rt.environment(),              // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Compiler cc(&code);                 // Create and attach x86::Compiler to code.\n\n   FuncNode* funcNode = cc.addFunc(         // Begin of the Fibonacci function, addFunc()\n     FuncSignature::build<int, int>());     // Returns a pointer to the FuncNode node.\n\n   Label L_Exit = cc.newLabel();            // Exit label.\n   x86::Gp x = cc.newUInt32();              // Function x argument.\n   x86::Gp y = cc.newUInt32();              // Temporary.\n\n   funcNode->setArg(0, x);\n\n   cc.cmp(x, 3);                            // Return x if less than 3.\n   cc.jb(L_Exit);\n\n   cc.mov(y, x);                            // Make copy of the original x.\n   cc.dec(x);                               // Decrease x.\n\n   InvokeNode* invokeNode;                  // Function invocation:\n   cc.invoke(&invokeNode,                   //   - InvokeNode (output).\n     funcNode->label(),                     //   - Function address or Label.\n     FuncSignature::build<int, int>());     //   - Function signature.\n\n   invokeNode->setArg(0, x);                // Assign x as the first argument.\n   invokeNode->setRet(0, x);                // Assign x as a return value as well.\n\n   cc.add(x, y);                            // Combine the return value with y.\n\n   cc.bind(L_Exit);\n   cc.ret(x);                               // Return x.\n   cc.endFunc();                            // End of the function body.\n\n   cc.finalize();                           // Translate and assemble the whole 'cc' content.\n   // ----> x86::Compiler is no longer needed from here and can be destroyed <----\n\n   Fibonacci fib;\n   Error err = rt.add(&fib, &code);         // Add the generated code to the runtime.\n   if (err) return 1;                       // Handle a possible error returned by AsmJit.\n   // ----> CodeHolder is no longer needed from here and can be destroyed <----\n\n   // Test the generated code.\n   printf(\"Fib(%u) -> %u\\n\", 8, fib(8));\n\n   rt.release(fib);\n   return 0;\n }\n ```\n\n ### Stack Management\n\n Function's stack-frame is managed automatically, which is used by the register allocator to spill virtual\n registers. It also provides an interface to allocate user-defined block of the stack, which can be used as\n a temporary storage by the generated function. In the following example a stack of 256 bytes size is allocated,\n filled by bytes starting from 0 to 255 and then iterated again to sum all the values.\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Signature of the generated function.\n typedef int (*Func)(void);\n\n int main() {\n   JitRuntime rt;                           // Runtime specialized for JIT code execution.\n   CodeHolder code;                         // Holds code and relocation information.\n\n   code.init(rt.environment(),              // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Compiler cc(&code);                 // Create and attach x86::Compiler to code.\n\n   cc.addFunc(FuncSignature::build<int>()); // Create a function that returns int.\n\n   x86::Gp p = cc.newIntPtr(\"p\");\n   x86::Gp i = cc.newIntPtr(\"i\");\n\n   // Allocate 256 bytes on the stack aligned to 4 bytes.\n   x86::Mem stack = cc.newStack(256, 4);\n\n   x86::Mem stackIdx(stack);                // Copy of stack with i added.\n   stackIdx.setIndex(i);                    // stackIdx <- stack[i].\n   stackIdx.setSize(1);                     // stackIdx <- byte ptr stack[i].\n\n   // Load a stack address to `p`. This step is purely optional and shows\n   // that `lea` is useful to load a memory operands address (even absolute)\n   // to a general purpose register.\n   cc.lea(p, stack);\n\n   // Clear i (xor is a C++ keyword, hence 'xor_' is used instead).\n   cc.xor_(i, i);\n\n   Label L1 = cc.newLabel();\n   Label L2 = cc.newLabel();\n\n   cc.bind(L1);                             // First loop, fill the stack.\n   cc.mov(stackIdx, i.r8());                // stack[i] = uint8_t(i).\n\n   cc.inc(i);                               // i++;\n   cc.cmp(i, 256);                          // if (i < 256)\n   cc.jb(L1);                               //   goto L1;\n\n   // Second loop, sum all bytes stored in `stack`.\n   x86::Gp sum = cc.newInt32(\"sum\");\n   x86::Gp val = cc.newInt32(\"val\");\n\n   cc.xor_(i, i);\n   cc.xor_(sum, sum);\n\n   cc.bind(L2);\n\n   cc.movzx(val, stackIdx);                 // val = uint32_t(stack[i]);\n   cc.add(sum, val);                        // sum += val;\n\n   cc.inc(i);                               // i++;\n   cc.cmp(i, 256);                          // if (i < 256)\n   cc.jb(L2);                               //   goto L2;\n\n   cc.ret(sum);                             // Return the `sum` of all values.\n   cc.endFunc();                            // End of the function body.\n\n   cc.finalize();                           // Translate and assemble the whole 'cc' content.\n   // ----> x86::Compiler is no longer needed from here and can be destroyed <----\n\n   Func func;\n   Error err = rt.add(&func, &code);        // Add the generated code to the runtime.\n   if (err) return 1;                       // Handle a possible error returned by AsmJit.\n   // ----> CodeHolder is no longer needed from here and can be destroyed <----\n\n   printf(\"Func() -> %d\\n\", func());        // Test the generated code.\n\n   rt.release(func);\n   return 0;\n }\n ```\n\n ### Constant Pool\n\n Compiler provides two constant pools for a general purpose code generation:\n\n   - Local constant pool - Part of  can be only used by a single function and added after the\n     function epilog sequence (after `ret` instruction).\n\n   - Global constant pool - Part of  flushed at the end of the generated code by \n\n The example below illustrates how a built-in constant pool can be used:\n\n ```\n #include <asmjit/x86.h>\n\n using namespace asmjit;\n\n static void exampleUseOfConstPool(x86::Compiler& cc) {\n   cc.addFunc(FuncSignature::build<int>());\n\n   x86::Gp v0 = cc.newGpd(\"v0\");\n   x86::Gp v1 = cc.newGpd(\"v1\");\n\n   x86::Mem c0 = cc.newInt32Const(ConstPoolScope::kLocal, 200);\n   x86::Mem c1 = cc.newInt32Const(ConstPoolScope::kLocal, 33);\n\n   cc.mov(v0, c0);\n   cc.mov(v1, c1);\n   cc.add(v0, v1);\n\n   cc.ret(v0);\n   cc.endFunc();\n }\n ```\n\n ### Jump Tables\n\n x86::Compiler supports `jmp` instruction with reg/mem operand, which is a commonly used pattern to implement\n indirect jumps within a function, for example to implement `switch()` statement in a programming languages.\n By default AsmJit assumes that every basic block can be a possible jump target as it's unable to deduce targets\n from instruction's operands. This is a very pessimistic default that should be avoided if possible as it's costly\n and very unfriendly to liveness analysis and register allocation.\n\n Instead of relying on such pessimistic default behavior, let's use  to annotate a jump where\n all targets are known:\n\n ```\n #include <asmjit/x86.h>\n\n using namespace asmjit;\n\n static void exampleUseOfIndirectJump(x86::Compiler& cc) {\n   FuncNode* funcNode = cc.addFunc(FuncSignature::build<float, float, float, uint32_t>());\n\n   // Function arguments\n   x86::Xmm a = cc.newXmmSs(\"a\");\n   x86::Xmm b = cc.newXmmSs(\"b\");\n   x86::Gp op = cc.newUInt32(\"op\");\n\n   x86::Gp target = cc.newIntPtr(\"target\");\n   x86::Gp offset = cc.newIntPtr(\"offset\");\n\n   Label L_Table = cc.newLabel();\n   Label L_Add = cc.newLabel();\n   Label L_Sub = cc.newLabel();\n   Label L_Mul = cc.newLabel();\n   Label L_Div = cc.newLabel();\n   Label L_End = cc.newLabel();\n\n   funcNode->setArg(0, a);\n   funcNode->setArg(1, b);\n   funcNode->setArg(2, op);\n\n   // Jump annotation is a building block that allows to annotate all possible targets where `jmp()` can\n   // jump. It then drives the CFG construction and liveness analysis, which impacts register allocation.\n   JumpAnnotation* annotation = cc.newJumpAnnotation();\n   annotation->addLabel(L_Add);\n   annotation->addLabel(L_Sub);\n   annotation->addLabel(L_Mul);\n   annotation->addLabel(L_Div);\n\n   // Most likely not the common indirect jump approach, but it\n   // doesn't really matter how final address is calculated. The\n   // most important path using JumpAnnotation with `jmp()`.\n   cc.lea(offset, x86::ptr(L_Table));\n   if (cc.is64Bit())\n     cc.movsxd(target, x86::dword_ptr(offset, op.cloneAs(offset), 2));\n   else\n     cc.mov(target, x86::dword_ptr(offset, op.cloneAs(offset), 2));\n   cc.add(target, offset);\n   cc.jmp(target, annotation);\n\n   // Acts like a switch() statement in C.\n   cc.bind(L_Add);\n   cc.addss(a, b);\n   cc.jmp(L_End);\n\n   cc.bind(L_Sub);\n   cc.subss(a, b);\n   cc.jmp(L_End);\n\n   cc.bind(L_Mul);\n   cc.mulss(a, b);\n   cc.jmp(L_End);\n\n   cc.bind(L_Div);\n   cc.divss(a, b);\n\n   cc.bind(L_End);\n   cc.ret(a);\n\n   cc.endFunc();\n\n   // Relative int32_t offsets of `L_XXX - L_Table`.\n   cc.bind(L_Table);\n   cc.embedLabelDelta(L_Add, L_Table, 4);\n   cc.embedLabelDelta(L_Sub, L_Table, 4);\n   cc.embedLabelDelta(L_Mul, L_Table, 4);\n   cc.embedLabelDelta(L_Div, L_Table, 4);\n }\n ```");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Compiler(); }, [](){ return new PyCallBack_asmjit_x86_Compiler(); } ), "doc");
		cl.def( pybind11::init<class asmjit::CodeHolder *>(), pybind11::arg("code") );

		cl.def("jmp", [](asmjit::x86::Compiler &o, const class asmjit::Imm & a0) -> unsigned int { return o.jmp(a0); }, "", pybind11::arg("o0"));
		cl.def("jmp", [](asmjit::x86::Compiler &o, const class asmjit::Label & a0) -> unsigned int { return o.jmp(a0); }, "", pybind11::arg("o0"));
		cl.def("jmp", [](asmjit::x86::Compiler &o, const class asmjit::x86::Mem & a0) -> unsigned int { return o.jmp(a0); }, "", pybind11::arg("o0"));
		cl.def("jmp", [](asmjit::x86::Compiler &o, const class asmjit::x86::Gp & a0) -> unsigned int { return o.jmp(a0); }, "", pybind11::arg("o0"));
		cl.def("newReg", (class asmjit::x86::Reg (asmjit::x86::Compiler::*)(enum asmjit::TypeId)) &asmjit::x86::Compiler::newReg, "C++: asmjit::x86::Compiler::newReg(enum asmjit::TypeId) --> class asmjit::x86::Reg", pybind11::arg("typeId"));
		cl.def("newGp", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)(enum asmjit::TypeId)) &asmjit::x86::Compiler::newGp, "C++: asmjit::x86::Compiler::newGp(enum asmjit::TypeId) --> class asmjit::x86::Gp", pybind11::arg("typeId"));
		cl.def("newVec", (class asmjit::x86::Vec (asmjit::x86::Compiler::*)(enum asmjit::TypeId)) &asmjit::x86::Compiler::newVec, "C++: asmjit::x86::Compiler::newVec(enum asmjit::TypeId) --> class asmjit::x86::Vec", pybind11::arg("typeId"));
		cl.def("newK", (class asmjit::x86::KReg (asmjit::x86::Compiler::*)(enum asmjit::TypeId)) &asmjit::x86::Compiler::newK, "C++: asmjit::x86::Compiler::newK(enum asmjit::TypeId) --> class asmjit::x86::KReg", pybind11::arg("typeId"));
		cl.def("newInt8", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newInt8, "C++: asmjit::x86::Compiler::newInt8() --> class asmjit::x86::Gp");
		cl.def("newUInt8", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newUInt8, "C++: asmjit::x86::Compiler::newUInt8() --> class asmjit::x86::Gp");
		cl.def("newInt16", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newInt16, "C++: asmjit::x86::Compiler::newInt16() --> class asmjit::x86::Gp");
		cl.def("newUInt16", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newUInt16, "C++: asmjit::x86::Compiler::newUInt16() --> class asmjit::x86::Gp");
		cl.def("newInt32", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newInt32, "C++: asmjit::x86::Compiler::newInt32() --> class asmjit::x86::Gp");
		cl.def("newUInt32", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newUInt32, "C++: asmjit::x86::Compiler::newUInt32() --> class asmjit::x86::Gp");
		cl.def("newInt64", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newInt64, "C++: asmjit::x86::Compiler::newInt64() --> class asmjit::x86::Gp");
		cl.def("newUInt64", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newUInt64, "C++: asmjit::x86::Compiler::newUInt64() --> class asmjit::x86::Gp");
		cl.def("newIntPtr", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newIntPtr, "C++: asmjit::x86::Compiler::newIntPtr() --> class asmjit::x86::Gp");
		cl.def("newUIntPtr", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newUIntPtr, "C++: asmjit::x86::Compiler::newUIntPtr() --> class asmjit::x86::Gp");
		cl.def("newGpb", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newGpb, "C++: asmjit::x86::Compiler::newGpb() --> class asmjit::x86::Gp");
		cl.def("newGpw", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newGpw, "C++: asmjit::x86::Compiler::newGpw() --> class asmjit::x86::Gp");
		cl.def("newGpd", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newGpd, "C++: asmjit::x86::Compiler::newGpd() --> class asmjit::x86::Gp");
		cl.def("newGpq", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newGpq, "C++: asmjit::x86::Compiler::newGpq() --> class asmjit::x86::Gp");
		cl.def("newGpz", (class asmjit::x86::Gp (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newGpz, "C++: asmjit::x86::Compiler::newGpz() --> class asmjit::x86::Gp");
		cl.def("newXmm", (class asmjit::x86::Xmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newXmm, "C++: asmjit::x86::Compiler::newXmm() --> class asmjit::x86::Xmm");
		cl.def("newXmmSs", (class asmjit::x86::Xmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newXmmSs, "C++: asmjit::x86::Compiler::newXmmSs() --> class asmjit::x86::Xmm");
		cl.def("newXmmSd", (class asmjit::x86::Xmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newXmmSd, "C++: asmjit::x86::Compiler::newXmmSd() --> class asmjit::x86::Xmm");
		cl.def("newXmmPs", (class asmjit::x86::Xmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newXmmPs, "C++: asmjit::x86::Compiler::newXmmPs() --> class asmjit::x86::Xmm");
		cl.def("newXmmPd", (class asmjit::x86::Xmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newXmmPd, "C++: asmjit::x86::Compiler::newXmmPd() --> class asmjit::x86::Xmm");
		cl.def("newYmm", (class asmjit::x86::Ymm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newYmm, "C++: asmjit::x86::Compiler::newYmm() --> class asmjit::x86::Ymm");
		cl.def("newYmmPs", (class asmjit::x86::Ymm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newYmmPs, "C++: asmjit::x86::Compiler::newYmmPs() --> class asmjit::x86::Ymm");
		cl.def("newYmmPd", (class asmjit::x86::Ymm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newYmmPd, "C++: asmjit::x86::Compiler::newYmmPd() --> class asmjit::x86::Ymm");
		cl.def("newZmm", (class asmjit::x86::Zmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newZmm, "C++: asmjit::x86::Compiler::newZmm() --> class asmjit::x86::Zmm");
		cl.def("newZmmPs", (class asmjit::x86::Zmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newZmmPs, "C++: asmjit::x86::Compiler::newZmmPs() --> class asmjit::x86::Zmm");
		cl.def("newZmmPd", (class asmjit::x86::Zmm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newZmmPd, "C++: asmjit::x86::Compiler::newZmmPd() --> class asmjit::x86::Zmm");
		cl.def("newMm", (class asmjit::x86::Mm (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newMm, "C++: asmjit::x86::Compiler::newMm() --> class asmjit::x86::Mm");
		cl.def("newKb", (class asmjit::x86::KReg (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newKb, "C++: asmjit::x86::Compiler::newKb() --> class asmjit::x86::KReg");
		cl.def("newKw", (class asmjit::x86::KReg (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newKw, "C++: asmjit::x86::Compiler::newKw() --> class asmjit::x86::KReg");
		cl.def("newKd", (class asmjit::x86::KReg (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newKd, "C++: asmjit::x86::Compiler::newKd() --> class asmjit::x86::KReg");
		cl.def("newKq", (class asmjit::x86::KReg (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::newKq, "C++: asmjit::x86::Compiler::newKq() --> class asmjit::x86::KReg");
		cl.def("newStack", [](asmjit::x86::Compiler &o, unsigned int const & a0, unsigned int const & a1) -> asmjit::x86::Mem { return o.newStack(a0, a1); }, "", pybind11::arg("size"), pybind11::arg("alignment"));
		cl.def("newStack", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(unsigned int, unsigned int, const char *)) &asmjit::x86::Compiler::newStack, "Creates a new memory chunk allocated on the current function's stack.\n\nC++: asmjit::x86::Compiler::newStack(unsigned int, unsigned int, const char *) --> class asmjit::x86::Mem", pybind11::arg("size"), pybind11::arg("alignment"), pybind11::arg("name"));
		cl.def("newConst", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, const void *, unsigned long)) &asmjit::x86::Compiler::newConst, "Put data to a constant-pool and get a memory reference to it.\n\nC++: asmjit::x86::Compiler::newConst(enum asmjit::ConstPoolScope, const void *, unsigned long) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("data"), pybind11::arg("size"));
		cl.def("newByteConst", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, unsigned char)) &asmjit::x86::Compiler::newByteConst, "Put a BYTE `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newByteConst(enum asmjit::ConstPoolScope, unsigned char) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newWordConst", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, unsigned short)) &asmjit::x86::Compiler::newWordConst, "Put a WORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newWordConst(enum asmjit::ConstPoolScope, unsigned short) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newDWordConst", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, unsigned int)) &asmjit::x86::Compiler::newDWordConst, "Put a DWORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newDWordConst(enum asmjit::ConstPoolScope, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newQWordConst", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, unsigned long)) &asmjit::x86::Compiler::newQWordConst, "Put a QWORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newQWordConst(enum asmjit::ConstPoolScope, unsigned long) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newInt16Const", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, short)) &asmjit::x86::Compiler::newInt16Const, "Put a WORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newInt16Const(enum asmjit::ConstPoolScope, short) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newUInt16Const", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, unsigned short)) &asmjit::x86::Compiler::newUInt16Const, "Put a WORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newUInt16Const(enum asmjit::ConstPoolScope, unsigned short) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newInt32Const", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, int)) &asmjit::x86::Compiler::newInt32Const, "Put a DWORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newInt32Const(enum asmjit::ConstPoolScope, int) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newUInt32Const", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, unsigned int)) &asmjit::x86::Compiler::newUInt32Const, "Put a DWORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newUInt32Const(enum asmjit::ConstPoolScope, unsigned int) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newInt64Const", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, long)) &asmjit::x86::Compiler::newInt64Const, "Put a QWORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newInt64Const(enum asmjit::ConstPoolScope, long) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newUInt64Const", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, unsigned long)) &asmjit::x86::Compiler::newUInt64Const, "Put a QWORD `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newUInt64Const(enum asmjit::ConstPoolScope, unsigned long) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newFloatConst", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, float)) &asmjit::x86::Compiler::newFloatConst, "Put a SP-FP `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newFloatConst(enum asmjit::ConstPoolScope, float) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("newDoubleConst", (class asmjit::x86::Mem (asmjit::x86::Compiler::*)(enum asmjit::ConstPoolScope, double)) &asmjit::x86::Compiler::newDoubleConst, "Put a DP-FP `val` to a constant-pool.\n\nC++: asmjit::x86::Compiler::newDoubleConst(enum asmjit::ConstPoolScope, double) --> class asmjit::x86::Mem", pybind11::arg("scope"), pybind11::arg("val"));
		cl.def("unfollow", (class asmjit::x86::Compiler & (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::unfollow, "Force the compiler to not follow the conditional or unconditional jump.\n\nC++: asmjit::x86::Compiler::unfollow() --> class asmjit::x86::Compiler &", pybind11::return_value_policy::automatic);
		cl.def("overwrite", (class asmjit::x86::Compiler & (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::overwrite, "Tell the compiler that the destination variable will be overwritten.\n\nC++: asmjit::x86::Compiler::overwrite() --> class asmjit::x86::Compiler &", pybind11::return_value_policy::automatic);
		cl.def("ret", (unsigned int (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::ret, "Return from function.\n\nC++: asmjit::x86::Compiler::ret() --> unsigned int");
		cl.def("ret", (unsigned int (asmjit::x86::Compiler::*)(const class asmjit::BaseReg &)) &asmjit::x86::Compiler::ret, "C++: asmjit::x86::Compiler::ret(const class asmjit::BaseReg &) --> unsigned int", pybind11::arg("o0"));
		cl.def("ret", (unsigned int (asmjit::x86::Compiler::*)(const class asmjit::BaseReg &, const class asmjit::BaseReg &)) &asmjit::x86::Compiler::ret, "C++: asmjit::x86::Compiler::ret(const class asmjit::BaseReg &, const class asmjit::BaseReg &) --> unsigned int", pybind11::arg("o0"), pybind11::arg("o1"));
		cl.def("jmp", (unsigned int (asmjit::x86::Compiler::*)(const class asmjit::BaseReg &, class asmjit::JumpAnnotation *)) &asmjit::x86::Compiler::jmp, "Adds a jump to the given `target` with the provided jump `annotation`.\n\nC++: asmjit::x86::Compiler::jmp(const class asmjit::BaseReg &, class asmjit::JumpAnnotation *) --> unsigned int", pybind11::arg("target"), pybind11::arg("annotation"));
		cl.def("jmp", (unsigned int (asmjit::x86::Compiler::*)(const class asmjit::BaseMem &, class asmjit::JumpAnnotation *)) &asmjit::x86::Compiler::jmp, "C++: asmjit::x86::Compiler::jmp(const class asmjit::BaseMem &, class asmjit::JumpAnnotation *) --> unsigned int", pybind11::arg("target"), pybind11::arg("annotation"));
		cl.def("onAttach", (unsigned int (asmjit::x86::Compiler::*)(class asmjit::CodeHolder *)) &asmjit::x86::Compiler::onAttach, "\\{\n\nC++: asmjit::x86::Compiler::onAttach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onDetach", (unsigned int (asmjit::x86::Compiler::*)(class asmjit::CodeHolder *)) &asmjit::x86::Compiler::onDetach, "C++: asmjit::x86::Compiler::onDetach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("finalize", (unsigned int (asmjit::x86::Compiler::*)()) &asmjit::x86::Compiler::finalize, "\\{\n\nC++: asmjit::x86::Compiler::finalize() --> unsigned int");
	}
}
