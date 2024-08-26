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

void bind_unknown_unknown_21(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::FuncSignature file: line:372
		pybind11::class_<asmjit::FuncSignature, std::shared_ptr<asmjit::FuncSignature>> cl(M("asmjit"), "FuncSignature", "Function signature.\n\n Contains information about a function return type, count of arguments, and their TypeIds. Function signature\n is a low level structure which doesn't contain platform specific or calling convention specific information.\n It's typically used to describe function arguments in a C-API like form, which is then used to calculate a\n  instance, which then maps function signature into a platform and calling convention specific\n format.\n\n Function signature can be built either dynamically by using  and  functionality,\n or dynamically by using a template-based  function, which maps template types\n into a function signature.");
		cl.def( pybind11::init( [](){ return new asmjit::FuncSignature(); } ) );
		cl.def( pybind11::init( [](asmjit::FuncSignature const &o){ return new asmjit::FuncSignature(o); } ) );
		cl.def( pybind11::init( [](enum asmjit::CallConvId const & a0){ return new asmjit::FuncSignature(a0); } ), "doc" , pybind11::arg("ccId"));
		cl.def( pybind11::init<enum asmjit::CallConvId, unsigned int>(), pybind11::arg("ccId"), pybind11::arg("vaIndex") );





		cl.def("assign", (struct asmjit::FuncSignature & (asmjit::FuncSignature::*)(const struct asmjit::FuncSignature &)) &asmjit::FuncSignature::operator=, "Copy assignment - function signature can be copied by value.\n\nC++: asmjit::FuncSignature::operator=(const struct asmjit::FuncSignature &) --> struct asmjit::FuncSignature &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("__eq__", (bool (asmjit::FuncSignature::*)(const struct asmjit::FuncSignature &) const) &asmjit::FuncSignature::operator==, "Compares this function signature with `other` for equality..\n\nC++: asmjit::FuncSignature::operator==(const struct asmjit::FuncSignature &) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (asmjit::FuncSignature::*)(const struct asmjit::FuncSignature &) const) &asmjit::FuncSignature::operator!=, "Compares this function signature with `other` for inequality..\n\nC++: asmjit::FuncSignature::operator!=(const struct asmjit::FuncSignature &) const --> bool", pybind11::arg("other"));
		cl.def("reset", (void (asmjit::FuncSignature::*)()) &asmjit::FuncSignature::reset, "Resets this function signature to a default constructed state.\n\nC++: asmjit::FuncSignature::reset() --> void");
		cl.def("equals", (bool (asmjit::FuncSignature::*)(const struct asmjit::FuncSignature &) const) &asmjit::FuncSignature::equals, "Compares this function signature with `other` for equality..\n\nC++: asmjit::FuncSignature::equals(const struct asmjit::FuncSignature &) const --> bool", pybind11::arg("other"));
		cl.def("callConvId", (enum asmjit::CallConvId (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::callConvId, "Returns the calling convention.\n\nC++: asmjit::FuncSignature::callConvId() const --> enum asmjit::CallConvId");
		cl.def("setCallConvId", (void (asmjit::FuncSignature::*)(enum asmjit::CallConvId)) &asmjit::FuncSignature::setCallConvId, "Sets the calling convention to `ccId`;\n\nC++: asmjit::FuncSignature::setCallConvId(enum asmjit::CallConvId) --> void", pybind11::arg("ccId"));
		cl.def("hasRet", (bool (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::hasRet, "Tests whether the function signature has a return value.\n\nC++: asmjit::FuncSignature::hasRet() const --> bool");
		cl.def("ret", (enum asmjit::TypeId (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::ret, "Returns the type of the return value.\n\nC++: asmjit::FuncSignature::ret() const --> enum asmjit::TypeId");
		cl.def("setRet", (void (asmjit::FuncSignature::*)(enum asmjit::TypeId)) &asmjit::FuncSignature::setRet, "Sets the return type to `retType`.\n\nC++: asmjit::FuncSignature::setRet(enum asmjit::TypeId) --> void", pybind11::arg("retType"));
		cl.def("args", (const enum asmjit::TypeId * (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::args, "Returns the array of function arguments' types.\n\nC++: asmjit::FuncSignature::args() const --> const enum asmjit::TypeId *", pybind11::return_value_policy::automatic);
		cl.def("argCount", (unsigned int (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::argCount, "Returns the number of function arguments.\n\nC++: asmjit::FuncSignature::argCount() const --> unsigned int");
		cl.def("arg", (enum asmjit::TypeId (asmjit::FuncSignature::*)(unsigned int) const) &asmjit::FuncSignature::arg, "Returns the type of the argument at index `i`.\n\nC++: asmjit::FuncSignature::arg(unsigned int) const --> enum asmjit::TypeId", pybind11::arg("i"));
		cl.def("setArg", (void (asmjit::FuncSignature::*)(unsigned int, enum asmjit::TypeId)) &asmjit::FuncSignature::setArg, "Sets the argument at index `index` to `argType`.\n\nC++: asmjit::FuncSignature::setArg(unsigned int, enum asmjit::TypeId) --> void", pybind11::arg("index"), pybind11::arg("argType"));
		cl.def("canAddArg", (bool (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::canAddArg, "Tests whether an argument can be added to the signature, use before calling  and \n\n \n If you know that you are not adding more arguments than  then it's not necessary\n to use this function. However, if you are adding arguments based on user input, for example, then either check\n the number of arguments before using function signature or use  before actually adding them to\n the function signature.\n\nC++: asmjit::FuncSignature::canAddArg() const --> bool");
		cl.def("addArg", (void (asmjit::FuncSignature::*)(enum asmjit::TypeId)) &asmjit::FuncSignature::addArg, "Appends an argument of `type` to the function prototype.\n\nC++: asmjit::FuncSignature::addArg(enum asmjit::TypeId) --> void", pybind11::arg("type"));
		cl.def("hasVarArgs", (bool (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::hasVarArgs, "Tests whether the function has variable number of arguments (...).\n\nC++: asmjit::FuncSignature::hasVarArgs() const --> bool");
		cl.def("vaIndex", (unsigned int (asmjit::FuncSignature::*)() const) &asmjit::FuncSignature::vaIndex, "Returns the variable arguments (...) index, `kNoVarArgs` if none.\n\nC++: asmjit::FuncSignature::vaIndex() const --> unsigned int");
		cl.def("setVaIndex", (void (asmjit::FuncSignature::*)(unsigned int)) &asmjit::FuncSignature::setVaIndex, "Sets the variable arguments (...) index to `index`.\n\nC++: asmjit::FuncSignature::setVaIndex(unsigned int) --> void", pybind11::arg("index"));
		cl.def("resetVaIndex", (void (asmjit::FuncSignature::*)()) &asmjit::FuncSignature::resetVaIndex, "Resets the variable arguments index (making it a non-va function).\n\nC++: asmjit::FuncSignature::resetVaIndex() --> void");
	}
	{ // asmjit::FuncValue file: line:554
		pybind11::class_<asmjit::FuncValue, std::shared_ptr<asmjit::FuncValue>> cl(M("asmjit"), "FuncValue", "Argument or return value (or its part) as defined by `FuncSignature`, but with register or stack address\n (and other metadata) assigned.");
		cl.def( pybind11::init( [](){ return new asmjit::FuncValue(); } ) );
		cl.def( pybind11::init( [](asmjit::FuncValue const &o){ return new asmjit::FuncValue(o); } ) );

		pybind11::enum_<asmjit::FuncValue::Bits>(cl, "Bits", pybind11::arithmetic(), "\\{")
			.value("kTypeIdShift", asmjit::FuncValue::kTypeIdShift)
			.value("kTypeIdMask", asmjit::FuncValue::kTypeIdMask)
			.value("kFlagIsReg", asmjit::FuncValue::kFlagIsReg)
			.value("kFlagIsStack", asmjit::FuncValue::kFlagIsStack)
			.value("kFlagIsIndirect", asmjit::FuncValue::kFlagIsIndirect)
			.value("kFlagIsDone", asmjit::FuncValue::kFlagIsDone)
			.value("kStackOffsetShift", asmjit::FuncValue::kStackOffsetShift)
			.value("kStackOffsetMask", asmjit::FuncValue::kStackOffsetMask)
			.value("kRegIdShift", asmjit::FuncValue::kRegIdShift)
			.value("kRegIdMask", asmjit::FuncValue::kRegIdMask)
			.value("kRegTypeShift", asmjit::FuncValue::kRegTypeShift)
			.value("kRegTypeMask", asmjit::FuncValue::kRegTypeMask)
			.export_values();


		cl.def("initTypeId", (void (asmjit::FuncValue::*)(enum asmjit::TypeId)) &asmjit::FuncValue::initTypeId, "Initializes this `FuncValue` only to the `typeId` provided - the rest of the values will be cleared.\n\nC++: asmjit::FuncValue::initTypeId(enum asmjit::TypeId) --> void", pybind11::arg("typeId"));
		cl.def("initReg", [](asmjit::FuncValue &o, enum asmjit::RegType const & a0, unsigned int const & a1, enum asmjit::TypeId const & a2) -> void { return o.initReg(a0, a1, a2); }, "", pybind11::arg("regType"), pybind11::arg("regId"), pybind11::arg("typeId"));
		cl.def("initReg", (void (asmjit::FuncValue::*)(enum asmjit::RegType, unsigned int, enum asmjit::TypeId, unsigned int)) &asmjit::FuncValue::initReg, "Initializes this `FuncValue` to a register of `regType`, `regId`, and assigns its `typeId` and `flags`.\n\nC++: asmjit::FuncValue::initReg(enum asmjit::RegType, unsigned int, enum asmjit::TypeId, unsigned int) --> void", pybind11::arg("regType"), pybind11::arg("regId"), pybind11::arg("typeId"), pybind11::arg("flags"));
		cl.def("initStack", (void (asmjit::FuncValue::*)(int, enum asmjit::TypeId)) &asmjit::FuncValue::initStack, "Initializes this `FuncValue` to a stack at the given `offset` and assigns its `typeId`.\n\nC++: asmjit::FuncValue::initStack(int, enum asmjit::TypeId) --> void", pybind11::arg("offset"), pybind11::arg("typeId"));
		cl.def("reset", (void (asmjit::FuncValue::*)()) &asmjit::FuncValue::reset, "Resets the value to its unassigned state.\n\nC++: asmjit::FuncValue::reset() --> void");
		cl.def("assignRegData", (void (asmjit::FuncValue::*)(enum asmjit::RegType, unsigned int)) &asmjit::FuncValue::assignRegData, "Assigns a register of `regType` and `regId`.\n\nC++: asmjit::FuncValue::assignRegData(enum asmjit::RegType, unsigned int) --> void", pybind11::arg("regType"), pybind11::arg("regId"));
		cl.def("assignStackOffset", (void (asmjit::FuncValue::*)(int)) &asmjit::FuncValue::assignStackOffset, "Assigns a stack location at `offset`.\n\nC++: asmjit::FuncValue::assignStackOffset(int) --> void", pybind11::arg("offset"));

		cl.def("hasFlag", (bool (asmjit::FuncValue::*)(unsigned int) const) &asmjit::FuncValue::hasFlag, "Tests whether the `FuncValue` has a flag `flag` set.\n\nC++: asmjit::FuncValue::hasFlag(unsigned int) const --> bool", pybind11::arg("flag"));
		cl.def("addFlags", (void (asmjit::FuncValue::*)(unsigned int)) &asmjit::FuncValue::addFlags, "Adds `flags` to `FuncValue`.\n\nC++: asmjit::FuncValue::addFlags(unsigned int) --> void", pybind11::arg("flags"));
		cl.def("clearFlags", (void (asmjit::FuncValue::*)(unsigned int)) &asmjit::FuncValue::clearFlags, "Clears `flags` of `FuncValue`.\n\nC++: asmjit::FuncValue::clearFlags(unsigned int) --> void", pybind11::arg("flags"));
		cl.def("isInitialized", (bool (asmjit::FuncValue::*)() const) &asmjit::FuncValue::isInitialized, "Tests whether the value is initialized (i.e. contains a valid data).\n\nC++: asmjit::FuncValue::isInitialized() const --> bool");
		cl.def("isReg", (bool (asmjit::FuncValue::*)() const) &asmjit::FuncValue::isReg, "Tests whether the argument is passed by register.\n\nC++: asmjit::FuncValue::isReg() const --> bool");
		cl.def("isStack", (bool (asmjit::FuncValue::*)() const) &asmjit::FuncValue::isStack, "Tests whether the argument is passed by stack.\n\nC++: asmjit::FuncValue::isStack() const --> bool");
		cl.def("isAssigned", (bool (asmjit::FuncValue::*)() const) &asmjit::FuncValue::isAssigned, "Tests whether the argument is passed by register.\n\nC++: asmjit::FuncValue::isAssigned() const --> bool");
		cl.def("isIndirect", (bool (asmjit::FuncValue::*)() const) &asmjit::FuncValue::isIndirect, "Tests whether the argument is passed through a pointer (used by WIN64 to pass XMM|YMM|ZMM).\n\nC++: asmjit::FuncValue::isIndirect() const --> bool");
		cl.def("isDone", (bool (asmjit::FuncValue::*)() const) &asmjit::FuncValue::isDone, "Tests whether the argument was already processed (used internally).\n\nC++: asmjit::FuncValue::isDone() const --> bool");
		cl.def("regType", (enum asmjit::RegType (asmjit::FuncValue::*)() const) &asmjit::FuncValue::regType, "Returns a register type of the register used to pass function argument or return value.\n\nC++: asmjit::FuncValue::regType() const --> enum asmjit::RegType");
		cl.def("setRegType", (void (asmjit::FuncValue::*)(enum asmjit::RegType)) &asmjit::FuncValue::setRegType, "Sets a register type of the register used to pass function argument or return value.\n\nC++: asmjit::FuncValue::setRegType(enum asmjit::RegType) --> void", pybind11::arg("regType"));
		cl.def("regId", (unsigned int (asmjit::FuncValue::*)() const) &asmjit::FuncValue::regId, "Returns a physical id of the register used to pass function argument or return value.\n\nC++: asmjit::FuncValue::regId() const --> unsigned int");
		cl.def("setRegId", (void (asmjit::FuncValue::*)(unsigned int)) &asmjit::FuncValue::setRegId, "Sets a physical id of the register used to pass function argument or return value.\n\nC++: asmjit::FuncValue::setRegId(unsigned int) --> void", pybind11::arg("regId"));
		cl.def("stackOffset", (int (asmjit::FuncValue::*)() const) &asmjit::FuncValue::stackOffset, "Returns a stack offset of this argument.\n\nC++: asmjit::FuncValue::stackOffset() const --> int");
		cl.def("setStackOffset", (void (asmjit::FuncValue::*)(int)) &asmjit::FuncValue::setStackOffset, "Sets a stack offset of this argument.\n\nC++: asmjit::FuncValue::setStackOffset(int) --> void", pybind11::arg("offset"));
		cl.def("hasTypeId", (bool (asmjit::FuncValue::*)() const) &asmjit::FuncValue::hasTypeId, "Tests whether the argument or return value has associated `TypeId`.\n\nC++: asmjit::FuncValue::hasTypeId() const --> bool");
		cl.def("typeId", (enum asmjit::TypeId (asmjit::FuncValue::*)() const) &asmjit::FuncValue::typeId, "Returns a TypeId of this argument or return value.\n\nC++: asmjit::FuncValue::typeId() const --> enum asmjit::TypeId");
		cl.def("setTypeId", (void (asmjit::FuncValue::*)(enum asmjit::TypeId)) &asmjit::FuncValue::setTypeId, "Sets a TypeId of this argument or return value.\n\nC++: asmjit::FuncValue::setTypeId(enum asmjit::TypeId) --> void", pybind11::arg("typeId"));
		cl.def("assign", (struct asmjit::FuncValue & (asmjit::FuncValue::*)(const struct asmjit::FuncValue &)) &asmjit::FuncValue::operator=, "C++: asmjit::FuncValue::operator=(const struct asmjit::FuncValue &) --> struct asmjit::FuncValue &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // asmjit::FuncValuePack file: line:692
		pybind11::class_<asmjit::FuncValuePack, std::shared_ptr<asmjit::FuncValuePack>> cl(M("asmjit"), "FuncValuePack", "Contains multiple `FuncValue` instances in an array so functions that use multiple registers for arguments or\n return values can represent all inputs and outputs.");
		cl.def( pybind11::init( [](){ return new asmjit::FuncValuePack(); } ) );
		cl.def( pybind11::init( [](asmjit::FuncValuePack const &o){ return new asmjit::FuncValuePack(o); } ) );
		cl.def("reset", (void (asmjit::FuncValuePack::*)()) &asmjit::FuncValuePack::reset, "Resets all values in the pack.\n\nC++: asmjit::FuncValuePack::reset() --> void");
		cl.def("count", (unsigned int (asmjit::FuncValuePack::*)() const) &asmjit::FuncValuePack::count, "Calculates how many values are in the pack, checking for non-values from the end.\n\nC++: asmjit::FuncValuePack::count() const --> unsigned int");
		cl.def("values", (struct asmjit::FuncValue * (asmjit::FuncValuePack::*)()) &asmjit::FuncValuePack::values, "Returns values in this value in the pack.\n\n \n The returned array has exactly  elements.\n\nC++: asmjit::FuncValuePack::values() --> struct asmjit::FuncValue *", pybind11::return_value_policy::automatic);
		cl.def("resetValue", (void (asmjit::FuncValuePack::*)(unsigned long)) &asmjit::FuncValuePack::resetValue, "Resets a value at the given `index` in the pack, which makes it unassigned.\n\nC++: asmjit::FuncValuePack::resetValue(unsigned long) --> void", pybind11::arg("index"));
		cl.def("hasValue", (bool (asmjit::FuncValuePack::*)(unsigned long)) &asmjit::FuncValuePack::hasValue, "Tests whether the value at the given `index` in the pack is assigned.\n\nC++: asmjit::FuncValuePack::hasValue(unsigned long) --> bool", pybind11::arg("index"));
		cl.def("assignReg", [](asmjit::FuncValuePack &o, unsigned long const & a0, const class asmjit::BaseReg & a1) -> void { return o.assignReg(a0, a1); }, "", pybind11::arg("index"), pybind11::arg("reg"));
		cl.def("assignReg", (void (asmjit::FuncValuePack::*)(unsigned long, const class asmjit::BaseReg &, enum asmjit::TypeId)) &asmjit::FuncValuePack::assignReg, "Assigns a register at the given `index` to `reg` and an optional `typeId`.\n\nC++: asmjit::FuncValuePack::assignReg(unsigned long, const class asmjit::BaseReg &, enum asmjit::TypeId) --> void", pybind11::arg("index"), pybind11::arg("reg"), pybind11::arg("typeId"));
		cl.def("assignReg", [](asmjit::FuncValuePack &o, unsigned long const & a0, enum asmjit::RegType const & a1, unsigned int const & a2) -> void { return o.assignReg(a0, a1, a2); }, "", pybind11::arg("index"), pybind11::arg("regType"), pybind11::arg("regId"));
		cl.def("assignReg", (void (asmjit::FuncValuePack::*)(unsigned long, enum asmjit::RegType, unsigned int, enum asmjit::TypeId)) &asmjit::FuncValuePack::assignReg, "Assigns a register at the given `index` to `regType`, `regId`, and an optional `typeId`.\n\nC++: asmjit::FuncValuePack::assignReg(unsigned long, enum asmjit::RegType, unsigned int, enum asmjit::TypeId) --> void", pybind11::arg("index"), pybind11::arg("regType"), pybind11::arg("regId"), pybind11::arg("typeId"));
		cl.def("assignStack", [](asmjit::FuncValuePack &o, unsigned long const & a0, int const & a1) -> void { return o.assignStack(a0, a1); }, "", pybind11::arg("index"), pybind11::arg("offset"));
		cl.def("assignStack", (void (asmjit::FuncValuePack::*)(unsigned long, int, enum asmjit::TypeId)) &asmjit::FuncValuePack::assignStack, "Assigns a stack location at the given `index` to `offset` and an optional `typeId`.\n\nC++: asmjit::FuncValuePack::assignStack(unsigned long, int, enum asmjit::TypeId) --> void", pybind11::arg("index"), pybind11::arg("offset"), pybind11::arg("typeId"));
		cl.def("__getitem__", (struct asmjit::FuncValue & (asmjit::FuncValuePack::*)(unsigned long)) &asmjit::FuncValuePack::operator[], "Accesses the value in the pack at the given `index`.\n\n \n The maximum index value is `Globals::kMaxValuePack - 1`.\n\nC++: asmjit::FuncValuePack::operator[](unsigned long) --> struct asmjit::FuncValue &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("assign", (struct asmjit::FuncValuePack & (asmjit::FuncValuePack::*)(const struct asmjit::FuncValuePack &)) &asmjit::FuncValuePack::operator=, "C++: asmjit::FuncValuePack::operator=(const struct asmjit::FuncValuePack &) --> struct asmjit::FuncValuePack &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
