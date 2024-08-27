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

void bind_unknown_unknown_38(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::JitAllocatorOptions file: line:22
	pybind11::enum_<asmjit::JitAllocatorOptions>(M("asmjit"), "JitAllocatorOptions", "Options used by ")
		.value("kNone", asmjit::JitAllocatorOptions::kNone)
		.value("kUseDualMapping", asmjit::JitAllocatorOptions::kUseDualMapping)
		.value("kUseMultiplePools", asmjit::JitAllocatorOptions::kUseMultiplePools)
		.value("kFillUnusedMemory", asmjit::JitAllocatorOptions::kFillUnusedMemory)
		.value("kImmediateRelease", asmjit::JitAllocatorOptions::kImmediateRelease)
		.value("kDisableInitialPadding", asmjit::JitAllocatorOptions::kDisableInitialPadding)
		.value("kUseLargePages", asmjit::JitAllocatorOptions::kUseLargePages)
		.value("kAlignBlockSizeToLargePage", asmjit::JitAllocatorOptions::kAlignBlockSizeToLargePage)
		.value("kCustomFillPattern", asmjit::JitAllocatorOptions::kCustomFillPattern);

;

	{ // asmjit::JitAllocator file: line:113
		pybind11::class_<asmjit::JitAllocator, std::shared_ptr<asmjit::JitAllocator>> cl(M("asmjit"), "JitAllocator", "A simple implementation of memory manager that uses `asmjit::VirtMem`\n functions to manage virtual memory for JIT compiled code.\n\n Implementation notes:\n\n - Granularity of allocated blocks is different than granularity for a typical C malloc. In addition, the allocator\n   can use several memory pools having a different granularity to minimize the maintenance overhead. Multiple pools\n   feature requires `kFlagUseMultiplePools` flag to be set.\n\n - The allocator doesn't store any information in executable memory, instead, the implementation uses two\n   bit-vectors to manage allocated memory of each allocator-block. The first bit-vector called 'used' is used to\n   track used memory (where each bit represents memory size defined by granularity) and the second bit vector called\n   'stop' is used as a sentinel to mark where the allocated area ends.\n\n - Internally, the allocator also uses RB tree to keep track of all blocks across all pools. Each inserted block is\n   added to the tree so it can be matched fast during `release()` and `shrink()`.");
		cl.def( pybind11::init( [](){ return new asmjit::JitAllocator(); } ), "doc" );
		cl.def( pybind11::init<const struct asmjit::JitAllocator::CreateParams *>(), pybind11::arg("params") );

		cl.def("isInitialized", (bool (asmjit::JitAllocator::*)() const) &asmjit::JitAllocator::isInitialized, "C++: asmjit::JitAllocator::isInitialized() const --> bool");
		cl.def("reset", [](asmjit::JitAllocator &o) -> void { return o.reset(); }, "");
		cl.def("reset", (void (asmjit::JitAllocator::*)(enum asmjit::ResetPolicy)) &asmjit::JitAllocator::reset, "Free all allocated memory - makes all pointers returned by `alloc()` invalid.\n\n \n This function is not thread-safe as it's designed to be used when nobody else is using allocator.\n The reason is that there is no point of calling `reset()` when the allocator is still in use.\n\nC++: asmjit::JitAllocator::reset(enum asmjit::ResetPolicy) --> void", pybind11::arg("resetPolicy"));
		cl.def("options", (enum asmjit::JitAllocatorOptions (asmjit::JitAllocator::*)() const) &asmjit::JitAllocator::options, "Returns allocator options, see `Flags`.\n\nC++: asmjit::JitAllocator::options() const --> enum asmjit::JitAllocatorOptions");
		cl.def("hasOption", (bool (asmjit::JitAllocator::*)(enum asmjit::JitAllocatorOptions) const) &asmjit::JitAllocator::hasOption, "Tests whether the allocator has the given `option` set.\n\nC++: asmjit::JitAllocator::hasOption(enum asmjit::JitAllocatorOptions) const --> bool", pybind11::arg("option"));
		cl.def("blockSize", (unsigned int (asmjit::JitAllocator::*)() const) &asmjit::JitAllocator::blockSize, "Returns a base block size (a minimum size of block that the allocator would allocate).\n\nC++: asmjit::JitAllocator::blockSize() const --> unsigned int");
		cl.def("granularity", (unsigned int (asmjit::JitAllocator::*)() const) &asmjit::JitAllocator::granularity, "Returns granularity of the allocator.\n\nC++: asmjit::JitAllocator::granularity() const --> unsigned int");
		cl.def("fillPattern", (unsigned int (asmjit::JitAllocator::*)() const) &asmjit::JitAllocator::fillPattern, "Returns pattern that is used to fill unused memory if `kFlagUseFillPattern` is set.\n\nC++: asmjit::JitAllocator::fillPattern() const --> unsigned int");
		cl.def("alloc", (unsigned int (asmjit::JitAllocator::*)(class asmjit::JitAllocator::Span &, unsigned long)) &asmjit::JitAllocator::alloc, "Allocates a new memory span of the requested `size`.\n\nC++: asmjit::JitAllocator::alloc(class asmjit::JitAllocator::Span &, unsigned long) --> unsigned int", pybind11::arg("out"), pybind11::arg("size"));
		cl.def("release", (unsigned int (asmjit::JitAllocator::*)(void *)) &asmjit::JitAllocator::release, "Releases a memory block returned by `alloc()`.\n\n \n This function is thread-safe.\n\nC++: asmjit::JitAllocator::release(void *) --> unsigned int", pybind11::arg("rx"));
		cl.def("shrink", (unsigned int (asmjit::JitAllocator::*)(class asmjit::JitAllocator::Span &, unsigned long)) &asmjit::JitAllocator::shrink, "Frees extra memory allocated with `rx` by shrinking it to the given `newSize`.\n\n \n This function is thread-safe.\n\nC++: asmjit::JitAllocator::shrink(class asmjit::JitAllocator::Span &, unsigned long) --> unsigned int", pybind11::arg("span"), pybind11::arg("newSize"));
		cl.def("query", (unsigned int (asmjit::JitAllocator::*)(class asmjit::JitAllocator::Span &, void *) const) &asmjit::JitAllocator::query, "Queries information about an allocated memory block that contains the given `rx`, and writes it to `out`.\n\n If the pointer is matched, the function returns `kErrorOk` and fills `out` with the corresponding span.\n\nC++: asmjit::JitAllocator::query(class asmjit::JitAllocator::Span &, void *) const --> unsigned int", pybind11::arg("out"), pybind11::arg("rx"));
		cl.def("write", [](asmjit::JitAllocator &o, class asmjit::JitAllocator::Span & a0, unsigned long const & a1, const void * a2, unsigned long const & a3) -> unsigned int { return o.write(a0, a1, a2, a3); }, "", pybind11::arg("span"), pybind11::arg("offset"), pybind11::arg("src"), pybind11::arg("size"));
		cl.def("write", (unsigned int (asmjit::JitAllocator::*)(class asmjit::JitAllocator::Span &, unsigned long, const void *, unsigned long, enum asmjit::VirtMem::CachePolicy)) &asmjit::JitAllocator::write, "C++: asmjit::JitAllocator::write(class asmjit::JitAllocator::Span &, unsigned long, const void *, unsigned long, enum asmjit::VirtMem::CachePolicy) --> unsigned int", pybind11::arg("span"), pybind11::arg("offset"), pybind11::arg("src"), pybind11::arg("size"), pybind11::arg("policy"));
		cl.def("beginWriteScope", [](asmjit::JitAllocator &o, struct asmjit::JitAllocator::WriteScopeData & a0) -> unsigned int { return o.beginWriteScope(a0); }, "", pybind11::arg("scope"));
		cl.def("beginWriteScope", (unsigned int (asmjit::JitAllocator::*)(struct asmjit::JitAllocator::WriteScopeData &, enum asmjit::VirtMem::CachePolicy)) &asmjit::JitAllocator::beginWriteScope, "Begins a write `scope`.\n\n This is mostly for internal purposes, please use  constructor instead.\n\nC++: asmjit::JitAllocator::beginWriteScope(struct asmjit::JitAllocator::WriteScopeData &, enum asmjit::VirtMem::CachePolicy) --> unsigned int", pybind11::arg("scope"), pybind11::arg("policy"));
		cl.def("endWriteScope", (unsigned int (asmjit::JitAllocator::*)(struct asmjit::JitAllocator::WriteScopeData &)) &asmjit::JitAllocator::endWriteScope, "Ends a write `scope`.\n\n This is mostly for internal purposes, please use  destructor instead.\n\nC++: asmjit::JitAllocator::endWriteScope(struct asmjit::JitAllocator::WriteScopeData &) --> unsigned int", pybind11::arg("scope"));
		cl.def("flushWriteScope", (unsigned int (asmjit::JitAllocator::*)(struct asmjit::JitAllocator::WriteScopeData &)) &asmjit::JitAllocator::flushWriteScope, "Flushes accumulated changes in a write `scope`.\n\n This is mostly for internal purposes, please use  destructor or  instead.\n\nC++: asmjit::JitAllocator::flushWriteScope(struct asmjit::JitAllocator::WriteScopeData &) --> unsigned int", pybind11::arg("scope"));
		cl.def("scopedWrite", (unsigned int (asmjit::JitAllocator::*)(struct asmjit::JitAllocator::WriteScopeData &, class asmjit::JitAllocator::Span &, unsigned long, const void *, unsigned long)) &asmjit::JitAllocator::scopedWrite, "Alternative to `JitAllocator::write(span, offset, src, size)`, but under a write `scope`.\n\n This is mostly for internal purposes, please use  instead.\n\nC++: asmjit::JitAllocator::scopedWrite(struct asmjit::JitAllocator::WriteScopeData &, class asmjit::JitAllocator::Span &, unsigned long, const void *, unsigned long) --> unsigned int", pybind11::arg("scope"), pybind11::arg("span"), pybind11::arg("offset"), pybind11::arg("src"), pybind11::arg("size"));
		cl.def("statistics", (struct asmjit::JitAllocator::Statistics (asmjit::JitAllocator::*)() const) &asmjit::JitAllocator::statistics, "Returns JIT allocator statistics.\n\n \n This function is thread-safe.\n\nC++: asmjit::JitAllocator::statistics() const --> struct asmjit::JitAllocator::Statistics");

		{ // asmjit::JitAllocator::Impl file: line:118
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::JitAllocator::Impl, std::shared_ptr<asmjit::JitAllocator::Impl>> cl(enclosing_class, "Impl", "Visible  implementation data.");
			cl.def( pybind11::init( [](){ return new asmjit::JitAllocator::Impl(); } ) );
			cl.def_readwrite("options", &asmjit::JitAllocator::Impl::options);
			cl.def_readwrite("blockSize", &asmjit::JitAllocator::Impl::blockSize);
			cl.def_readwrite("granularity", &asmjit::JitAllocator::Impl::granularity);
			cl.def_readwrite("fillPattern", &asmjit::JitAllocator::Impl::fillPattern);
		}

		{ // asmjit::JitAllocator::CreateParams file: line:152
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::JitAllocator::CreateParams, std::shared_ptr<asmjit::JitAllocator::CreateParams>> cl(enclosing_class, "CreateParams", "Parameters that can be passed to `JitAllocator` constructor.\n\n Use it like this:\n\n ```\n // Zero initialize (zero means the default value) and change what you need.\n JitAllocator::CreateParams params {};\n params.blockSize = 1024 * 1024;\n\n // Create the allocator.\n JitAllocator allocator(&params);\n ```");
			cl.def( pybind11::init( [](){ return new asmjit::JitAllocator::CreateParams(); } ) );
			cl.def( pybind11::init( [](asmjit::JitAllocator::CreateParams const &o){ return new asmjit::JitAllocator::CreateParams(o); } ) );
			cl.def_readwrite("options", &asmjit::JitAllocator::CreateParams::options);
			cl.def_readwrite("blockSize", &asmjit::JitAllocator::CreateParams::blockSize);
			cl.def_readwrite("granularity", &asmjit::JitAllocator::CreateParams::granularity);
			cl.def_readwrite("fillPattern", &asmjit::JitAllocator::CreateParams::fillPattern);
			cl.def("reset", (void (asmjit::JitAllocator::CreateParams::*)()) &asmjit::JitAllocator::CreateParams::reset, "C++: asmjit::JitAllocator::CreateParams::reset() --> void");
			cl.def("assign", (struct asmjit::JitAllocator::CreateParams & (asmjit::JitAllocator::CreateParams::*)(const struct asmjit::JitAllocator::CreateParams &)) &asmjit::JitAllocator::CreateParams::operator=, "C++: asmjit::JitAllocator::CreateParams::operator=(const struct asmjit::JitAllocator::CreateParams &) --> struct asmjit::JitAllocator::CreateParams &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::JitAllocator::Span file: line:218
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::JitAllocator::Span, std::shared_ptr<asmjit::JitAllocator::Span>> cl(enclosing_class, "Span", "A memory reference returned by \n\n Span contains everything needed to actually write new code to the memory chunk it references.");
			cl.def( pybind11::init( [](){ return new asmjit::JitAllocator::Span(); } ) );

			pybind11::enum_<asmjit::JitAllocator::Span::Flags>(cl, "Flags", "Span flags")
				.value("kNone", asmjit::JitAllocator::Span::Flags::kNone)
				.value("kInstructionCacheClean", asmjit::JitAllocator::Span::Flags::kInstructionCacheClean);




			cl.def("rx", (void * (asmjit::JitAllocator::Span::*)() const) &asmjit::JitAllocator::Span::rx, "Returns a pointer having Read & Execute permissions (references executable memory).\n\n This pointer is never NULL if the allocation succeeded, it points to an executable memory.\n\nC++: asmjit::JitAllocator::Span::rx() const --> void *", pybind11::return_value_policy::automatic);
			cl.def("rw", (void * (asmjit::JitAllocator::Span::*)() const) &asmjit::JitAllocator::Span::rw, "Returns a pointer having Read & Write permissions (references writable memory).\n\n Depending on the type of the allocation strategy this could either be:\n\n   - the same address as returned by `rx()` if the allocator uses RWX mapping (pages have all of Read, Write,\n     and Execute permissions) or MAP_JIT, which requires either  or to\n     call  manually.\n   - a valid pointer, but not the same as `rx` - this would be valid if dual mapping is used.\n   - NULL pointer, in case that the allocation strategy doesn't use RWX, MAP_JIT, or dual mapping. In this\n     case only  can copy new code into the executable memory referenced by \n\n \n If `rw()` returns a non-null pointer it's important to use either VirtMem::protectJitMemory() or\n  to guard the write, because in case of `MAP_JIT` it would temporarily\n switch the permissions of the pointer to RW (that's per thread permissions).\n\n If  is not used it's important to clear the instruction cache via\n  after the write is done.\n\nC++: asmjit::JitAllocator::Span::rw() const --> void *", pybind11::return_value_policy::automatic);
			cl.def("size", (unsigned long (asmjit::JitAllocator::Span::*)() const) &asmjit::JitAllocator::Span::size, "Returns size of this span, aligned to the allocator granularity.\n\nC++: asmjit::JitAllocator::Span::size() const --> unsigned long");
			cl.def("flags", (enum asmjit::JitAllocator::Span::Flags (asmjit::JitAllocator::Span::*)() const) &asmjit::JitAllocator::Span::flags, "Returns span flags.\n\nC++: asmjit::JitAllocator::Span::flags() const --> enum asmjit::JitAllocator::Span::Flags");
			cl.def("shrink", (void (asmjit::JitAllocator::Span::*)(unsigned long)) &asmjit::JitAllocator::Span::shrink, "Shrinks this span to `newSize`.\n\n \n This is the only function that is able to change the size of a span, and it's only use case is to\n shrink the span size during  When the writer detects that the span size shrunk,\n it will automatically shrink the memory used by the span, and propagate the new aligned size to the caller.\n\nC++: asmjit::JitAllocator::Span::shrink(unsigned long) --> void", pybind11::arg("newSize"));
			cl.def("isDirectlyWritable", (bool (asmjit::JitAllocator::Span::*)() const) &asmjit::JitAllocator::Span::isDirectlyWritable, "Returns whether  returns a non-null pointer.\n\nC++: asmjit::JitAllocator::Span::isDirectlyWritable() const --> bool");
		}

		{ // asmjit::JitAllocator::WriteScopeData file: line:398
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::JitAllocator::WriteScopeData, std::shared_ptr<asmjit::JitAllocator::WriteScopeData>> cl(enclosing_class, "WriteScopeData", "Write scope data.\n\n This is mostly for internal purposes, please use  instead.");
			cl.def( pybind11::init( [](asmjit::JitAllocator::WriteScopeData const &o){ return new asmjit::JitAllocator::WriteScopeData(o); } ) );
			cl.def( pybind11::init( [](){ return new asmjit::JitAllocator::WriteScopeData(); } ) );


			cl.def("assign", (struct asmjit::JitAllocator::WriteScopeData & (asmjit::JitAllocator::WriteScopeData::*)(const struct asmjit::JitAllocator::WriteScopeData &)) &asmjit::JitAllocator::WriteScopeData::operator=, "C++: asmjit::JitAllocator::WriteScopeData::operator=(const struct asmjit::JitAllocator::WriteScopeData &) --> struct asmjit::JitAllocator::WriteScopeData &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

		{ // asmjit::JitAllocator::WriteScope file: line:454
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::JitAllocator::WriteScope, std::shared_ptr<asmjit::JitAllocator::WriteScope>, asmjit::JitAllocator::WriteScopeData> cl(enclosing_class, "WriteScope", "Write scope can be used to create a single scope that is optimized for writing multiple spans.");
			cl.def( pybind11::init( [](class asmjit::JitAllocator * a0){ return new asmjit::JitAllocator::WriteScope(a0); } ), "doc" , pybind11::arg("allocator"));
			cl.def( pybind11::init<class asmjit::JitAllocator *, enum asmjit::VirtMem::CachePolicy>(), pybind11::arg("allocator"), pybind11::arg("policy") );

			cl.def("allocator", (class asmjit::JitAllocator * (asmjit::JitAllocator::WriteScope::*)() const) &asmjit::JitAllocator::WriteScope::allocator, "\\{\n\nC++: asmjit::JitAllocator::WriteScope::allocator() const --> class asmjit::JitAllocator *", pybind11::return_value_policy::automatic);
			cl.def("policy", (enum asmjit::VirtMem::CachePolicy (asmjit::JitAllocator::WriteScope::*)() const) &asmjit::JitAllocator::WriteScope::policy, "C++: asmjit::JitAllocator::WriteScope::policy() const --> enum asmjit::VirtMem::CachePolicy");
			cl.def("write", (unsigned int (asmjit::JitAllocator::WriteScope::*)(class asmjit::JitAllocator::Span &, unsigned long, const void *, unsigned long)) &asmjit::JitAllocator::WriteScope::write, "Similar to `JitAllocator::write(span, offset, src, size)`, but under a write scope.\n\nC++: asmjit::JitAllocator::WriteScope::write(class asmjit::JitAllocator::Span &, unsigned long, const void *, unsigned long) --> unsigned int", pybind11::arg("span"), pybind11::arg("offset"), pybind11::arg("src"), pybind11::arg("size"));
			cl.def("flush", (unsigned int (asmjit::JitAllocator::WriteScope::*)()) &asmjit::JitAllocator::WriteScope::flush, "Flushes accumulated changes in this write scope.\n\nC++: asmjit::JitAllocator::WriteScope::flush() --> unsigned int");
		}

		{ // asmjit::JitAllocator::Statistics file: line:515
			auto & enclosing_class = cl;
			pybind11::class_<asmjit::JitAllocator::Statistics, std::shared_ptr<asmjit::JitAllocator::Statistics>> cl(enclosing_class, "Statistics", "Statistics about `JitAllocator`.");
			cl.def( pybind11::init( [](){ return new asmjit::JitAllocator::Statistics(); } ) );





			cl.def("reset", (void (asmjit::JitAllocator::Statistics::*)()) &asmjit::JitAllocator::Statistics::reset, "Resets the statistics to all zeros.\n\nC++: asmjit::JitAllocator::Statistics::reset() --> void");
			cl.def("blockCount", (unsigned long (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::blockCount, "Returns count of blocks managed by `JitAllocator` at the moment.\n\nC++: asmjit::JitAllocator::Statistics::blockCount() const --> unsigned long");
			cl.def("allocationCount", (unsigned long (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::allocationCount, "Returns the number of active allocations.\n\nC++: asmjit::JitAllocator::Statistics::allocationCount() const --> unsigned long");
			cl.def("usedSize", (unsigned long (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::usedSize, "Returns how many bytes are currently used.\n\nC++: asmjit::JitAllocator::Statistics::usedSize() const --> unsigned long");
			cl.def("unusedSize", (unsigned long (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::unusedSize, "Returns the number of bytes unused by the allocator at the moment.\n\nC++: asmjit::JitAllocator::Statistics::unusedSize() const --> unsigned long");
			cl.def("reservedSize", (unsigned long (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::reservedSize, "Returns the total number of bytes reserved by the allocator (sum of sizes of all blocks).\n\nC++: asmjit::JitAllocator::Statistics::reservedSize() const --> unsigned long");
			cl.def("overheadSize", (unsigned long (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::overheadSize, "Returns the number of bytes the allocator needs to manage the allocated memory.\n\nC++: asmjit::JitAllocator::Statistics::overheadSize() const --> unsigned long");
			cl.def("usedSizeAsPercent", (double (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::usedSizeAsPercent, "C++: asmjit::JitAllocator::Statistics::usedSizeAsPercent() const --> double");
			cl.def("unusedSizeAsPercent", (double (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::unusedSizeAsPercent, "C++: asmjit::JitAllocator::Statistics::unusedSizeAsPercent() const --> double");
			cl.def("overheadSizeAsPercent", (double (asmjit::JitAllocator::Statistics::*)() const) &asmjit::JitAllocator::Statistics::overheadSizeAsPercent, "C++: asmjit::JitAllocator::Statistics::overheadSizeAsPercent() const --> double");
			cl.def("assign", (struct asmjit::JitAllocator::Statistics & (asmjit::JitAllocator::Statistics::*)(const struct asmjit::JitAllocator::Statistics &)) &asmjit::JitAllocator::Statistics::operator=, "C++: asmjit::JitAllocator::Statistics::operator=(const struct asmjit::JitAllocator::Statistics &) --> struct asmjit::JitAllocator::Statistics &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
}
