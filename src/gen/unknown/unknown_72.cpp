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

// asmjit::x86::Emitter file: line:4477
struct PyCallBack_asmjit_x86_Emitter : public asmjit::x86::Emitter {
	using asmjit::x86::Emitter::Emitter;

	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "finalize");
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
	unsigned int section(class asmjit::Section * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "section");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::section(a0);
	}
	class asmjit::Label newLabel() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "newLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<class asmjit::Label>::value) {
				static pybind11::detail::override_caster_t<class asmjit::Label> caster;
				return pybind11::detail::cast_ref<class asmjit::Label>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class asmjit::Label>(std::move(o));
		}
		return BaseEmitter::newLabel();
	}
	class asmjit::Label newNamedLabel(const char * a0, unsigned long a1, enum asmjit::LabelType a2, unsigned int a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "newNamedLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<class asmjit::Label>::value) {
				static pybind11::detail::override_caster_t<class asmjit::Label> caster;
				return pybind11::detail::cast_ref<class asmjit::Label>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<class asmjit::Label>(std::move(o));
		}
		return BaseEmitter::newNamedLabel(a0, a1, a2, a3);
	}
	unsigned int bind(const class asmjit::Label & a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "bind");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::bind(a0);
	}
	unsigned int _emit(unsigned int a0, const struct asmjit::Operand_ & a1, const struct asmjit::Operand_ & a2, const struct asmjit::Operand_ & a3, const struct asmjit::Operand_ * a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "_emit");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "_emitOpArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "align");
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
	unsigned int embed(const void * a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "embed");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::embed(a0, a1);
	}
	unsigned int embedDataArray(enum asmjit::TypeId a0, const void * a1, unsigned long a2, unsigned long a3) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "embedDataArray");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::embedDataArray(a0, a1, a2, a3);
	}
	unsigned int embedConstPool(const class asmjit::Label & a0, const class asmjit::ConstPool & a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "embedConstPool");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::embedConstPool(a0, a1);
	}
	unsigned int embedLabel(const class asmjit::Label & a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "embedLabel");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::embedLabel(a0, a1);
	}
	unsigned int embedLabelDelta(const class asmjit::Label & a0, const class asmjit::Label & a1, unsigned long a2) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "embedLabelDelta");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::embedLabelDelta(a0, a1, a2);
	}
	unsigned int comment(const char * a0, unsigned long a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "comment");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::comment(a0, a1);
	}
	unsigned int onAttach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "onAttach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::onAttach(a0);
	}
	unsigned int onDetach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "onDetach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return BaseEmitter::onDetach(a0);
	}
	void onSettingsUpdated() throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Emitter *>(this), "onSettingsUpdated");
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

// asmjit::x86::Assembler file: line:638
struct PyCallBack_asmjit_x86_Assembler : public asmjit::x86::Assembler {
	using asmjit::x86::Assembler::Assembler;

	unsigned int _emit(unsigned int a0, const struct asmjit::Operand_ & a1, const struct asmjit::Operand_ & a2, const struct asmjit::Operand_ & a3, const struct asmjit::Operand_ * a4) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "_emit");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1, a2, a3, a4);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Assembler::_emit(a0, a1, a2, a3, a4);
	}
	unsigned int align(enum asmjit::AlignMode a0, unsigned int a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "align");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Assembler::align(a0, a1);
	}
	unsigned int onAttach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "onAttach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Assembler::onAttach(a0);
	}
	unsigned int onDetach(class asmjit::CodeHolder * a0) throw() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "onDetach");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<unsigned int>::value) {
				static pybind11::detail::override_caster_t<unsigned int> caster;
				return pybind11::detail::cast_ref<unsigned int>(std::move(o), caster);
			}
			return pybind11::detail::cast_safe<unsigned int>(std::move(o));
		}
		return Assembler::onDetach(a0);
	}
	unsigned int section(class asmjit::Section * a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "section");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "newLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "newNamedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "bind");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "embed");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "embedDataArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "embedConstPool");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "embedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "embedLabelDelta");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "comment");
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
	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "finalize");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "_emitOpArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::x86::Assembler *>(this), "onSettingsUpdated");
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

void bind_unknown_unknown_72(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::x86::Emitter file: line:4477
		pybind11::class_<asmjit::x86::Emitter, std::shared_ptr<asmjit::x86::Emitter>, PyCallBack_asmjit_x86_Emitter, asmjit::BaseEmitter, asmjit::x86::EmitterImplicitT<asmjit::x86::Emitter>> cl(M("asmjit::x86"), "Emitter", "Emitter (X86).\n\n \n This class cannot be instantiated, you can only cast to it and use it as emitter that emits to either\n `x86::Assembler`, `x86::Builder`, or `x86::Compiler` (use with caution with `x86::Compiler` as it requires\n virtual registers).");
	}
	{ // asmjit::x86::Assembler file: line:638
		pybind11::class_<asmjit::x86::Assembler, std::shared_ptr<asmjit::x86::Assembler>, PyCallBack_asmjit_x86_Assembler, asmjit::BaseAssembler, asmjit::x86::EmitterImplicitT<asmjit::x86::Assembler>> cl(M("asmjit::x86"), "Assembler", "X86/X64 assembler implementation.\n\n x86::Assembler is a code emitter that emits machine code directly into the  The assembler is capable\n of targeting both 32-bit and 64-bit instruction sets, the instruction set can be configured through \n\n ### Basics\n\n The following example shows a basic use of `x86::Assembler`, how to generate a function that works in both 32-bit\n and 64-bit modes, and how to connect   and `x86::Assembler`.\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n // Signature of the generated function.\n typedef int (*SumFunc)(const int* arr, size_t count);\n\n int main() {\n   JitRuntime rt;                    // Create a runtime specialized for JIT.\n   CodeHolder code;                  // Create a CodeHolder.\n\n   code.init(rt.environment(),       // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Assembler a(&code);          // Create and attach x86::Assembler to code.\n\n   // Decide between 32-bit CDECL, WIN64, and SysV64 calling conventions:\n   //   32-BIT - passed all arguments by stack.\n   //   WIN64  - passes first 4 arguments by RCX, RDX, R8, and R9.\n   //   UNIX64 - passes first 6 arguments by RDI, RSI, RDX, RCX, R8, and R9.\n   x86::Gp arr, cnt;\n   x86::Gp sum = x86::eax;           // Use EAX as 'sum' as it's a return register.\n\n   if (ASMJIT_ARCH_BITS == 64) {\n   #if defined(_WIN32)\n     arr = x86::rcx;                 // First argument (array ptr).\n     cnt = x86::rdx;                 // Second argument (number of elements)\n   #else\n     arr = x86::rdi;                 // First argument (array ptr).\n     cnt = x86::rsi;                 // Second argument (number of elements)\n   #endif\n   }\n   else {\n     arr = x86::edx;                 // Use EDX to hold the array pointer.\n     cnt = x86::ecx;                 // Use ECX to hold the counter.\n     // Fetch first and second arguments from [ESP + 4] and [ESP + 8].\n     a.mov(arr, x86::ptr(x86::esp, 4));\n     a.mov(cnt, x86::ptr(x86::esp, 8));\n   }\n\n   Label Loop = a.newLabel();        // To construct the loop, we need some labels.\n   Label Exit = a.newLabel();\n\n   a.xor_(sum, sum);                 // Clear 'sum' register (shorter than 'mov').\n   a.test(cnt, cnt);                 // Border case:\n   a.jz(Exit);                       //   If 'cnt' is zero jump to 'Exit' now.\n\n   a.bind(Loop);                     // Start of a loop iteration.\n   a.add(sum, x86::dword_ptr(arr));  // Add int at [arr] to 'sum'.\n   a.add(arr, 4);                    // Increment 'arr' pointer.\n   a.dec(cnt);                       // Decrease 'cnt'.\n   a.jnz(Loop);                      // If not zero jump to 'Loop'.\n\n   a.bind(Exit);                     // Exit to handle the border case.\n   a.ret();                          // Return from function ('sum' == 'eax').\n   // ----> x86::Assembler is no longer needed from here and can be destroyed <----\n\n   SumFunc fn;\n   Error err = rt.add(&fn, &code);   // Add the generated code to the runtime.\n\n   if (err) return 1;                // Handle a possible error returned by AsmJit.\n   // ----> CodeHolder is no longer needed from here and can be destroyed <----\n\n   static const int array[6] = { 4, 8, 15, 16, 23, 42 };\n\n   int result = fn(array, 6);        // Execute the generated code.\n   printf(\"%d\\n\", result);           // Print sum of array (108).\n\n   rt.release(fn);                   // Explicitly remove the function from the runtime\n   return 0;                         // Everything successful...\n }\n ```\n\n The example should be self-explanatory. It shows how to work with labels, how to use operands, and how to emit\n instructions that can use different registers based on runtime selection. It implements 32-bit CDECL, WIN64,\n and SysV64 calling conventions and will work on most X86/X64 environments.\n\n Although functions prologs / epilogs can be implemented manually, AsmJit provides utilities that can be used\n to create function prologs and epilogs automatically, see  for more details.\n\n ### Instruction Validation\n\n Assembler prefers speed over strictness by default. The implementation checks the type of operands and fails\n if the signature of types is invalid, however, it does only basic checks regarding registers and their groups\n used in instructions. It's possible to pass operands that don't form any valid signature to the implementation\n and succeed. This is usually not a problem as Assembler provides typed API so operand types are normally checked\n by C++ compiler at compile time, however, Assembler is fully dynamic and its  function can be called\n with any instruction id, options, and operands. Moreover, it's also possible to form instructions that will be\n accepted by the typed API, for example by calling `mov(x86::eax, x86::al)` - the C++ compiler won't see a problem\n as both EAX and AL are  registers.\n\n To help with common mistakes AsmJit allows to activate instruction validation. This feature instruments\n the Assembler to call  before it attempts to encode any instruction.\n\n The example below illustrates how validation can be turned on:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n int main(int argc, char* argv[]) {\n   JitRuntime rt;                    // Create a runtime specialized for JIT.\n   CodeHolder code;                  // Create a CodeHolder.\n\n   code.init(rt.environment(),       // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Assembler a(&code);          // Create and attach x86::Assembler to code.\n\n   // Enable strict validation.\n   a.addDiagnosticOptions(DiagnosticOptions::kValidateAssembler);\n\n   // Try to encode invalid or ill-formed instructions.\n   Error err;\n\n   // Invalid instruction.\n   err = a.mov(x86::eax, x86::al);\n   printf(\"Status: %s\\n\", DebugUtils::errorAsString(err));\n\n   // Invalid instruction.\n   err = a.emit(x86::Inst::kIdMovss, x86::eax, x86::xmm0);\n   printf(\"Status: %s\\n\", DebugUtils::errorAsString(err));\n\n   // Ambiguous operand size - the pointer requires size.\n   err = a.inc(x86::ptr(x86::rax));\n   printf(\"Status: %s\\n\", DebugUtils::errorAsString(err));\n\n   return 0;\n }\n ```\n\n ### Native Registers\n\n All emitters provide functions to construct machine-size registers depending on the target. This feature is\n for users that want to write code targeting both 32-bit and 64-bit architectures at the same time. In AsmJit\n terminology such registers have prefix `z`, so for example on X86 architecture the following native registers\n are provided:\n\n   - `zax` - mapped to either `eax` or `rax`\n   - `zbx` - mapped to either `ebx` or `rbx`\n   - `zcx` - mapped to either `ecx` or `rcx`\n   - `zdx` - mapped to either `edx` or `rdx`\n   - `zsp` - mapped to either `esp` or `rsp`\n   - `zbp` - mapped to either `ebp` or `rbp`\n   - `zsi` - mapped to either `esi` or `rsi`\n   - `zdi` - mapped to either `edi` or `rdi`\n\n They are accessible through   and  The example below\n illustrates how to use this feature:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n typedef int (*Func)(void);\n\n int main(int argc, char* argv[]) {\n   JitRuntime rt;                    // Create a runtime specialized for JIT.\n   CodeHolder code;                  // Create a CodeHolder.\n\n   code.init(rt.environment(),       // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Assembler a(&code);          // Create and attach x86::Assembler to code.\n\n   // Let's get these registers from x86::Assembler.\n   x86::Gp zbp = a.zbp();\n   x86::Gp zsp = a.zsp();\n\n   int stackSize = 32;\n\n   // Function prolog.\n   a.push(zbp);\n   a.mov(zbp, zsp);\n   a.sub(zsp, stackSize);\n\n   // ... emit some code (this just sets return value to zero) ...\n   a.xor_(x86::eax, x86::eax);\n\n   // Function epilog and return.\n   a.mov(zsp, zbp);\n   a.pop(zbp);\n   a.ret();\n\n   // To make the example complete let's call it.\n   Func fn;\n   Error err = rt.add(&fn, &code);   // Add the generated code to the runtime.\n   if (err) return 1;                // Handle a possible error returned by AsmJit.\n\n   int result = fn();                // Execute the generated code.\n   printf(\"%d\\n\", result);           // Print the resulting \"0\".\n\n   rt.release(fn);                   // Remove the function from the runtime.\n   return 0;\n }\n ```\n\n The example just returns `0`, but the function generated contains a standard prolog and epilog sequence and the\n function itself reserves 32 bytes of local stack. The advantage is clear - a single code-base can handle multiple\n targets easily. If you want to create a register of native size dynamically by specifying its id it's also possible:\n\n ```\n #include <asmjit/x86.h>\n using namespace asmjit;\n\n void example(x86::Assembler& a) {\n   x86::Gp zax = a.gpz(x86::Gp::kIdAx);\n   x86::Gp zbx = a.gpz(x86::Gp::kIdBx);\n   x86::Gp zcx = a.gpz(x86::Gp::kIdCx);\n   x86::Gp zdx = a.gpz(x86::Gp::kIdDx);\n\n   // You can also change register's id easily.\n   x86::Gp zsp = zax;\n   zsp.setId(4); // or x86::Gp::kIdSp.\n }\n ```\n\n ### Data Embedding\n\n x86::Assembler extends the standard  with X86/X64 specific conventions that are often used by\n assemblers to embed data next to the code. The following functions can be used to embed data:\n\n   -  - embeds int8_t (portable naming).\n   -  - embeds uint8_t (portable naming).\n   -  - embeds int16_t (portable naming).\n   -  - embeds uint16_t (portable naming).\n   -  - embeds int32_t (portable naming).\n   -  - embeds uint32_t (portable naming).\n   -  - embeds int64_t (portable naming).\n   -  - embeds uint64_t (portable naming).\n   -  - embeds float (portable naming).\n   -  - embeds double (portable naming).\n\n   -  - embeds byte (8 bits) (x86 naming).\n   -  - embeds word (16 bits) (x86 naming).\n   -  - embeds dword (32 bits) (x86 naming).\n   -  - embeds qword (64 bits) (x86 naming).\n\n The following example illustrates how embed works:\n\n ```\n #include <asmjit/x86.h>\n using namespace asmjit;\n\n void embedData(x86::Assembler& a) {\n   a.db(0xFF);         // Embeds 0xFF byte.\n   a.dw(0xFF00);       // Embeds 0xFF00 word (little-endian).\n   a.dd(0xFF000000);   // Embeds 0xFF000000 dword (little-endian).\n   a.embedFloat(0.4f); // Embeds 0.4f (32-bit float, little-endian).\n }\n ```\n\n Sometimes it's required to read the data that is embedded after code, for example. This can be done through\n  as shown below:\n\n ```\n #include <asmjit/x86.h>\n using namespace asmjit;\n\n void processData(x86::Assembler& a, const Label& L_Data) {\n   x86::Gp addr = a.zax();  // EAX or RAX.\n   x86::Gp val = x86::edi;  // Where to store some value...\n\n   // Approach 1 - Load the address to register through LEA. This approach\n   //              is flexible as the address can be then manipulated, for\n   //              example if you have a data array, which would need index.\n   a.lea(addr, x86::ptr(L_Data));\n   a.mov(val, x86::dword_ptr(addr));\n\n   // Approach 2 - Load the data directly by using L_Data in address. It's\n   //              worth noting that this doesn't work with indexes in X64\n   //              mode. It will use absolute address in 32-bit mode and\n   //              relative address (RIP) in 64-bit mode.\n   a.mov(val, x86::dword_ptr(L_Data));\n }\n ```\n\n ### Label Embedding\n\n It's also possible to embed labels. In general AsmJit provides the following options:\n\n   -  - Embeds absolute address of a label. This is target dependent and would\n     embed either 32-bit or 64-bit data that embeds absolute label address. This kind of embedding cannot be\n     used in a position independent code.\n\n   -  - Embeds a difference between two labels. The size of the difference\n     can be specified so it's possible to embed 8-bit, 16-bit, 32-bit, and 64-bit difference, which is sufficient\n     for most purposes.\n\n The following example demonstrates how to embed labels and their differences:\n\n ```\n #include <asmjit/x86.h>\n using namespace asmjit;\n\n void embedLabel(x86::Assembler& a, const Label& L_Data) {\n   // [1] Embed L_Data - the size of the data will be dependent on the target.\n   a.embedLabel(L_Data);\n\n   // [2] Embed a 32-bit difference of two labels.\n   Label L_Here = a.newLabel();\n   a.bind(L_Here);\n   // Embeds int32_t(L_Data - L_Here).\n   a.embedLabelDelta(L_Data, L_Here, 4);\n }\n ```\n\n ### Using FuncFrame and FuncDetail with x86::Assembler\n\n The example below demonstrates how  and  can be used together with \n to generate a function that will use platform dependent calling conventions automatically depending on the target:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n typedef void (*SumIntsFunc)(int* dst, const int* a, const int* b);\n\n int main(int argc, char* argv[]) {\n   JitRuntime rt;                    // Create JIT Runtime.\n   CodeHolder code;                  // Create a CodeHolder.\n\n   code.init(rt.environment(),       // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Assembler a(&code);          // Create and attach x86::Assembler to code.\n\n   // Decide which registers will be mapped to function arguments. Try changing\n   // registers of dst, src_a, and src_b and see what happens in function's\n   // prolog and epilog.\n   x86::Gp dst   = a.zax();\n   x86::Gp src_a = a.zcx();\n   x86::Gp src_b = a.zdx();\n\n   x86::Xmm vec0 = x86::xmm0;\n   x86::Xmm vec1 = x86::xmm1;\n\n   // Create/initialize FuncDetail and FuncFrame.\n   FuncDetail func;\n   func.init(FuncSignature::build<void, int*, const int*, const int*>(),\n             rt.environment());\n\n   FuncFrame frame;\n   frame.init(func);\n\n   // Make XMM0 and XMM1 dirty - RegGroup::kVec describes XMM|YMM|ZMM registers.\n   frame.setDirtyRegs(RegGroup::kVec, Support::bitMask(0, 1));\n\n   // Alternatively, if you don't want to use register masks you can pass BaseReg\n   // to addDirtyRegs(). The following code would add both xmm0 and xmm1.\n   frame.addDirtyRegs(x86::xmm0, x86::xmm1);\n\n   FuncArgsAssignment args(&func);   // Create arguments assignment context.\n   args.assignAll(dst, src_a, src_b);// Assign our registers to arguments.\n   args.updateFuncFrame(frame);      // Reflect our args in FuncFrame.\n   frame.finalize();                 // Finalize the FuncFrame (updates it).\n\n   a.emitProlog(frame);              // Emit function prolog.\n   a.emitArgsAssignment(frame, args);// Assign arguments to registers.\n   a.movdqu(vec0, x86::ptr(src_a));  // Load 4 ints from [src_a] to XMM0.\n   a.movdqu(vec1, x86::ptr(src_b));  // Load 4 ints from [src_b] to XMM1.\n   a.paddd(vec0, vec1);              // Add 4 ints in XMM1 to XMM0.\n   a.movdqu(x86::ptr(dst), vec0);    // Store the result to [dst].\n   a.emitEpilog(frame);              // Emit function epilog and return.\n\n   SumIntsFunc fn;\n   Error err = rt.add(&fn, &code);   // Add the generated code to the runtime.\n   if (err) return 1;                // Handle a possible error case.\n\n   // Execute the generated function.\n   int inA[4] = { 4, 3, 2, 1 };\n   int inB[4] = { 1, 5, 2, 8 };\n   int out[4];\n   fn(out, inA, inB);\n\n   // Prints {5 8 4 9}\n   printf(\"{%d %d %d %d}\\n\", out[0], out[1], out[2], out[3]);\n\n   rt.release(fn);\n   return 0;\n }\n ```\n\n ### Using x86::Assembler as Code-Patcher\n\n This is an advanced topic that is sometimes unavoidable. AsmJit by default appends machine code it generates\n into a  however, it also allows to set the offset in  explicitly and to overwrite\n its content. This technique is extremely dangerous as X86 instructions have variable length (see below), so you\n should in general only patch code to change instruction's immediate values or some other details not known the\n at a time the instruction was emitted. A typical scenario that requires code-patching is when you start emitting\n function and you don't know how much stack you want to reserve for it.\n\n Before we go further it's important to introduce instruction options, because they can help with code-patching\n (and not only patching, but that will be explained in AVX-512 section):\n\n   - Many general-purpose instructions (especially arithmetic ones) on X86 have multiple encodings - in AsmJit\n     this is usually called 'short form' and 'long form'.\n\n   - AsmJit always tries to use 'short form' as it makes the resulting machine-code smaller, which is always\n     good - this decision is used by majority of assemblers out there.\n\n   - AsmJit allows to override the default decision by using `short_()` and `long_()` instruction options to force\n     short or long form, respectively. The most useful is `long_()` as it basically forces AsmJit to always emit\n     the longest form. The `short_()` is not that useful as it's automatic (except jumps to non-bound labels). Note\n     that the underscore after each function name avoids collision with built-in C++ types.\n\n To illustrate what short form and long form means in binary let's assume we want to emit \"add esp, 16\" instruction,\n which has two possible binary encodings:\n\n   - `83C410` - This is a short form aka `short add esp, 16` - You can see opcode byte (0x8C), MOD/RM byte (0xC4)\n     and an 8-bit immediate value representing `16`.\n\n   - `81C410000000` - This is a long form aka `long add esp, 16` - You can see a different opcode byte (0x81), the\n     same Mod/RM byte (0xC4) and a 32-bit immediate in little-endian representing `16`.\n\n It should be obvious that patching an existing instruction into an instruction having a different size may create\n various problems. So it's recommended to be careful and to only patch instructions into instructions having the\n same size. The example below demonstrates how instruction options can be used to guarantee the size of an\n instruction by forcing the assembler to use long-form encoding:\n\n ```\n #include <asmjit/x86.h>\n #include <stdio.h>\n\n using namespace asmjit;\n\n typedef int (*Func)(void);\n\n int main(int argc, char* argv[]) {\n   JitRuntime rt;                    // Create a runtime specialized for JIT.\n   CodeHolder code;                  // Create a CodeHolder.\n\n   code.init(rt.environment(),       // Initialize code to match the JIT environment.\n             rt.cpuFeatures());\n   x86::Assembler a(&code);          // Create and attach x86::Assembler to code.\n\n   // Let's get these registers from x86::Assembler.\n   x86::Gp zbp = a.zbp();\n   x86::Gp zsp = a.zsp();\n\n   // Function prolog.\n   a.push(zbp);\n   a.mov(zbp, zsp);\n\n   // This is where we are gonna patch the code later, so let's get the offset\n   // (the current location) from the beginning of the code-buffer.\n   size_t patchOffset = a.offset();\n   // Let's just emit 'sub zsp, 0' for now, but don't forget to use LONG form.\n   a.long_().sub(zsp, 0);\n\n   // ... emit some code (this just sets return value to zero) ...\n   a.xor_(x86::eax, x86::eax);\n\n   // Function epilog and return.\n   a.mov(zsp, zbp);\n   a.pop(zbp);\n   a.ret();\n\n   // Now we know how much stack size we want to reserve. I have chosen 128\n   // bytes on purpose as it's encodable only in long form that we have used.\n\n   int stackSize = 128;              // Number of bytes to reserve on the stack.\n   a.setOffset(patchOffset);         // Move the current cursor to `patchOffset`.\n   a.long_().sub(zsp, stackSize);    // Patch the code; don't forget to use LONG form.\n\n   // Now the code is ready to be called\n   Func fn;\n   Error err = rt.add(&fn, &code);   // Add the generated code to the runtime.\n   if (err) return 1;                // Handle a possible error returned by AsmJit.\n\n   int result = fn();                // Execute the generated code.\n   printf(\"%d\\n\", result);           // Print the resulting \"0\".\n\n   rt.release(fn);                   // Remove the function from the runtime.\n   return 0;\n }\n ```\n\n If you run the example it will just work, because both instructions have the same size. As an experiment you can\n try removing `long_()` form to see what happens when wrong code is generated.\n\n ### Code Patching and REX Prefix\n\n In 64-bit mode there is one more thing to worry about when patching code: REX prefix. It's a single byte prefix\n designed to address registers with ids from 9 to 15 and to override the default width of operation from 32 to 64\n bits. AsmJit, like other assemblers, only emits REX prefix when it's necessary. If the patched code only changes\n the immediate value as shown in the previous example then there is nothing to worry about as it doesn't change\n the logic behind emitting REX prefix, however, if the patched code changes register id or overrides the operation\n width then it's important to take care of REX prefix as well.\n\n AsmJit contains another instruction option that controls (forces) REX prefix - `rex()`. If you use it the\n instruction emitted will always use REX prefix even when it's encodable without it. The following list contains\n some instructions and their binary representations to illustrate when it's emitted:\n\n   - `__83C410` - `add esp, 16`     - 32-bit operation in 64-bit mode doesn't require REX prefix.\n   - `4083C410` - `rex add esp, 16` - 32-bit operation in 64-bit mode with forced REX prefix (0x40).\n   - `4883C410` - `add rsp, 16`     - 64-bit operation in 64-bit mode requires REX prefix (0x48).\n   - `4183C410` - `add r12d, 16`    - 32-bit operation in 64-bit mode using R12D requires REX prefix (0x41).\n   - `4983C410` - `add r12, 16`     - 64-bit operation in 64-bit mode using R12 requires REX prefix (0x49).\n\n ### More Prefixes\n\n X86 architecture is known for its prefixes. AsmJit supports all prefixes\n that can affect how the instruction is encoded:\n\n ```\n #include <asmjit/x86.h>\n\n using namespace asmjit;\n\n void prefixesExample(x86::Assembler& a) {\n   // Lock prefix for implementing atomics:\n   //   lock add dword ptr [rdi], 1\n   a.lock().add(x86::dword_ptr(x86::rdi), 1);\n\n   // Similarly, XAcquire/XRelease prefixes are also available:\n   //   xacquire add dword ptr [rdi], 1\n   a.xacquire().add(x86::dword_ptr(x86::rdi), 1);\n\n   // Rep prefix (see also repe/repz and repne/repnz):\n   //   rep movs byte ptr [rdi], byte ptr [rsi]\n   a.rep().movs(x86::byte_ptr(x86::rdi), x86::byte_ptr(x86::rsi));\n\n   // Forcing REX prefix in 64-bit mode.\n   //   rex mov eax, 1\n   a.rex().mov(x86::eax, 1);\n\n   // AVX instruction without forced prefix uses the shortest encoding:\n   //   vaddpd xmm0, xmm1, xmm2 -> [C5|F1|58|C2]\n   a.vaddpd(x86::xmm0, x86::xmm1, x86::xmm2);\n\n   // Forcing VEX3 prefix (AVX):\n   //   vex3 vaddpd xmm0, xmm1, xmm2 -> [C4|E1|71|58|C2]\n   a.vex3().vaddpd(x86::xmm0, x86::xmm1, x86::xmm2);\n\n   // Forcing EVEX prefix (AVX512):\n   //   evex vaddpd xmm0, xmm1, xmm2 -> [62|F1|F5|08|58|C2]\n   a.evex().vaddpd(x86::xmm0, x86::xmm1, x86::xmm2);\n\n   // Some instructions accept prefixes not originally intended to:\n   //   rep ret\n   a.rep().ret();\n }\n ```\n\n It's important to understand that prefixes are part of instruction options. When a member function that involves\n adding a prefix is called the prefix is combined with existing instruction options, which will affect the next\n instruction generated.\n\n ### Generating AVX512 code.\n\n x86::Assembler can generate AVX512+ code including the use of opmask registers. Opmask can be specified through\n  function, which stores it as an extra register, which will be used by the next\n instruction. AsmJit uses such concept for manipulating instruction options as well.\n\n The following AVX512 features are supported:\n\n   - Opmask selector {k} and zeroing {z}.\n   - Rounding modes {rn|rd|ru|rz} and suppress-all-exceptions {sae} option.\n   - AVX512 broadcasts {1toN}.\n\n The following example demonstrates how AVX512 features can be used:\n\n ```\n #include <asmjit/x86.h>\n\n using namespace asmjit;\n\n void generateAVX512Code(x86::Assembler& a) {\n   using namespace x86;\n\n   // Opmask Selectors\n   // ----------------\n   //\n   //   - Opmask / zeroing is part of the instruction options / extraReg.\n   //   - k(reg) is like {kreg} in Intel syntax.\n   //   - z() is like {z} in Intel syntax.\n\n   // vaddpd zmm {k1} {z}, zmm1, zmm2\n   a.k(k1).z().vaddpd(zmm0, zmm1, zmm2);\n\n   // Memory Broadcasts\n   // -----------------\n   //\n   //   - Broadcast data is part of memory operand.\n   //   - Use x86::Mem::_1to2(), x86::Mem::_1to4(), etc..., which returns a new x86::Mem operand with broadcast.\n\n   // vaddpd zmm0 {k1} {z}, zmm1, [rcx] {1to8}\n   a.k(k1).z().vaddpd(zmm0, zmm1, x86::ptr(rcx)._1to8());\n\n   // Embedded Rounding & Suppress-All-Exceptions\n   // -------------------------------------------\n   //\n   //   - Rounding mode and {sae} are part of instruction options.\n   //   - Use sae() to enable exception suppression.\n   //   - Use rn_sae(), rd_sae(), ru_sae(), and rz_sae() - to enable rounding.\n   //   - Embedded rounding implicitly sets {sae} as well, that's why the API\n   //     also has sae() suffix, to make it clear.\n\n   // vcmppd k1, zmm1, zmm2, 0x00 {sae}\n   a.sae().vcmppd(k1, zmm1, zmm2, 0);\n\n   // vaddpd zmm0, zmm1, zmm2 {rz}\n   a.rz_sae().vaddpd(zmm0, zmm1, zmm2);\n }\n ```");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Assembler(); }, [](){ return new PyCallBack_asmjit_x86_Assembler(); } ), "doc");
		cl.def( pybind11::init<class asmjit::CodeHolder *>(), pybind11::arg("code") );




		cl.def("align", (unsigned int (asmjit::x86::Assembler::*)(enum asmjit::AlignMode, unsigned int)) &asmjit::x86::Assembler::align, "\\{\n\nC++: asmjit::x86::Assembler::align(enum asmjit::AlignMode, unsigned int) --> unsigned int", pybind11::arg("alignMode"), pybind11::arg("alignment"));
		cl.def("onAttach", (unsigned int (asmjit::x86::Assembler::*)(class asmjit::CodeHolder *)) &asmjit::x86::Assembler::onAttach, "\\{\n\nC++: asmjit::x86::Assembler::onAttach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onDetach", (unsigned int (asmjit::x86::Assembler::*)(class asmjit::CodeHolder *)) &asmjit::x86::Assembler::onDetach, "C++: asmjit::x86::Assembler::onDetach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
	}
}
