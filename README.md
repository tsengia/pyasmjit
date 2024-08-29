# pyasmjit
Python 3.7+ bindings for [asmjit](https://github.com/asmjit/asmjit).

```python
from pyasmjit import *
from pyasmjit.x86 import *
from pyasmjit.x86.registers import *

rt = JitRuntime()
c = CodeHolder(rt.environment())

a = Assembler(c)
zbp = a.zbp()
zsp = a.zsp()
a.push(zbp)
a.mov(zbp, zsp)

a.sub(zsp, Imm(32))

a.xor_(eax, eax)
a.mov(zsp, zbp)
a.pop(zbp)
a.ret()
```

## TODO
- Allow calling function that was added to JitRuntime
- Allow releasing function from JitRuntime
- Build wheel file

## Build Instructions
Code generation through [binder](https://cppbinder.readthedocs.io/en/latest/config.html), bindings by [pybind11](https://github.com/pybind/pybind11).

The `build.sh` script was used to generate the C++ code in the `src/gen` directory.

During the CI build process, wheels will be built using [cibuildwheel](https://cibuildwheel.pypa.io/en/stable/).

## Other Dev Notes
- [https://learn.scientific-python.org/development/guides/packaging-compiled/](https://learn.scientific-python.org/development/guides/packaging-compiled/)
- [Building Wheels on GitHub Actions](https://learn.scientific-python.org/development/guides/gha-wheels/)
- [scikit_build_example repo](https://github.com/pybind/scikit_build_example/tree/master)
- [pybind11 docs](https://pybind11.readthedocs.io/en/latest/classes.html)