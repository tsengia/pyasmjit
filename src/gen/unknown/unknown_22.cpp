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

void bind_unknown_unknown_22(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::FuncAttributes file: line:780
	pybind11::enum_<asmjit::FuncAttributes>(M("asmjit"), "FuncAttributes", "Attributes are designed in a way that all are initially false, and user or  finalizer adds\n them when necessary.")
		.value("kNoAttributes", asmjit::FuncAttributes::kNoAttributes)
		.value("kHasVarArgs", asmjit::FuncAttributes::kHasVarArgs)
		.value("kHasPreservedFP", asmjit::FuncAttributes::kHasPreservedFP)
		.value("kHasFuncCalls", asmjit::FuncAttributes::kHasFuncCalls)
		.value("kAlignedVecSR", asmjit::FuncAttributes::kAlignedVecSR)
		.value("kIndirectBranchProtection", asmjit::FuncAttributes::kIndirectBranchProtection)
		.value("kIsFinalized", asmjit::FuncAttributes::kIsFinalized)
		.value("kX86_AVXEnabled", asmjit::FuncAttributes::kX86_AVXEnabled)
		.value("kX86_AVX512Enabled", asmjit::FuncAttributes::kX86_AVX512Enabled)
		.value("kX86_MMXCleanup", asmjit::FuncAttributes::kX86_MMXCleanup)
		.value("kX86_AVXCleanup", asmjit::FuncAttributes::kX86_AVXCleanup);

;

	{ // asmjit::FuncDetail file: line:828
		pybind11::class_<asmjit::FuncDetail, std::shared_ptr<asmjit::FuncDetail>> cl(M("asmjit"), "FuncDetail", "Function detail -  and expanded \n\n Function detail is architecture and OS dependent representation of a function. It contains a materialized\n calling convention and expanded function signature so all arguments have assigned either register type/id\n or stack address.");
		cl.def( pybind11::init( [](){ return new asmjit::FuncDetail(); } ) );
		cl.def( pybind11::init( [](asmjit::FuncDetail const &o){ return new asmjit::FuncDetail(o); } ) );







		cl.def("init", (unsigned int (asmjit::FuncDetail::*)(const struct asmjit::FuncSignature &, const class asmjit::Environment &)) &asmjit::FuncDetail::init, "Initializes this `FuncDetail` to the given signature.\n\nC++: asmjit::FuncDetail::init(const struct asmjit::FuncSignature &, const class asmjit::Environment &) --> unsigned int", pybind11::arg("signature"), pybind11::arg("environment"));
		cl.def("assign", (class asmjit::FuncDetail & (asmjit::FuncDetail::*)(const class asmjit::FuncDetail &)) &asmjit::FuncDetail::operator=, "Assignment operator, copies `other` to this \n\nC++: asmjit::FuncDetail::operator=(const class asmjit::FuncDetail &) --> class asmjit::FuncDetail &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("reset", (void (asmjit::FuncDetail::*)()) &asmjit::FuncDetail::reset, "Resets the function detail to its default constructed state.\n\nC++: asmjit::FuncDetail::reset() --> void");
		cl.def("callConv", (const struct asmjit::CallConv & (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::callConv, "Returns the function's calling convention, see `CallConv`.\n\nC++: asmjit::FuncDetail::callConv() const --> const struct asmjit::CallConv &", pybind11::return_value_policy::automatic);
		cl.def("flags", (enum asmjit::CallConvFlags (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::flags, "Returns the associated calling convention flags, see `CallConv::Flags`.\n\nC++: asmjit::FuncDetail::flags() const --> enum asmjit::CallConvFlags");
		cl.def("hasFlag", (bool (asmjit::FuncDetail::*)(enum asmjit::CallConvFlags) const) &asmjit::FuncDetail::hasFlag, "Checks whether a CallConv `flag` is set, see `CallConv::Flags`.\n\nC++: asmjit::FuncDetail::hasFlag(enum asmjit::CallConvFlags) const --> bool", pybind11::arg("ccFlag"));
		cl.def("hasRet", (bool (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::hasRet, "Tests whether the function has a return value.\n\nC++: asmjit::FuncDetail::hasRet() const --> bool");
		cl.def("argCount", (unsigned int (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::argCount, "Returns the number of function arguments.\n\nC++: asmjit::FuncDetail::argCount() const --> unsigned int");
		cl.def("retPack", (struct asmjit::FuncValuePack & (asmjit::FuncDetail::*)()) &asmjit::FuncDetail::retPack, "Returns function return values.\n\nC++: asmjit::FuncDetail::retPack() --> struct asmjit::FuncValuePack &", pybind11::return_value_policy::automatic);
		cl.def("ret", [](asmjit::FuncDetail &o) -> asmjit::FuncValue & { return o.ret(); }, "", pybind11::return_value_policy::automatic);
		cl.def("ret", (struct asmjit::FuncValue & (asmjit::FuncDetail::*)(unsigned long)) &asmjit::FuncDetail::ret, "Returns a function return value associated with the given `valueIndex`.\n\nC++: asmjit::FuncDetail::ret(unsigned long) --> struct asmjit::FuncValue &", pybind11::return_value_policy::automatic, pybind11::arg("valueIndex"));
		cl.def("argPacks", (struct asmjit::FuncValuePack * (asmjit::FuncDetail::*)()) &asmjit::FuncDetail::argPacks, "Returns function argument packs array.\n\nC++: asmjit::FuncDetail::argPacks() --> struct asmjit::FuncValuePack *", pybind11::return_value_policy::automatic);
		cl.def("argPack", (struct asmjit::FuncValuePack & (asmjit::FuncDetail::*)(unsigned long)) &asmjit::FuncDetail::argPack, "Returns function argument pack at the given `argIndex`.\n\nC++: asmjit::FuncDetail::argPack(unsigned long) --> struct asmjit::FuncValuePack &", pybind11::return_value_policy::automatic, pybind11::arg("argIndex"));
		cl.def("arg", [](asmjit::FuncDetail &o, unsigned long const & a0) -> asmjit::FuncValue & { return o.arg(a0); }, "", pybind11::return_value_policy::automatic, pybind11::arg("argIndex"));
		cl.def("arg", (struct asmjit::FuncValue & (asmjit::FuncDetail::*)(unsigned long, unsigned long)) &asmjit::FuncDetail::arg, "Returns an argument at `valueIndex` from the argument pack at the given `argIndex`.\n\nC++: asmjit::FuncDetail::arg(unsigned long, unsigned long) --> struct asmjit::FuncValue &", pybind11::return_value_policy::automatic, pybind11::arg("argIndex"), pybind11::arg("valueIndex"));
		cl.def("resetArg", (void (asmjit::FuncDetail::*)(unsigned long)) &asmjit::FuncDetail::resetArg, "Resets an argument at the given `argIndex`.\n\n If the argument is a parameter pack (has multiple values) all values are reset.\n\nC++: asmjit::FuncDetail::resetArg(unsigned long) --> void", pybind11::arg("argIndex"));
		cl.def("hasVarArgs", (bool (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::hasVarArgs, "Tests whether the function has variable arguments.\n\nC++: asmjit::FuncDetail::hasVarArgs() const --> bool");
		cl.def("vaIndex", (unsigned int (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::vaIndex, "Returns an index of a first variable argument.\n\nC++: asmjit::FuncDetail::vaIndex() const --> unsigned int");
		cl.def("hasStackArgs", (bool (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::hasStackArgs, "Tests whether the function passes one or more argument by stack.\n\nC++: asmjit::FuncDetail::hasStackArgs() const --> bool");
		cl.def("argStackSize", (unsigned int (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::argStackSize, "Returns stack size needed for function arguments passed on the stack.\n\nC++: asmjit::FuncDetail::argStackSize() const --> unsigned int");
		cl.def("redZoneSize", (unsigned int (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::redZoneSize, "Returns red zone size.\n\nC++: asmjit::FuncDetail::redZoneSize() const --> unsigned int");
		cl.def("spillZoneSize", (unsigned int (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::spillZoneSize, "Returns spill zone size.\n\nC++: asmjit::FuncDetail::spillZoneSize() const --> unsigned int");
		cl.def("naturalStackAlignment", (unsigned int (asmjit::FuncDetail::*)() const) &asmjit::FuncDetail::naturalStackAlignment, "Returns natural stack alignment.\n\nC++: asmjit::FuncDetail::naturalStackAlignment() const --> unsigned int");
		cl.def("passedRegs", (unsigned int (asmjit::FuncDetail::*)(enum asmjit::RegGroup) const) &asmjit::FuncDetail::passedRegs, "Returns a mask of all passed registers of the given register `group`.\n\nC++: asmjit::FuncDetail::passedRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("preservedRegs", (unsigned int (asmjit::FuncDetail::*)(enum asmjit::RegGroup) const) &asmjit::FuncDetail::preservedRegs, "Returns a mask of all preserved registers of the given register `group`.\n\nC++: asmjit::FuncDetail::preservedRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("usedRegs", (unsigned int (asmjit::FuncDetail::*)(enum asmjit::RegGroup) const) &asmjit::FuncDetail::usedRegs, "Returns a mask of all used registers of the given register `group`.\n\nC++: asmjit::FuncDetail::usedRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("addUsedRegs", (void (asmjit::FuncDetail::*)(enum asmjit::RegGroup, unsigned int)) &asmjit::FuncDetail::addUsedRegs, "Adds `regs` to the mask of used registers of the given register `group`.\n\nC++: asmjit::FuncDetail::addUsedRegs(enum asmjit::RegGroup, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("regs"));
	}
	{ // asmjit::FuncFrame file: line:1032
		pybind11::class_<asmjit::FuncFrame, std::shared_ptr<asmjit::FuncFrame>> cl(M("asmjit"), "FuncFrame", "Function frame.\n\n Function frame is used directly by prolog and epilog insertion (PEI) utils. It provides information necessary to\n insert a proper and ABI conforming prolog and epilog. Function frame calculation is based on `CallConv` and\n other function attributes.\n\n SSE vs AVX vs AVX-512\n ---------------------\n\n Function frame provides a way to tell prolog/epilog inserter to use AVX instructions instead of SSE. Use\n `setAvxEnabled()` and `setAvx512Enabled()`  to enable AVX and/or AVX-512, respectively. Enabling AVX-512\n is mostly for Compiler as it would use 32 SIMD registers instead of 16 when enabled.\n\n \n If your code uses AVX instructions and AVX is not enabled there would be a performance hit in case that\n some registers had to be saved/restored in function's prolog/epilog, respectively. Thus, it's recommended to\n always let the function frame know about the use of AVX.\n\n Function Frame Structure\n ------------------------\n\n Various properties can contribute to the size and structure of the function frame. The function frame in most\n cases won't use all of the properties illustrated (for example Spill Zone and Red Zone are never used together).\n\n ```\n   +-----------------------------+\n   | Arguments Passed by Stack   |\n   +-----------------------------+\n   | Spill Zone                  |\n   +-----------------------------+ <- Stack offset (args) starts from here.\n   | Return Address, if Pushed   |\n   +-----------------------------+ <- Stack pointer (SP) upon entry.\n   | Save/Restore Stack.         |\n   +-----------------------------+-----------------------------+\n   | Local Stack                 |                             |\n   +-----------------------------+          Final Stack        |\n   | Call Stack                  |                             |\n   +-----------------------------+-----------------------------+ <- SP after prolog.\n   | Red Zone                    |\n   +-----------------------------+\n ```");
		cl.def( pybind11::init( [](){ return new asmjit::FuncFrame(); } ) );
		cl.def( pybind11::init( [](asmjit::FuncFrame const &o){ return new asmjit::FuncFrame(o); } ) );




























		cl.def("addDirtyRegs", (void (asmjit::FuncFrame::*)(const class asmjit::BaseReg &)) &asmjit::FuncFrame::addDirtyRegs, "C++: asmjit::FuncFrame::addDirtyRegs(const class asmjit::BaseReg &) --> void", pybind11::arg("reg"));
		cl.def("init", (unsigned int (asmjit::FuncFrame::*)(const class asmjit::FuncDetail &)) &asmjit::FuncFrame::init, "Initializes the function frame based on `func` detail.\n\nC++: asmjit::FuncFrame::init(const class asmjit::FuncDetail &) --> unsigned int", pybind11::arg("func"));
		cl.def("reset", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::reset, "Resets the function frame into its default constructed state.\n\nC++: asmjit::FuncFrame::reset() --> void");
		cl.def("assign", (class asmjit::FuncFrame & (asmjit::FuncFrame::*)(const class asmjit::FuncFrame &)) &asmjit::FuncFrame::operator=, "Copy assignment - function frame is copy assignable.\n\nC++: asmjit::FuncFrame::operator=(const class asmjit::FuncFrame &) --> class asmjit::FuncFrame &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("arch", (enum asmjit::Arch (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::arch, "Returns the target architecture of the function frame.\n\nC++: asmjit::FuncFrame::arch() const --> enum asmjit::Arch");
		cl.def("attributes", (enum asmjit::FuncAttributes (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::attributes, "Returns function frame attributes, see `Attributes`.\n\nC++: asmjit::FuncFrame::attributes() const --> enum asmjit::FuncAttributes");
		cl.def("hasAttribute", (bool (asmjit::FuncFrame::*)(enum asmjit::FuncAttributes) const) &asmjit::FuncFrame::hasAttribute, "Checks whether the FuncFame contains an attribute `attr`.\n\nC++: asmjit::FuncFrame::hasAttribute(enum asmjit::FuncAttributes) const --> bool", pybind11::arg("attr"));
		cl.def("addAttributes", (void (asmjit::FuncFrame::*)(enum asmjit::FuncAttributes)) &asmjit::FuncFrame::addAttributes, "Adds attributes `attrs` to the FuncFrame.\n\nC++: asmjit::FuncFrame::addAttributes(enum asmjit::FuncAttributes) --> void", pybind11::arg("attrs"));
		cl.def("clearAttributes", (void (asmjit::FuncFrame::*)(enum asmjit::FuncAttributes)) &asmjit::FuncFrame::clearAttributes, "Clears attributes `attrs` from the FrameFrame.\n\nC++: asmjit::FuncFrame::clearAttributes(enum asmjit::FuncAttributes) --> void", pybind11::arg("attrs"));
		cl.def("hasVarArgs", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasVarArgs, "Tests whether the function has variable number of arguments.\n\nC++: asmjit::FuncFrame::hasVarArgs() const --> bool");
		cl.def("setVarArgs", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setVarArgs, "Sets the variable arguments flag.\n\nC++: asmjit::FuncFrame::setVarArgs() --> void");
		cl.def("resetVarArgs", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetVarArgs, "Resets variable arguments flag.\n\nC++: asmjit::FuncFrame::resetVarArgs() --> void");
		cl.def("hasPreservedFP", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasPreservedFP, "Tests whether the function preserves frame pointer (EBP|ESP on X86).\n\nC++: asmjit::FuncFrame::hasPreservedFP() const --> bool");
		cl.def("setPreservedFP", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setPreservedFP, "Enables preserved frame pointer.\n\nC++: asmjit::FuncFrame::setPreservedFP() --> void");
		cl.def("resetPreservedFP", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetPreservedFP, "Disables preserved frame pointer.\n\nC++: asmjit::FuncFrame::resetPreservedFP() --> void");
		cl.def("hasFuncCalls", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasFuncCalls, "Tests whether the function calls other functions.\n\nC++: asmjit::FuncFrame::hasFuncCalls() const --> bool");
		cl.def("setFuncCalls", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setFuncCalls, "Sets `FuncAttributes::kHasFuncCalls` to true.\n\nC++: asmjit::FuncFrame::setFuncCalls() --> void");
		cl.def("resetFuncCalls", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetFuncCalls, "Sets `FuncAttributes::kHasFuncCalls` to false.\n\nC++: asmjit::FuncFrame::resetFuncCalls() --> void");
		cl.def("hasIndirectBranchProtection", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasIndirectBranchProtection, "Tests whether the function uses indirect branch protection, see \n\nC++: asmjit::FuncFrame::hasIndirectBranchProtection() const --> bool");
		cl.def("setIndirectBranchProtection", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setIndirectBranchProtection, "Enabled indirect branch protection (sets `FuncAttributes::kIndirectBranchProtection` attribute to true).\n\nC++: asmjit::FuncFrame::setIndirectBranchProtection() --> void");
		cl.def("resetIndirectBranchProtection", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetIndirectBranchProtection, "Disables indirect branch protection (sets `FuncAttributes::kIndirectBranchProtection` attribute to false).\n\nC++: asmjit::FuncFrame::resetIndirectBranchProtection() --> void");
		cl.def("isAvxEnabled", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::isAvxEnabled, "Tests whether the function has AVX enabled.\n\nC++: asmjit::FuncFrame::isAvxEnabled() const --> bool");
		cl.def("setAvxEnabled", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setAvxEnabled, "Enables AVX use.\n\nC++: asmjit::FuncFrame::setAvxEnabled() --> void");
		cl.def("resetAvxEnabled", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetAvxEnabled, "Disables AVX use.\n\nC++: asmjit::FuncFrame::resetAvxEnabled() --> void");
		cl.def("isAvx512Enabled", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::isAvx512Enabled, "Tests whether the function has AVX-512 enabled.\n\nC++: asmjit::FuncFrame::isAvx512Enabled() const --> bool");
		cl.def("setAvx512Enabled", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setAvx512Enabled, "Enables AVX-512 use.\n\nC++: asmjit::FuncFrame::setAvx512Enabled() --> void");
		cl.def("resetAvx512Enabled", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetAvx512Enabled, "Disables AVX-512 use.\n\nC++: asmjit::FuncFrame::resetAvx512Enabled() --> void");
		cl.def("hasMmxCleanup", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasMmxCleanup, "Tests whether the function has MMX cleanup - 'emms' instruction in epilog.\n\nC++: asmjit::FuncFrame::hasMmxCleanup() const --> bool");
		cl.def("setMmxCleanup", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setMmxCleanup, "Enables MMX cleanup.\n\nC++: asmjit::FuncFrame::setMmxCleanup() --> void");
		cl.def("resetMmxCleanup", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetMmxCleanup, "Disables MMX cleanup.\n\nC++: asmjit::FuncFrame::resetMmxCleanup() --> void");
		cl.def("hasAvxCleanup", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasAvxCleanup, "Tests whether the function has AVX cleanup - 'vzeroupper' instruction in epilog.\n\nC++: asmjit::FuncFrame::hasAvxCleanup() const --> bool");
		cl.def("setAvxCleanup", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setAvxCleanup, "Enables AVX cleanup.\n\nC++: asmjit::FuncFrame::setAvxCleanup() --> void");
		cl.def("resetAvxCleanup", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetAvxCleanup, "Disables AVX cleanup.\n\nC++: asmjit::FuncFrame::resetAvxCleanup() --> void");
		cl.def("hasCallStack", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasCallStack, "Tests whether the function uses call stack.\n\nC++: asmjit::FuncFrame::hasCallStack() const --> bool");
		cl.def("hasLocalStack", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasLocalStack, "Tests whether the function uses local stack.\n\nC++: asmjit::FuncFrame::hasLocalStack() const --> bool");
		cl.def("hasAlignedVecSR", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasAlignedVecSR, "Tests whether vector registers can be saved and restored by using aligned reads and writes.\n\nC++: asmjit::FuncFrame::hasAlignedVecSR() const --> bool");
		cl.def("hasDynamicAlignment", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasDynamicAlignment, "Tests whether the function has to align stack dynamically.\n\nC++: asmjit::FuncFrame::hasDynamicAlignment() const --> bool");
		cl.def("hasRedZone", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasRedZone, "Tests whether the calling convention specifies 'RedZone'.\n\nC++: asmjit::FuncFrame::hasRedZone() const --> bool");
		cl.def("hasSpillZone", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasSpillZone, "Tests whether the calling convention specifies 'SpillZone'.\n\nC++: asmjit::FuncFrame::hasSpillZone() const --> bool");
		cl.def("redZoneSize", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::redZoneSize, "Returns the size of 'RedZone'.\n\nC++: asmjit::FuncFrame::redZoneSize() const --> unsigned int");
		cl.def("spillZoneSize", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::spillZoneSize, "Returns the size of 'SpillZone'.\n\nC++: asmjit::FuncFrame::spillZoneSize() const --> unsigned int");
		cl.def("resetRedZone", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetRedZone, "Resets the size of red zone, which would disable it entirely.\n\n \n Red zone is currently only used by an AMD64 SystemV calling convention, which expects 128\n bytes of stack to be accessible below stack pointer. These bytes are then accessible within the\n function and Compiler can use this space as a spill area. However, sometimes it's better to\n disallow the use of red zone in case that a user wants to use this stack for a custom purpose.\n\nC++: asmjit::FuncFrame::resetRedZone() --> void");
		cl.def("naturalStackAlignment", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::naturalStackAlignment, "Returns natural stack alignment (guaranteed stack alignment upon entry).\n\nC++: asmjit::FuncFrame::naturalStackAlignment() const --> unsigned int");
		cl.def("minDynamicAlignment", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::minDynamicAlignment, "Returns natural stack alignment (guaranteed stack alignment upon entry).\n\nC++: asmjit::FuncFrame::minDynamicAlignment() const --> unsigned int");
		cl.def("hasCalleeStackCleanup", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasCalleeStackCleanup, "Tests whether the callee must adjust SP before returning (X86-STDCALL only)\n\nC++: asmjit::FuncFrame::hasCalleeStackCleanup() const --> bool");
		cl.def("calleeStackCleanup", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::calleeStackCleanup, "Returns home many bytes of the stack the callee must adjust before returning (X86-STDCALL only)\n\nC++: asmjit::FuncFrame::calleeStackCleanup() const --> unsigned int");
		cl.def("callStackAlignment", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::callStackAlignment, "Returns call stack alignment.\n\nC++: asmjit::FuncFrame::callStackAlignment() const --> unsigned int");
		cl.def("localStackAlignment", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::localStackAlignment, "Returns local stack alignment.\n\nC++: asmjit::FuncFrame::localStackAlignment() const --> unsigned int");
		cl.def("finalStackAlignment", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::finalStackAlignment, "Returns final stack alignment (the maximum value of call, local, and natural stack alignments).\n\nC++: asmjit::FuncFrame::finalStackAlignment() const --> unsigned int");
		cl.def("setCallStackAlignment", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::setCallStackAlignment, "Sets call stack alignment.\n\n \n This also updates the final stack alignment.\n\nC++: asmjit::FuncFrame::setCallStackAlignment(unsigned int) --> void", pybind11::arg("alignment"));
		cl.def("setLocalStackAlignment", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::setLocalStackAlignment, "Sets local stack alignment.\n\n \n This also updates the final stack alignment.\n\nC++: asmjit::FuncFrame::setLocalStackAlignment(unsigned int) --> void", pybind11::arg("value"));
		cl.def("updateCallStackAlignment", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::updateCallStackAlignment, "Combines call stack alignment with `alignment`, updating it to the greater value.\n\n \n This also updates the final stack alignment.\n\nC++: asmjit::FuncFrame::updateCallStackAlignment(unsigned int) --> void", pybind11::arg("alignment"));
		cl.def("updateLocalStackAlignment", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::updateLocalStackAlignment, "Combines local stack alignment with `alignment`, updating it to the greater value.\n\n \n This also updates the final stack alignment.\n\nC++: asmjit::FuncFrame::updateLocalStackAlignment(unsigned int) --> void", pybind11::arg("alignment"));
		cl.def("callStackSize", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::callStackSize, "Returns call stack size.\n\nC++: asmjit::FuncFrame::callStackSize() const --> unsigned int");
		cl.def("localStackSize", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::localStackSize, "Returns local stack size.\n\nC++: asmjit::FuncFrame::localStackSize() const --> unsigned int");
		cl.def("setCallStackSize", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::setCallStackSize, "Sets call stack size.\n\nC++: asmjit::FuncFrame::setCallStackSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def("setLocalStackSize", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::setLocalStackSize, "Sets local stack size.\n\nC++: asmjit::FuncFrame::setLocalStackSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def("updateCallStackSize", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::updateCallStackSize, "Combines call stack size with `size`, updating it to the greater value.\n\nC++: asmjit::FuncFrame::updateCallStackSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def("updateLocalStackSize", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::updateLocalStackSize, "Combines local stack size with `size`, updating it to the greater value.\n\nC++: asmjit::FuncFrame::updateLocalStackSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def("finalStackSize", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::finalStackSize, "Returns final stack size (only valid after the FuncFrame is finalized).\n\nC++: asmjit::FuncFrame::finalStackSize() const --> unsigned int");
		cl.def("localStackOffset", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::localStackOffset, "Returns an offset to access the local stack (non-zero only if call stack is used).\n\nC++: asmjit::FuncFrame::localStackOffset() const --> unsigned int");
		cl.def("hasDAOffset", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasDAOffset, "Tests whether the function prolog/epilog requires a memory slot for storing unaligned SP.\n\nC++: asmjit::FuncFrame::hasDAOffset() const --> bool");
		cl.def("daOffset", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::daOffset, "Returns a memory offset used to store DA (dynamic alignment) slot (relative to SP).\n\nC++: asmjit::FuncFrame::daOffset() const --> unsigned int");
		cl.def("saOffset", (unsigned int (asmjit::FuncFrame::*)(unsigned int) const) &asmjit::FuncFrame::saOffset, "C++: asmjit::FuncFrame::saOffset(unsigned int) const --> unsigned int", pybind11::arg("regId"));
		cl.def("saOffsetFromSP", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::saOffsetFromSP, "C++: asmjit::FuncFrame::saOffsetFromSP() const --> unsigned int");
		cl.def("saOffsetFromSA", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::saOffsetFromSA, "C++: asmjit::FuncFrame::saOffsetFromSA() const --> unsigned int");
		cl.def("dirtyRegs", (unsigned int (asmjit::FuncFrame::*)(enum asmjit::RegGroup) const) &asmjit::FuncFrame::dirtyRegs, "Returns mask of registers of the given register `group` that are modified by the function. The engine would\n then calculate which registers must be saved & restored by the function by using the data provided by the\n calling convention.\n\nC++: asmjit::FuncFrame::dirtyRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("setDirtyRegs", (void (asmjit::FuncFrame::*)(enum asmjit::RegGroup, unsigned int)) &asmjit::FuncFrame::setDirtyRegs, "Sets which registers (as a mask) are modified by the function.\n\n \n Please note that this will completely overwrite the existing register mask, use `addDirtyRegs()`\n to modify the existing register mask.\n\nC++: asmjit::FuncFrame::setDirtyRegs(enum asmjit::RegGroup, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("regs"));
		cl.def("addDirtyRegs", (void (asmjit::FuncFrame::*)(enum asmjit::RegGroup, unsigned int)) &asmjit::FuncFrame::addDirtyRegs, "Adds which registers (as a mask) are modified by the function.\n\nC++: asmjit::FuncFrame::addDirtyRegs(enum asmjit::RegGroup, unsigned int) --> void", pybind11::arg("group"), pybind11::arg("regs"));
		cl.def("addDirtyRegs", (void (asmjit::FuncFrame::*)(const class asmjit::BaseReg &)) &asmjit::FuncFrame::addDirtyRegs, "C++: asmjit::FuncFrame::addDirtyRegs(const class asmjit::BaseReg &) --> void", pybind11::arg("reg"));
		cl.def("setAllDirty", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::setAllDirty, "A helper function to set all registers from all register groups dirty.\n\n \n This should not be used in general as it's the most pessimistic case. However, it can be used for testing\n or in cases in which all registers are considered clobbered.\n\nC++: asmjit::FuncFrame::setAllDirty() --> void");
		cl.def("setAllDirty", (void (asmjit::FuncFrame::*)(enum asmjit::RegGroup)) &asmjit::FuncFrame::setAllDirty, "A helper function to set all registers from the given register `group` dirty.\n\nC++: asmjit::FuncFrame::setAllDirty(enum asmjit::RegGroup) --> void", pybind11::arg("group"));
		cl.def("savedRegs", (unsigned int (asmjit::FuncFrame::*)(enum asmjit::RegGroup) const) &asmjit::FuncFrame::savedRegs, "Returns a calculated mask of registers of the given `group` that will be saved and restored in the function's\n prolog and epilog, respectively. The register mask is calculated from both `dirtyRegs` (provided by user) and\n `preservedMask` (provided by the calling convention).\n\nC++: asmjit::FuncFrame::savedRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("preservedRegs", (unsigned int (asmjit::FuncFrame::*)(enum asmjit::RegGroup) const) &asmjit::FuncFrame::preservedRegs, "Returns the mask of preserved registers of the given register `group`.\n\n Preserved registers are those that must survive the function call unmodified. The function can only modify\n preserved registers it they are saved and restored in function's prolog and epilog, respectively.\n\nC++: asmjit::FuncFrame::preservedRegs(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("saveRestoreRegSize", (unsigned int (asmjit::FuncFrame::*)(enum asmjit::RegGroup) const) &asmjit::FuncFrame::saveRestoreRegSize, "Returns the size of a save-restore are for the required register `group`.\n\nC++: asmjit::FuncFrame::saveRestoreRegSize(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("saveRestoreAlignment", (unsigned int (asmjit::FuncFrame::*)(enum asmjit::RegGroup) const) &asmjit::FuncFrame::saveRestoreAlignment, "C++: asmjit::FuncFrame::saveRestoreAlignment(enum asmjit::RegGroup) const --> unsigned int", pybind11::arg("group"));
		cl.def("hasSARegId", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasSARegId, "C++: asmjit::FuncFrame::hasSARegId() const --> bool");
		cl.def("saRegId", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::saRegId, "C++: asmjit::FuncFrame::saRegId() const --> unsigned int");
		cl.def("setSARegId", (void (asmjit::FuncFrame::*)(unsigned int)) &asmjit::FuncFrame::setSARegId, "C++: asmjit::FuncFrame::setSARegId(unsigned int) --> void", pybind11::arg("regId"));
		cl.def("resetSARegId", (void (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::resetSARegId, "C++: asmjit::FuncFrame::resetSARegId() --> void");
		cl.def("pushPopSaveSize", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::pushPopSaveSize, "Returns stack size required to save/restore registers via push/pop.\n\nC++: asmjit::FuncFrame::pushPopSaveSize() const --> unsigned int");
		cl.def("pushPopSaveOffset", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::pushPopSaveOffset, "Returns an offset to the stack where registers are saved via push/pop.\n\nC++: asmjit::FuncFrame::pushPopSaveOffset() const --> unsigned int");
		cl.def("extraRegSaveSize", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::extraRegSaveSize, "Returns stack size required to save/restore extra registers that don't use push/pop/\n\n \n On X86 this covers all registers except GP registers, on other architectures it can be always\n zero (for example AArch64 saves all registers via push/pop like instructions, so this would be zero).\n\nC++: asmjit::FuncFrame::extraRegSaveSize() const --> unsigned int");
		cl.def("extraRegSaveOffset", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::extraRegSaveOffset, "Returns an offset to the stack where extra registers are saved.\n\nC++: asmjit::FuncFrame::extraRegSaveOffset() const --> unsigned int");
		cl.def("hasStackAdjustment", (bool (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::hasStackAdjustment, "Tests whether the functions contains stack adjustment.\n\nC++: asmjit::FuncFrame::hasStackAdjustment() const --> bool");
		cl.def("stackAdjustment", (unsigned int (asmjit::FuncFrame::*)() const) &asmjit::FuncFrame::stackAdjustment, "Returns function's stack adjustment used in function's prolog and epilog.\n\n If the returned value is zero it means that the stack is not adjusted. This can mean both that the stack\n is not used and/or the stack is only adjusted by instructions that pust/pop registers into/from stack.\n\nC++: asmjit::FuncFrame::stackAdjustment() const --> unsigned int");
		cl.def("finalize", (unsigned int (asmjit::FuncFrame::*)()) &asmjit::FuncFrame::finalize, "\\{\n\nC++: asmjit::FuncFrame::finalize() --> unsigned int");
	}
}
