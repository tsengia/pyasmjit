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

void bind_unknown_unknown_51(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::x86::Mem file: line:680
		pybind11::class_<asmjit::x86::Mem, std::shared_ptr<asmjit::x86::Mem>, asmjit::BaseMem> cl(M("asmjit::x86"), "Mem", "Memory operand specific to X86 and X86_64 architecture.");
		cl.def( pybind11::init( [](){ return new asmjit::x86::Mem(); } ) );
		cl.def( pybind11::init( [](asmjit::x86::Mem const &o){ return new asmjit::x86::Mem(o); } ) );
		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );

		cl.def( pybind11::init<const struct asmjit::OperandSignature &, unsigned int, unsigned int, int>(), pybind11::arg("signature"), pybind11::arg("baseId"), pybind11::arg("indexId"), pybind11::arg("offset") );

		cl.def( pybind11::init( [](const class asmjit::Label & a0, int const & a1){ return new asmjit::x86::Mem(a0, a1); } ), "doc" , pybind11::arg("base"), pybind11::arg("off"));
		cl.def( pybind11::init( [](const class asmjit::Label & a0, int const & a1, unsigned int const & a2){ return new asmjit::x86::Mem(a0, a1, a2); } ), "doc" , pybind11::arg("base"), pybind11::arg("off"), pybind11::arg("size"));
		cl.def( pybind11::init<const class asmjit::Label &, int, unsigned int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("off"), pybind11::arg("size"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](const class asmjit::Label & a0, const class asmjit::BaseReg & a1, unsigned int const & a2, int const & a3){ return new asmjit::x86::Mem(a0, a1, a2, a3); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("off"));
		cl.def( pybind11::init( [](const class asmjit::Label & a0, const class asmjit::BaseReg & a1, unsigned int const & a2, int const & a3, unsigned int const & a4){ return new asmjit::x86::Mem(a0, a1, a2, a3, a4); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("off"), pybind11::arg("size"));
		cl.def( pybind11::init<const class asmjit::Label &, const class asmjit::BaseReg &, unsigned int, int, unsigned int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("off"), pybind11::arg("size"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0, int const & a1){ return new asmjit::x86::Mem(a0, a1); } ), "doc" , pybind11::arg("base"), pybind11::arg("off"));
		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0, int const & a1, unsigned int const & a2){ return new asmjit::x86::Mem(a0, a1, a2); } ), "doc" , pybind11::arg("base"), pybind11::arg("off"), pybind11::arg("size"));
		cl.def( pybind11::init<const class asmjit::BaseReg &, int, unsigned int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("off"), pybind11::arg("size"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0, const class asmjit::BaseReg & a1, unsigned int const & a2, int const & a3){ return new asmjit::x86::Mem(a0, a1, a2, a3); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("off"));
		cl.def( pybind11::init( [](const class asmjit::BaseReg & a0, const class asmjit::BaseReg & a1, unsigned int const & a2, int const & a3, unsigned int const & a4){ return new asmjit::x86::Mem(a0, a1, a2, a3, a4); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("off"), pybind11::arg("size"));
		cl.def( pybind11::init<const class asmjit::BaseReg &, const class asmjit::BaseReg &, unsigned int, int, unsigned int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("off"), pybind11::arg("size"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new asmjit::x86::Mem(a0); } ), "doc" , pybind11::arg("base"));
		cl.def( pybind11::init( [](unsigned long const & a0, unsigned int const & a1){ return new asmjit::x86::Mem(a0, a1); } ), "doc" , pybind11::arg("base"), pybind11::arg("size"));
		cl.def( pybind11::init<unsigned long, unsigned int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("size"), pybind11::arg("signature") );

		cl.def( pybind11::init( [](unsigned long const & a0, const class asmjit::BaseReg & a1){ return new asmjit::x86::Mem(a0, a1); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"));
		cl.def( pybind11::init( [](unsigned long const & a0, const class asmjit::BaseReg & a1, unsigned int const & a2){ return new asmjit::x86::Mem(a0, a1, a2); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"));
		cl.def( pybind11::init( [](unsigned long const & a0, const class asmjit::BaseReg & a1, unsigned int const & a2, unsigned int const & a3){ return new asmjit::x86::Mem(a0, a1, a2, a3); } ), "doc" , pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"));
		cl.def( pybind11::init<unsigned long, const class asmjit::BaseReg &, unsigned int, unsigned int, struct asmjit::OperandSignature>(), pybind11::arg("base"), pybind11::arg("index"), pybind11::arg("shift"), pybind11::arg("size"), pybind11::arg("signature") );


		pybind11::enum_<asmjit::x86::Mem::AdditionalBits>(cl, "AdditionalBits", pybind11::arithmetic(), "Additional bits of operand's signature used by `x86::Mem`.")
			.value("kSignatureMemAddrTypeShift", asmjit::x86::Mem::kSignatureMemAddrTypeShift)
			.value("kSignatureMemAddrTypeMask", asmjit::x86::Mem::kSignatureMemAddrTypeMask)
			.value("kSignatureMemShiftValueShift", asmjit::x86::Mem::kSignatureMemShiftValueShift)
			.value("kSignatureMemShiftValueMask", asmjit::x86::Mem::kSignatureMemShiftValueMask)
			.value("kSignatureMemSegmentShift", asmjit::x86::Mem::kSignatureMemSegmentShift)
			.value("kSignatureMemSegmentMask", asmjit::x86::Mem::kSignatureMemSegmentMask)
			.value("kSignatureMemBroadcastShift", asmjit::x86::Mem::kSignatureMemBroadcastShift)
			.value("kSignatureMemBroadcastMask", asmjit::x86::Mem::kSignatureMemBroadcastMask)
			.export_values();


		pybind11::enum_<asmjit::x86::Mem::AddrType>(cl, "AddrType", "Address type.")
			.value("kDefault", asmjit::x86::Mem::AddrType::kDefault)
			.value("kAbs", asmjit::x86::Mem::AddrType::kAbs)
			.value("kRel", asmjit::x86::Mem::AddrType::kRel)
			.value("kMaxValue", asmjit::x86::Mem::AddrType::kMaxValue);


		pybind11::enum_<asmjit::x86::Mem::Broadcast>(cl, "Broadcast", "Memory broadcast type.")
			.value("kNone", asmjit::x86::Mem::Broadcast::kNone)
			.value("k1To2", asmjit::x86::Mem::Broadcast::k1To2)
			.value("k1To4", asmjit::x86::Mem::Broadcast::k1To4)
			.value("k1To8", asmjit::x86::Mem::Broadcast::k1To8)
			.value("k1To16", asmjit::x86::Mem::Broadcast::k1To16)
			.value("k1To32", asmjit::x86::Mem::Broadcast::k1To32)
			.value("k1To64", asmjit::x86::Mem::Broadcast::k1To64)
			.value("kMaxValue", asmjit::x86::Mem::Broadcast::kMaxValue);

		cl.def("setIndex", [](asmjit::x86::Mem &o, const class asmjit::BaseReg & a0) -> void { return o.setIndex(a0); }, "", pybind11::arg("index"));
		cl.def("assign", (class asmjit::x86::Mem & (asmjit::x86::Mem::*)(const class asmjit::x86::Mem &)) &asmjit::x86::Mem::operator=, "\\{\n\nC++: asmjit::x86::Mem::operator=(const class asmjit::x86::Mem &) --> class asmjit::x86::Mem &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("clone", (class asmjit::x86::Mem (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::clone, "Clones the memory operand.\n\nC++: asmjit::x86::Mem::clone() const --> class asmjit::x86::Mem");
		cl.def("cloneAdjusted", (class asmjit::x86::Mem (asmjit::x86::Mem::*)(long) const) &asmjit::x86::Mem::cloneAdjusted, "Creates a copy of this memory operand adjusted by `off`.\n\nC++: asmjit::x86::Mem::cloneAdjusted(long) const --> class asmjit::x86::Mem", pybind11::arg("off"));
		cl.def("cloneResized", (class asmjit::x86::Mem (asmjit::x86::Mem::*)(unsigned int) const) &asmjit::x86::Mem::cloneResized, "Creates a copy of this memory operand resized to `size`.\n\nC++: asmjit::x86::Mem::cloneResized(unsigned int) const --> class asmjit::x86::Mem", pybind11::arg("size"));
		cl.def("cloneBroadcasted", (class asmjit::x86::Mem (asmjit::x86::Mem::*)(enum asmjit::x86::Mem::Broadcast) const) &asmjit::x86::Mem::cloneBroadcasted, "Creates a copy of this memory operand with a broadcast `bcst`.\n\nC++: asmjit::x86::Mem::cloneBroadcasted(enum asmjit::x86::Mem::Broadcast) const --> class asmjit::x86::Mem", pybind11::arg("bcst"));
		cl.def("baseReg", (class asmjit::x86::Reg (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::baseReg, "Converts memory `baseType` and `baseId` to `x86::Reg` instance.\n\n The memory must have a valid base register otherwise the result will be wrong.\n\nC++: asmjit::x86::Mem::baseReg() const --> class asmjit::x86::Reg");
		cl.def("indexReg", (class asmjit::x86::Reg (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::indexReg, "Converts memory `indexType` and `indexId` to `x86::Reg` instance.\n\n The memory must have a valid index register otherwise the result will be wrong.\n\nC++: asmjit::x86::Mem::indexReg() const --> class asmjit::x86::Reg");
		cl.def("setIndex", (void (asmjit::x86::Mem::*)(const class asmjit::BaseReg &, unsigned int)) &asmjit::x86::Mem::setIndex, "C++: asmjit::x86::Mem::setIndex(const class asmjit::BaseReg &, unsigned int) --> void", pybind11::arg("index"), pybind11::arg("shift"));
		cl.def("hasSize", (bool (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::hasSize, "Tests whether the memory operand specifies a size (i.e. the size is not zero).\n\nC++: asmjit::x86::Mem::hasSize() const --> bool");
		cl.def("hasSize", (bool (asmjit::x86::Mem::*)(unsigned int) const) &asmjit::x86::Mem::hasSize, "Tests whether the memory operand size matches size `s`.\n\nC++: asmjit::x86::Mem::hasSize(unsigned int) const --> bool", pybind11::arg("s"));
		cl.def("size", (unsigned int (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::size, "Returns the size of the memory operand in bytes.\n\n \n Most instructions would deduce the size of the memory operand, so in most cases it's expected that the\n returned value would be zero. However, some instruction require the size to select between multiple variations,\n so in some cases size is required would be non-zero (for example `inc [mem], immediate` requires size to\n distinguish between 8-bit, 16-bit, 32-bit, and 64-bit increments.\n\nC++: asmjit::x86::Mem::size() const --> unsigned int");
		cl.def("setSize", (void (asmjit::x86::Mem::*)(unsigned int)) &asmjit::x86::Mem::setSize, "Sets the memory operand size (in bytes).\n\nC++: asmjit::x86::Mem::setSize(unsigned int) --> void", pybind11::arg("size"));
		cl.def("addrType", (enum asmjit::x86::Mem::AddrType (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::addrType, "Returns the address type of the memory operand.\n\n By default, address type of newly created memory operands is always \n\nC++: asmjit::x86::Mem::addrType() const --> enum asmjit::x86::Mem::AddrType");
		cl.def("setAddrType", (void (asmjit::x86::Mem::*)(enum asmjit::x86::Mem::AddrType)) &asmjit::x86::Mem::setAddrType, "Sets the address type to `addrType`.\n\nC++: asmjit::x86::Mem::setAddrType(enum asmjit::x86::Mem::AddrType) --> void", pybind11::arg("addrType"));
		cl.def("resetAddrType", (void (asmjit::x86::Mem::*)()) &asmjit::x86::Mem::resetAddrType, "Resets the address type to \n\nC++: asmjit::x86::Mem::resetAddrType() --> void");
		cl.def("isAbs", (bool (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::isAbs, "Tests whether the address type is \n\nC++: asmjit::x86::Mem::isAbs() const --> bool");
		cl.def("setAbs", (void (asmjit::x86::Mem::*)()) &asmjit::x86::Mem::setAbs, "Sets the address type to \n\nC++: asmjit::x86::Mem::setAbs() --> void");
		cl.def("isRel", (bool (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::isRel, "Tests whether the address type is \n\nC++: asmjit::x86::Mem::isRel() const --> bool");
		cl.def("setRel", (void (asmjit::x86::Mem::*)()) &asmjit::x86::Mem::setRel, "Sets the address type to \n\nC++: asmjit::x86::Mem::setRel() --> void");
		cl.def("hasSegment", (bool (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::hasSegment, "Tests whether the memory operand has a segment override.\n\nC++: asmjit::x86::Mem::hasSegment() const --> bool");
		cl.def("segment", (class asmjit::x86::SReg (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::segment, "Returns the associated segment override as `SReg` operand.\n\nC++: asmjit::x86::Mem::segment() const --> class asmjit::x86::SReg");
		cl.def("segmentId", (unsigned int (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::segmentId, "Returns segment override register id, see `SReg::Id`.\n\nC++: asmjit::x86::Mem::segmentId() const --> unsigned int");
		cl.def("setSegment", (void (asmjit::x86::Mem::*)(const class asmjit::x86::SReg &)) &asmjit::x86::Mem::setSegment, "Sets the segment override to `seg`.\n\nC++: asmjit::x86::Mem::setSegment(const class asmjit::x86::SReg &) --> void", pybind11::arg("seg"));
		cl.def("setSegment", (void (asmjit::x86::Mem::*)(unsigned int)) &asmjit::x86::Mem::setSegment, "Sets the segment override to `id`.\n\nC++: asmjit::x86::Mem::setSegment(unsigned int) --> void", pybind11::arg("rId"));
		cl.def("resetSegment", (void (asmjit::x86::Mem::*)()) &asmjit::x86::Mem::resetSegment, "Resets the segment override.\n\nC++: asmjit::x86::Mem::resetSegment() --> void");
		cl.def("hasShift", (bool (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::hasShift, "Tests whether the memory operand has shift (aka scale) value.\n\nC++: asmjit::x86::Mem::hasShift() const --> bool");
		cl.def("shift", (unsigned int (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::shift, "Returns the memory operand's shift (aka scale) value.\n\nC++: asmjit::x86::Mem::shift() const --> unsigned int");
		cl.def("setShift", (void (asmjit::x86::Mem::*)(unsigned int)) &asmjit::x86::Mem::setShift, "Sets the memory operand's shift (aka scale) value.\n\nC++: asmjit::x86::Mem::setShift(unsigned int) --> void", pybind11::arg("shift"));
		cl.def("resetShift", (void (asmjit::x86::Mem::*)()) &asmjit::x86::Mem::resetShift, "Resets the memory operand's shift (aka scale) value to zero.\n\nC++: asmjit::x86::Mem::resetShift() --> void");
		cl.def("hasBroadcast", (bool (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::hasBroadcast, "Tests whether the memory operand has broadcast {1tox}.\n\nC++: asmjit::x86::Mem::hasBroadcast() const --> bool");
		cl.def("getBroadcast", (enum asmjit::x86::Mem::Broadcast (asmjit::x86::Mem::*)() const) &asmjit::x86::Mem::getBroadcast, "Returns the memory operand's broadcast.\n\nC++: asmjit::x86::Mem::getBroadcast() const --> enum asmjit::x86::Mem::Broadcast");
		cl.def("setBroadcast", (void (asmjit::x86::Mem::*)(enum asmjit::x86::Mem::Broadcast)) &asmjit::x86::Mem::setBroadcast, "Sets the memory operand's broadcast.\n\nC++: asmjit::x86::Mem::setBroadcast(enum asmjit::x86::Mem::Broadcast) --> void", pybind11::arg("b"));
		cl.def("resetBroadcast", (void (asmjit::x86::Mem::*)()) &asmjit::x86::Mem::resetBroadcast, "Resets the memory operand's broadcast to none.\n\nC++: asmjit::x86::Mem::resetBroadcast() --> void");







	}
}
