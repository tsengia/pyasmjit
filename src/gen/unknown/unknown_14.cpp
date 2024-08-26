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

void bind_unknown_unknown_14(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::BaseMem file: line:1442
		pybind11::class_<asmjit::BaseMem, std::shared_ptr<asmjit::BaseMem>, asmjit::Operand> cl(M("asmjit"), "BaseMem", "Base class for all memory operands.\n\n The data is split into the following parts:\n\n   - BASE - Base register or label - requires 36 bits total. 4 bits are used to encode the type of the BASE operand\n     (label vs. register type) and the remaining 32 bits define the BASE id, which can be a physical or virtual\n     register index. If BASE type is zero, which is never used as a register type and label doesn't use it as well\n     then BASE field contains a high DWORD of a possible 64-bit absolute address, which is possible on X64.\n\n   - INDEX - Index register (or theoretically Label, which doesn't make sense). Encoding is similar to BASE - it\n     also requires 36 bits and splits the encoding to INDEX type (4 bits defining the register type) and 32-bit id.\n\n   - OFFSET - A relative offset of the address. Basically if BASE is specified the relative displacement adjusts\n     BASE and an optional INDEX. if BASE is not specified then the OFFSET should be considered as ABSOLUTE address\n     (at least on X86). In that case its low 32 bits are stored in DISPLACEMENT field and the remaining high 32\n     bits are stored in BASE.\n\n   - OTHER - There is rest 8 bits that can be used for whatever purpose. For example  operand uses\n     these bits to store segment override prefix and index shift (or scale).");
		cl.def( pybind11::init( [](){ return new asmjit::BaseMem(); } ) );
		cl.def( pybind11::init( [](asmjit::BaseMem const &o){ return new asmjit::BaseMem(o); } ) );
		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0){ return new asmjit::BaseMem(a0); } ), "doc" , pybind11::arg("baseReg"));
		cl.def( pybind11::init<const class asmjit::BaseReg &, int>(), pybind11::arg("baseReg"), pybind11::arg("offset") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int, unsigned int, int>(), pybind11::arg("u0"), pybind11::arg("baseId"), pybind11::arg("indexId"), pybind11::arg("offset") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def("reset", (void (asmjit::BaseMem::*)()) &asmjit::BaseMem::reset, "Resets the memory operand - after the reset the memory points to [0].\n\nC++: asmjit::BaseMem::reset() --> void");
		cl.def("assign", (class asmjit::BaseMem & (asmjit::BaseMem::*)(const class asmjit::BaseMem &)) &asmjit::BaseMem::operator=, "\\{\n\nC++: asmjit::BaseMem::operator=(const class asmjit::BaseMem &) --> class asmjit::BaseMem &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("clone", (class asmjit::BaseMem (asmjit::BaseMem::*)() const) &asmjit::BaseMem::clone, "Clones the memory operand.\n\nC++: asmjit::BaseMem::clone() const --> class asmjit::BaseMem");
		cl.def("cloneAdjusted", (class asmjit::BaseMem (asmjit::BaseMem::*)(long) const) &asmjit::BaseMem::cloneAdjusted, "Creates a new copy of this memory operand adjusted by `off`.\n\nC++: asmjit::BaseMem::cloneAdjusted(long) const --> class asmjit::BaseMem", pybind11::arg("off"));
		cl.def("isRegHome", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::isRegHome, "Tests whether this memory operand is a register home (only used by \n\nC++: asmjit::BaseMem::isRegHome() const --> bool");
		cl.def("setRegHome", (void (asmjit::BaseMem::*)()) &asmjit::BaseMem::setRegHome, "Mark this memory operand as register home (only used by \n\nC++: asmjit::BaseMem::setRegHome() --> void");
		cl.def("clearRegHome", (void (asmjit::BaseMem::*)()) &asmjit::BaseMem::clearRegHome, "Marks this operand to not be a register home (only used by \n\nC++: asmjit::BaseMem::clearRegHome() --> void");
		cl.def("hasBase", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasBase, "Tests whether the memory operand has a BASE register or label specified.\n\nC++: asmjit::BaseMem::hasBase() const --> bool");
		cl.def("hasIndex", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasIndex, "Tests whether the memory operand has an INDEX register specified.\n\nC++: asmjit::BaseMem::hasIndex() const --> bool");
		cl.def("hasBaseOrIndex", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasBaseOrIndex, "Tests whether the memory operand has BASE or INDEX register.\n\nC++: asmjit::BaseMem::hasBaseOrIndex() const --> bool");
		cl.def("hasBaseAndIndex", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasBaseAndIndex, "Tests whether the memory operand has BASE and INDEX register.\n\nC++: asmjit::BaseMem::hasBaseAndIndex() const --> bool");
		cl.def("hasBaseLabel", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasBaseLabel, "Tests whether the BASE operand is a label.\n\nC++: asmjit::BaseMem::hasBaseLabel() const --> bool");
		cl.def("hasBaseReg", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasBaseReg, "Tests whether the BASE operand is a register (registers start after `RegType::kLabelTag`).\n\nC++: asmjit::BaseMem::hasBaseReg() const --> bool");
		cl.def("hasIndexReg", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasIndexReg, "Tests whether the INDEX operand is a register (registers start after `RegType::kLabelTag`).\n\nC++: asmjit::BaseMem::hasIndexReg() const --> bool");
		cl.def("baseType", (enum asmjit::RegType (asmjit::BaseMem::*)() const) &asmjit::BaseMem::baseType, "Returns the type of the BASE register (0 if this memory operand doesn't use the BASE register).\n\n \n If the returned type is one (a value never associated to a register type) the BASE is not register, but it\n is a label. One equals to `kLabelTag`. You should always check `hasBaseLabel()` before using `baseId()` result.\n\nC++: asmjit::BaseMem::baseType() const --> enum asmjit::RegType");
		cl.def("indexType", (enum asmjit::RegType (asmjit::BaseMem::*)() const) &asmjit::BaseMem::indexType, "Returns the type of an INDEX register (0 if this memory operand doesn't\n use the INDEX register).\n\nC++: asmjit::BaseMem::indexType() const --> enum asmjit::RegType");
		cl.def("baseAndIndexTypes", (unsigned int (asmjit::BaseMem::*)() const) &asmjit::BaseMem::baseAndIndexTypes, "This is used internally for BASE+INDEX validation.\n\nC++: asmjit::BaseMem::baseAndIndexTypes() const --> unsigned int");
		cl.def("baseId", (unsigned int (asmjit::BaseMem::*)() const) &asmjit::BaseMem::baseId, "Returns both BASE (4:0 bits) and INDEX (9:5 bits) types combined into a single value.\n\n \n Returns id of the BASE register or label (if the BASE was specified as label).\n\nC++: asmjit::BaseMem::baseId() const --> unsigned int");
		cl.def("indexId", (unsigned int (asmjit::BaseMem::*)() const) &asmjit::BaseMem::indexId, "Returns the id of the INDEX register.\n\nC++: asmjit::BaseMem::indexId() const --> unsigned int");
		cl.def("setBaseId", (void (asmjit::BaseMem::*)(unsigned int)) &asmjit::BaseMem::setBaseId, "Sets the id of the BASE register (without modifying its type).\n\nC++: asmjit::BaseMem::setBaseId(unsigned int) --> void", pybind11::arg("id"));
		cl.def("setBaseType", (void (asmjit::BaseMem::*)(enum asmjit::RegType)) &asmjit::BaseMem::setBaseType, "Sets the register type of the BASE register (without modifying its id).\n\nC++: asmjit::BaseMem::setBaseType(enum asmjit::RegType) --> void", pybind11::arg("regType"));
		cl.def("setIndexId", (void (asmjit::BaseMem::*)(unsigned int)) &asmjit::BaseMem::setIndexId, "Sets the id of the INDEX register (without modifying its type).\n\nC++: asmjit::BaseMem::setIndexId(unsigned int) --> void", pybind11::arg("id"));
		cl.def("setIndexType", (void (asmjit::BaseMem::*)(enum asmjit::RegType)) &asmjit::BaseMem::setIndexType, "Sets the register type of the INDEX register (without modifying its id).\n\nC++: asmjit::BaseMem::setIndexType(enum asmjit::RegType) --> void", pybind11::arg("regType"));
		cl.def("setBase", (void (asmjit::BaseMem::*)(const class asmjit::BaseReg &)) &asmjit::BaseMem::setBase, "Sets the base register to type and id of the given `base` operand.\n\nC++: asmjit::BaseMem::setBase(const class asmjit::BaseReg &) --> void", pybind11::arg("base"));
		cl.def("setIndex", (void (asmjit::BaseMem::*)(const class asmjit::BaseReg &)) &asmjit::BaseMem::setIndex, "Sets the index register to type and id of the given `index` operand.\n\nC++: asmjit::BaseMem::setIndex(const class asmjit::BaseReg &) --> void", pybind11::arg("index"));


		cl.def("resetBase", (void (asmjit::BaseMem::*)()) &asmjit::BaseMem::resetBase, "Resets the memory operand's BASE register or label.\n\nC++: asmjit::BaseMem::resetBase() --> void");
		cl.def("resetIndex", (void (asmjit::BaseMem::*)()) &asmjit::BaseMem::resetIndex, "Resets the memory operand's INDEX register.\n\nC++: asmjit::BaseMem::resetIndex() --> void");
		cl.def("isOffset64Bit", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::isOffset64Bit, "Tests whether the memory operand has a 64-bit offset or absolute address.\n\n If this is true then `hasBase()` must always report false.\n\nC++: asmjit::BaseMem::isOffset64Bit() const --> bool");
		cl.def("hasOffset", (bool (asmjit::BaseMem::*)() const) &asmjit::BaseMem::hasOffset, "Tests whether the memory operand has a non-zero offset or absolute address.\n\nC++: asmjit::BaseMem::hasOffset() const --> bool");
		cl.def("offset", (long (asmjit::BaseMem::*)() const) &asmjit::BaseMem::offset, "Returns either relative offset or absolute address as 64-bit integer.\n\nC++: asmjit::BaseMem::offset() const --> long");
		cl.def("offsetLo32", (int (asmjit::BaseMem::*)() const) &asmjit::BaseMem::offsetLo32, "Returns a 32-bit low part of a 64-bit offset or absolute address.\n\nC++: asmjit::BaseMem::offsetLo32() const --> int");
		cl.def("offsetHi32", (int (asmjit::BaseMem::*)() const) &asmjit::BaseMem::offsetHi32, "Returns a 32-but high part of a 64-bit offset or absolute address.\n\n \n This function is UNSAFE and returns garbage if `isOffset64Bit()`\n returns false. Never use it blindly without checking it first.\n\nC++: asmjit::BaseMem::offsetHi32() const --> int");
		cl.def("setOffset", (void (asmjit::BaseMem::*)(long)) &asmjit::BaseMem::setOffset, "Sets a 64-bit offset or an absolute address to `offset`.\n\n \n This functions attempts to set both high and low parts of a 64-bit offset, however, if the operand has\n a BASE register it will store only the low 32 bits of the offset / address as there is no way to store both\n BASE and 64-bit offset, and there is currently no architecture that has such capability targeted by AsmJit.\n\nC++: asmjit::BaseMem::setOffset(long) --> void", pybind11::arg("offset"));
		cl.def("setOffsetLo32", (void (asmjit::BaseMem::*)(int)) &asmjit::BaseMem::setOffsetLo32, "Sets a low 32-bit offset to `offset` (don't use without knowing how BaseMem works).\n\nC++: asmjit::BaseMem::setOffsetLo32(int) --> void", pybind11::arg("offset"));
		cl.def("addOffset", (void (asmjit::BaseMem::*)(long)) &asmjit::BaseMem::addOffset, "Adjusts the memory operand offset by a `offset`.\n\nC++: asmjit::BaseMem::addOffset(long) --> void", pybind11::arg("offset"));
		cl.def("addOffsetLo32", (void (asmjit::BaseMem::*)(int)) &asmjit::BaseMem::addOffsetLo32, "Adds `offset` to a low 32-bit offset part (don't use without knowing how BaseMem works).\n\nC++: asmjit::BaseMem::addOffsetLo32(int) --> void", pybind11::arg("offset"));
		cl.def("resetOffset", (void (asmjit::BaseMem::*)()) &asmjit::BaseMem::resetOffset, "Resets the memory offset to zero.\n\nC++: asmjit::BaseMem::resetOffset() --> void");
		cl.def("resetOffsetLo32", (void (asmjit::BaseMem::*)()) &asmjit::BaseMem::resetOffsetLo32, "Resets the lo part of the memory offset to zero (don't use without knowing how BaseMem works).\n\nC++: asmjit::BaseMem::resetOffsetLo32() --> void");
	}
	// asmjit::ImmType file: line:1676
	pybind11::enum_<asmjit::ImmType>(M("asmjit"), "ImmType", "Type of the an immediate value.")
		.value("kInt", asmjit::ImmType::kInt)
		.value("kDouble", asmjit::ImmType::kDouble);

;

	{ // asmjit::Imm file: line:1684
		pybind11::class_<asmjit::Imm, std::shared_ptr<asmjit::Imm>, asmjit::Operand> cl(M("asmjit"), "Imm", "Immediate operands are encoded with instruction data.");
		cl.def( pybind11::init( [](){ return new asmjit::Imm(); } ) );
		cl.def( pybind11::init( [](asmjit::Imm const &o){ return new asmjit::Imm(o); } ) );
		cl.def( pybind11::init<const class asmjit::arm::Shift &>(), pybind11::arg("shift") );

		cl.def( pybind11::init( [](const float & a0){ return new asmjit::Imm(a0); } ), "doc" , pybind11::arg("val"));
		cl.def( pybind11::init<const float &, const unsigned int>(), pybind11::arg("val"), pybind11::arg("predicate") );

		cl.def( pybind11::init( [](const double & a0){ return new asmjit::Imm(a0); } ), "doc" , pybind11::arg("val"));
		cl.def( pybind11::init<const double &, const unsigned int>(), pybind11::arg("val"), pybind11::arg("predicate") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def("valueAs", (signed char (asmjit::Imm::*)() const) &asmjit::Imm::valueAs<signed char>, "C++: asmjit::Imm::valueAs() const --> signed char");
		cl.def("valueAs", (short (asmjit::Imm::*)() const) &asmjit::Imm::valueAs<short>, "C++: asmjit::Imm::valueAs() const --> short");
		cl.def("valueAs", (int (asmjit::Imm::*)() const) &asmjit::Imm::valueAs<int>, "C++: asmjit::Imm::valueAs() const --> int");
		cl.def("valueAs", (unsigned char (asmjit::Imm::*)() const) &asmjit::Imm::valueAs<unsigned char>, "C++: asmjit::Imm::valueAs() const --> unsigned char");
		cl.def("valueAs", (unsigned short (asmjit::Imm::*)() const) &asmjit::Imm::valueAs<unsigned short>, "C++: asmjit::Imm::valueAs() const --> unsigned short");
		cl.def("setValue", (void (asmjit::Imm::*)(const float &)) &asmjit::Imm::setValue<float>, "C++: asmjit::Imm::setValue(const float &) --> void", pybind11::arg("val"));
		cl.def("setValue", (void (asmjit::Imm::*)(const double &)) &asmjit::Imm::setValue<double>, "C++: asmjit::Imm::setValue(const double &) --> void", pybind11::arg("val"));
		cl.def("setValue", (void (asmjit::Imm::*)(const long &)) &asmjit::Imm::setValue<long>, "C++: asmjit::Imm::setValue(const long &) --> void", pybind11::arg("val"));
		cl.def("setValue", (void (asmjit::Imm::*)(const unsigned char &)) &asmjit::Imm::setValue<unsigned char>, "C++: asmjit::Imm::setValue(const unsigned char &) --> void", pybind11::arg("val"));
		cl.def("setValue", (void (asmjit::Imm::*)(const unsigned short &)) &asmjit::Imm::setValue<unsigned short>, "C++: asmjit::Imm::setValue(const unsigned short &) --> void", pybind11::arg("val"));
		cl.def("assign", (class asmjit::Imm & (asmjit::Imm::*)(const class asmjit::Imm &)) &asmjit::Imm::operator=, "Assigns the value of the `other` operand to this immediate.\n\nC++: asmjit::Imm::operator=(const class asmjit::Imm &) --> class asmjit::Imm &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("type", (enum asmjit::ImmType (asmjit::Imm::*)() const) &asmjit::Imm::type, "Returns immediate type.\n\nC++: asmjit::Imm::type() const --> enum asmjit::ImmType");
		cl.def("setType", (void (asmjit::Imm::*)(enum asmjit::ImmType)) &asmjit::Imm::setType, "Sets the immediate type to `type`.\n\nC++: asmjit::Imm::setType(enum asmjit::ImmType) --> void", pybind11::arg("type"));
		cl.def("resetType", (void (asmjit::Imm::*)()) &asmjit::Imm::resetType, "Resets immediate type to \n\nC++: asmjit::Imm::resetType() --> void");
		cl.def("predicate", (unsigned int (asmjit::Imm::*)() const) &asmjit::Imm::predicate, "Returns operation predicate of the immediate.\n\n The meaning depends on architecture, for example on ARM hardware this describes \n of the immediate.\n\nC++: asmjit::Imm::predicate() const --> unsigned int");
		cl.def("setPredicate", (void (asmjit::Imm::*)(unsigned int)) &asmjit::Imm::setPredicate, "Sets operation predicate of the immediate to `predicate`.\n\n The meaning depends on architecture, for example on ARM hardware this describes \n of the immediate.\n\nC++: asmjit::Imm::setPredicate(unsigned int) --> void", pybind11::arg("predicate"));
		cl.def("resetPredicate", (void (asmjit::Imm::*)()) &asmjit::Imm::resetPredicate, "Resets the shift operation type of the immediate to the default value (no operation).\n\nC++: asmjit::Imm::resetPredicate() --> void");
		cl.def("value", (long (asmjit::Imm::*)() const) &asmjit::Imm::value, "Returns the immediate value as `int64_t`, which is the internal format Imm uses.\n\nC++: asmjit::Imm::value() const --> long");
		cl.def("isInt", (unsigned int (asmjit::Imm::*)() const) &asmjit::Imm::isInt, "Tests whether this immediate value is integer of any size.\n\nC++: asmjit::Imm::isInt() const --> unsigned int");
		cl.def("isDouble", (unsigned int (asmjit::Imm::*)() const) &asmjit::Imm::isDouble, "Tests whether this immediate value is a double precision floating point value.\n\nC++: asmjit::Imm::isDouble() const --> unsigned int");
		cl.def("isInt8", (bool (asmjit::Imm::*)() const) &asmjit::Imm::isInt8, "Tests whether the immediate can be casted to 8-bit signed integer.\n\nC++: asmjit::Imm::isInt8() const --> bool");
		cl.def("isUInt8", (bool (asmjit::Imm::*)() const) &asmjit::Imm::isUInt8, "Tests whether the immediate can be casted to 8-bit unsigned integer.\n\nC++: asmjit::Imm::isUInt8() const --> bool");
		cl.def("isInt16", (bool (asmjit::Imm::*)() const) &asmjit::Imm::isInt16, "Tests whether the immediate can be casted to 16-bit signed integer.\n\nC++: asmjit::Imm::isInt16() const --> bool");
		cl.def("isUInt16", (bool (asmjit::Imm::*)() const) &asmjit::Imm::isUInt16, "Tests whether the immediate can be casted to 16-bit unsigned integer.\n\nC++: asmjit::Imm::isUInt16() const --> bool");
		cl.def("isInt32", (bool (asmjit::Imm::*)() const) &asmjit::Imm::isInt32, "Tests whether the immediate can be casted to 32-bit signed integer.\n\nC++: asmjit::Imm::isInt32() const --> bool");
		cl.def("isUInt32", (bool (asmjit::Imm::*)() const) &asmjit::Imm::isUInt32, "Tests whether the immediate can be casted to 32-bit unsigned integer.\n\nC++: asmjit::Imm::isUInt32() const --> bool");
		cl.def("int32Lo", (int (asmjit::Imm::*)() const) &asmjit::Imm::int32Lo, "Returns low 32-bit signed integer.\n\nC++: asmjit::Imm::int32Lo() const --> int");
		cl.def("int32Hi", (int (asmjit::Imm::*)() const) &asmjit::Imm::int32Hi, "Returns high 32-bit signed integer.\n\nC++: asmjit::Imm::int32Hi() const --> int");
		cl.def("uint32Lo", (unsigned int (asmjit::Imm::*)() const) &asmjit::Imm::uint32Lo, "Returns low 32-bit signed integer.\n\nC++: asmjit::Imm::uint32Lo() const --> unsigned int");
		cl.def("uint32Hi", (unsigned int (asmjit::Imm::*)() const) &asmjit::Imm::uint32Hi, "Returns high 32-bit signed integer.\n\nC++: asmjit::Imm::uint32Hi() const --> unsigned int");

		cl.def("clone", (class asmjit::Imm (asmjit::Imm::*)() const) &asmjit::Imm::clone, "Clones the immediate operand.\n\nC++: asmjit::Imm::clone() const --> class asmjit::Imm");
		cl.def("signExtend8Bits", (void (asmjit::Imm::*)()) &asmjit::Imm::signExtend8Bits, "C++: asmjit::Imm::signExtend8Bits() --> void");
		cl.def("signExtend16Bits", (void (asmjit::Imm::*)()) &asmjit::Imm::signExtend16Bits, "C++: asmjit::Imm::signExtend16Bits() --> void");
		cl.def("signExtend32Bits", (void (asmjit::Imm::*)()) &asmjit::Imm::signExtend32Bits, "C++: asmjit::Imm::signExtend32Bits() --> void");
		cl.def("zeroExtend8Bits", (void (asmjit::Imm::*)()) &asmjit::Imm::zeroExtend8Bits, "C++: asmjit::Imm::zeroExtend8Bits() --> void");
		cl.def("zeroExtend16Bits", (void (asmjit::Imm::*)()) &asmjit::Imm::zeroExtend16Bits, "C++: asmjit::Imm::zeroExtend16Bits() --> void");
		cl.def("zeroExtend32Bits", (void (asmjit::Imm::*)()) &asmjit::Imm::zeroExtend32Bits, "C++: asmjit::Imm::zeroExtend32Bits() --> void");

		{ // asmjit::Imm::IsConstexprConstructibleAsImmType file: line:1688
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::Imm::IsConstexprConstructibleAsImmType<asmjit::Imm>, std::shared_ptr<asmjit::Imm::IsConstexprConstructibleAsImmType<asmjit::Imm>>, std::integral_constant<bool,false>> cl(enclosing_class, "IsConstexprConstructibleAsImmType_asmjit_Imm_t", "");
			cl.def( pybind11::init( [](){ return new asmjit::Imm::IsConstexprConstructibleAsImmType<asmjit::Imm>(); } ) );
		}

		{ // asmjit::Imm::IsConstexprConstructibleAsImmType file: line:1688
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::Imm::IsConstexprConstructibleAsImmType<long>, std::shared_ptr<asmjit::Imm::IsConstexprConstructibleAsImmType<long>>, std::integral_constant<bool,true>> cl(enclosing_class, "IsConstexprConstructibleAsImmType_long_t", "");
			cl.def( pybind11::init( [](){ return new asmjit::Imm::IsConstexprConstructibleAsImmType<long>(); } ) );
		}

	}
}
