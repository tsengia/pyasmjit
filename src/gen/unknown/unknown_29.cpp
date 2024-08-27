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

// asmjit::BaseEmitter file: line:194
struct PyCallBack_asmjit_BaseEmitter : public asmjit::BaseEmitter {
	using asmjit::BaseEmitter::BaseEmitter;

	unsigned int finalize() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "finalize");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "section");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "newLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "newNamedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "bind");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "_emit");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "_emitOpArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "align");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "embed");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "embedDataArray");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "embedConstPool");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "embedLabel");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "embedLabelDelta");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "comment");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "onAttach");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "onDetach");
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
		pybind11::function overload = pybind11::get_overload(static_cast<const asmjit::BaseEmitter *>(this), "onSettingsUpdated");
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

void bind_unknown_unknown_29(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::AlignMode file: line:26
	pybind11::enum_<asmjit::AlignMode>(M("asmjit"), "AlignMode", "Align mode, used by ")
		.value("kCode", asmjit::AlignMode::kCode)
		.value("kData", asmjit::AlignMode::kData)
		.value("kZero", asmjit::AlignMode::kZero)
		.value("kMaxValue", asmjit::AlignMode::kMaxValue);

;

	// asmjit::EmitterType file: line:39
	pybind11::enum_<asmjit::EmitterType>(M("asmjit"), "EmitterType", "Emitter type used by ")
		.value("kNone", asmjit::EmitterType::kNone)
		.value("kAssembler", asmjit::EmitterType::kAssembler)
		.value("kBuilder", asmjit::EmitterType::kBuilder)
		.value("kCompiler", asmjit::EmitterType::kCompiler)
		.value("kMaxValue", asmjit::EmitterType::kMaxValue);

;

	// asmjit::EmitterFlags file: line:54
	pybind11::enum_<asmjit::EmitterFlags>(M("asmjit"), "EmitterFlags", "Emitter flags, used by ")
		.value("kNone", asmjit::EmitterFlags::kNone)
		.value("kAttached", asmjit::EmitterFlags::kAttached)
		.value("kLogComments", asmjit::EmitterFlags::kLogComments)
		.value("kOwnLogger", asmjit::EmitterFlags::kOwnLogger)
		.value("kOwnErrorHandler", asmjit::EmitterFlags::kOwnErrorHandler)
		.value("kFinalized", asmjit::EmitterFlags::kFinalized)
		.value("kDestroyed", asmjit::EmitterFlags::kDestroyed);

;

	// asmjit::EncodingOptions file: line:76
	pybind11::enum_<asmjit::EncodingOptions>(M("asmjit"), "EncodingOptions", "Encoding options.")
		.value("kNone", asmjit::EncodingOptions::kNone)
		.value("kOptimizeForSize", asmjit::EncodingOptions::kOptimizeForSize)
		.value("kOptimizedAlign", asmjit::EncodingOptions::kOptimizedAlign)
		.value("kPredictedJumps", asmjit::EncodingOptions::kPredictedJumps);

;

	// asmjit::DiagnosticOptions file: line:142
	pybind11::enum_<asmjit::DiagnosticOptions>(M("asmjit"), "DiagnosticOptions", "Diagnostic options are used to tell emitters and their passes to perform diagnostics when emitting or processing\n user code. These options control validation and extra diagnostics that can be performed by higher level emitters.\n\n Instruction Validation\n ----------------------\n\n  implementation perform by default only basic checks that are necessary to identify all\n variations of an instruction so the correct encoding can be selected. This is fine for production-ready code\n as the assembler doesn't have to perform checks that would slow it down. However, sometimes these checks are\n beneficial especially when the project that uses AsmJit is in a development phase, in which mistakes happen\n often. To make the experience of using AsmJit seamless it offers validation features that can be controlled\n by \n\n Compiler Diagnostics\n --------------------\n\n Diagnostic options work with  passes (precisely with its register allocation pass). These options\n can be used to enable logging of all operations that the Compiler does.")
		.value("kNone", asmjit::DiagnosticOptions::kNone)
		.value("kValidateAssembler", asmjit::DiagnosticOptions::kValidateAssembler)
		.value("kValidateIntermediate", asmjit::DiagnosticOptions::kValidateIntermediate)
		.value("kRAAnnotate", asmjit::DiagnosticOptions::kRAAnnotate)
		.value("kRADebugCFG", asmjit::DiagnosticOptions::kRADebugCFG)
		.value("kRADebugLiveness", asmjit::DiagnosticOptions::kRADebugLiveness)
		.value("kRADebugAssignment", asmjit::DiagnosticOptions::kRADebugAssignment)
		.value("kRADebugUnreachable", asmjit::DiagnosticOptions::kRADebugUnreachable)
		.value("kRADebugAll", asmjit::DiagnosticOptions::kRADebugAll);

;

	{ // asmjit::BaseEmitter file: line:194
		pybind11::class_<asmjit::BaseEmitter, std::shared_ptr<asmjit::BaseEmitter>, PyCallBack_asmjit_BaseEmitter> cl(M("asmjit"), "BaseEmitter", "Provides a base foundation to emitting code - specialized by  and ");
		cl.def( pybind11::init<enum asmjit::EmitterType>(), pybind11::arg("emitterType") );
















		cl.def("emitterType", (enum asmjit::EmitterType (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::emitterType, "Returns the type of this emitter, see `EmitterType`.\n\nC++: asmjit::BaseEmitter::emitterType() const --> enum asmjit::EmitterType");
		cl.def("emitterFlags", (enum asmjit::EmitterFlags (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::emitterFlags, "Returns emitter flags , see `Flags`.\n\nC++: asmjit::BaseEmitter::emitterFlags() const --> enum asmjit::EmitterFlags");
		cl.def("isAssembler", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::isAssembler, "Tests whether the emitter inherits from `BaseAssembler`.\n\nC++: asmjit::BaseEmitter::isAssembler() const --> bool");
		cl.def("isBuilder", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::isBuilder, "Tests whether the emitter inherits from `BaseBuilder`.\n\n \n Both Builder and Compiler emitters would return `true`.\n\nC++: asmjit::BaseEmitter::isBuilder() const --> bool");
		cl.def("isCompiler", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::isCompiler, "Tests whether the emitter inherits from `BaseCompiler`.\n\nC++: asmjit::BaseEmitter::isCompiler() const --> bool");
		cl.def("hasEmitterFlag", (bool (asmjit::BaseEmitter::*)(enum asmjit::EmitterFlags) const) &asmjit::BaseEmitter::hasEmitterFlag, "Tests whether the emitter has the given `flag` enabled.\n\nC++: asmjit::BaseEmitter::hasEmitterFlag(enum asmjit::EmitterFlags) const --> bool", pybind11::arg("flag"));
		cl.def("isFinalized", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::isFinalized, "Tests whether the emitter is finalized.\n\nC++: asmjit::BaseEmitter::isFinalized() const --> bool");
		cl.def("isDestroyed", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::isDestroyed, "Tests whether the emitter is destroyed (only used during destruction).\n\nC++: asmjit::BaseEmitter::isDestroyed() const --> bool");


		cl.def("code", (class asmjit::CodeHolder * (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::code, "Returns the CodeHolder this emitter is attached to.\n\nC++: asmjit::BaseEmitter::code() const --> class asmjit::CodeHolder *", pybind11::return_value_policy::automatic);
		cl.def("environment", (const class asmjit::Environment & (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::environment, "Returns the target environment.\n\n The returned  reference matches \n\nC++: asmjit::BaseEmitter::environment() const --> const class asmjit::Environment &", pybind11::return_value_policy::automatic);
		cl.def("is32Bit", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::is32Bit, "Tests whether the target architecture is 32-bit.\n\nC++: asmjit::BaseEmitter::is32Bit() const --> bool");
		cl.def("is64Bit", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::is64Bit, "Tests whether the target architecture is 64-bit.\n\nC++: asmjit::BaseEmitter::is64Bit() const --> bool");
		cl.def("arch", (enum asmjit::Arch (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::arch, "Returns the target architecture type.\n\nC++: asmjit::BaseEmitter::arch() const --> enum asmjit::Arch");
		cl.def("subArch", (enum asmjit::SubArch (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::subArch, "Returns the target architecture sub-type.\n\nC++: asmjit::BaseEmitter::subArch() const --> enum asmjit::SubArch");
		cl.def("registerSize", (unsigned int (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::registerSize, "Returns the target architecture's GP register size (4 or 8 bytes).\n\nC++: asmjit::BaseEmitter::registerSize() const --> unsigned int");
		cl.def("gpSignature", (struct asmjit::OperandSignature (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::gpSignature, "Returns a signature of a native general purpose register (either 32-bit or 64-bit depending on the architecture).\n\nC++: asmjit::BaseEmitter::gpSignature() const --> struct asmjit::OperandSignature");
		cl.def("instructionAlignment", (unsigned int (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::instructionAlignment, "Returns instruction alignment.\n\n The following values are returned based on the target architecture:\n   - X86 and X86_64 - instruction alignment is 1\n   - AArch32 - instruction alignment is 4 in A32 mode and 2 in THUMB mode.\n   - AArch64 - instruction alignment is 4\n\nC++: asmjit::BaseEmitter::instructionAlignment() const --> unsigned int");
		cl.def("isInitialized", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::isInitialized, "Tests whether the emitter is initialized (i.e. attached to \n\nC++: asmjit::BaseEmitter::isInitialized() const --> bool");
		cl.def("finalize", (unsigned int (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::finalize, "Finalizes this emitter.\n\n Materializes the content of the emitter by serializing it to the attached  through an architecture\n specific  This function won't do anything if the emitter inherits from  as\n assemblers emit directly to a  held by  However, if this is an emitter that\n inherits from  or  then these emitters need the materialization phase as they\n store their content in a representation not visible to \n\nC++: asmjit::BaseEmitter::finalize() --> unsigned int");
		cl.def("hasLogger", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::hasLogger, "Tests whether the emitter has a logger.\n\nC++: asmjit::BaseEmitter::hasLogger() const --> bool");
		cl.def("hasOwnLogger", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::hasOwnLogger, "Tests whether the emitter has its own logger.\n\n Own logger means that it overrides the possible logger that may be used by  this emitter is\n attached to.\n\nC++: asmjit::BaseEmitter::hasOwnLogger() const --> bool");
		cl.def("logger", (class asmjit::Logger * (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::logger, "Returns the logger this emitter uses.\n\n The returned logger is either the emitter's own logger or it's logger used by  this emitter\n is attached to.\n\nC++: asmjit::BaseEmitter::logger() const --> class asmjit::Logger *", pybind11::return_value_policy::automatic);
		cl.def("setLogger", (void (asmjit::BaseEmitter::*)(class asmjit::Logger *)) &asmjit::BaseEmitter::setLogger, "Sets or resets the logger of the emitter.\n\n If the `logger` argument is non-null then the logger will be considered emitter's own logger, see \n for more details. If the given `logger` is null then the emitter will automatically use logger\n that is attached to the  this emitter is attached to.\n\nC++: asmjit::BaseEmitter::setLogger(class asmjit::Logger *) --> void", pybind11::arg("logger"));
		cl.def("resetLogger", (void (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::resetLogger, "Resets the logger of this emitter.\n\n The emitter will bail to using a logger attached to  this emitter is attached to, or no logger\n at all if  doesn't have one.\n\nC++: asmjit::BaseEmitter::resetLogger() --> void");
		cl.def("hasErrorHandler", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::hasErrorHandler, "Tests whether the emitter has an error handler attached.\n\nC++: asmjit::BaseEmitter::hasErrorHandler() const --> bool");
		cl.def("hasOwnErrorHandler", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::hasOwnErrorHandler, "Tests whether the emitter has its own error handler.\n\n Own error handler means that it overrides the possible error handler that may be used by  this\n emitter is attached to.\n\nC++: asmjit::BaseEmitter::hasOwnErrorHandler() const --> bool");
		cl.def("errorHandler", (class asmjit::ErrorHandler * (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::errorHandler, "Returns the error handler this emitter uses.\n\n The returned error handler is either the emitter's own error handler or it's error handler used by\n  this emitter is attached to.\n\nC++: asmjit::BaseEmitter::errorHandler() const --> class asmjit::ErrorHandler *", pybind11::return_value_policy::automatic);
		cl.def("setErrorHandler", (void (asmjit::BaseEmitter::*)(class asmjit::ErrorHandler *)) &asmjit::BaseEmitter::setErrorHandler, "Sets or resets the error handler of the emitter.\n\nC++: asmjit::BaseEmitter::setErrorHandler(class asmjit::ErrorHandler *) --> void", pybind11::arg("errorHandler"));
		cl.def("resetErrorHandler", (void (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::resetErrorHandler, "Resets the error handler.\n\nC++: asmjit::BaseEmitter::resetErrorHandler() --> void");
		cl.def("reportError", [](asmjit::BaseEmitter &o, unsigned int const & a0) -> unsigned int { return o.reportError(a0); }, "", pybind11::arg("err"));
		cl.def("reportError", (unsigned int (asmjit::BaseEmitter::*)(unsigned int, const char *)) &asmjit::BaseEmitter::reportError, "Handles the given error in the following way:\n   1. If the emitter has  attached, it calls its  member function\n      first, and then returns the error. The `handleError()` function may throw.\n   2. if the emitter doesn't have  the error is simply returned.\n\nC++: asmjit::BaseEmitter::reportError(unsigned int, const char *) --> unsigned int", pybind11::arg("err"), pybind11::arg("message"));
		cl.def("encodingOptions", (enum asmjit::EncodingOptions (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::encodingOptions, "Returns encoding options.\n\nC++: asmjit::BaseEmitter::encodingOptions() const --> enum asmjit::EncodingOptions");
		cl.def("hasEncodingOption", (bool (asmjit::BaseEmitter::*)(enum asmjit::EncodingOptions) const) &asmjit::BaseEmitter::hasEncodingOption, "Tests whether the encoding `option` is set.\n\nC++: asmjit::BaseEmitter::hasEncodingOption(enum asmjit::EncodingOptions) const --> bool", pybind11::arg("option"));
		cl.def("addEncodingOptions", (void (asmjit::BaseEmitter::*)(enum asmjit::EncodingOptions)) &asmjit::BaseEmitter::addEncodingOptions, "Enables the given encoding `options`.\n\nC++: asmjit::BaseEmitter::addEncodingOptions(enum asmjit::EncodingOptions) --> void", pybind11::arg("options"));
		cl.def("clearEncodingOptions", (void (asmjit::BaseEmitter::*)(enum asmjit::EncodingOptions)) &asmjit::BaseEmitter::clearEncodingOptions, "Disables the given encoding `options`.\n\nC++: asmjit::BaseEmitter::clearEncodingOptions(enum asmjit::EncodingOptions) --> void", pybind11::arg("options"));
		cl.def("diagnosticOptions", (enum asmjit::DiagnosticOptions (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::diagnosticOptions, "Returns the emitter's diagnostic options.\n\nC++: asmjit::BaseEmitter::diagnosticOptions() const --> enum asmjit::DiagnosticOptions");
		cl.def("hasDiagnosticOption", (bool (asmjit::BaseEmitter::*)(enum asmjit::DiagnosticOptions) const) &asmjit::BaseEmitter::hasDiagnosticOption, "Tests whether the given `option` is present in the emitter's diagnostic options.\n\nC++: asmjit::BaseEmitter::hasDiagnosticOption(enum asmjit::DiagnosticOptions) const --> bool", pybind11::arg("option"));
		cl.def("addDiagnosticOptions", (void (asmjit::BaseEmitter::*)(enum asmjit::DiagnosticOptions)) &asmjit::BaseEmitter::addDiagnosticOptions, "Activates the given diagnostic `options`.\n\n This function is used to activate explicit validation options that will be then used by all emitter\n implementations. There are in general two possibilities:\n\n   - Architecture specific assembler is used. In this case a  can be\n     used to turn on explicit validation that will be used before an instruction is emitted. This means that\n     internally an extra step will be performed to make sure that the instruction is correct. This is needed,\n     because by default assemblers prefer speed over strictness.\n\n     This option should be used in debug builds as it's pretty expensive.\n\n   - Architecture specific builder or compiler is used. In this case the user can turn on\n      option that adds explicit validation step before the Builder\n     or Compiler creates an  to represent an emitted instruction. Error will be returned if the\n     instruction is ill-formed. In addition, also  can be used, which\n     would not be consumed by Builder / Compiler directly, but it would be propagated to an architecture specific\n      implementation it creates during \n\nC++: asmjit::BaseEmitter::addDiagnosticOptions(enum asmjit::DiagnosticOptions) --> void", pybind11::arg("options"));
		cl.def("clearDiagnosticOptions", (void (asmjit::BaseEmitter::*)(enum asmjit::DiagnosticOptions)) &asmjit::BaseEmitter::clearDiagnosticOptions, "Deactivates the given validation `options`.\n\n See  and  for more details.\n\nC++: asmjit::BaseEmitter::clearDiagnosticOptions(enum asmjit::DiagnosticOptions) --> void", pybind11::arg("options"));
		cl.def("forcedInstOptions", (enum asmjit::InstOptions (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::forcedInstOptions, "Returns forced instruction options.\n\n Forced instruction options are merged with next instruction options before the instruction is encoded. These\n options have some bits reserved that are used by error handling, logging, and instruction validation purposes.\n Other options are globals that affect each instruction.\n\nC++: asmjit::BaseEmitter::forcedInstOptions() const --> enum asmjit::InstOptions");
		cl.def("instOptions", (enum asmjit::InstOptions (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::instOptions, "Returns options of the next instruction.\n\nC++: asmjit::BaseEmitter::instOptions() const --> enum asmjit::InstOptions");
		cl.def("setInstOptions", (void (asmjit::BaseEmitter::*)(enum asmjit::InstOptions)) &asmjit::BaseEmitter::setInstOptions, "Returns options of the next instruction.\n\nC++: asmjit::BaseEmitter::setInstOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("addInstOptions", (void (asmjit::BaseEmitter::*)(enum asmjit::InstOptions)) &asmjit::BaseEmitter::addInstOptions, "Adds options of the next instruction.\n\nC++: asmjit::BaseEmitter::addInstOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("resetInstOptions", (void (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::resetInstOptions, "Resets options of the next instruction.\n\nC++: asmjit::BaseEmitter::resetInstOptions() --> void");
		cl.def("hasExtraReg", (bool (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::hasExtraReg, "Tests whether the extra register operand is valid.\n\nC++: asmjit::BaseEmitter::hasExtraReg() const --> bool");
		cl.def("extraReg", (const struct asmjit::RegOnly & (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::extraReg, "Returns an extra operand that will be used by the next instruction (architecture specific).\n\nC++: asmjit::BaseEmitter::extraReg() const --> const struct asmjit::RegOnly &", pybind11::return_value_policy::automatic);
		cl.def("setExtraReg", (void (asmjit::BaseEmitter::*)(const class asmjit::BaseReg &)) &asmjit::BaseEmitter::setExtraReg, "Sets an extra operand that will be used by the next instruction (architecture specific).\n\nC++: asmjit::BaseEmitter::setExtraReg(const class asmjit::BaseReg &) --> void", pybind11::arg("reg"));
		cl.def("setExtraReg", (void (asmjit::BaseEmitter::*)(const struct asmjit::RegOnly &)) &asmjit::BaseEmitter::setExtraReg, "Sets an extra operand that will be used by the next instruction (architecture specific).\n\nC++: asmjit::BaseEmitter::setExtraReg(const struct asmjit::RegOnly &) --> void", pybind11::arg("reg"));
		cl.def("resetExtraReg", (void (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::resetExtraReg, "Resets an extra operand that will be used by the next instruction (architecture specific).\n\nC++: asmjit::BaseEmitter::resetExtraReg() --> void");
		cl.def("inlineComment", (const char * (asmjit::BaseEmitter::*)() const) &asmjit::BaseEmitter::inlineComment, "Returns comment/annotation of the next instruction.\n\nC++: asmjit::BaseEmitter::inlineComment() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("setInlineComment", (void (asmjit::BaseEmitter::*)(const char *)) &asmjit::BaseEmitter::setInlineComment, "Sets comment/annotation of the next instruction.\n\n \n This string is set back to null by `_emit()`, but until that it has to remain valid as the Emitter is not\n required to make a copy of it (and it would be slow to do that for each instruction).\n\nC++: asmjit::BaseEmitter::setInlineComment(const char *) --> void", pybind11::arg("s"));
		cl.def("resetInlineComment", (void (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::resetInlineComment, "Resets the comment/annotation to nullptr.\n\nC++: asmjit::BaseEmitter::resetInlineComment() --> void");
		cl.def("resetState", (void (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::resetState, "Resets the emitter state, which contains instruction options, extra register, and inline comment.\n\n Emitter can have a state that describes instruction options and extra register used by the instruction. Most\n instructions don't need nor use the state, however, if an instruction uses a prefix such as REX or REP prefix,\n which is set explicitly, then the state would contain it. This allows to mimic the syntax of assemblers such\n as X86. For example `rep().movs(...)` would map to a `REP MOVS` instuction on X86. The same applies to various\n hints and the use of a mask register in AVX-512 mode.\n\nC++: asmjit::BaseEmitter::resetState() --> void");

		cl.def("section", (unsigned int (asmjit::BaseEmitter::*)(class asmjit::Section *)) &asmjit::BaseEmitter::section, "Switches the given `section`.\n\n Once switched, everything is added to the given `section`.\n\nC++: asmjit::BaseEmitter::section(class asmjit::Section *) --> unsigned int", pybind11::arg("section"));
		cl.def("newLabel", (class asmjit::Label (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::newLabel, "Creates a new label.\n\nC++: asmjit::BaseEmitter::newLabel() --> class asmjit::Label");
		cl.def("newNamedLabel", [](asmjit::BaseEmitter &o, const char * a0) -> asmjit::Label { return o.newNamedLabel(a0); }, "", pybind11::arg("name"));
		cl.def("newNamedLabel", [](asmjit::BaseEmitter &o, const char * a0, unsigned long const & a1) -> asmjit::Label { return o.newNamedLabel(a0, a1); }, "", pybind11::arg("name"), pybind11::arg("nameSize"));
		cl.def("newNamedLabel", [](asmjit::BaseEmitter &o, const char * a0, unsigned long const & a1, enum asmjit::LabelType const & a2) -> asmjit::Label { return o.newNamedLabel(a0, a1, a2); }, "", pybind11::arg("name"), pybind11::arg("nameSize"), pybind11::arg("type"));
		cl.def("newNamedLabel", (class asmjit::Label (asmjit::BaseEmitter::*)(const char *, unsigned long, enum asmjit::LabelType, unsigned int)) &asmjit::BaseEmitter::newNamedLabel, "Creates a new named label.\n\nC++: asmjit::BaseEmitter::newNamedLabel(const char *, unsigned long, enum asmjit::LabelType, unsigned int) --> class asmjit::Label", pybind11::arg("name"), pybind11::arg("nameSize"), pybind11::arg("type"), pybind11::arg("parentId"));
		cl.def("newAnonymousLabel", [](asmjit::BaseEmitter &o, const char * a0) -> asmjit::Label { return o.newAnonymousLabel(a0); }, "", pybind11::arg("name"));
		cl.def("newAnonymousLabel", (class asmjit::Label (asmjit::BaseEmitter::*)(const char *, unsigned long)) &asmjit::BaseEmitter::newAnonymousLabel, "Creates a new anonymous label with a name, which can only be used for debugging purposes.\n\nC++: asmjit::BaseEmitter::newAnonymousLabel(const char *, unsigned long) --> class asmjit::Label", pybind11::arg("name"), pybind11::arg("nameSize"));
		cl.def("newExternalLabel", [](asmjit::BaseEmitter &o, const char * a0) -> asmjit::Label { return o.newExternalLabel(a0); }, "", pybind11::arg("name"));
		cl.def("newExternalLabel", (class asmjit::Label (asmjit::BaseEmitter::*)(const char *, unsigned long)) &asmjit::BaseEmitter::newExternalLabel, "Creates a new external label.\n\nC++: asmjit::BaseEmitter::newExternalLabel(const char *, unsigned long) --> class asmjit::Label", pybind11::arg("name"), pybind11::arg("nameSize"));
		cl.def("labelByName", [](asmjit::BaseEmitter &o, const char * a0) -> asmjit::Label { return o.labelByName(a0); }, "", pybind11::arg("name"));
		cl.def("labelByName", [](asmjit::BaseEmitter &o, const char * a0, unsigned long const & a1) -> asmjit::Label { return o.labelByName(a0, a1); }, "", pybind11::arg("name"), pybind11::arg("nameSize"));
		cl.def("labelByName", (class asmjit::Label (asmjit::BaseEmitter::*)(const char *, unsigned long, unsigned int)) &asmjit::BaseEmitter::labelByName, "Returns `Label` by `name`.\n\n Returns invalid Label in case that the name is invalid or label was not found.\n\n \n This function doesn't trigger ErrorHandler in case the name is invalid or no such label exist. You must\n always check the validity of the `Label` returned.\n\nC++: asmjit::BaseEmitter::labelByName(const char *, unsigned long, unsigned int) --> class asmjit::Label", pybind11::arg("name"), pybind11::arg("nameSize"), pybind11::arg("parentId"));
		cl.def("bind", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::Label &)) &asmjit::BaseEmitter::bind, "Binds the `label` to the current position of the current section.\n\n \n Attempt to bind the same label multiple times will return an error.\n\nC++: asmjit::BaseEmitter::bind(const class asmjit::Label &) --> unsigned int", pybind11::arg("label"));
		cl.def("isLabelValid", (bool (asmjit::BaseEmitter::*)(unsigned int) const) &asmjit::BaseEmitter::isLabelValid, "Tests whether the label `id` is valid (i.e. registered).\n\nC++: asmjit::BaseEmitter::isLabelValid(unsigned int) const --> bool", pybind11::arg("labelId"));
		cl.def("isLabelValid", (bool (asmjit::BaseEmitter::*)(const class asmjit::Label &) const) &asmjit::BaseEmitter::isLabelValid, "Tests whether the `label` is valid (i.e. registered).\n\nC++: asmjit::BaseEmitter::isLabelValid(const class asmjit::Label &) const --> bool", pybind11::arg("label"));







		cl.def("emitOpArray", (unsigned int (asmjit::BaseEmitter::*)(unsigned int, const struct asmjit::Operand_ *, unsigned long)) &asmjit::BaseEmitter::emitOpArray, "Similar to  but uses array of `operands` instead.\n\nC++: asmjit::BaseEmitter::emitOpArray(unsigned int, const struct asmjit::Operand_ *, unsigned long) --> unsigned int", pybind11::arg("instId"), pybind11::arg("operands"), pybind11::arg("opCount"));
		cl.def("emitInst", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long)) &asmjit::BaseEmitter::emitInst, "Similar to  but emits instruction with both instruction options and extra register, followed\n by an array of `operands`.\n\nC++: asmjit::BaseEmitter::emitInst(const class asmjit::BaseInst &, const struct asmjit::Operand_ *, unsigned long) --> unsigned int", pybind11::arg("inst"), pybind11::arg("operands"), pybind11::arg("opCount"));


		cl.def("emitProlog", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::FuncFrame &)) &asmjit::BaseEmitter::emitProlog, "Emits a function prolog described by the given function `frame`.\n\nC++: asmjit::BaseEmitter::emitProlog(const class asmjit::FuncFrame &) --> unsigned int", pybind11::arg("frame"));
		cl.def("emitEpilog", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::FuncFrame &)) &asmjit::BaseEmitter::emitEpilog, "Emits a function epilog described by the given function `frame`.\n\nC++: asmjit::BaseEmitter::emitEpilog(const class asmjit::FuncFrame &) --> unsigned int", pybind11::arg("frame"));
		cl.def("emitArgsAssignment", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::FuncFrame &, const class asmjit::FuncArgsAssignment &)) &asmjit::BaseEmitter::emitArgsAssignment, "Emits code that reassigns function `frame` arguments to the given `args`.\n\nC++: asmjit::BaseEmitter::emitArgsAssignment(const class asmjit::FuncFrame &, const class asmjit::FuncArgsAssignment &) --> unsigned int", pybind11::arg("frame"), pybind11::arg("args"));
		cl.def("align", (unsigned int (asmjit::BaseEmitter::*)(enum asmjit::AlignMode, unsigned int)) &asmjit::BaseEmitter::align, "Aligns the current CodeBuffer position to the `alignment` specified.\n\n The sequence that is used to fill the gap between the aligned location and the current location depends on the\n align `mode`, see  The `alignment` argument specifies alignment in bytes, so for example when\n it's `32` it means that the code buffer will be aligned to `32` bytes.\n\nC++: asmjit::BaseEmitter::align(enum asmjit::AlignMode, unsigned int) --> unsigned int", pybind11::arg("alignMode"), pybind11::arg("alignment"));
		cl.def("embed", (unsigned int (asmjit::BaseEmitter::*)(const void *, unsigned long)) &asmjit::BaseEmitter::embed, "Embeds raw data into the \n\nC++: asmjit::BaseEmitter::embed(const void *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("dataSize"));
		cl.def("embedDataArray", [](asmjit::BaseEmitter &o, enum asmjit::TypeId const & a0, const void * a1, unsigned long const & a2) -> unsigned int { return o.embedDataArray(a0, a1, a2); }, "", pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("itemCount"));
		cl.def("embedDataArray", (unsigned int (asmjit::BaseEmitter::*)(enum asmjit::TypeId, const void *, unsigned long, unsigned long)) &asmjit::BaseEmitter::embedDataArray, "Embeds a typed data array.\n\n This is the most flexible function for embedding data as it allows to:\n\n   - Assign a `typeId` to the data, so the emitter knows the type of items stored in `data`. Binary data should\n     use \n\n   - Repeat the given data `repeatCount` times, so the data can be used as a fill pattern for example, or as a\n     pattern used by SIMD instructions.\n\nC++: asmjit::BaseEmitter::embedDataArray(enum asmjit::TypeId, const void *, unsigned long, unsigned long) --> unsigned int", pybind11::arg("typeId"), pybind11::arg("data"), pybind11::arg("itemCount"), pybind11::arg("repeatCount"));
		cl.def("embedInt8", [](asmjit::BaseEmitter &o, signed char const & a0) -> unsigned int { return o.embedInt8(a0); }, "", pybind11::arg("value"));
		cl.def("embedInt8", (unsigned int (asmjit::BaseEmitter::*)(signed char, unsigned long)) &asmjit::BaseEmitter::embedInt8, "Embeds int8_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedInt8(signed char, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedUInt8", [](asmjit::BaseEmitter &o, unsigned char const & a0) -> unsigned int { return o.embedUInt8(a0); }, "", pybind11::arg("value"));
		cl.def("embedUInt8", (unsigned int (asmjit::BaseEmitter::*)(unsigned char, unsigned long)) &asmjit::BaseEmitter::embedUInt8, "Embeds uint8_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedUInt8(unsigned char, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedInt16", [](asmjit::BaseEmitter &o, short const & a0) -> unsigned int { return o.embedInt16(a0); }, "", pybind11::arg("value"));
		cl.def("embedInt16", (unsigned int (asmjit::BaseEmitter::*)(short, unsigned long)) &asmjit::BaseEmitter::embedInt16, "Embeds int16_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedInt16(short, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedUInt16", [](asmjit::BaseEmitter &o, unsigned short const & a0) -> unsigned int { return o.embedUInt16(a0); }, "", pybind11::arg("value"));
		cl.def("embedUInt16", (unsigned int (asmjit::BaseEmitter::*)(unsigned short, unsigned long)) &asmjit::BaseEmitter::embedUInt16, "Embeds uint16_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedUInt16(unsigned short, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedInt32", [](asmjit::BaseEmitter &o, int const & a0) -> unsigned int { return o.embedInt32(a0); }, "", pybind11::arg("value"));
		cl.def("embedInt32", (unsigned int (asmjit::BaseEmitter::*)(int, unsigned long)) &asmjit::BaseEmitter::embedInt32, "Embeds int32_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedInt32(int, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedUInt32", [](asmjit::BaseEmitter &o, unsigned int const & a0) -> unsigned int { return o.embedUInt32(a0); }, "", pybind11::arg("value"));
		cl.def("embedUInt32", (unsigned int (asmjit::BaseEmitter::*)(unsigned int, unsigned long)) &asmjit::BaseEmitter::embedUInt32, "Embeds uint32_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedUInt32(unsigned int, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedInt64", [](asmjit::BaseEmitter &o, long const & a0) -> unsigned int { return o.embedInt64(a0); }, "", pybind11::arg("value"));
		cl.def("embedInt64", (unsigned int (asmjit::BaseEmitter::*)(long, unsigned long)) &asmjit::BaseEmitter::embedInt64, "Embeds int64_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedInt64(long, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedUInt64", [](asmjit::BaseEmitter &o, unsigned long const & a0) -> unsigned int { return o.embedUInt64(a0); }, "", pybind11::arg("value"));
		cl.def("embedUInt64", (unsigned int (asmjit::BaseEmitter::*)(unsigned long, unsigned long)) &asmjit::BaseEmitter::embedUInt64, "Embeds uint64_t `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedUInt64(unsigned long, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedFloat", [](asmjit::BaseEmitter &o, float const & a0) -> unsigned int { return o.embedFloat(a0); }, "", pybind11::arg("value"));
		cl.def("embedFloat", (unsigned int (asmjit::BaseEmitter::*)(float, unsigned long)) &asmjit::BaseEmitter::embedFloat, "Embeds a floating point `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedFloat(float, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedDouble", [](asmjit::BaseEmitter &o, double const & a0) -> unsigned int { return o.embedDouble(a0); }, "", pybind11::arg("value"));
		cl.def("embedDouble", (unsigned int (asmjit::BaseEmitter::*)(double, unsigned long)) &asmjit::BaseEmitter::embedDouble, "Embeds a floating point `value` repeated by `repeatCount`.\n\nC++: asmjit::BaseEmitter::embedDouble(double, unsigned long) --> unsigned int", pybind11::arg("value"), pybind11::arg("repeatCount"));
		cl.def("embedConstPool", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::Label &, const class asmjit::ConstPool &)) &asmjit::BaseEmitter::embedConstPool, "Embeds a constant pool at the current offset by performing the following:\n   1. Aligns by using AlignMode::kData to the minimum `pool` alignment.\n   2. Binds the ConstPool label so it's bound to an aligned location.\n   3. Emits ConstPool content.\n\nC++: asmjit::BaseEmitter::embedConstPool(const class asmjit::Label &, const class asmjit::ConstPool &) --> unsigned int", pybind11::arg("label"), pybind11::arg("pool"));
		cl.def("embedLabel", [](asmjit::BaseEmitter &o, const class asmjit::Label & a0) -> unsigned int { return o.embedLabel(a0); }, "", pybind11::arg("label"));
		cl.def("embedLabel", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::Label &, unsigned long)) &asmjit::BaseEmitter::embedLabel, "Embeds an absolute `label` address as data.\n\n The `dataSize` is an optional argument that can be used to specify the size of the address data. If it's zero\n (default) the address size is deduced from the target architecture (either 4 or 8 bytes).\n\nC++: asmjit::BaseEmitter::embedLabel(const class asmjit::Label &, unsigned long) --> unsigned int", pybind11::arg("label"), pybind11::arg("dataSize"));
		cl.def("embedLabelDelta", [](asmjit::BaseEmitter &o, const class asmjit::Label & a0, const class asmjit::Label & a1) -> unsigned int { return o.embedLabelDelta(a0, a1); }, "", pybind11::arg("label"), pybind11::arg("base"));
		cl.def("embedLabelDelta", (unsigned int (asmjit::BaseEmitter::*)(const class asmjit::Label &, const class asmjit::Label &, unsigned long)) &asmjit::BaseEmitter::embedLabelDelta, "Embeds a delta (distance) between the `label` and `base` calculating it as `label - base`. This function was\n designed to make it easier to embed lookup tables where each index is a relative distance of two labels.\n\nC++: asmjit::BaseEmitter::embedLabelDelta(const class asmjit::Label &, const class asmjit::Label &, unsigned long) --> unsigned int", pybind11::arg("label"), pybind11::arg("base"), pybind11::arg("dataSize"));
		cl.def("comment", [](asmjit::BaseEmitter &o, const char * a0) -> unsigned int { return o.comment(a0); }, "", pybind11::arg("data"));
		cl.def("comment", (unsigned int (asmjit::BaseEmitter::*)(const char *, unsigned long)) &asmjit::BaseEmitter::comment, "Emits a comment stored in `data` with an optional `size` parameter.\n\nC++: asmjit::BaseEmitter::comment(const char *, unsigned long) --> unsigned int", pybind11::arg("data"), pybind11::arg("size"));
		cl.def("commentf", [](asmjit::BaseEmitter &o, const char * a0) -> unsigned int { return o.commentf(a0); }, "", pybind11::arg("fmt"));
		cl.def("onAttach", (unsigned int (asmjit::BaseEmitter::*)(class asmjit::CodeHolder *)) &asmjit::BaseEmitter::onAttach, "Called after the emitter was attached to `CodeHolder`.\n\nC++: asmjit::BaseEmitter::onAttach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onDetach", (unsigned int (asmjit::BaseEmitter::*)(class asmjit::CodeHolder *)) &asmjit::BaseEmitter::onDetach, "Called after the emitter was detached from `CodeHolder`.\n\nC++: asmjit::BaseEmitter::onDetach(class asmjit::CodeHolder *) --> unsigned int", pybind11::arg("code"));
		cl.def("onSettingsUpdated", (void (asmjit::BaseEmitter::*)()) &asmjit::BaseEmitter::onSettingsUpdated, "Called when  has updated an important setting, which involves the following:\n\n   -  has been changed ( has been called).\n\n   -  has been changed ( has been called).\n\n This function ensures that the settings are properly propagated from  to the emitter.\n\n \n This function is virtual and can be overridden, however, if you do so, always call \n within your own implementation to ensure that the emitter is\n in a consistent state.\n\nC++: asmjit::BaseEmitter::onSettingsUpdated() --> void");

		{ // asmjit::BaseEmitter::State file: line:243
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::BaseEmitter::State, std::shared_ptr<asmjit::BaseEmitter::State>> cl(enclosing_class, "State", "Emitter state that can be used to specify options and inline comment of a next node or instruction.");
			cl.def( pybind11::init( [](){ return new asmjit::BaseEmitter::State(); } ) );
			cl.def( pybind11::init( [](asmjit::BaseEmitter::State const &o){ return new asmjit::BaseEmitter::State(o); } ) );
			cl.def_readwrite("options", &asmjit::BaseEmitter::State::options);
			cl.def_readwrite("extraReg", &asmjit::BaseEmitter::State::extraReg);
		}

		{ // asmjit::BaseEmitter::Funcs file: line:259
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::BaseEmitter::Funcs, std::shared_ptr<asmjit::BaseEmitter::Funcs>> cl(enclosing_class, "Funcs", "Function callbacks used by emitter implementation.\n\n These are typically shared between Assembler/Builder/Compiler of a single backend.");
			cl.def( pybind11::init( [](){ return new asmjit::BaseEmitter::Funcs(); } ) );
			cl.def( pybind11::init( [](asmjit::BaseEmitter::Funcs const &o){ return new asmjit::BaseEmitter::Funcs(o); } ) );
			cl.def("reset", (void (asmjit::BaseEmitter::Funcs::*)()) &asmjit::BaseEmitter::Funcs::reset, "Resets all functions to nullptr.\n\nC++: asmjit::BaseEmitter::Funcs::reset() --> void");
			cl.def("assign", (struct asmjit::BaseEmitter::Funcs & (asmjit::BaseEmitter::Funcs::*)(const struct asmjit::BaseEmitter::Funcs &)) &asmjit::BaseEmitter::Funcs::operator=, "C++: asmjit::BaseEmitter::Funcs::operator=(const struct asmjit::BaseEmitter::Funcs &) --> struct asmjit::BaseEmitter::Funcs &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
}
