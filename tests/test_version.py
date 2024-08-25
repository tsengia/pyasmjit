import pyasmjit

def test_version_reporting():
    print(pyasmjit.get_asm_jit_version())
    assert pyasmjit.get_asm_jit_version() is not None