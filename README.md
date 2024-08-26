# pyasmjit
Python 3.7+ bindings for [asmjit](https://github.com/asmjit/asmjit).

## Build Instructions
Code generation through [binder](https://cppbinder.readthedocs.io/en/latest/config.html).

```bash
# Generate the C++ pybind11 bindings using this `binder` command
binder --root-module asmjit --prefix src/gen/ --config binder.config src/all_includes.hpp -- -std=c++11 -Iextern/asmjit/src/ -DNDEBUG -iwithsysroot=/usr/local/c++/13/ -DASMJIT_NO_DEPRECATED

# Remove private member accesses
sed -i 's/^.*cl.def_readwrite("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def_static("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp

# Remove cend() and cbegin() functions
sed -i 's/^.*cl.def("cend".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def("cbegin".*$//g' ./src/gen/unknown/*.cpp

# Fix missing template parameters
# Edit file: src/gen/unknown/unknown_17.cpp, lines 86 and 87, rewrite 
#   this statement 'return o.allocT(' to 'return o.allocT<asmjit::ConstPool::Node>('

# Configure the project with CMake
cmake CMakeLists.txt -Bbuild
cd build

# Compile
make -j $(nproc)
```