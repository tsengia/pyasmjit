# pyasmjit
Python 3.7+ bindings for [asmjit](https://github.com/asmjit/asmjit).

```python
from pyasmjit import *
from pyasmjit.x86 import *

rt = JitRuntime()
c = CodeHolder(rt.environment())

a = Assembler(c)
zbp = a.zbp()
zsp = a.zsp()
a.push(zbp)
a.mov(zbp, zsp)

# TODO: Patch assembler to auto-cast ints + floats + bytes + char to Immutable values
# TODO: Imm() constructor defaults to casting ints to doubles immediately. Need to fix that.
# TODO: Certain Imm::isInt() Imm:isXYZ() functions cast the boolean return values back to ints. Need to fix that.
a.sub(zsp, Imm(32))

# TODO: Fix imports to allow for referencing registers by static name
a.xor_(pyasmjit.asmjit.x86.eax(), pyasmjit.asmjit.x86.eax())
a.mov(zsp, zbp)
a.pop(zbp)
a.ret()
```

## Build Instructions
Code generation through [binder](https://cppbinder.readthedocs.io/en/latest/config.html), bindings by [pybind11](https://github.com/pybind/pybind11).

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

During the CI build process, wheels will be built using [cibuildwheel](https://cibuildwheel.pypa.io/en/stable/).

## Other Dev Notes
- [https://learn.scientific-python.org/development/guides/packaging-compiled/](https://learn.scientific-python.org/development/guides/packaging-compiled/)
- [Building Wheels on GitHub Actions](https://learn.scientific-python.org/development/guides/gha-wheels/)
- [scikit_build_example repo](https://github.com/pybind/scikit_build_example/tree/master)
- [pybind11 docs](https://pybind11.readthedocs.io/en/latest/classes.html)