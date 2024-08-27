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

void bind_unknown_unknown_33(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::InstNode file: line:745
		pybind11::class_<asmjit::InstNode, std::shared_ptr<asmjit::InstNode>, asmjit::BaseNode> cl(M("asmjit"), "InstNode", "Instruction node.\n\n Wraps an instruction with its options and operands.");
		cl.def( pybind11::init( [](class asmjit::BaseBuilder * a0, unsigned int const & a1, enum asmjit::InstOptions const & a2, unsigned int const & a3){ return new asmjit::InstNode(a0, a1, a2, a3); } ), "doc" , pybind11::arg("cb"), pybind11::arg("instId"), pybind11::arg("options"), pybind11::arg("opCount"));
		cl.def( pybind11::init<class asmjit::BaseBuilder *, unsigned int, enum asmjit::InstOptions, unsigned int, unsigned int>(), pybind11::arg("cb"), pybind11::arg("instId"), pybind11::arg("options"), pybind11::arg("opCount"), pybind11::arg("opCapacity") );



		cl.def("baseInst", (class asmjit::BaseInst & (asmjit::InstNode::*)()) &asmjit::InstNode::baseInst, "\\{\n\nC++: asmjit::InstNode::baseInst() --> class asmjit::BaseInst &", pybind11::return_value_policy::automatic);
		cl.def("id", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::id, "Returns the instruction id, see `BaseInst::Id`.\n\nC++: asmjit::InstNode::id() const --> unsigned int");
		cl.def("realId", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::realId, "Returns the instruction real id, see `BaseInst::Id`.\n\nC++: asmjit::InstNode::realId() const --> unsigned int");
		cl.def("setId", (void (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::setId, "Sets the instruction id to `id`, see `BaseInst::Id`.\n\nC++: asmjit::InstNode::setId(unsigned int) --> void", pybind11::arg("id"));
		cl.def("options", (enum asmjit::InstOptions (asmjit::InstNode::*)() const) &asmjit::InstNode::options, "Returns instruction options, see  for more details.\n\nC++: asmjit::InstNode::options() const --> enum asmjit::InstOptions");
		cl.def("hasOption", (bool (asmjit::InstNode::*)(enum asmjit::InstOptions) const) &asmjit::InstNode::hasOption, "Tests whether instruction has the given ` set/enabled.\n\nC++: asmjit::InstNode::hasOption(enum asmjit::InstOptions) const --> bool", pybind11::arg("option"));
		cl.def("setOptions", (void (asmjit::InstNode::*)(enum asmjit::InstOptions)) &asmjit::InstNode::setOptions, "Sets instruction `options` to the provided value, resetting all others.\n\nC++: asmjit::InstNode::setOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("addOptions", (void (asmjit::InstNode::*)(enum asmjit::InstOptions)) &asmjit::InstNode::addOptions, "Adds instruction `options` to the instruction.\n\nC++: asmjit::InstNode::addOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("clearOptions", (void (asmjit::InstNode::*)(enum asmjit::InstOptions)) &asmjit::InstNode::clearOptions, "Clears instruction `options` of the instruction (disables the given options).\n\nC++: asmjit::InstNode::clearOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("resetOptions", (void (asmjit::InstNode::*)()) &asmjit::InstNode::resetOptions, "Resets instruction options to none - disabling all instruction options.\n\nC++: asmjit::InstNode::resetOptions() --> void");
		cl.def("hasExtraReg", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasExtraReg, "Tests whether the node has an extra register operand.\n\nC++: asmjit::InstNode::hasExtraReg() const --> bool");
		cl.def("extraReg", (struct asmjit::RegOnly & (asmjit::InstNode::*)()) &asmjit::InstNode::extraReg, "Returns extra register operand.\n\nC++: asmjit::InstNode::extraReg() --> struct asmjit::RegOnly &", pybind11::return_value_policy::automatic);
		cl.def("setExtraReg", (void (asmjit::InstNode::*)(const class asmjit::BaseReg &)) &asmjit::InstNode::setExtraReg, "Sets extra register operand to `reg`.\n\nC++: asmjit::InstNode::setExtraReg(const class asmjit::BaseReg &) --> void", pybind11::arg("reg"));
		cl.def("setExtraReg", (void (asmjit::InstNode::*)(const struct asmjit::RegOnly &)) &asmjit::InstNode::setExtraReg, "Sets extra register operand to `reg`.\n\nC++: asmjit::InstNode::setExtraReg(const struct asmjit::RegOnly &) --> void", pybind11::arg("reg"));
		cl.def("resetExtraReg", (void (asmjit::InstNode::*)()) &asmjit::InstNode::resetExtraReg, "Resets extra register operand.\n\nC++: asmjit::InstNode::resetExtraReg() --> void");
		cl.def("opCount", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::opCount, "Returns operand count.\n\nC++: asmjit::InstNode::opCount() const --> unsigned int");
		cl.def("opCapacity", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::opCapacity, "Returns operand capacity.\n\nC++: asmjit::InstNode::opCapacity() const --> unsigned int");
		cl.def("setOpCount", (void (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::setOpCount, "Sets operand count.\n\nC++: asmjit::InstNode::setOpCount(unsigned int) --> void", pybind11::arg("opCount"));
		cl.def("operands", (class asmjit::Operand * (asmjit::InstNode::*)()) &asmjit::InstNode::operands, "Returns operands array.\n\nC++: asmjit::InstNode::operands() --> class asmjit::Operand *", pybind11::return_value_policy::automatic);
		cl.def("op", (class asmjit::Operand & (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::op, "Returns operand at the given `index`.\n\nC++: asmjit::InstNode::op(unsigned int) --> class asmjit::Operand &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("setOp", (void (asmjit::InstNode::*)(unsigned int, const struct asmjit::Operand_ &)) &asmjit::InstNode::setOp, "Sets operand at the given `index` to `op`.\n\nC++: asmjit::InstNode::setOp(unsigned int, const struct asmjit::Operand_ &) --> void", pybind11::arg("index"), pybind11::arg("op"));
		cl.def("resetOp", (void (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::resetOp, "Resets operand at the given `index` to none.\n\nC++: asmjit::InstNode::resetOp(unsigned int) --> void", pybind11::arg("index"));
		cl.def("resetOpRange", (void (asmjit::InstNode::*)(unsigned int, unsigned int)) &asmjit::InstNode::resetOpRange, "Resets operands at `[start, end)` range.\n\nC++: asmjit::InstNode::resetOpRange(unsigned int, unsigned int) --> void", pybind11::arg("start"), pybind11::arg("end"));
		cl.def("hasOpType", (bool (asmjit::InstNode::*)(enum asmjit::OperandType) const) &asmjit::InstNode::hasOpType, "Tests whether the given operand type `opType` is used by the instruction.\n\nC++: asmjit::InstNode::hasOpType(enum asmjit::OperandType) const --> bool", pybind11::arg("opType"));
		cl.def("hasRegOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasRegOp, "Tests whether the instruction uses at least one register operand.\n\nC++: asmjit::InstNode::hasRegOp() const --> bool");
		cl.def("hasMemOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasMemOp, "Tests whether the instruction uses at least one memory operand.\n\nC++: asmjit::InstNode::hasMemOp() const --> bool");
		cl.def("hasImmOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasImmOp, "Tests whether the instruction uses at least one immediate operand.\n\nC++: asmjit::InstNode::hasImmOp() const --> bool");
		cl.def("hasLabelOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasLabelOp, "Tests whether the instruction uses at least one label operand.\n\nC++: asmjit::InstNode::hasLabelOp() const --> bool");
		cl.def("indexOfOpType", (unsigned int (asmjit::InstNode::*)(enum asmjit::OperandType) const) &asmjit::InstNode::indexOfOpType, "Returns the index of the given operand type `opType`.\n\n \n If the operand type wa found, the value returned represents its index in \n array, otherwise  is returned to signalize that the operand was not found.\n\nC++: asmjit::InstNode::indexOfOpType(enum asmjit::OperandType) const --> unsigned int", pybind11::arg("opType"));
		cl.def("indexOfMemOp", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::indexOfMemOp, "A shortcut that calls `indexOfOpType(OperandType::kMem)`.\n\nC++: asmjit::InstNode::indexOfMemOp() const --> unsigned int");
		cl.def("indexOfImmOp", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::indexOfImmOp, "A shortcut that calls `indexOfOpType(OperandType::kImm)`.\n\nC++: asmjit::InstNode::indexOfImmOp() const --> unsigned int");
		cl.def("indexOfLabelOp", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::indexOfLabelOp, "A shortcut that calls `indexOfOpType(OperandType::kLabel)`.\n\nC++: asmjit::InstNode::indexOfLabelOp() const --> unsigned int");

		cl.def("getRewriteIndex", (unsigned int (asmjit::InstNode::*)(const unsigned int *) const) &asmjit::InstNode::getRewriteIndex, "Returns a rewrite index of the given pointer to `id`.\n\n This function returns a value that can be then passed to ` function. It can address\n any id from any operand that is used by the instruction in addition to  field, which\n can also be used by the register allocator.\n\nC++: asmjit::InstNode::getRewriteIndex(const unsigned int *) const --> unsigned int", pybind11::arg("id"));
		cl.def("rewriteIdAtIndex", (void (asmjit::InstNode::*)(unsigned int, unsigned int)) &asmjit::InstNode::rewriteIdAtIndex, "Rewrites the given `index` to the provided identifier `id`.\n\n \n This is an internal function that is used by a  implementation to rewrite virtual\n registers to physical registers. The rewriter in this case sees all operands as array of uint32 values\n and the given `index` describes a position in this array. For example a single  would be\n decomposed to 4 uint32_t values, where the first at index 0 would be operand signature, next would be\n base id, etc... This is a comfortable way of patching operands without having to check for their types.\n\nC++: asmjit::InstNode::rewriteIdAtIndex(unsigned int, unsigned int) --> void", pybind11::arg("index"), pybind11::arg("id"));
		cl.def_static("capacityOfOpCount", (unsigned int (*)(unsigned int)) &asmjit::InstNode::capacityOfOpCount, "Returns the capacity required for the given operands count `opCount`.\n\n There are only two capacities used -  and  so this function\n is used to decide between these two. The general rule is that instructions that can be represented with\n  would use this value, and all others would take \n\nC++: asmjit::InstNode::capacityOfOpCount(unsigned int) --> unsigned int", pybind11::arg("opCount"));
		cl.def_static("nodeSizeOfOpCapacity", (unsigned long (*)(unsigned int)) &asmjit::InstNode::nodeSizeOfOpCapacity, "Calculates the size of  required to hold at most `opCapacity` operands.\n\n This function is used internally to allocate \n\nC++: asmjit::InstNode::nodeSizeOfOpCapacity(unsigned int) --> unsigned long", pybind11::arg("opCapacity"));
	}
	{ // asmjit::InstNodeWithOperands file: line:1036
		pybind11::class_<asmjit::InstNodeWithOperands<4U>, std::shared_ptr<asmjit::InstNodeWithOperands<4U>>, asmjit::InstNode> cl(M("asmjit"), "InstNodeWithOperands_4U_t", "");
		cl.def( pybind11::init<class asmjit::BaseBuilder *, unsigned int, enum asmjit::InstOptions, unsigned int>(), pybind11::arg("cb"), pybind11::arg("instId"), pybind11::arg("options"), pybind11::arg("opCount") );



		cl.def("baseInst", (class asmjit::BaseInst & (asmjit::InstNode::*)()) &asmjit::InstNode::baseInst, "\\{\n\nC++: asmjit::InstNode::baseInst() --> class asmjit::BaseInst &", pybind11::return_value_policy::automatic);
		cl.def("id", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::id, "Returns the instruction id, see `BaseInst::Id`.\n\nC++: asmjit::InstNode::id() const --> unsigned int");
		cl.def("realId", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::realId, "Returns the instruction real id, see `BaseInst::Id`.\n\nC++: asmjit::InstNode::realId() const --> unsigned int");
		cl.def("setId", (void (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::setId, "Sets the instruction id to `id`, see `BaseInst::Id`.\n\nC++: asmjit::InstNode::setId(unsigned int) --> void", pybind11::arg("id"));
		cl.def("options", (enum asmjit::InstOptions (asmjit::InstNode::*)() const) &asmjit::InstNode::options, "Returns instruction options, see  for more details.\n\nC++: asmjit::InstNode::options() const --> enum asmjit::InstOptions");
		cl.def("hasOption", (bool (asmjit::InstNode::*)(enum asmjit::InstOptions) const) &asmjit::InstNode::hasOption, "Tests whether instruction has the given ` set/enabled.\n\nC++: asmjit::InstNode::hasOption(enum asmjit::InstOptions) const --> bool", pybind11::arg("option"));
		cl.def("setOptions", (void (asmjit::InstNode::*)(enum asmjit::InstOptions)) &asmjit::InstNode::setOptions, "Sets instruction `options` to the provided value, resetting all others.\n\nC++: asmjit::InstNode::setOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("addOptions", (void (asmjit::InstNode::*)(enum asmjit::InstOptions)) &asmjit::InstNode::addOptions, "Adds instruction `options` to the instruction.\n\nC++: asmjit::InstNode::addOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("clearOptions", (void (asmjit::InstNode::*)(enum asmjit::InstOptions)) &asmjit::InstNode::clearOptions, "Clears instruction `options` of the instruction (disables the given options).\n\nC++: asmjit::InstNode::clearOptions(enum asmjit::InstOptions) --> void", pybind11::arg("options"));
		cl.def("resetOptions", (void (asmjit::InstNode::*)()) &asmjit::InstNode::resetOptions, "Resets instruction options to none - disabling all instruction options.\n\nC++: asmjit::InstNode::resetOptions() --> void");
		cl.def("hasExtraReg", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasExtraReg, "Tests whether the node has an extra register operand.\n\nC++: asmjit::InstNode::hasExtraReg() const --> bool");
		cl.def("extraReg", (struct asmjit::RegOnly & (asmjit::InstNode::*)()) &asmjit::InstNode::extraReg, "Returns extra register operand.\n\nC++: asmjit::InstNode::extraReg() --> struct asmjit::RegOnly &", pybind11::return_value_policy::automatic);
		cl.def("setExtraReg", (void (asmjit::InstNode::*)(const class asmjit::BaseReg &)) &asmjit::InstNode::setExtraReg, "Sets extra register operand to `reg`.\n\nC++: asmjit::InstNode::setExtraReg(const class asmjit::BaseReg &) --> void", pybind11::arg("reg"));
		cl.def("setExtraReg", (void (asmjit::InstNode::*)(const struct asmjit::RegOnly &)) &asmjit::InstNode::setExtraReg, "Sets extra register operand to `reg`.\n\nC++: asmjit::InstNode::setExtraReg(const struct asmjit::RegOnly &) --> void", pybind11::arg("reg"));
		cl.def("resetExtraReg", (void (asmjit::InstNode::*)()) &asmjit::InstNode::resetExtraReg, "Resets extra register operand.\n\nC++: asmjit::InstNode::resetExtraReg() --> void");
		cl.def("opCount", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::opCount, "Returns operand count.\n\nC++: asmjit::InstNode::opCount() const --> unsigned int");
		cl.def("opCapacity", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::opCapacity, "Returns operand capacity.\n\nC++: asmjit::InstNode::opCapacity() const --> unsigned int");
		cl.def("setOpCount", (void (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::setOpCount, "Sets operand count.\n\nC++: asmjit::InstNode::setOpCount(unsigned int) --> void", pybind11::arg("opCount"));
		cl.def("operands", (class asmjit::Operand * (asmjit::InstNode::*)()) &asmjit::InstNode::operands, "Returns operands array.\n\nC++: asmjit::InstNode::operands() --> class asmjit::Operand *", pybind11::return_value_policy::automatic);
		cl.def("op", (class asmjit::Operand & (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::op, "Returns operand at the given `index`.\n\nC++: asmjit::InstNode::op(unsigned int) --> class asmjit::Operand &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("setOp", (void (asmjit::InstNode::*)(unsigned int, const struct asmjit::Operand_ &)) &asmjit::InstNode::setOp, "Sets operand at the given `index` to `op`.\n\nC++: asmjit::InstNode::setOp(unsigned int, const struct asmjit::Operand_ &) --> void", pybind11::arg("index"), pybind11::arg("op"));
		cl.def("resetOp", (void (asmjit::InstNode::*)(unsigned int)) &asmjit::InstNode::resetOp, "Resets operand at the given `index` to none.\n\nC++: asmjit::InstNode::resetOp(unsigned int) --> void", pybind11::arg("index"));
		cl.def("resetOpRange", (void (asmjit::InstNode::*)(unsigned int, unsigned int)) &asmjit::InstNode::resetOpRange, "Resets operands at `[start, end)` range.\n\nC++: asmjit::InstNode::resetOpRange(unsigned int, unsigned int) --> void", pybind11::arg("start"), pybind11::arg("end"));
		cl.def("hasOpType", (bool (asmjit::InstNode::*)(enum asmjit::OperandType) const) &asmjit::InstNode::hasOpType, "Tests whether the given operand type `opType` is used by the instruction.\n\nC++: asmjit::InstNode::hasOpType(enum asmjit::OperandType) const --> bool", pybind11::arg("opType"));
		cl.def("hasRegOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasRegOp, "Tests whether the instruction uses at least one register operand.\n\nC++: asmjit::InstNode::hasRegOp() const --> bool");
		cl.def("hasMemOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasMemOp, "Tests whether the instruction uses at least one memory operand.\n\nC++: asmjit::InstNode::hasMemOp() const --> bool");
		cl.def("hasImmOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasImmOp, "Tests whether the instruction uses at least one immediate operand.\n\nC++: asmjit::InstNode::hasImmOp() const --> bool");
		cl.def("hasLabelOp", (bool (asmjit::InstNode::*)() const) &asmjit::InstNode::hasLabelOp, "Tests whether the instruction uses at least one label operand.\n\nC++: asmjit::InstNode::hasLabelOp() const --> bool");
		cl.def("indexOfOpType", (unsigned int (asmjit::InstNode::*)(enum asmjit::OperandType) const) &asmjit::InstNode::indexOfOpType, "Returns the index of the given operand type `opType`.\n\n \n If the operand type wa found, the value returned represents its index in \n array, otherwise  is returned to signalize that the operand was not found.\n\nC++: asmjit::InstNode::indexOfOpType(enum asmjit::OperandType) const --> unsigned int", pybind11::arg("opType"));
		cl.def("indexOfMemOp", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::indexOfMemOp, "A shortcut that calls `indexOfOpType(OperandType::kMem)`.\n\nC++: asmjit::InstNode::indexOfMemOp() const --> unsigned int");
		cl.def("indexOfImmOp", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::indexOfImmOp, "A shortcut that calls `indexOfOpType(OperandType::kImm)`.\n\nC++: asmjit::InstNode::indexOfImmOp() const --> unsigned int");
		cl.def("indexOfLabelOp", (unsigned int (asmjit::InstNode::*)() const) &asmjit::InstNode::indexOfLabelOp, "A shortcut that calls `indexOfOpType(OperandType::kLabel)`.\n\nC++: asmjit::InstNode::indexOfLabelOp() const --> unsigned int");

		cl.def("getRewriteIndex", (unsigned int (asmjit::InstNode::*)(const unsigned int *) const) &asmjit::InstNode::getRewriteIndex, "Returns a rewrite index of the given pointer to `id`.\n\n This function returns a value that can be then passed to ` function. It can address\n any id from any operand that is used by the instruction in addition to  field, which\n can also be used by the register allocator.\n\nC++: asmjit::InstNode::getRewriteIndex(const unsigned int *) const --> unsigned int", pybind11::arg("id"));
		cl.def("rewriteIdAtIndex", (void (asmjit::InstNode::*)(unsigned int, unsigned int)) &asmjit::InstNode::rewriteIdAtIndex, "Rewrites the given `index` to the provided identifier `id`.\n\n \n This is an internal function that is used by a  implementation to rewrite virtual\n registers to physical registers. The rewriter in this case sees all operands as array of uint32 values\n and the given `index` describes a position in this array. For example a single  would be\n decomposed to 4 uint32_t values, where the first at index 0 would be operand signature, next would be\n base id, etc... This is a comfortable way of patching operands without having to check for their types.\n\nC++: asmjit::InstNode::rewriteIdAtIndex(unsigned int, unsigned int) --> void", pybind11::arg("index"), pybind11::arg("id"));
		cl.def_static("capacityOfOpCount", (unsigned int (*)(unsigned int)) &asmjit::InstNode::capacityOfOpCount, "Returns the capacity required for the given operands count `opCount`.\n\n There are only two capacities used -  and  so this function\n is used to decide between these two. The general rule is that instructions that can be represented with\n  would use this value, and all others would take \n\nC++: asmjit::InstNode::capacityOfOpCount(unsigned int) --> unsigned int", pybind11::arg("opCount"));
		cl.def_static("nodeSizeOfOpCapacity", (unsigned long (*)(unsigned int)) &asmjit::InstNode::nodeSizeOfOpCapacity, "Calculates the size of  required to hold at most `opCapacity` operands.\n\n This function is used internally to allocate \n\nC++: asmjit::InstNode::nodeSizeOfOpCapacity(unsigned int) --> unsigned long", pybind11::arg("opCapacity"));
	}
}
