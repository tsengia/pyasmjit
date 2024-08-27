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

void bind_unknown_unknown_37(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::VirtMem::CachePolicy file: line:24
	pybind11::enum_<asmjit::VirtMem::CachePolicy>(M("asmjit::VirtMem"), "CachePolicy", "Describes whether instruction cache should be flushed after a write operation.")
		.value("kDefault", asmjit::VirtMem::CachePolicy::kDefault)
		.value("kFlushAfterWrite", asmjit::VirtMem::CachePolicy::kFlushAfterWrite)
		.value("kNeverFlush", asmjit::VirtMem::CachePolicy::kNeverFlush);

;

	// asmjit::VirtMem::flushInstructionCache(void *, unsigned long) file: line:42
	M("asmjit::VirtMem").def("flushInstructionCache", (void (*)(void *, unsigned long)) &asmjit::VirtMem::flushInstructionCache, "Flushes instruction cache in the given region.\n\n Only useful on non-x86 architectures, however, it's a good practice to call it on any platform to make your\n code more portable.\n\nC++: asmjit::VirtMem::flushInstructionCache(void *, unsigned long) --> void", pybind11::arg("p"), pybind11::arg("size"));

	{ // asmjit::VirtMem::Info file: line:45
		pybind11::class_<asmjit::VirtMem::Info, std::shared_ptr<asmjit::VirtMem::Info>> cl(M("asmjit::VirtMem"), "Info", "Virtual memory information.");
		cl.def( pybind11::init( [](){ return new asmjit::VirtMem::Info(); } ) );
		cl.def_readwrite("pageSize", &asmjit::VirtMem::Info::pageSize);
		cl.def_readwrite("pageGranularity", &asmjit::VirtMem::Info::pageGranularity);
	}
	// asmjit::VirtMem::info() file: line:53
	M("asmjit::VirtMem").def("info", (struct asmjit::VirtMem::Info (*)()) &asmjit::VirtMem::info, "Returns virtual memory information, see `VirtMem::Info` for more details.\n\nC++: asmjit::VirtMem::info() --> struct asmjit::VirtMem::Info");

	// asmjit::VirtMem::largePageSize() file: line:62
	M("asmjit::VirtMem").def("largePageSize", (unsigned long (*)()) &asmjit::VirtMem::largePageSize, "Returns the size of the smallest large page supported.\n\n AsmJit only uses the smallest large page at the moment as these are usually perfectly sized for executable\n memory allocation (standard size is 2MB, but different sizes are possible).\n\n Returns either the detected large page size or 0, if large page support is either not supported by AsmJit\n or not accessible to the process.\n\nC++: asmjit::VirtMem::largePageSize() --> unsigned long");

	// asmjit::VirtMem::MemoryFlags file: line:65
	pybind11::enum_<asmjit::VirtMem::MemoryFlags>(M("asmjit::VirtMem"), "MemoryFlags", "Virtual memory access and mmap-specific flags.")
		.value("kNone", asmjit::VirtMem::MemoryFlags::kNone)
		.value("kAccessRead", asmjit::VirtMem::MemoryFlags::kAccessRead)
		.value("kAccessWrite", asmjit::VirtMem::MemoryFlags::kAccessWrite)
		.value("kAccessExecute", asmjit::VirtMem::MemoryFlags::kAccessExecute)
		.value("kAccessReadWrite", asmjit::VirtMem::MemoryFlags::kAccessReadWrite)
		.value("kAccessRW", asmjit::VirtMem::MemoryFlags::kAccessRW)
		.value("kAccessRX", asmjit::VirtMem::MemoryFlags::kAccessRX)
		.value("kAccessRWX", asmjit::VirtMem::MemoryFlags::kAccessRWX)
		.value("kMMapEnableMapJit", asmjit::VirtMem::MemoryFlags::kMMapEnableMapJit)
		.value("kMMapMaxAccessRead", asmjit::VirtMem::MemoryFlags::kMMapMaxAccessRead)
		.value("kMMapMaxAccessWrite", asmjit::VirtMem::MemoryFlags::kMMapMaxAccessWrite)
		.value("kMMapMaxAccessExecute", asmjit::VirtMem::MemoryFlags::kMMapMaxAccessExecute)
		.value("kMMapMaxAccessReadWrite", asmjit::VirtMem::MemoryFlags::kMMapMaxAccessReadWrite)
		.value("kMMapMaxAccessRW", asmjit::VirtMem::MemoryFlags::kMMapMaxAccessRW)
		.value("kMMapMaxAccessRX", asmjit::VirtMem::MemoryFlags::kMMapMaxAccessRX)
		.value("kMMapMaxAccessRWX", asmjit::VirtMem::MemoryFlags::kMMapMaxAccessRWX)
		.value("kMapShared", asmjit::VirtMem::MemoryFlags::kMapShared)
		.value("kMMapLargePages", asmjit::VirtMem::MemoryFlags::kMMapLargePages)
		.value("kMappingPreferTmp", asmjit::VirtMem::MemoryFlags::kMappingPreferTmp);

;

	// asmjit::VirtMem::release(void *, unsigned long) file: line:173
	M("asmjit::VirtMem").def("release", (unsigned int (*)(void *, unsigned long)) &asmjit::VirtMem::release, "Releases virtual memory previously allocated by \n\n \n The size must be the same as used by  If the size is not the same value the call\n will fail on any POSIX system, but pass on Windows, because it's implemented differently.\n\nC++: asmjit::VirtMem::release(void *, unsigned long) --> unsigned int", pybind11::arg("p"), pybind11::arg("size"));

	// asmjit::VirtMem::protect(void *, unsigned long, enum asmjit::VirtMem::MemoryFlags) file: line:176
	M("asmjit::VirtMem").def("protect", (unsigned int (*)(void *, unsigned long, enum asmjit::VirtMem::MemoryFlags)) &asmjit::VirtMem::protect, "A cross-platform wrapper around `mprotect()` (POSIX) and `VirtualProtect()` (Windows).\n\nC++: asmjit::VirtMem::protect(void *, unsigned long, enum asmjit::VirtMem::MemoryFlags) --> unsigned int", pybind11::arg("p"), pybind11::arg("size"), pybind11::arg("flags"));

	{ // asmjit::VirtMem::DualMapping file: line:181
		pybind11::class_<asmjit::VirtMem::DualMapping, std::shared_ptr<asmjit::VirtMem::DualMapping>> cl(M("asmjit::VirtMem"), "DualMapping", "Dual memory mapping used to map an anonymous memory into two memory regions where one region is read-only, but\n executable, and the second region is read+write, but not executable. See  for\n more details.");
		cl.def( pybind11::init( [](){ return new asmjit::VirtMem::DualMapping(); } ) );
	}
	// asmjit::VirtMem::allocDualMapping(struct asmjit::VirtMem::DualMapping *, unsigned long, enum asmjit::VirtMem::MemoryFlags) file: line:198
	M("asmjit::VirtMem").def("allocDualMapping", (unsigned int (*)(struct asmjit::VirtMem::DualMapping *, unsigned long, enum asmjit::VirtMem::MemoryFlags)) &asmjit::VirtMem::allocDualMapping, "Allocates virtual memory and creates two views of it where the first view has no write access. This is an addition\n to the API that should be used in cases in which the operating system either enforces W^X security policy or the\n application wants to use this policy by default to improve security and prevent an accidental (or purposed)\n self-modifying code.\n\n The memory returned in the `dm` are two independent mappings of the same shared memory region. You must use\n  to release it when it's no longer needed. Never use `VirtMem::release()` to\n release the memory returned by `allocDualMapping()` as that would fail on Windows.\n\n \n Both pointers in `dm` would be set to `nullptr` if the function fails.\n\nC++: asmjit::VirtMem::allocDualMapping(struct asmjit::VirtMem::DualMapping *, unsigned long, enum asmjit::VirtMem::MemoryFlags) --> unsigned int", pybind11::arg("dm"), pybind11::arg("size"), pybind11::arg("flags"));

	// asmjit::VirtMem::releaseDualMapping(struct asmjit::VirtMem::DualMapping *, unsigned long) file: line:203
	M("asmjit::VirtMem").def("releaseDualMapping", (unsigned int (*)(struct asmjit::VirtMem::DualMapping *, unsigned long)) &asmjit::VirtMem::releaseDualMapping, "Releases virtual memory mapping previously allocated by \n\n \n Both pointers in `dm` would be set to `nullptr` if the function succeeds.\n\nC++: asmjit::VirtMem::releaseDualMapping(struct asmjit::VirtMem::DualMapping *, unsigned long) --> unsigned int", pybind11::arg("dm"), pybind11::arg("size"));

	// asmjit::VirtMem::HardenedRuntimeFlags file: line:206
	pybind11::enum_<asmjit::VirtMem::HardenedRuntimeFlags>(M("asmjit::VirtMem"), "HardenedRuntimeFlags", "Hardened runtime flags.")
		.value("kNone", asmjit::VirtMem::HardenedRuntimeFlags::kNone)
		.value("kEnabled", asmjit::VirtMem::HardenedRuntimeFlags::kEnabled)
		.value("kMapJit", asmjit::VirtMem::HardenedRuntimeFlags::kMapJit)
		.value("kDualMapping", asmjit::VirtMem::HardenedRuntimeFlags::kDualMapping);

;

	{ // asmjit::VirtMem::HardenedRuntimeInfo file: line:228
		pybind11::class_<asmjit::VirtMem::HardenedRuntimeInfo, std::shared_ptr<asmjit::VirtMem::HardenedRuntimeInfo>> cl(M("asmjit::VirtMem"), "HardenedRuntimeInfo", "Hardened runtime information.");
		cl.def( pybind11::init( [](){ return new asmjit::VirtMem::HardenedRuntimeInfo(); } ) );
		cl.def_readwrite("flags", &asmjit::VirtMem::HardenedRuntimeInfo::flags);
		cl.def("hasFlag", (bool (asmjit::VirtMem::HardenedRuntimeInfo::*)(enum asmjit::VirtMem::HardenedRuntimeFlags) const) &asmjit::VirtMem::HardenedRuntimeInfo::hasFlag, "Tests whether the hardened runtime `flag` is set.\n\nC++: asmjit::VirtMem::HardenedRuntimeInfo::hasFlag(enum asmjit::VirtMem::HardenedRuntimeFlags) const --> bool", pybind11::arg("flag"));
	}
	// asmjit::VirtMem::hardenedRuntimeInfo() file: line:247
	M("asmjit::VirtMem").def("hardenedRuntimeInfo", (struct asmjit::VirtMem::HardenedRuntimeInfo (*)()) &asmjit::VirtMem::hardenedRuntimeInfo, "Returns runtime features provided by the OS.\n\nC++: asmjit::VirtMem::hardenedRuntimeInfo() --> struct asmjit::VirtMem::HardenedRuntimeInfo");

	// asmjit::VirtMem::ProtectJitAccess file: line:250
	pybind11::enum_<asmjit::VirtMem::ProtectJitAccess>(M("asmjit::VirtMem"), "ProtectJitAccess", "Values that can be used with `protectJitMemory()` function.")
		.value("kReadWrite", asmjit::VirtMem::ProtectJitAccess::kReadWrite)
		.value("kReadExecute", asmjit::VirtMem::ProtectJitAccess::kReadExecute);

;

	// asmjit::VirtMem::protectJitMemory(enum asmjit::VirtMem::ProtectJitAccess) file: line:275
	M("asmjit::VirtMem").def("protectJitMemory", (void (*)(enum asmjit::VirtMem::ProtectJitAccess)) &asmjit::VirtMem::protectJitMemory, "Protects access of memory mapped with MAP_JIT flag for the current thread.\n\n \n This feature is only available on Apple hardware (AArch64) at the moment and uses a non-portable\n `pthread_jit_write_protect_np()` call when available.\n\n This function must be called before and after a memory mapped with MAP_JIT flag is modified. Example:\n\n ```\n void* codePtr = ...;\n size_t codeSize = ...;\n\n VirtMem::protectJitMemory(VirtMem::ProtectJitAccess::kReadWrite);\n memcpy(codePtr, source, codeSize);\n VirtMem::protectJitMemory(VirtMem::ProtectJitAccess::kReadExecute);\n VirtMem::flushInstructionCache(codePtr, codeSize);\n ```\n\n See  which makes it simpler than the code above.\n\nC++: asmjit::VirtMem::protectJitMemory(enum asmjit::VirtMem::ProtectJitAccess) --> void", pybind11::arg("access"));

	{ // asmjit::VirtMem::ProtectJitReadWriteScope file: line:282
		pybind11::class_<asmjit::VirtMem::ProtectJitReadWriteScope, std::shared_ptr<asmjit::VirtMem::ProtectJitReadWriteScope>> cl(M("asmjit::VirtMem"), "ProtectJitReadWriteScope", "JIT protection scope that prepares the given memory block to be written to in the current thread.\n\n It calls `VirtMem::protectJitMemory(VirtMem::ProtectJitAccess::kReadWrite)` at construction time and\n `VirtMem::protectJitMemory(VirtMem::ProtectJitAccess::kReadExecute)` combined with `flushInstructionCache()`\n in destructor. The purpose of this class is to make writing to JIT memory easier.");
		cl.def( pybind11::init( [](void * a0, unsigned long const & a1){ return new asmjit::VirtMem::ProtectJitReadWriteScope(a0, a1); } ), "doc" , pybind11::arg("rxPtr"), pybind11::arg("size"));
		cl.def( pybind11::init<void *, unsigned long, enum asmjit::VirtMem::CachePolicy>(), pybind11::arg("rxPtr"), pybind11::arg("size"), pybind11::arg("policy") );



	}
}
