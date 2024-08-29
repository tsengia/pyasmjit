from pyasmjit import JitRuntime, CodeHolder, Imm
from pyasmjit.x86 import *

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

    # TODO: Fix imports to allow for referencing registers by static name
    #a.xor_(pyasmjit.asmjit.x86.eax(), pyasmjit.asmjit.x86.eax())
    a.mov(zsp, zbp)
    a.pop(zbp)
    a.ret()