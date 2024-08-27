# pyasmjit
Python 3.7+ bindings for [asmjit](https://github.com/asmjit/asmjit).

```python
from pyasmjit import CodeHolder, JitRuntime
from pyasmjit.x86 import Assembler

rt = JitRuntime()
c = CodeHolder(rt.environment())

a = Assembler(c)
zbp = a.zbp()
zsp = a.zsp()
a.push(zbp)
a.mov(zbp, zsp)

# TODO: Patch assembler to auto-cast ints + floats + bytes + char to Immutable values
a.sub(zsp, pyasmjit.asmjit.Imm(32))

# TODO: Fix imports to allow for referencing registers by static name
a.xor_(pyasmjit.asmjit.x86.eax(), pyasmjit.asmjit.x86.eax())
a.mov(zsp, zbp)
a.pop(zbp)
a.ret()
```

## Build Instructions
Code generation through [binder](https://cppbinder.readthedocs.io/en/latest/config.html).

```bash
# Generate the C++ pybind11 bindings using this `binder` command
binder --root-module _pyasmjit --prefix src/gen/ --config binder.config src/all_includes.hpp -- -std=c++11 -Iextern/asmjit/src/ -DNDEBUG -iwithsysroot=/usr/local/c++/13/ -DASMJIT_NO_DEPRECATED

# Remove private member accesses
sed -i 's/^.*cl.def_readwrite("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def_static("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp

# Remove cend() and cbegin() functions
sed -i 's/^.*cl.def("cend".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def("cbegin".*$//g' ./src/gen/unknown/*.cpp

# Configure the project with CMake
cmake CMakeLists.txt -Bbuild
cd build

# Compile
make -j $(nproc)
```