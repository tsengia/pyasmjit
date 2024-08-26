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

void bind_unknown_unknown_34(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::BaseNode file: line:472
		pybind11::class_<asmjit::BaseNode, std::shared_ptr<asmjit::BaseNode>> cl(M("asmjit"), "BaseNode", "Base node.\n\n Every node represents a building-block used by  It can be instruction, data, label, comment,\n directive, or any other high-level representation that can be transformed to the building blocks mentioned.\n Every class that inherits  can define its own high-level nodes that can be later lowered to\n basic nodes like instructions.");
		cl.def( pybind11::init( [](class asmjit::BaseBuilder * a0, enum asmjit::NodeType const & a1){ return new asmjit::BaseNode(a0, a1); } ), "doc" , pybind11::arg("cb"), pybind11::arg("nodeType"));
		cl.def( pybind11::init<class asmjit::BaseBuilder *, enum asmjit::NodeType, enum asmjit::NodeFlags>(), pybind11::arg("cb"), pybind11::arg("nodeType"), pybind11::arg("nodeFlags") );


		cl.def("prev", (class asmjit::BaseNode * (asmjit::BaseNode::*)() const) &asmjit::BaseNode::prev, "Returns previous node or `nullptr` if this node is either first or not\n part of Builder/Compiler node-list.\n\nC++: asmjit::BaseNode::prev() const --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic);
		cl.def("next", (class asmjit::BaseNode * (asmjit::BaseNode::*)() const) &asmjit::BaseNode::next, "Returns next node or `nullptr` if this node is either last or not part\n of Builder/Compiler node-list.\n\nC++: asmjit::BaseNode::next() const --> class asmjit::BaseNode *", pybind11::return_value_policy::automatic);
		cl.def("type", (enum asmjit::NodeType (asmjit::BaseNode::*)() const) &asmjit::BaseNode::type, "Returns the type of the node, see `NodeType`.\n\nC++: asmjit::BaseNode::type() const --> enum asmjit::NodeType");
		cl.def("setType", (void (asmjit::BaseNode::*)(enum asmjit::NodeType)) &asmjit::BaseNode::setType, "Sets the type of the node, see `NodeType` (internal).\n\n \n You should never set a type of a node to anything else than the initial value. This function is only\n provided for users that use custom nodes and need to change the type either during construction or later.\n\nC++: asmjit::BaseNode::setType(enum asmjit::NodeType) --> void", pybind11::arg("type"));
		cl.def("isInst", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isInst, "Tests whether this node is either `InstNode` or extends it.\n\nC++: asmjit::BaseNode::isInst() const --> bool");
		cl.def("isSection", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isSection, "Tests whether this node is `SectionNode`.\n\nC++: asmjit::BaseNode::isSection() const --> bool");
		cl.def("isLabel", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isLabel, "Tests whether this node is either `LabelNode` or extends it.\n\nC++: asmjit::BaseNode::isLabel() const --> bool");
		cl.def("isAlign", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isAlign, "Tests whether this node is `AlignNode`.\n\nC++: asmjit::BaseNode::isAlign() const --> bool");
		cl.def("isEmbedData", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isEmbedData, "Tests whether this node is `EmbedDataNode`.\n\nC++: asmjit::BaseNode::isEmbedData() const --> bool");
		cl.def("isEmbedLabel", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isEmbedLabel, "Tests whether this node is `EmbedLabelNode`.\n\nC++: asmjit::BaseNode::isEmbedLabel() const --> bool");
		cl.def("isEmbedLabelDelta", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isEmbedLabelDelta, "Tests whether this node is `EmbedLabelDeltaNode`.\n\nC++: asmjit::BaseNode::isEmbedLabelDelta() const --> bool");
		cl.def("isConstPool", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isConstPool, "Tests whether this node is `ConstPoolNode`.\n\nC++: asmjit::BaseNode::isConstPool() const --> bool");
		cl.def("isComment", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isComment, "Tests whether this node is `CommentNode`.\n\nC++: asmjit::BaseNode::isComment() const --> bool");
		cl.def("isSentinel", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isSentinel, "Tests whether this node is `SentinelNode`.\n\nC++: asmjit::BaseNode::isSentinel() const --> bool");
		cl.def("isFunc", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isFunc, "Tests whether this node is `FuncNode`.\n\nC++: asmjit::BaseNode::isFunc() const --> bool");
		cl.def("isFuncRet", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isFuncRet, "Tests whether this node is `FuncRetNode`.\n\nC++: asmjit::BaseNode::isFuncRet() const --> bool");
		cl.def("isInvoke", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isInvoke, "Tests whether this node is `InvokeNode`.\n\nC++: asmjit::BaseNode::isInvoke() const --> bool");
		cl.def("flags", (enum asmjit::NodeFlags (asmjit::BaseNode::*)() const) &asmjit::BaseNode::flags, "Returns the node flags.\n\nC++: asmjit::BaseNode::flags() const --> enum asmjit::NodeFlags");
		cl.def("hasFlag", (bool (asmjit::BaseNode::*)(enum asmjit::NodeFlags) const) &asmjit::BaseNode::hasFlag, "Tests whether the node has the given `flag` set.\n\nC++: asmjit::BaseNode::hasFlag(enum asmjit::NodeFlags) const --> bool", pybind11::arg("flag"));
		cl.def("setFlags", (void (asmjit::BaseNode::*)(enum asmjit::NodeFlags)) &asmjit::BaseNode::setFlags, "Replaces node flags with `flags`.\n\nC++: asmjit::BaseNode::setFlags(enum asmjit::NodeFlags) --> void", pybind11::arg("flags"));
		cl.def("addFlags", (void (asmjit::BaseNode::*)(enum asmjit::NodeFlags)) &asmjit::BaseNode::addFlags, "Adds the given `flags` to node flags.\n\nC++: asmjit::BaseNode::addFlags(enum asmjit::NodeFlags) --> void", pybind11::arg("flags"));
		cl.def("clearFlags", (void (asmjit::BaseNode::*)(enum asmjit::NodeFlags)) &asmjit::BaseNode::clearFlags, "Clears the given `flags` from node flags.\n\nC++: asmjit::BaseNode::clearFlags(enum asmjit::NodeFlags) --> void", pybind11::arg("flags"));
		cl.def("isCode", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isCode, "Tests whether the node is code that can be executed.\n\nC++: asmjit::BaseNode::isCode() const --> bool");
		cl.def("isData", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isData, "Tests whether the node is data that cannot be executed.\n\nC++: asmjit::BaseNode::isData() const --> bool");
		cl.def("isInformative", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isInformative, "Tests whether the node is informative only (is never encoded like comment, etc...).\n\nC++: asmjit::BaseNode::isInformative() const --> bool");
		cl.def("isRemovable", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isRemovable, "Tests whether the node is removable if it's in an unreachable code block.\n\nC++: asmjit::BaseNode::isRemovable() const --> bool");
		cl.def("hasNoEffect", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::hasNoEffect, "Tests whether the node has no effect when executed (label, .align, nop, ...).\n\nC++: asmjit::BaseNode::hasNoEffect() const --> bool");
		cl.def("isActive", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::isActive, "Tests whether the node is part of the code.\n\nC++: asmjit::BaseNode::isActive() const --> bool");
		cl.def("hasPosition", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::hasPosition, "Tests whether the node has a position assigned.\n\n \n Returns `true` if node position is non-zero.\n\nC++: asmjit::BaseNode::hasPosition() const --> bool");
		cl.def("position", (unsigned int (asmjit::BaseNode::*)() const) &asmjit::BaseNode::position, "Returns node position.\n\nC++: asmjit::BaseNode::position() const --> unsigned int");
		cl.def("setPosition", (void (asmjit::BaseNode::*)(unsigned int)) &asmjit::BaseNode::setPosition, "Sets node position.\n\n Node position is a 32-bit unsigned integer that is used by Compiler to track where the node is relatively to\n the start of the function. It doesn't describe a byte position in a binary, instead it's just a pseudo position\n used by liveness analysis and other tools around Compiler.\n\n If you don't use Compiler then you may use `position()` and `setPosition()` freely for your own purposes if\n the 32-bit value limit is okay for you.\n\nC++: asmjit::BaseNode::setPosition(unsigned int) --> void", pybind11::arg("position"));
		cl.def("userDataAsInt64", (long (asmjit::BaseNode::*)() const) &asmjit::BaseNode::userDataAsInt64, "Returns user data casted to `int64_t`.\n\nC++: asmjit::BaseNode::userDataAsInt64() const --> long");
		cl.def("userDataAsUInt64", (unsigned long (asmjit::BaseNode::*)() const) &asmjit::BaseNode::userDataAsUInt64, "Returns user data casted to `uint64_t`.\n\nC++: asmjit::BaseNode::userDataAsUInt64() const --> unsigned long");
		cl.def("setUserDataAsInt64", (void (asmjit::BaseNode::*)(long)) &asmjit::BaseNode::setUserDataAsInt64, "Sets used data to the given 64-bit signed `value`.\n\nC++: asmjit::BaseNode::setUserDataAsInt64(long) --> void", pybind11::arg("value"));
		cl.def("setUserDataAsUInt64", (void (asmjit::BaseNode::*)(unsigned long)) &asmjit::BaseNode::setUserDataAsUInt64, "Sets used data to the given 64-bit unsigned `value`.\n\nC++: asmjit::BaseNode::setUserDataAsUInt64(unsigned long) --> void", pybind11::arg("value"));
		cl.def("resetUserData", (void (asmjit::BaseNode::*)()) &asmjit::BaseNode::resetUserData, "Resets user data to zero / nullptr.\n\nC++: asmjit::BaseNode::resetUserData() --> void");
		cl.def("hasPassData", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::hasPassData, "Tests whether the node has an associated pass data.\n\nC++: asmjit::BaseNode::hasPassData() const --> bool");
		cl.def("resetPassData", (void (asmjit::BaseNode::*)()) &asmjit::BaseNode::resetPassData, "Resets the node pass data to nullptr.\n\nC++: asmjit::BaseNode::resetPassData() --> void");
		cl.def("hasInlineComment", (bool (asmjit::BaseNode::*)() const) &asmjit::BaseNode::hasInlineComment, "Tests whether the node has an inline comment/annotation.\n\nC++: asmjit::BaseNode::hasInlineComment() const --> bool");
		cl.def("inlineComment", (const char * (asmjit::BaseNode::*)() const) &asmjit::BaseNode::inlineComment, "Returns an inline comment/annotation string.\n\nC++: asmjit::BaseNode::inlineComment() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("setInlineComment", (void (asmjit::BaseNode::*)(const char *)) &asmjit::BaseNode::setInlineComment, "Sets an inline comment/annotation string to `s`.\n\nC++: asmjit::BaseNode::setInlineComment(const char *) --> void", pybind11::arg("s"));
		cl.def("resetInlineComment", (void (asmjit::BaseNode::*)()) &asmjit::BaseNode::resetInlineComment, "Resets an inline comment/annotation string to nullptr.\n\nC++: asmjit::BaseNode::resetInlineComment() --> void");

		{ // asmjit::BaseNode::(anonymous union at extern/asmjit/src/asmjit/./core/builder.h:479:3) file: line:479

			{ // asmjit::BaseNode::(anonymous union)::(anonymous struct at extern/asmjit/src/asmjit/./core/builder.h:480:5) file: line:480
			}

		}

		{ // asmjit::BaseNode::AnyData file: line:491
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::BaseNode::AnyData, std::shared_ptr<asmjit::BaseNode::AnyData>> cl(enclosing_class, "AnyData", "Data shared between all types of nodes.");
			cl.def( pybind11::init( [](){ return new asmjit::BaseNode::AnyData(); } ) );
			cl.def( pybind11::init( [](asmjit::BaseNode::AnyData const &o){ return new asmjit::BaseNode::AnyData(o); } ) );




			cl.def("assign", (struct asmjit::BaseNode::AnyData & (asmjit::BaseNode::AnyData::*)(const struct asmjit::BaseNode::AnyData &)) &asmjit::BaseNode::AnyData::operator=, "C++: asmjit::BaseNode::AnyData::operator=(const struct asmjit::BaseNode::AnyData &) --> struct asmjit::BaseNode::AnyData &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::BaseNode::AlignData file: line:503
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::BaseNode::AlignData, std::shared_ptr<asmjit::BaseNode::AlignData>> cl(enclosing_class, "AlignData", "Data used by ");
			cl.def( pybind11::init( [](){ return new asmjit::BaseNode::AlignData(); } ) );
			cl.def( pybind11::init( [](asmjit::BaseNode::AlignData const &o){ return new asmjit::BaseNode::AlignData(o); } ) );




			cl.def("assign", (struct asmjit::BaseNode::AlignData & (asmjit::BaseNode::AlignData::*)(const struct asmjit::BaseNode::AlignData &)) &asmjit::BaseNode::AlignData::operator=, "C++: asmjit::BaseNode::AlignData::operator=(const struct asmjit::BaseNode::AlignData &) --> struct asmjit::BaseNode::AlignData &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::BaseNode::InstData file: line:515
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::BaseNode::InstData, std::shared_ptr<asmjit::BaseNode::InstData>> cl(enclosing_class, "InstData", "Data used by ");
			cl.def( pybind11::init( [](){ return new asmjit::BaseNode::InstData(); } ) );
			cl.def( pybind11::init( [](asmjit::BaseNode::InstData const &o){ return new asmjit::BaseNode::InstData(o); } ) );




			cl.def("assign", (struct asmjit::BaseNode::InstData & (asmjit::BaseNode::InstData::*)(const struct asmjit::BaseNode::InstData &)) &asmjit::BaseNode::InstData::operator=, "C++: asmjit::BaseNode::InstData::operator=(const struct asmjit::BaseNode::InstData &) --> struct asmjit::BaseNode::InstData &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::BaseNode::EmbedData file: line:527
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::BaseNode::EmbedData, std::shared_ptr<asmjit::BaseNode::EmbedData>> cl(enclosing_class, "EmbedData", "Data used by ");
			cl.def( pybind11::init( [](){ return new asmjit::BaseNode::EmbedData(); } ) );
			cl.def( pybind11::init( [](asmjit::BaseNode::EmbedData const &o){ return new asmjit::BaseNode::EmbedData(o); } ) );




			cl.def("assign", (struct asmjit::BaseNode::EmbedData & (asmjit::BaseNode::EmbedData::*)(const struct asmjit::BaseNode::EmbedData &)) &asmjit::BaseNode::EmbedData::operator=, "C++: asmjit::BaseNode::EmbedData::operator=(const struct asmjit::BaseNode::EmbedData &) --> struct asmjit::BaseNode::EmbedData &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::BaseNode::SentinelData file: line:539
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::BaseNode::SentinelData, std::shared_ptr<asmjit::BaseNode::SentinelData>> cl(enclosing_class, "SentinelData", "Data used by ");
			cl.def( pybind11::init( [](){ return new asmjit::BaseNode::SentinelData(); } ) );
			cl.def( pybind11::init( [](asmjit::BaseNode::SentinelData const &o){ return new asmjit::BaseNode::SentinelData(o); } ) );




			cl.def("assign", (struct asmjit::BaseNode::SentinelData & (asmjit::BaseNode::SentinelData::*)(const struct asmjit::BaseNode::SentinelData &)) &asmjit::BaseNode::SentinelData::operator=, "C++: asmjit::BaseNode::SentinelData::operator=(const struct asmjit::BaseNode::SentinelData &) --> struct asmjit::BaseNode::SentinelData &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::BaseNode::(anonymous union at extern/asmjit/src/asmjit/./core/builder.h:551:3) file: line:551





		}

		{ // asmjit::BaseNode::(anonymous union at extern/asmjit/src/asmjit/./core/builder.h:568:3) file: line:568

		}

	}
}
