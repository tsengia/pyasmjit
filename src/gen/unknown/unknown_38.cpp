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

// asmjit::FuncPass file: line:692
struct PyCallBack_asmjit_FuncPass : public asmjit::FuncPass {
	using asmjit::FuncPass::FuncPass;

};

void bind_unknown_unknown_38(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::FuncRetNode file: line:537
		pybind11::class_<asmjit::FuncRetNode, std::shared_ptr<asmjit::FuncRetNode>, asmjit::InstNodeWithOperands<4U>> cl(M("asmjit"), "FuncRetNode", "Function return, used by ");
		cl.def( pybind11::init<class asmjit::BaseBuilder *>(), pybind11::arg("cb") );

	}
	{ // asmjit::InvokeNode file: line:554
		pybind11::class_<asmjit::InvokeNode, std::shared_ptr<asmjit::InvokeNode>, asmjit::InstNodeWithOperands<4U>> cl(M("asmjit"), "InvokeNode", "Function invocation, used by ");
		cl.def( pybind11::init<class asmjit::BaseBuilder *, unsigned int, enum asmjit::InstOptions>(), pybind11::arg("cb"), pybind11::arg("instId"), pybind11::arg("options") );



		cl.def("init", (unsigned int (asmjit::InvokeNode::*)(const struct asmjit::FuncSignature &, const class asmjit::Environment &)) &asmjit::InvokeNode::init, "Sets the function signature.\n\nC++: asmjit::InvokeNode::init(const struct asmjit::FuncSignature &, const class asmjit::Environment &) --> unsigned int", pybind11::arg("signature"), pybind11::arg("environment"));
		cl.def("detail", (class asmjit::FuncDetail & (asmjit::InvokeNode::*)()) &asmjit::InvokeNode::detail, "Returns the function detail.\n\nC++: asmjit::InvokeNode::detail() --> class asmjit::FuncDetail &", pybind11::return_value_policy::automatic);
		cl.def("target", (class asmjit::Operand & (asmjit::InvokeNode::*)()) &asmjit::InvokeNode::target, "Returns the target operand.\n\nC++: asmjit::InvokeNode::target() --> class asmjit::Operand &", pybind11::return_value_policy::automatic);
		cl.def("hasRet", (bool (asmjit::InvokeNode::*)() const) &asmjit::InvokeNode::hasRet, "Returns the number of function return values.\n\nC++: asmjit::InvokeNode::hasRet() const --> bool");
		cl.def("argCount", (unsigned int (asmjit::InvokeNode::*)() const) &asmjit::InvokeNode::argCount, "Returns the number of function arguments.\n\nC++: asmjit::InvokeNode::argCount() const --> unsigned int");
		cl.def("retPack", (struct asmjit::InvokeNode::OperandPack & (asmjit::InvokeNode::*)()) &asmjit::InvokeNode::retPack, "Returns operand pack representing function return value(s).\n\nC++: asmjit::InvokeNode::retPack() --> struct asmjit::InvokeNode::OperandPack &", pybind11::return_value_policy::automatic);
		cl.def("ret", [](asmjit::InvokeNode &o) -> asmjit::Operand & { return o.ret(); }, "", pybind11::return_value_policy::automatic);
		cl.def("ret", (class asmjit::Operand & (asmjit::InvokeNode::*)(unsigned long)) &asmjit::InvokeNode::ret, "Returns the return value at the given `valueIndex`.\n\nC++: asmjit::InvokeNode::ret(unsigned long) --> class asmjit::Operand &", pybind11::return_value_policy::automatic, pybind11::arg("valueIndex"));
		cl.def("argPack", (struct asmjit::InvokeNode::OperandPack & (asmjit::InvokeNode::*)(unsigned long)) &asmjit::InvokeNode::argPack, "Returns operand pack representing function return value(s).\n\nC++: asmjit::InvokeNode::argPack(unsigned long) --> struct asmjit::InvokeNode::OperandPack &", pybind11::return_value_policy::automatic, pybind11::arg("argIndex"));
		cl.def("arg", (class asmjit::Operand & (asmjit::InvokeNode::*)(unsigned long, unsigned long)) &asmjit::InvokeNode::arg, "Returns a function argument at the given `argIndex`.\n\nC++: asmjit::InvokeNode::arg(unsigned long, unsigned long) --> class asmjit::Operand &", pybind11::return_value_policy::automatic, pybind11::arg("argIndex"), pybind11::arg("valueIndex"));


		cl.def("setRet", (void (asmjit::InvokeNode::*)(unsigned long, const class asmjit::BaseReg &)) &asmjit::InvokeNode::setRet, "Sets the function return value at `valueIndex` to `reg`.\n\nC++: asmjit::InvokeNode::setRet(unsigned long, const class asmjit::BaseReg &) --> void", pybind11::arg("valueIndex"), pybind11::arg("reg"));
		cl.def("setArg", (void (asmjit::InvokeNode::*)(unsigned long, const class asmjit::BaseReg &)) &asmjit::InvokeNode::setArg, "Sets the first function argument in a value-pack at `argIndex` to `reg`.\n\nC++: asmjit::InvokeNode::setArg(unsigned long, const class asmjit::BaseReg &) --> void", pybind11::arg("argIndex"), pybind11::arg("reg"));
		cl.def("setArg", (void (asmjit::InvokeNode::*)(unsigned long, const class asmjit::Imm &)) &asmjit::InvokeNode::setArg, "Sets the first function argument in a value-pack at `argIndex` to `imm`.\n\nC++: asmjit::InvokeNode::setArg(unsigned long, const class asmjit::Imm &) --> void", pybind11::arg("argIndex"), pybind11::arg("imm"));
		cl.def("setArg", (void (asmjit::InvokeNode::*)(unsigned long, unsigned long, const class asmjit::BaseReg &)) &asmjit::InvokeNode::setArg, "Sets the function argument at `argIndex` and `valueIndex` to `reg`.\n\nC++: asmjit::InvokeNode::setArg(unsigned long, unsigned long, const class asmjit::BaseReg &) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("reg"));
		cl.def("setArg", (void (asmjit::InvokeNode::*)(unsigned long, unsigned long, const class asmjit::Imm &)) &asmjit::InvokeNode::setArg, "Sets the function argument at `argIndex` and `valueIndex` to `imm`.\n\nC++: asmjit::InvokeNode::setArg(unsigned long, unsigned long, const class asmjit::Imm &) --> void", pybind11::arg("argIndex"), pybind11::arg("valueIndex"), pybind11::arg("imm"));

		{ // asmjit::InvokeNode::OperandPack file: line:561
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::InvokeNode::OperandPack, std::shared_ptr<asmjit::InvokeNode::OperandPack>> cl(enclosing_class, "OperandPack", "Operand pack provides multiple operands that can be associated with a single return value of function\n argument. Sometimes this is necessary to express an argument or return value that requires multiple\n registers, for example 64-bit value in 32-bit mode or passing / returning homogeneous data structures.");
			cl.def( pybind11::init( [](asmjit::InvokeNode::OperandPack const &o){ return new asmjit::InvokeNode::OperandPack(o); } ) );
			cl.def( pybind11::init( [](){ return new asmjit::InvokeNode::OperandPack(); } ) );
			cl.def("reset", (void (asmjit::InvokeNode::OperandPack::*)()) &asmjit::InvokeNode::OperandPack::reset, "Reset the pack by resetting all operands in the pack.\n\nC++: asmjit::InvokeNode::OperandPack::reset() --> void");
			cl.def("__getitem__", (class asmjit::Operand & (asmjit::InvokeNode::OperandPack::*)(unsigned long)) &asmjit::InvokeNode::OperandPack::operator[], "Returns an operand at the given `valueIndex`.\n\nC++: asmjit::InvokeNode::OperandPack::operator[](unsigned long) --> class asmjit::Operand &", pybind11::return_value_policy::automatic, pybind11::arg("valueIndex"));
			cl.def("assign", (struct asmjit::InvokeNode::OperandPack & (asmjit::InvokeNode::OperandPack::*)(const struct asmjit::InvokeNode::OperandPack &)) &asmjit::InvokeNode::OperandPack::operator=, "C++: asmjit::InvokeNode::OperandPack::operator=(const struct asmjit::InvokeNode::OperandPack &) --> struct asmjit::InvokeNode::OperandPack &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
	{ // asmjit::FuncPass file: line:692
		pybind11::class_<asmjit::FuncPass, std::shared_ptr<asmjit::FuncPass>, PyCallBack_asmjit_FuncPass, asmjit::Pass> cl(M("asmjit"), "FuncPass", "Function pass extends  with ");
		cl.def( pybind11::init<const char *>(), pybind11::arg("name") );

		cl.def("cc", (class asmjit::BaseCompiler * (asmjit::FuncPass::*)() const) &asmjit::FuncPass::cc, "Returns the associated `BaseCompiler`.\n\nC++: asmjit::FuncPass::cc() const --> class asmjit::BaseCompiler *", pybind11::return_value_policy::automatic);
	}
}
