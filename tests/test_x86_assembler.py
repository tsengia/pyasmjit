from pyasmjit import JitRuntime, CodeHolder, Imm
from pyasmjit.x86 import *
from pyasmjit.x86.registers import *

def test_assembler_example():
    rt = JitRuntime()
    c = CodeHolder(rt.environment())

    a = Assembler(c)
    zbp = a.zbp()
    zsp = a.zsp()
    a.push(zbp)
    a.mov(zbp, zsp)

    i = Imm(32)
    a.sub(zsp, i)

    a.xor_(eax, eax)
    a.mov(zsp, zbp)
    a.pop(zbp)
    a.ret()

    f = rt.add(c)
    assert f is not None
    assert f._location is not None
    print(f"Function handle location: {f._location}")