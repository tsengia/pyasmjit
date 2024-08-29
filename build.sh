#!/bin/bash
set -e
set -x
rm -rf build
rm -rf src/gen/unknown src/gen/*.cpp

# Generate the C++ pybind11 bindings using this `binder` command
binder --root-module _pyasmjit --prefix src/gen/ --config binder.config src/all_includes.hpp -- -std=c++11 -Iextern/asmjit/src/ -DNDEBUG -iwithsysroot=/usr/local/c++/13/ -DASMJIT_NO_DEPRECATED

# Remove private member accesses
sed -i 's/^.*cl.def_readwrite("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def_static("_[A-Za-z0-9]\+".*$//g' ./src/gen/unknown/*.cpp

# Rename static method that overloading a non-static method
sed -i 's/cl.def_static("isGp"/cl.def_static("isOperandGp"/g' ./src/gen/unknown/*.cpp
sed -i 's/cl.def_static("isVec"/cl.def_static("isOperandVec"/g' ./src/gen/unknown/*.cpp

# Modified unknown_17.cpp
#   Had to rename static functions of form `is32Bit` to `isArchitecture32Bit`
# Modified unknown_44.cpp
#   Had to rename static functions of form `isGpb` to `isOperandGpb`
# Modified unknown_76.cpp
#   Had to rename static functions of form `isGpW` to `isOperandGpW`
# Modified unknown_13.cpp
#   Had to rename static functions of form `isGp` to `isOperandGp`

# Modified unknown_24.cpp
#   Had to add constructor for CodeHolder b/c constructor accepts a excluded class (asmjit::Support::Temporary) as an argument
#   TODO: Check which other objects are lacking a constructor due to excluding the asmjit::Support namespace

# TODO: It would be nice if binder could include default constructors for classes with 
#       type-excluded arguments which also have default values set
#           This would remove the manual change needed above in unknown_24.cpp

# Modified unknown_14.cpp
#   Had to rename the multiple valueAs() methods to valueAsShort(), valueAsUnsignedShort(), etc.
#   Had to add the valueAsDouble() method

# Remove cend() and cbegin() functions
sed -i 's/^.*cl.def("cend".*$//g' ./src/gen/unknown/*.cpp
sed -i 's/^.*cl.def("cbegin".*$//g' ./src/gen/unknown/*.cpp

# Configure the project with CMake
cmake CMakeLists.txt -Bbuild
pushd build
    # Compile
    make -j $(nproc)
popd

# Remove old libraries and move in new libraries
rm -f src/pyasmjit/*.so && cp -v build/_pyasmjit.cpython*.so src/pyasmjit/ && cp -v build/extern/asmjit/libasmjit.so src/pyasmjit/
