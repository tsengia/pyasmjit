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
	// asmjit::SectionFlags file: line:116
	pybind11::enum_<asmjit::SectionFlags>(M("asmjit"), "SectionFlags", "Section flags, used by ")
		.value("kNone", asmjit::SectionFlags::kNone)
		.value("kExecutable", asmjit::SectionFlags::kExecutable)
		.value("kReadOnly", asmjit::SectionFlags::kReadOnly)
		.value("kZeroInitialized", asmjit::SectionFlags::kZeroInitialized)
		.value("kComment", asmjit::SectionFlags::kComment)
		.value("kImplicit", asmjit::SectionFlags::kImplicit);

;

	// asmjit::CopySectionFlags file: line:133
	pybind11::enum_<asmjit::CopySectionFlags>(M("asmjit"), "CopySectionFlags", "Flags that can be used with  and ")
		.value("kNone", asmjit::CopySectionFlags::kNone)
		.value("kPadSectionBuffer", asmjit::CopySectionFlags::kPadSectionBuffer)
		.value("kPadTargetBuffer", asmjit::CopySectionFlags::kPadTargetBuffer);

;

	{ // asmjit::Section file: line:150
		pybind11::class_<asmjit::Section, std::shared_ptr<asmjit::Section>> cl(M("asmjit"), "Section", "Section entry.");
		cl.def( pybind11::init( [](){ return new asmjit::Section(); } ) );








		cl.def("id", (unsigned int (asmjit::Section::*)() const) &asmjit::Section::id, "Returns the section id.\n\nC++: asmjit::Section::id() const --> unsigned int");
		cl.def("name", (const char * (asmjit::Section::*)() const) &asmjit::Section::name, "Returns the section name, as a null terminated string.\n\nC++: asmjit::Section::name() const --> const char *", pybind11::return_value_policy::automatic);
		cl.def("data", (unsigned char * (asmjit::Section::*)()) &asmjit::Section::data, "Returns the section data.\n\nC++: asmjit::Section::data() --> unsigned char *", pybind11::return_value_policy::automatic);
		cl.def("flags", (enum asmjit::SectionFlags (asmjit::Section::*)() const) &asmjit::Section::flags, "Returns the section flags.\n\nC++: asmjit::Section::flags() const --> enum asmjit::SectionFlags");
		cl.def("hasFlag", (bool (asmjit::Section::*)(enum asmjit::SectionFlags) const) &asmjit::Section::hasFlag, "Tests whether the section has the given `flag`.\n\nC++: asmjit::Section::hasFlag(enum asmjit::SectionFlags) const --> bool", pybind11::arg("flag"));
		cl.def("addFlags", (void (asmjit::Section::*)(enum asmjit::SectionFlags)) &asmjit::Section::addFlags, "Adds `flags` to the section flags.\n\nC++: asmjit::Section::addFlags(enum asmjit::SectionFlags) --> void", pybind11::arg("flags"));
		cl.def("clearFlags", (void (asmjit::Section::*)(enum asmjit::SectionFlags)) &asmjit::Section::clearFlags, "Removes `flags` from the section flags.\n\nC++: asmjit::Section::clearFlags(enum asmjit::SectionFlags) --> void", pybind11::arg("flags"));
		cl.def("alignment", (unsigned int (asmjit::Section::*)() const) &asmjit::Section::alignment, "Returns the minimum section alignment\n\nC++: asmjit::Section::alignment() const --> unsigned int");
		cl.def("setAlignment", (void (asmjit::Section::*)(unsigned int)) &asmjit::Section::setAlignment, "Sets the minimum section alignment\n\nC++: asmjit::Section::setAlignment(unsigned int) --> void", pybind11::arg("alignment"));
		cl.def("order", (int (asmjit::Section::*)() const) &asmjit::Section::order, "Returns the section order, which has a higher priority than section id.\n\nC++: asmjit::Section::order() const --> int");
		cl.def("offset", (unsigned long (asmjit::Section::*)() const) &asmjit::Section::offset, "Returns the section offset, relative to base.\n\nC++: asmjit::Section::offset() const --> unsigned long");
		cl.def("setOffset", (void (asmjit::Section::*)(unsigned long)) &asmjit::Section::setOffset, "Set the section offset.\n\nC++: asmjit::Section::setOffset(unsigned long) --> void", pybind11::arg("offset"));
		cl.def("virtualSize", (unsigned long (asmjit::Section::*)() const) &asmjit::Section::virtualSize, "Returns the virtual size of the section.\n\n Virtual size is initially zero and is never changed by AsmJit. It's normal if virtual size is smaller than\n size returned by `bufferSize()` as the buffer stores real data emitted by assemblers or appended by users.\n\n Use `realSize()` to get the real and final size of this section.\n\nC++: asmjit::Section::virtualSize() const --> unsigned long");
		cl.def("setVirtualSize", (void (asmjit::Section::*)(unsigned long)) &asmjit::Section::setVirtualSize, "Sets the virtual size of the section.\n\nC++: asmjit::Section::setVirtualSize(unsigned long) --> void", pybind11::arg("virtualSize"));
		cl.def("bufferSize", (unsigned long (asmjit::Section::*)() const) &asmjit::Section::bufferSize, "Returns the buffer size of the section.\n\nC++: asmjit::Section::bufferSize() const --> unsigned long");
		cl.def("realSize", (unsigned long (asmjit::Section::*)() const) &asmjit::Section::realSize, "Returns the real size of the section calculated from virtual and buffer sizes.\n\nC++: asmjit::Section::realSize() const --> unsigned long");
		cl.def("buffer", (struct asmjit::CodeBuffer & (asmjit::Section::*)()) &asmjit::Section::buffer, "Returns the `CodeBuffer` used by this section.\n\nC++: asmjit::Section::buffer() --> struct asmjit::CodeBuffer &", pybind11::return_value_policy::automatic);
	}
	{ // asmjit::AddressTableEntry file: line:233
		pybind11::class_<asmjit::AddressTableEntry, std::shared_ptr<asmjit::AddressTableEntry>> cl(M("asmjit"), "AddressTableEntry", "Entry in an address table.");
		cl.def( pybind11::init<unsigned long>(), pybind11::arg("address") );



		cl.def("address", (unsigned long (asmjit::AddressTableEntry::*)() const) &asmjit::AddressTableEntry::address, "\\{\n\nC++: asmjit::AddressTableEntry::address() const --> unsigned long");
		cl.def("slot", (unsigned int (asmjit::AddressTableEntry::*)() const) &asmjit::AddressTableEntry::slot, "C++: asmjit::AddressTableEntry::slot() const --> unsigned int");
		cl.def("hasAssignedSlot", (bool (asmjit::AddressTableEntry::*)() const) &asmjit::AddressTableEntry::hasAssignedSlot, "C++: asmjit::AddressTableEntry::hasAssignedSlot() const --> bool");
	}
	// asmjit::OffsetType file: line:274
	pybind11::enum_<asmjit::OffsetType>(M("asmjit"), "OffsetType", "Offset format type, used by ")
		.value("kSignedOffset", asmjit::OffsetType::kSignedOffset)
		.value("kUnsignedOffset", asmjit::OffsetType::kUnsignedOffset)
		.value("kAArch64_ADR", asmjit::OffsetType::kAArch64_ADR)
		.value("kAArch64_ADRP", asmjit::OffsetType::kAArch64_ADRP)
		.value("kThumb32_ADR", asmjit::OffsetType::kThumb32_ADR)
		.value("kThumb32_BLX", asmjit::OffsetType::kThumb32_BLX)
		.value("kThumb32_B", asmjit::OffsetType::kThumb32_B)
		.value("kThumb32_BCond", asmjit::OffsetType::kThumb32_BCond)
		.value("kAArch32_ADR", asmjit::OffsetType::kAArch32_ADR)
		.value("kAArch32_U23_SignedOffset", asmjit::OffsetType::kAArch32_U23_SignedOffset)
		.value("kAArch32_U23_0To3At0_4To7At8", asmjit::OffsetType::kAArch32_U23_0To3At0_4To7At8)
		.value("kAArch32_1To24At0_0At24", asmjit::OffsetType::kAArch32_1To24At0_0At24)
		.value("kMaxValue", asmjit::OffsetType::kMaxValue);

;

	{ // asmjit::OffsetFormat file: line:392
		pybind11::class_<asmjit::OffsetFormat, std::shared_ptr<asmjit::OffsetFormat>> cl(M("asmjit"), "OffsetFormat", "Provides information about formatting offsets, absolute addresses, or their parts. Offset format is used by both\n  and  The illustration below describes the relation of region size and offset size.\n Region size is the size of the whole unit whereas offset size is the size of the unit that will be patched.\n\n ```\n +-> Code buffer |   The subject of the relocation (region)  |\n |               | (Word-Offset)  (Word-Size)                |\n |xxxxxxxxxxxxxxx|................|*PATCHED*|................|xxxxxxxxxxxx->\n                                  |         |\n     [Word Offset points here]----+         +--- [WordOffset + WordSize]\n ```\n\n Once the offset word has been located it can be patched like this:\n\n ```\n                               |ImmDiscardLSB (discard LSB bits).\n                               |..\n [0000000000000iiiiiiiiiiiiiiiiiDD] - Offset value (32-bit)\n [000000000000000iiiiiiiiiiiiiiiii] - Offset value after discard LSB.\n [00000000000iiiiiiiiiiiiiiiii0000] - Offset value shifted by ImmBitShift.\n [xxxxxxxxxxxiiiiiiiiiiiiiiiiixxxx] - Patched word (32-bit)\n             |...............|\n               (ImmBitCount) +- ImmBitShift\n ```");
		cl.def( pybind11::init( [](){ return new asmjit::OffsetFormat(); } ) );








		cl.def("type", (enum asmjit::OffsetType (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::type, "Returns the type of the offset.\n\nC++: asmjit::OffsetFormat::type() const --> enum asmjit::OffsetType");
		cl.def("hasSignBit", (bool (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::hasSignBit, "Returns whether the offset is encoded as an absolute value of the offset with additional field(s) that represent\n the sign (AArch32 U/N fields in the opcode).\n\n If true, the offset itself is always positive and a separate U/N field is used to indicate the sign of the offset\n (usually `U==1` means ADD, but sometimes `N==1` means negative offset, which implies SUB).\n\nC++: asmjit::OffsetFormat::hasSignBit() const --> bool");
		cl.def("flags", (unsigned int (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::flags, "Returns flags.\n\nC++: asmjit::OffsetFormat::flags() const --> unsigned int");
		cl.def("regionSize", (unsigned int (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::regionSize, "Returns the size of the region/instruction where the offset is encoded.\n\nC++: asmjit::OffsetFormat::regionSize() const --> unsigned int");
		cl.def("valueOffset", (unsigned int (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::valueOffset, "Returns the offset of the word relative to the start of the region where the offset is.\n\nC++: asmjit::OffsetFormat::valueOffset() const --> unsigned int");
		cl.def("valueSize", (unsigned int (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::valueSize, "Returns the size of the data-type (word) that contains the offset, in bytes.\n\nC++: asmjit::OffsetFormat::valueSize() const --> unsigned int");
		cl.def("immBitCount", (unsigned int (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::immBitCount, "Returns the count of bits of the offset value in the data it's stored in.\n\nC++: asmjit::OffsetFormat::immBitCount() const --> unsigned int");
		cl.def("immBitShift", (unsigned int (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::immBitShift, "Returns the bit-shift of the offset value in the data it's stored in.\n\nC++: asmjit::OffsetFormat::immBitShift() const --> unsigned int");
		cl.def("immDiscardLsb", (unsigned int (asmjit::OffsetFormat::*)() const) &asmjit::OffsetFormat::immDiscardLsb, "Returns the number of least significant bits of the offset value, that must be zero and that are not part of\n the encoded data.\n\nC++: asmjit::OffsetFormat::immDiscardLsb() const --> unsigned int");
		cl.def("resetToSimpleValue", (void (asmjit::OffsetFormat::*)(enum asmjit::OffsetType, unsigned long)) &asmjit::OffsetFormat::resetToSimpleValue, "Resets this offset format to a simple data value of `dataSize` bytes.\n\n The region will be the same size as data and immediate bits would correspond to `dataSize * 8`. There will be\n no immediate bit shift or discarded bits.\n\nC++: asmjit::OffsetFormat::resetToSimpleValue(enum asmjit::OffsetType, unsigned long) --> void", pybind11::arg("type"), pybind11::arg("valueSize"));
		cl.def("resetToImmValue", (void (asmjit::OffsetFormat::*)(enum asmjit::OffsetType, unsigned long, unsigned int, unsigned int, unsigned int)) &asmjit::OffsetFormat::resetToImmValue, "C++: asmjit::OffsetFormat::resetToImmValue(enum asmjit::OffsetType, unsigned long, unsigned int, unsigned int, unsigned int) --> void", pybind11::arg("type"), pybind11::arg("valueSize"), pybind11::arg("immBitShift"), pybind11::arg("immBitCount"), pybind11::arg("immDiscardLsb"));
		cl.def("setRegion", (void (asmjit::OffsetFormat::*)(unsigned long, unsigned long)) &asmjit::OffsetFormat::setRegion, "C++: asmjit::OffsetFormat::setRegion(unsigned long, unsigned long) --> void", pybind11::arg("regionSize"), pybind11::arg("valueOffset"));
		cl.def("setLeadingAndTrailingSize", (void (asmjit::OffsetFormat::*)(unsigned long, unsigned long)) &asmjit::OffsetFormat::setLeadingAndTrailingSize, "C++: asmjit::OffsetFormat::setLeadingAndTrailingSize(unsigned long, unsigned long) --> void", pybind11::arg("leadingSize"), pybind11::arg("trailingSize"));
	}
	// asmjit::RelocType file: line:499
	pybind11::enum_<asmjit::RelocType>(M("asmjit"), "RelocType", "Relocation type.")
		.value("kNone", asmjit::RelocType::kNone)
		.value("kExpression", asmjit::RelocType::kExpression)
		.value("kAbsToAbs", asmjit::RelocType::kAbsToAbs)
		.value("kRelToAbs", asmjit::RelocType::kRelToAbs)
		.value("kAbsToRel", asmjit::RelocType::kAbsToRel)
		.value("kX64AddressEntry", asmjit::RelocType::kX64AddressEntry);

;

	{ // asmjit::RelocEntry file: line:515
		pybind11::class_<asmjit::RelocEntry, std::shared_ptr<asmjit::RelocEntry>> cl(M("asmjit"), "RelocEntry", "Relocation entry.");
		cl.def( pybind11::init( [](){ return new asmjit::RelocEntry(); } ) );







		cl.def("id", (unsigned int (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::id, "\\{\n\nC++: asmjit::RelocEntry::id() const --> unsigned int");
		cl.def("relocType", (enum asmjit::RelocType (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::relocType, "C++: asmjit::RelocEntry::relocType() const --> enum asmjit::RelocType");
		cl.def("format", (const struct asmjit::OffsetFormat & (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::format, "C++: asmjit::RelocEntry::format() const --> const struct asmjit::OffsetFormat &", pybind11::return_value_policy::automatic);
		cl.def("sourceSectionId", (unsigned int (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::sourceSectionId, "C++: asmjit::RelocEntry::sourceSectionId() const --> unsigned int");
		cl.def("targetSectionId", (unsigned int (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::targetSectionId, "C++: asmjit::RelocEntry::targetSectionId() const --> unsigned int");
		cl.def("sourceOffset", (unsigned long (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::sourceOffset, "C++: asmjit::RelocEntry::sourceOffset() const --> unsigned long");
		cl.def("payload", (unsigned long (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::payload, "C++: asmjit::RelocEntry::payload() const --> unsigned long");
		cl.def("payloadAsExpression", (struct asmjit::Expression * (asmjit::RelocEntry::*)() const) &asmjit::RelocEntry::payloadAsExpression, "C++: asmjit::RelocEntry::payloadAsExpression() const --> struct asmjit::Expression *", pybind11::return_value_policy::automatic);
	}
	// asmjit::LabelType file: line:558
	pybind11::enum_<asmjit::LabelType>(M("asmjit"), "LabelType", "Type of the ")
		.value("kAnonymous", asmjit::LabelType::kAnonymous)
		.value("kLocal", asmjit::LabelType::kLocal)
		.value("kGlobal", asmjit::LabelType::kGlobal)
		.value("kExternal", asmjit::LabelType::kExternal)
		.value("kMaxValue", asmjit::LabelType::kMaxValue);

;

}
