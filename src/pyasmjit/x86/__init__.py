from .._pyasmjit.asmjit.x86 import Assembler as _Assembler
from .._pyasmjit.asmjit.x86 import Reg
from .._pyasmjit.asmjit.x86 import Mem

from ..error import raise_exception_for_error_code

class Assembler(_Assembler):

    def ptr_base(self, *args):
        res = super().ptr_base(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zax(self, *args):
        res = super().ptr_zax(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zcx(self, *args):
        res = super().ptr_zcx(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zdx(self, *args):
        res = super().ptr_zdx(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zbx(self, *args):
        res = super().ptr_zbx(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zsp(self, *args):
        res = super().ptr_zsp(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zbp(self, *args):
        res = super().ptr_zbp(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zsi(self, *args):
        res = super().ptr_zsi(*args)
        raise_exception_for_error_code(res)
        return res

    def ptr_zdi(self, *args):
        res = super().ptr_zdi(*args)
        raise_exception_for_error_code(res)
        return res

    def intptr_ptr(self, *args):
        res = super().intptr_ptr(*args)
        raise_exception_for_error_code(res)
        return res

    def intptr_ptr_abs(self, *args):
        res = super().intptr_ptr_abs(*args)
        raise_exception_for_error_code(res)
        return res

    def db(self, *args):
        res = super().db(*args)
        raise_exception_for_error_code(res)
        return res

    def dw(self, *args):
        res = super().dw(*args)
        raise_exception_for_error_code(res)
        return res

    def dd(self, *args):
        res = super().dd(*args)
        raise_exception_for_error_code(res)
        return res

    def dq(self, *args):
        res = super().dq(*args)
        raise_exception_for_error_code(res)
        return res

    def adc(self, *args):
        res = super().adc(*args)
        raise_exception_for_error_code(res)
        return res

    def add(self, *args):
        res = super().add(*args)
        raise_exception_for_error_code(res)
        return res

    def and_(self, *args):
        res = super().and_(*args)
        raise_exception_for_error_code(res)
        return res

    def bound(self, *args):
        res = super().bound(*args)
        raise_exception_for_error_code(res)
        return res

    def bsf(self, *args):
        res = super().bsf(*args)
        raise_exception_for_error_code(res)
        return res

    def bsr(self, *args):
        res = super().bsr(*args)
        raise_exception_for_error_code(res)
        return res

    def bswap(self, *args):
        res = super().bswap(*args)
        raise_exception_for_error_code(res)
        return res

    def bt(self, *args):
        res = super().bt(*args)
        raise_exception_for_error_code(res)
        return res

    def btc(self, *args):
        res = super().btc(*args)
        raise_exception_for_error_code(res)
        return res

    def btr(self, *args):
        res = super().btr(*args)
        raise_exception_for_error_code(res)
        return res

    def bts(self, *args):
        res = super().bts(*args)
        raise_exception_for_error_code(res)
        return res

    def cbw(self, *args):
        res = super().cbw(*args)
        raise_exception_for_error_code(res)
        return res

    def cdq(self, *args):
        res = super().cdq(*args)
        raise_exception_for_error_code(res)
        return res

    def cdqe(self, *args):
        res = super().cdqe(*args)
        raise_exception_for_error_code(res)
        return res

    def cqo(self, *args):
        res = super().cqo(*args)
        raise_exception_for_error_code(res)
        return res

    def cwd(self, *args):
        res = super().cwd(*args)
        raise_exception_for_error_code(res)
        return res

    def cwde(self, *args):
        res = super().cwde(*args)
        raise_exception_for_error_code(res)
        return res

    def call(self, *args):
        res = super().call(*args)
        raise_exception_for_error_code(res)
        return res

    def cmov(self, *args):
        res = super().cmov(*args)
        raise_exception_for_error_code(res)
        return res

    def cmova(self, *args):
        res = super().cmova(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovae(self, *args):
        res = super().cmovae(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovb(self, *args):
        res = super().cmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovbe(self, *args):
        res = super().cmovbe(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovc(self, *args):
        res = super().cmovc(*args)
        raise_exception_for_error_code(res)
        return res

    def cmove(self, *args):
        res = super().cmove(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovg(self, *args):
        res = super().cmovg(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovge(self, *args):
        res = super().cmovge(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovl(self, *args):
        res = super().cmovl(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovle(self, *args):
        res = super().cmovle(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovna(self, *args):
        res = super().cmovna(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnae(self, *args):
        res = super().cmovnae(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnb(self, *args):
        res = super().cmovnb(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnbe(self, *args):
        res = super().cmovnbe(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnc(self, *args):
        res = super().cmovnc(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovne(self, *args):
        res = super().cmovne(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovng(self, *args):
        res = super().cmovng(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnge(self, *args):
        res = super().cmovnge(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnl(self, *args):
        res = super().cmovnl(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnle(self, *args):
        res = super().cmovnle(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovno(self, *args):
        res = super().cmovno(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnp(self, *args):
        res = super().cmovnp(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovns(self, *args):
        res = super().cmovns(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnz(self, *args):
        res = super().cmovnz(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovo(self, *args):
        res = super().cmovo(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovp(self, *args):
        res = super().cmovp(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovpe(self, *args):
        res = super().cmovpe(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovpo(self, *args):
        res = super().cmovpo(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovs(self, *args):
        res = super().cmovs(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovz(self, *args):
        res = super().cmovz(*args)
        raise_exception_for_error_code(res)
        return res

    def cmov(self, *args):
        res = super().cmov(*args)
        raise_exception_for_error_code(res)
        return res

    def cmova(self, *args):
        res = super().cmova(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovae(self, *args):
        res = super().cmovae(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovb(self, *args):
        res = super().cmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovbe(self, *args):
        res = super().cmovbe(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovc(self, *args):
        res = super().cmovc(*args)
        raise_exception_for_error_code(res)
        return res

    def cmove(self, *args):
        res = super().cmove(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovg(self, *args):
        res = super().cmovg(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovge(self, *args):
        res = super().cmovge(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovl(self, *args):
        res = super().cmovl(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovle(self, *args):
        res = super().cmovle(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovna(self, *args):
        res = super().cmovna(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnae(self, *args):
        res = super().cmovnae(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnb(self, *args):
        res = super().cmovnb(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnbe(self, *args):
        res = super().cmovnbe(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnc(self, *args):
        res = super().cmovnc(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovne(self, *args):
        res = super().cmovne(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovng(self, *args):
        res = super().cmovng(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnge(self, *args):
        res = super().cmovnge(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnl(self, *args):
        res = super().cmovnl(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnle(self, *args):
        res = super().cmovnle(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovno(self, *args):
        res = super().cmovno(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnp(self, *args):
        res = super().cmovnp(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovns(self, *args):
        res = super().cmovns(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovnz(self, *args):
        res = super().cmovnz(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovo(self, *args):
        res = super().cmovo(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovp(self, *args):
        res = super().cmovp(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovpe(self, *args):
        res = super().cmovpe(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovpo(self, *args):
        res = super().cmovpo(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovs(self, *args):
        res = super().cmovs(*args)
        raise_exception_for_error_code(res)
        return res

    def cmovz(self, *args):
        res = super().cmovz(*args)
        raise_exception_for_error_code(res)
        return res

    def cmp(self, *args):
        res = super().cmp(*args)
        raise_exception_for_error_code(res)
        return res

    def cmps(self, *args):
        res = super().cmps(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpxchg(self, *args):
        res = super().cmpxchg(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpxchg(self, *args):
        res = super().cmpxchg(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpxchg16b(self, *args):
        res = super().cmpxchg16b(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpxchg8b(self, *args):
        res = super().cmpxchg8b(*args)
        raise_exception_for_error_code(res)
        return res

    def dec(self, *args):
        res = super().dec(*args)
        raise_exception_for_error_code(res)
        return res

    def div(self, *args):
        res = super().div(*args)
        raise_exception_for_error_code(res)
        return res

    def idiv(self, *args):
        res = super().idiv(*args)
        raise_exception_for_error_code(res)
        return res

    def imul(self, *args):
        res = super().imul(*args)
        raise_exception_for_error_code(res)
        return res

    def inc(self, *args):
        res = super().inc(*args)
        raise_exception_for_error_code(res)
        return res

    def j(self, *args):
        res = super().j(*args)
        raise_exception_for_error_code(res)
        return res

    def ja(self, *args):
        res = super().ja(*args)
        raise_exception_for_error_code(res)
        return res

    def jae(self, *args):
        res = super().jae(*args)
        raise_exception_for_error_code(res)
        return res

    def jb(self, *args):
        res = super().jb(*args)
        raise_exception_for_error_code(res)
        return res

    def jbe(self, *args):
        res = super().jbe(*args)
        raise_exception_for_error_code(res)
        return res

    def jc(self, *args):
        res = super().jc(*args)
        raise_exception_for_error_code(res)
        return res

    def je(self, *args):
        res = super().je(*args)
        raise_exception_for_error_code(res)
        return res

    def jg(self, *args):
        res = super().jg(*args)
        raise_exception_for_error_code(res)
        return res

    def jge(self, *args):
        res = super().jge(*args)
        raise_exception_for_error_code(res)
        return res

    def jl(self, *args):
        res = super().jl(*args)
        raise_exception_for_error_code(res)
        return res

    def jle(self, *args):
        res = super().jle(*args)
        raise_exception_for_error_code(res)
        return res

    def jna(self, *args):
        res = super().jna(*args)
        raise_exception_for_error_code(res)
        return res

    def jnae(self, *args):
        res = super().jnae(*args)
        raise_exception_for_error_code(res)
        return res

    def jnb(self, *args):
        res = super().jnb(*args)
        raise_exception_for_error_code(res)
        return res

    def jnbe(self, *args):
        res = super().jnbe(*args)
        raise_exception_for_error_code(res)
        return res

    def jnc(self, *args):
        res = super().jnc(*args)
        raise_exception_for_error_code(res)
        return res

    def jne(self, *args):
        res = super().jne(*args)
        raise_exception_for_error_code(res)
        return res

    def jng(self, *args):
        res = super().jng(*args)
        raise_exception_for_error_code(res)
        return res

    def jnge(self, *args):
        res = super().jnge(*args)
        raise_exception_for_error_code(res)
        return res

    def jnl(self, *args):
        res = super().jnl(*args)
        raise_exception_for_error_code(res)
        return res

    def jnle(self, *args):
        res = super().jnle(*args)
        raise_exception_for_error_code(res)
        return res

    def jno(self, *args):
        res = super().jno(*args)
        raise_exception_for_error_code(res)
        return res

    def jnp(self, *args):
        res = super().jnp(*args)
        raise_exception_for_error_code(res)
        return res

    def jns(self, *args):
        res = super().jns(*args)
        raise_exception_for_error_code(res)
        return res

    def jnz(self, *args):
        res = super().jnz(*args)
        raise_exception_for_error_code(res)
        return res

    def jo(self, *args):
        res = super().jo(*args)
        raise_exception_for_error_code(res)
        return res

    def jp(self, *args):
        res = super().jp(*args)
        raise_exception_for_error_code(res)
        return res

    def jpe(self, *args):
        res = super().jpe(*args)
        raise_exception_for_error_code(res)
        return res

    def jpo(self, *args):
        res = super().jpo(*args)
        raise_exception_for_error_code(res)
        return res

    def js(self, *args):
        res = super().js(*args)
        raise_exception_for_error_code(res)
        return res

    def jz(self, *args):
        res = super().jz(*args)
        raise_exception_for_error_code(res)
        return res

    def j(self, *args):
        res = super().j(*args)
        raise_exception_for_error_code(res)
        return res

    def ja(self, *args):
        res = super().ja(*args)
        raise_exception_for_error_code(res)
        return res

    def jae(self, *args):
        res = super().jae(*args)
        raise_exception_for_error_code(res)
        return res

    def jb(self, *args):
        res = super().jb(*args)
        raise_exception_for_error_code(res)
        return res

    def jbe(self, *args):
        res = super().jbe(*args)
        raise_exception_for_error_code(res)
        return res

    def jc(self, *args):
        res = super().jc(*args)
        raise_exception_for_error_code(res)
        return res

    def je(self, *args):
        res = super().je(*args)
        raise_exception_for_error_code(res)
        return res

    def jg(self, *args):
        res = super().jg(*args)
        raise_exception_for_error_code(res)
        return res

    def jge(self, *args):
        res = super().jge(*args)
        raise_exception_for_error_code(res)
        return res

    def jl(self, *args):
        res = super().jl(*args)
        raise_exception_for_error_code(res)
        return res

    def jle(self, *args):
        res = super().jle(*args)
        raise_exception_for_error_code(res)
        return res

    def jna(self, *args):
        res = super().jna(*args)
        raise_exception_for_error_code(res)
        return res

    def jnae(self, *args):
        res = super().jnae(*args)
        raise_exception_for_error_code(res)
        return res

    def jnb(self, *args):
        res = super().jnb(*args)
        raise_exception_for_error_code(res)
        return res

    def jnbe(self, *args):
        res = super().jnbe(*args)
        raise_exception_for_error_code(res)
        return res

    def jnc(self, *args):
        res = super().jnc(*args)
        raise_exception_for_error_code(res)
        return res

    def jne(self, *args):
        res = super().jne(*args)
        raise_exception_for_error_code(res)
        return res

    def jng(self, *args):
        res = super().jng(*args)
        raise_exception_for_error_code(res)
        return res

    def jnge(self, *args):
        res = super().jnge(*args)
        raise_exception_for_error_code(res)
        return res

    def jnl(self, *args):
        res = super().jnl(*args)
        raise_exception_for_error_code(res)
        return res

    def jnle(self, *args):
        res = super().jnle(*args)
        raise_exception_for_error_code(res)
        return res

    def jno(self, *args):
        res = super().jno(*args)
        raise_exception_for_error_code(res)
        return res

    def jnp(self, *args):
        res = super().jnp(*args)
        raise_exception_for_error_code(res)
        return res

    def jns(self, *args):
        res = super().jns(*args)
        raise_exception_for_error_code(res)
        return res

    def jnz(self, *args):
        res = super().jnz(*args)
        raise_exception_for_error_code(res)
        return res

    def jo(self, *args):
        res = super().jo(*args)
        raise_exception_for_error_code(res)
        return res

    def jp(self, *args):
        res = super().jp(*args)
        raise_exception_for_error_code(res)
        return res

    def jpe(self, *args):
        res = super().jpe(*args)
        raise_exception_for_error_code(res)
        return res

    def jpo(self, *args):
        res = super().jpo(*args)
        raise_exception_for_error_code(res)
        return res

    def js(self, *args):
        res = super().js(*args)
        raise_exception_for_error_code(res)
        return res

    def jz(self, *args):
        res = super().jz(*args)
        raise_exception_for_error_code(res)
        return res

    def jecxz(self, *args):
        res = super().jecxz(*args)
        raise_exception_for_error_code(res)
        return res

    def jmp(self, *args):
        res = super().jmp(*args)
        raise_exception_for_error_code(res)
        return res

    def lcall(self, *args):
        res = super().lcall(*args)
        raise_exception_for_error_code(res)
        return res

    def lcall(self, *args):
        res = super().lcall(*args)
        raise_exception_for_error_code(res)
        return res

    def lea(self, *args):
        res = super().lea(*args)
        raise_exception_for_error_code(res)
        return res

    def ljmp(self, *args):
        res = super().ljmp(*args)
        raise_exception_for_error_code(res)
        return res

    def lods(self, *args):
        res = super().lods(*args)
        raise_exception_for_error_code(res)
        return res

    def loop(self, *args):
        res = super().loop(*args)
        raise_exception_for_error_code(res)
        return res

    def loope(self, *args):
        res = super().loope(*args)
        raise_exception_for_error_code(res)
        return res

    def loopne(self, *args):
        res = super().loopne(*args)
        raise_exception_for_error_code(res)
        return res

    def mov(self, *args):
        res = super().mov(*args)
        raise_exception_for_error_code(res)
        return res

    def movabs(self, *args):
        res = super().movabs(*args)
        raise_exception_for_error_code(res)
        return res

    def movnti(self, *args):
        res = super().movnti(*args)
        raise_exception_for_error_code(res)
        return res

    def movs(self, *args):
        res = super().movs(*args)
        raise_exception_for_error_code(res)
        return res

    def movsx(self, *args):
        res = super().movsx(*args)
        raise_exception_for_error_code(res)
        return res

    def movsxd(self, *args):
        res = super().movsxd(*args)
        raise_exception_for_error_code(res)
        return res

    def movzx(self, *args):
        res = super().movzx(*args)
        raise_exception_for_error_code(res)
        return res

    def mul(self, *args):
        res = super().mul(*args)
        raise_exception_for_error_code(res)
        return res

    def neg(self, *args):
        res = super().neg(*args)
        raise_exception_for_error_code(res)
        return res

    def nop(self, *args):
        res = super().nop(*args)
        raise_exception_for_error_code(res)
        return res

    def not_(self, *args):
        res = super().not_(*args)
        raise_exception_for_error_code(res)
        return res

    def or_(self, *args):
        res = super().or_(*args)
        raise_exception_for_error_code(res)
        return res

    def pop(self, *args):
        res = super().pop(*args)
        raise_exception_for_error_code(res)
        return res

    def popa(self, *args):
        res = super().popa(*args)
        raise_exception_for_error_code(res)
        return res

    def popad(self, *args):
        res = super().popad(*args)
        raise_exception_for_error_code(res)
        return res

    def popf(self, *args):
        res = super().popf(*args)
        raise_exception_for_error_code(res)
        return res

    def popfd(self, *args):
        res = super().popfd(*args)
        raise_exception_for_error_code(res)
        return res

    def popfq(self, *args):
        res = super().popfq(*args)
        raise_exception_for_error_code(res)
        return res

    def push(self, *args):
        res = super().push(*args)
        raise_exception_for_error_code(res)
        return res

    def pusha(self, *args):
        res = super().pusha(*args)
        raise_exception_for_error_code(res)
        return res

    def pushad(self, *args):
        res = super().pushad(*args)
        raise_exception_for_error_code(res)
        return res

    def pushf(self, *args):
        res = super().pushf(*args)
        raise_exception_for_error_code(res)
        return res

    def pushfd(self, *args):
        res = super().pushfd(*args)
        raise_exception_for_error_code(res)
        return res

    def rcl(self, *args):
        res = super().rcl(*args)
        raise_exception_for_error_code(res)
        return res

    def rcr(self, *args):
        res = super().rcr(*args)
        raise_exception_for_error_code(res)
        return res

    def rol(self, *args):
        res = super().rol(*args)
        raise_exception_for_error_code(res)
        return res

    def ror(self, *args):
        res = super().ror(*args)
        raise_exception_for_error_code(res)
        return res

    def sbb(self, *args):
        res = super().sbb(*args)
        raise_exception_for_error_code(res)
        return res

    def sal(self, *args):
        res = super().sal(*args)
        raise_exception_for_error_code(res)
        return res

    def sar(self, *args):
        res = super().sar(*args)
        raise_exception_for_error_code(res)
        return res

    def scas(self, *args):
        res = super().scas(*args)
        raise_exception_for_error_code(res)
        return res

    def set(self, *args):
        res = super().set(*args)
        raise_exception_for_error_code(res)
        return res

    def seta(self, *args):
        res = super().seta(*args)
        raise_exception_for_error_code(res)
        return res

    def setae(self, *args):
        res = super().setae(*args)
        raise_exception_for_error_code(res)
        return res

    def setb(self, *args):
        res = super().setb(*args)
        raise_exception_for_error_code(res)
        return res

    def setbe(self, *args):
        res = super().setbe(*args)
        raise_exception_for_error_code(res)
        return res

    def setc(self, *args):
        res = super().setc(*args)
        raise_exception_for_error_code(res)
        return res

    def sete(self, *args):
        res = super().sete(*args)
        raise_exception_for_error_code(res)
        return res

    def setg(self, *args):
        res = super().setg(*args)
        raise_exception_for_error_code(res)
        return res

    def setge(self, *args):
        res = super().setge(*args)
        raise_exception_for_error_code(res)
        return res

    def setl(self, *args):
        res = super().setl(*args)
        raise_exception_for_error_code(res)
        return res

    def setle(self, *args):
        res = super().setle(*args)
        raise_exception_for_error_code(res)
        return res

    def setna(self, *args):
        res = super().setna(*args)
        raise_exception_for_error_code(res)
        return res

    def setnae(self, *args):
        res = super().setnae(*args)
        raise_exception_for_error_code(res)
        return res

    def setnb(self, *args):
        res = super().setnb(*args)
        raise_exception_for_error_code(res)
        return res

    def setnbe(self, *args):
        res = super().setnbe(*args)
        raise_exception_for_error_code(res)
        return res

    def setnc(self, *args):
        res = super().setnc(*args)
        raise_exception_for_error_code(res)
        return res

    def setne(self, *args):
        res = super().setne(*args)
        raise_exception_for_error_code(res)
        return res

    def setng(self, *args):
        res = super().setng(*args)
        raise_exception_for_error_code(res)
        return res

    def setnge(self, *args):
        res = super().setnge(*args)
        raise_exception_for_error_code(res)
        return res

    def setnl(self, *args):
        res = super().setnl(*args)
        raise_exception_for_error_code(res)
        return res

    def setnle(self, *args):
        res = super().setnle(*args)
        raise_exception_for_error_code(res)
        return res

    def setno(self, *args):
        res = super().setno(*args)
        raise_exception_for_error_code(res)
        return res

    def setnp(self, *args):
        res = super().setnp(*args)
        raise_exception_for_error_code(res)
        return res

    def setns(self, *args):
        res = super().setns(*args)
        raise_exception_for_error_code(res)
        return res

    def setnz(self, *args):
        res = super().setnz(*args)
        raise_exception_for_error_code(res)
        return res

    def seto(self, *args):
        res = super().seto(*args)
        raise_exception_for_error_code(res)
        return res

    def setp(self, *args):
        res = super().setp(*args)
        raise_exception_for_error_code(res)
        return res

    def setpe(self, *args):
        res = super().setpe(*args)
        raise_exception_for_error_code(res)
        return res

    def setpo(self, *args):
        res = super().setpo(*args)
        raise_exception_for_error_code(res)
        return res

    def sets(self, *args):
        res = super().sets(*args)
        raise_exception_for_error_code(res)
        return res

    def setz(self, *args):
        res = super().setz(*args)
        raise_exception_for_error_code(res)
        return res

    def set(self, *args):
        res = super().set(*args)
        raise_exception_for_error_code(res)
        return res

    def seta(self, *args):
        res = super().seta(*args)
        raise_exception_for_error_code(res)
        return res

    def setae(self, *args):
        res = super().setae(*args)
        raise_exception_for_error_code(res)
        return res

    def setb(self, *args):
        res = super().setb(*args)
        raise_exception_for_error_code(res)
        return res

    def setbe(self, *args):
        res = super().setbe(*args)
        raise_exception_for_error_code(res)
        return res

    def setc(self, *args):
        res = super().setc(*args)
        raise_exception_for_error_code(res)
        return res

    def sete(self, *args):
        res = super().sete(*args)
        raise_exception_for_error_code(res)
        return res

    def setg(self, *args):
        res = super().setg(*args)
        raise_exception_for_error_code(res)
        return res

    def setge(self, *args):
        res = super().setge(*args)
        raise_exception_for_error_code(res)
        return res

    def setl(self, *args):
        res = super().setl(*args)
        raise_exception_for_error_code(res)
        return res

    def setle(self, *args):
        res = super().setle(*args)
        raise_exception_for_error_code(res)
        return res

    def setna(self, *args):
        res = super().setna(*args)
        raise_exception_for_error_code(res)
        return res

    def setnae(self, *args):
        res = super().setnae(*args)
        raise_exception_for_error_code(res)
        return res

    def setnb(self, *args):
        res = super().setnb(*args)
        raise_exception_for_error_code(res)
        return res

    def setnbe(self, *args):
        res = super().setnbe(*args)
        raise_exception_for_error_code(res)
        return res

    def setnc(self, *args):
        res = super().setnc(*args)
        raise_exception_for_error_code(res)
        return res

    def setne(self, *args):
        res = super().setne(*args)
        raise_exception_for_error_code(res)
        return res

    def setng(self, *args):
        res = super().setng(*args)
        raise_exception_for_error_code(res)
        return res

    def setnge(self, *args):
        res = super().setnge(*args)
        raise_exception_for_error_code(res)
        return res

    def setnl(self, *args):
        res = super().setnl(*args)
        raise_exception_for_error_code(res)
        return res

    def setnle(self, *args):
        res = super().setnle(*args)
        raise_exception_for_error_code(res)
        return res

    def setno(self, *args):
        res = super().setno(*args)
        raise_exception_for_error_code(res)
        return res

    def setnp(self, *args):
        res = super().setnp(*args)
        raise_exception_for_error_code(res)
        return res

    def setns(self, *args):
        res = super().setns(*args)
        raise_exception_for_error_code(res)
        return res

    def setnz(self, *args):
        res = super().setnz(*args)
        raise_exception_for_error_code(res)
        return res

    def seto(self, *args):
        res = super().seto(*args)
        raise_exception_for_error_code(res)
        return res

    def setp(self, *args):
        res = super().setp(*args)
        raise_exception_for_error_code(res)
        return res

    def setpe(self, *args):
        res = super().setpe(*args)
        raise_exception_for_error_code(res)
        return res

    def setpo(self, *args):
        res = super().setpo(*args)
        raise_exception_for_error_code(res)
        return res

    def sets(self, *args):
        res = super().sets(*args)
        raise_exception_for_error_code(res)
        return res

    def setz(self, *args):
        res = super().setz(*args)
        raise_exception_for_error_code(res)
        return res

    def shl(self, *args):
        res = super().shl(*args)
        raise_exception_for_error_code(res)
        return res

    def shr(self, *args):
        res = super().shr(*args)
        raise_exception_for_error_code(res)
        return res

    def shld(self, *args):
        res = super().shld(*args)
        raise_exception_for_error_code(res)
        return res

    def shrd(self, *args):
        res = super().shrd(*args)
        raise_exception_for_error_code(res)
        return res

    def stos(self, *args):
        res = super().stos(*args)
        raise_exception_for_error_code(res)
        return res

    def sub(self, *args):
        res = super().sub(*args)
        raise_exception_for_error_code(res)
        return res

    def sub(self, *args):
        res = super().sub(*args)
        raise_exception_for_error_code(res)
        return res

    def test(self, *args):
        res = super().test(*args)
        raise_exception_for_error_code(res)
        return res

    def ud0(self, *args):
        res = super().ud0(*args)
        raise_exception_for_error_code(res)
        return res

    def ud1(self, *args):
        res = super().ud1(*args)
        raise_exception_for_error_code(res)
        return res

    def ud2(self, *args):
        res = super().ud2(*args)
        raise_exception_for_error_code(res)
        return res

    def xadd(self, *args):
        res = super().xadd(*args)
        raise_exception_for_error_code(res)
        return res

    def xchg(self, *args):
        res = super().xchg(*args)
        raise_exception_for_error_code(res)
        return res

    def xor_(self, *args):
        res = super().xor_(*args)
        raise_exception_for_error_code(res)
        return res

    def imul(self, *args):
        res = super().imul(*args)
        raise_exception_for_error_code(res)
        return res

    def aaa(self, *args):
        res = super().aaa(*args)
        raise_exception_for_error_code(res)
        return res

    def aad(self, *args):
        res = super().aad(*args)
        raise_exception_for_error_code(res)
        return res

    def aam(self, *args):
        res = super().aam(*args)
        raise_exception_for_error_code(res)
        return res

    def aas(self, *args):
        res = super().aas(*args)
        raise_exception_for_error_code(res)
        return res

    def daa(self, *args):
        res = super().daa(*args)
        raise_exception_for_error_code(res)
        return res

    def das(self, *args):
        res = super().das(*args)
        raise_exception_for_error_code(res)
        return res

    def enter(self, *args):
        res = super().enter(*args)
        raise_exception_for_error_code(res)
        return res

    def leave(self, *args):
        res = super().leave(*args)
        raise_exception_for_error_code(res)
        return res

    def in_(self, *args):
        res = super().in_(*args)
        raise_exception_for_error_code(res)
        return res

    def ins(self, *args):
        res = super().ins(*args)
        raise_exception_for_error_code(res)
        return res

    def out(self, *args):
        res = super().out(*args)
        raise_exception_for_error_code(res)
        return res

    def outs(self, *args):
        res = super().outs(*args)
        raise_exception_for_error_code(res)
        return res

    def clc(self, *args):
        res = super().clc(*args)
        raise_exception_for_error_code(res)
        return res

    def cld(self, *args):
        res = super().cld(*args)
        raise_exception_for_error_code(res)
        return res

    def cmc(self, *args):
        res = super().cmc(*args)
        raise_exception_for_error_code(res)
        return res

    def stc(self, *args):
        res = super().stc(*args)
        raise_exception_for_error_code(res)
        return res

    def std(self, *args):
        res = super().std(*args)
        raise_exception_for_error_code(res)
        return res

    def adcx(self, *args):
        res = super().adcx(*args)
        raise_exception_for_error_code(res)
        return res

    def adox(self, *args):
        res = super().adox(*args)
        raise_exception_for_error_code(res)
        return res

    def cpuid(self, *args):
        res = super().cpuid(*args)
        raise_exception_for_error_code(res)
        return res

    def lahf(self, *args):
        res = super().lahf(*args)
        raise_exception_for_error_code(res)
        return res

    def sahf(self, *args):
        res = super().sahf(*args)
        raise_exception_for_error_code(res)
        return res

    def andn(self, *args):
        res = super().andn(*args)
        raise_exception_for_error_code(res)
        return res

    def bextr(self, *args):
        res = super().bextr(*args)
        raise_exception_for_error_code(res)
        return res

    def blsi(self, *args):
        res = super().blsi(*args)
        raise_exception_for_error_code(res)
        return res

    def blsmsk(self, *args):
        res = super().blsmsk(*args)
        raise_exception_for_error_code(res)
        return res

    def blsr(self, *args):
        res = super().blsr(*args)
        raise_exception_for_error_code(res)
        return res

    def tzcnt(self, *args):
        res = super().tzcnt(*args)
        raise_exception_for_error_code(res)
        return res

    def bzhi(self, *args):
        res = super().bzhi(*args)
        raise_exception_for_error_code(res)
        return res

    def mulx(self, *args):
        res = super().mulx(*args)
        raise_exception_for_error_code(res)
        return res

    def pdep(self, *args):
        res = super().pdep(*args)
        raise_exception_for_error_code(res)
        return res

    def pext(self, *args):
        res = super().pext(*args)
        raise_exception_for_error_code(res)
        return res

    def rorx(self, *args):
        res = super().rorx(*args)
        raise_exception_for_error_code(res)
        return res

    def sarx(self, *args):
        res = super().sarx(*args)
        raise_exception_for_error_code(res)
        return res

    def shlx(self, *args):
        res = super().shlx(*args)
        raise_exception_for_error_code(res)
        return res

    def shrx(self, *args):
        res = super().shrx(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpbexadd(self, *args):
        res = super().cmpbexadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpbxadd(self, *args):
        res = super().cmpbxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmplexadd(self, *args):
        res = super().cmplexadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmplxadd(self, *args):
        res = super().cmplxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnbexadd(self, *args):
        res = super().cmpnbexadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnbxadd(self, *args):
        res = super().cmpnbxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnlexadd(self, *args):
        res = super().cmpnlexadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnlxadd(self, *args):
        res = super().cmpnlxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnoxadd(self, *args):
        res = super().cmpnoxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnpxadd(self, *args):
        res = super().cmpnpxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnsxadd(self, *args):
        res = super().cmpnsxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpnzxadd(self, *args):
        res = super().cmpnzxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpoxadd(self, *args):
        res = super().cmpoxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmppxadd(self, *args):
        res = super().cmppxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpsxadd(self, *args):
        res = super().cmpsxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpzxadd(self, *args):
        res = super().cmpzxadd(*args)
        raise_exception_for_error_code(res)
        return res

    def cldemote(self, *args):
        res = super().cldemote(*args)
        raise_exception_for_error_code(res)
        return res

    def clflush(self, *args):
        res = super().clflush(*args)
        raise_exception_for_error_code(res)
        return res

    def clflushopt(self, *args):
        res = super().clflushopt(*args)
        raise_exception_for_error_code(res)
        return res

    def clwb(self, *args):
        res = super().clwb(*args)
        raise_exception_for_error_code(res)
        return res

    def clzero(self, *args):
        res = super().clzero(*args)
        raise_exception_for_error_code(res)
        return res

    def crc32(self, *args):
        res = super().crc32(*args)
        raise_exception_for_error_code(res)
        return res

    def lfence(self, *args):
        res = super().lfence(*args)
        raise_exception_for_error_code(res)
        return res

    def mfence(self, *args):
        res = super().mfence(*args)
        raise_exception_for_error_code(res)
        return res

    def sfence(self, *args):
        res = super().sfence(*args)
        raise_exception_for_error_code(res)
        return res

    def lzcnt(self, *args):
        res = super().lzcnt(*args)
        raise_exception_for_error_code(res)
        return res

    def lzcnt(self, *args):
        res = super().lzcnt(*args)
        raise_exception_for_error_code(res)
        return res

    def movbe(self, *args):
        res = super().movbe(*args)
        raise_exception_for_error_code(res)
        return res

    def movdiri(self, *args):
        res = super().movdiri(*args)
        raise_exception_for_error_code(res)
        return res

    def movdir64b(self, *args):
        res = super().movdir64b(*args)
        raise_exception_for_error_code(res)
        return res

    def ldmxcsr(self, *args):
        res = super().ldmxcsr(*args)
        raise_exception_for_error_code(res)
        return res

    def stmxcsr(self, *args):
        res = super().stmxcsr(*args)
        raise_exception_for_error_code(res)
        return res

    def popcnt(self, *args):
        res = super().popcnt(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetch(self, *args):
        res = super().prefetch(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetchnta(self, *args):
        res = super().prefetchnta(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetcht0(self, *args):
        res = super().prefetcht0(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetcht1(self, *args):
        res = super().prefetcht1(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetcht2(self, *args):
        res = super().prefetcht2(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetchw(self, *args):
        res = super().prefetchw(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetchwt1(self, *args):
        res = super().prefetchwt1(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetchit0(self, *args):
        res = super().prefetchit0(*args)
        raise_exception_for_error_code(res)
        return res

    def prefetchit1(self, *args):
        res = super().prefetchit1(*args)
        raise_exception_for_error_code(res)
        return res

    def aadd(self, *args):
        res = super().aadd(*args)
        raise_exception_for_error_code(res)
        return res

    def aand(self, *args):
        res = super().aand(*args)
        raise_exception_for_error_code(res)
        return res

    def aor(self, *args):
        res = super().aor(*args)
        raise_exception_for_error_code(res)
        return res

    def axor(self, *args):
        res = super().axor(*args)
        raise_exception_for_error_code(res)
        return res

    def rdpid(self, *args):
        res = super().rdpid(*args)
        raise_exception_for_error_code(res)
        return res

    def rdpru(self, *args):
        res = super().rdpru(*args)
        raise_exception_for_error_code(res)
        return res

    def rdpkru(self, *args):
        res = super().rdpkru(*args)
        raise_exception_for_error_code(res)
        return res

    def rdtsc(self, *args):
        res = super().rdtsc(*args)
        raise_exception_for_error_code(res)
        return res

    def rdtscp(self, *args):
        res = super().rdtscp(*args)
        raise_exception_for_error_code(res)
        return res

    def serialize(self, *args):
        res = super().serialize(*args)
        raise_exception_for_error_code(res)
        return res

    def blcfill(self, *args):
        res = super().blcfill(*args)
        raise_exception_for_error_code(res)
        return res

    def blci(self, *args):
        res = super().blci(*args)
        raise_exception_for_error_code(res)
        return res

    def blcic(self, *args):
        res = super().blcic(*args)
        raise_exception_for_error_code(res)
        return res

    def blcmsk(self, *args):
        res = super().blcmsk(*args)
        raise_exception_for_error_code(res)
        return res

    def blcs(self, *args):
        res = super().blcs(*args)
        raise_exception_for_error_code(res)
        return res

    def blsfill(self, *args):
        res = super().blsfill(*args)
        raise_exception_for_error_code(res)
        return res

    def blsic(self, *args):
        res = super().blsic(*args)
        raise_exception_for_error_code(res)
        return res

    def t1mskc(self, *args):
        res = super().t1mskc(*args)
        raise_exception_for_error_code(res)
        return res

    def tzmsk(self, *args):
        res = super().tzmsk(*args)
        raise_exception_for_error_code(res)
        return res

    def arpl(self, *args):
        res = super().arpl(*args)
        raise_exception_for_error_code(res)
        return res

    def cli(self, *args):
        res = super().cli(*args)
        raise_exception_for_error_code(res)
        return res

    def getsec(self, *args):
        res = super().getsec(*args)
        raise_exception_for_error_code(res)
        return res

    def int_(self, *args):
        res = super().int_(*args)
        raise_exception_for_error_code(res)
        return res

    def int3(self, *args):
        res = super().int3(*args)
        raise_exception_for_error_code(res)
        return res

    def into(self, *args):
        res = super().into(*args)
        raise_exception_for_error_code(res)
        return res

    def lar(self, *args):
        res = super().lar(*args)
        raise_exception_for_error_code(res)
        return res

    def lds(self, *args):
        res = super().lds(*args)
        raise_exception_for_error_code(res)
        return res

    def les(self, *args):
        res = super().les(*args)
        raise_exception_for_error_code(res)
        return res

    def lfs(self, *args):
        res = super().lfs(*args)
        raise_exception_for_error_code(res)
        return res

    def lgs(self, *args):
        res = super().lgs(*args)
        raise_exception_for_error_code(res)
        return res

    def lsl(self, *args):
        res = super().lsl(*args)
        raise_exception_for_error_code(res)
        return res

    def lsl(self, *args):
        res = super().lsl(*args)
        raise_exception_for_error_code(res)
        return res

    def lss(self, *args):
        res = super().lss(*args)
        raise_exception_for_error_code(res)
        return res

    def pause(self, *args):
        res = super().pause(*args)
        raise_exception_for_error_code(res)
        return res

    def rsm(self, *args):
        res = super().rsm(*args)
        raise_exception_for_error_code(res)
        return res

    def sgdt(self, *args):
        res = super().sgdt(*args)
        raise_exception_for_error_code(res)
        return res

    def sidt(self, *args):
        res = super().sidt(*args)
        raise_exception_for_error_code(res)
        return res

    def sldt(self, *args):
        res = super().sldt(*args)
        raise_exception_for_error_code(res)
        return res

    def smsw(self, *args):
        res = super().smsw(*args)
        raise_exception_for_error_code(res)
        return res

    def sti(self, *args):
        res = super().sti(*args)
        raise_exception_for_error_code(res)
        return res

    def str(self, *args):
        res = super().str(*args)
        raise_exception_for_error_code(res)
        return res

    def verr(self, *args):
        res = super().verr(*args)
        raise_exception_for_error_code(res)
        return res

    def verw(self, *args):
        res = super().verw(*args)
        raise_exception_for_error_code(res)
        return res

    def rdfsbase(self, *args):
        res = super().rdfsbase(*args)
        raise_exception_for_error_code(res)
        return res

    def rdgsbase(self, *args):
        res = super().rdgsbase(*args)
        raise_exception_for_error_code(res)
        return res

    def wrfsbase(self, *args):
        res = super().wrfsbase(*args)
        raise_exception_for_error_code(res)
        return res

    def wrgsbase(self, *args):
        res = super().wrgsbase(*args)
        raise_exception_for_error_code(res)
        return res

    def fxrstor(self, *args):
        res = super().fxrstor(*args)
        raise_exception_for_error_code(res)
        return res

    def fxrstor64(self, *args):
        res = super().fxrstor64(*args)
        raise_exception_for_error_code(res)
        return res

    def fxsave(self, *args):
        res = super().fxsave(*args)
        raise_exception_for_error_code(res)
        return res

    def fxsave64(self, *args):
        res = super().fxsave64(*args)
        raise_exception_for_error_code(res)
        return res

    def xgetbv(self, *args):
        res = super().xgetbv(*args)
        raise_exception_for_error_code(res)
        return res

    def xrstor(self, *args):
        res = super().xrstor(*args)
        raise_exception_for_error_code(res)
        return res

    def xrstor64(self, *args):
        res = super().xrstor64(*args)
        raise_exception_for_error_code(res)
        return res

    def xrstors(self, *args):
        res = super().xrstors(*args)
        raise_exception_for_error_code(res)
        return res

    def xrstors64(self, *args):
        res = super().xrstors64(*args)
        raise_exception_for_error_code(res)
        return res

    def xsave(self, *args):
        res = super().xsave(*args)
        raise_exception_for_error_code(res)
        return res

    def xsave64(self, *args):
        res = super().xsave64(*args)
        raise_exception_for_error_code(res)
        return res

    def xsavec(self, *args):
        res = super().xsavec(*args)
        raise_exception_for_error_code(res)
        return res

    def xsavec64(self, *args):
        res = super().xsavec64(*args)
        raise_exception_for_error_code(res)
        return res

    def xsaveopt(self, *args):
        res = super().xsaveopt(*args)
        raise_exception_for_error_code(res)
        return res

    def xsaveopt64(self, *args):
        res = super().xsaveopt64(*args)
        raise_exception_for_error_code(res)
        return res

    def xsaves(self, *args):
        res = super().xsaves(*args)
        raise_exception_for_error_code(res)
        return res

    def xsaves64(self, *args):
        res = super().xsaves64(*args)
        raise_exception_for_error_code(res)
        return res

    def bndcl(self, *args):
        res = super().bndcl(*args)
        raise_exception_for_error_code(res)
        return res

    def bndcl(self, *args):
        res = super().bndcl(*args)
        raise_exception_for_error_code(res)
        return res

    def bndcn(self, *args):
        res = super().bndcn(*args)
        raise_exception_for_error_code(res)
        return res

    def bndcu(self, *args):
        res = super().bndcu(*args)
        raise_exception_for_error_code(res)
        return res

    def bndldx(self, *args):
        res = super().bndldx(*args)
        raise_exception_for_error_code(res)
        return res

    def bndmk(self, *args):
        res = super().bndmk(*args)
        raise_exception_for_error_code(res)
        return res

    def bndmov(self, *args):
        res = super().bndmov(*args)
        raise_exception_for_error_code(res)
        return res

    def bndstx(self, *args):
        res = super().bndstx(*args)
        raise_exception_for_error_code(res)
        return res

    def monitorx(self, *args):
        res = super().monitorx(*args)
        raise_exception_for_error_code(res)
        return res

    def mwaitx(self, *args):
        res = super().mwaitx(*args)
        raise_exception_for_error_code(res)
        return res

    def mcommit(self, *args):
        res = super().mcommit(*args)
        raise_exception_for_error_code(res)
        return res

    def ptwrite(self, *args):
        res = super().ptwrite(*args)
        raise_exception_for_error_code(res)
        return res

    def enqcmd(self, *args):
        res = super().enqcmd(*args)
        raise_exception_for_error_code(res)
        return res

    def enqcmds(self, *args):
        res = super().enqcmds(*args)
        raise_exception_for_error_code(res)
        return res

    def tpause(self, *args):
        res = super().tpause(*args)
        raise_exception_for_error_code(res)
        return res

    def umonitor(self, *args):
        res = super().umonitor(*args)
        raise_exception_for_error_code(res)
        return res

    def umwait(self, *args):
        res = super().umwait(*args)
        raise_exception_for_error_code(res)
        return res

    def rdrand(self, *args):
        res = super().rdrand(*args)
        raise_exception_for_error_code(res)
        return res

    def rdseed(self, *args):
        res = super().rdseed(*args)
        raise_exception_for_error_code(res)
        return res

    def llwpcb(self, *args):
        res = super().llwpcb(*args)
        raise_exception_for_error_code(res)
        return res

    def lwpins(self, *args):
        res = super().lwpins(*args)
        raise_exception_for_error_code(res)
        return res

    def lwpins(self, *args):
        res = super().lwpins(*args)
        raise_exception_for_error_code(res)
        return res

    def lwpval(self, *args):
        res = super().lwpval(*args)
        raise_exception_for_error_code(res)
        return res

    def lwpval(self, *args):
        res = super().lwpval(*args)
        raise_exception_for_error_code(res)
        return res

    def slwpcb(self, *args):
        res = super().slwpcb(*args)
        raise_exception_for_error_code(res)
        return res

    def xabort(self, *args):
        res = super().xabort(*args)
        raise_exception_for_error_code(res)
        return res

    def xbegin(self, *args):
        res = super().xbegin(*args)
        raise_exception_for_error_code(res)
        return res

    def xbegin(self, *args):
        res = super().xbegin(*args)
        raise_exception_for_error_code(res)
        return res

    def xend(self, *args):
        res = super().xend(*args)
        raise_exception_for_error_code(res)
        return res

    def xtest(self, *args):
        res = super().xtest(*args)
        raise_exception_for_error_code(res)
        return res

    def xresldtrk(self, *args):
        res = super().xresldtrk(*args)
        raise_exception_for_error_code(res)
        return res

    def xsusldtrk(self, *args):
        res = super().xsusldtrk(*args)
        raise_exception_for_error_code(res)
        return res

    def endbr32(self, *args):
        res = super().endbr32(*args)
        raise_exception_for_error_code(res)
        return res

    def endbr64(self, *args):
        res = super().endbr64(*args)
        raise_exception_for_error_code(res)
        return res

    def clrssbsy(self, *args):
        res = super().clrssbsy(*args)
        raise_exception_for_error_code(res)
        return res

    def setssbsy(self, *args):
        res = super().setssbsy(*args)
        raise_exception_for_error_code(res)
        return res

    def rstorssp(self, *args):
        res = super().rstorssp(*args)
        raise_exception_for_error_code(res)
        return res

    def saveprevssp(self, *args):
        res = super().saveprevssp(*args)
        raise_exception_for_error_code(res)
        return res

    def incsspd(self, *args):
        res = super().incsspd(*args)
        raise_exception_for_error_code(res)
        return res

    def rdsspq(self, *args):
        res = super().rdsspq(*args)
        raise_exception_for_error_code(res)
        return res

    def wrssd(self, *args):
        res = super().wrssd(*args)
        raise_exception_for_error_code(res)
        return res

    def wrussd(self, *args):
        res = super().wrussd(*args)
        raise_exception_for_error_code(res)
        return res

    def wrussq(self, *args):
        res = super().wrussq(*args)
        raise_exception_for_error_code(res)
        return res

    def hreset(self, *args):
        res = super().hreset(*args)
        raise_exception_for_error_code(res)
        return res

    def clui(self, *args):
        res = super().clui(*args)
        raise_exception_for_error_code(res)
        return res

    def senduipi(self, *args):
        res = super().senduipi(*args)
        raise_exception_for_error_code(res)
        return res

    def testui(self, *args):
        res = super().testui(*args)
        raise_exception_for_error_code(res)
        return res

    def stui(self, *args):
        res = super().stui(*args)
        raise_exception_for_error_code(res)
        return res

    def uiret(self, *args):
        res = super().uiret(*args)
        raise_exception_for_error_code(res)
        return res

    def clts(self, *args):
        res = super().clts(*args)
        raise_exception_for_error_code(res)
        return res

    def hlt(self, *args):
        res = super().hlt(*args)
        raise_exception_for_error_code(res)
        return res

    def invd(self, *args):
        res = super().invd(*args)
        raise_exception_for_error_code(res)
        return res

    def invlpg(self, *args):
        res = super().invlpg(*args)
        raise_exception_for_error_code(res)
        return res

    def invpcid(self, *args):
        res = super().invpcid(*args)
        raise_exception_for_error_code(res)
        return res

    def lgdt(self, *args):
        res = super().lgdt(*args)
        raise_exception_for_error_code(res)
        return res

    def lidt(self, *args):
        res = super().lidt(*args)
        raise_exception_for_error_code(res)
        return res

    def lldt(self, *args):
        res = super().lldt(*args)
        raise_exception_for_error_code(res)
        return res

    def lmsw(self, *args):
        res = super().lmsw(*args)
        raise_exception_for_error_code(res)
        return res

    def ltr(self, *args):
        res = super().ltr(*args)
        raise_exception_for_error_code(res)
        return res

    def rdmsr(self, *args):
        res = super().rdmsr(*args)
        raise_exception_for_error_code(res)
        return res

    def rdpmc(self, *args):
        res = super().rdpmc(*args)
        raise_exception_for_error_code(res)
        return res

    def swapgs(self, *args):
        res = super().swapgs(*args)
        raise_exception_for_error_code(res)
        return res

    def wbinvd(self, *args):
        res = super().wbinvd(*args)
        raise_exception_for_error_code(res)
        return res

    def wbnoinvd(self, *args):
        res = super().wbnoinvd(*args)
        raise_exception_for_error_code(res)
        return res

    def wrmsr(self, *args):
        res = super().wrmsr(*args)
        raise_exception_for_error_code(res)
        return res

    def xsetbv(self, *args):
        res = super().xsetbv(*args)
        raise_exception_for_error_code(res)
        return res

    def invlpgb(self, *args):
        res = super().invlpgb(*args)
        raise_exception_for_error_code(res)
        return res

    def tlbsync(self, *args):
        res = super().tlbsync(*args)
        raise_exception_for_error_code(res)
        return res

    def monitor(self, *args):
        res = super().monitor(*args)
        raise_exception_for_error_code(res)
        return res

    def mwait(self, *args):
        res = super().mwait(*args)
        raise_exception_for_error_code(res)
        return res

    def clac(self, *args):
        res = super().clac(*args)
        raise_exception_for_error_code(res)
        return res

    def stac(self, *args):
        res = super().stac(*args)
        raise_exception_for_error_code(res)
        return res

    def skinit(self, *args):
        res = super().skinit(*args)
        raise_exception_for_error_code(res)
        return res

    def stgi(self, *args):
        res = super().stgi(*args)
        raise_exception_for_error_code(res)
        return res

    def psmash(self, *args):
        res = super().psmash(*args)
        raise_exception_for_error_code(res)
        return res

    def pvalidate(self, *args):
        res = super().pvalidate(*args)
        raise_exception_for_error_code(res)
        return res

    def rmpadjust(self, *args):
        res = super().rmpadjust(*args)
        raise_exception_for_error_code(res)
        return res

    def rmpupdate(self, *args):
        res = super().rmpupdate(*args)
        raise_exception_for_error_code(res)
        return res

    def invept(self, *args):
        res = super().invept(*args)
        raise_exception_for_error_code(res)
        return res

    def invvpid(self, *args):
        res = super().invvpid(*args)
        raise_exception_for_error_code(res)
        return res

    def vmcall(self, *args):
        res = super().vmcall(*args)
        raise_exception_for_error_code(res)
        return res

    def vmclear(self, *args):
        res = super().vmclear(*args)
        raise_exception_for_error_code(res)
        return res

    def vmfunc(self, *args):
        res = super().vmfunc(*args)
        raise_exception_for_error_code(res)
        return res

    def vmlaunch(self, *args):
        res = super().vmlaunch(*args)
        raise_exception_for_error_code(res)
        return res

    def vmptrld(self, *args):
        res = super().vmptrld(*args)
        raise_exception_for_error_code(res)
        return res

    def vmptrst(self, *args):
        res = super().vmptrst(*args)
        raise_exception_for_error_code(res)
        return res

    def vmread(self, *args):
        res = super().vmread(*args)
        raise_exception_for_error_code(res)
        return res

    def vmread(self, *args):
        res = super().vmread(*args)
        raise_exception_for_error_code(res)
        return res

    def vmresume(self, *args):
        res = super().vmresume(*args)
        raise_exception_for_error_code(res)
        return res

    def vmwrite(self, *args):
        res = super().vmwrite(*args)
        raise_exception_for_error_code(res)
        return res

    def vmwrite(self, *args):
        res = super().vmwrite(*args)
        raise_exception_for_error_code(res)
        return res

    def vmxoff(self, *args):
        res = super().vmxoff(*args)
        raise_exception_for_error_code(res)
        return res

    def vmxon(self, *args):
        res = super().vmxon(*args)
        raise_exception_for_error_code(res)
        return res

    def clgi(self, *args):
        res = super().clgi(*args)
        raise_exception_for_error_code(res)
        return res

    def invlpga(self, *args):
        res = super().invlpga(*args)
        raise_exception_for_error_code(res)
        return res

    def vmload(self, *args):
        res = super().vmload(*args)
        raise_exception_for_error_code(res)
        return res

    def vmmcall(self, *args):
        res = super().vmmcall(*args)
        raise_exception_for_error_code(res)
        return res

    def vmrun(self, *args):
        res = super().vmrun(*args)
        raise_exception_for_error_code(res)
        return res

    def vmsave(self, *args):
        res = super().vmsave(*args)
        raise_exception_for_error_code(res)
        return res

    def vmgexit(self, *args):
        res = super().vmgexit(*args)
        raise_exception_for_error_code(res)
        return res

    def f2xm1(self, *args):
        res = super().f2xm1(*args)
        raise_exception_for_error_code(res)
        return res

    def fabs(self, *args):
        res = super().fabs(*args)
        raise_exception_for_error_code(res)
        return res

    def fadd(self, *args):
        res = super().fadd(*args)
        raise_exception_for_error_code(res)
        return res

    def faddp(self, *args):
        res = super().faddp(*args)
        raise_exception_for_error_code(res)
        return res

    def fbld(self, *args):
        res = super().fbld(*args)
        raise_exception_for_error_code(res)
        return res

    def fbstp(self, *args):
        res = super().fbstp(*args)
        raise_exception_for_error_code(res)
        return res

    def fchs(self, *args):
        res = super().fchs(*args)
        raise_exception_for_error_code(res)
        return res

    def fclex(self, *args):
        res = super().fclex(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmovb(self, *args):
        res = super().fcmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmovbe(self, *args):
        res = super().fcmovbe(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmove(self, *args):
        res = super().fcmove(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmovnb(self, *args):
        res = super().fcmovnb(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmovnbe(self, *args):
        res = super().fcmovnbe(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmovne(self, *args):
        res = super().fcmovne(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmovnu(self, *args):
        res = super().fcmovnu(*args)
        raise_exception_for_error_code(res)
        return res

    def fcmovu(self, *args):
        res = super().fcmovu(*args)
        raise_exception_for_error_code(res)
        return res

    def fcom(self, *args):
        res = super().fcom(*args)
        raise_exception_for_error_code(res)
        return res

    def fcomp(self, *args):
        res = super().fcomp(*args)
        raise_exception_for_error_code(res)
        return res

    def fcompp(self, *args):
        res = super().fcompp(*args)
        raise_exception_for_error_code(res)
        return res

    def fcomi(self, *args):
        res = super().fcomi(*args)
        raise_exception_for_error_code(res)
        return res

    def fcomip(self, *args):
        res = super().fcomip(*args)
        raise_exception_for_error_code(res)
        return res

    def fcos(self, *args):
        res = super().fcos(*args)
        raise_exception_for_error_code(res)
        return res

    def fdecstp(self, *args):
        res = super().fdecstp(*args)
        raise_exception_for_error_code(res)
        return res

    def fdiv(self, *args):
        res = super().fdiv(*args)
        raise_exception_for_error_code(res)
        return res

    def fdivp(self, *args):
        res = super().fdivp(*args)
        raise_exception_for_error_code(res)
        return res

    def fdivr(self, *args):
        res = super().fdivr(*args)
        raise_exception_for_error_code(res)
        return res

    def fdivrp(self, *args):
        res = super().fdivrp(*args)
        raise_exception_for_error_code(res)
        return res

    def ffree(self, *args):
        res = super().ffree(*args)
        raise_exception_for_error_code(res)
        return res

    def fiadd(self, *args):
        res = super().fiadd(*args)
        raise_exception_for_error_code(res)
        return res

    def ficom(self, *args):
        res = super().ficom(*args)
        raise_exception_for_error_code(res)
        return res

    def ficomp(self, *args):
        res = super().ficomp(*args)
        raise_exception_for_error_code(res)
        return res

    def fidiv(self, *args):
        res = super().fidiv(*args)
        raise_exception_for_error_code(res)
        return res

    def fidivr(self, *args):
        res = super().fidivr(*args)
        raise_exception_for_error_code(res)
        return res

    def fild(self, *args):
        res = super().fild(*args)
        raise_exception_for_error_code(res)
        return res

    def fimul(self, *args):
        res = super().fimul(*args)
        raise_exception_for_error_code(res)
        return res

    def fincstp(self, *args):
        res = super().fincstp(*args)
        raise_exception_for_error_code(res)
        return res

    def finit(self, *args):
        res = super().finit(*args)
        raise_exception_for_error_code(res)
        return res

    def fisub(self, *args):
        res = super().fisub(*args)
        raise_exception_for_error_code(res)
        return res

    def fisubr(self, *args):
        res = super().fisubr(*args)
        raise_exception_for_error_code(res)
        return res

    def fninit(self, *args):
        res = super().fninit(*args)
        raise_exception_for_error_code(res)
        return res

    def fist(self, *args):
        res = super().fist(*args)
        raise_exception_for_error_code(res)
        return res

    def fistp(self, *args):
        res = super().fistp(*args)
        raise_exception_for_error_code(res)
        return res

    def fisttp(self, *args):
        res = super().fisttp(*args)
        raise_exception_for_error_code(res)
        return res

    def fld(self, *args):
        res = super().fld(*args)
        raise_exception_for_error_code(res)
        return res

    def fld1(self, *args):
        res = super().fld1(*args)
        raise_exception_for_error_code(res)
        return res

    def fldl2t(self, *args):
        res = super().fldl2t(*args)
        raise_exception_for_error_code(res)
        return res

    def fldl2e(self, *args):
        res = super().fldl2e(*args)
        raise_exception_for_error_code(res)
        return res

    def fldpi(self, *args):
        res = super().fldpi(*args)
        raise_exception_for_error_code(res)
        return res

    def fldlg2(self, *args):
        res = super().fldlg2(*args)
        raise_exception_for_error_code(res)
        return res

    def fldln2(self, *args):
        res = super().fldln2(*args)
        raise_exception_for_error_code(res)
        return res

    def fldz(self, *args):
        res = super().fldz(*args)
        raise_exception_for_error_code(res)
        return res

    def fldcw(self, *args):
        res = super().fldcw(*args)
        raise_exception_for_error_code(res)
        return res

    def fldenv(self, *args):
        res = super().fldenv(*args)
        raise_exception_for_error_code(res)
        return res

    def fmul(self, *args):
        res = super().fmul(*args)
        raise_exception_for_error_code(res)
        return res

    def fmulp(self, *args):
        res = super().fmulp(*args)
        raise_exception_for_error_code(res)
        return res

    def fnclex(self, *args):
        res = super().fnclex(*args)
        raise_exception_for_error_code(res)
        return res

    def fnop(self, *args):
        res = super().fnop(*args)
        raise_exception_for_error_code(res)
        return res

    def fnsave(self, *args):
        res = super().fnsave(*args)
        raise_exception_for_error_code(res)
        return res

    def fnstenv(self, *args):
        res = super().fnstenv(*args)
        raise_exception_for_error_code(res)
        return res

    def fnstcw(self, *args):
        res = super().fnstcw(*args)
        raise_exception_for_error_code(res)
        return res

    def fpatan(self, *args):
        res = super().fpatan(*args)
        raise_exception_for_error_code(res)
        return res

    def fprem(self, *args):
        res = super().fprem(*args)
        raise_exception_for_error_code(res)
        return res

    def fprem1(self, *args):
        res = super().fprem1(*args)
        raise_exception_for_error_code(res)
        return res

    def fptan(self, *args):
        res = super().fptan(*args)
        raise_exception_for_error_code(res)
        return res

    def frndint(self, *args):
        res = super().frndint(*args)
        raise_exception_for_error_code(res)
        return res

    def frstor(self, *args):
        res = super().frstor(*args)
        raise_exception_for_error_code(res)
        return res

    def fsave(self, *args):
        res = super().fsave(*args)
        raise_exception_for_error_code(res)
        return res

    def fscale(self, *args):
        res = super().fscale(*args)
        raise_exception_for_error_code(res)
        return res

    def fsin(self, *args):
        res = super().fsin(*args)
        raise_exception_for_error_code(res)
        return res

    def fsincos(self, *args):
        res = super().fsincos(*args)
        raise_exception_for_error_code(res)
        return res

    def fsqrt(self, *args):
        res = super().fsqrt(*args)
        raise_exception_for_error_code(res)
        return res

    def fst(self, *args):
        res = super().fst(*args)
        raise_exception_for_error_code(res)
        return res

    def fstp(self, *args):
        res = super().fstp(*args)
        raise_exception_for_error_code(res)
        return res

    def fstcw(self, *args):
        res = super().fstcw(*args)
        raise_exception_for_error_code(res)
        return res

    def fstenv(self, *args):
        res = super().fstenv(*args)
        raise_exception_for_error_code(res)
        return res

    def fsub(self, *args):
        res = super().fsub(*args)
        raise_exception_for_error_code(res)
        return res

    def fsubp(self, *args):
        res = super().fsubp(*args)
        raise_exception_for_error_code(res)
        return res

    def fsubr(self, *args):
        res = super().fsubr(*args)
        raise_exception_for_error_code(res)
        return res

    def fsubrp(self, *args):
        res = super().fsubrp(*args)
        raise_exception_for_error_code(res)
        return res

    def ftst(self, *args):
        res = super().ftst(*args)
        raise_exception_for_error_code(res)
        return res

    def fucom(self, *args):
        res = super().fucom(*args)
        raise_exception_for_error_code(res)
        return res

    def fucomi(self, *args):
        res = super().fucomi(*args)
        raise_exception_for_error_code(res)
        return res

    def fucomip(self, *args):
        res = super().fucomip(*args)
        raise_exception_for_error_code(res)
        return res

    def fucomp(self, *args):
        res = super().fucomp(*args)
        raise_exception_for_error_code(res)
        return res

    def fucompp(self, *args):
        res = super().fucompp(*args)
        raise_exception_for_error_code(res)
        return res

    def fwait(self, *args):
        res = super().fwait(*args)
        raise_exception_for_error_code(res)
        return res

    def fxam(self, *args):
        res = super().fxam(*args)
        raise_exception_for_error_code(res)
        return res

    def fxch(self, *args):
        res = super().fxch(*args)
        raise_exception_for_error_code(res)
        return res

    def fxtract(self, *args):
        res = super().fxtract(*args)
        raise_exception_for_error_code(res)
        return res

    def fyl2x(self, *args):
        res = super().fyl2x(*args)
        raise_exception_for_error_code(res)
        return res

    def fyl2xp1(self, *args):
        res = super().fyl2xp1(*args)
        raise_exception_for_error_code(res)
        return res

    def fstsw(self, *args):
        res = super().fstsw(*args)
        raise_exception_for_error_code(res)
        return res

    def fnstsw(self, *args):
        res = super().fnstsw(*args)
        raise_exception_for_error_code(res)
        return res

    def addpd(self, *args):
        res = super().addpd(*args)
        raise_exception_for_error_code(res)
        return res

    def addps(self, *args):
        res = super().addps(*args)
        raise_exception_for_error_code(res)
        return res

    def addsd(self, *args):
        res = super().addsd(*args)
        raise_exception_for_error_code(res)
        return res

    def addss(self, *args):
        res = super().addss(*args)
        raise_exception_for_error_code(res)
        return res

    def addsubpd(self, *args):
        res = super().addsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def addsubps(self, *args):
        res = super().addsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def andnpd(self, *args):
        res = super().andnpd(*args)
        raise_exception_for_error_code(res)
        return res

    def andnps(self, *args):
        res = super().andnps(*args)
        raise_exception_for_error_code(res)
        return res

    def andpd(self, *args):
        res = super().andpd(*args)
        raise_exception_for_error_code(res)
        return res

    def andps(self, *args):
        res = super().andps(*args)
        raise_exception_for_error_code(res)
        return res

    def blendpd(self, *args):
        res = super().blendpd(*args)
        raise_exception_for_error_code(res)
        return res

    def blendps(self, *args):
        res = super().blendps(*args)
        raise_exception_for_error_code(res)
        return res

    def blendvpd(self, *args):
        res = super().blendvpd(*args)
        raise_exception_for_error_code(res)
        return res

    def blendvps(self, *args):
        res = super().blendvps(*args)
        raise_exception_for_error_code(res)
        return res

    def cmppd(self, *args):
        res = super().cmppd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpps(self, *args):
        res = super().cmpps(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpsd(self, *args):
        res = super().cmpsd(*args)
        raise_exception_for_error_code(res)
        return res

    def cmpss(self, *args):
        res = super().cmpss(*args)
        raise_exception_for_error_code(res)
        return res

    def comisd(self, *args):
        res = super().comisd(*args)
        raise_exception_for_error_code(res)
        return res

    def comiss(self, *args):
        res = super().comiss(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtdq2pd(self, *args):
        res = super().cvtdq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtdq2ps(self, *args):
        res = super().cvtdq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtpd2dq(self, *args):
        res = super().cvtpd2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtpd2pi(self, *args):
        res = super().cvtpd2pi(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtpd2ps(self, *args):
        res = super().cvtpd2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtpi2pd(self, *args):
        res = super().cvtpi2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtpi2ps(self, *args):
        res = super().cvtpi2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtps2dq(self, *args):
        res = super().cvtps2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtps2pd(self, *args):
        res = super().cvtps2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtps2pd(self, *args):
        res = super().cvtps2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtps2pi(self, *args):
        res = super().cvtps2pi(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtps2pi(self, *args):
        res = super().cvtps2pi(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsd2si(self, *args):
        res = super().cvtsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsd2si(self, *args):
        res = super().cvtsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsd2ss(self, *args):
        res = super().cvtsd2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsd2ss(self, *args):
        res = super().cvtsd2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsi2sd(self, *args):
        res = super().cvtsi2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsi2sd(self, *args):
        res = super().cvtsi2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsi2ss(self, *args):
        res = super().cvtsi2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtsi2ss(self, *args):
        res = super().cvtsi2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtss2sd(self, *args):
        res = super().cvtss2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtss2sd(self, *args):
        res = super().cvtss2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtss2si(self, *args):
        res = super().cvtss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def cvtss2si(self, *args):
        res = super().cvtss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttpd2pi(self, *args):
        res = super().cvttpd2pi(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttpd2pi(self, *args):
        res = super().cvttpd2pi(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttpd2dq(self, *args):
        res = super().cvttpd2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttpd2dq(self, *args):
        res = super().cvttpd2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttps2dq(self, *args):
        res = super().cvttps2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttps2dq(self, *args):
        res = super().cvttps2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttps2pi(self, *args):
        res = super().cvttps2pi(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttps2pi(self, *args):
        res = super().cvttps2pi(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttsd2si(self, *args):
        res = super().cvttsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttsd2si(self, *args):
        res = super().cvttsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttss2si(self, *args):
        res = super().cvttss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def cvttss2si(self, *args):
        res = super().cvttss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def divpd(self, *args):
        res = super().divpd(*args)
        raise_exception_for_error_code(res)
        return res

    def divpd(self, *args):
        res = super().divpd(*args)
        raise_exception_for_error_code(res)
        return res

    def divps(self, *args):
        res = super().divps(*args)
        raise_exception_for_error_code(res)
        return res

    def divps(self, *args):
        res = super().divps(*args)
        raise_exception_for_error_code(res)
        return res

    def divsd(self, *args):
        res = super().divsd(*args)
        raise_exception_for_error_code(res)
        return res

    def divsd(self, *args):
        res = super().divsd(*args)
        raise_exception_for_error_code(res)
        return res

    def divss(self, *args):
        res = super().divss(*args)
        raise_exception_for_error_code(res)
        return res

    def divss(self, *args):
        res = super().divss(*args)
        raise_exception_for_error_code(res)
        return res

    def dppd(self, *args):
        res = super().dppd(*args)
        raise_exception_for_error_code(res)
        return res

    def dppd(self, *args):
        res = super().dppd(*args)
        raise_exception_for_error_code(res)
        return res

    def dpps(self, *args):
        res = super().dpps(*args)
        raise_exception_for_error_code(res)
        return res

    def dpps(self, *args):
        res = super().dpps(*args)
        raise_exception_for_error_code(res)
        return res

    def extractps(self, *args):
        res = super().extractps(*args)
        raise_exception_for_error_code(res)
        return res

    def extractps(self, *args):
        res = super().extractps(*args)
        raise_exception_for_error_code(res)
        return res

    def extrq(self, *args):
        res = super().extrq(*args)
        raise_exception_for_error_code(res)
        return res

    def extrq(self, *args):
        res = super().extrq(*args)
        raise_exception_for_error_code(res)
        return res

    def haddpd(self, *args):
        res = super().haddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def haddpd(self, *args):
        res = super().haddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def haddps(self, *args):
        res = super().haddps(*args)
        raise_exception_for_error_code(res)
        return res

    def haddps(self, *args):
        res = super().haddps(*args)
        raise_exception_for_error_code(res)
        return res

    def hsubpd(self, *args):
        res = super().hsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def hsubpd(self, *args):
        res = super().hsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def hsubps(self, *args):
        res = super().hsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def hsubps(self, *args):
        res = super().hsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def insertps(self, *args):
        res = super().insertps(*args)
        raise_exception_for_error_code(res)
        return res

    def insertps(self, *args):
        res = super().insertps(*args)
        raise_exception_for_error_code(res)
        return res

    def insertq(self, *args):
        res = super().insertq(*args)
        raise_exception_for_error_code(res)
        return res

    def insertq(self, *args):
        res = super().insertq(*args)
        raise_exception_for_error_code(res)
        return res

    def lddqu(self, *args):
        res = super().lddqu(*args)
        raise_exception_for_error_code(res)
        return res

    def maskmovq(self, *args):
        res = super().maskmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def maskmovdqu(self, *args):
        res = super().maskmovdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def maxpd(self, *args):
        res = super().maxpd(*args)
        raise_exception_for_error_code(res)
        return res

    def maxpd(self, *args):
        res = super().maxpd(*args)
        raise_exception_for_error_code(res)
        return res

    def maxps(self, *args):
        res = super().maxps(*args)
        raise_exception_for_error_code(res)
        return res

    def maxps(self, *args):
        res = super().maxps(*args)
        raise_exception_for_error_code(res)
        return res

    def maxsd(self, *args):
        res = super().maxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def maxsd(self, *args):
        res = super().maxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def maxss(self, *args):
        res = super().maxss(*args)
        raise_exception_for_error_code(res)
        return res

    def maxss(self, *args):
        res = super().maxss(*args)
        raise_exception_for_error_code(res)
        return res

    def minpd(self, *args):
        res = super().minpd(*args)
        raise_exception_for_error_code(res)
        return res

    def minpd(self, *args):
        res = super().minpd(*args)
        raise_exception_for_error_code(res)
        return res

    def minps(self, *args):
        res = super().minps(*args)
        raise_exception_for_error_code(res)
        return res

    def minps(self, *args):
        res = super().minps(*args)
        raise_exception_for_error_code(res)
        return res

    def minsd(self, *args):
        res = super().minsd(*args)
        raise_exception_for_error_code(res)
        return res

    def minsd(self, *args):
        res = super().minsd(*args)
        raise_exception_for_error_code(res)
        return res

    def minss(self, *args):
        res = super().minss(*args)
        raise_exception_for_error_code(res)
        return res

    def minss(self, *args):
        res = super().minss(*args)
        raise_exception_for_error_code(res)
        return res

    def movapd(self, *args):
        res = super().movapd(*args)
        raise_exception_for_error_code(res)
        return res

    def movapd(self, *args):
        res = super().movapd(*args)
        raise_exception_for_error_code(res)
        return res

    def movapd(self, *args):
        res = super().movapd(*args)
        raise_exception_for_error_code(res)
        return res

    def movaps(self, *args):
        res = super().movaps(*args)
        raise_exception_for_error_code(res)
        return res

    def movaps(self, *args):
        res = super().movaps(*args)
        raise_exception_for_error_code(res)
        return res

    def movaps(self, *args):
        res = super().movaps(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movd(self, *args):
        res = super().movd(*args)
        raise_exception_for_error_code(res)
        return res

    def movddup(self, *args):
        res = super().movddup(*args)
        raise_exception_for_error_code(res)
        return res

    def movddup(self, *args):
        res = super().movddup(*args)
        raise_exception_for_error_code(res)
        return res

    def movdq2q(self, *args):
        res = super().movdq2q(*args)
        raise_exception_for_error_code(res)
        return res

    def movdqa(self, *args):
        res = super().movdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def movdqa(self, *args):
        res = super().movdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def movdqa(self, *args):
        res = super().movdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def movdqu(self, *args):
        res = super().movdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def movdqu(self, *args):
        res = super().movdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def movdqu(self, *args):
        res = super().movdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def movhlps(self, *args):
        res = super().movhlps(*args)
        raise_exception_for_error_code(res)
        return res

    def movhpd(self, *args):
        res = super().movhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def movhpd(self, *args):
        res = super().movhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def movhps(self, *args):
        res = super().movhps(*args)
        raise_exception_for_error_code(res)
        return res

    def movhps(self, *args):
        res = super().movhps(*args)
        raise_exception_for_error_code(res)
        return res

    def movlhps(self, *args):
        res = super().movlhps(*args)
        raise_exception_for_error_code(res)
        return res

    def movlpd(self, *args):
        res = super().movlpd(*args)
        raise_exception_for_error_code(res)
        return res

    def movlpd(self, *args):
        res = super().movlpd(*args)
        raise_exception_for_error_code(res)
        return res

    def movlps(self, *args):
        res = super().movlps(*args)
        raise_exception_for_error_code(res)
        return res

    def movlps(self, *args):
        res = super().movlps(*args)
        raise_exception_for_error_code(res)
        return res

    def movmskps(self, *args):
        res = super().movmskps(*args)
        raise_exception_for_error_code(res)
        return res

    def movmskpd(self, *args):
        res = super().movmskpd(*args)
        raise_exception_for_error_code(res)
        return res

    def movntdq(self, *args):
        res = super().movntdq(*args)
        raise_exception_for_error_code(res)
        return res

    def movntdqa(self, *args):
        res = super().movntdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def movntpd(self, *args):
        res = super().movntpd(*args)
        raise_exception_for_error_code(res)
        return res

    def movntps(self, *args):
        res = super().movntps(*args)
        raise_exception_for_error_code(res)
        return res

    def movntsd(self, *args):
        res = super().movntsd(*args)
        raise_exception_for_error_code(res)
        return res

    def movntss(self, *args):
        res = super().movntss(*args)
        raise_exception_for_error_code(res)
        return res

    def movntq(self, *args):
        res = super().movntq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq(self, *args):
        res = super().movq(*args)
        raise_exception_for_error_code(res)
        return res

    def movq2dq(self, *args):
        res = super().movq2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def movsd(self, *args):
        res = super().movsd(*args)
        raise_exception_for_error_code(res)
        return res

    def movsd(self, *args):
        res = super().movsd(*args)
        raise_exception_for_error_code(res)
        return res

    def movsd(self, *args):
        res = super().movsd(*args)
        raise_exception_for_error_code(res)
        return res

    def movshdup(self, *args):
        res = super().movshdup(*args)
        raise_exception_for_error_code(res)
        return res

    def movshdup(self, *args):
        res = super().movshdup(*args)
        raise_exception_for_error_code(res)
        return res

    def movsldup(self, *args):
        res = super().movsldup(*args)
        raise_exception_for_error_code(res)
        return res

    def movsldup(self, *args):
        res = super().movsldup(*args)
        raise_exception_for_error_code(res)
        return res

    def movss(self, *args):
        res = super().movss(*args)
        raise_exception_for_error_code(res)
        return res

    def movss(self, *args):
        res = super().movss(*args)
        raise_exception_for_error_code(res)
        return res

    def movss(self, *args):
        res = super().movss(*args)
        raise_exception_for_error_code(res)
        return res

    def movupd(self, *args):
        res = super().movupd(*args)
        raise_exception_for_error_code(res)
        return res

    def movupd(self, *args):
        res = super().movupd(*args)
        raise_exception_for_error_code(res)
        return res

    def movupd(self, *args):
        res = super().movupd(*args)
        raise_exception_for_error_code(res)
        return res

    def movups(self, *args):
        res = super().movups(*args)
        raise_exception_for_error_code(res)
        return res

    def movups(self, *args):
        res = super().movups(*args)
        raise_exception_for_error_code(res)
        return res

    def movups(self, *args):
        res = super().movups(*args)
        raise_exception_for_error_code(res)
        return res

    def mpsadbw(self, *args):
        res = super().mpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def mpsadbw(self, *args):
        res = super().mpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def mulpd(self, *args):
        res = super().mulpd(*args)
        raise_exception_for_error_code(res)
        return res

    def mulpd(self, *args):
        res = super().mulpd(*args)
        raise_exception_for_error_code(res)
        return res

    def mulps(self, *args):
        res = super().mulps(*args)
        raise_exception_for_error_code(res)
        return res

    def mulps(self, *args):
        res = super().mulps(*args)
        raise_exception_for_error_code(res)
        return res

    def mulsd(self, *args):
        res = super().mulsd(*args)
        raise_exception_for_error_code(res)
        return res

    def mulsd(self, *args):
        res = super().mulsd(*args)
        raise_exception_for_error_code(res)
        return res

    def mulss(self, *args):
        res = super().mulss(*args)
        raise_exception_for_error_code(res)
        return res

    def mulss(self, *args):
        res = super().mulss(*args)
        raise_exception_for_error_code(res)
        return res

    def orpd(self, *args):
        res = super().orpd(*args)
        raise_exception_for_error_code(res)
        return res

    def orpd(self, *args):
        res = super().orpd(*args)
        raise_exception_for_error_code(res)
        return res

    def orps(self, *args):
        res = super().orps(*args)
        raise_exception_for_error_code(res)
        return res

    def orps(self, *args):
        res = super().orps(*args)
        raise_exception_for_error_code(res)
        return res

    def packssdw(self, *args):
        res = super().packssdw(*args)
        raise_exception_for_error_code(res)
        return res

    def packssdw(self, *args):
        res = super().packssdw(*args)
        raise_exception_for_error_code(res)
        return res

    def packssdw(self, *args):
        res = super().packssdw(*args)
        raise_exception_for_error_code(res)
        return res

    def packssdw(self, *args):
        res = super().packssdw(*args)
        raise_exception_for_error_code(res)
        return res

    def packsswb(self, *args):
        res = super().packsswb(*args)
        raise_exception_for_error_code(res)
        return res

    def packsswb(self, *args):
        res = super().packsswb(*args)
        raise_exception_for_error_code(res)
        return res

    def packsswb(self, *args):
        res = super().packsswb(*args)
        raise_exception_for_error_code(res)
        return res

    def packsswb(self, *args):
        res = super().packsswb(*args)
        raise_exception_for_error_code(res)
        return res

    def packusdw(self, *args):
        res = super().packusdw(*args)
        raise_exception_for_error_code(res)
        return res

    def packusdw(self, *args):
        res = super().packusdw(*args)
        raise_exception_for_error_code(res)
        return res

    def packuswb(self, *args):
        res = super().packuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def packuswb(self, *args):
        res = super().packuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def packuswb(self, *args):
        res = super().packuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def packuswb(self, *args):
        res = super().packuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsb(self, *args):
        res = super().pabsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsb(self, *args):
        res = super().pabsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsb(self, *args):
        res = super().pabsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsb(self, *args):
        res = super().pabsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsd(self, *args):
        res = super().pabsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsd(self, *args):
        res = super().pabsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsd(self, *args):
        res = super().pabsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsd(self, *args):
        res = super().pabsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsw(self, *args):
        res = super().pabsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsw(self, *args):
        res = super().pabsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsw(self, *args):
        res = super().pabsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pabsw(self, *args):
        res = super().pabsw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddb(self, *args):
        res = super().paddb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddb(self, *args):
        res = super().paddb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddb(self, *args):
        res = super().paddb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddb(self, *args):
        res = super().paddb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddd(self, *args):
        res = super().paddd(*args)
        raise_exception_for_error_code(res)
        return res

    def paddd(self, *args):
        res = super().paddd(*args)
        raise_exception_for_error_code(res)
        return res

    def paddd(self, *args):
        res = super().paddd(*args)
        raise_exception_for_error_code(res)
        return res

    def paddd(self, *args):
        res = super().paddd(*args)
        raise_exception_for_error_code(res)
        return res

    def paddq(self, *args):
        res = super().paddq(*args)
        raise_exception_for_error_code(res)
        return res

    def paddq(self, *args):
        res = super().paddq(*args)
        raise_exception_for_error_code(res)
        return res

    def paddq(self, *args):
        res = super().paddq(*args)
        raise_exception_for_error_code(res)
        return res

    def paddq(self, *args):
        res = super().paddq(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsb(self, *args):
        res = super().paddsb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsb(self, *args):
        res = super().paddsb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsb(self, *args):
        res = super().paddsb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsb(self, *args):
        res = super().paddsb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsw(self, *args):
        res = super().paddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsw(self, *args):
        res = super().paddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsw(self, *args):
        res = super().paddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddsw(self, *args):
        res = super().paddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusb(self, *args):
        res = super().paddusb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusb(self, *args):
        res = super().paddusb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusb(self, *args):
        res = super().paddusb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusb(self, *args):
        res = super().paddusb(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusw(self, *args):
        res = super().paddusw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusw(self, *args):
        res = super().paddusw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusw(self, *args):
        res = super().paddusw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddusw(self, *args):
        res = super().paddusw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddw(self, *args):
        res = super().paddw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddw(self, *args):
        res = super().paddw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddw(self, *args):
        res = super().paddw(*args)
        raise_exception_for_error_code(res)
        return res

    def paddw(self, *args):
        res = super().paddw(*args)
        raise_exception_for_error_code(res)
        return res

    def palignr(self, *args):
        res = super().palignr(*args)
        raise_exception_for_error_code(res)
        return res

    def palignr(self, *args):
        res = super().palignr(*args)
        raise_exception_for_error_code(res)
        return res

    def palignr(self, *args):
        res = super().palignr(*args)
        raise_exception_for_error_code(res)
        return res

    def palignr(self, *args):
        res = super().palignr(*args)
        raise_exception_for_error_code(res)
        return res

    def pand(self, *args):
        res = super().pand(*args)
        raise_exception_for_error_code(res)
        return res

    def pand(self, *args):
        res = super().pand(*args)
        raise_exception_for_error_code(res)
        return res

    def pand(self, *args):
        res = super().pand(*args)
        raise_exception_for_error_code(res)
        return res

    def pand(self, *args):
        res = super().pand(*args)
        raise_exception_for_error_code(res)
        return res

    def pandn(self, *args):
        res = super().pandn(*args)
        raise_exception_for_error_code(res)
        return res

    def pandn(self, *args):
        res = super().pandn(*args)
        raise_exception_for_error_code(res)
        return res

    def pandn(self, *args):
        res = super().pandn(*args)
        raise_exception_for_error_code(res)
        return res

    def pandn(self, *args):
        res = super().pandn(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgb(self, *args):
        res = super().pavgb(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgb(self, *args):
        res = super().pavgb(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgb(self, *args):
        res = super().pavgb(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgb(self, *args):
        res = super().pavgb(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgw(self, *args):
        res = super().pavgw(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgw(self, *args):
        res = super().pavgw(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgw(self, *args):
        res = super().pavgw(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgw(self, *args):
        res = super().pavgw(*args)
        raise_exception_for_error_code(res)
        return res

    def pblendvb(self, *args):
        res = super().pblendvb(*args)
        raise_exception_for_error_code(res)
        return res

    def pblendvb(self, *args):
        res = super().pblendvb(*args)
        raise_exception_for_error_code(res)
        return res

    def pblendw(self, *args):
        res = super().pblendw(*args)
        raise_exception_for_error_code(res)
        return res

    def pblendw(self, *args):
        res = super().pblendw(*args)
        raise_exception_for_error_code(res)
        return res

    def pclmulqdq(self, *args):
        res = super().pclmulqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def pclmulqdq(self, *args):
        res = super().pclmulqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpestri(self, *args):
        res = super().pcmpestri(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpestri(self, *args):
        res = super().pcmpestri(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpestrm(self, *args):
        res = super().pcmpestrm(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpestrm(self, *args):
        res = super().pcmpestrm(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqb(self, *args):
        res = super().pcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqb(self, *args):
        res = super().pcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqb(self, *args):
        res = super().pcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqb(self, *args):
        res = super().pcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqd(self, *args):
        res = super().pcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqd(self, *args):
        res = super().pcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqd(self, *args):
        res = super().pcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqd(self, *args):
        res = super().pcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqq(self, *args):
        res = super().pcmpeqq(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqq(self, *args):
        res = super().pcmpeqq(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqw(self, *args):
        res = super().pcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqw(self, *args):
        res = super().pcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqw(self, *args):
        res = super().pcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpeqw(self, *args):
        res = super().pcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtb(self, *args):
        res = super().pcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtb(self, *args):
        res = super().pcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtb(self, *args):
        res = super().pcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtb(self, *args):
        res = super().pcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtd(self, *args):
        res = super().pcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtd(self, *args):
        res = super().pcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtd(self, *args):
        res = super().pcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtd(self, *args):
        res = super().pcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtq(self, *args):
        res = super().pcmpgtq(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtq(self, *args):
        res = super().pcmpgtq(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtw(self, *args):
        res = super().pcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtw(self, *args):
        res = super().pcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtw(self, *args):
        res = super().pcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpgtw(self, *args):
        res = super().pcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpistri(self, *args):
        res = super().pcmpistri(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpistri(self, *args):
        res = super().pcmpistri(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpistrm(self, *args):
        res = super().pcmpistrm(*args)
        raise_exception_for_error_code(res)
        return res

    def pcmpistrm(self, *args):
        res = super().pcmpistrm(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrb(self, *args):
        res = super().pextrb(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrb(self, *args):
        res = super().pextrb(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrd(self, *args):
        res = super().pextrd(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrd(self, *args):
        res = super().pextrd(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrq(self, *args):
        res = super().pextrq(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrq(self, *args):
        res = super().pextrq(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrw(self, *args):
        res = super().pextrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrw(self, *args):
        res = super().pextrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pextrw(self, *args):
        res = super().pextrw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddd(self, *args):
        res = super().phaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddd(self, *args):
        res = super().phaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddd(self, *args):
        res = super().phaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddd(self, *args):
        res = super().phaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddsw(self, *args):
        res = super().phaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddsw(self, *args):
        res = super().phaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddsw(self, *args):
        res = super().phaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddsw(self, *args):
        res = super().phaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddw(self, *args):
        res = super().phaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddw(self, *args):
        res = super().phaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddw(self, *args):
        res = super().phaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def phaddw(self, *args):
        res = super().phaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def phminposuw(self, *args):
        res = super().phminposuw(*args)
        raise_exception_for_error_code(res)
        return res

    def phminposuw(self, *args):
        res = super().phminposuw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubd(self, *args):
        res = super().phsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubd(self, *args):
        res = super().phsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubd(self, *args):
        res = super().phsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubd(self, *args):
        res = super().phsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubsw(self, *args):
        res = super().phsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubsw(self, *args):
        res = super().phsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubsw(self, *args):
        res = super().phsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubsw(self, *args):
        res = super().phsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubw(self, *args):
        res = super().phsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubw(self, *args):
        res = super().phsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubw(self, *args):
        res = super().phsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def phsubw(self, *args):
        res = super().phsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrb(self, *args):
        res = super().pinsrb(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrb(self, *args):
        res = super().pinsrb(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrd(self, *args):
        res = super().pinsrd(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrd(self, *args):
        res = super().pinsrd(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrq(self, *args):
        res = super().pinsrq(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrq(self, *args):
        res = super().pinsrq(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrw(self, *args):
        res = super().pinsrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrw(self, *args):
        res = super().pinsrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrw(self, *args):
        res = super().pinsrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pinsrw(self, *args):
        res = super().pinsrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddubsw(self, *args):
        res = super().pmaddubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddubsw(self, *args):
        res = super().pmaddubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddubsw(self, *args):
        res = super().pmaddubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddubsw(self, *args):
        res = super().pmaddubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddwd(self, *args):
        res = super().pmaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddwd(self, *args):
        res = super().pmaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddwd(self, *args):
        res = super().pmaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaddwd(self, *args):
        res = super().pmaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsb(self, *args):
        res = super().pmaxsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsb(self, *args):
        res = super().pmaxsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsd(self, *args):
        res = super().pmaxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsd(self, *args):
        res = super().pmaxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsw(self, *args):
        res = super().pmaxsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsw(self, *args):
        res = super().pmaxsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsw(self, *args):
        res = super().pmaxsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxsw(self, *args):
        res = super().pmaxsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxub(self, *args):
        res = super().pmaxub(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxub(self, *args):
        res = super().pmaxub(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxub(self, *args):
        res = super().pmaxub(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxub(self, *args):
        res = super().pmaxub(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxud(self, *args):
        res = super().pmaxud(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxud(self, *args):
        res = super().pmaxud(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxuw(self, *args):
        res = super().pmaxuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmaxuw(self, *args):
        res = super().pmaxuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsb(self, *args):
        res = super().pminsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsb(self, *args):
        res = super().pminsb(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsd(self, *args):
        res = super().pminsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsd(self, *args):
        res = super().pminsd(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsw(self, *args):
        res = super().pminsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsw(self, *args):
        res = super().pminsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsw(self, *args):
        res = super().pminsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pminsw(self, *args):
        res = super().pminsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pminub(self, *args):
        res = super().pminub(*args)
        raise_exception_for_error_code(res)
        return res

    def pminub(self, *args):
        res = super().pminub(*args)
        raise_exception_for_error_code(res)
        return res

    def pminub(self, *args):
        res = super().pminub(*args)
        raise_exception_for_error_code(res)
        return res

    def pminub(self, *args):
        res = super().pminub(*args)
        raise_exception_for_error_code(res)
        return res

    def pminud(self, *args):
        res = super().pminud(*args)
        raise_exception_for_error_code(res)
        return res

    def pminud(self, *args):
        res = super().pminud(*args)
        raise_exception_for_error_code(res)
        return res

    def pminuw(self, *args):
        res = super().pminuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pminuw(self, *args):
        res = super().pminuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovmskb(self, *args):
        res = super().pmovmskb(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovmskb(self, *args):
        res = super().pmovmskb(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxbd(self, *args):
        res = super().pmovsxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxbd(self, *args):
        res = super().pmovsxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxbq(self, *args):
        res = super().pmovsxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxbq(self, *args):
        res = super().pmovsxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxbw(self, *args):
        res = super().pmovsxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxbw(self, *args):
        res = super().pmovsxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxdq(self, *args):
        res = super().pmovsxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxdq(self, *args):
        res = super().pmovsxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxwd(self, *args):
        res = super().pmovsxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxwd(self, *args):
        res = super().pmovsxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxwq(self, *args):
        res = super().pmovsxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovsxwq(self, *args):
        res = super().pmovsxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxbd(self, *args):
        res = super().pmovzxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxbd(self, *args):
        res = super().pmovzxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxbq(self, *args):
        res = super().pmovzxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxbq(self, *args):
        res = super().pmovzxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxbw(self, *args):
        res = super().pmovzxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxbw(self, *args):
        res = super().pmovzxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxdq(self, *args):
        res = super().pmovzxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxdq(self, *args):
        res = super().pmovzxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxwd(self, *args):
        res = super().pmovzxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxwd(self, *args):
        res = super().pmovzxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxwq(self, *args):
        res = super().pmovzxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmovzxwq(self, *args):
        res = super().pmovzxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmuldq(self, *args):
        res = super().pmuldq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmuldq(self, *args):
        res = super().pmuldq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhrsw(self, *args):
        res = super().pmulhrsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhrsw(self, *args):
        res = super().pmulhrsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhrsw(self, *args):
        res = super().pmulhrsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhrsw(self, *args):
        res = super().pmulhrsw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhw(self, *args):
        res = super().pmulhw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhw(self, *args):
        res = super().pmulhw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhw(self, *args):
        res = super().pmulhw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhw(self, *args):
        res = super().pmulhw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhuw(self, *args):
        res = super().pmulhuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhuw(self, *args):
        res = super().pmulhuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhuw(self, *args):
        res = super().pmulhuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhuw(self, *args):
        res = super().pmulhuw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulld(self, *args):
        res = super().pmulld(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulld(self, *args):
        res = super().pmulld(*args)
        raise_exception_for_error_code(res)
        return res

    def pmullw(self, *args):
        res = super().pmullw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmullw(self, *args):
        res = super().pmullw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmullw(self, *args):
        res = super().pmullw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmullw(self, *args):
        res = super().pmullw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmuludq(self, *args):
        res = super().pmuludq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmuludq(self, *args):
        res = super().pmuludq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmuludq(self, *args):
        res = super().pmuludq(*args)
        raise_exception_for_error_code(res)
        return res

    def pmuludq(self, *args):
        res = super().pmuludq(*args)
        raise_exception_for_error_code(res)
        return res

    def por(self, *args):
        res = super().por(*args)
        raise_exception_for_error_code(res)
        return res

    def por(self, *args):
        res = super().por(*args)
        raise_exception_for_error_code(res)
        return res

    def por(self, *args):
        res = super().por(*args)
        raise_exception_for_error_code(res)
        return res

    def por(self, *args):
        res = super().por(*args)
        raise_exception_for_error_code(res)
        return res

    def psadbw(self, *args):
        res = super().psadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def psadbw(self, *args):
        res = super().psadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def psadbw(self, *args):
        res = super().psadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def psadbw(self, *args):
        res = super().psadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def pslld(self, *args):
        res = super().pslld(*args)
        raise_exception_for_error_code(res)
        return res

    def pslld(self, *args):
        res = super().pslld(*args)
        raise_exception_for_error_code(res)
        return res

    def pslld(self, *args):
        res = super().pslld(*args)
        raise_exception_for_error_code(res)
        return res

    def pslld(self, *args):
        res = super().pslld(*args)
        raise_exception_for_error_code(res)
        return res

    def pslld(self, *args):
        res = super().pslld(*args)
        raise_exception_for_error_code(res)
        return res

    def pslld(self, *args):
        res = super().pslld(*args)
        raise_exception_for_error_code(res)
        return res

    def pslldq(self, *args):
        res = super().pslldq(*args)
        raise_exception_for_error_code(res)
        return res

    def psllq(self, *args):
        res = super().psllq(*args)
        raise_exception_for_error_code(res)
        return res

    def psllq(self, *args):
        res = super().psllq(*args)
        raise_exception_for_error_code(res)
        return res

    def psllq(self, *args):
        res = super().psllq(*args)
        raise_exception_for_error_code(res)
        return res

    def psllq(self, *args):
        res = super().psllq(*args)
        raise_exception_for_error_code(res)
        return res

    def psllq(self, *args):
        res = super().psllq(*args)
        raise_exception_for_error_code(res)
        return res

    def psllq(self, *args):
        res = super().psllq(*args)
        raise_exception_for_error_code(res)
        return res

    def psllw(self, *args):
        res = super().psllw(*args)
        raise_exception_for_error_code(res)
        return res

    def psllw(self, *args):
        res = super().psllw(*args)
        raise_exception_for_error_code(res)
        return res

    def psllw(self, *args):
        res = super().psllw(*args)
        raise_exception_for_error_code(res)
        return res

    def psllw(self, *args):
        res = super().psllw(*args)
        raise_exception_for_error_code(res)
        return res

    def psllw(self, *args):
        res = super().psllw(*args)
        raise_exception_for_error_code(res)
        return res

    def psllw(self, *args):
        res = super().psllw(*args)
        raise_exception_for_error_code(res)
        return res

    def psrad(self, *args):
        res = super().psrad(*args)
        raise_exception_for_error_code(res)
        return res

    def psrad(self, *args):
        res = super().psrad(*args)
        raise_exception_for_error_code(res)
        return res

    def psrad(self, *args):
        res = super().psrad(*args)
        raise_exception_for_error_code(res)
        return res

    def psrad(self, *args):
        res = super().psrad(*args)
        raise_exception_for_error_code(res)
        return res

    def psrad(self, *args):
        res = super().psrad(*args)
        raise_exception_for_error_code(res)
        return res

    def psrad(self, *args):
        res = super().psrad(*args)
        raise_exception_for_error_code(res)
        return res

    def psraw(self, *args):
        res = super().psraw(*args)
        raise_exception_for_error_code(res)
        return res

    def psraw(self, *args):
        res = super().psraw(*args)
        raise_exception_for_error_code(res)
        return res

    def psraw(self, *args):
        res = super().psraw(*args)
        raise_exception_for_error_code(res)
        return res

    def psraw(self, *args):
        res = super().psraw(*args)
        raise_exception_for_error_code(res)
        return res

    def psraw(self, *args):
        res = super().psraw(*args)
        raise_exception_for_error_code(res)
        return res

    def psraw(self, *args):
        res = super().psraw(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufb(self, *args):
        res = super().pshufb(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufb(self, *args):
        res = super().pshufb(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufb(self, *args):
        res = super().pshufb(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufb(self, *args):
        res = super().pshufb(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufd(self, *args):
        res = super().pshufd(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufd(self, *args):
        res = super().pshufd(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufhw(self, *args):
        res = super().pshufhw(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufhw(self, *args):
        res = super().pshufhw(*args)
        raise_exception_for_error_code(res)
        return res

    def pshuflw(self, *args):
        res = super().pshuflw(*args)
        raise_exception_for_error_code(res)
        return res

    def pshuflw(self, *args):
        res = super().pshuflw(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufw(self, *args):
        res = super().pshufw(*args)
        raise_exception_for_error_code(res)
        return res

    def pshufw(self, *args):
        res = super().pshufw(*args)
        raise_exception_for_error_code(res)
        return res

    def psignb(self, *args):
        res = super().psignb(*args)
        raise_exception_for_error_code(res)
        return res

    def psignb(self, *args):
        res = super().psignb(*args)
        raise_exception_for_error_code(res)
        return res

    def psignb(self, *args):
        res = super().psignb(*args)
        raise_exception_for_error_code(res)
        return res

    def psignb(self, *args):
        res = super().psignb(*args)
        raise_exception_for_error_code(res)
        return res

    def psignd(self, *args):
        res = super().psignd(*args)
        raise_exception_for_error_code(res)
        return res

    def psignd(self, *args):
        res = super().psignd(*args)
        raise_exception_for_error_code(res)
        return res

    def psignd(self, *args):
        res = super().psignd(*args)
        raise_exception_for_error_code(res)
        return res

    def psignd(self, *args):
        res = super().psignd(*args)
        raise_exception_for_error_code(res)
        return res

    def psignw(self, *args):
        res = super().psignw(*args)
        raise_exception_for_error_code(res)
        return res

    def psignw(self, *args):
        res = super().psignw(*args)
        raise_exception_for_error_code(res)
        return res

    def psignw(self, *args):
        res = super().psignw(*args)
        raise_exception_for_error_code(res)
        return res

    def psignw(self, *args):
        res = super().psignw(*args)
        raise_exception_for_error_code(res)
        return res

    def psrld(self, *args):
        res = super().psrld(*args)
        raise_exception_for_error_code(res)
        return res

    def psrld(self, *args):
        res = super().psrld(*args)
        raise_exception_for_error_code(res)
        return res

    def psrld(self, *args):
        res = super().psrld(*args)
        raise_exception_for_error_code(res)
        return res

    def psrld(self, *args):
        res = super().psrld(*args)
        raise_exception_for_error_code(res)
        return res

    def psrld(self, *args):
        res = super().psrld(*args)
        raise_exception_for_error_code(res)
        return res

    def psrld(self, *args):
        res = super().psrld(*args)
        raise_exception_for_error_code(res)
        return res

    def psrldq(self, *args):
        res = super().psrldq(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlq(self, *args):
        res = super().psrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlq(self, *args):
        res = super().psrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlq(self, *args):
        res = super().psrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlq(self, *args):
        res = super().psrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlq(self, *args):
        res = super().psrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlq(self, *args):
        res = super().psrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlw(self, *args):
        res = super().psrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlw(self, *args):
        res = super().psrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlw(self, *args):
        res = super().psrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlw(self, *args):
        res = super().psrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlw(self, *args):
        res = super().psrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def psrlw(self, *args):
        res = super().psrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubb(self, *args):
        res = super().psubb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubb(self, *args):
        res = super().psubb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubb(self, *args):
        res = super().psubb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubb(self, *args):
        res = super().psubb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubd(self, *args):
        res = super().psubd(*args)
        raise_exception_for_error_code(res)
        return res

    def psubd(self, *args):
        res = super().psubd(*args)
        raise_exception_for_error_code(res)
        return res

    def psubd(self, *args):
        res = super().psubd(*args)
        raise_exception_for_error_code(res)
        return res

    def psubd(self, *args):
        res = super().psubd(*args)
        raise_exception_for_error_code(res)
        return res

    def psubq(self, *args):
        res = super().psubq(*args)
        raise_exception_for_error_code(res)
        return res

    def psubq(self, *args):
        res = super().psubq(*args)
        raise_exception_for_error_code(res)
        return res

    def psubq(self, *args):
        res = super().psubq(*args)
        raise_exception_for_error_code(res)
        return res

    def psubq(self, *args):
        res = super().psubq(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsb(self, *args):
        res = super().psubsb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsb(self, *args):
        res = super().psubsb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsb(self, *args):
        res = super().psubsb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsb(self, *args):
        res = super().psubsb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsw(self, *args):
        res = super().psubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsw(self, *args):
        res = super().psubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsw(self, *args):
        res = super().psubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubsw(self, *args):
        res = super().psubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusb(self, *args):
        res = super().psubusb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusb(self, *args):
        res = super().psubusb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusb(self, *args):
        res = super().psubusb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusb(self, *args):
        res = super().psubusb(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusw(self, *args):
        res = super().psubusw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusw(self, *args):
        res = super().psubusw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusw(self, *args):
        res = super().psubusw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubusw(self, *args):
        res = super().psubusw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubw(self, *args):
        res = super().psubw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubw(self, *args):
        res = super().psubw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubw(self, *args):
        res = super().psubw(*args)
        raise_exception_for_error_code(res)
        return res

    def psubw(self, *args):
        res = super().psubw(*args)
        raise_exception_for_error_code(res)
        return res

    def ptest(self, *args):
        res = super().ptest(*args)
        raise_exception_for_error_code(res)
        return res

    def ptest(self, *args):
        res = super().ptest(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhbw(self, *args):
        res = super().punpckhbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhbw(self, *args):
        res = super().punpckhbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhbw(self, *args):
        res = super().punpckhbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhbw(self, *args):
        res = super().punpckhbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhdq(self, *args):
        res = super().punpckhdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhdq(self, *args):
        res = super().punpckhdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhdq(self, *args):
        res = super().punpckhdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhdq(self, *args):
        res = super().punpckhdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhqdq(self, *args):
        res = super().punpckhqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhqdq(self, *args):
        res = super().punpckhqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhwd(self, *args):
        res = super().punpckhwd(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhwd(self, *args):
        res = super().punpckhwd(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhwd(self, *args):
        res = super().punpckhwd(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckhwd(self, *args):
        res = super().punpckhwd(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklbw(self, *args):
        res = super().punpcklbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklbw(self, *args):
        res = super().punpcklbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklbw(self, *args):
        res = super().punpcklbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklbw(self, *args):
        res = super().punpcklbw(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckldq(self, *args):
        res = super().punpckldq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckldq(self, *args):
        res = super().punpckldq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckldq(self, *args):
        res = super().punpckldq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpckldq(self, *args):
        res = super().punpckldq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklqdq(self, *args):
        res = super().punpcklqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklqdq(self, *args):
        res = super().punpcklqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklwd(self, *args):
        res = super().punpcklwd(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklwd(self, *args):
        res = super().punpcklwd(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklwd(self, *args):
        res = super().punpcklwd(*args)
        raise_exception_for_error_code(res)
        return res

    def punpcklwd(self, *args):
        res = super().punpcklwd(*args)
        raise_exception_for_error_code(res)
        return res

    def pxor(self, *args):
        res = super().pxor(*args)
        raise_exception_for_error_code(res)
        return res

    def pxor(self, *args):
        res = super().pxor(*args)
        raise_exception_for_error_code(res)
        return res

    def pxor(self, *args):
        res = super().pxor(*args)
        raise_exception_for_error_code(res)
        return res

    def pxor(self, *args):
        res = super().pxor(*args)
        raise_exception_for_error_code(res)
        return res

    def rcpps(self, *args):
        res = super().rcpps(*args)
        raise_exception_for_error_code(res)
        return res

    def rcpps(self, *args):
        res = super().rcpps(*args)
        raise_exception_for_error_code(res)
        return res

    def rcpss(self, *args):
        res = super().rcpss(*args)
        raise_exception_for_error_code(res)
        return res

    def rcpss(self, *args):
        res = super().rcpss(*args)
        raise_exception_for_error_code(res)
        return res

    def roundpd(self, *args):
        res = super().roundpd(*args)
        raise_exception_for_error_code(res)
        return res

    def roundpd(self, *args):
        res = super().roundpd(*args)
        raise_exception_for_error_code(res)
        return res

    def roundps(self, *args):
        res = super().roundps(*args)
        raise_exception_for_error_code(res)
        return res

    def roundps(self, *args):
        res = super().roundps(*args)
        raise_exception_for_error_code(res)
        return res

    def roundsd(self, *args):
        res = super().roundsd(*args)
        raise_exception_for_error_code(res)
        return res

    def roundsd(self, *args):
        res = super().roundsd(*args)
        raise_exception_for_error_code(res)
        return res

    def roundss(self, *args):
        res = super().roundss(*args)
        raise_exception_for_error_code(res)
        return res

    def roundss(self, *args):
        res = super().roundss(*args)
        raise_exception_for_error_code(res)
        return res

    def rsqrtps(self, *args):
        res = super().rsqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def rsqrtps(self, *args):
        res = super().rsqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def rsqrtss(self, *args):
        res = super().rsqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def rsqrtss(self, *args):
        res = super().rsqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def shufpd(self, *args):
        res = super().shufpd(*args)
        raise_exception_for_error_code(res)
        return res

    def shufpd(self, *args):
        res = super().shufpd(*args)
        raise_exception_for_error_code(res)
        return res

    def shufps(self, *args):
        res = super().shufps(*args)
        raise_exception_for_error_code(res)
        return res

    def shufps(self, *args):
        res = super().shufps(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtpd(self, *args):
        res = super().sqrtpd(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtpd(self, *args):
        res = super().sqrtpd(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtps(self, *args):
        res = super().sqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtps(self, *args):
        res = super().sqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtsd(self, *args):
        res = super().sqrtsd(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtsd(self, *args):
        res = super().sqrtsd(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtss(self, *args):
        res = super().sqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def sqrtss(self, *args):
        res = super().sqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def subpd(self, *args):
        res = super().subpd(*args)
        raise_exception_for_error_code(res)
        return res

    def subpd(self, *args):
        res = super().subpd(*args)
        raise_exception_for_error_code(res)
        return res

    def subps(self, *args):
        res = super().subps(*args)
        raise_exception_for_error_code(res)
        return res

    def subps(self, *args):
        res = super().subps(*args)
        raise_exception_for_error_code(res)
        return res

    def subsd(self, *args):
        res = super().subsd(*args)
        raise_exception_for_error_code(res)
        return res

    def subsd(self, *args):
        res = super().subsd(*args)
        raise_exception_for_error_code(res)
        return res

    def subss(self, *args):
        res = super().subss(*args)
        raise_exception_for_error_code(res)
        return res

    def subss(self, *args):
        res = super().subss(*args)
        raise_exception_for_error_code(res)
        return res

    def ucomisd(self, *args):
        res = super().ucomisd(*args)
        raise_exception_for_error_code(res)
        return res

    def ucomisd(self, *args):
        res = super().ucomisd(*args)
        raise_exception_for_error_code(res)
        return res

    def ucomiss(self, *args):
        res = super().ucomiss(*args)
        raise_exception_for_error_code(res)
        return res

    def ucomiss(self, *args):
        res = super().ucomiss(*args)
        raise_exception_for_error_code(res)
        return res

    def unpckhpd(self, *args):
        res = super().unpckhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def unpckhpd(self, *args):
        res = super().unpckhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def unpckhps(self, *args):
        res = super().unpckhps(*args)
        raise_exception_for_error_code(res)
        return res

    def unpckhps(self, *args):
        res = super().unpckhps(*args)
        raise_exception_for_error_code(res)
        return res

    def unpcklpd(self, *args):
        res = super().unpcklpd(*args)
        raise_exception_for_error_code(res)
        return res

    def unpcklpd(self, *args):
        res = super().unpcklpd(*args)
        raise_exception_for_error_code(res)
        return res

    def unpcklps(self, *args):
        res = super().unpcklps(*args)
        raise_exception_for_error_code(res)
        return res

    def unpcklps(self, *args):
        res = super().unpcklps(*args)
        raise_exception_for_error_code(res)
        return res

    def xorpd(self, *args):
        res = super().xorpd(*args)
        raise_exception_for_error_code(res)
        return res

    def xorpd(self, *args):
        res = super().xorpd(*args)
        raise_exception_for_error_code(res)
        return res

    def xorps(self, *args):
        res = super().xorps(*args)
        raise_exception_for_error_code(res)
        return res

    def xorps(self, *args):
        res = super().xorps(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgusb(self, *args):
        res = super().pavgusb(*args)
        raise_exception_for_error_code(res)
        return res

    def pavgusb(self, *args):
        res = super().pavgusb(*args)
        raise_exception_for_error_code(res)
        return res

    def pf2id(self, *args):
        res = super().pf2id(*args)
        raise_exception_for_error_code(res)
        return res

    def pf2id(self, *args):
        res = super().pf2id(*args)
        raise_exception_for_error_code(res)
        return res

    def pf2iw(self, *args):
        res = super().pf2iw(*args)
        raise_exception_for_error_code(res)
        return res

    def pf2iw(self, *args):
        res = super().pf2iw(*args)
        raise_exception_for_error_code(res)
        return res

    def pfacc(self, *args):
        res = super().pfacc(*args)
        raise_exception_for_error_code(res)
        return res

    def pfacc(self, *args):
        res = super().pfacc(*args)
        raise_exception_for_error_code(res)
        return res

    def pfadd(self, *args):
        res = super().pfadd(*args)
        raise_exception_for_error_code(res)
        return res

    def pfadd(self, *args):
        res = super().pfadd(*args)
        raise_exception_for_error_code(res)
        return res

    def pfcmpeq(self, *args):
        res = super().pfcmpeq(*args)
        raise_exception_for_error_code(res)
        return res

    def pfcmpeq(self, *args):
        res = super().pfcmpeq(*args)
        raise_exception_for_error_code(res)
        return res

    def pfcmpge(self, *args):
        res = super().pfcmpge(*args)
        raise_exception_for_error_code(res)
        return res

    def pfcmpge(self, *args):
        res = super().pfcmpge(*args)
        raise_exception_for_error_code(res)
        return res

    def pfcmpgt(self, *args):
        res = super().pfcmpgt(*args)
        raise_exception_for_error_code(res)
        return res

    def pfcmpgt(self, *args):
        res = super().pfcmpgt(*args)
        raise_exception_for_error_code(res)
        return res

    def pfmax(self, *args):
        res = super().pfmax(*args)
        raise_exception_for_error_code(res)
        return res

    def pfmax(self, *args):
        res = super().pfmax(*args)
        raise_exception_for_error_code(res)
        return res

    def pfmin(self, *args):
        res = super().pfmin(*args)
        raise_exception_for_error_code(res)
        return res

    def pfmin(self, *args):
        res = super().pfmin(*args)
        raise_exception_for_error_code(res)
        return res

    def pfmul(self, *args):
        res = super().pfmul(*args)
        raise_exception_for_error_code(res)
        return res

    def pfmul(self, *args):
        res = super().pfmul(*args)
        raise_exception_for_error_code(res)
        return res

    def pfnacc(self, *args):
        res = super().pfnacc(*args)
        raise_exception_for_error_code(res)
        return res

    def pfnacc(self, *args):
        res = super().pfnacc(*args)
        raise_exception_for_error_code(res)
        return res

    def pfpnacc(self, *args):
        res = super().pfpnacc(*args)
        raise_exception_for_error_code(res)
        return res

    def pfpnacc(self, *args):
        res = super().pfpnacc(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcp(self, *args):
        res = super().pfrcp(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcp(self, *args):
        res = super().pfrcp(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcpit1(self, *args):
        res = super().pfrcpit1(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcpit1(self, *args):
        res = super().pfrcpit1(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcpit2(self, *args):
        res = super().pfrcpit2(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcpit2(self, *args):
        res = super().pfrcpit2(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcpv(self, *args):
        res = super().pfrcpv(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrcpv(self, *args):
        res = super().pfrcpv(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrsqit1(self, *args):
        res = super().pfrsqit1(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrsqit1(self, *args):
        res = super().pfrsqit1(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrsqrt(self, *args):
        res = super().pfrsqrt(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrsqrt(self, *args):
        res = super().pfrsqrt(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrsqrtv(self, *args):
        res = super().pfrsqrtv(*args)
        raise_exception_for_error_code(res)
        return res

    def pfrsqrtv(self, *args):
        res = super().pfrsqrtv(*args)
        raise_exception_for_error_code(res)
        return res

    def pfsub(self, *args):
        res = super().pfsub(*args)
        raise_exception_for_error_code(res)
        return res

    def pfsub(self, *args):
        res = super().pfsub(*args)
        raise_exception_for_error_code(res)
        return res

    def pfsubr(self, *args):
        res = super().pfsubr(*args)
        raise_exception_for_error_code(res)
        return res

    def pfsubr(self, *args):
        res = super().pfsubr(*args)
        raise_exception_for_error_code(res)
        return res

    def pi2fd(self, *args):
        res = super().pi2fd(*args)
        raise_exception_for_error_code(res)
        return res

    def pi2fd(self, *args):
        res = super().pi2fd(*args)
        raise_exception_for_error_code(res)
        return res

    def pi2fw(self, *args):
        res = super().pi2fw(*args)
        raise_exception_for_error_code(res)
        return res

    def pi2fw(self, *args):
        res = super().pi2fw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhrw(self, *args):
        res = super().pmulhrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pmulhrw(self, *args):
        res = super().pmulhrw(*args)
        raise_exception_for_error_code(res)
        return res

    def pswapd(self, *args):
        res = super().pswapd(*args)
        raise_exception_for_error_code(res)
        return res

    def pswapd(self, *args):
        res = super().pswapd(*args)
        raise_exception_for_error_code(res)
        return res

    def emms(self, *args):
        res = super().emms(*args)
        raise_exception_for_error_code(res)
        return res

    def femms(self, *args):
        res = super().femms(*args)
        raise_exception_for_error_code(res)
        return res

    def aesdec(self, *args):
        res = super().aesdec(*args)
        raise_exception_for_error_code(res)
        return res

    def aesdec(self, *args):
        res = super().aesdec(*args)
        raise_exception_for_error_code(res)
        return res

    def aesdeclast(self, *args):
        res = super().aesdeclast(*args)
        raise_exception_for_error_code(res)
        return res

    def aesdeclast(self, *args):
        res = super().aesdeclast(*args)
        raise_exception_for_error_code(res)
        return res

    def aesenc(self, *args):
        res = super().aesenc(*args)
        raise_exception_for_error_code(res)
        return res

    def aesenc(self, *args):
        res = super().aesenc(*args)
        raise_exception_for_error_code(res)
        return res

    def aesenclast(self, *args):
        res = super().aesenclast(*args)
        raise_exception_for_error_code(res)
        return res

    def aesenclast(self, *args):
        res = super().aesenclast(*args)
        raise_exception_for_error_code(res)
        return res

    def aesimc(self, *args):
        res = super().aesimc(*args)
        raise_exception_for_error_code(res)
        return res

    def aesimc(self, *args):
        res = super().aesimc(*args)
        raise_exception_for_error_code(res)
        return res

    def aeskeygenassist(self, *args):
        res = super().aeskeygenassist(*args)
        raise_exception_for_error_code(res)
        return res

    def aeskeygenassist(self, *args):
        res = super().aeskeygenassist(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1msg1(self, *args):
        res = super().sha1msg1(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1msg1(self, *args):
        res = super().sha1msg1(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1msg2(self, *args):
        res = super().sha1msg2(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1msg2(self, *args):
        res = super().sha1msg2(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1nexte(self, *args):
        res = super().sha1nexte(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1nexte(self, *args):
        res = super().sha1nexte(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1rnds4(self, *args):
        res = super().sha1rnds4(*args)
        raise_exception_for_error_code(res)
        return res

    def sha1rnds4(self, *args):
        res = super().sha1rnds4(*args)
        raise_exception_for_error_code(res)
        return res

    def sha256msg1(self, *args):
        res = super().sha256msg1(*args)
        raise_exception_for_error_code(res)
        return res

    def sha256msg1(self, *args):
        res = super().sha256msg1(*args)
        raise_exception_for_error_code(res)
        return res

    def sha256msg2(self, *args):
        res = super().sha256msg2(*args)
        raise_exception_for_error_code(res)
        return res

    def sha256msg2(self, *args):
        res = super().sha256msg2(*args)
        raise_exception_for_error_code(res)
        return res

    def sha256rnds2(self, *args):
        res = super().sha256rnds2(*args)
        raise_exception_for_error_code(res)
        return res

    def sha256rnds2(self, *args):
        res = super().sha256rnds2(*args)
        raise_exception_for_error_code(res)
        return res

    def gf2p8affineinvqb(self, *args):
        res = super().gf2p8affineinvqb(*args)
        raise_exception_for_error_code(res)
        return res

    def gf2p8affineinvqb(self, *args):
        res = super().gf2p8affineinvqb(*args)
        raise_exception_for_error_code(res)
        return res

    def gf2p8affineqb(self, *args):
        res = super().gf2p8affineqb(*args)
        raise_exception_for_error_code(res)
        return res

    def gf2p8affineqb(self, *args):
        res = super().gf2p8affineqb(*args)
        raise_exception_for_error_code(res)
        return res

    def gf2p8mulb(self, *args):
        res = super().gf2p8mulb(*args)
        raise_exception_for_error_code(res)
        return res

    def gf2p8mulb(self, *args):
        res = super().gf2p8mulb(*args)
        raise_exception_for_error_code(res)
        return res

    def kaddb(self, *args):
        res = super().kaddb(*args)
        raise_exception_for_error_code(res)
        return res

    def kaddd(self, *args):
        res = super().kaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def kaddq(self, *args):
        res = super().kaddq(*args)
        raise_exception_for_error_code(res)
        return res

    def kaddw(self, *args):
        res = super().kaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def kandb(self, *args):
        res = super().kandb(*args)
        raise_exception_for_error_code(res)
        return res

    def kandd(self, *args):
        res = super().kandd(*args)
        raise_exception_for_error_code(res)
        return res

    def kandnb(self, *args):
        res = super().kandnb(*args)
        raise_exception_for_error_code(res)
        return res

    def kandnd(self, *args):
        res = super().kandnd(*args)
        raise_exception_for_error_code(res)
        return res

    def kandnq(self, *args):
        res = super().kandnq(*args)
        raise_exception_for_error_code(res)
        return res

    def kandnw(self, *args):
        res = super().kandnw(*args)
        raise_exception_for_error_code(res)
        return res

    def kandq(self, *args):
        res = super().kandq(*args)
        raise_exception_for_error_code(res)
        return res

    def kandw(self, *args):
        res = super().kandw(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovb(self, *args):
        res = super().kmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovb(self, *args):
        res = super().kmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovb(self, *args):
        res = super().kmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovb(self, *args):
        res = super().kmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovb(self, *args):
        res = super().kmovb(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovd(self, *args):
        res = super().kmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovd(self, *args):
        res = super().kmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovd(self, *args):
        res = super().kmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovd(self, *args):
        res = super().kmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovd(self, *args):
        res = super().kmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovq(self, *args):
        res = super().kmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovq(self, *args):
        res = super().kmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovq(self, *args):
        res = super().kmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovq(self, *args):
        res = super().kmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovq(self, *args):
        res = super().kmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovw(self, *args):
        res = super().kmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovw(self, *args):
        res = super().kmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovw(self, *args):
        res = super().kmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovw(self, *args):
        res = super().kmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def kmovw(self, *args):
        res = super().kmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def knotb(self, *args):
        res = super().knotb(*args)
        raise_exception_for_error_code(res)
        return res

    def knotd(self, *args):
        res = super().knotd(*args)
        raise_exception_for_error_code(res)
        return res

    def knotq(self, *args):
        res = super().knotq(*args)
        raise_exception_for_error_code(res)
        return res

    def knotw(self, *args):
        res = super().knotw(*args)
        raise_exception_for_error_code(res)
        return res

    def korb(self, *args):
        res = super().korb(*args)
        raise_exception_for_error_code(res)
        return res

    def kord(self, *args):
        res = super().kord(*args)
        raise_exception_for_error_code(res)
        return res

    def korq(self, *args):
        res = super().korq(*args)
        raise_exception_for_error_code(res)
        return res

    def kortestb(self, *args):
        res = super().kortestb(*args)
        raise_exception_for_error_code(res)
        return res

    def kortestd(self, *args):
        res = super().kortestd(*args)
        raise_exception_for_error_code(res)
        return res

    def kortestq(self, *args):
        res = super().kortestq(*args)
        raise_exception_for_error_code(res)
        return res

    def kortestw(self, *args):
        res = super().kortestw(*args)
        raise_exception_for_error_code(res)
        return res

    def korw(self, *args):
        res = super().korw(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftlb(self, *args):
        res = super().kshiftlb(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftld(self, *args):
        res = super().kshiftld(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftlq(self, *args):
        res = super().kshiftlq(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftlw(self, *args):
        res = super().kshiftlw(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftrb(self, *args):
        res = super().kshiftrb(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftrd(self, *args):
        res = super().kshiftrd(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftrq(self, *args):
        res = super().kshiftrq(*args)
        raise_exception_for_error_code(res)
        return res

    def kshiftrw(self, *args):
        res = super().kshiftrw(*args)
        raise_exception_for_error_code(res)
        return res

    def ktestb(self, *args):
        res = super().ktestb(*args)
        raise_exception_for_error_code(res)
        return res

    def ktestd(self, *args):
        res = super().ktestd(*args)
        raise_exception_for_error_code(res)
        return res

    def ktestq(self, *args):
        res = super().ktestq(*args)
        raise_exception_for_error_code(res)
        return res

    def ktestw(self, *args):
        res = super().ktestw(*args)
        raise_exception_for_error_code(res)
        return res

    def kunpckbw(self, *args):
        res = super().kunpckbw(*args)
        raise_exception_for_error_code(res)
        return res

    def kunpckdq(self, *args):
        res = super().kunpckdq(*args)
        raise_exception_for_error_code(res)
        return res

    def kunpckwd(self, *args):
        res = super().kunpckwd(*args)
        raise_exception_for_error_code(res)
        return res

    def kxnorb(self, *args):
        res = super().kxnorb(*args)
        raise_exception_for_error_code(res)
        return res

    def kxnord(self, *args):
        res = super().kxnord(*args)
        raise_exception_for_error_code(res)
        return res

    def kxnorq(self, *args):
        res = super().kxnorq(*args)
        raise_exception_for_error_code(res)
        return res

    def kxnorw(self, *args):
        res = super().kxnorw(*args)
        raise_exception_for_error_code(res)
        return res

    def kxorb(self, *args):
        res = super().kxorb(*args)
        raise_exception_for_error_code(res)
        return res

    def kxord(self, *args):
        res = super().kxord(*args)
        raise_exception_for_error_code(res)
        return res

    def kxorq(self, *args):
        res = super().kxorq(*args)
        raise_exception_for_error_code(res)
        return res

    def kxorw(self, *args):
        res = super().kxorw(*args)
        raise_exception_for_error_code(res)
        return res

    def v4fmaddps(self, *args):
        res = super().v4fmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def v4fmaddss(self, *args):
        res = super().v4fmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def v4fnmaddps(self, *args):
        res = super().v4fnmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def v4fnmaddss(self, *args):
        res = super().v4fnmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddpd(self, *args):
        res = super().vaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddpd(self, *args):
        res = super().vaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddps(self, *args):
        res = super().vaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddps(self, *args):
        res = super().vaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsd(self, *args):
        res = super().vaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsd(self, *args):
        res = super().vaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddss(self, *args):
        res = super().vaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddss(self, *args):
        res = super().vaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsubpd(self, *args):
        res = super().vaddsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsubpd(self, *args):
        res = super().vaddsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsubps(self, *args):
        res = super().vaddsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsubps(self, *args):
        res = super().vaddsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesdec(self, *args):
        res = super().vaesdec(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesdec(self, *args):
        res = super().vaesdec(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesdeclast(self, *args):
        res = super().vaesdeclast(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesdeclast(self, *args):
        res = super().vaesdeclast(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesenc(self, *args):
        res = super().vaesenc(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesenc(self, *args):
        res = super().vaesenc(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesenclast(self, *args):
        res = super().vaesenclast(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesenclast(self, *args):
        res = super().vaesenclast(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesimc(self, *args):
        res = super().vaesimc(*args)
        raise_exception_for_error_code(res)
        return res

    def vaesimc(self, *args):
        res = super().vaesimc(*args)
        raise_exception_for_error_code(res)
        return res

    def vaeskeygenassist(self, *args):
        res = super().vaeskeygenassist(*args)
        raise_exception_for_error_code(res)
        return res

    def vaeskeygenassist(self, *args):
        res = super().vaeskeygenassist(*args)
        raise_exception_for_error_code(res)
        return res

    def valignd(self, *args):
        res = super().valignd(*args)
        raise_exception_for_error_code(res)
        return res

    def valignd(self, *args):
        res = super().valignd(*args)
        raise_exception_for_error_code(res)
        return res

    def valignq(self, *args):
        res = super().valignq(*args)
        raise_exception_for_error_code(res)
        return res

    def valignq(self, *args):
        res = super().valignq(*args)
        raise_exception_for_error_code(res)
        return res

    def vandnpd(self, *args):
        res = super().vandnpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vandnpd(self, *args):
        res = super().vandnpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vandnps(self, *args):
        res = super().vandnps(*args)
        raise_exception_for_error_code(res)
        return res

    def vandnps(self, *args):
        res = super().vandnps(*args)
        raise_exception_for_error_code(res)
        return res

    def vandpd(self, *args):
        res = super().vandpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vandpd(self, *args):
        res = super().vandpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vandps(self, *args):
        res = super().vandps(*args)
        raise_exception_for_error_code(res)
        return res

    def vandps(self, *args):
        res = super().vandps(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendmpd(self, *args):
        res = super().vblendmpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendmpd(self, *args):
        res = super().vblendmpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendmps(self, *args):
        res = super().vblendmps(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendmps(self, *args):
        res = super().vblendmps(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendpd(self, *args):
        res = super().vblendpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendpd(self, *args):
        res = super().vblendpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendps(self, *args):
        res = super().vblendps(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendps(self, *args):
        res = super().vblendps(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendvpd(self, *args):
        res = super().vblendvpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendvpd(self, *args):
        res = super().vblendvpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendvps(self, *args):
        res = super().vblendvps(*args)
        raise_exception_for_error_code(res)
        return res

    def vblendvps(self, *args):
        res = super().vblendvps(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastf128(self, *args):
        res = super().vbroadcastf128(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastf32x2(self, *args):
        res = super().vbroadcastf32x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastf32x2(self, *args):
        res = super().vbroadcastf32x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastf32x4(self, *args):
        res = super().vbroadcastf32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastf32x8(self, *args):
        res = super().vbroadcastf32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastf64x2(self, *args):
        res = super().vbroadcastf64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastf64x4(self, *args):
        res = super().vbroadcastf64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti128(self, *args):
        res = super().vbroadcasti128(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti32x2(self, *args):
        res = super().vbroadcasti32x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti32x2(self, *args):
        res = super().vbroadcasti32x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti32x4(self, *args):
        res = super().vbroadcasti32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti32x8(self, *args):
        res = super().vbroadcasti32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti64x2(self, *args):
        res = super().vbroadcasti64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti64x2(self, *args):
        res = super().vbroadcasti64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti64x4(self, *args):
        res = super().vbroadcasti64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcasti64x4(self, *args):
        res = super().vbroadcasti64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastsd(self, *args):
        res = super().vbroadcastsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastsd(self, *args):
        res = super().vbroadcastsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastss(self, *args):
        res = super().vbroadcastss(*args)
        raise_exception_for_error_code(res)
        return res

    def vbroadcastss(self, *args):
        res = super().vbroadcastss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmppd(self, *args):
        res = super().vcmppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmppd(self, *args):
        res = super().vcmppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmppd(self, *args):
        res = super().vcmppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmppd(self, *args):
        res = super().vcmppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpps(self, *args):
        res = super().vcmpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpps(self, *args):
        res = super().vcmpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpps(self, *args):
        res = super().vcmpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpps(self, *args):
        res = super().vcmpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpsd(self, *args):
        res = super().vcmpsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpsd(self, *args):
        res = super().vcmpsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpsd(self, *args):
        res = super().vcmpsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpsd(self, *args):
        res = super().vcmpsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpss(self, *args):
        res = super().vcmpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpss(self, *args):
        res = super().vcmpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpss(self, *args):
        res = super().vcmpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpss(self, *args):
        res = super().vcmpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcomisd(self, *args):
        res = super().vcomisd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcomisd(self, *args):
        res = super().vcomisd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcomiss(self, *args):
        res = super().vcomiss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcomiss(self, *args):
        res = super().vcomiss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcompresspd(self, *args):
        res = super().vcompresspd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcompresspd(self, *args):
        res = super().vcompresspd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcompressps(self, *args):
        res = super().vcompressps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcompressps(self, *args):
        res = super().vcompressps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtdq2pd(self, *args):
        res = super().vcvtdq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtdq2pd(self, *args):
        res = super().vcvtdq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtdq2ps(self, *args):
        res = super().vcvtdq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtdq2ps(self, *args):
        res = super().vcvtdq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtne2ps2bf16(self, *args):
        res = super().vcvtne2ps2bf16(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtne2ps2bf16(self, *args):
        res = super().vcvtne2ps2bf16(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtneps2bf16(self, *args):
        res = super().vcvtneps2bf16(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtneps2bf16(self, *args):
        res = super().vcvtneps2bf16(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2dq(self, *args):
        res = super().vcvtpd2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2dq(self, *args):
        res = super().vcvtpd2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2ps(self, *args):
        res = super().vcvtpd2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2ps(self, *args):
        res = super().vcvtpd2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2qq(self, *args):
        res = super().vcvtpd2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2qq(self, *args):
        res = super().vcvtpd2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2udq(self, *args):
        res = super().vcvtpd2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2udq(self, *args):
        res = super().vcvtpd2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2uqq(self, *args):
        res = super().vcvtpd2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2uqq(self, *args):
        res = super().vcvtpd2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2ps(self, *args):
        res = super().vcvtph2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2ps(self, *args):
        res = super().vcvtph2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2dq(self, *args):
        res = super().vcvtps2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2dq(self, *args):
        res = super().vcvtps2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2pd(self, *args):
        res = super().vcvtps2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2pd(self, *args):
        res = super().vcvtps2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2ph(self, *args):
        res = super().vcvtps2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2ph(self, *args):
        res = super().vcvtps2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2qq(self, *args):
        res = super().vcvtps2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2qq(self, *args):
        res = super().vcvtps2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2udq(self, *args):
        res = super().vcvtps2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2udq(self, *args):
        res = super().vcvtps2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2uqq(self, *args):
        res = super().vcvtps2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2uqq(self, *args):
        res = super().vcvtps2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtqq2pd(self, *args):
        res = super().vcvtqq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtqq2pd(self, *args):
        res = super().vcvtqq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtqq2ps(self, *args):
        res = super().vcvtqq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtqq2ps(self, *args):
        res = super().vcvtqq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2si(self, *args):
        res = super().vcvtsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2si(self, *args):
        res = super().vcvtsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2ss(self, *args):
        res = super().vcvtsd2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2ss(self, *args):
        res = super().vcvtsd2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2usi(self, *args):
        res = super().vcvtsd2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2usi(self, *args):
        res = super().vcvtsd2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsi2sd(self, *args):
        res = super().vcvtsi2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsi2sd(self, *args):
        res = super().vcvtsi2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsi2ss(self, *args):
        res = super().vcvtsi2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsi2ss(self, *args):
        res = super().vcvtsi2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2sd(self, *args):
        res = super().vcvtss2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2sd(self, *args):
        res = super().vcvtss2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2si(self, *args):
        res = super().vcvtss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2si(self, *args):
        res = super().vcvtss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2usi(self, *args):
        res = super().vcvtss2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2usi(self, *args):
        res = super().vcvtss2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2dq(self, *args):
        res = super().vcvttpd2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2dq(self, *args):
        res = super().vcvttpd2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2qq(self, *args):
        res = super().vcvttpd2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2qq(self, *args):
        res = super().vcvttpd2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2udq(self, *args):
        res = super().vcvttpd2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2udq(self, *args):
        res = super().vcvttpd2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2uqq(self, *args):
        res = super().vcvttpd2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttpd2uqq(self, *args):
        res = super().vcvttpd2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2dq(self, *args):
        res = super().vcvttps2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2dq(self, *args):
        res = super().vcvttps2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2qq(self, *args):
        res = super().vcvttps2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2qq(self, *args):
        res = super().vcvttps2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2udq(self, *args):
        res = super().vcvttps2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2udq(self, *args):
        res = super().vcvttps2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2uqq(self, *args):
        res = super().vcvttps2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttps2uqq(self, *args):
        res = super().vcvttps2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsd2si(self, *args):
        res = super().vcvttsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsd2si(self, *args):
        res = super().vcvttsd2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsd2usi(self, *args):
        res = super().vcvttsd2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsd2usi(self, *args):
        res = super().vcvttsd2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttss2si(self, *args):
        res = super().vcvttss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttss2si(self, *args):
        res = super().vcvttss2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttss2usi(self, *args):
        res = super().vcvttss2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttss2usi(self, *args):
        res = super().vcvttss2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtudq2pd(self, *args):
        res = super().vcvtudq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtudq2pd(self, *args):
        res = super().vcvtudq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtudq2ps(self, *args):
        res = super().vcvtudq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtudq2ps(self, *args):
        res = super().vcvtudq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuqq2pd(self, *args):
        res = super().vcvtuqq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuqq2pd(self, *args):
        res = super().vcvtuqq2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuqq2ps(self, *args):
        res = super().vcvtuqq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuqq2ps(self, *args):
        res = super().vcvtuqq2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtusi2sd(self, *args):
        res = super().vcvtusi2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtusi2sd(self, *args):
        res = super().vcvtusi2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtusi2ss(self, *args):
        res = super().vcvtusi2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtusi2ss(self, *args):
        res = super().vcvtusi2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vdbpsadbw(self, *args):
        res = super().vdbpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vdbpsadbw(self, *args):
        res = super().vdbpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivpd(self, *args):
        res = super().vdivpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivpd(self, *args):
        res = super().vdivpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivps(self, *args):
        res = super().vdivps(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivps(self, *args):
        res = super().vdivps(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivsd(self, *args):
        res = super().vdivsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivsd(self, *args):
        res = super().vdivsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivss(self, *args):
        res = super().vdivss(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivss(self, *args):
        res = super().vdivss(*args)
        raise_exception_for_error_code(res)
        return res

    def vdpbf16ps(self, *args):
        res = super().vdpbf16ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vdpbf16ps(self, *args):
        res = super().vdpbf16ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vdppd(self, *args):
        res = super().vdppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vdppd(self, *args):
        res = super().vdppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vdpps(self, *args):
        res = super().vdpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vdpps(self, *args):
        res = super().vdpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vexp2pd(self, *args):
        res = super().vexp2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vexp2pd(self, *args):
        res = super().vexp2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vexp2ps(self, *args):
        res = super().vexp2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vexp2ps(self, *args):
        res = super().vexp2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vexpandpd(self, *args):
        res = super().vexpandpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vexpandpd(self, *args):
        res = super().vexpandpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vexpandps(self, *args):
        res = super().vexpandps(*args)
        raise_exception_for_error_code(res)
        return res

    def vexpandps(self, *args):
        res = super().vexpandps(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf128(self, *args):
        res = super().vextractf128(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf128(self, *args):
        res = super().vextractf128(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf32x4(self, *args):
        res = super().vextractf32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf32x4(self, *args):
        res = super().vextractf32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf32x8(self, *args):
        res = super().vextractf32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf32x8(self, *args):
        res = super().vextractf32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf64x2(self, *args):
        res = super().vextractf64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf64x2(self, *args):
        res = super().vextractf64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf64x4(self, *args):
        res = super().vextractf64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractf64x4(self, *args):
        res = super().vextractf64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti128(self, *args):
        res = super().vextracti128(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti128(self, *args):
        res = super().vextracti128(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti32x4(self, *args):
        res = super().vextracti32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti32x4(self, *args):
        res = super().vextracti32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti32x8(self, *args):
        res = super().vextracti32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti32x8(self, *args):
        res = super().vextracti32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti64x2(self, *args):
        res = super().vextracti64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti64x2(self, *args):
        res = super().vextracti64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti64x4(self, *args):
        res = super().vextracti64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextracti64x4(self, *args):
        res = super().vextracti64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractps(self, *args):
        res = super().vextractps(*args)
        raise_exception_for_error_code(res)
        return res

    def vextractps(self, *args):
        res = super().vextractps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmpd(self, *args):
        res = super().vfixupimmpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmpd(self, *args):
        res = super().vfixupimmpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmps(self, *args):
        res = super().vfixupimmps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmps(self, *args):
        res = super().vfixupimmps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmsd(self, *args):
        res = super().vfixupimmsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmsd(self, *args):
        res = super().vfixupimmsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmss(self, *args):
        res = super().vfixupimmss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfixupimmss(self, *args):
        res = super().vfixupimmss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132pd(self, *args):
        res = super().vfmadd132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132pd(self, *args):
        res = super().vfmadd132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132ps(self, *args):
        res = super().vfmadd132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132ps(self, *args):
        res = super().vfmadd132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132sd(self, *args):
        res = super().vfmadd132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132sd(self, *args):
        res = super().vfmadd132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132ss(self, *args):
        res = super().vfmadd132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132ss(self, *args):
        res = super().vfmadd132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213pd(self, *args):
        res = super().vfmadd213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213pd(self, *args):
        res = super().vfmadd213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213ps(self, *args):
        res = super().vfmadd213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213ps(self, *args):
        res = super().vfmadd213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213sd(self, *args):
        res = super().vfmadd213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213sd(self, *args):
        res = super().vfmadd213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213ss(self, *args):
        res = super().vfmadd213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213ss(self, *args):
        res = super().vfmadd213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231pd(self, *args):
        res = super().vfmadd231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231pd(self, *args):
        res = super().vfmadd231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231ps(self, *args):
        res = super().vfmadd231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231ps(self, *args):
        res = super().vfmadd231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231sd(self, *args):
        res = super().vfmadd231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231sd(self, *args):
        res = super().vfmadd231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231ss(self, *args):
        res = super().vfmadd231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231ss(self, *args):
        res = super().vfmadd231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub132pd(self, *args):
        res = super().vfmaddsub132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub132pd(self, *args):
        res = super().vfmaddsub132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub132ps(self, *args):
        res = super().vfmaddsub132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub132ps(self, *args):
        res = super().vfmaddsub132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub213pd(self, *args):
        res = super().vfmaddsub213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub213pd(self, *args):
        res = super().vfmaddsub213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub213ps(self, *args):
        res = super().vfmaddsub213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub213ps(self, *args):
        res = super().vfmaddsub213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub231pd(self, *args):
        res = super().vfmaddsub231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub231pd(self, *args):
        res = super().vfmaddsub231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub231ps(self, *args):
        res = super().vfmaddsub231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub231ps(self, *args):
        res = super().vfmaddsub231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132pd(self, *args):
        res = super().vfmsub132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132pd(self, *args):
        res = super().vfmsub132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132ps(self, *args):
        res = super().vfmsub132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132ps(self, *args):
        res = super().vfmsub132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132sd(self, *args):
        res = super().vfmsub132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132sd(self, *args):
        res = super().vfmsub132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132ss(self, *args):
        res = super().vfmsub132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132ss(self, *args):
        res = super().vfmsub132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213pd(self, *args):
        res = super().vfmsub213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213pd(self, *args):
        res = super().vfmsub213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213ps(self, *args):
        res = super().vfmsub213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213ps(self, *args):
        res = super().vfmsub213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213sd(self, *args):
        res = super().vfmsub213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213sd(self, *args):
        res = super().vfmsub213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213ss(self, *args):
        res = super().vfmsub213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213ss(self, *args):
        res = super().vfmsub213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231pd(self, *args):
        res = super().vfmsub231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231pd(self, *args):
        res = super().vfmsub231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231ps(self, *args):
        res = super().vfmsub231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231ps(self, *args):
        res = super().vfmsub231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231sd(self, *args):
        res = super().vfmsub231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231sd(self, *args):
        res = super().vfmsub231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231ss(self, *args):
        res = super().vfmsub231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231ss(self, *args):
        res = super().vfmsub231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd132pd(self, *args):
        res = super().vfmsubadd132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd132pd(self, *args):
        res = super().vfmsubadd132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd132ps(self, *args):
        res = super().vfmsubadd132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd132ps(self, *args):
        res = super().vfmsubadd132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd213pd(self, *args):
        res = super().vfmsubadd213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd213pd(self, *args):
        res = super().vfmsubadd213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd213ps(self, *args):
        res = super().vfmsubadd213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd213ps(self, *args):
        res = super().vfmsubadd213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd231pd(self, *args):
        res = super().vfmsubadd231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd231pd(self, *args):
        res = super().vfmsubadd231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd231ps(self, *args):
        res = super().vfmsubadd231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd231ps(self, *args):
        res = super().vfmsubadd231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132pd(self, *args):
        res = super().vfnmadd132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132pd(self, *args):
        res = super().vfnmadd132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132ps(self, *args):
        res = super().vfnmadd132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132ps(self, *args):
        res = super().vfnmadd132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132sd(self, *args):
        res = super().vfnmadd132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132sd(self, *args):
        res = super().vfnmadd132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132ss(self, *args):
        res = super().vfnmadd132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132ss(self, *args):
        res = super().vfnmadd132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213pd(self, *args):
        res = super().vfnmadd213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213pd(self, *args):
        res = super().vfnmadd213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213ps(self, *args):
        res = super().vfnmadd213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213ps(self, *args):
        res = super().vfnmadd213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213sd(self, *args):
        res = super().vfnmadd213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213sd(self, *args):
        res = super().vfnmadd213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213ss(self, *args):
        res = super().vfnmadd213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213ss(self, *args):
        res = super().vfnmadd213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231pd(self, *args):
        res = super().vfnmadd231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231pd(self, *args):
        res = super().vfnmadd231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231ps(self, *args):
        res = super().vfnmadd231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231ps(self, *args):
        res = super().vfnmadd231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231sd(self, *args):
        res = super().vfnmadd231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231sd(self, *args):
        res = super().vfnmadd231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231ss(self, *args):
        res = super().vfnmadd231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231ss(self, *args):
        res = super().vfnmadd231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132pd(self, *args):
        res = super().vfnmsub132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132pd(self, *args):
        res = super().vfnmsub132pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132ps(self, *args):
        res = super().vfnmsub132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132ps(self, *args):
        res = super().vfnmsub132ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132sd(self, *args):
        res = super().vfnmsub132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132sd(self, *args):
        res = super().vfnmsub132sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132ss(self, *args):
        res = super().vfnmsub132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132ss(self, *args):
        res = super().vfnmsub132ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213pd(self, *args):
        res = super().vfnmsub213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213pd(self, *args):
        res = super().vfnmsub213pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213ps(self, *args):
        res = super().vfnmsub213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213ps(self, *args):
        res = super().vfnmsub213ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213sd(self, *args):
        res = super().vfnmsub213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213sd(self, *args):
        res = super().vfnmsub213sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213ss(self, *args):
        res = super().vfnmsub213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213ss(self, *args):
        res = super().vfnmsub213ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231pd(self, *args):
        res = super().vfnmsub231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231pd(self, *args):
        res = super().vfnmsub231pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231ps(self, *args):
        res = super().vfnmsub231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231ps(self, *args):
        res = super().vfnmsub231ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231sd(self, *args):
        res = super().vfnmsub231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231sd(self, *args):
        res = super().vfnmsub231sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231ss(self, *args):
        res = super().vfnmsub231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231ss(self, *args):
        res = super().vfnmsub231ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclasspd(self, *args):
        res = super().vfpclasspd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclasspd(self, *args):
        res = super().vfpclasspd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclassps(self, *args):
        res = super().vfpclassps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclassps(self, *args):
        res = super().vfpclassps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclasssd(self, *args):
        res = super().vfpclasssd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclasssd(self, *args):
        res = super().vfpclasssd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclassss(self, *args):
        res = super().vfpclassss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclassss(self, *args):
        res = super().vfpclassss(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherdpd(self, *args):
        res = super().vgatherdpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherdpd(self, *args):
        res = super().vgatherdpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherdps(self, *args):
        res = super().vgatherdps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherdps(self, *args):
        res = super().vgatherdps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf0dpd(self, *args):
        res = super().vgatherpf0dpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf0dps(self, *args):
        res = super().vgatherpf0dps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf0qpd(self, *args):
        res = super().vgatherpf0qpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf0qps(self, *args):
        res = super().vgatherpf0qps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf1dpd(self, *args):
        res = super().vgatherpf1dpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf1dps(self, *args):
        res = super().vgatherpf1dps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf1qpd(self, *args):
        res = super().vgatherpf1qpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherpf1qps(self, *args):
        res = super().vgatherpf1qps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherqpd(self, *args):
        res = super().vgatherqpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherqpd(self, *args):
        res = super().vgatherqpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherqps(self, *args):
        res = super().vgatherqps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgatherqps(self, *args):
        res = super().vgatherqps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexppd(self, *args):
        res = super().vgetexppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexppd(self, *args):
        res = super().vgetexppd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpps(self, *args):
        res = super().vgetexpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpps(self, *args):
        res = super().vgetexpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpsd(self, *args):
        res = super().vgetexpsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpsd(self, *args):
        res = super().vgetexpsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpss(self, *args):
        res = super().vgetexpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpss(self, *args):
        res = super().vgetexpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantpd(self, *args):
        res = super().vgetmantpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantpd(self, *args):
        res = super().vgetmantpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantps(self, *args):
        res = super().vgetmantps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantps(self, *args):
        res = super().vgetmantps(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantsd(self, *args):
        res = super().vgetmantsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantsd(self, *args):
        res = super().vgetmantsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantss(self, *args):
        res = super().vgetmantss(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantss(self, *args):
        res = super().vgetmantss(*args)
        raise_exception_for_error_code(res)
        return res

    def vgf2p8affineinvqb(self, *args):
        res = super().vgf2p8affineinvqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vgf2p8affineqb(self, *args):
        res = super().vgf2p8affineqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vgf2p8affineqb(self, *args):
        res = super().vgf2p8affineqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vgf2p8mulb(self, *args):
        res = super().vgf2p8mulb(*args)
        raise_exception_for_error_code(res)
        return res

    def vgf2p8mulb(self, *args):
        res = super().vgf2p8mulb(*args)
        raise_exception_for_error_code(res)
        return res

    def vhaddpd(self, *args):
        res = super().vhaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vhaddpd(self, *args):
        res = super().vhaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vhaddps(self, *args):
        res = super().vhaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vhaddps(self, *args):
        res = super().vhaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vhsubpd(self, *args):
        res = super().vhsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vhsubpd(self, *args):
        res = super().vhsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vhsubps(self, *args):
        res = super().vhsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vhsubps(self, *args):
        res = super().vhsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf128(self, *args):
        res = super().vinsertf128(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf128(self, *args):
        res = super().vinsertf128(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf32x4(self, *args):
        res = super().vinsertf32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf32x4(self, *args):
        res = super().vinsertf32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf32x8(self, *args):
        res = super().vinsertf32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf32x8(self, *args):
        res = super().vinsertf32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf64x2(self, *args):
        res = super().vinsertf64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf64x2(self, *args):
        res = super().vinsertf64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf64x4(self, *args):
        res = super().vinsertf64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertf64x4(self, *args):
        res = super().vinsertf64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti128(self, *args):
        res = super().vinserti128(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti128(self, *args):
        res = super().vinserti128(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti32x4(self, *args):
        res = super().vinserti32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti32x4(self, *args):
        res = super().vinserti32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti32x8(self, *args):
        res = super().vinserti32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti32x8(self, *args):
        res = super().vinserti32x8(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti64x2(self, *args):
        res = super().vinserti64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti64x2(self, *args):
        res = super().vinserti64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti64x4(self, *args):
        res = super().vinserti64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinserti64x4(self, *args):
        res = super().vinserti64x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertps(self, *args):
        res = super().vinsertps(*args)
        raise_exception_for_error_code(res)
        return res

    def vinsertps(self, *args):
        res = super().vinsertps(*args)
        raise_exception_for_error_code(res)
        return res

    def vlddqu(self, *args):
        res = super().vlddqu(*args)
        raise_exception_for_error_code(res)
        return res

    def vldmxcsr(self, *args):
        res = super().vldmxcsr(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaskmovdqu(self, *args):
        res = super().vmaskmovdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaskmovpd(self, *args):
        res = super().vmaskmovpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaskmovpd(self, *args):
        res = super().vmaskmovpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaskmovps(self, *args):
        res = super().vmaskmovps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaskmovps(self, *args):
        res = super().vmaskmovps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxpd(self, *args):
        res = super().vmaxpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxpd(self, *args):
        res = super().vmaxpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxps(self, *args):
        res = super().vmaxps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxps(self, *args):
        res = super().vmaxps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxsd(self, *args):
        res = super().vmaxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxsd(self, *args):
        res = super().vmaxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxss(self, *args):
        res = super().vmaxss(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxss(self, *args):
        res = super().vmaxss(*args)
        raise_exception_for_error_code(res)
        return res

    def vminpd(self, *args):
        res = super().vminpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vminpd(self, *args):
        res = super().vminpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vminps(self, *args):
        res = super().vminps(*args)
        raise_exception_for_error_code(res)
        return res

    def vminps(self, *args):
        res = super().vminps(*args)
        raise_exception_for_error_code(res)
        return res

    def vminsd(self, *args):
        res = super().vminsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vminsd(self, *args):
        res = super().vminsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vminss(self, *args):
        res = super().vminss(*args)
        raise_exception_for_error_code(res)
        return res

    def vminss(self, *args):
        res = super().vminss(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovapd(self, *args):
        res = super().vmovapd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovapd(self, *args):
        res = super().vmovapd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovapd(self, *args):
        res = super().vmovapd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovaps(self, *args):
        res = super().vmovaps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovaps(self, *args):
        res = super().vmovaps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovaps(self, *args):
        res = super().vmovaps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovd(self, *args):
        res = super().vmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovd(self, *args):
        res = super().vmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovd(self, *args):
        res = super().vmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovd(self, *args):
        res = super().vmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovddup(self, *args):
        res = super().vmovddup(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovddup(self, *args):
        res = super().vmovddup(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa(self, *args):
        res = super().vmovdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa(self, *args):
        res = super().vmovdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa(self, *args):
        res = super().vmovdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa32(self, *args):
        res = super().vmovdqa32(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa32(self, *args):
        res = super().vmovdqa32(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa32(self, *args):
        res = super().vmovdqa32(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa64(self, *args):
        res = super().vmovdqa64(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa64(self, *args):
        res = super().vmovdqa64(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqa64(self, *args):
        res = super().vmovdqa64(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu(self, *args):
        res = super().vmovdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu(self, *args):
        res = super().vmovdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu(self, *args):
        res = super().vmovdqu(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu16(self, *args):
        res = super().vmovdqu16(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu16(self, *args):
        res = super().vmovdqu16(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu16(self, *args):
        res = super().vmovdqu16(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu32(self, *args):
        res = super().vmovdqu32(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu32(self, *args):
        res = super().vmovdqu32(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu32(self, *args):
        res = super().vmovdqu32(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu64(self, *args):
        res = super().vmovdqu64(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu64(self, *args):
        res = super().vmovdqu64(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu64(self, *args):
        res = super().vmovdqu64(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu8(self, *args):
        res = super().vmovdqu8(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu8(self, *args):
        res = super().vmovdqu8(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovdqu8(self, *args):
        res = super().vmovdqu8(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovhlps(self, *args):
        res = super().vmovhlps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovhpd(self, *args):
        res = super().vmovhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovhpd(self, *args):
        res = super().vmovhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovhps(self, *args):
        res = super().vmovhps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovhps(self, *args):
        res = super().vmovhps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovlhps(self, *args):
        res = super().vmovlhps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovlpd(self, *args):
        res = super().vmovlpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovlpd(self, *args):
        res = super().vmovlpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovlps(self, *args):
        res = super().vmovlps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovlps(self, *args):
        res = super().vmovlps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovmskpd(self, *args):
        res = super().vmovmskpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovmskps(self, *args):
        res = super().vmovmskps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovntdq(self, *args):
        res = super().vmovntdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovntdqa(self, *args):
        res = super().vmovntdqa(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovntpd(self, *args):
        res = super().vmovntpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovntps(self, *args):
        res = super().vmovntps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovq(self, *args):
        res = super().vmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovq(self, *args):
        res = super().vmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovq(self, *args):
        res = super().vmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovq(self, *args):
        res = super().vmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovq(self, *args):
        res = super().vmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsd(self, *args):
        res = super().vmovsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsd(self, *args):
        res = super().vmovsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsd(self, *args):
        res = super().vmovsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovshdup(self, *args):
        res = super().vmovshdup(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovshdup(self, *args):
        res = super().vmovshdup(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsldup(self, *args):
        res = super().vmovsldup(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsldup(self, *args):
        res = super().vmovsldup(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovss(self, *args):
        res = super().vmovss(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovss(self, *args):
        res = super().vmovss(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovss(self, *args):
        res = super().vmovss(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovupd(self, *args):
        res = super().vmovupd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovupd(self, *args):
        res = super().vmovupd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovupd(self, *args):
        res = super().vmovupd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovups(self, *args):
        res = super().vmovups(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovups(self, *args):
        res = super().vmovups(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovups(self, *args):
        res = super().vmovups(*args)
        raise_exception_for_error_code(res)
        return res

    def vmpsadbw(self, *args):
        res = super().vmpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vmpsadbw(self, *args):
        res = super().vmpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulpd(self, *args):
        res = super().vmulpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulpd(self, *args):
        res = super().vmulpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulps(self, *args):
        res = super().vmulps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulps(self, *args):
        res = super().vmulps(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulsd(self, *args):
        res = super().vmulsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulsd(self, *args):
        res = super().vmulsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulss(self, *args):
        res = super().vmulss(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulss(self, *args):
        res = super().vmulss(*args)
        raise_exception_for_error_code(res)
        return res

    def vorpd(self, *args):
        res = super().vorpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vorpd(self, *args):
        res = super().vorpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vorps(self, *args):
        res = super().vorps(*args)
        raise_exception_for_error_code(res)
        return res

    def vorps(self, *args):
        res = super().vorps(*args)
        raise_exception_for_error_code(res)
        return res

    def vp2intersectd(self, *args):
        res = super().vp2intersectd(*args)
        raise_exception_for_error_code(res)
        return res

    def vp2intersectd(self, *args):
        res = super().vp2intersectd(*args)
        raise_exception_for_error_code(res)
        return res

    def vp2intersectq(self, *args):
        res = super().vp2intersectq(*args)
        raise_exception_for_error_code(res)
        return res

    def vp2intersectq(self, *args):
        res = super().vp2intersectq(*args)
        raise_exception_for_error_code(res)
        return res

    def vp4dpwssd(self, *args):
        res = super().vp4dpwssd(*args)
        raise_exception_for_error_code(res)
        return res

    def vp4dpwssds(self, *args):
        res = super().vp4dpwssds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsb(self, *args):
        res = super().vpabsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsb(self, *args):
        res = super().vpabsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsd(self, *args):
        res = super().vpabsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsd(self, *args):
        res = super().vpabsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsq(self, *args):
        res = super().vpabsq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsq(self, *args):
        res = super().vpabsq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsw(self, *args):
        res = super().vpabsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpabsw(self, *args):
        res = super().vpabsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpackssdw(self, *args):
        res = super().vpackssdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpackssdw(self, *args):
        res = super().vpackssdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpacksswb(self, *args):
        res = super().vpacksswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpacksswb(self, *args):
        res = super().vpacksswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpackusdw(self, *args):
        res = super().vpackusdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpackusdw(self, *args):
        res = super().vpackusdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpackuswb(self, *args):
        res = super().vpackuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpackuswb(self, *args):
        res = super().vpackuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddb(self, *args):
        res = super().vpaddb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddb(self, *args):
        res = super().vpaddb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddd(self, *args):
        res = super().vpaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddd(self, *args):
        res = super().vpaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddq(self, *args):
        res = super().vpaddq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddq(self, *args):
        res = super().vpaddq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddsb(self, *args):
        res = super().vpaddsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddsb(self, *args):
        res = super().vpaddsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddsw(self, *args):
        res = super().vpaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddsw(self, *args):
        res = super().vpaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddusb(self, *args):
        res = super().vpaddusb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddusb(self, *args):
        res = super().vpaddusb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddusw(self, *args):
        res = super().vpaddusw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddusw(self, *args):
        res = super().vpaddusw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddw(self, *args):
        res = super().vpaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpaddw(self, *args):
        res = super().vpaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpalignr(self, *args):
        res = super().vpalignr(*args)
        raise_exception_for_error_code(res)
        return res

    def vpalignr(self, *args):
        res = super().vpalignr(*args)
        raise_exception_for_error_code(res)
        return res

    def vpand(self, *args):
        res = super().vpand(*args)
        raise_exception_for_error_code(res)
        return res

    def vpand(self, *args):
        res = super().vpand(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandd(self, *args):
        res = super().vpandd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandd(self, *args):
        res = super().vpandd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandn(self, *args):
        res = super().vpandn(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandn(self, *args):
        res = super().vpandn(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandnd(self, *args):
        res = super().vpandnd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandnd(self, *args):
        res = super().vpandnd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandnq(self, *args):
        res = super().vpandnq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandnq(self, *args):
        res = super().vpandnq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandq(self, *args):
        res = super().vpandq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpandq(self, *args):
        res = super().vpandq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpavgb(self, *args):
        res = super().vpavgb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpavgb(self, *args):
        res = super().vpavgb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpavgw(self, *args):
        res = super().vpavgw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpavgw(self, *args):
        res = super().vpavgw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendd(self, *args):
        res = super().vpblendd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendd(self, *args):
        res = super().vpblendd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmb(self, *args):
        res = super().vpblendmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmb(self, *args):
        res = super().vpblendmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmd(self, *args):
        res = super().vpblendmd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmd(self, *args):
        res = super().vpblendmd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmq(self, *args):
        res = super().vpblendmq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmq(self, *args):
        res = super().vpblendmq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmw(self, *args):
        res = super().vpblendmw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendmw(self, *args):
        res = super().vpblendmw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendvb(self, *args):
        res = super().vpblendvb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendvb(self, *args):
        res = super().vpblendvb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendw(self, *args):
        res = super().vpblendw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpblendw(self, *args):
        res = super().vpblendw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastb(self, *args):
        res = super().vpbroadcastb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastb(self, *args):
        res = super().vpbroadcastb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastb(self, *args):
        res = super().vpbroadcastb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastd(self, *args):
        res = super().vpbroadcastd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastd(self, *args):
        res = super().vpbroadcastd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastd(self, *args):
        res = super().vpbroadcastd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastmb2q(self, *args):
        res = super().vpbroadcastmb2q(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastmw2d(self, *args):
        res = super().vpbroadcastmw2d(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastq(self, *args):
        res = super().vpbroadcastq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastq(self, *args):
        res = super().vpbroadcastq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastq(self, *args):
        res = super().vpbroadcastq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastw(self, *args):
        res = super().vpbroadcastw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastw(self, *args):
        res = super().vpbroadcastw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpbroadcastw(self, *args):
        res = super().vpbroadcastw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpclmulqdq(self, *args):
        res = super().vpclmulqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpclmulqdq(self, *args):
        res = super().vpclmulqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpb(self, *args):
        res = super().vpcmpb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpb(self, *args):
        res = super().vpcmpb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpd(self, *args):
        res = super().vpcmpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpd(self, *args):
        res = super().vpcmpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqb(self, *args):
        res = super().vpcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqb(self, *args):
        res = super().vpcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqb(self, *args):
        res = super().vpcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqb(self, *args):
        res = super().vpcmpeqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqd(self, *args):
        res = super().vpcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqd(self, *args):
        res = super().vpcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqd(self, *args):
        res = super().vpcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqd(self, *args):
        res = super().vpcmpeqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqq(self, *args):
        res = super().vpcmpeqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqq(self, *args):
        res = super().vpcmpeqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqq(self, *args):
        res = super().vpcmpeqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqq(self, *args):
        res = super().vpcmpeqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqw(self, *args):
        res = super().vpcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqw(self, *args):
        res = super().vpcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqw(self, *args):
        res = super().vpcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpeqw(self, *args):
        res = super().vpcmpeqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpestri(self, *args):
        res = super().vpcmpestri(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpestri(self, *args):
        res = super().vpcmpestri(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpestrm(self, *args):
        res = super().vpcmpestrm(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpestrm(self, *args):
        res = super().vpcmpestrm(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtb(self, *args):
        res = super().vpcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtb(self, *args):
        res = super().vpcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtb(self, *args):
        res = super().vpcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtb(self, *args):
        res = super().vpcmpgtb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtd(self, *args):
        res = super().vpcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtd(self, *args):
        res = super().vpcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtd(self, *args):
        res = super().vpcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtd(self, *args):
        res = super().vpcmpgtd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtq(self, *args):
        res = super().vpcmpgtq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtq(self, *args):
        res = super().vpcmpgtq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtq(self, *args):
        res = super().vpcmpgtq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtq(self, *args):
        res = super().vpcmpgtq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtw(self, *args):
        res = super().vpcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtw(self, *args):
        res = super().vpcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtw(self, *args):
        res = super().vpcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpgtw(self, *args):
        res = super().vpcmpgtw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpistri(self, *args):
        res = super().vpcmpistri(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpistri(self, *args):
        res = super().vpcmpistri(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpistrm(self, *args):
        res = super().vpcmpistrm(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpistrm(self, *args):
        res = super().vpcmpistrm(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpq(self, *args):
        res = super().vpcmpq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpq(self, *args):
        res = super().vpcmpq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpub(self, *args):
        res = super().vpcmpub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpub(self, *args):
        res = super().vpcmpub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpud(self, *args):
        res = super().vpcmpud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpud(self, *args):
        res = super().vpcmpud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpuq(self, *args):
        res = super().vpcmpuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpuq(self, *args):
        res = super().vpcmpuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpuw(self, *args):
        res = super().vpcmpuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpuw(self, *args):
        res = super().vpcmpuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpw(self, *args):
        res = super().vpcmpw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmpw(self, *args):
        res = super().vpcmpw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressb(self, *args):
        res = super().vpcompressb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressb(self, *args):
        res = super().vpcompressb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressd(self, *args):
        res = super().vpcompressd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressd(self, *args):
        res = super().vpcompressd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressq(self, *args):
        res = super().vpcompressq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressq(self, *args):
        res = super().vpcompressq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressw(self, *args):
        res = super().vpcompressw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcompressw(self, *args):
        res = super().vpcompressw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpconflictd(self, *args):
        res = super().vpconflictd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpconflictd(self, *args):
        res = super().vpconflictd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpconflictq(self, *args):
        res = super().vpconflictq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpconflictq(self, *args):
        res = super().vpconflictq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbusd(self, *args):
        res = super().vpdpbusd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbusd(self, *args):
        res = super().vpdpbusd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbusds(self, *args):
        res = super().vpdpbusds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbusds(self, *args):
        res = super().vpdpbusds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwssd(self, *args):
        res = super().vpdpwssd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwssd(self, *args):
        res = super().vpdpwssd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwssds(self, *args):
        res = super().vpdpwssds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwssds(self, *args):
        res = super().vpdpwssds(*args)
        raise_exception_for_error_code(res)
        return res

    def vperm2f128(self, *args):
        res = super().vperm2f128(*args)
        raise_exception_for_error_code(res)
        return res

    def vperm2f128(self, *args):
        res = super().vperm2f128(*args)
        raise_exception_for_error_code(res)
        return res

    def vperm2i128(self, *args):
        res = super().vperm2i128(*args)
        raise_exception_for_error_code(res)
        return res

    def vperm2i128(self, *args):
        res = super().vperm2i128(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermb(self, *args):
        res = super().vpermb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermb(self, *args):
        res = super().vpermb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermd(self, *args):
        res = super().vpermd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermd(self, *args):
        res = super().vpermd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2b(self, *args):
        res = super().vpermi2b(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2b(self, *args):
        res = super().vpermi2b(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2d(self, *args):
        res = super().vpermi2d(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2d(self, *args):
        res = super().vpermi2d(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2pd(self, *args):
        res = super().vpermi2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2pd(self, *args):
        res = super().vpermi2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2ps(self, *args):
        res = super().vpermi2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2ps(self, *args):
        res = super().vpermi2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2q(self, *args):
        res = super().vpermi2q(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2q(self, *args):
        res = super().vpermi2q(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2w(self, *args):
        res = super().vpermi2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermi2w(self, *args):
        res = super().vpermi2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilpd(self, *args):
        res = super().vpermilpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilpd(self, *args):
        res = super().vpermilpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilpd(self, *args):
        res = super().vpermilpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilpd(self, *args):
        res = super().vpermilpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilps(self, *args):
        res = super().vpermilps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilps(self, *args):
        res = super().vpermilps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilps(self, *args):
        res = super().vpermilps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermilps(self, *args):
        res = super().vpermilps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermpd(self, *args):
        res = super().vpermpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermpd(self, *args):
        res = super().vpermpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermpd(self, *args):
        res = super().vpermpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermpd(self, *args):
        res = super().vpermpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermps(self, *args):
        res = super().vpermps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermps(self, *args):
        res = super().vpermps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermq(self, *args):
        res = super().vpermq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermq(self, *args):
        res = super().vpermq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermq(self, *args):
        res = super().vpermq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermq(self, *args):
        res = super().vpermq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2b(self, *args):
        res = super().vpermt2b(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2b(self, *args):
        res = super().vpermt2b(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2d(self, *args):
        res = super().vpermt2d(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2d(self, *args):
        res = super().vpermt2d(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2pd(self, *args):
        res = super().vpermt2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2pd(self, *args):
        res = super().vpermt2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2ps(self, *args):
        res = super().vpermt2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2ps(self, *args):
        res = super().vpermt2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2q(self, *args):
        res = super().vpermt2q(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2q(self, *args):
        res = super().vpermt2q(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2w(self, *args):
        res = super().vpermt2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermt2w(self, *args):
        res = super().vpermt2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermw(self, *args):
        res = super().vpermw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermw(self, *args):
        res = super().vpermw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandb(self, *args):
        res = super().vpexpandb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandb(self, *args):
        res = super().vpexpandb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandd(self, *args):
        res = super().vpexpandd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandd(self, *args):
        res = super().vpexpandd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandq(self, *args):
        res = super().vpexpandq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandq(self, *args):
        res = super().vpexpandq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandw(self, *args):
        res = super().vpexpandw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpexpandw(self, *args):
        res = super().vpexpandw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrb(self, *args):
        res = super().vpextrb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrb(self, *args):
        res = super().vpextrb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrd(self, *args):
        res = super().vpextrd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrd(self, *args):
        res = super().vpextrd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrq(self, *args):
        res = super().vpextrq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrq(self, *args):
        res = super().vpextrq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrw(self, *args):
        res = super().vpextrw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpextrw(self, *args):
        res = super().vpextrw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherdd(self, *args):
        res = super().vpgatherdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherdd(self, *args):
        res = super().vpgatherdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherdq(self, *args):
        res = super().vpgatherdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherdq(self, *args):
        res = super().vpgatherdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherqd(self, *args):
        res = super().vpgatherqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherqd(self, *args):
        res = super().vpgatherqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherqq(self, *args):
        res = super().vpgatherqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpgatherqq(self, *args):
        res = super().vpgatherqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddd(self, *args):
        res = super().vphaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddd(self, *args):
        res = super().vphaddd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddsw(self, *args):
        res = super().vphaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddsw(self, *args):
        res = super().vphaddsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddw(self, *args):
        res = super().vphaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddw(self, *args):
        res = super().vphaddw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphminposuw(self, *args):
        res = super().vphminposuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphminposuw(self, *args):
        res = super().vphminposuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubd(self, *args):
        res = super().vphsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubd(self, *args):
        res = super().vphsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubsw(self, *args):
        res = super().vphsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubsw(self, *args):
        res = super().vphsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubw(self, *args):
        res = super().vphsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubw(self, *args):
        res = super().vphsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrb(self, *args):
        res = super().vpinsrb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrb(self, *args):
        res = super().vpinsrb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrd(self, *args):
        res = super().vpinsrd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrd(self, *args):
        res = super().vpinsrd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrq(self, *args):
        res = super().vpinsrq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrq(self, *args):
        res = super().vpinsrq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrw(self, *args):
        res = super().vpinsrw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpinsrw(self, *args):
        res = super().vpinsrw(*args)
        raise_exception_for_error_code(res)
        return res

    def vplzcntd(self, *args):
        res = super().vplzcntd(*args)
        raise_exception_for_error_code(res)
        return res

    def vplzcntd(self, *args):
        res = super().vplzcntd(*args)
        raise_exception_for_error_code(res)
        return res

    def vplzcntq(self, *args):
        res = super().vplzcntq(*args)
        raise_exception_for_error_code(res)
        return res

    def vplzcntq(self, *args):
        res = super().vplzcntq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadd52huq(self, *args):
        res = super().vpmadd52huq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadd52huq(self, *args):
        res = super().vpmadd52huq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadd52luq(self, *args):
        res = super().vpmadd52luq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadd52luq(self, *args):
        res = super().vpmadd52luq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaddubsw(self, *args):
        res = super().vpmaddubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaddubsw(self, *args):
        res = super().vpmaddubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaddwd(self, *args):
        res = super().vpmaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaddwd(self, *args):
        res = super().vpmaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaskmovd(self, *args):
        res = super().vpmaskmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaskmovd(self, *args):
        res = super().vpmaskmovd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaskmovq(self, *args):
        res = super().vpmaskmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaskmovq(self, *args):
        res = super().vpmaskmovq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsb(self, *args):
        res = super().vpmaxsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsb(self, *args):
        res = super().vpmaxsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsd(self, *args):
        res = super().vpmaxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsd(self, *args):
        res = super().vpmaxsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsq(self, *args):
        res = super().vpmaxsq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsq(self, *args):
        res = super().vpmaxsq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsw(self, *args):
        res = super().vpmaxsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxsw(self, *args):
        res = super().vpmaxsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxub(self, *args):
        res = super().vpmaxub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxub(self, *args):
        res = super().vpmaxub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxud(self, *args):
        res = super().vpmaxud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxud(self, *args):
        res = super().vpmaxud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxuq(self, *args):
        res = super().vpmaxuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxuq(self, *args):
        res = super().vpmaxuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxuw(self, *args):
        res = super().vpmaxuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmaxuw(self, *args):
        res = super().vpmaxuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsb(self, *args):
        res = super().vpminsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsb(self, *args):
        res = super().vpminsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsd(self, *args):
        res = super().vpminsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsd(self, *args):
        res = super().vpminsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsq(self, *args):
        res = super().vpminsq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsq(self, *args):
        res = super().vpminsq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsw(self, *args):
        res = super().vpminsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminsw(self, *args):
        res = super().vpminsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminub(self, *args):
        res = super().vpminub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminub(self, *args):
        res = super().vpminub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminud(self, *args):
        res = super().vpminud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminud(self, *args):
        res = super().vpminud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminuq(self, *args):
        res = super().vpminuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminuq(self, *args):
        res = super().vpminuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminuw(self, *args):
        res = super().vpminuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpminuw(self, *args):
        res = super().vpminuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovb2m(self, *args):
        res = super().vpmovb2m(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovd2m(self, *args):
        res = super().vpmovd2m(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovdb(self, *args):
        res = super().vpmovdb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovdb(self, *args):
        res = super().vpmovdb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovdw(self, *args):
        res = super().vpmovdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovdw(self, *args):
        res = super().vpmovdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovm2b(self, *args):
        res = super().vpmovm2b(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovm2d(self, *args):
        res = super().vpmovm2d(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovm2q(self, *args):
        res = super().vpmovm2q(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovm2w(self, *args):
        res = super().vpmovm2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovmskb(self, *args):
        res = super().vpmovmskb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovq2m(self, *args):
        res = super().vpmovq2m(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovqb(self, *args):
        res = super().vpmovqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovqb(self, *args):
        res = super().vpmovqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovqd(self, *args):
        res = super().vpmovqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovqd(self, *args):
        res = super().vpmovqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovqw(self, *args):
        res = super().vpmovqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovqw(self, *args):
        res = super().vpmovqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsdb(self, *args):
        res = super().vpmovsdb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsdb(self, *args):
        res = super().vpmovsdb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsdw(self, *args):
        res = super().vpmovsdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsdw(self, *args):
        res = super().vpmovsdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsqb(self, *args):
        res = super().vpmovsqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsqb(self, *args):
        res = super().vpmovsqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsqd(self, *args):
        res = super().vpmovsqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsqd(self, *args):
        res = super().vpmovsqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsqw(self, *args):
        res = super().vpmovsqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsqw(self, *args):
        res = super().vpmovsqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovswb(self, *args):
        res = super().vpmovswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovswb(self, *args):
        res = super().vpmovswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxbd(self, *args):
        res = super().vpmovsxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxbd(self, *args):
        res = super().vpmovsxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxbq(self, *args):
        res = super().vpmovsxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxbq(self, *args):
        res = super().vpmovsxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxbw(self, *args):
        res = super().vpmovsxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxbw(self, *args):
        res = super().vpmovsxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxdq(self, *args):
        res = super().vpmovsxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxdq(self, *args):
        res = super().vpmovsxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxwd(self, *args):
        res = super().vpmovsxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxwd(self, *args):
        res = super().vpmovsxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxwq(self, *args):
        res = super().vpmovsxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovsxwq(self, *args):
        res = super().vpmovsxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusdb(self, *args):
        res = super().vpmovusdb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusdb(self, *args):
        res = super().vpmovusdb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusdw(self, *args):
        res = super().vpmovusdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusdw(self, *args):
        res = super().vpmovusdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusqb(self, *args):
        res = super().vpmovusqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusqb(self, *args):
        res = super().vpmovusqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusqd(self, *args):
        res = super().vpmovusqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusqd(self, *args):
        res = super().vpmovusqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusqw(self, *args):
        res = super().vpmovusqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovusqw(self, *args):
        res = super().vpmovusqw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovuswb(self, *args):
        res = super().vpmovuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovuswb(self, *args):
        res = super().vpmovuswb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovw2m(self, *args):
        res = super().vpmovw2m(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovwb(self, *args):
        res = super().vpmovwb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovwb(self, *args):
        res = super().vpmovwb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxbd(self, *args):
        res = super().vpmovzxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxbd(self, *args):
        res = super().vpmovzxbd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxbq(self, *args):
        res = super().vpmovzxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxbq(self, *args):
        res = super().vpmovzxbq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxbw(self, *args):
        res = super().vpmovzxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxbw(self, *args):
        res = super().vpmovzxbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxdq(self, *args):
        res = super().vpmovzxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxdq(self, *args):
        res = super().vpmovzxdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxwd(self, *args):
        res = super().vpmovzxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxwd(self, *args):
        res = super().vpmovzxwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxwq(self, *args):
        res = super().vpmovzxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmovzxwq(self, *args):
        res = super().vpmovzxwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmuldq(self, *args):
        res = super().vpmuldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmuldq(self, *args):
        res = super().vpmuldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulhrsw(self, *args):
        res = super().vpmulhrsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulhrsw(self, *args):
        res = super().vpmulhrsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulhuw(self, *args):
        res = super().vpmulhuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulhuw(self, *args):
        res = super().vpmulhuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulhw(self, *args):
        res = super().vpmulhw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulhw(self, *args):
        res = super().vpmulhw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulld(self, *args):
        res = super().vpmulld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmulld(self, *args):
        res = super().vpmulld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmullq(self, *args):
        res = super().vpmullq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmullq(self, *args):
        res = super().vpmullq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmullw(self, *args):
        res = super().vpmullw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmullw(self, *args):
        res = super().vpmullw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmultishiftqb(self, *args):
        res = super().vpmultishiftqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmultishiftqb(self, *args):
        res = super().vpmultishiftqb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmuludq(self, *args):
        res = super().vpmuludq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmuludq(self, *args):
        res = super().vpmuludq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntb(self, *args):
        res = super().vpopcntb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntb(self, *args):
        res = super().vpopcntb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntd(self, *args):
        res = super().vpopcntd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntd(self, *args):
        res = super().vpopcntd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntq(self, *args):
        res = super().vpopcntq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntq(self, *args):
        res = super().vpopcntq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntw(self, *args):
        res = super().vpopcntw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpopcntw(self, *args):
        res = super().vpopcntw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpor(self, *args):
        res = super().vpor(*args)
        raise_exception_for_error_code(res)
        return res

    def vpor(self, *args):
        res = super().vpor(*args)
        raise_exception_for_error_code(res)
        return res

    def vpord(self, *args):
        res = super().vpord(*args)
        raise_exception_for_error_code(res)
        return res

    def vpord(self, *args):
        res = super().vpord(*args)
        raise_exception_for_error_code(res)
        return res

    def vporq(self, *args):
        res = super().vporq(*args)
        raise_exception_for_error_code(res)
        return res

    def vporq(self, *args):
        res = super().vporq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprold(self, *args):
        res = super().vprold(*args)
        raise_exception_for_error_code(res)
        return res

    def vprold(self, *args):
        res = super().vprold(*args)
        raise_exception_for_error_code(res)
        return res

    def vprolq(self, *args):
        res = super().vprolq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprolq(self, *args):
        res = super().vprolq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprolvd(self, *args):
        res = super().vprolvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprolvd(self, *args):
        res = super().vprolvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprolvq(self, *args):
        res = super().vprolvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprolvq(self, *args):
        res = super().vprolvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprord(self, *args):
        res = super().vprord(*args)
        raise_exception_for_error_code(res)
        return res

    def vprord(self, *args):
        res = super().vprord(*args)
        raise_exception_for_error_code(res)
        return res

    def vprorq(self, *args):
        res = super().vprorq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprorq(self, *args):
        res = super().vprorq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprorvd(self, *args):
        res = super().vprorvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprorvd(self, *args):
        res = super().vprorvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprorvq(self, *args):
        res = super().vprorvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprorvq(self, *args):
        res = super().vprorvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsadbw(self, *args):
        res = super().vpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsadbw(self, *args):
        res = super().vpsadbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpscatterdd(self, *args):
        res = super().vpscatterdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpscatterdq(self, *args):
        res = super().vpscatterdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpscatterqd(self, *args):
        res = super().vpscatterqd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpscatterqq(self, *args):
        res = super().vpscatterqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldd(self, *args):
        res = super().vpshldd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldd(self, *args):
        res = super().vpshldd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldq(self, *args):
        res = super().vpshldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldq(self, *args):
        res = super().vpshldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldvd(self, *args):
        res = super().vpshldvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldvd(self, *args):
        res = super().vpshldvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldvq(self, *args):
        res = super().vpshldvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldvq(self, *args):
        res = super().vpshldvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldvw(self, *args):
        res = super().vpshldvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldvw(self, *args):
        res = super().vpshldvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldw(self, *args):
        res = super().vpshldw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshldw(self, *args):
        res = super().vpshldw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdd(self, *args):
        res = super().vpshrdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdd(self, *args):
        res = super().vpshrdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdq(self, *args):
        res = super().vpshrdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdq(self, *args):
        res = super().vpshrdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdvd(self, *args):
        res = super().vpshrdvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdvd(self, *args):
        res = super().vpshrdvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdvq(self, *args):
        res = super().vpshrdvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdvq(self, *args):
        res = super().vpshrdvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdvw(self, *args):
        res = super().vpshrdvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdvw(self, *args):
        res = super().vpshrdvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdw(self, *args):
        res = super().vpshrdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshrdw(self, *args):
        res = super().vpshrdw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufb(self, *args):
        res = super().vpshufb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufb(self, *args):
        res = super().vpshufb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufbitqmb(self, *args):
        res = super().vpshufbitqmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufbitqmb(self, *args):
        res = super().vpshufbitqmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufd(self, *args):
        res = super().vpshufd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufd(self, *args):
        res = super().vpshufd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufhw(self, *args):
        res = super().vpshufhw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshufhw(self, *args):
        res = super().vpshufhw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshuflw(self, *args):
        res = super().vpshuflw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshuflw(self, *args):
        res = super().vpshuflw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsignb(self, *args):
        res = super().vpsignb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsignb(self, *args):
        res = super().vpsignb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsignd(self, *args):
        res = super().vpsignd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsignd(self, *args):
        res = super().vpsignd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsignw(self, *args):
        res = super().vpsignw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsignw(self, *args):
        res = super().vpsignw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpslld(self, *args):
        res = super().vpslld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpslld(self, *args):
        res = super().vpslld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpslld(self, *args):
        res = super().vpslld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpslld(self, *args):
        res = super().vpslld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpslldq(self, *args):
        res = super().vpslldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpslldq(self, *args):
        res = super().vpslldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllq(self, *args):
        res = super().vpsllq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllq(self, *args):
        res = super().vpsllq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllq(self, *args):
        res = super().vpsllq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllq(self, *args):
        res = super().vpsllq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllvd(self, *args):
        res = super().vpsllvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllvd(self, *args):
        res = super().vpsllvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllvq(self, *args):
        res = super().vpsllvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllvq(self, *args):
        res = super().vpsllvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllvw(self, *args):
        res = super().vpsllvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllvw(self, *args):
        res = super().vpsllvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllw(self, *args):
        res = super().vpsllw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllw(self, *args):
        res = super().vpsllw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllw(self, *args):
        res = super().vpsllw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsllw(self, *args):
        res = super().vpsllw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrad(self, *args):
        res = super().vpsrad(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrad(self, *args):
        res = super().vpsrad(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrad(self, *args):
        res = super().vpsrad(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrad(self, *args):
        res = super().vpsrad(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraq(self, *args):
        res = super().vpsraq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraq(self, *args):
        res = super().vpsraq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraq(self, *args):
        res = super().vpsraq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraq(self, *args):
        res = super().vpsraq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsravd(self, *args):
        res = super().vpsravd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsravd(self, *args):
        res = super().vpsravd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsravq(self, *args):
        res = super().vpsravq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsravq(self, *args):
        res = super().vpsravq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsravw(self, *args):
        res = super().vpsravw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsravw(self, *args):
        res = super().vpsravw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraw(self, *args):
        res = super().vpsraw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraw(self, *args):
        res = super().vpsraw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraw(self, *args):
        res = super().vpsraw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsraw(self, *args):
        res = super().vpsraw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrld(self, *args):
        res = super().vpsrld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrld(self, *args):
        res = super().vpsrld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrld(self, *args):
        res = super().vpsrld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrld(self, *args):
        res = super().vpsrld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrldq(self, *args):
        res = super().vpsrldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrldq(self, *args):
        res = super().vpsrldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlq(self, *args):
        res = super().vpsrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlq(self, *args):
        res = super().vpsrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlq(self, *args):
        res = super().vpsrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlq(self, *args):
        res = super().vpsrlq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlvd(self, *args):
        res = super().vpsrlvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlvd(self, *args):
        res = super().vpsrlvd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlvq(self, *args):
        res = super().vpsrlvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlvq(self, *args):
        res = super().vpsrlvq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlvw(self, *args):
        res = super().vpsrlvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlvw(self, *args):
        res = super().vpsrlvw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlw(self, *args):
        res = super().vpsrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlw(self, *args):
        res = super().vpsrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlw(self, *args):
        res = super().vpsrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsrlw(self, *args):
        res = super().vpsrlw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubb(self, *args):
        res = super().vpsubb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubb(self, *args):
        res = super().vpsubb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubd(self, *args):
        res = super().vpsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubd(self, *args):
        res = super().vpsubd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubq(self, *args):
        res = super().vpsubq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubq(self, *args):
        res = super().vpsubq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubsb(self, *args):
        res = super().vpsubsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubsb(self, *args):
        res = super().vpsubsb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubsw(self, *args):
        res = super().vpsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubsw(self, *args):
        res = super().vpsubsw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubusb(self, *args):
        res = super().vpsubusb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubusb(self, *args):
        res = super().vpsubusb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubusw(self, *args):
        res = super().vpsubusw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubusw(self, *args):
        res = super().vpsubusw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubw(self, *args):
        res = super().vpsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpsubw(self, *args):
        res = super().vpsubw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpternlogd(self, *args):
        res = super().vpternlogd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpternlogd(self, *args):
        res = super().vpternlogd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpternlogq(self, *args):
        res = super().vpternlogq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpternlogq(self, *args):
        res = super().vpternlogq(*args)
        raise_exception_for_error_code(res)
        return res

    def vptest(self, *args):
        res = super().vptest(*args)
        raise_exception_for_error_code(res)
        return res

    def vptest(self, *args):
        res = super().vptest(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmb(self, *args):
        res = super().vptestmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmb(self, *args):
        res = super().vptestmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmd(self, *args):
        res = super().vptestmd(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmd(self, *args):
        res = super().vptestmd(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmq(self, *args):
        res = super().vptestmq(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmq(self, *args):
        res = super().vptestmq(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmw(self, *args):
        res = super().vptestmw(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestmw(self, *args):
        res = super().vptestmw(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmb(self, *args):
        res = super().vptestnmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmb(self, *args):
        res = super().vptestnmb(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmd(self, *args):
        res = super().vptestnmd(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmd(self, *args):
        res = super().vptestnmd(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmq(self, *args):
        res = super().vptestnmq(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmq(self, *args):
        res = super().vptestnmq(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmw(self, *args):
        res = super().vptestnmw(*args)
        raise_exception_for_error_code(res)
        return res

    def vptestnmw(self, *args):
        res = super().vptestnmw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhbw(self, *args):
        res = super().vpunpckhbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhbw(self, *args):
        res = super().vpunpckhbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhdq(self, *args):
        res = super().vpunpckhdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhdq(self, *args):
        res = super().vpunpckhdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhqdq(self, *args):
        res = super().vpunpckhqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhqdq(self, *args):
        res = super().vpunpckhqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhwd(self, *args):
        res = super().vpunpckhwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckhwd(self, *args):
        res = super().vpunpckhwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpcklbw(self, *args):
        res = super().vpunpcklbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpcklbw(self, *args):
        res = super().vpunpcklbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckldq(self, *args):
        res = super().vpunpckldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpckldq(self, *args):
        res = super().vpunpckldq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpcklqdq(self, *args):
        res = super().vpunpcklqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpcklqdq(self, *args):
        res = super().vpunpcklqdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpcklwd(self, *args):
        res = super().vpunpcklwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpunpcklwd(self, *args):
        res = super().vpunpcklwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpxor(self, *args):
        res = super().vpxor(*args)
        raise_exception_for_error_code(res)
        return res

    def vpxor(self, *args):
        res = super().vpxor(*args)
        raise_exception_for_error_code(res)
        return res

    def vpxord(self, *args):
        res = super().vpxord(*args)
        raise_exception_for_error_code(res)
        return res

    def vpxord(self, *args):
        res = super().vpxord(*args)
        raise_exception_for_error_code(res)
        return res

    def vpxorq(self, *args):
        res = super().vpxorq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpxorq(self, *args):
        res = super().vpxorq(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangepd(self, *args):
        res = super().vrangepd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangepd(self, *args):
        res = super().vrangepd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangeps(self, *args):
        res = super().vrangeps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangeps(self, *args):
        res = super().vrangeps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangesd(self, *args):
        res = super().vrangesd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangesd(self, *args):
        res = super().vrangesd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangess(self, *args):
        res = super().vrangess(*args)
        raise_exception_for_error_code(res)
        return res

    def vrangess(self, *args):
        res = super().vrangess(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14pd(self, *args):
        res = super().vrcp14pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14pd(self, *args):
        res = super().vrcp14pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14ps(self, *args):
        res = super().vrcp14ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14ps(self, *args):
        res = super().vrcp14ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14sd(self, *args):
        res = super().vrcp14sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14sd(self, *args):
        res = super().vrcp14sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14ss(self, *args):
        res = super().vrcp14ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp14ss(self, *args):
        res = super().vrcp14ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28pd(self, *args):
        res = super().vrcp28pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28pd(self, *args):
        res = super().vrcp28pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28ps(self, *args):
        res = super().vrcp28ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28ps(self, *args):
        res = super().vrcp28ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28sd(self, *args):
        res = super().vrcp28sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28sd(self, *args):
        res = super().vrcp28sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28ss(self, *args):
        res = super().vrcp28ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcp28ss(self, *args):
        res = super().vrcp28ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpps(self, *args):
        res = super().vrcpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpps(self, *args):
        res = super().vrcpps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpss(self, *args):
        res = super().vrcpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpss(self, *args):
        res = super().vrcpss(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducepd(self, *args):
        res = super().vreducepd(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducepd(self, *args):
        res = super().vreducepd(*args)
        raise_exception_for_error_code(res)
        return res

    def vreduceps(self, *args):
        res = super().vreduceps(*args)
        raise_exception_for_error_code(res)
        return res

    def vreduceps(self, *args):
        res = super().vreduceps(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducesd(self, *args):
        res = super().vreducesd(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducesd(self, *args):
        res = super().vreducesd(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducess(self, *args):
        res = super().vreducess(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducess(self, *args):
        res = super().vreducess(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscalepd(self, *args):
        res = super().vrndscalepd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscalepd(self, *args):
        res = super().vrndscalepd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscaleps(self, *args):
        res = super().vrndscaleps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscaleps(self, *args):
        res = super().vrndscaleps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscalesd(self, *args):
        res = super().vrndscalesd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscalesd(self, *args):
        res = super().vrndscalesd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscaless(self, *args):
        res = super().vrndscaless(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscaless(self, *args):
        res = super().vrndscaless(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundpd(self, *args):
        res = super().vroundpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundpd(self, *args):
        res = super().vroundpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundps(self, *args):
        res = super().vroundps(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundps(self, *args):
        res = super().vroundps(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundsd(self, *args):
        res = super().vroundsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundsd(self, *args):
        res = super().vroundsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundss(self, *args):
        res = super().vroundss(*args)
        raise_exception_for_error_code(res)
        return res

    def vroundss(self, *args):
        res = super().vroundss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14pd(self, *args):
        res = super().vrsqrt14pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14pd(self, *args):
        res = super().vrsqrt14pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14ps(self, *args):
        res = super().vrsqrt14ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14ps(self, *args):
        res = super().vrsqrt14ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14sd(self, *args):
        res = super().vrsqrt14sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14sd(self, *args):
        res = super().vrsqrt14sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14ss(self, *args):
        res = super().vrsqrt14ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt14ss(self, *args):
        res = super().vrsqrt14ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28pd(self, *args):
        res = super().vrsqrt28pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28pd(self, *args):
        res = super().vrsqrt28pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28ps(self, *args):
        res = super().vrsqrt28ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28ps(self, *args):
        res = super().vrsqrt28ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28sd(self, *args):
        res = super().vrsqrt28sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28sd(self, *args):
        res = super().vrsqrt28sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28ss(self, *args):
        res = super().vrsqrt28ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrt28ss(self, *args):
        res = super().vrsqrt28ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtps(self, *args):
        res = super().vrsqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtps(self, *args):
        res = super().vrsqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtss(self, *args):
        res = super().vrsqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtss(self, *args):
        res = super().vrsqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefpd(self, *args):
        res = super().vscalefpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefpd(self, *args):
        res = super().vscalefpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefps(self, *args):
        res = super().vscalefps(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefps(self, *args):
        res = super().vscalefps(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefsd(self, *args):
        res = super().vscalefsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefsd(self, *args):
        res = super().vscalefsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefss(self, *args):
        res = super().vscalefss(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefss(self, *args):
        res = super().vscalefss(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterdpd(self, *args):
        res = super().vscatterdpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterdps(self, *args):
        res = super().vscatterdps(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf0dpd(self, *args):
        res = super().vscatterpf0dpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf0dps(self, *args):
        res = super().vscatterpf0dps(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf0qpd(self, *args):
        res = super().vscatterpf0qpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf0qps(self, *args):
        res = super().vscatterpf0qps(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf1dpd(self, *args):
        res = super().vscatterpf1dpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf1dps(self, *args):
        res = super().vscatterpf1dps(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf1qpd(self, *args):
        res = super().vscatterpf1qpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterpf1qps(self, *args):
        res = super().vscatterpf1qps(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterqpd(self, *args):
        res = super().vscatterqpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vscatterqps(self, *args):
        res = super().vscatterqps(*args)
        raise_exception_for_error_code(res)
        return res

    def vshuff32x4(self, *args):
        res = super().vshuff32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vshuff32x4(self, *args):
        res = super().vshuff32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vshuff64x2(self, *args):
        res = super().vshuff64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vshuff64x2(self, *args):
        res = super().vshuff64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufi32x4(self, *args):
        res = super().vshufi32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufi32x4(self, *args):
        res = super().vshufi32x4(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufi64x2(self, *args):
        res = super().vshufi64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufi64x2(self, *args):
        res = super().vshufi64x2(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufpd(self, *args):
        res = super().vshufpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufpd(self, *args):
        res = super().vshufpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufps(self, *args):
        res = super().vshufps(*args)
        raise_exception_for_error_code(res)
        return res

    def vshufps(self, *args):
        res = super().vshufps(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtpd(self, *args):
        res = super().vsqrtpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtpd(self, *args):
        res = super().vsqrtpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtps(self, *args):
        res = super().vsqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtps(self, *args):
        res = super().vsqrtps(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtsd(self, *args):
        res = super().vsqrtsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtsd(self, *args):
        res = super().vsqrtsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtss(self, *args):
        res = super().vsqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtss(self, *args):
        res = super().vsqrtss(*args)
        raise_exception_for_error_code(res)
        return res

    def vstmxcsr(self, *args):
        res = super().vstmxcsr(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubpd(self, *args):
        res = super().vsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubpd(self, *args):
        res = super().vsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubps(self, *args):
        res = super().vsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubps(self, *args):
        res = super().vsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubsd(self, *args):
        res = super().vsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubsd(self, *args):
        res = super().vsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubss(self, *args):
        res = super().vsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubss(self, *args):
        res = super().vsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vtestpd(self, *args):
        res = super().vtestpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vtestpd(self, *args):
        res = super().vtestpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vtestps(self, *args):
        res = super().vtestps(*args)
        raise_exception_for_error_code(res)
        return res

    def vtestps(self, *args):
        res = super().vtestps(*args)
        raise_exception_for_error_code(res)
        return res

    def vucomisd(self, *args):
        res = super().vucomisd(*args)
        raise_exception_for_error_code(res)
        return res

    def vucomisd(self, *args):
        res = super().vucomisd(*args)
        raise_exception_for_error_code(res)
        return res

    def vucomiss(self, *args):
        res = super().vucomiss(*args)
        raise_exception_for_error_code(res)
        return res

    def vucomiss(self, *args):
        res = super().vucomiss(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpckhpd(self, *args):
        res = super().vunpckhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpckhpd(self, *args):
        res = super().vunpckhpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpckhps(self, *args):
        res = super().vunpckhps(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpckhps(self, *args):
        res = super().vunpckhps(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpcklpd(self, *args):
        res = super().vunpcklpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpcklpd(self, *args):
        res = super().vunpcklpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpcklps(self, *args):
        res = super().vunpcklps(*args)
        raise_exception_for_error_code(res)
        return res

    def vunpcklps(self, *args):
        res = super().vunpcklps(*args)
        raise_exception_for_error_code(res)
        return res

    def vxorpd(self, *args):
        res = super().vxorpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vxorpd(self, *args):
        res = super().vxorpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vxorps(self, *args):
        res = super().vxorps(*args)
        raise_exception_for_error_code(res)
        return res

    def vxorps(self, *args):
        res = super().vxorps(*args)
        raise_exception_for_error_code(res)
        return res

    def vzeroall(self, *args):
        res = super().vzeroall(*args)
        raise_exception_for_error_code(res)
        return res

    def vzeroupper(self, *args):
        res = super().vzeroupper(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddpd(self, *args):
        res = super().vfmaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddpd(self, *args):
        res = super().vfmaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddpd(self, *args):
        res = super().vfmaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddps(self, *args):
        res = super().vfmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddps(self, *args):
        res = super().vfmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddps(self, *args):
        res = super().vfmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsd(self, *args):
        res = super().vfmaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsd(self, *args):
        res = super().vfmaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsd(self, *args):
        res = super().vfmaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddss(self, *args):
        res = super().vfmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddss(self, *args):
        res = super().vfmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddss(self, *args):
        res = super().vfmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsubpd(self, *args):
        res = super().vfmaddsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsubpd(self, *args):
        res = super().vfmaddsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsubpd(self, *args):
        res = super().vfmaddsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsubps(self, *args):
        res = super().vfmaddsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsubps(self, *args):
        res = super().vfmaddsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsubps(self, *args):
        res = super().vfmaddsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubaddpd(self, *args):
        res = super().vfmsubaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubaddpd(self, *args):
        res = super().vfmsubaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubaddpd(self, *args):
        res = super().vfmsubaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubaddps(self, *args):
        res = super().vfmsubaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubaddps(self, *args):
        res = super().vfmsubaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubaddps(self, *args):
        res = super().vfmsubaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubpd(self, *args):
        res = super().vfmsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubpd(self, *args):
        res = super().vfmsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubpd(self, *args):
        res = super().vfmsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubps(self, *args):
        res = super().vfmsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubps(self, *args):
        res = super().vfmsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubps(self, *args):
        res = super().vfmsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubsd(self, *args):
        res = super().vfmsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubsd(self, *args):
        res = super().vfmsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubsd(self, *args):
        res = super().vfmsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubss(self, *args):
        res = super().vfmsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubss(self, *args):
        res = super().vfmsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubss(self, *args):
        res = super().vfmsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddpd(self, *args):
        res = super().vfnmaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddpd(self, *args):
        res = super().vfnmaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddpd(self, *args):
        res = super().vfnmaddpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddps(self, *args):
        res = super().vfnmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddps(self, *args):
        res = super().vfnmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddps(self, *args):
        res = super().vfnmaddps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddsd(self, *args):
        res = super().vfnmaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddsd(self, *args):
        res = super().vfnmaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddsd(self, *args):
        res = super().vfnmaddsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddss(self, *args):
        res = super().vfnmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddss(self, *args):
        res = super().vfnmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmaddss(self, *args):
        res = super().vfnmaddss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubpd(self, *args):
        res = super().vfnmsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubpd(self, *args):
        res = super().vfnmsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubpd(self, *args):
        res = super().vfnmsubpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubps(self, *args):
        res = super().vfnmsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubps(self, *args):
        res = super().vfnmsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubps(self, *args):
        res = super().vfnmsubps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubsd(self, *args):
        res = super().vfnmsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubsd(self, *args):
        res = super().vfnmsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubsd(self, *args):
        res = super().vfnmsubsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubss(self, *args):
        res = super().vfnmsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubss(self, *args):
        res = super().vfnmsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsubss(self, *args):
        res = super().vfnmsubss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczpd(self, *args):
        res = super().vfrczpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczpd(self, *args):
        res = super().vfrczpd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczps(self, *args):
        res = super().vfrczps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczps(self, *args):
        res = super().vfrczps(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczsd(self, *args):
        res = super().vfrczsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczsd(self, *args):
        res = super().vfrczsd(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczss(self, *args):
        res = super().vfrczss(*args)
        raise_exception_for_error_code(res)
        return res

    def vfrczss(self, *args):
        res = super().vfrczss(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmov(self, *args):
        res = super().vpcmov(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmov(self, *args):
        res = super().vpcmov(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcmov(self, *args):
        res = super().vpcmov(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomb(self, *args):
        res = super().vpcomb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomb(self, *args):
        res = super().vpcomb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomd(self, *args):
        res = super().vpcomd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomd(self, *args):
        res = super().vpcomd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomq(self, *args):
        res = super().vpcomq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomq(self, *args):
        res = super().vpcomq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomw(self, *args):
        res = super().vpcomw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomw(self, *args):
        res = super().vpcomw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomub(self, *args):
        res = super().vpcomub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomub(self, *args):
        res = super().vpcomub(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomud(self, *args):
        res = super().vpcomud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomud(self, *args):
        res = super().vpcomud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomuq(self, *args):
        res = super().vpcomuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomuq(self, *args):
        res = super().vpcomuq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomuw(self, *args):
        res = super().vpcomuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpcomuw(self, *args):
        res = super().vpcomuw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermil2pd(self, *args):
        res = super().vpermil2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermil2pd(self, *args):
        res = super().vpermil2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermil2pd(self, *args):
        res = super().vpermil2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermil2ps(self, *args):
        res = super().vpermil2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermil2ps(self, *args):
        res = super().vpermil2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpermil2ps(self, *args):
        res = super().vpermil2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddbd(self, *args):
        res = super().vphaddbd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddbd(self, *args):
        res = super().vphaddbd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddbq(self, *args):
        res = super().vphaddbq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddbq(self, *args):
        res = super().vphaddbq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddbw(self, *args):
        res = super().vphaddbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddbw(self, *args):
        res = super().vphaddbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphadddq(self, *args):
        res = super().vphadddq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphadddq(self, *args):
        res = super().vphadddq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddwd(self, *args):
        res = super().vphaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddwd(self, *args):
        res = super().vphaddwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddwq(self, *args):
        res = super().vphaddwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddwq(self, *args):
        res = super().vphaddwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddubd(self, *args):
        res = super().vphaddubd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddubd(self, *args):
        res = super().vphaddubd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddubq(self, *args):
        res = super().vphaddubq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddubq(self, *args):
        res = super().vphaddubq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddubw(self, *args):
        res = super().vphaddubw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddubw(self, *args):
        res = super().vphaddubw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddudq(self, *args):
        res = super().vphaddudq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphaddudq(self, *args):
        res = super().vphaddudq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphadduwd(self, *args):
        res = super().vphadduwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphadduwd(self, *args):
        res = super().vphadduwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphadduwq(self, *args):
        res = super().vphadduwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphadduwq(self, *args):
        res = super().vphadduwq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubbw(self, *args):
        res = super().vphsubbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubbw(self, *args):
        res = super().vphsubbw(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubdq(self, *args):
        res = super().vphsubdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubdq(self, *args):
        res = super().vphsubdq(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubwd(self, *args):
        res = super().vphsubwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vphsubwd(self, *args):
        res = super().vphsubwd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsdd(self, *args):
        res = super().vpmacsdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsdd(self, *args):
        res = super().vpmacsdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsdqh(self, *args):
        res = super().vpmacsdqh(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsdqh(self, *args):
        res = super().vpmacsdqh(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsdql(self, *args):
        res = super().vpmacsdql(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsdql(self, *args):
        res = super().vpmacsdql(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacswd(self, *args):
        res = super().vpmacswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacswd(self, *args):
        res = super().vpmacswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsww(self, *args):
        res = super().vpmacsww(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsww(self, *args):
        res = super().vpmacsww(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssdd(self, *args):
        res = super().vpmacssdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssdd(self, *args):
        res = super().vpmacssdd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssdqh(self, *args):
        res = super().vpmacssdqh(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssdqh(self, *args):
        res = super().vpmacssdqh(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssdql(self, *args):
        res = super().vpmacssdql(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssdql(self, *args):
        res = super().vpmacssdql(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsswd(self, *args):
        res = super().vpmacsswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacsswd(self, *args):
        res = super().vpmacsswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssww(self, *args):
        res = super().vpmacssww(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmacssww(self, *args):
        res = super().vpmacssww(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadcsswd(self, *args):
        res = super().vpmadcsswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadcsswd(self, *args):
        res = super().vpmadcsswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadcswd(self, *args):
        res = super().vpmadcswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpmadcswd(self, *args):
        res = super().vpmadcswd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpperm(self, *args):
        res = super().vpperm(*args)
        raise_exception_for_error_code(res)
        return res

    def vpperm(self, *args):
        res = super().vpperm(*args)
        raise_exception_for_error_code(res)
        return res

    def vpperm(self, *args):
        res = super().vpperm(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotb(self, *args):
        res = super().vprotb(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotb(self, *args):
        res = super().vprotb(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotb(self, *args):
        res = super().vprotb(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotb(self, *args):
        res = super().vprotb(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotb(self, *args):
        res = super().vprotb(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotd(self, *args):
        res = super().vprotd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotd(self, *args):
        res = super().vprotd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotd(self, *args):
        res = super().vprotd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotd(self, *args):
        res = super().vprotd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotd(self, *args):
        res = super().vprotd(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotq(self, *args):
        res = super().vprotq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotq(self, *args):
        res = super().vprotq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotq(self, *args):
        res = super().vprotq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotq(self, *args):
        res = super().vprotq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotq(self, *args):
        res = super().vprotq(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotw(self, *args):
        res = super().vprotw(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotw(self, *args):
        res = super().vprotw(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotw(self, *args):
        res = super().vprotw(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotw(self, *args):
        res = super().vprotw(*args)
        raise_exception_for_error_code(res)
        return res

    def vprotw(self, *args):
        res = super().vprotw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshab(self, *args):
        res = super().vpshab(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshab(self, *args):
        res = super().vpshab(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshab(self, *args):
        res = super().vpshab(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshad(self, *args):
        res = super().vpshad(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshad(self, *args):
        res = super().vpshad(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshad(self, *args):
        res = super().vpshad(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshaq(self, *args):
        res = super().vpshaq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshaq(self, *args):
        res = super().vpshaq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshaq(self, *args):
        res = super().vpshaq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshaw(self, *args):
        res = super().vpshaw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshaw(self, *args):
        res = super().vpshaw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshaw(self, *args):
        res = super().vpshaw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlb(self, *args):
        res = super().vpshlb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlb(self, *args):
        res = super().vpshlb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlb(self, *args):
        res = super().vpshlb(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshld(self, *args):
        res = super().vpshld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshld(self, *args):
        res = super().vpshld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshld(self, *args):
        res = super().vpshld(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlq(self, *args):
        res = super().vpshlq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlq(self, *args):
        res = super().vpshlq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlq(self, *args):
        res = super().vpshlq(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlw(self, *args):
        res = super().vpshlw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlw(self, *args):
        res = super().vpshlw(*args)
        raise_exception_for_error_code(res)
        return res

    def vpshlw(self, *args):
        res = super().vpshlw(*args)
        raise_exception_for_error_code(res)
        return res

    def vbcstnebf162ps(self, *args):
        res = super().vbcstnebf162ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vbcstnesh2ps(self, *args):
        res = super().vbcstnesh2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtneebf162ps(self, *args):
        res = super().vcvtneebf162ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtneeph2ps(self, *args):
        res = super().vcvtneeph2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtneobf162ps(self, *args):
        res = super().vcvtneobf162ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtneoph2ps(self, *args):
        res = super().vcvtneoph2ps(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbssd(self, *args):
        res = super().vpdpbssd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbssd(self, *args):
        res = super().vpdpbssd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbssds(self, *args):
        res = super().vpdpbssds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbssds(self, *args):
        res = super().vpdpbssds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbsud(self, *args):
        res = super().vpdpbsud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbsud(self, *args):
        res = super().vpdpbsud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbsuds(self, *args):
        res = super().vpdpbsuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbsuds(self, *args):
        res = super().vpdpbsuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbuud(self, *args):
        res = super().vpdpbuud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbuud(self, *args):
        res = super().vpdpbuud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbuuds(self, *args):
        res = super().vpdpbuuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpbuuds(self, *args):
        res = super().vpdpbuuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwsud(self, *args):
        res = super().vpdpwsud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwsud(self, *args):
        res = super().vpdpwsud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwsuds(self, *args):
        res = super().vpdpwsuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwsuds(self, *args):
        res = super().vpdpwsuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwusd(self, *args):
        res = super().vpdpwusd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwusd(self, *args):
        res = super().vpdpwusd(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwusds(self, *args):
        res = super().vpdpwusds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwusds(self, *args):
        res = super().vpdpwusds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwuud(self, *args):
        res = super().vpdpwuud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwuud(self, *args):
        res = super().vpdpwuud(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwuuds(self, *args):
        res = super().vpdpwuuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vpdpwuuds(self, *args):
        res = super().vpdpwuuds(*args)
        raise_exception_for_error_code(res)
        return res

    def vsha512msg1(self, *args):
        res = super().vsha512msg1(*args)
        raise_exception_for_error_code(res)
        return res

    def vsha512msg2(self, *args):
        res = super().vsha512msg2(*args)
        raise_exception_for_error_code(res)
        return res

    def vsha512rnds2(self, *args):
        res = super().vsha512rnds2(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm3msg1(self, *args):
        res = super().vsm3msg1(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm3msg1(self, *args):
        res = super().vsm3msg1(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm3msg2(self, *args):
        res = super().vsm3msg2(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm3msg2(self, *args):
        res = super().vsm3msg2(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm3rnds2(self, *args):
        res = super().vsm3rnds2(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm3rnds2(self, *args):
        res = super().vsm3rnds2(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm4key4(self, *args):
        res = super().vsm4key4(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm4key4(self, *args):
        res = super().vsm4key4(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm4rnds4(self, *args):
        res = super().vsm4rnds4(*args)
        raise_exception_for_error_code(res)
        return res

    def vsm4rnds4(self, *args):
        res = super().vsm4rnds4(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddph(self, *args):
        res = super().vaddph(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddph(self, *args):
        res = super().vaddph(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsh(self, *args):
        res = super().vaddsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vaddsh(self, *args):
        res = super().vaddsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpph(self, *args):
        res = super().vcmpph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpph(self, *args):
        res = super().vcmpph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpsh(self, *args):
        res = super().vcmpsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcmpsh(self, *args):
        res = super().vcmpsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcomish(self, *args):
        res = super().vcomish(*args)
        raise_exception_for_error_code(res)
        return res

    def vcomish(self, *args):
        res = super().vcomish(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtdq2ph(self, *args):
        res = super().vcvtdq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtdq2ph(self, *args):
        res = super().vcvtdq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2ph(self, *args):
        res = super().vcvtpd2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtpd2ph(self, *args):
        res = super().vcvtpd2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2dq(self, *args):
        res = super().vcvtph2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2dq(self, *args):
        res = super().vcvtph2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2pd(self, *args):
        res = super().vcvtph2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2pd(self, *args):
        res = super().vcvtph2pd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2psx(self, *args):
        res = super().vcvtph2psx(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2psx(self, *args):
        res = super().vcvtph2psx(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2qq(self, *args):
        res = super().vcvtph2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2qq(self, *args):
        res = super().vcvtph2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2udq(self, *args):
        res = super().vcvtph2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2udq(self, *args):
        res = super().vcvtph2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2uqq(self, *args):
        res = super().vcvtph2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2uqq(self, *args):
        res = super().vcvtph2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2uw(self, *args):
        res = super().vcvtph2uw(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2uw(self, *args):
        res = super().vcvtph2uw(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2w(self, *args):
        res = super().vcvtph2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtph2w(self, *args):
        res = super().vcvtph2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2phx(self, *args):
        res = super().vcvtps2phx(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtps2phx(self, *args):
        res = super().vcvtps2phx(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtqq2ph(self, *args):
        res = super().vcvtqq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtqq2ph(self, *args):
        res = super().vcvtqq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2sh(self, *args):
        res = super().vcvtsd2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsd2sh(self, *args):
        res = super().vcvtsd2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2sd(self, *args):
        res = super().vcvtsh2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2sd(self, *args):
        res = super().vcvtsh2sd(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2si(self, *args):
        res = super().vcvtsh2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2si(self, *args):
        res = super().vcvtsh2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2ss(self, *args):
        res = super().vcvtsh2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2ss(self, *args):
        res = super().vcvtsh2ss(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2usi(self, *args):
        res = super().vcvtsh2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsh2usi(self, *args):
        res = super().vcvtsh2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsi2sh(self, *args):
        res = super().vcvtsi2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtsi2sh(self, *args):
        res = super().vcvtsi2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2sh(self, *args):
        res = super().vcvtss2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtss2sh(self, *args):
        res = super().vcvtss2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2dq(self, *args):
        res = super().vcvttph2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2dq(self, *args):
        res = super().vcvttph2dq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2qq(self, *args):
        res = super().vcvttph2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2qq(self, *args):
        res = super().vcvttph2qq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2udq(self, *args):
        res = super().vcvttph2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2udq(self, *args):
        res = super().vcvttph2udq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2uqq(self, *args):
        res = super().vcvttph2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2uqq(self, *args):
        res = super().vcvttph2uqq(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2uw(self, *args):
        res = super().vcvttph2uw(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2uw(self, *args):
        res = super().vcvttph2uw(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2w(self, *args):
        res = super().vcvttph2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttph2w(self, *args):
        res = super().vcvttph2w(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsh2si(self, *args):
        res = super().vcvttsh2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsh2si(self, *args):
        res = super().vcvttsh2si(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsh2usi(self, *args):
        res = super().vcvttsh2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvttsh2usi(self, *args):
        res = super().vcvttsh2usi(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtudq2ph(self, *args):
        res = super().vcvtudq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtudq2ph(self, *args):
        res = super().vcvtudq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuqq2ph(self, *args):
        res = super().vcvtuqq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuqq2ph(self, *args):
        res = super().vcvtuqq2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtusi2sh(self, *args):
        res = super().vcvtusi2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtusi2sh(self, *args):
        res = super().vcvtusi2sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuw2ph(self, *args):
        res = super().vcvtuw2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtuw2ph(self, *args):
        res = super().vcvtuw2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtw2ph(self, *args):
        res = super().vcvtw2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vcvtw2ph(self, *args):
        res = super().vcvtw2ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivph(self, *args):
        res = super().vdivph(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivph(self, *args):
        res = super().vdivph(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivsh(self, *args):
        res = super().vdivsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vdivsh(self, *args):
        res = super().vdivsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmaddcph(self, *args):
        res = super().vfcmaddcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmaddcph(self, *args):
        res = super().vfcmaddcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmaddcsh(self, *args):
        res = super().vfcmaddcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmaddcsh(self, *args):
        res = super().vfcmaddcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmulcph(self, *args):
        res = super().vfcmulcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmulcph(self, *args):
        res = super().vfcmulcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmulcsh(self, *args):
        res = super().vfcmulcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfcmulcsh(self, *args):
        res = super().vfcmulcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132ph(self, *args):
        res = super().vfmadd132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132ph(self, *args):
        res = super().vfmadd132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132sh(self, *args):
        res = super().vfmadd132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd132sh(self, *args):
        res = super().vfmadd132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213ph(self, *args):
        res = super().vfmadd213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213ph(self, *args):
        res = super().vfmadd213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213sh(self, *args):
        res = super().vfmadd213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd213sh(self, *args):
        res = super().vfmadd213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231ph(self, *args):
        res = super().vfmadd231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231ph(self, *args):
        res = super().vfmadd231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231sh(self, *args):
        res = super().vfmadd231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmadd231sh(self, *args):
        res = super().vfmadd231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddcph(self, *args):
        res = super().vfmaddcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddcph(self, *args):
        res = super().vfmaddcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddcsh(self, *args):
        res = super().vfmaddcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddcsh(self, *args):
        res = super().vfmaddcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub132ph(self, *args):
        res = super().vfmaddsub132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub132ph(self, *args):
        res = super().vfmaddsub132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub213ph(self, *args):
        res = super().vfmaddsub213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub213ph(self, *args):
        res = super().vfmaddsub213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub231ph(self, *args):
        res = super().vfmaddsub231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmaddsub231ph(self, *args):
        res = super().vfmaddsub231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132ph(self, *args):
        res = super().vfmsub132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132ph(self, *args):
        res = super().vfmsub132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132sh(self, *args):
        res = super().vfmsub132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub132sh(self, *args):
        res = super().vfmsub132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213ph(self, *args):
        res = super().vfmsub213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213ph(self, *args):
        res = super().vfmsub213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213sh(self, *args):
        res = super().vfmsub213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub213sh(self, *args):
        res = super().vfmsub213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231ph(self, *args):
        res = super().vfmsub231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231ph(self, *args):
        res = super().vfmsub231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231sh(self, *args):
        res = super().vfmsub231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsub231sh(self, *args):
        res = super().vfmsub231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd132ph(self, *args):
        res = super().vfmsubadd132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd132ph(self, *args):
        res = super().vfmsubadd132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd213ph(self, *args):
        res = super().vfmsubadd213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd213ph(self, *args):
        res = super().vfmsubadd213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd231ph(self, *args):
        res = super().vfmsubadd231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmsubadd231ph(self, *args):
        res = super().vfmsubadd231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmulcph(self, *args):
        res = super().vfmulcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmulcph(self, *args):
        res = super().vfmulcph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmulcsh(self, *args):
        res = super().vfmulcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfmulcsh(self, *args):
        res = super().vfmulcsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132ph(self, *args):
        res = super().vfnmadd132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132ph(self, *args):
        res = super().vfnmadd132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132sh(self, *args):
        res = super().vfnmadd132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd132sh(self, *args):
        res = super().vfnmadd132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213ph(self, *args):
        res = super().vfnmadd213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213ph(self, *args):
        res = super().vfnmadd213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213sh(self, *args):
        res = super().vfnmadd213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd213sh(self, *args):
        res = super().vfnmadd213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231ph(self, *args):
        res = super().vfnmadd231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231ph(self, *args):
        res = super().vfnmadd231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231sh(self, *args):
        res = super().vfnmadd231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmadd231sh(self, *args):
        res = super().vfnmadd231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132ph(self, *args):
        res = super().vfnmsub132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132ph(self, *args):
        res = super().vfnmsub132ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132sh(self, *args):
        res = super().vfnmsub132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub132sh(self, *args):
        res = super().vfnmsub132sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213ph(self, *args):
        res = super().vfnmsub213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213ph(self, *args):
        res = super().vfnmsub213ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213sh(self, *args):
        res = super().vfnmsub213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub213sh(self, *args):
        res = super().vfnmsub213sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231ph(self, *args):
        res = super().vfnmsub231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231ph(self, *args):
        res = super().vfnmsub231ph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231sh(self, *args):
        res = super().vfnmsub231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfnmsub231sh(self, *args):
        res = super().vfnmsub231sh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclassph(self, *args):
        res = super().vfpclassph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclassph(self, *args):
        res = super().vfpclassph(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclasssh(self, *args):
        res = super().vfpclasssh(*args)
        raise_exception_for_error_code(res)
        return res

    def vfpclasssh(self, *args):
        res = super().vfpclasssh(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpph(self, *args):
        res = super().vgetexpph(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpph(self, *args):
        res = super().vgetexpph(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpsh(self, *args):
        res = super().vgetexpsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetexpsh(self, *args):
        res = super().vgetexpsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantph(self, *args):
        res = super().vgetmantph(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantph(self, *args):
        res = super().vgetmantph(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantsh(self, *args):
        res = super().vgetmantsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vgetmantsh(self, *args):
        res = super().vgetmantsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxph(self, *args):
        res = super().vmaxph(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxph(self, *args):
        res = super().vmaxph(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxsh(self, *args):
        res = super().vmaxsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vmaxsh(self, *args):
        res = super().vmaxsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vminph(self, *args):
        res = super().vminph(*args)
        raise_exception_for_error_code(res)
        return res

    def vminph(self, *args):
        res = super().vminph(*args)
        raise_exception_for_error_code(res)
        return res

    def vminsh(self, *args):
        res = super().vminsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vminsh(self, *args):
        res = super().vminsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsh(self, *args):
        res = super().vmovsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsh(self, *args):
        res = super().vmovsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovsh(self, *args):
        res = super().vmovsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovw(self, *args):
        res = super().vmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovw(self, *args):
        res = super().vmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovw(self, *args):
        res = super().vmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def vmovw(self, *args):
        res = super().vmovw(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulph(self, *args):
        res = super().vmulph(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulph(self, *args):
        res = super().vmulph(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulsh(self, *args):
        res = super().vmulsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vmulsh(self, *args):
        res = super().vmulsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpph(self, *args):
        res = super().vrcpph(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpph(self, *args):
        res = super().vrcpph(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpsh(self, *args):
        res = super().vrcpsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vrcpsh(self, *args):
        res = super().vrcpsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vreduceph(self, *args):
        res = super().vreduceph(*args)
        raise_exception_for_error_code(res)
        return res

    def vreduceph(self, *args):
        res = super().vreduceph(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducesh(self, *args):
        res = super().vreducesh(*args)
        raise_exception_for_error_code(res)
        return res

    def vreducesh(self, *args):
        res = super().vreducesh(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscaleph(self, *args):
        res = super().vrndscaleph(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscaleph(self, *args):
        res = super().vrndscaleph(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscalesh(self, *args):
        res = super().vrndscalesh(*args)
        raise_exception_for_error_code(res)
        return res

    def vrndscalesh(self, *args):
        res = super().vrndscalesh(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtph(self, *args):
        res = super().vrsqrtph(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtph(self, *args):
        res = super().vrsqrtph(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtsh(self, *args):
        res = super().vrsqrtsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vrsqrtsh(self, *args):
        res = super().vrsqrtsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefph(self, *args):
        res = super().vscalefph(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefph(self, *args):
        res = super().vscalefph(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefsh(self, *args):
        res = super().vscalefsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vscalefsh(self, *args):
        res = super().vscalefsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtph(self, *args):
        res = super().vsqrtph(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtph(self, *args):
        res = super().vsqrtph(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtsh(self, *args):
        res = super().vsqrtsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vsqrtsh(self, *args):
        res = super().vsqrtsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubph(self, *args):
        res = super().vsubph(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubph(self, *args):
        res = super().vsubph(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubsh(self, *args):
        res = super().vsubsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vsubsh(self, *args):
        res = super().vsubsh(*args)
        raise_exception_for_error_code(res)
        return res

    def vucomish(self, *args):
        res = super().vucomish(*args)
        raise_exception_for_error_code(res)
        return res

    def vucomish(self, *args):
        res = super().vucomish(*args)
        raise_exception_for_error_code(res)
        return res

    def ldtilecfg(self, *args):
        res = super().ldtilecfg(*args)
        raise_exception_for_error_code(res)
        return res

    def sttilecfg(self, *args):
        res = super().sttilecfg(*args)
        raise_exception_for_error_code(res)
        return res

    def tileloadd(self, *args):
        res = super().tileloadd(*args)
        raise_exception_for_error_code(res)
        return res

    def tileloaddt1(self, *args):
        res = super().tileloaddt1(*args)
        raise_exception_for_error_code(res)
        return res

    def tilerelease(self, *args):
        res = super().tilerelease(*args)
        raise_exception_for_error_code(res)
        return res

    def tilestored(self, *args):
        res = super().tilestored(*args)
        raise_exception_for_error_code(res)
        return res

    def tilezero(self, *args):
        res = super().tilezero(*args)
        raise_exception_for_error_code(res)
        return res

    def tdpbf16ps(self, *args):
        res = super().tdpbf16ps(*args)
        raise_exception_for_error_code(res)
        return res

    def tcmmimfp16ps(self, *args):
        res = super().tcmmimfp16ps(*args)
        raise_exception_for_error_code(res)
        return res

    def tcmmrlfp16ps(self, *args):
        res = super().tcmmrlfp16ps(*args)
        raise_exception_for_error_code(res)
        return res

    def tdpfp16ps(self, *args):
        res = super().tdpfp16ps(*args)
        raise_exception_for_error_code(res)
        return res

    def tdpbssd(self, *args):
        res = super().tdpbssd(*args)
        raise_exception_for_error_code(res)
        return res

    def tdpbsud(self, *args):
        res = super().tdpbsud(*args)
        raise_exception_for_error_code(res)
        return res

    def tdpbusd(self, *args):
        res = super().tdpbusd(*args)
        raise_exception_for_error_code(res)
        return res

    def tdpbuud(self, *args):
        res = super().tdpbuud(*args)
        raise_exception_for_error_code(res)
        return res

__all__ = [ "Assembler", "Reg", "Mem" ]