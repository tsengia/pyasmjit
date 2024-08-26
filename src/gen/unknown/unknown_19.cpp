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

void bind_unknown_unknown_19(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // asmjit::CpuFeatures file: line:23
		pybind11::class_<asmjit::CpuFeatures, std::shared_ptr<asmjit::CpuFeatures>> cl(M("asmjit"), "CpuFeatures", "CPU features information.\n\n Each feature is represented by a single bit in an embedded bit array.");
		cl.def( pybind11::init( [](){ return new asmjit::CpuFeatures(); } ) );
		cl.def( pybind11::init( [](asmjit::CpuFeatures const &o){ return new asmjit::CpuFeatures(o); } ) );
		cl.def( pybind11::init<const struct asmjit::CpuFeatures::Data &>(), pybind11::arg("other") );

		cl.def( pybind11::init<struct asmjit::Globals::NoInit_>(), pybind11::arg("") );


		cl.def("data", (struct asmjit::CpuFeatures::X86 & (asmjit::CpuFeatures::*)()) &asmjit::CpuFeatures::data<asmjit::CpuFeatures::X86>, "C++: asmjit::CpuFeatures::data() --> struct asmjit::CpuFeatures::X86 &", pybind11::return_value_policy::automatic);
		cl.def("data", (struct asmjit::CpuFeatures::ARM & (asmjit::CpuFeatures::*)()) &asmjit::CpuFeatures::data<asmjit::CpuFeatures::ARM>, "C++: asmjit::CpuFeatures::data() --> struct asmjit::CpuFeatures::ARM &", pybind11::return_value_policy::automatic);
		cl.def("data", (const struct asmjit::CpuFeatures::X86 & (asmjit::CpuFeatures::*)() const) &asmjit::CpuFeatures::data<asmjit::CpuFeatures::X86>, "C++: asmjit::CpuFeatures::data() const --> const struct asmjit::CpuFeatures::X86 &", pybind11::return_value_policy::automatic);
		cl.def("data", (const struct asmjit::CpuFeatures::ARM & (asmjit::CpuFeatures::*)() const) &asmjit::CpuFeatures::data<asmjit::CpuFeatures::ARM>, "C++: asmjit::CpuFeatures::data() const --> const struct asmjit::CpuFeatures::ARM &", pybind11::return_value_policy::automatic);
		cl.def("assign", (class asmjit::CpuFeatures & (asmjit::CpuFeatures::*)(const class asmjit::CpuFeatures &)) &asmjit::CpuFeatures::operator=, "\\{\n\nC++: asmjit::CpuFeatures::operator=(const class asmjit::CpuFeatures &) --> class asmjit::CpuFeatures &", pybind11::return_value_policy::automatic, pybind11::arg("other"));
		cl.def("__eq__", (bool (asmjit::CpuFeatures::*)(const class asmjit::CpuFeatures &) const) &asmjit::CpuFeatures::operator==, "C++: asmjit::CpuFeatures::operator==(const class asmjit::CpuFeatures &) const --> bool", pybind11::arg("other"));
		cl.def("__ne__", (bool (asmjit::CpuFeatures::*)(const class asmjit::CpuFeatures &) const) &asmjit::CpuFeatures::operator!=, "C++: asmjit::CpuFeatures::operator!=(const class asmjit::CpuFeatures &) const --> bool", pybind11::arg("other"));
		cl.def("empty", (bool (asmjit::CpuFeatures::*)() const) &asmjit::CpuFeatures::empty, "Returns true if there are no features set.\n\nC++: asmjit::CpuFeatures::empty() const --> bool");
		cl.def("x86", (struct asmjit::CpuFeatures::X86 & (asmjit::CpuFeatures::*)()) &asmjit::CpuFeatures::x86, "Returns CpuFeatures::Data as \n\nC++: asmjit::CpuFeatures::x86() --> struct asmjit::CpuFeatures::X86 &", pybind11::return_value_policy::automatic);
		cl.def("arm", (struct asmjit::CpuFeatures::ARM & (asmjit::CpuFeatures::*)()) &asmjit::CpuFeatures::arm, "Returns CpuFeatures::Data as \n\nC++: asmjit::CpuFeatures::arm() --> struct asmjit::CpuFeatures::ARM &", pybind11::return_value_policy::automatic);
		cl.def("bits", (unsigned long * (asmjit::CpuFeatures::*)()) &asmjit::CpuFeatures::bits, "Returns all features as array of bitwords (see \n\nC++: asmjit::CpuFeatures::bits() --> unsigned long *", pybind11::return_value_policy::automatic);
		cl.def("bitWordCount", (unsigned long (asmjit::CpuFeatures::*)() const) &asmjit::CpuFeatures::bitWordCount, "Returns the number of BitWords returned by \n\nC++: asmjit::CpuFeatures::bitWordCount() const --> unsigned long");
		cl.def("hasAll", (bool (asmjit::CpuFeatures::*)(const class asmjit::CpuFeatures &) const) &asmjit::CpuFeatures::hasAll, "Tests whether all features as defined by `other` are present.\n\nC++: asmjit::CpuFeatures::hasAll(const class asmjit::CpuFeatures &) const --> bool", pybind11::arg("other"));
		cl.def("reset", (void (asmjit::CpuFeatures::*)()) &asmjit::CpuFeatures::reset, "Clears all features set.\n\nC++: asmjit::CpuFeatures::reset() --> void");
		cl.def("equals", (bool (asmjit::CpuFeatures::*)(const class asmjit::CpuFeatures &) const) &asmjit::CpuFeatures::equals, "Tests whether this CPU features matches `other`.\n\nC++: asmjit::CpuFeatures::equals(const class asmjit::CpuFeatures &) const --> bool", pybind11::arg("other"));

		{ // asmjit::CpuFeatures::Data file: line:48
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::CpuFeatures::Data, std::shared_ptr<asmjit::CpuFeatures::Data>> cl(enclosing_class, "Data", "CPU features data.");
			cl.def( pybind11::init( [](asmjit::CpuFeatures::Data const &o){ return new asmjit::CpuFeatures::Data(o); } ) );
			cl.def( pybind11::init( [](){ return new asmjit::CpuFeatures::Data(); } ) );

			cl.def("has", (bool (asmjit::CpuFeatures::Data::*)(const enum asmjit::CpuFeatures::X86::Id &) const) &asmjit::CpuFeatures::Data::has<asmjit::CpuFeatures::X86::Id>, "C++: asmjit::CpuFeatures::Data::has(const enum asmjit::CpuFeatures::X86::Id &) const --> bool", pybind11::arg("featureId"));
			cl.def("has", (bool (asmjit::CpuFeatures::Data::*)(const enum asmjit::CpuFeatures::ARM::Id &) const) &asmjit::CpuFeatures::Data::has<asmjit::CpuFeatures::ARM::Id>, "C++: asmjit::CpuFeatures::Data::has(const enum asmjit::CpuFeatures::ARM::Id &) const --> bool", pybind11::arg("featureId"));
			cl.def("__eq__", (bool (asmjit::CpuFeatures::Data::*)(const struct asmjit::CpuFeatures::Data &) const) &asmjit::CpuFeatures::Data::operator==, "\\{\n\nC++: asmjit::CpuFeatures::Data::operator==(const struct asmjit::CpuFeatures::Data &) const --> bool", pybind11::arg("other"));
			cl.def("__ne__", (bool (asmjit::CpuFeatures::Data::*)(const struct asmjit::CpuFeatures::Data &) const) &asmjit::CpuFeatures::Data::operator!=, "C++: asmjit::CpuFeatures::Data::operator!=(const struct asmjit::CpuFeatures::Data &) const --> bool", pybind11::arg("other"));
			cl.def("empty", (bool (asmjit::CpuFeatures::Data::*)() const) &asmjit::CpuFeatures::Data::empty, "Returns true if there are no features set.\n\nC++: asmjit::CpuFeatures::Data::empty() const --> bool");
			cl.def("bits", (unsigned long * (asmjit::CpuFeatures::Data::*)()) &asmjit::CpuFeatures::Data::bits, "Returns all features as array of bitwords (see \n\nC++: asmjit::CpuFeatures::Data::bits() --> unsigned long *", pybind11::return_value_policy::automatic);
			cl.def("bitWordCount", (unsigned long (asmjit::CpuFeatures::Data::*)() const) &asmjit::CpuFeatures::Data::bitWordCount, "Returns the number of BitWords returned by \n\nC++: asmjit::CpuFeatures::Data::bitWordCount() const --> unsigned long");
			cl.def("hasAll", (bool (asmjit::CpuFeatures::Data::*)(const struct asmjit::CpuFeatures::Data &) const) &asmjit::CpuFeatures::Data::hasAll, "Tests whether all features as defined by `other` are present.\n\nC++: asmjit::CpuFeatures::Data::hasAll(const struct asmjit::CpuFeatures::Data &) const --> bool", pybind11::arg("other"));
			cl.def("reset", (void (asmjit::CpuFeatures::Data::*)()) &asmjit::CpuFeatures::Data::reset, "Clears all features set.\n\nC++: asmjit::CpuFeatures::Data::reset() --> void");
			cl.def("equals", (bool (asmjit::CpuFeatures::Data::*)(const struct asmjit::CpuFeatures::Data &) const) &asmjit::CpuFeatures::Data::equals, "Tests whether this CPU features data matches `other`.\n\nC++: asmjit::CpuFeatures::Data::equals(const struct asmjit::CpuFeatures::Data &) const --> bool", pybind11::arg("other"));
			cl.def("assign", (struct asmjit::CpuFeatures::Data & (asmjit::CpuFeatures::Data::*)(const struct asmjit::CpuFeatures::Data &)) &asmjit::CpuFeatures::Data::operator=, "C++: asmjit::CpuFeatures::Data::operator=(const struct asmjit::CpuFeatures::Data &) --> struct asmjit::CpuFeatures::Data &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::CpuFeatures::X86 file: line:186
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::CpuFeatures::X86, std::shared_ptr<asmjit::CpuFeatures::X86>, asmjit::CpuFeatures::Data> cl(enclosing_class, "X86", "X86 specific features data.");
			cl.def( pybind11::init( [](){ return new asmjit::CpuFeatures::X86(); } ) );

			pybind11::enum_<asmjit::CpuFeatures::X86::Id>(cl, "Id", pybind11::arithmetic(), "X86 CPU feature identifiers.")
				.value("kNone", asmjit::CpuFeatures::X86::kNone)
				.value("kMT", asmjit::CpuFeatures::X86::kMT)
				.value("kNX", asmjit::CpuFeatures::X86::kNX)
				.value("k3DNOW", asmjit::CpuFeatures::X86::k3DNOW)
				.value("k3DNOW2", asmjit::CpuFeatures::X86::k3DNOW2)
				.value("kADX", asmjit::CpuFeatures::X86::kADX)
				.value("kAESNI", asmjit::CpuFeatures::X86::kAESNI)
				.value("kALTMOVCR8", asmjit::CpuFeatures::X86::kALTMOVCR8)
				.value("kAMX_BF16", asmjit::CpuFeatures::X86::kAMX_BF16)
				.value("kAMX_COMPLEX", asmjit::CpuFeatures::X86::kAMX_COMPLEX)
				.value("kAMX_FP16", asmjit::CpuFeatures::X86::kAMX_FP16)
				.value("kAMX_INT8", asmjit::CpuFeatures::X86::kAMX_INT8)
				.value("kAMX_TILE", asmjit::CpuFeatures::X86::kAMX_TILE)
				.value("kAPX_F", asmjit::CpuFeatures::X86::kAPX_F)
				.value("kAVX", asmjit::CpuFeatures::X86::kAVX)
				.value("kAVX2", asmjit::CpuFeatures::X86::kAVX2)
				.value("kAVX512_4FMAPS", asmjit::CpuFeatures::X86::kAVX512_4FMAPS)
				.value("kAVX512_4VNNIW", asmjit::CpuFeatures::X86::kAVX512_4VNNIW)
				.value("kAVX512_BF16", asmjit::CpuFeatures::X86::kAVX512_BF16)
				.value("kAVX512_BITALG", asmjit::CpuFeatures::X86::kAVX512_BITALG)
				.value("kAVX512_BW", asmjit::CpuFeatures::X86::kAVX512_BW)
				.value("kAVX512_CD", asmjit::CpuFeatures::X86::kAVX512_CD)
				.value("kAVX512_DQ", asmjit::CpuFeatures::X86::kAVX512_DQ)
				.value("kAVX512_ER", asmjit::CpuFeatures::X86::kAVX512_ER)
				.value("kAVX512_F", asmjit::CpuFeatures::X86::kAVX512_F)
				.value("kAVX512_FP16", asmjit::CpuFeatures::X86::kAVX512_FP16)
				.value("kAVX512_IFMA", asmjit::CpuFeatures::X86::kAVX512_IFMA)
				.value("kAVX512_PF", asmjit::CpuFeatures::X86::kAVX512_PF)
				.value("kAVX512_VBMI", asmjit::CpuFeatures::X86::kAVX512_VBMI)
				.value("kAVX512_VBMI2", asmjit::CpuFeatures::X86::kAVX512_VBMI2)
				.value("kAVX512_VL", asmjit::CpuFeatures::X86::kAVX512_VL)
				.value("kAVX512_VNNI", asmjit::CpuFeatures::X86::kAVX512_VNNI)
				.value("kAVX512_VP2INTERSECT", asmjit::CpuFeatures::X86::kAVX512_VP2INTERSECT)
				.value("kAVX512_VPOPCNTDQ", asmjit::CpuFeatures::X86::kAVX512_VPOPCNTDQ)
				.value("kAVX_IFMA", asmjit::CpuFeatures::X86::kAVX_IFMA)
				.value("kAVX_NE_CONVERT", asmjit::CpuFeatures::X86::kAVX_NE_CONVERT)
				.value("kAVX_VNNI", asmjit::CpuFeatures::X86::kAVX_VNNI)
				.value("kAVX_VNNI_INT16", asmjit::CpuFeatures::X86::kAVX_VNNI_INT16)
				.value("kAVX_VNNI_INT8", asmjit::CpuFeatures::X86::kAVX_VNNI_INT8)
				.value("kBMI", asmjit::CpuFeatures::X86::kBMI)
				.value("kBMI2", asmjit::CpuFeatures::X86::kBMI2)
				.value("kCET_IBT", asmjit::CpuFeatures::X86::kCET_IBT)
				.value("kCET_SS", asmjit::CpuFeatures::X86::kCET_SS)
				.value("kCET_SSS", asmjit::CpuFeatures::X86::kCET_SSS)
				.value("kCLDEMOTE", asmjit::CpuFeatures::X86::kCLDEMOTE)
				.value("kCLFLUSH", asmjit::CpuFeatures::X86::kCLFLUSH)
				.value("kCLFLUSHOPT", asmjit::CpuFeatures::X86::kCLFLUSHOPT)
				.value("kCLWB", asmjit::CpuFeatures::X86::kCLWB)
				.value("kCLZERO", asmjit::CpuFeatures::X86::kCLZERO)
				.value("kCMOV", asmjit::CpuFeatures::X86::kCMOV)
				.value("kCMPCCXADD", asmjit::CpuFeatures::X86::kCMPCCXADD)
				.value("kCMPXCHG16B", asmjit::CpuFeatures::X86::kCMPXCHG16B)
				.value("kCMPXCHG8B", asmjit::CpuFeatures::X86::kCMPXCHG8B)
				.value("kENCLV", asmjit::CpuFeatures::X86::kENCLV)
				.value("kENQCMD", asmjit::CpuFeatures::X86::kENQCMD)
				.value("kERMS", asmjit::CpuFeatures::X86::kERMS)
				.value("kF16C", asmjit::CpuFeatures::X86::kF16C)
				.value("kFMA", asmjit::CpuFeatures::X86::kFMA)
				.value("kFMA4", asmjit::CpuFeatures::X86::kFMA4)
				.value("kFPU", asmjit::CpuFeatures::X86::kFPU)
				.value("kFSGSBASE", asmjit::CpuFeatures::X86::kFSGSBASE)
				.value("kFSRM", asmjit::CpuFeatures::X86::kFSRM)
				.value("kFSRC", asmjit::CpuFeatures::X86::kFSRC)
				.value("kFSRS", asmjit::CpuFeatures::X86::kFSRS)
				.value("kFXSR", asmjit::CpuFeatures::X86::kFXSR)
				.value("kFXSROPT", asmjit::CpuFeatures::X86::kFXSROPT)
				.value("kFZRM", asmjit::CpuFeatures::X86::kFZRM)
				.value("kGEODE", asmjit::CpuFeatures::X86::kGEODE)
				.value("kGFNI", asmjit::CpuFeatures::X86::kGFNI)
				.value("kHLE", asmjit::CpuFeatures::X86::kHLE)
				.value("kHRESET", asmjit::CpuFeatures::X86::kHRESET)
				.value("kI486", asmjit::CpuFeatures::X86::kI486)
				.value("kINVLPGB", asmjit::CpuFeatures::X86::kINVLPGB)
				.value("kLAHFSAHF", asmjit::CpuFeatures::X86::kLAHFSAHF)
				.value("kLAM", asmjit::CpuFeatures::X86::kLAM)
				.value("kLWP", asmjit::CpuFeatures::X86::kLWP)
				.value("kLZCNT", asmjit::CpuFeatures::X86::kLZCNT)
				.value("kMCOMMIT", asmjit::CpuFeatures::X86::kMCOMMIT)
				.value("kMMX", asmjit::CpuFeatures::X86::kMMX)
				.value("kMMX2", asmjit::CpuFeatures::X86::kMMX2)
				.value("kMONITOR", asmjit::CpuFeatures::X86::kMONITOR)
				.value("kMONITORX", asmjit::CpuFeatures::X86::kMONITORX)
				.value("kMOVBE", asmjit::CpuFeatures::X86::kMOVBE)
				.value("kMOVDIR64B", asmjit::CpuFeatures::X86::kMOVDIR64B)
				.value("kMOVDIRI", asmjit::CpuFeatures::X86::kMOVDIRI)
				.value("kMPX", asmjit::CpuFeatures::X86::kMPX)
				.value("kMSR", asmjit::CpuFeatures::X86::kMSR)
				.value("kMSRLIST", asmjit::CpuFeatures::X86::kMSRLIST)
				.value("kMSSE", asmjit::CpuFeatures::X86::kMSSE)
				.value("kOSXSAVE", asmjit::CpuFeatures::X86::kOSXSAVE)
				.value("kOSPKE", asmjit::CpuFeatures::X86::kOSPKE)
				.value("kPCLMULQDQ", asmjit::CpuFeatures::X86::kPCLMULQDQ)
				.value("kPCONFIG", asmjit::CpuFeatures::X86::kPCONFIG)
				.value("kPOPCNT", asmjit::CpuFeatures::X86::kPOPCNT)
				.value("kPREFETCHI", asmjit::CpuFeatures::X86::kPREFETCHI)
				.value("kPREFETCHW", asmjit::CpuFeatures::X86::kPREFETCHW)
				.value("kPREFETCHWT1", asmjit::CpuFeatures::X86::kPREFETCHWT1)
				.value("kPTWRITE", asmjit::CpuFeatures::X86::kPTWRITE)
				.value("kRAO_INT", asmjit::CpuFeatures::X86::kRAO_INT)
				.value("kRMPQUERY", asmjit::CpuFeatures::X86::kRMPQUERY)
				.value("kRDPID", asmjit::CpuFeatures::X86::kRDPID)
				.value("kRDPRU", asmjit::CpuFeatures::X86::kRDPRU)
				.value("kRDRAND", asmjit::CpuFeatures::X86::kRDRAND)
				.value("kRDSEED", asmjit::CpuFeatures::X86::kRDSEED)
				.value("kRDTSC", asmjit::CpuFeatures::X86::kRDTSC)
				.value("kRDTSCP", asmjit::CpuFeatures::X86::kRDTSCP)
				.value("kRTM", asmjit::CpuFeatures::X86::kRTM)
				.value("kSEAM", asmjit::CpuFeatures::X86::kSEAM)
				.value("kSERIALIZE", asmjit::CpuFeatures::X86::kSERIALIZE)
				.value("kSEV", asmjit::CpuFeatures::X86::kSEV)
				.value("kSEV_ES", asmjit::CpuFeatures::X86::kSEV_ES)
				.value("kSEV_SNP", asmjit::CpuFeatures::X86::kSEV_SNP)
				.value("kSHA", asmjit::CpuFeatures::X86::kSHA)
				.value("kSHA512", asmjit::CpuFeatures::X86::kSHA512)
				.value("kSKINIT", asmjit::CpuFeatures::X86::kSKINIT)
				.value("kSM3", asmjit::CpuFeatures::X86::kSM3)
				.value("kSM4", asmjit::CpuFeatures::X86::kSM4)
				.value("kSMAP", asmjit::CpuFeatures::X86::kSMAP)
				.value("kSME", asmjit::CpuFeatures::X86::kSME)
				.value("kSMEP", asmjit::CpuFeatures::X86::kSMEP)
				.value("kSMX", asmjit::CpuFeatures::X86::kSMX)
				.value("kSSE", asmjit::CpuFeatures::X86::kSSE)
				.value("kSSE2", asmjit::CpuFeatures::X86::kSSE2)
				.value("kSSE3", asmjit::CpuFeatures::X86::kSSE3)
				.value("kSSE4_1", asmjit::CpuFeatures::X86::kSSE4_1)
				.value("kSSE4_2", asmjit::CpuFeatures::X86::kSSE4_2)
				.value("kSSE4A", asmjit::CpuFeatures::X86::kSSE4A)
				.value("kSSSE3", asmjit::CpuFeatures::X86::kSSSE3)
				.value("kSVM", asmjit::CpuFeatures::X86::kSVM)
				.value("kTBM", asmjit::CpuFeatures::X86::kTBM)
				.value("kTSE", asmjit::CpuFeatures::X86::kTSE)
				.value("kTSX", asmjit::CpuFeatures::X86::kTSX)
				.value("kTSXLDTRK", asmjit::CpuFeatures::X86::kTSXLDTRK)
				.value("kUINTR", asmjit::CpuFeatures::X86::kUINTR)
				.value("kVAES", asmjit::CpuFeatures::X86::kVAES)
				.value("kVMX", asmjit::CpuFeatures::X86::kVMX)
				.value("kVPCLMULQDQ", asmjit::CpuFeatures::X86::kVPCLMULQDQ)
				.value("kWAITPKG", asmjit::CpuFeatures::X86::kWAITPKG)
				.value("kWBNOINVD", asmjit::CpuFeatures::X86::kWBNOINVD)
				.value("kWRMSRNS", asmjit::CpuFeatures::X86::kWRMSRNS)
				.value("kXOP", asmjit::CpuFeatures::X86::kXOP)
				.value("kXSAVE", asmjit::CpuFeatures::X86::kXSAVE)
				.value("kXSAVEC", asmjit::CpuFeatures::X86::kXSAVEC)
				.value("kXSAVEOPT", asmjit::CpuFeatures::X86::kXSAVEOPT)
				.value("kXSAVES", asmjit::CpuFeatures::X86::kXSAVES)
				.value("kMaxValue", asmjit::CpuFeatures::X86::kMaxValue)
				.export_values();

			cl.def("hasMT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMT, "C++: asmjit::CpuFeatures::X86::hasMT() const --> bool");
			cl.def("hasNX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasNX, "C++: asmjit::CpuFeatures::X86::hasNX() const --> bool");
			cl.def("has3DNOW", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::has3DNOW, "C++: asmjit::CpuFeatures::X86::has3DNOW() const --> bool");
			cl.def("has3DNOW2", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::has3DNOW2, "C++: asmjit::CpuFeatures::X86::has3DNOW2() const --> bool");
			cl.def("hasADX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasADX, "C++: asmjit::CpuFeatures::X86::hasADX() const --> bool");
			cl.def("hasAESNI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAESNI, "C++: asmjit::CpuFeatures::X86::hasAESNI() const --> bool");
			cl.def("hasALTMOVCR8", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasALTMOVCR8, "C++: asmjit::CpuFeatures::X86::hasALTMOVCR8() const --> bool");
			cl.def("hasAMX_BF16", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAMX_BF16, "C++: asmjit::CpuFeatures::X86::hasAMX_BF16() const --> bool");
			cl.def("hasAMX_COMPLEX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAMX_COMPLEX, "C++: asmjit::CpuFeatures::X86::hasAMX_COMPLEX() const --> bool");
			cl.def("hasAMX_FP16", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAMX_FP16, "C++: asmjit::CpuFeatures::X86::hasAMX_FP16() const --> bool");
			cl.def("hasAMX_INT8", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAMX_INT8, "C++: asmjit::CpuFeatures::X86::hasAMX_INT8() const --> bool");
			cl.def("hasAMX_TILE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAMX_TILE, "C++: asmjit::CpuFeatures::X86::hasAMX_TILE() const --> bool");
			cl.def("hasAPX_F", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAPX_F, "C++: asmjit::CpuFeatures::X86::hasAPX_F() const --> bool");
			cl.def("hasAVX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX, "C++: asmjit::CpuFeatures::X86::hasAVX() const --> bool");
			cl.def("hasAVX2", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX2, "C++: asmjit::CpuFeatures::X86::hasAVX2() const --> bool");
			cl.def("hasAVX512_4FMAPS", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_4FMAPS, "C++: asmjit::CpuFeatures::X86::hasAVX512_4FMAPS() const --> bool");
			cl.def("hasAVX512_4VNNIW", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_4VNNIW, "C++: asmjit::CpuFeatures::X86::hasAVX512_4VNNIW() const --> bool");
			cl.def("hasAVX512_BF16", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_BF16, "C++: asmjit::CpuFeatures::X86::hasAVX512_BF16() const --> bool");
			cl.def("hasAVX512_BITALG", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_BITALG, "C++: asmjit::CpuFeatures::X86::hasAVX512_BITALG() const --> bool");
			cl.def("hasAVX512_BW", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_BW, "C++: asmjit::CpuFeatures::X86::hasAVX512_BW() const --> bool");
			cl.def("hasAVX512_CD", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_CD, "C++: asmjit::CpuFeatures::X86::hasAVX512_CD() const --> bool");
			cl.def("hasAVX512_DQ", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_DQ, "C++: asmjit::CpuFeatures::X86::hasAVX512_DQ() const --> bool");
			cl.def("hasAVX512_ER", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_ER, "C++: asmjit::CpuFeatures::X86::hasAVX512_ER() const --> bool");
			cl.def("hasAVX512_F", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_F, "C++: asmjit::CpuFeatures::X86::hasAVX512_F() const --> bool");
			cl.def("hasAVX512_FP16", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_FP16, "C++: asmjit::CpuFeatures::X86::hasAVX512_FP16() const --> bool");
			cl.def("hasAVX512_IFMA", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_IFMA, "C++: asmjit::CpuFeatures::X86::hasAVX512_IFMA() const --> bool");
			cl.def("hasAVX512_PF", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_PF, "C++: asmjit::CpuFeatures::X86::hasAVX512_PF() const --> bool");
			cl.def("hasAVX512_VBMI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_VBMI, "C++: asmjit::CpuFeatures::X86::hasAVX512_VBMI() const --> bool");
			cl.def("hasAVX512_VBMI2", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_VBMI2, "C++: asmjit::CpuFeatures::X86::hasAVX512_VBMI2() const --> bool");
			cl.def("hasAVX512_VL", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_VL, "C++: asmjit::CpuFeatures::X86::hasAVX512_VL() const --> bool");
			cl.def("hasAVX512_VNNI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_VNNI, "C++: asmjit::CpuFeatures::X86::hasAVX512_VNNI() const --> bool");
			cl.def("hasAVX512_VP2INTERSECT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_VP2INTERSECT, "C++: asmjit::CpuFeatures::X86::hasAVX512_VP2INTERSECT() const --> bool");
			cl.def("hasAVX512_VPOPCNTDQ", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX512_VPOPCNTDQ, "C++: asmjit::CpuFeatures::X86::hasAVX512_VPOPCNTDQ() const --> bool");
			cl.def("hasAVX_IFMA", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX_IFMA, "C++: asmjit::CpuFeatures::X86::hasAVX_IFMA() const --> bool");
			cl.def("hasAVX_NE_CONVERT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX_NE_CONVERT, "C++: asmjit::CpuFeatures::X86::hasAVX_NE_CONVERT() const --> bool");
			cl.def("hasAVX_VNNI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX_VNNI, "C++: asmjit::CpuFeatures::X86::hasAVX_VNNI() const --> bool");
			cl.def("hasAVX_VNNI_INT16", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX_VNNI_INT16, "C++: asmjit::CpuFeatures::X86::hasAVX_VNNI_INT16() const --> bool");
			cl.def("hasAVX_VNNI_INT8", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasAVX_VNNI_INT8, "C++: asmjit::CpuFeatures::X86::hasAVX_VNNI_INT8() const --> bool");
			cl.def("hasBMI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasBMI, "C++: asmjit::CpuFeatures::X86::hasBMI() const --> bool");
			cl.def("hasBMI2", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasBMI2, "C++: asmjit::CpuFeatures::X86::hasBMI2() const --> bool");
			cl.def("hasCET_IBT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCET_IBT, "C++: asmjit::CpuFeatures::X86::hasCET_IBT() const --> bool");
			cl.def("hasCET_SS", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCET_SS, "C++: asmjit::CpuFeatures::X86::hasCET_SS() const --> bool");
			cl.def("hasCET_SSS", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCET_SSS, "C++: asmjit::CpuFeatures::X86::hasCET_SSS() const --> bool");
			cl.def("hasCLDEMOTE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCLDEMOTE, "C++: asmjit::CpuFeatures::X86::hasCLDEMOTE() const --> bool");
			cl.def("hasCLFLUSH", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCLFLUSH, "C++: asmjit::CpuFeatures::X86::hasCLFLUSH() const --> bool");
			cl.def("hasCLFLUSHOPT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCLFLUSHOPT, "C++: asmjit::CpuFeatures::X86::hasCLFLUSHOPT() const --> bool");
			cl.def("hasCLWB", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCLWB, "C++: asmjit::CpuFeatures::X86::hasCLWB() const --> bool");
			cl.def("hasCLZERO", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCLZERO, "C++: asmjit::CpuFeatures::X86::hasCLZERO() const --> bool");
			cl.def("hasCMOV", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCMOV, "C++: asmjit::CpuFeatures::X86::hasCMOV() const --> bool");
			cl.def("hasCMPXCHG16B", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCMPXCHG16B, "C++: asmjit::CpuFeatures::X86::hasCMPXCHG16B() const --> bool");
			cl.def("hasCMPXCHG8B", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasCMPXCHG8B, "C++: asmjit::CpuFeatures::X86::hasCMPXCHG8B() const --> bool");
			cl.def("hasENCLV", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasENCLV, "C++: asmjit::CpuFeatures::X86::hasENCLV() const --> bool");
			cl.def("hasENQCMD", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasENQCMD, "C++: asmjit::CpuFeatures::X86::hasENQCMD() const --> bool");
			cl.def("hasERMS", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasERMS, "C++: asmjit::CpuFeatures::X86::hasERMS() const --> bool");
			cl.def("hasF16C", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasF16C, "C++: asmjit::CpuFeatures::X86::hasF16C() const --> bool");
			cl.def("hasFMA", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFMA, "C++: asmjit::CpuFeatures::X86::hasFMA() const --> bool");
			cl.def("hasFMA4", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFMA4, "C++: asmjit::CpuFeatures::X86::hasFMA4() const --> bool");
			cl.def("hasFPU", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFPU, "C++: asmjit::CpuFeatures::X86::hasFPU() const --> bool");
			cl.def("hasFSGSBASE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFSGSBASE, "C++: asmjit::CpuFeatures::X86::hasFSGSBASE() const --> bool");
			cl.def("hasFSRM", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFSRM, "C++: asmjit::CpuFeatures::X86::hasFSRM() const --> bool");
			cl.def("hasFSRC", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFSRC, "C++: asmjit::CpuFeatures::X86::hasFSRC() const --> bool");
			cl.def("hasFSRS", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFSRS, "C++: asmjit::CpuFeatures::X86::hasFSRS() const --> bool");
			cl.def("hasFXSR", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFXSR, "C++: asmjit::CpuFeatures::X86::hasFXSR() const --> bool");
			cl.def("hasFXSROPT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFXSROPT, "C++: asmjit::CpuFeatures::X86::hasFXSROPT() const --> bool");
			cl.def("hasFZRM", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasFZRM, "C++: asmjit::CpuFeatures::X86::hasFZRM() const --> bool");
			cl.def("hasGEODE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasGEODE, "C++: asmjit::CpuFeatures::X86::hasGEODE() const --> bool");
			cl.def("hasGFNI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasGFNI, "C++: asmjit::CpuFeatures::X86::hasGFNI() const --> bool");
			cl.def("hasHLE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasHLE, "C++: asmjit::CpuFeatures::X86::hasHLE() const --> bool");
			cl.def("hasHRESET", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasHRESET, "C++: asmjit::CpuFeatures::X86::hasHRESET() const --> bool");
			cl.def("hasI486", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasI486, "C++: asmjit::CpuFeatures::X86::hasI486() const --> bool");
			cl.def("hasINVLPGB", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasINVLPGB, "C++: asmjit::CpuFeatures::X86::hasINVLPGB() const --> bool");
			cl.def("hasLAHFSAHF", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasLAHFSAHF, "C++: asmjit::CpuFeatures::X86::hasLAHFSAHF() const --> bool");
			cl.def("hasLAM", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasLAM, "C++: asmjit::CpuFeatures::X86::hasLAM() const --> bool");
			cl.def("hasLWP", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasLWP, "C++: asmjit::CpuFeatures::X86::hasLWP() const --> bool");
			cl.def("hasLZCNT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasLZCNT, "C++: asmjit::CpuFeatures::X86::hasLZCNT() const --> bool");
			cl.def("hasMCOMMIT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMCOMMIT, "C++: asmjit::CpuFeatures::X86::hasMCOMMIT() const --> bool");
			cl.def("hasMMX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMMX, "C++: asmjit::CpuFeatures::X86::hasMMX() const --> bool");
			cl.def("hasMMX2", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMMX2, "C++: asmjit::CpuFeatures::X86::hasMMX2() const --> bool");
			cl.def("hasMONITOR", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMONITOR, "C++: asmjit::CpuFeatures::X86::hasMONITOR() const --> bool");
			cl.def("hasMONITORX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMONITORX, "C++: asmjit::CpuFeatures::X86::hasMONITORX() const --> bool");
			cl.def("hasMOVBE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMOVBE, "C++: asmjit::CpuFeatures::X86::hasMOVBE() const --> bool");
			cl.def("hasMOVDIR64B", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMOVDIR64B, "C++: asmjit::CpuFeatures::X86::hasMOVDIR64B() const --> bool");
			cl.def("hasMOVDIRI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMOVDIRI, "C++: asmjit::CpuFeatures::X86::hasMOVDIRI() const --> bool");
			cl.def("hasMPX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMPX, "C++: asmjit::CpuFeatures::X86::hasMPX() const --> bool");
			cl.def("hasMSR", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMSR, "C++: asmjit::CpuFeatures::X86::hasMSR() const --> bool");
			cl.def("hasMSRLIST", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMSRLIST, "C++: asmjit::CpuFeatures::X86::hasMSRLIST() const --> bool");
			cl.def("hasMSSE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasMSSE, "C++: asmjit::CpuFeatures::X86::hasMSSE() const --> bool");
			cl.def("hasOSXSAVE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasOSXSAVE, "C++: asmjit::CpuFeatures::X86::hasOSXSAVE() const --> bool");
			cl.def("hasOSPKE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasOSPKE, "C++: asmjit::CpuFeatures::X86::hasOSPKE() const --> bool");
			cl.def("hasPCLMULQDQ", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasPCLMULQDQ, "C++: asmjit::CpuFeatures::X86::hasPCLMULQDQ() const --> bool");
			cl.def("hasPCONFIG", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasPCONFIG, "C++: asmjit::CpuFeatures::X86::hasPCONFIG() const --> bool");
			cl.def("hasPOPCNT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasPOPCNT, "C++: asmjit::CpuFeatures::X86::hasPOPCNT() const --> bool");
			cl.def("hasPREFETCHI", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasPREFETCHI, "C++: asmjit::CpuFeatures::X86::hasPREFETCHI() const --> bool");
			cl.def("hasPREFETCHW", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasPREFETCHW, "C++: asmjit::CpuFeatures::X86::hasPREFETCHW() const --> bool");
			cl.def("hasPREFETCHWT1", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasPREFETCHWT1, "C++: asmjit::CpuFeatures::X86::hasPREFETCHWT1() const --> bool");
			cl.def("hasPTWRITE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasPTWRITE, "C++: asmjit::CpuFeatures::X86::hasPTWRITE() const --> bool");
			cl.def("hasRAO_INT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRAO_INT, "C++: asmjit::CpuFeatures::X86::hasRAO_INT() const --> bool");
			cl.def("hasRMPQUERY", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRMPQUERY, "C++: asmjit::CpuFeatures::X86::hasRMPQUERY() const --> bool");
			cl.def("hasRDPID", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRDPID, "C++: asmjit::CpuFeatures::X86::hasRDPID() const --> bool");
			cl.def("hasRDPRU", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRDPRU, "C++: asmjit::CpuFeatures::X86::hasRDPRU() const --> bool");
			cl.def("hasRDRAND", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRDRAND, "C++: asmjit::CpuFeatures::X86::hasRDRAND() const --> bool");
			cl.def("hasRDSEED", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRDSEED, "C++: asmjit::CpuFeatures::X86::hasRDSEED() const --> bool");
			cl.def("hasRDTSC", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRDTSC, "C++: asmjit::CpuFeatures::X86::hasRDTSC() const --> bool");
			cl.def("hasRDTSCP", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRDTSCP, "C++: asmjit::CpuFeatures::X86::hasRDTSCP() const --> bool");
			cl.def("hasRTM", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasRTM, "C++: asmjit::CpuFeatures::X86::hasRTM() const --> bool");
			cl.def("hasSEAM", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSEAM, "C++: asmjit::CpuFeatures::X86::hasSEAM() const --> bool");
			cl.def("hasSERIALIZE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSERIALIZE, "C++: asmjit::CpuFeatures::X86::hasSERIALIZE() const --> bool");
			cl.def("hasSEV", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSEV, "C++: asmjit::CpuFeatures::X86::hasSEV() const --> bool");
			cl.def("hasSEV_ES", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSEV_ES, "C++: asmjit::CpuFeatures::X86::hasSEV_ES() const --> bool");
			cl.def("hasSEV_SNP", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSEV_SNP, "C++: asmjit::CpuFeatures::X86::hasSEV_SNP() const --> bool");
			cl.def("hasSHA", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSHA, "C++: asmjit::CpuFeatures::X86::hasSHA() const --> bool");
			cl.def("hasSKINIT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSKINIT, "C++: asmjit::CpuFeatures::X86::hasSKINIT() const --> bool");
			cl.def("hasSMAP", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSMAP, "C++: asmjit::CpuFeatures::X86::hasSMAP() const --> bool");
			cl.def("hasSMEP", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSMEP, "C++: asmjit::CpuFeatures::X86::hasSMEP() const --> bool");
			cl.def("hasSMX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSMX, "C++: asmjit::CpuFeatures::X86::hasSMX() const --> bool");
			cl.def("hasSSE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSSE, "C++: asmjit::CpuFeatures::X86::hasSSE() const --> bool");
			cl.def("hasSSE2", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSSE2, "C++: asmjit::CpuFeatures::X86::hasSSE2() const --> bool");
			cl.def("hasSSE3", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSSE3, "C++: asmjit::CpuFeatures::X86::hasSSE3() const --> bool");
			cl.def("hasSSE4_1", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSSE4_1, "C++: asmjit::CpuFeatures::X86::hasSSE4_1() const --> bool");
			cl.def("hasSSE4_2", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSSE4_2, "C++: asmjit::CpuFeatures::X86::hasSSE4_2() const --> bool");
			cl.def("hasSSE4A", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSSE4A, "C++: asmjit::CpuFeatures::X86::hasSSE4A() const --> bool");
			cl.def("hasSSSE3", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSSSE3, "C++: asmjit::CpuFeatures::X86::hasSSSE3() const --> bool");
			cl.def("hasSVM", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasSVM, "C++: asmjit::CpuFeatures::X86::hasSVM() const --> bool");
			cl.def("hasTBM", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasTBM, "C++: asmjit::CpuFeatures::X86::hasTBM() const --> bool");
			cl.def("hasTSE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasTSE, "C++: asmjit::CpuFeatures::X86::hasTSE() const --> bool");
			cl.def("hasTSX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasTSX, "C++: asmjit::CpuFeatures::X86::hasTSX() const --> bool");
			cl.def("hasTSXLDTRK", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasTSXLDTRK, "C++: asmjit::CpuFeatures::X86::hasTSXLDTRK() const --> bool");
			cl.def("hasUINTR", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasUINTR, "C++: asmjit::CpuFeatures::X86::hasUINTR() const --> bool");
			cl.def("hasVAES", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasVAES, "C++: asmjit::CpuFeatures::X86::hasVAES() const --> bool");
			cl.def("hasVMX", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasVMX, "C++: asmjit::CpuFeatures::X86::hasVMX() const --> bool");
			cl.def("hasVPCLMULQDQ", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasVPCLMULQDQ, "C++: asmjit::CpuFeatures::X86::hasVPCLMULQDQ() const --> bool");
			cl.def("hasWAITPKG", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasWAITPKG, "C++: asmjit::CpuFeatures::X86::hasWAITPKG() const --> bool");
			cl.def("hasWBNOINVD", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasWBNOINVD, "C++: asmjit::CpuFeatures::X86::hasWBNOINVD() const --> bool");
			cl.def("hasWRMSRNS", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasWRMSRNS, "C++: asmjit::CpuFeatures::X86::hasWRMSRNS() const --> bool");
			cl.def("hasXOP", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasXOP, "C++: asmjit::CpuFeatures::X86::hasXOP() const --> bool");
			cl.def("hasXSAVE", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasXSAVE, "C++: asmjit::CpuFeatures::X86::hasXSAVE() const --> bool");
			cl.def("hasXSAVEC", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasXSAVEC, "C++: asmjit::CpuFeatures::X86::hasXSAVEC() const --> bool");
			cl.def("hasXSAVEOPT", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasXSAVEOPT, "C++: asmjit::CpuFeatures::X86::hasXSAVEOPT() const --> bool");
			cl.def("hasXSAVES", (bool (asmjit::CpuFeatures::X86::*)() const) &asmjit::CpuFeatures::X86::hasXSAVES, "C++: asmjit::CpuFeatures::X86::hasXSAVES() const --> bool");
		}

		{ // asmjit::CpuFeatures::ARM file: line:509
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::CpuFeatures::ARM, std::shared_ptr<asmjit::CpuFeatures::ARM>, asmjit::CpuFeatures::Data> cl(enclosing_class, "ARM", "ARM specific features data.\n\n Naming reference:\n   - https://developer.arm.com/downloads/-/exploration-tools/feature-names-for-a-profile");
			cl.def( pybind11::init( [](){ return new asmjit::CpuFeatures::ARM(); } ) );

			pybind11::enum_<asmjit::CpuFeatures::ARM::Id>(cl, "Id", pybind11::arithmetic(), "ARM CPU feature identifiers.")
				.value("kNone", asmjit::CpuFeatures::ARM::kNone)
				.value("kARMv6", asmjit::CpuFeatures::ARM::kARMv6)
				.value("kARMv7", asmjit::CpuFeatures::ARM::kARMv7)
				.value("kARMv8a", asmjit::CpuFeatures::ARM::kARMv8a)
				.value("kTHUMB", asmjit::CpuFeatures::ARM::kTHUMB)
				.value("kTHUMBv2", asmjit::CpuFeatures::ARM::kTHUMBv2)
				.value("kABLE", asmjit::CpuFeatures::ARM::kABLE)
				.value("kADERR", asmjit::CpuFeatures::ARM::kADERR)
				.value("kAES", asmjit::CpuFeatures::ARM::kAES)
				.value("kAFP", asmjit::CpuFeatures::ARM::kAFP)
				.value("kAIE", asmjit::CpuFeatures::ARM::kAIE)
				.value("kAMU1", asmjit::CpuFeatures::ARM::kAMU1)
				.value("kAMU1_1", asmjit::CpuFeatures::ARM::kAMU1_1)
				.value("kANERR", asmjit::CpuFeatures::ARM::kANERR)
				.value("kASIMD", asmjit::CpuFeatures::ARM::kASIMD)
				.value("kBF16", asmjit::CpuFeatures::ARM::kBF16)
				.value("kBRBE", asmjit::CpuFeatures::ARM::kBRBE)
				.value("kBTI", asmjit::CpuFeatures::ARM::kBTI)
				.value("kBWE", asmjit::CpuFeatures::ARM::kBWE)
				.value("kCCIDX", asmjit::CpuFeatures::ARM::kCCIDX)
				.value("kCHK", asmjit::CpuFeatures::ARM::kCHK)
				.value("kCLRBHB", asmjit::CpuFeatures::ARM::kCLRBHB)
				.value("kCMOW", asmjit::CpuFeatures::ARM::kCMOW)
				.value("kCONSTPACFIELD", asmjit::CpuFeatures::ARM::kCONSTPACFIELD)
				.value("kCPA", asmjit::CpuFeatures::ARM::kCPA)
				.value("kCPA2", asmjit::CpuFeatures::ARM::kCPA2)
				.value("kCPUID", asmjit::CpuFeatures::ARM::kCPUID)
				.value("kCRC32", asmjit::CpuFeatures::ARM::kCRC32)
				.value("kCSSC", asmjit::CpuFeatures::ARM::kCSSC)
				.value("kCSV2", asmjit::CpuFeatures::ARM::kCSV2)
				.value("kCSV2_3", asmjit::CpuFeatures::ARM::kCSV2_3)
				.value("kCSV3", asmjit::CpuFeatures::ARM::kCSV3)
				.value("kD128", asmjit::CpuFeatures::ARM::kD128)
				.value("kDGH", asmjit::CpuFeatures::ARM::kDGH)
				.value("kDIT", asmjit::CpuFeatures::ARM::kDIT)
				.value("kDOTPROD", asmjit::CpuFeatures::ARM::kDOTPROD)
				.value("kDPB", asmjit::CpuFeatures::ARM::kDPB)
				.value("kDPB2", asmjit::CpuFeatures::ARM::kDPB2)
				.value("kEBEP", asmjit::CpuFeatures::ARM::kEBEP)
				.value("kEBF16", asmjit::CpuFeatures::ARM::kEBF16)
				.value("kECBHB", asmjit::CpuFeatures::ARM::kECBHB)
				.value("kECV", asmjit::CpuFeatures::ARM::kECV)
				.value("kEDHSR", asmjit::CpuFeatures::ARM::kEDHSR)
				.value("kEDSP", asmjit::CpuFeatures::ARM::kEDSP)
				.value("kFAMINMAX", asmjit::CpuFeatures::ARM::kFAMINMAX)
				.value("kFCMA", asmjit::CpuFeatures::ARM::kFCMA)
				.value("kFGT", asmjit::CpuFeatures::ARM::kFGT)
				.value("kFGT2", asmjit::CpuFeatures::ARM::kFGT2)
				.value("kFHM", asmjit::CpuFeatures::ARM::kFHM)
				.value("kFLAGM", asmjit::CpuFeatures::ARM::kFLAGM)
				.value("kFLAGM2", asmjit::CpuFeatures::ARM::kFLAGM2)
				.value("kFMAC", asmjit::CpuFeatures::ARM::kFMAC)
				.value("kFP", asmjit::CpuFeatures::ARM::kFP)
				.value("kFP16", asmjit::CpuFeatures::ARM::kFP16)
				.value("kFP16CONV", asmjit::CpuFeatures::ARM::kFP16CONV)
				.value("kFP8", asmjit::CpuFeatures::ARM::kFP8)
				.value("kFP8DOT2", asmjit::CpuFeatures::ARM::kFP8DOT2)
				.value("kFP8DOT4", asmjit::CpuFeatures::ARM::kFP8DOT4)
				.value("kFP8FMA", asmjit::CpuFeatures::ARM::kFP8FMA)
				.value("kFPMR", asmjit::CpuFeatures::ARM::kFPMR)
				.value("kFRINTTS", asmjit::CpuFeatures::ARM::kFRINTTS)
				.value("kGCS", asmjit::CpuFeatures::ARM::kGCS)
				.value("kHACDBS", asmjit::CpuFeatures::ARM::kHACDBS)
				.value("kHAFDBS", asmjit::CpuFeatures::ARM::kHAFDBS)
				.value("kHAFT", asmjit::CpuFeatures::ARM::kHAFT)
				.value("kHDBSS", asmjit::CpuFeatures::ARM::kHDBSS)
				.value("kHBC", asmjit::CpuFeatures::ARM::kHBC)
				.value("kHCX", asmjit::CpuFeatures::ARM::kHCX)
				.value("kHPDS", asmjit::CpuFeatures::ARM::kHPDS)
				.value("kHPDS2", asmjit::CpuFeatures::ARM::kHPDS2)
				.value("kI8MM", asmjit::CpuFeatures::ARM::kI8MM)
				.value("kIDIVA", asmjit::CpuFeatures::ARM::kIDIVA)
				.value("kIDIVT", asmjit::CpuFeatures::ARM::kIDIVT)
				.value("kITE", asmjit::CpuFeatures::ARM::kITE)
				.value("kJSCVT", asmjit::CpuFeatures::ARM::kJSCVT)
				.value("kLOR", asmjit::CpuFeatures::ARM::kLOR)
				.value("kLRCPC", asmjit::CpuFeatures::ARM::kLRCPC)
				.value("kLRCPC2", asmjit::CpuFeatures::ARM::kLRCPC2)
				.value("kLRCPC3", asmjit::CpuFeatures::ARM::kLRCPC3)
				.value("kLS64", asmjit::CpuFeatures::ARM::kLS64)
				.value("kLS64_ACCDATA", asmjit::CpuFeatures::ARM::kLS64_ACCDATA)
				.value("kLS64_V", asmjit::CpuFeatures::ARM::kLS64_V)
				.value("kLSE", asmjit::CpuFeatures::ARM::kLSE)
				.value("kLSE128", asmjit::CpuFeatures::ARM::kLSE128)
				.value("kLSE2", asmjit::CpuFeatures::ARM::kLSE2)
				.value("kLUT", asmjit::CpuFeatures::ARM::kLUT)
				.value("kLVA", asmjit::CpuFeatures::ARM::kLVA)
				.value("kLVA3", asmjit::CpuFeatures::ARM::kLVA3)
				.value("kMEC", asmjit::CpuFeatures::ARM::kMEC)
				.value("kMOPS", asmjit::CpuFeatures::ARM::kMOPS)
				.value("kMPAM", asmjit::CpuFeatures::ARM::kMPAM)
				.value("kMTE", asmjit::CpuFeatures::ARM::kMTE)
				.value("kMTE2", asmjit::CpuFeatures::ARM::kMTE2)
				.value("kMTE3", asmjit::CpuFeatures::ARM::kMTE3)
				.value("kMTE4", asmjit::CpuFeatures::ARM::kMTE4)
				.value("kMTE_ASYM_FAULT", asmjit::CpuFeatures::ARM::kMTE_ASYM_FAULT)
				.value("kMTE_ASYNC", asmjit::CpuFeatures::ARM::kMTE_ASYNC)
				.value("kMTE_CANONICAL_TAGS", asmjit::CpuFeatures::ARM::kMTE_CANONICAL_TAGS)
				.value("kMTE_NO_ADDRESS_TAGS", asmjit::CpuFeatures::ARM::kMTE_NO_ADDRESS_TAGS)
				.value("kMTE_PERM_S1", asmjit::CpuFeatures::ARM::kMTE_PERM_S1)
				.value("kMTE_STORE_ONLY", asmjit::CpuFeatures::ARM::kMTE_STORE_ONLY)
				.value("kMTE_TAGGED_FAR", asmjit::CpuFeatures::ARM::kMTE_TAGGED_FAR)
				.value("kMTPMU", asmjit::CpuFeatures::ARM::kMTPMU)
				.value("kNMI", asmjit::CpuFeatures::ARM::kNMI)
				.value("kNV", asmjit::CpuFeatures::ARM::kNV)
				.value("kNV2", asmjit::CpuFeatures::ARM::kNV2)
				.value("kPAN", asmjit::CpuFeatures::ARM::kPAN)
				.value("kPAN2", asmjit::CpuFeatures::ARM::kPAN2)
				.value("kPAN3", asmjit::CpuFeatures::ARM::kPAN3)
				.value("kPAUTH", asmjit::CpuFeatures::ARM::kPAUTH)
				.value("kPFAR", asmjit::CpuFeatures::ARM::kPFAR)
				.value("kPMU", asmjit::CpuFeatures::ARM::kPMU)
				.value("kPMULL", asmjit::CpuFeatures::ARM::kPMULL)
				.value("kPRFMSLC", asmjit::CpuFeatures::ARM::kPRFMSLC)
				.value("kRAS", asmjit::CpuFeatures::ARM::kRAS)
				.value("kRAS1_1", asmjit::CpuFeatures::ARM::kRAS1_1)
				.value("kRAS2", asmjit::CpuFeatures::ARM::kRAS2)
				.value("kRASSA2", asmjit::CpuFeatures::ARM::kRASSA2)
				.value("kRDM", asmjit::CpuFeatures::ARM::kRDM)
				.value("kRME", asmjit::CpuFeatures::ARM::kRME)
				.value("kRNG", asmjit::CpuFeatures::ARM::kRNG)
				.value("kRNG_TRAP", asmjit::CpuFeatures::ARM::kRNG_TRAP)
				.value("kRPRES", asmjit::CpuFeatures::ARM::kRPRES)
				.value("kRPRFM", asmjit::CpuFeatures::ARM::kRPRFM)
				.value("kS1PIE", asmjit::CpuFeatures::ARM::kS1PIE)
				.value("kS1POE", asmjit::CpuFeatures::ARM::kS1POE)
				.value("kS2PIE", asmjit::CpuFeatures::ARM::kS2PIE)
				.value("kS2POE", asmjit::CpuFeatures::ARM::kS2POE)
				.value("kSB", asmjit::CpuFeatures::ARM::kSB)
				.value("kSCTLR2", asmjit::CpuFeatures::ARM::kSCTLR2)
				.value("kSEBEP", asmjit::CpuFeatures::ARM::kSEBEP)
				.value("kSEL2", asmjit::CpuFeatures::ARM::kSEL2)
				.value("kSHA1", asmjit::CpuFeatures::ARM::kSHA1)
				.value("kSHA256", asmjit::CpuFeatures::ARM::kSHA256)
				.value("kSHA3", asmjit::CpuFeatures::ARM::kSHA3)
				.value("kSHA512", asmjit::CpuFeatures::ARM::kSHA512)
				.value("kSM3", asmjit::CpuFeatures::ARM::kSM3)
				.value("kSM4", asmjit::CpuFeatures::ARM::kSM4)
				.value("kSME", asmjit::CpuFeatures::ARM::kSME)
				.value("kSME2", asmjit::CpuFeatures::ARM::kSME2)
				.value("kSME2_1", asmjit::CpuFeatures::ARM::kSME2_1)
				.value("kSME_B16B16", asmjit::CpuFeatures::ARM::kSME_B16B16)
				.value("kSME_B16F32", asmjit::CpuFeatures::ARM::kSME_B16F32)
				.value("kSME_BI32I32", asmjit::CpuFeatures::ARM::kSME_BI32I32)
				.value("kSME_F16F16", asmjit::CpuFeatures::ARM::kSME_F16F16)
				.value("kSME_F16F32", asmjit::CpuFeatures::ARM::kSME_F16F32)
				.value("kSME_F32F32", asmjit::CpuFeatures::ARM::kSME_F32F32)
				.value("kSME_F64F64", asmjit::CpuFeatures::ARM::kSME_F64F64)
				.value("kSME_F8F16", asmjit::CpuFeatures::ARM::kSME_F8F16)
				.value("kSME_F8F32", asmjit::CpuFeatures::ARM::kSME_F8F32)
				.value("kSME_FA64", asmjit::CpuFeatures::ARM::kSME_FA64)
				.value("kSME_I16I32", asmjit::CpuFeatures::ARM::kSME_I16I32)
				.value("kSME_I16I64", asmjit::CpuFeatures::ARM::kSME_I16I64)
				.value("kSME_I8I32", asmjit::CpuFeatures::ARM::kSME_I8I32)
				.value("kSME_LUTv2", asmjit::CpuFeatures::ARM::kSME_LUTv2)
				.value("kSPE", asmjit::CpuFeatures::ARM::kSPE)
				.value("kSPE1_1", asmjit::CpuFeatures::ARM::kSPE1_1)
				.value("kSPE1_2", asmjit::CpuFeatures::ARM::kSPE1_2)
				.value("kSPE1_3", asmjit::CpuFeatures::ARM::kSPE1_3)
				.value("kSPE1_4", asmjit::CpuFeatures::ARM::kSPE1_4)
				.value("kSPE_ALTCLK", asmjit::CpuFeatures::ARM::kSPE_ALTCLK)
				.value("kSPE_CRR", asmjit::CpuFeatures::ARM::kSPE_CRR)
				.value("kSPE_EFT", asmjit::CpuFeatures::ARM::kSPE_EFT)
				.value("kSPE_FDS", asmjit::CpuFeatures::ARM::kSPE_FDS)
				.value("kSPE_FPF", asmjit::CpuFeatures::ARM::kSPE_FPF)
				.value("kSPE_SME", asmjit::CpuFeatures::ARM::kSPE_SME)
				.value("kSPECRES", asmjit::CpuFeatures::ARM::kSPECRES)
				.value("kSPECRES2", asmjit::CpuFeatures::ARM::kSPECRES2)
				.value("kSPMU", asmjit::CpuFeatures::ARM::kSPMU)
				.value("kSSBS", asmjit::CpuFeatures::ARM::kSSBS)
				.value("kSSBS2", asmjit::CpuFeatures::ARM::kSSBS2)
				.value("kSSVE_FP8DOT2", asmjit::CpuFeatures::ARM::kSSVE_FP8DOT2)
				.value("kSSVE_FP8DOT4", asmjit::CpuFeatures::ARM::kSSVE_FP8DOT4)
				.value("kSSVE_FP8FMA", asmjit::CpuFeatures::ARM::kSSVE_FP8FMA)
				.value("kSVE", asmjit::CpuFeatures::ARM::kSVE)
				.value("kSVE2", asmjit::CpuFeatures::ARM::kSVE2)
				.value("kSVE2_1", asmjit::CpuFeatures::ARM::kSVE2_1)
				.value("kSVE_AES", asmjit::CpuFeatures::ARM::kSVE_AES)
				.value("kSVE_B16B16", asmjit::CpuFeatures::ARM::kSVE_B16B16)
				.value("kSVE_BF16", asmjit::CpuFeatures::ARM::kSVE_BF16)
				.value("kSVE_BITPERM", asmjit::CpuFeatures::ARM::kSVE_BITPERM)
				.value("kSVE_EBF16", asmjit::CpuFeatures::ARM::kSVE_EBF16)
				.value("kSVE_F32MM", asmjit::CpuFeatures::ARM::kSVE_F32MM)
				.value("kSVE_F64MM", asmjit::CpuFeatures::ARM::kSVE_F64MM)
				.value("kSVE_I8MM", asmjit::CpuFeatures::ARM::kSVE_I8MM)
				.value("kSVE_PMULL128", asmjit::CpuFeatures::ARM::kSVE_PMULL128)
				.value("kSVE_SHA3", asmjit::CpuFeatures::ARM::kSVE_SHA3)
				.value("kSVE_SM4", asmjit::CpuFeatures::ARM::kSVE_SM4)
				.value("kSYSINSTR128", asmjit::CpuFeatures::ARM::kSYSINSTR128)
				.value("kSYSREG128", asmjit::CpuFeatures::ARM::kSYSREG128)
				.value("kTHE", asmjit::CpuFeatures::ARM::kTHE)
				.value("kTLBIOS", asmjit::CpuFeatures::ARM::kTLBIOS)
				.value("kTLBIRANGE", asmjit::CpuFeatures::ARM::kTLBIRANGE)
				.value("kTLBIW", asmjit::CpuFeatures::ARM::kTLBIW)
				.value("kTME", asmjit::CpuFeatures::ARM::kTME)
				.value("kTRF", asmjit::CpuFeatures::ARM::kTRF)
				.value("kUAO", asmjit::CpuFeatures::ARM::kUAO)
				.value("kVFP_D32", asmjit::CpuFeatures::ARM::kVFP_D32)
				.value("kVHE", asmjit::CpuFeatures::ARM::kVHE)
				.value("kVMID16", asmjit::CpuFeatures::ARM::kVMID16)
				.value("kWFXT", asmjit::CpuFeatures::ARM::kWFXT)
				.value("kXNX", asmjit::CpuFeatures::ARM::kXNX)
				.value("kXS", asmjit::CpuFeatures::ARM::kXS)
				.value("kMaxValue", asmjit::CpuFeatures::ARM::kMaxValue)
				.export_values();

			cl.def("hasTHUMB", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTHUMB, "C++: asmjit::CpuFeatures::ARM::hasTHUMB() const --> bool");
			cl.def("hasTHUMBv2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTHUMBv2, "C++: asmjit::CpuFeatures::ARM::hasTHUMBv2() const --> bool");
			cl.def("hasARMv6", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasARMv6, "C++: asmjit::CpuFeatures::ARM::hasARMv6() const --> bool");
			cl.def("hasARMv7", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasARMv7, "C++: asmjit::CpuFeatures::ARM::hasARMv7() const --> bool");
			cl.def("hasARMv8a", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasARMv8a, "C++: asmjit::CpuFeatures::ARM::hasARMv8a() const --> bool");
			cl.def("hasABLE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasABLE, "C++: asmjit::CpuFeatures::ARM::hasABLE() const --> bool");
			cl.def("hasADERR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasADERR, "C++: asmjit::CpuFeatures::ARM::hasADERR() const --> bool");
			cl.def("hasAES", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasAES, "C++: asmjit::CpuFeatures::ARM::hasAES() const --> bool");
			cl.def("hasAFP", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasAFP, "C++: asmjit::CpuFeatures::ARM::hasAFP() const --> bool");
			cl.def("hasAIE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasAIE, "C++: asmjit::CpuFeatures::ARM::hasAIE() const --> bool");
			cl.def("hasAMU1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasAMU1, "C++: asmjit::CpuFeatures::ARM::hasAMU1() const --> bool");
			cl.def("hasAMU1_1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasAMU1_1, "C++: asmjit::CpuFeatures::ARM::hasAMU1_1() const --> bool");
			cl.def("hasANERR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasANERR, "C++: asmjit::CpuFeatures::ARM::hasANERR() const --> bool");
			cl.def("hasASIMD", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasASIMD, "C++: asmjit::CpuFeatures::ARM::hasASIMD() const --> bool");
			cl.def("hasBF16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasBF16, "C++: asmjit::CpuFeatures::ARM::hasBF16() const --> bool");
			cl.def("hasBRBE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasBRBE, "C++: asmjit::CpuFeatures::ARM::hasBRBE() const --> bool");
			cl.def("hasBTI", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasBTI, "C++: asmjit::CpuFeatures::ARM::hasBTI() const --> bool");
			cl.def("hasBWE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasBWE, "C++: asmjit::CpuFeatures::ARM::hasBWE() const --> bool");
			cl.def("hasCCIDX", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCCIDX, "C++: asmjit::CpuFeatures::ARM::hasCCIDX() const --> bool");
			cl.def("hasCHK", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCHK, "C++: asmjit::CpuFeatures::ARM::hasCHK() const --> bool");
			cl.def("hasCLRBHB", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCLRBHB, "C++: asmjit::CpuFeatures::ARM::hasCLRBHB() const --> bool");
			cl.def("hasCMOW", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCMOW, "C++: asmjit::CpuFeatures::ARM::hasCMOW() const --> bool");
			cl.def("hasCONSTPACFIELD", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCONSTPACFIELD, "C++: asmjit::CpuFeatures::ARM::hasCONSTPACFIELD() const --> bool");
			cl.def("hasCPA", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCPA, "C++: asmjit::CpuFeatures::ARM::hasCPA() const --> bool");
			cl.def("hasCPA2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCPA2, "C++: asmjit::CpuFeatures::ARM::hasCPA2() const --> bool");
			cl.def("hasCPUID", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCPUID, "C++: asmjit::CpuFeatures::ARM::hasCPUID() const --> bool");
			cl.def("hasCRC32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCRC32, "C++: asmjit::CpuFeatures::ARM::hasCRC32() const --> bool");
			cl.def("hasCSSC", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCSSC, "C++: asmjit::CpuFeatures::ARM::hasCSSC() const --> bool");
			cl.def("hasCSV2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCSV2, "C++: asmjit::CpuFeatures::ARM::hasCSV2() const --> bool");
			cl.def("hasCSV2_3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCSV2_3, "C++: asmjit::CpuFeatures::ARM::hasCSV2_3() const --> bool");
			cl.def("hasCSV3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasCSV3, "C++: asmjit::CpuFeatures::ARM::hasCSV3() const --> bool");
			cl.def("hasD128", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasD128, "C++: asmjit::CpuFeatures::ARM::hasD128() const --> bool");
			cl.def("hasDGH", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasDGH, "C++: asmjit::CpuFeatures::ARM::hasDGH() const --> bool");
			cl.def("hasDIT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasDIT, "C++: asmjit::CpuFeatures::ARM::hasDIT() const --> bool");
			cl.def("hasDOTPROD", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasDOTPROD, "C++: asmjit::CpuFeatures::ARM::hasDOTPROD() const --> bool");
			cl.def("hasDPB", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasDPB, "C++: asmjit::CpuFeatures::ARM::hasDPB() const --> bool");
			cl.def("hasDPB2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasDPB2, "C++: asmjit::CpuFeatures::ARM::hasDPB2() const --> bool");
			cl.def("hasEBEP", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasEBEP, "C++: asmjit::CpuFeatures::ARM::hasEBEP() const --> bool");
			cl.def("hasEBF16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasEBF16, "C++: asmjit::CpuFeatures::ARM::hasEBF16() const --> bool");
			cl.def("hasECBHB", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasECBHB, "C++: asmjit::CpuFeatures::ARM::hasECBHB() const --> bool");
			cl.def("hasECV", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasECV, "C++: asmjit::CpuFeatures::ARM::hasECV() const --> bool");
			cl.def("hasEDHSR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasEDHSR, "C++: asmjit::CpuFeatures::ARM::hasEDHSR() const --> bool");
			cl.def("hasEDSP", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasEDSP, "C++: asmjit::CpuFeatures::ARM::hasEDSP() const --> bool");
			cl.def("hasFAMINMAX", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFAMINMAX, "C++: asmjit::CpuFeatures::ARM::hasFAMINMAX() const --> bool");
			cl.def("hasFCMA", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFCMA, "C++: asmjit::CpuFeatures::ARM::hasFCMA() const --> bool");
			cl.def("hasFGT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFGT, "C++: asmjit::CpuFeatures::ARM::hasFGT() const --> bool");
			cl.def("hasFGT2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFGT2, "C++: asmjit::CpuFeatures::ARM::hasFGT2() const --> bool");
			cl.def("hasFHM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFHM, "C++: asmjit::CpuFeatures::ARM::hasFHM() const --> bool");
			cl.def("hasFLAGM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFLAGM, "C++: asmjit::CpuFeatures::ARM::hasFLAGM() const --> bool");
			cl.def("hasFLAGM2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFLAGM2, "C++: asmjit::CpuFeatures::ARM::hasFLAGM2() const --> bool");
			cl.def("hasFMAC", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFMAC, "C++: asmjit::CpuFeatures::ARM::hasFMAC() const --> bool");
			cl.def("hasFP", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFP, "C++: asmjit::CpuFeatures::ARM::hasFP() const --> bool");
			cl.def("hasFP16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFP16, "C++: asmjit::CpuFeatures::ARM::hasFP16() const --> bool");
			cl.def("hasFP16CONV", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFP16CONV, "C++: asmjit::CpuFeatures::ARM::hasFP16CONV() const --> bool");
			cl.def("hasFP8", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFP8, "C++: asmjit::CpuFeatures::ARM::hasFP8() const --> bool");
			cl.def("hasFP8DOT2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFP8DOT2, "C++: asmjit::CpuFeatures::ARM::hasFP8DOT2() const --> bool");
			cl.def("hasFP8DOT4", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFP8DOT4, "C++: asmjit::CpuFeatures::ARM::hasFP8DOT4() const --> bool");
			cl.def("hasFP8FMA", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFP8FMA, "C++: asmjit::CpuFeatures::ARM::hasFP8FMA() const --> bool");
			cl.def("hasFPMR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFPMR, "C++: asmjit::CpuFeatures::ARM::hasFPMR() const --> bool");
			cl.def("hasFRINTTS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasFRINTTS, "C++: asmjit::CpuFeatures::ARM::hasFRINTTS() const --> bool");
			cl.def("hasGCS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasGCS, "C++: asmjit::CpuFeatures::ARM::hasGCS() const --> bool");
			cl.def("hasHACDBS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHACDBS, "C++: asmjit::CpuFeatures::ARM::hasHACDBS() const --> bool");
			cl.def("hasHAFDBS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHAFDBS, "C++: asmjit::CpuFeatures::ARM::hasHAFDBS() const --> bool");
			cl.def("hasHAFT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHAFT, "C++: asmjit::CpuFeatures::ARM::hasHAFT() const --> bool");
			cl.def("hasHDBSS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHDBSS, "C++: asmjit::CpuFeatures::ARM::hasHDBSS() const --> bool");
			cl.def("hasHBC", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHBC, "C++: asmjit::CpuFeatures::ARM::hasHBC() const --> bool");
			cl.def("hasHCX", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHCX, "C++: asmjit::CpuFeatures::ARM::hasHCX() const --> bool");
			cl.def("hasHPDS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHPDS, "C++: asmjit::CpuFeatures::ARM::hasHPDS() const --> bool");
			cl.def("hasHPDS2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasHPDS2, "C++: asmjit::CpuFeatures::ARM::hasHPDS2() const --> bool");
			cl.def("hasI8MM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasI8MM, "C++: asmjit::CpuFeatures::ARM::hasI8MM() const --> bool");
			cl.def("hasIDIVA", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasIDIVA, "C++: asmjit::CpuFeatures::ARM::hasIDIVA() const --> bool");
			cl.def("hasIDIVT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasIDIVT, "C++: asmjit::CpuFeatures::ARM::hasIDIVT() const --> bool");
			cl.def("hasITE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasITE, "C++: asmjit::CpuFeatures::ARM::hasITE() const --> bool");
			cl.def("hasJSCVT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasJSCVT, "C++: asmjit::CpuFeatures::ARM::hasJSCVT() const --> bool");
			cl.def("hasLOR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLOR, "C++: asmjit::CpuFeatures::ARM::hasLOR() const --> bool");
			cl.def("hasLRCPC", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLRCPC, "C++: asmjit::CpuFeatures::ARM::hasLRCPC() const --> bool");
			cl.def("hasLRCPC2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLRCPC2, "C++: asmjit::CpuFeatures::ARM::hasLRCPC2() const --> bool");
			cl.def("hasLRCPC3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLRCPC3, "C++: asmjit::CpuFeatures::ARM::hasLRCPC3() const --> bool");
			cl.def("hasLS64", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLS64, "C++: asmjit::CpuFeatures::ARM::hasLS64() const --> bool");
			cl.def("hasLS64_ACCDATA", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLS64_ACCDATA, "C++: asmjit::CpuFeatures::ARM::hasLS64_ACCDATA() const --> bool");
			cl.def("hasLS64_V", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLS64_V, "C++: asmjit::CpuFeatures::ARM::hasLS64_V() const --> bool");
			cl.def("hasLSE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLSE, "C++: asmjit::CpuFeatures::ARM::hasLSE() const --> bool");
			cl.def("hasLSE128", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLSE128, "C++: asmjit::CpuFeatures::ARM::hasLSE128() const --> bool");
			cl.def("hasLSE2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLSE2, "C++: asmjit::CpuFeatures::ARM::hasLSE2() const --> bool");
			cl.def("hasLUT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLUT, "C++: asmjit::CpuFeatures::ARM::hasLUT() const --> bool");
			cl.def("hasLVA", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLVA, "C++: asmjit::CpuFeatures::ARM::hasLVA() const --> bool");
			cl.def("hasLVA3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasLVA3, "C++: asmjit::CpuFeatures::ARM::hasLVA3() const --> bool");
			cl.def("hasMEC", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMEC, "C++: asmjit::CpuFeatures::ARM::hasMEC() const --> bool");
			cl.def("hasMOPS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMOPS, "C++: asmjit::CpuFeatures::ARM::hasMOPS() const --> bool");
			cl.def("hasMPAM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMPAM, "C++: asmjit::CpuFeatures::ARM::hasMPAM() const --> bool");
			cl.def("hasMTE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE, "C++: asmjit::CpuFeatures::ARM::hasMTE() const --> bool");
			cl.def("hasMTE2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE2, "C++: asmjit::CpuFeatures::ARM::hasMTE2() const --> bool");
			cl.def("hasMTE3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE3, "C++: asmjit::CpuFeatures::ARM::hasMTE3() const --> bool");
			cl.def("hasMTE4", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE4, "C++: asmjit::CpuFeatures::ARM::hasMTE4() const --> bool");
			cl.def("hasMTE_ASYM_FAULT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE_ASYM_FAULT, "C++: asmjit::CpuFeatures::ARM::hasMTE_ASYM_FAULT() const --> bool");
			cl.def("hasMTE_ASYNC", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE_ASYNC, "C++: asmjit::CpuFeatures::ARM::hasMTE_ASYNC() const --> bool");
			cl.def("hasMTE_CANONICAL_TAGS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE_CANONICAL_TAGS, "C++: asmjit::CpuFeatures::ARM::hasMTE_CANONICAL_TAGS() const --> bool");
			cl.def("hasMTE_NO_ADDRESS_TAGS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE_NO_ADDRESS_TAGS, "C++: asmjit::CpuFeatures::ARM::hasMTE_NO_ADDRESS_TAGS() const --> bool");
			cl.def("hasMTE_PERM_S1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE_PERM_S1, "C++: asmjit::CpuFeatures::ARM::hasMTE_PERM_S1() const --> bool");
			cl.def("hasMTE_STORE_ONLY", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE_STORE_ONLY, "C++: asmjit::CpuFeatures::ARM::hasMTE_STORE_ONLY() const --> bool");
			cl.def("hasMTE_TAGGED_FAR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTE_TAGGED_FAR, "C++: asmjit::CpuFeatures::ARM::hasMTE_TAGGED_FAR() const --> bool");
			cl.def("hasMTPMU", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasMTPMU, "C++: asmjit::CpuFeatures::ARM::hasMTPMU() const --> bool");
			cl.def("hasNMI", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasNMI, "C++: asmjit::CpuFeatures::ARM::hasNMI() const --> bool");
			cl.def("hasNV", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasNV, "C++: asmjit::CpuFeatures::ARM::hasNV() const --> bool");
			cl.def("hasNV2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasNV2, "C++: asmjit::CpuFeatures::ARM::hasNV2() const --> bool");
			cl.def("hasPAN", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPAN, "C++: asmjit::CpuFeatures::ARM::hasPAN() const --> bool");
			cl.def("hasPAN2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPAN2, "C++: asmjit::CpuFeatures::ARM::hasPAN2() const --> bool");
			cl.def("hasPAN3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPAN3, "C++: asmjit::CpuFeatures::ARM::hasPAN3() const --> bool");
			cl.def("hasPAUTH", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPAUTH, "C++: asmjit::CpuFeatures::ARM::hasPAUTH() const --> bool");
			cl.def("hasPFAR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPFAR, "C++: asmjit::CpuFeatures::ARM::hasPFAR() const --> bool");
			cl.def("hasPMU", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPMU, "C++: asmjit::CpuFeatures::ARM::hasPMU() const --> bool");
			cl.def("hasPMULL", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPMULL, "C++: asmjit::CpuFeatures::ARM::hasPMULL() const --> bool");
			cl.def("hasPRFMSLC", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasPRFMSLC, "C++: asmjit::CpuFeatures::ARM::hasPRFMSLC() const --> bool");
			cl.def("hasRAS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRAS, "C++: asmjit::CpuFeatures::ARM::hasRAS() const --> bool");
			cl.def("hasRAS1_1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRAS1_1, "C++: asmjit::CpuFeatures::ARM::hasRAS1_1() const --> bool");
			cl.def("hasRAS2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRAS2, "C++: asmjit::CpuFeatures::ARM::hasRAS2() const --> bool");
			cl.def("hasRASSA2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRASSA2, "C++: asmjit::CpuFeatures::ARM::hasRASSA2() const --> bool");
			cl.def("hasRDM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRDM, "C++: asmjit::CpuFeatures::ARM::hasRDM() const --> bool");
			cl.def("hasRME", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRME, "C++: asmjit::CpuFeatures::ARM::hasRME() const --> bool");
			cl.def("hasRNG", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRNG, "C++: asmjit::CpuFeatures::ARM::hasRNG() const --> bool");
			cl.def("hasRNG_TRAP", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRNG_TRAP, "C++: asmjit::CpuFeatures::ARM::hasRNG_TRAP() const --> bool");
			cl.def("hasRPRES", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRPRES, "C++: asmjit::CpuFeatures::ARM::hasRPRES() const --> bool");
			cl.def("hasRPRFM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasRPRFM, "C++: asmjit::CpuFeatures::ARM::hasRPRFM() const --> bool");
			cl.def("hasS1PIE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasS1PIE, "C++: asmjit::CpuFeatures::ARM::hasS1PIE() const --> bool");
			cl.def("hasS1POE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasS1POE, "C++: asmjit::CpuFeatures::ARM::hasS1POE() const --> bool");
			cl.def("hasS2PIE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasS2PIE, "C++: asmjit::CpuFeatures::ARM::hasS2PIE() const --> bool");
			cl.def("hasS2POE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasS2POE, "C++: asmjit::CpuFeatures::ARM::hasS2POE() const --> bool");
			cl.def("hasSB", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSB, "C++: asmjit::CpuFeatures::ARM::hasSB() const --> bool");
			cl.def("hasSCTLR2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSCTLR2, "C++: asmjit::CpuFeatures::ARM::hasSCTLR2() const --> bool");
			cl.def("hasSEBEP", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSEBEP, "C++: asmjit::CpuFeatures::ARM::hasSEBEP() const --> bool");
			cl.def("hasSEL2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSEL2, "C++: asmjit::CpuFeatures::ARM::hasSEL2() const --> bool");
			cl.def("hasSHA1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSHA1, "C++: asmjit::CpuFeatures::ARM::hasSHA1() const --> bool");
			cl.def("hasSHA256", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSHA256, "C++: asmjit::CpuFeatures::ARM::hasSHA256() const --> bool");
			cl.def("hasSHA3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSHA3, "C++: asmjit::CpuFeatures::ARM::hasSHA3() const --> bool");
			cl.def("hasSHA512", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSHA512, "C++: asmjit::CpuFeatures::ARM::hasSHA512() const --> bool");
			cl.def("hasSM3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSM3, "C++: asmjit::CpuFeatures::ARM::hasSM3() const --> bool");
			cl.def("hasSM4", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSM4, "C++: asmjit::CpuFeatures::ARM::hasSM4() const --> bool");
			cl.def("hasSME", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME, "C++: asmjit::CpuFeatures::ARM::hasSME() const --> bool");
			cl.def("hasSME2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME2, "C++: asmjit::CpuFeatures::ARM::hasSME2() const --> bool");
			cl.def("hasSME2_1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME2_1, "C++: asmjit::CpuFeatures::ARM::hasSME2_1() const --> bool");
			cl.def("hasSME_B16B16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_B16B16, "C++: asmjit::CpuFeatures::ARM::hasSME_B16B16() const --> bool");
			cl.def("hasSME_B16F32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_B16F32, "C++: asmjit::CpuFeatures::ARM::hasSME_B16F32() const --> bool");
			cl.def("hasSME_BI32I32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_BI32I32, "C++: asmjit::CpuFeatures::ARM::hasSME_BI32I32() const --> bool");
			cl.def("hasSME_F16F16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_F16F16, "C++: asmjit::CpuFeatures::ARM::hasSME_F16F16() const --> bool");
			cl.def("hasSME_F16F32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_F16F32, "C++: asmjit::CpuFeatures::ARM::hasSME_F16F32() const --> bool");
			cl.def("hasSME_F32F32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_F32F32, "C++: asmjit::CpuFeatures::ARM::hasSME_F32F32() const --> bool");
			cl.def("hasSME_F64F64", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_F64F64, "C++: asmjit::CpuFeatures::ARM::hasSME_F64F64() const --> bool");
			cl.def("hasSME_F8F16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_F8F16, "C++: asmjit::CpuFeatures::ARM::hasSME_F8F16() const --> bool");
			cl.def("hasSME_F8F32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_F8F32, "C++: asmjit::CpuFeatures::ARM::hasSME_F8F32() const --> bool");
			cl.def("hasSME_FA64", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_FA64, "C++: asmjit::CpuFeatures::ARM::hasSME_FA64() const --> bool");
			cl.def("hasSME_I16I32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_I16I32, "C++: asmjit::CpuFeatures::ARM::hasSME_I16I32() const --> bool");
			cl.def("hasSME_I16I64", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_I16I64, "C++: asmjit::CpuFeatures::ARM::hasSME_I16I64() const --> bool");
			cl.def("hasSME_I8I32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_I8I32, "C++: asmjit::CpuFeatures::ARM::hasSME_I8I32() const --> bool");
			cl.def("hasSME_LUTv2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSME_LUTv2, "C++: asmjit::CpuFeatures::ARM::hasSME_LUTv2() const --> bool");
			cl.def("hasSPE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE, "C++: asmjit::CpuFeatures::ARM::hasSPE() const --> bool");
			cl.def("hasSPE1_1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE1_1, "C++: asmjit::CpuFeatures::ARM::hasSPE1_1() const --> bool");
			cl.def("hasSPE1_2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE1_2, "C++: asmjit::CpuFeatures::ARM::hasSPE1_2() const --> bool");
			cl.def("hasSPE1_3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE1_3, "C++: asmjit::CpuFeatures::ARM::hasSPE1_3() const --> bool");
			cl.def("hasSPE1_4", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE1_4, "C++: asmjit::CpuFeatures::ARM::hasSPE1_4() const --> bool");
			cl.def("hasSPE_ALTCLK", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE_ALTCLK, "C++: asmjit::CpuFeatures::ARM::hasSPE_ALTCLK() const --> bool");
			cl.def("hasSPE_CRR", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE_CRR, "C++: asmjit::CpuFeatures::ARM::hasSPE_CRR() const --> bool");
			cl.def("hasSPE_EFT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE_EFT, "C++: asmjit::CpuFeatures::ARM::hasSPE_EFT() const --> bool");
			cl.def("hasSPE_FDS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE_FDS, "C++: asmjit::CpuFeatures::ARM::hasSPE_FDS() const --> bool");
			cl.def("hasSPE_FPF", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE_FPF, "C++: asmjit::CpuFeatures::ARM::hasSPE_FPF() const --> bool");
			cl.def("hasSPE_SME", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPE_SME, "C++: asmjit::CpuFeatures::ARM::hasSPE_SME() const --> bool");
			cl.def("hasSPECRES", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPECRES, "C++: asmjit::CpuFeatures::ARM::hasSPECRES() const --> bool");
			cl.def("hasSPECRES2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPECRES2, "C++: asmjit::CpuFeatures::ARM::hasSPECRES2() const --> bool");
			cl.def("hasSPMU", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSPMU, "C++: asmjit::CpuFeatures::ARM::hasSPMU() const --> bool");
			cl.def("hasSSBS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSSBS, "C++: asmjit::CpuFeatures::ARM::hasSSBS() const --> bool");
			cl.def("hasSSBS2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSSBS2, "C++: asmjit::CpuFeatures::ARM::hasSSBS2() const --> bool");
			cl.def("hasSSVE_FP8DOT2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSSVE_FP8DOT2, "C++: asmjit::CpuFeatures::ARM::hasSSVE_FP8DOT2() const --> bool");
			cl.def("hasSSVE_FP8DOT4", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSSVE_FP8DOT4, "C++: asmjit::CpuFeatures::ARM::hasSSVE_FP8DOT4() const --> bool");
			cl.def("hasSSVE_FP8FMA", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSSVE_FP8FMA, "C++: asmjit::CpuFeatures::ARM::hasSSVE_FP8FMA() const --> bool");
			cl.def("hasSVE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE, "C++: asmjit::CpuFeatures::ARM::hasSVE() const --> bool");
			cl.def("hasSVE2", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE2, "C++: asmjit::CpuFeatures::ARM::hasSVE2() const --> bool");
			cl.def("hasSVE2_1", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE2_1, "C++: asmjit::CpuFeatures::ARM::hasSVE2_1() const --> bool");
			cl.def("hasSVE_AES", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_AES, "C++: asmjit::CpuFeatures::ARM::hasSVE_AES() const --> bool");
			cl.def("hasSVE_B16B16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_B16B16, "C++: asmjit::CpuFeatures::ARM::hasSVE_B16B16() const --> bool");
			cl.def("hasSVE_BF16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_BF16, "C++: asmjit::CpuFeatures::ARM::hasSVE_BF16() const --> bool");
			cl.def("hasSVE_BITPERM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_BITPERM, "C++: asmjit::CpuFeatures::ARM::hasSVE_BITPERM() const --> bool");
			cl.def("hasSVE_EBF16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_EBF16, "C++: asmjit::CpuFeatures::ARM::hasSVE_EBF16() const --> bool");
			cl.def("hasSVE_F32MM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_F32MM, "C++: asmjit::CpuFeatures::ARM::hasSVE_F32MM() const --> bool");
			cl.def("hasSVE_F64MM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_F64MM, "C++: asmjit::CpuFeatures::ARM::hasSVE_F64MM() const --> bool");
			cl.def("hasSVE_I8MM", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_I8MM, "C++: asmjit::CpuFeatures::ARM::hasSVE_I8MM() const --> bool");
			cl.def("hasSVE_PMULL128", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_PMULL128, "C++: asmjit::CpuFeatures::ARM::hasSVE_PMULL128() const --> bool");
			cl.def("hasSVE_SHA3", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_SHA3, "C++: asmjit::CpuFeatures::ARM::hasSVE_SHA3() const --> bool");
			cl.def("hasSVE_SM4", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSVE_SM4, "C++: asmjit::CpuFeatures::ARM::hasSVE_SM4() const --> bool");
			cl.def("hasSYSINSTR128", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSYSINSTR128, "C++: asmjit::CpuFeatures::ARM::hasSYSINSTR128() const --> bool");
			cl.def("hasSYSREG128", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasSYSREG128, "C++: asmjit::CpuFeatures::ARM::hasSYSREG128() const --> bool");
			cl.def("hasTHE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTHE, "C++: asmjit::CpuFeatures::ARM::hasTHE() const --> bool");
			cl.def("hasTLBIOS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTLBIOS, "C++: asmjit::CpuFeatures::ARM::hasTLBIOS() const --> bool");
			cl.def("hasTLBIRANGE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTLBIRANGE, "C++: asmjit::CpuFeatures::ARM::hasTLBIRANGE() const --> bool");
			cl.def("hasTLBIW", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTLBIW, "C++: asmjit::CpuFeatures::ARM::hasTLBIW() const --> bool");
			cl.def("hasTME", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTME, "C++: asmjit::CpuFeatures::ARM::hasTME() const --> bool");
			cl.def("hasTRF", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasTRF, "C++: asmjit::CpuFeatures::ARM::hasTRF() const --> bool");
			cl.def("hasUAO", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasUAO, "C++: asmjit::CpuFeatures::ARM::hasUAO() const --> bool");
			cl.def("hasVFP_D32", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasVFP_D32, "C++: asmjit::CpuFeatures::ARM::hasVFP_D32() const --> bool");
			cl.def("hasVHE", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasVHE, "C++: asmjit::CpuFeatures::ARM::hasVHE() const --> bool");
			cl.def("hasVMID16", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasVMID16, "C++: asmjit::CpuFeatures::ARM::hasVMID16() const --> bool");
			cl.def("hasWFXT", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasWFXT, "C++: asmjit::CpuFeatures::ARM::hasWFXT() const --> bool");
			cl.def("hasXNX", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasXNX, "C++: asmjit::CpuFeatures::ARM::hasXNX() const --> bool");
			cl.def("hasXS", (bool (asmjit::CpuFeatures::ARM::*)() const) &asmjit::CpuFeatures::ARM::hasXS, "C++: asmjit::CpuFeatures::ARM::hasXS() const --> bool");
		}

	}
}
