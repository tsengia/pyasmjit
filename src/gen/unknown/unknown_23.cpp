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

void bind_unknown_unknown_23(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::FuncArgsAssignment file: line:1441
		pybind11::class_<asmjit::FuncArgsAssignment, std::shared_ptr<asmjit::FuncArgsAssignment>> cl(M("asmjit"), "FuncArgsAssignment", "A helper class that can be used to assign a physical register for each function argument. Use with\n `BaseEmitter::emitArgsAssignment()`.");
		cl.def( pybind11::init( [](){ return new asmjit::FuncArgsAssignment(); } ), "doc" );
		cl.def( pybind11::init<const class asmjit::FuncDetail *>(), pybind11::arg("fd") );

		cl.def( pybind11::init( [](asmjit::FuncArgsAssignment const &o){ return new asmjit::FuncArgsAssignment(o); } ) );

		cl.def("reset", [](asmjit::FuncArgsAssignment &o) -> void { return o.reset(); }, "");
		cl.def("reset", (void (asmjit::FuncArgsAssignment::*)(const class asmjit::FuncDetail *)) &asmjit::FuncArgsAssignment::reset, "Resets this `FuncArgsAssignment` to either default constructed state or to assignment that links to `fd`,\n if non-null.\n\nC++: asmjit::FuncArgsAssignment::reset(const class asmjit::FuncDetail *) --> void", pybind11::arg("fd"));
		cl.def("assign", (class asmjit::FuncArgsAssignment & (asmjit::FuncArgsAssignment::*)(const class asmjit::FuncArgsAssignment &)) &asmjit::FuncArgsAssignment::operator=, "Copy assignment.\n\nC++: asmjit::FuncArgsAssignment::operator=(const class asmjit::FuncArgsAssignment &) --> class asmjit::FuncArgsAssignment &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("funcDetail", (const class asmjit::FuncDetail * (asmjit::FuncArgsAssignment::*)() const) &asmjit::FuncArgsAssignment::funcDetail, "Returns the associated  of this `FuncArgsAssignment`.\n\nC++: asmjit::FuncArgsAssignment::funcDetail() const --> const class asmjit::FuncDetail *", pybind11::return_value_policy::automatic);
		cl.def("setFuncDetail", (void (asmjit::FuncArgsAssignment::*)(const class asmjit::FuncDetail *)) &asmjit::FuncArgsAssignment::setFuncDetail, "Associates  with this `FuncArgsAssignment`.\n\nC++: asmjit::FuncArgsAssignment::setFuncDetail(const class asmjit::FuncDetail *) --> void", pybind11::arg("fd"));
		cl.def("hasSARegId", (bool (asmjit::FuncArgsAssignment::*)() const) &asmjit::FuncArgsAssignment::hasSARegId, "C++: asmjit::FuncArgsAssignment::hasSARegId() const --> bool");
		cl.def("saRegId", (unsigned int (asmjit::FuncArgsAssignment::*)() const) &asmjit::FuncArgsAssignment::saRegId, "C++: asmjit::FuncArgsAssignment::saRegId() const --> unsigned int");
		cl.def("setSARegId", (void (asmjit::FuncArgsAssignment::*)(unsigned int)) &asmjit::FuncArgsAssignment::setSARegId, "C++: asmjit::FuncArgsAssignment::setSARegId(unsigned int) --> void", pybind11::arg("regId"));
		cl.def("resetSARegId", (void (asmjit::FuncArgsAssignment::*)()) &asmjit::FuncArgsAssignment::resetSARegId, "C++: asmjit::FuncArgsAssignment::resetSARegId() --> void");
		cl.def("arg", (struct asmjit::FuncValue & (asmjit::FuncArgsAssignment::*)(unsigned long, unsigned long)) &asmjit::FuncArgsAssignment::arg, "Returns assigned argument at `argIndex` and `valueIndex`.\n\n \n `argIndex` refers to he function argument and `valueIndex` refers to a value pack (in case multiple\n values are passed as a single argument).\n\nC++: asmjit::FuncArgsAssignment::arg(unsigned long, unsigned long) --> struct asmjit::FuncValue &", pybind11::return_value_policy::automatic, pybind11::arg("argIndex"), pybind11::arg("valueIndex"));
		cl.def("isAssigned", (bool (asmjit::FuncArgsAssignment::*)(unsigned long, unsigned long) const) &asmjit::FuncArgsAssignment::isAssigned, "Tests whether argument at `argIndex` and `valueIndex` has been assigned.\n\nC++: asmjit::FuncArgsAssignment::isAssigned(unsigned long, unsigned long) const --> bool", pybind11::arg("argIndex"), pybind11::arg("valueIndex"));
		cl.def("assignReg", [](asmjit::FuncArgsAssignment &o, unsigned long const & a0, const class asmjit::BaseReg & a1) -> void { return o.assignReg(a0, a1); }, "", pybind11::arg("argIndex"), pybind11::arg("reg"));
		cl.def("assignReg", (void (asmjit::FuncArgsAssignment::*)(unsigned long, const class asmjit::BaseReg &, enum asmjit::TypeId)) &asmjit::FuncArgsAssignment::assignReg, "Assigns register at `argIndex` and value index of 0 to `reg` and an optional `typeId`.\n\nC++: asmjit::FuncArgsAssignment::assignReg(unsigned long, const class asmjit::BaseReg &, enum asmjit::TypeId) --> void", pybind11::arg("argIndex"), pybind11::arg("reg"), pybind11::arg("typeId"));
		cl.def("assignReg", [](asmjit::FuncArgsAssignment &o, unsigned long const & a0, enum asmjit::RegType const & a1, unsigned int const & a2) -> void { return o.assignReg(a0, a1, a2); }, "", pybind11::arg("argIndex"), pybind11::arg("regType"), pybind11::arg("regId"));
		cl.def("assignReg", (void (asmjit::FuncArgsAssignment::*)(unsigned long, enum asmjit::RegType, unsigned int, enum asmjit::TypeId)) &asmjit::FuncArgsAssignment::assignReg, "Assigns register at `argIndex` and value index of 0 to `regType`, `regId`, and an optional `typeId`.\n\nC++: asmjit::FuncArgsAssignment::assignReg(unsigned long, enum asmjit::RegType, unsigned int, enum asmjit::TypeId) --> void", pybind11::arg("argIndex"), pybind11::arg("regType"), pybind11::arg("regId"), pybind11::arg("typeId"));
		cl.def("assignStack", [](asmjit::FuncArgsAssignment &o, unsigned long const & a0, int const & a1) -> void { return o.assignStack(a0, a1); }, "", pybind11::arg("argIndex"), pybind11::arg("offset"));
		cl.def("assignStack", (void (asmjit::FuncArgsAssignment::*)(unsigned long, int, enum asmjit::TypeId)) &asmjit::FuncArgsAssignment::assignStack, "Assigns stack at `argIndex` and value index of 0 to `offset` and an optional `typeId`.\n\nC++: asmjit::FuncArgsAssignment::assignStack(unsigned long, int, enum asmjit::TypeId) --> void", pybind11::arg("argIndex"), pybind11::arg("offset"), pybind11::arg("typeId"));
		cl.def("assignRegInPack", [](asmjit::FuncArgsAssignment &o, unsigned long const & a0, unsigned long const & a1, const class asmjit::BaseReg & a2) -> void { return o.assignRegInPack(a0, a1, a2); }, "", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("reg"));
		cl.def("assignRegInPack", (void (asmjit::FuncArgsAssignment::*)(unsigned long, unsigned long, const class asmjit::BaseReg &, enum asmjit::TypeId)) &asmjit::FuncArgsAssignment::assignRegInPack, "Assigns register at `argIndex` and `valueIndex` to `reg` and an optional `typeId`.\n\nC++: asmjit::FuncArgsAssignment::assignRegInPack(unsigned long, unsigned long, const class asmjit::BaseReg &, enum asmjit::TypeId) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("reg"), pybind11::arg("typeId"));
		cl.def("assignRegInPack", [](asmjit::FuncArgsAssignment &o, unsigned long const & a0, unsigned long const & a1, enum asmjit::RegType const & a2, unsigned int const & a3) -> void { return o.assignRegInPack(a0, a1, a2, a3); }, "", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("regType"), pybind11::arg("regId"));
		cl.def("assignRegInPack", (void (asmjit::FuncArgsAssignment::*)(unsigned long, unsigned long, enum asmjit::RegType, unsigned int, enum asmjit::TypeId)) &asmjit::FuncArgsAssignment::assignRegInPack, "Assigns register at `argIndex` and `valueIndex` to `regType`, `regId`, and an optional `typeId`.\n\nC++: asmjit::FuncArgsAssignment::assignRegInPack(unsigned long, unsigned long, enum asmjit::RegType, unsigned int, enum asmjit::TypeId) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("regType"), pybind11::arg("regId"), pybind11::arg("typeId"));
		cl.def("assignStackInPack", [](asmjit::FuncArgsAssignment &o, unsigned long const & a0, unsigned long const & a1, int const & a2) -> void { return o.assignStackInPack(a0, a1, a2); }, "", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("offset"));
		cl.def("assignStackInPack", (void (asmjit::FuncArgsAssignment::*)(unsigned long, unsigned long, int, enum asmjit::TypeId)) &asmjit::FuncArgsAssignment::assignStackInPack, "Assigns stack at `argIndex` and `valueIndex` to `offset` and an optional `typeId`.\n\nC++: asmjit::FuncArgsAssignment::assignStackInPack(unsigned long, unsigned long, int, enum asmjit::TypeId) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("offset"), pybind11::arg("typeId"));

		cl.def("updateFuncFrame", (unsigned int (asmjit::FuncArgsAssignment::*)(class asmjit::FuncFrame &) const) &asmjit::FuncArgsAssignment::updateFuncFrame, "Update `FuncFrame` based on function's arguments assignment.\n\n \n This function must be called in order to use `BaseEmitter::emitArgsAssignment()`, otherwise the \n would not contain the information necessary to assign all arguments into the registers and/or stack specified.\n\nC++: asmjit::FuncArgsAssignment::updateFuncFrame(class asmjit::FuncFrame &) const --> unsigned int", pybind11::arg("frame"));
	}
	{ // asmjit::Target file: line:19
		pybind11::class_<asmjit::Target, std::shared_ptr<asmjit::Target>> cl(M("asmjit"), "Target", "Target is an abstract class that describes a machine code target.");
		cl.def( pybind11::init( [](){ return new asmjit::Target(); } ) );


		cl.def("environment", (const class asmjit::Environment & (asmjit::Target::*)() const) &asmjit::Target::environment, "Returns target's environment.\n\nC++: asmjit::Target::environment() const --> const class asmjit::Environment &", pybind11::return_value_policy::automatic);
		cl.def("arch", (enum asmjit::Arch (asmjit::Target::*)() const) &asmjit::Target::arch, "Returns the target architecture.\n\nC++: asmjit::Target::arch() const --> enum asmjit::Arch");
		cl.def("subArch", (enum asmjit::SubArch (asmjit::Target::*)() const) &asmjit::Target::subArch, "Returns the target sub-architecture.\n\nC++: asmjit::Target::subArch() const --> enum asmjit::SubArch");
		cl.def("cpuFeatures", (const class asmjit::CpuFeatures & (asmjit::Target::*)() const) &asmjit::Target::cpuFeatures, "Returns target CPU features.\n\nC++: asmjit::Target::cpuFeatures() const --> const class asmjit::CpuFeatures &", pybind11::return_value_policy::automatic);
	}
	{ // asmjit::ZoneHashBase file: line:37
		pybind11::class_<asmjit::ZoneHashBase, std::shared_ptr<asmjit::ZoneHashBase>> cl(M("asmjit"), "ZoneHashBase", "Base class used by  template");
		cl.def( pybind11::init( [](){ return new asmjit::ZoneHashBase(); } ) );






		cl.def("reset", (void (asmjit::ZoneHashBase::*)()) &asmjit::ZoneHashBase::reset, "C++: asmjit::ZoneHashBase::reset() --> void");
		cl.def("empty", (bool (asmjit::ZoneHashBase::*)() const) &asmjit::ZoneHashBase::empty, "\\{\n\nC++: asmjit::ZoneHashBase::empty() const --> bool");
		cl.def("size", (unsigned long (asmjit::ZoneHashBase::*)() const) &asmjit::ZoneHashBase::size, "C++: asmjit::ZoneHashBase::size() const --> unsigned long");


	}
	{ // asmjit::ZoneStringBase file: line:18
		pybind11::class_<asmjit::ZoneStringBase, std::shared_ptr<asmjit::ZoneStringBase>> cl(M("asmjit"), "ZoneStringBase", "A helper class used by  implementation.");
		cl.def( pybind11::init( [](){ return new asmjit::ZoneStringBase(); } ) );
		cl.def( pybind11::init( [](asmjit::ZoneStringBase const &o){ return new asmjit::ZoneStringBase(o); } ) );
		cl.def("reset", (void (asmjit::ZoneStringBase::*)()) &asmjit::ZoneStringBase::reset, "C++: asmjit::ZoneStringBase::reset() --> void");
		cl.def("assign", (struct asmjit::ZoneStringBase & (asmjit::ZoneStringBase::*)(const struct asmjit::ZoneStringBase &)) &asmjit::ZoneStringBase::operator=, "C++: asmjit::ZoneStringBase::operator=(const struct asmjit::ZoneStringBase &) --> struct asmjit::ZoneStringBase &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // asmjit::ZoneStringBase::(anonymous union at extern/asmjit/src/asmjit/./core/../core/../core/zonestring.h:19:3) file: line:19

			{ // asmjit::ZoneStringBase::(anonymous union)::(anonymous struct at extern/asmjit/src/asmjit/./core/../core/../core/zonestring.h:20:5) file: line:20

			}

			{ // asmjit::ZoneStringBase::(anonymous union)::(anonymous struct at extern/asmjit/src/asmjit/./core/../core/../core/zonestring.h:24:5) file: line:24
			}

		}

	}
	// asmjit::ExpressionOpType file: line:33
	pybind11::enum_<asmjit::ExpressionOpType>(M("asmjit"), "ExpressionOpType", "Operator type that can be used within an ")
		.value("kAdd", asmjit::ExpressionOpType::kAdd)
		.value("kSub", asmjit::ExpressionOpType::kSub)
		.value("kMul", asmjit::ExpressionOpType::kMul)
		.value("kSll", asmjit::ExpressionOpType::kSll)
		.value("kSrl", asmjit::ExpressionOpType::kSrl)
		.value("kSra", asmjit::ExpressionOpType::kSra);

;

	// asmjit::ExpressionValueType file: line:49
	pybind11::enum_<asmjit::ExpressionValueType>(M("asmjit"), "ExpressionValueType", "Value type that can be used within an ")
		.value("kNone", asmjit::ExpressionValueType::kNone)
		.value("kConstant", asmjit::ExpressionValueType::kConstant)
		.value("kLabel", asmjit::ExpressionValueType::kLabel)
		.value("kExpression", asmjit::ExpressionValueType::kExpression);

;

	{ // asmjit::Expression file: line:61
		pybind11::class_<asmjit::Expression, std::shared_ptr<asmjit::Expression>> cl(M("asmjit"), "Expression", "Expression node that can reference constants, labels, and another expressions.");
		cl.def( pybind11::init( [](){ return new asmjit::Expression(); } ) );
		cl.def_readwrite("opType", &asmjit::Expression::opType);
		cl.def("reset", (void (asmjit::Expression::*)()) &asmjit::Expression::reset, "Resets the whole expression.\n\n Changes both values to \n\nC++: asmjit::Expression::reset() --> void");
		cl.def("setValueAsConstant", (void (asmjit::Expression::*)(unsigned long, unsigned long)) &asmjit::Expression::setValueAsConstant, "Sets the value type at `index` to  and its content to `constant`.\n\nC++: asmjit::Expression::setValueAsConstant(unsigned long, unsigned long) --> void", pybind11::arg("index"), pybind11::arg("constant"));
		cl.def("setValueAsLabel", (void (asmjit::Expression::*)(unsigned long, class asmjit::LabelEntry *)) &asmjit::Expression::setValueAsLabel, "Sets the value type at `index` to  and its content to `labelEntry`.\n\nC++: asmjit::Expression::setValueAsLabel(unsigned long, class asmjit::LabelEntry *) --> void", pybind11::arg("index"), pybind11::arg("labelEntry"));
		cl.def("setValueAsExpression", (void (asmjit::Expression::*)(unsigned long, struct asmjit::Expression *)) &asmjit::Expression::setValueAsExpression, "Sets the value type at `index` to  and its content to `expression`.\n\nC++: asmjit::Expression::setValueAsExpression(unsigned long, struct asmjit::Expression *) --> void", pybind11::arg("index"), pybind11::arg("expression"));
		cl.def("assign", (struct asmjit::Expression & (asmjit::Expression::*)(const struct asmjit::Expression &)) &asmjit::Expression::operator=, "C++: asmjit::Expression::operator=(const struct asmjit::Expression &) --> struct asmjit::Expression &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		{ // asmjit::Expression::Value file: line:63
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::Expression::Value, std::shared_ptr<asmjit::Expression::Value>> cl(enclosing_class, "Value", "Expression value.");
			cl.def( pybind11::init( [](){ return new asmjit::Expression::Value(); } ) );
			cl.def_readwrite("constant", &asmjit::Expression::Value::constant);
			cl.def("assign", (union asmjit::Expression::Value & (asmjit::Expression::Value::*)(const union asmjit::Expression::Value &)) &asmjit::Expression::Value::operator=, "C++: asmjit::Expression::Value::operator=(const union asmjit::Expression::Value &) --> union asmjit::Expression::Value &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
}
