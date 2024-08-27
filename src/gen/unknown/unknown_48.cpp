
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

void bind_unknown_unknown_48(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// asmjit::x86::regs::gpb(unsigned int) file: line:383
	M("asmjit::x86::regs").def("gpb", (class asmjit::x86::GpbLo (*)(unsigned int)) &asmjit::x86::regs::gpb, "Creates an 8-bit low GPB register operand.\n\nC++: asmjit::x86::regs::gpb(unsigned int) --> class asmjit::x86::GpbLo", pybind11::arg("rId"));

	// asmjit::x86::regs::gpb_lo(unsigned int) file: line:385
	M("asmjit::x86::regs").def("gpb_lo", (class asmjit::x86::GpbLo (*)(unsigned int)) &asmjit::x86::regs::gpb_lo, "Creates an 8-bit low GPB register operand.\n\nC++: asmjit::x86::regs::gpb_lo(unsigned int) --> class asmjit::x86::GpbLo", pybind11::arg("rId"));

	// asmjit::x86::regs::gpb_hi(unsigned int) file: line:387
	M("asmjit::x86::regs").def("gpb_hi", (class asmjit::x86::GpbHi (*)(unsigned int)) &asmjit::x86::regs::gpb_hi, "Creates an 8-bit high GPB register operand.\n\nC++: asmjit::x86::regs::gpb_hi(unsigned int) --> class asmjit::x86::GpbHi", pybind11::arg("rId"));

	// asmjit::x86::regs::gpw(unsigned int) file: line:389
	M("asmjit::x86::regs").def("gpw", (class asmjit::x86::Gpw (*)(unsigned int)) &asmjit::x86::regs::gpw, "Creates a 16-bit GPW register operand.\n\nC++: asmjit::x86::regs::gpw(unsigned int) --> class asmjit::x86::Gpw", pybind11::arg("rId"));

	// asmjit::x86::regs::gpd(unsigned int) file: line:391
	M("asmjit::x86::regs").def("gpd", (class asmjit::x86::Gpd (*)(unsigned int)) &asmjit::x86::regs::gpd, "Creates a 32-bit GPD register operand.\n\nC++: asmjit::x86::regs::gpd(unsigned int) --> class asmjit::x86::Gpd", pybind11::arg("rId"));

	// asmjit::x86::regs::gpq(unsigned int) file: line:393
	M("asmjit::x86::regs").def("gpq", (class asmjit::x86::Gpq (*)(unsigned int)) &asmjit::x86::regs::gpq, "Creates a 64-bit GPQ register operand (64-bit).\n\nC++: asmjit::x86::regs::gpq(unsigned int) --> class asmjit::x86::Gpq", pybind11::arg("rId"));

	// asmjit::x86::regs::xmm(unsigned int) file: line:395
	M("asmjit::x86::regs").def("xmm", (class asmjit::x86::Xmm (*)(unsigned int)) &asmjit::x86::regs::xmm, "Creates a 128-bit XMM register operand.\n\nC++: asmjit::x86::regs::xmm(unsigned int) --> class asmjit::x86::Xmm", pybind11::arg("rId"));

	// asmjit::x86::regs::ymm(unsigned int) file: line:397
	M("asmjit::x86::regs").def("ymm", (class asmjit::x86::Ymm (*)(unsigned int)) &asmjit::x86::regs::ymm, "Creates a 256-bit YMM register operand.\n\nC++: asmjit::x86::regs::ymm(unsigned int) --> class asmjit::x86::Ymm", pybind11::arg("rId"));

	// asmjit::x86::regs::zmm(unsigned int) file: line:399
	M("asmjit::x86::regs").def("zmm", (class asmjit::x86::Zmm (*)(unsigned int)) &asmjit::x86::regs::zmm, "Creates a 512-bit ZMM register operand.\n\nC++: asmjit::x86::regs::zmm(unsigned int) --> class asmjit::x86::Zmm", pybind11::arg("rId"));

	// asmjit::x86::regs::mm(unsigned int) file: line:401
	M("asmjit::x86::regs").def("mm", (class asmjit::x86::Mm (*)(unsigned int)) &asmjit::x86::regs::mm, "Creates a 64-bit Mm register operand.\n\nC++: asmjit::x86::regs::mm(unsigned int) --> class asmjit::x86::Mm", pybind11::arg("rId"));

	// asmjit::x86::regs::k(unsigned int) file: line:403
	M("asmjit::x86::regs").def("k", (class asmjit::x86::KReg (*)(unsigned int)) &asmjit::x86::regs::k, "Creates a 64-bit K register operand.\n\nC++: asmjit::x86::regs::k(unsigned int) --> class asmjit::x86::KReg", pybind11::arg("rId"));

	// asmjit::x86::regs::cr(unsigned int) file: line:405
	M("asmjit::x86::regs").def("cr", (class asmjit::x86::CReg (*)(unsigned int)) &asmjit::x86::regs::cr, "Creates a 32-bit or 64-bit control register operand.\n\nC++: asmjit::x86::regs::cr(unsigned int) --> class asmjit::x86::CReg", pybind11::arg("rId"));

	// asmjit::x86::regs::dr(unsigned int) file: line:407
	M("asmjit::x86::regs").def("dr", (class asmjit::x86::DReg (*)(unsigned int)) &asmjit::x86::regs::dr, "Creates a 32-bit or 64-bit debug register operand.\n\nC++: asmjit::x86::regs::dr(unsigned int) --> class asmjit::x86::DReg", pybind11::arg("rId"));

	// asmjit::x86::regs::st(unsigned int) file: line:409
	M("asmjit::x86::regs").def("st", (class asmjit::x86::St (*)(unsigned int)) &asmjit::x86::regs::st, "Creates an 80-bit st register operand.\n\nC++: asmjit::x86::regs::st(unsigned int) --> class asmjit::x86::St", pybind11::arg("rId"));

	// asmjit::x86::regs::bnd(unsigned int) file: line:411
	M("asmjit::x86::regs").def("bnd", (class asmjit::x86::Bnd (*)(unsigned int)) &asmjit::x86::regs::bnd, "Creates a 128-bit bound register operand.\n\nC++: asmjit::x86::regs::bnd(unsigned int) --> class asmjit::x86::Bnd", pybind11::arg("rId"));

	// asmjit::x86::regs::tmm(unsigned int) file: line:413
	M("asmjit::x86::regs").def("tmm", (class asmjit::x86::Tmm (*)(unsigned int)) &asmjit::x86::regs::tmm, "Creates a TMM register operand.\n\nC++: asmjit::x86::regs::tmm(unsigned int) --> class asmjit::x86::Tmm", pybind11::arg("rId"));

}
