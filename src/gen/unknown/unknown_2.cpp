
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

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::ErrorCode file: line:158
	pybind11::enum_<asmjit::ErrorCode>(M("asmjit"), "ErrorCode", pybind11::arithmetic(), "AsmJit error codes.")
		.value("kErrorOk", asmjit::kErrorOk)
		.value("kErrorOutOfMemory", asmjit::kErrorOutOfMemory)
		.value("kErrorInvalidArgument", asmjit::kErrorInvalidArgument)
		.value("kErrorInvalidState", asmjit::kErrorInvalidState)
		.value("kErrorInvalidArch", asmjit::kErrorInvalidArch)
		.value("kErrorNotInitialized", asmjit::kErrorNotInitialized)
		.value("kErrorAlreadyInitialized", asmjit::kErrorAlreadyInitialized)
		.value("kErrorFeatureNotEnabled", asmjit::kErrorFeatureNotEnabled)
		.value("kErrorTooManyHandles", asmjit::kErrorTooManyHandles)
		.value("kErrorTooLarge", asmjit::kErrorTooLarge)
		.value("kErrorNoCodeGenerated", asmjit::kErrorNoCodeGenerated)
		.value("kErrorInvalidDirective", asmjit::kErrorInvalidDirective)
		.value("kErrorInvalidLabel", asmjit::kErrorInvalidLabel)
		.value("kErrorTooManyLabels", asmjit::kErrorTooManyLabels)
		.value("kErrorLabelAlreadyBound", asmjit::kErrorLabelAlreadyBound)
		.value("kErrorLabelAlreadyDefined", asmjit::kErrorLabelAlreadyDefined)
		.value("kErrorLabelNameTooLong", asmjit::kErrorLabelNameTooLong)
		.value("kErrorInvalidLabelName", asmjit::kErrorInvalidLabelName)
		.value("kErrorInvalidParentLabel", asmjit::kErrorInvalidParentLabel)
		.value("kErrorInvalidSection", asmjit::kErrorInvalidSection)
		.value("kErrorTooManySections", asmjit::kErrorTooManySections)
		.value("kErrorInvalidSectionName", asmjit::kErrorInvalidSectionName)
		.value("kErrorTooManyRelocations", asmjit::kErrorTooManyRelocations)
		.value("kErrorInvalidRelocEntry", asmjit::kErrorInvalidRelocEntry)
		.value("kErrorRelocOffsetOutOfRange", asmjit::kErrorRelocOffsetOutOfRange)
		.value("kErrorInvalidAssignment", asmjit::kErrorInvalidAssignment)
		.value("kErrorInvalidInstruction", asmjit::kErrorInvalidInstruction)
		.value("kErrorInvalidRegType", asmjit::kErrorInvalidRegType)
		.value("kErrorInvalidRegGroup", asmjit::kErrorInvalidRegGroup)
		.value("kErrorInvalidPhysId", asmjit::kErrorInvalidPhysId)
		.value("kErrorInvalidVirtId", asmjit::kErrorInvalidVirtId)
		.value("kErrorInvalidElementIndex", asmjit::kErrorInvalidElementIndex)
		.value("kErrorInvalidPrefixCombination", asmjit::kErrorInvalidPrefixCombination)
		.value("kErrorInvalidLockPrefix", asmjit::kErrorInvalidLockPrefix)
		.value("kErrorInvalidXAcquirePrefix", asmjit::kErrorInvalidXAcquirePrefix)
		.value("kErrorInvalidXReleasePrefix", asmjit::kErrorInvalidXReleasePrefix)
		.value("kErrorInvalidRepPrefix", asmjit::kErrorInvalidRepPrefix)
		.value("kErrorInvalidRexPrefix", asmjit::kErrorInvalidRexPrefix)
		.value("kErrorInvalidExtraReg", asmjit::kErrorInvalidExtraReg)
		.value("kErrorInvalidKMaskUse", asmjit::kErrorInvalidKMaskUse)
		.value("kErrorInvalidKZeroUse", asmjit::kErrorInvalidKZeroUse)
		.value("kErrorInvalidBroadcast", asmjit::kErrorInvalidBroadcast)
		.value("kErrorInvalidEROrSAE", asmjit::kErrorInvalidEROrSAE)
		.value("kErrorInvalidAddress", asmjit::kErrorInvalidAddress)
		.value("kErrorInvalidAddressIndex", asmjit::kErrorInvalidAddressIndex)
		.value("kErrorInvalidAddressScale", asmjit::kErrorInvalidAddressScale)
		.value("kErrorInvalidAddress64Bit", asmjit::kErrorInvalidAddress64Bit)
		.value("kErrorInvalidAddress64BitZeroExtension", asmjit::kErrorInvalidAddress64BitZeroExtension)
		.value("kErrorInvalidDisplacement", asmjit::kErrorInvalidDisplacement)
		.value("kErrorInvalidSegment", asmjit::kErrorInvalidSegment)
		.value("kErrorInvalidImmediate", asmjit::kErrorInvalidImmediate)
		.value("kErrorInvalidOperandSize", asmjit::kErrorInvalidOperandSize)
		.value("kErrorAmbiguousOperandSize", asmjit::kErrorAmbiguousOperandSize)
		.value("kErrorOperandSizeMismatch", asmjit::kErrorOperandSizeMismatch)
		.value("kErrorInvalidOption", asmjit::kErrorInvalidOption)
		.value("kErrorOptionAlreadyDefined", asmjit::kErrorOptionAlreadyDefined)
		.value("kErrorInvalidTypeId", asmjit::kErrorInvalidTypeId)
		.value("kErrorInvalidUseOfGpbHi", asmjit::kErrorInvalidUseOfGpbHi)
		.value("kErrorInvalidUseOfGpq", asmjit::kErrorInvalidUseOfGpq)
		.value("kErrorInvalidUseOfF80", asmjit::kErrorInvalidUseOfF80)
		.value("kErrorNotConsecutiveRegs", asmjit::kErrorNotConsecutiveRegs)
		.value("kErrorConsecutiveRegsAllocation", asmjit::kErrorConsecutiveRegsAllocation)
		.value("kErrorIllegalVirtReg", asmjit::kErrorIllegalVirtReg)
		.value("kErrorTooManyVirtRegs", asmjit::kErrorTooManyVirtRegs)
		.value("kErrorNoMorePhysRegs", asmjit::kErrorNoMorePhysRegs)
		.value("kErrorOverlappedRegs", asmjit::kErrorOverlappedRegs)
		.value("kErrorOverlappingStackRegWithRegArg", asmjit::kErrorOverlappingStackRegWithRegArg)
		.value("kErrorExpressionLabelNotBound", asmjit::kErrorExpressionLabelNotBound)
		.value("kErrorExpressionOverflow", asmjit::kErrorExpressionOverflow)
		.value("kErrorFailedToOpenAnonymousMemory", asmjit::kErrorFailedToOpenAnonymousMemory)
		.value("kErrorFailedToOpenFile", asmjit::kErrorFailedToOpenFile)
		.value("kErrorProtectionFailure", asmjit::kErrorProtectionFailure)
		.value("kErrorCount", asmjit::kErrorCount)
		.export_values();

;

}
