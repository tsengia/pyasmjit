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

void bind_unknown_unknown_20(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::CpuInfo file: line:1044
		pybind11::class_<asmjit::CpuInfo, std::shared_ptr<asmjit::CpuInfo>> cl(M("asmjit"), "CpuInfo", "CPU information.");
		cl.def( pybind11::init( [](){ return new asmjit::CpuInfo(); } ) );
		cl.def( pybind11::init( [](asmjit::CpuInfo const &o){ return new asmjit::CpuInfo(o); } ) );
		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );
















		cl.def_static("host", (const class asmjit::CpuInfo & (*)()) &asmjit::CpuInfo::host, "Returns the host CPU information.\n\n \n The returned reference is global - it's setup only once and then shared.\n\nC++: asmjit::CpuInfo::host() --> const class asmjit::CpuInfo &", pybind11::return_value_policy::automatic);
		cl.def("assign", (class asmjit::CpuInfo & (asmjit::CpuInfo::*)(const class asmjit::CpuInfo &)) &asmjit::CpuInfo::operator=, "Copy assignment.\n\nC++: asmjit::CpuInfo::operator=(const class asmjit::CpuInfo &) --> class asmjit::CpuInfo &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("initArch", [](asmjit::CpuInfo &o, enum asmjit::Arch const & a0) -> void { return o.initArch(a0); }, "", pybind11::arg("arch"));
		cl.def("initArch", (void (asmjit::CpuInfo::*)(enum asmjit::Arch, enum asmjit::SubArch)) &asmjit::CpuInfo::initArch, "Initializes CpuInfo architecture and sub-architecture members to `arch` and `subArch`, respectively.\n\nC++: asmjit::CpuInfo::initArch(enum asmjit::Arch, enum asmjit::SubArch) --> void", pybind11::arg("arch"), pybind11::arg("subArch"));
		cl.def("reset", (void (asmjit::CpuInfo::*)()) &asmjit::CpuInfo::reset, "Resets this  to a default constructed state.\n\nC++: asmjit::CpuInfo::reset() --> void");
		cl.def("arch", (enum asmjit::Arch (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::arch, "Returns the CPU architecture this information relates to.\n\nC++: asmjit::CpuInfo::arch() const --> enum asmjit::Arch");
		cl.def("subArch", (enum asmjit::SubArch (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::subArch, "Returns the CPU sub-architecture this information relates to.\n\nC++: asmjit::CpuInfo::subArch() const --> enum asmjit::SubArch");
		cl.def("wasDetected", (bool (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::wasDetected, "Returns whether the CPU was detected successfully.\n\n If the returned value is false it means that AsmJit either failed to detect the CPU or it doesn't have\n implementation targeting the host architecture and operating system.\n\nC++: asmjit::CpuInfo::wasDetected() const --> bool");
		cl.def("familyId", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::familyId, "Returns the CPU family ID.\n\n The information provided depends on architecture and OS:\n   - X86:\n     - Family identifier matches the FamilyId read by using CPUID.\n   - ARM:\n     - Apple - returns Apple Family identifier returned by sysctlbyname(\"hw.cpufamily\").\n\nC++: asmjit::CpuInfo::familyId() const --> unsigned int");
		cl.def("modelId", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::modelId, "Returns the CPU model ID.\n\n The information provided depends on architecture and OS:\n   - X86:\n     - Model identifier matches the ModelId read by using CPUID.\n\nC++: asmjit::CpuInfo::modelId() const --> unsigned int");
		cl.def("brandId", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::brandId, "Returns the CPU brand id.\n\n The information provided depends on architecture and OS:\n   - X86:\n     - Brand identifier matches the BrandId read by using CPUID.\n\nC++: asmjit::CpuInfo::brandId() const --> unsigned int");
		cl.def("stepping", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::stepping, "Returns the CPU stepping.\n\n The information provided depends on architecture and OS:\n   - X86:\n     - Stepping identifier matches the Stepping information read by using CPUID.\n\nC++: asmjit::CpuInfo::stepping() const --> unsigned int");
		cl.def("processorType", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::processorType, "Returns the processor type.\n\n The information provided depends on architecture and OS:\n   - X86:\n     - Processor type identifier matches the ProcessorType read by using CPUID.\n\nC++: asmjit::CpuInfo::processorType() const --> unsigned int");
		cl.def("maxLogicalProcessors", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::maxLogicalProcessors, "Returns the maximum number of logical processors.\n\nC++: asmjit::CpuInfo::maxLogicalProcessors() const --> unsigned int");
		cl.def("cacheLineSize", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::cacheLineSize, "Returns the size of a CPU cache line.\n\n On a multi-architecture system this should return the smallest cache line of all CPUs.\n\nC++: asmjit::CpuInfo::cacheLineSize() const --> unsigned int");
		cl.def("hwThreadCount", (unsigned int (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::hwThreadCount, "Returns number of hardware threads available.\n\nC++: asmjit::CpuInfo::hwThreadCount() const --> unsigned int");
		cl.def("vendor", (const char * (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::vendor, "Returns a CPU vendor string.\n\nC++: asmjit::CpuInfo::vendor() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("isVendor", (bool (asmjit::CpuInfo::*)(const char *) const) &asmjit::CpuInfo::isVendor, "Tests whether the CPU vendor string is equal to `s`.\n\nC++: asmjit::CpuInfo::isVendor(const char *) const --> bool", pybind11::arg("s"));
		cl.def("brand", (const char * (asmjit::CpuInfo::*)() const) &asmjit::CpuInfo::brand, "Returns a CPU brand string.\n\nC++: asmjit::CpuInfo::brand() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("features", (class asmjit::CpuFeatures & (asmjit::CpuInfo::*)()) &asmjit::CpuInfo::features, "Returns CPU features.\n\nC++: asmjit::CpuInfo::features() --> class asmjit::CpuFeatures &", pybind11::return_value_policy::automatic);
	}
	// asmjit::CallConvId file: line:30
	pybind11::enum_<asmjit::CallConvId>(M("asmjit"), "CallConvId", "Calling convention id.\n\n Calling conventions can be divided into the following groups:\n\n   - Universal - calling conventions are applicable to any target. They will be converted to a target dependent\n     calling convention at runtime by  with some help from  The purpose of\n     these calling conventions is to make using functions less target dependent and closer to C and C++.\n\n   - Target specific - calling conventions that are used by a particular architecture and ABI. For example\n     Windows 64-bit calling convention and AMD64 SystemV calling convention.")
		.value("kCDecl", asmjit::CallConvId::kCDecl)
		.value("kStdCall", asmjit::CallConvId::kStdCall)
		.value("kFastCall", asmjit::CallConvId::kFastCall)
		.value("kVectorCall", asmjit::CallConvId::kVectorCall)
		.value("kThisCall", asmjit::CallConvId::kThisCall)
		.value("kRegParm1", asmjit::CallConvId::kRegParm1)
		.value("kRegParm2", asmjit::CallConvId::kRegParm2)
		.value("kRegParm3", asmjit::CallConvId::kRegParm3)
		.value("kLightCall2", asmjit::CallConvId::kLightCall2)
		.value("kLightCall3", asmjit::CallConvId::kLightCall3)
		.value("kLightCall4", asmjit::CallConvId::kLightCall4)
		.value("kSoftFloat", asmjit::CallConvId::kSoftFloat)
		.value("kHardFloat", asmjit::CallConvId::kHardFloat)
		.value("kX64SystemV", asmjit::CallConvId::kX64SystemV)
		.value("kX64Windows", asmjit::CallConvId::kX64Windows)
		.value("kMaxValue", asmjit::CallConvId::kMaxValue);

;

	// asmjit::CallConvStrategy file: line:115
	pybind11::enum_<asmjit::CallConvStrategy>(M("asmjit"), "CallConvStrategy", "Strategy used by calling conventions to assign registers to function arguments.\n\n Calling convention strategy describes how AsmJit should convert function arguments used by \n into register identifiers and stack offsets. The  strategy assigns registers\n and then stack whereas  strategy does register shadowing as defined by WIN64\n calling convention, which is only used by 64-bit Windows.")
		.value("kDefault", asmjit::CallConvStrategy::kDefault)
		.value("kX64Windows", asmjit::CallConvStrategy::kX64Windows)
		.value("kX64VectorCall", asmjit::CallConvStrategy::kX64VectorCall)
		.value("kAArch64Apple", asmjit::CallConvStrategy::kAArch64Apple)
		.value("kMaxValue", asmjit::CallConvStrategy::kMaxValue);

;

	// asmjit::CallConvFlags file: line:130
	pybind11::enum_<asmjit::CallConvFlags>(M("asmjit"), "CallConvFlags", "Calling convention flags.")
		.value("kNone", asmjit::CallConvFlags::kNone)
		.value("kCalleePopsStack", asmjit::CallConvFlags::kCalleePopsStack)
		.value("kIndirectVecArgs", asmjit::CallConvFlags::kIndirectVecArgs)
		.value("kPassFloatsByVec", asmjit::CallConvFlags::kPassFloatsByVec)
		.value("kPassVecByStackIfVA", asmjit::CallConvFlags::kPassVecByStackIfVA)
		.value("kPassMmxByGp", asmjit::CallConvFlags::kPassMmxByGp)
		.value("kPassMmxByXmm", asmjit::CallConvFlags::kPassMmxByXmm)
		.value("kVarArgCompatible", asmjit::CallConvFlags::kVarArgCompatible);

;

	{ // asmjit::CallConv file: line:155
		pybind11::class_<asmjit::CallConv, std::shared_ptr<asmjit::CallConv>> cl(M("asmjit"), "CallConv", "Function calling convention.\n\n Function calling convention is a scheme that defines how function parameters are passed and how function\n returns its result. AsmJit defines a variety of architecture and OS specific calling conventions and also\n provides a compile time detection to make the code-generation easier.");
		cl.def( pybind11::init( [](){ return new asmjit::CallConv(); } ) );
		cl.def( pybind11::init( [](asmjit::CallConv const &o){ return new asmjit::CallConv(o); } ) );












		cl.def("init", (unsigned int (asmjit::CallConv::*)(enum asmjit::CallConvId, const class asmjit::Environment &)) &asmjit::CallConv::init, "Initializes this calling convention to the given `ccId` based on the `environment`.\n\n See  and  for more details.\n\nC++: asmjit::CallConv::init(enum asmjit::CallConvId, const class asmjit::Environment &) --> unsigned int", pybind11::arg("ccId"), pybind11::arg("environment"));
		cl.def("reset", (void (asmjit::CallConv::*)()) &asmjit::CallConv::reset, "Resets this CallConv struct into a defined state.\n\n It's recommended to reset the  struct in case you would like create a custom calling convention\n as it prevents from using an uninitialized data (CallConv doesn't have a constructor that would initialize it,\n it's just a struct).\n\nC++: asmjit::CallConv::reset() --> void");
		cl.def("arch", (enum asmjit::Arch (asmjit::CallConv::*)() const) &asmjit::CallConv::arch, "Returns the target architecture of this calling convention.\n\nC++: asmjit::CallConv::arch() const --> enum asmjit::Arch");
		cl.def("setArch", (void (asmjit::CallConv::*)(enum asmjit::Arch)) &asmjit::CallConv::setArch, "Sets the target architecture of this calling convention.\n\nC++: asmjit::CallConv::setArch(enum asmjit::Arch) --> void", pybind11::arg("arch"));
		cl.def("id", (enum asmjit::CallConvId (asmjit::CallConv::*)() const) &asmjit::CallConv::id, "Returns the calling convention id.\n\nC++: asmjit::CallConv::id() const --> enum asmjit::CallConvId");
		cl.def("setId", (void (asmjit::CallConv::*)(enum asmjit::CallConvId)) &asmjit::CallConv::setId, "Sets the calling convention id.\n\nC++: asmjit::CallConv::setId(enum asmjit::CallConvId) --> void", pybind11::arg("ccId"));
		cl.def("strategy", (enum asmjit::CallConvStrategy (asmjit::CallConv::*)() const) &asmjit::CallConv::strategy, "Returns the strategy used to assign registers to arguments.\n\nC++: asmjit::CallConv::strategy() const --> enum asmjit::CallConvStrategy");
		cl.def("setStrategy", (void (asmjit::CallConv::*)(enum asmjit::CallConvStrategy)) &asmjit::CallConv::setStrategy, "Sets the strategy used to assign registers to arguments.\n\nC++: asmjit::CallConv::setStrategy(enum asmjit::CallConvStrategy) --> void", pybind11::arg("ccStrategy"));
		cl.def("hasFlag", (bool (asmjit::CallConv::*)(enum asmjit::CallConvFlags) const) &asmjit::CallConv::hasFlag, "Tests whether the calling convention has the given `flag` set.\n\nC++: asmjit::CallConv::hasFlag(enum asmjit::CallConvFlags) const --> bool", pybind11::arg("flag"));
		cl.def("flags", (enum asmjit::CallConvFlags (asmjit::CallConv::*)() const) &asmjit::CallConv::flags, "Returns the calling convention flags, see `Flags`.\n\nC++: asmjit::CallConv::flags() const --> enum asmjit::CallConvFlags");
		cl.def("setFlags", (void (asmjit::CallConv::*)(enum asmjit::CallConvFlags)) &asmjit::CallConv::setFlags, "Adds the calling convention flags, see `Flags`.\n\nC++: asmjit::CallConv::setFlags(enum asmjit::CallConvFlags) --> void", pybind11::arg("flag"));
		cl.def("addFlags", (void (asmjit::CallConv::*)(enum asmjit::CallConvFlags)) &asmjit::CallConv::addFlags, "Adds the calling convention flags, see `Flags`.\n\nC++: asmjit::CallConv::addFlags(enum asmjit::CallConvFlags) --> void", pybind11::arg("flags"));
		cl.def("hasRedZone", (bool (asmjit::CallConv::*)() const) &asmjit::CallConv::hasRedZone, "Tests whether this calling convention specifies 'RedZone'.\n\nC++: asmjit::CallConv::hasRedZone() const --> bool");
		cl.def("hasSpillZone", (bool (asmjit::CallConv::*)() const) &asmjit::CallConv::hasSpillZone, "Tests whether this calling convention specifies 'SpillZone'.\n\nC++: asmjit::CallConv::hasSpillZone() const --> bool");
		cl.def("redZoneSize", (unsigned int (asmjit::CallConv::*)() const) &asmjit::CallConv::redZoneSize, "Returns size of 'RedZone'.\n\nC++: asmjit::CallConv::redZoneSize() const --> unsigned int");
		cl.def("spillZoneSize", (unsigned int (asmjit::CallConv::*)() const) &asmjit::CallConv::spillZoneSize, "Returns size of 'SpillZone'.\n\nC++: asmjit::CallConv::spillZoneSize() const --> unsigned int");
		cl.def("setRedZoneSize", (void (asmjit::CallConv::*)(unsigned int)) &asmjit::CallConv::setRedZoneSize, "Sets size of 'RedZone'.\n\nC++: asmjit::CallConv::setRedZoneSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def("setSpillZoneSize", (void (asmjit::CallConv::*)(unsigned int)) &asmjit::CallConv::setSpillZoneSize, "Sets size of 'SpillZone'.\n\nC++: asmjit::CallConv::setSpillZoneSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def("naturalStackAlignment", (unsigned int (asmjit::CallConv::*)() const) &asmjit::CallConv::naturalStackAlignment, "Returns a natural stack alignment.\n\nC++: asmjit::CallConv::naturalStackAlignment() const --> unsigned int");
		cl.def("setNaturalStackAlignment", (void (asmjit::CallConv::*)(unsigned int)) &asmjit::CallConv::setNaturalStackAlignment, "Sets a natural stack alignment.\n\n This function can be used to override the default stack alignment in case that you know that it's alignment is\n different. For example it allows to implement custom calling conventions that guarantee higher stack alignment.\n\nC++: asmjit::CallConv::setNaturalStackAlignment(unsigned int) --> void", pybind11::arg("value"));
		cl.def("saveRestoreRegSize", (unsigned int (asmjit::CallConv::*)(enum asmjit::RegGroup) const) &asmjit::CallConv::saveRestoreRegSize, "Returns the size of a register (or its part) to be saved and restored of the given `group`.\n\nC++: asmjit::CallConv::saveRestoreRegSize(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("setSaveRestoreRegSize", (void (asmjit::CallConv::*)(enum asmjit::RegGroup, unsigned int)) &asmjit::CallConv::setSaveRestoreRegSize, "Sets the size of a vector register (or its part) to be saved and restored.\n\nC++: asmjit::CallConv::setSaveRestoreRegSize(enum asmjit::RegGroup, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("size"));
		cl.def("saveRestoreAlignment", (unsigned int (asmjit::CallConv::*)(enum asmjit::RegGroup) const) &asmjit::CallConv::saveRestoreAlignment, "Returns the alignment of a save-restore area of the given `group`.\n\nC++: asmjit::CallConv::saveRestoreAlignment(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("setSaveRestoreAlignment", (void (asmjit::CallConv::*)(enum asmjit::RegGroup, unsigned int)) &asmjit::CallConv::setSaveRestoreAlignment, "Sets the alignment of a save-restore area of the given `group`.\n\nC++: asmjit::CallConv::setSaveRestoreAlignment(enum asmjit::RegGroup, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("alignment"));
		cl.def("passedOrder", (const unsigned char * (asmjit::CallConv::*)(enum asmjit::RegGroup) const) &asmjit::CallConv::passedOrder, "Returns the order of passed registers of the given `group`.\n\nC++: asmjit::CallConv::passedOrder(enum asmjit::RegGroup) const --> const unsigned char *", pybind11::return_value_policy::automatic, pybind11::arg("group"));
		cl.def("passedRegs", (unsigned int (asmjit::CallConv::*)(enum asmjit::RegGroup) const) &asmjit::CallConv::passedRegs, "Returns the mask of passed registers of the given `group`.\n\nC++: asmjit::CallConv::passedRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));

		cl.def("setPassedToNone", (void (asmjit::CallConv::*)(enum asmjit::RegGroup)) &asmjit::CallConv::setPassedToNone, "Resets the order and mask of passed registers.\n\nC++: asmjit::CallConv::setPassedToNone(enum asmjit::RegGroup) --> void", pybind11::arg("group"));
		cl.def("setPassedOrder", [](asmjit::CallConv &o, enum asmjit::RegGroup const & a0, unsigned int const & a1) -> void { return o.setPassedOrder(a0, a1); }, "", pybind11::arg("group"), pybind11::arg("a0"));
		cl.def("setPassedOrder", [](asmjit::CallConv &o, enum asmjit::RegGroup const & a0, unsigned int const & a1, unsigned int const & a2) -> void { return o.setPassedOrder(a0, a1, a2); }, "", pybind11::arg("group"), pybind11::arg("a0"), pybind11::arg("a1"));
		cl.def("setPassedOrder", [](asmjit::CallConv &o, enum asmjit::RegGroup const & a0, unsigned int const & a1, unsigned int const & a2, unsigned int const & a3) -> void { return o.setPassedOrder(a0, a1, a2, a3); }, "", pybind11::arg("group"), pybind11::arg("a0"), pybind11::arg("a1"), pybind11::arg("a2"));
		cl.def("setPassedOrder", [](asmjit::CallConv &o, enum asmjit::RegGroup const & a0, unsigned int const & a1, unsigned int const & a2, unsigned int const & a3, unsigned int const & a4) -> void { return o.setPassedOrder(a0, a1, a2, a3, a4); }, "", pybind11::arg("group"), pybind11::arg("a0"), pybind11::arg("a1"), pybind11::arg("a2"), pybind11::arg("a3"));
		cl.def("setPassedOrder", [](asmjit::CallConv &o, enum asmjit::RegGroup const & a0, unsigned int const & a1, unsigned int const & a2, unsigned int const & a3, unsigned int const & a4, unsigned int const & a5) -> void { return o.setPassedOrder(a0, a1, a2, a3, a4, a5); }, "", pybind11::arg("group"), pybind11::arg("a0"), pybind11::arg("a1"), pybind11::arg("a2"), pybind11::arg("a3"), pybind11::arg("a4"));
		cl.def("setPassedOrder", [](asmjit::CallConv &o, enum asmjit::RegGroup const & a0, unsigned int const & a1, unsigned int const & a2, unsigned int const & a3, unsigned int const & a4, unsigned int const & a5, unsigned int const & a6) -> void { return o.setPassedOrder(a0, a1, a2, a3, a4, a5, a6); }, "", pybind11::arg("group"), pybind11::arg("a0"), pybind11::arg("a1"), pybind11::arg("a2"), pybind11::arg("a3"), pybind11::arg("a4"), pybind11::arg("a5"));
		cl.def("setPassedOrder", [](asmjit::CallConv &o, enum asmjit::RegGroup const & a0, unsigned int const & a1, unsigned int const & a2, unsigned int const & a3, unsigned int const & a4, unsigned int const & a5, unsigned int const & a6, unsigned int const & a7) -> void { return o.setPassedOrder(a0, a1, a2, a3, a4, a5, a6, a7); }, "", pybind11::arg("group"), pybind11::arg("a0"), pybind11::arg("a1"), pybind11::arg("a2"), pybind11::arg("a3"), pybind11::arg("a4"), pybind11::arg("a5"), pybind11::arg("a6"));
		cl.def("setPassedOrder", (void (asmjit::CallConv::*)(enum asmjit::RegGroup, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)) &asmjit::CallConv::setPassedOrder, "Sets the order and mask of passed registers.\n\nC++: asmjit::CallConv::setPassedOrder(enum asmjit::RegGroup, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("a0"), pybind11::arg("a1"), pybind11::arg("a2"), pybind11::arg("a3"), pybind11::arg("a4"), pybind11::arg("a5"), pybind11::arg("a6"), pybind11::arg("a7"));
		cl.def("preservedRegs", (unsigned int (asmjit::CallConv::*)(enum asmjit::RegGroup) const) &asmjit::CallConv::preservedRegs, "Returns preserved register mask of the given `group`.\n\nC++: asmjit::CallConv::preservedRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("setPreservedRegs", (void (asmjit::CallConv::*)(enum asmjit::RegGroup, unsigned int)) &asmjit::CallConv::setPreservedRegs, "Sets preserved register mask of the given `group`.\n\nC++: asmjit::CallConv::setPreservedRegs(enum asmjit::RegGroup, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("regs"));
		cl.def("assign", (struct asmjit::CallConv & (asmjit::CallConv::*)(const struct asmjit::CallConv &)) &asmjit::CallConv::operator=, "C++: asmjit::CallConv::operator=(const struct asmjit::CallConv &) --> struct asmjit::CallConv &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // asmjit::CallConv::RegOrder file: line:204
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::CallConv::RegOrder, std::shared_ptr<asmjit::CallConv::RegOrder>> cl(enclosing_class, "RegOrder", "Passed registers' order.");
			cl.def( pybind11::init( [](){ return new asmjit::CallConv::RegOrder(); } ) );
			cl.def( pybind11::init( [](asmjit::CallConv::RegOrder const &o){ return new asmjit::CallConv::RegOrder(o); } ) );
			cl.def("assign", (union asmjit::CallConv::RegOrder & (asmjit::CallConv::RegOrder::*)(const union asmjit::CallConv::RegOrder &)) &asmjit::CallConv::RegOrder::operator=, "C++: asmjit::CallConv::RegOrder::operator=(const union asmjit::CallConv::RegOrder &) --> union asmjit::CallConv::RegOrder &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
}
