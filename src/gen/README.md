# Generated Source from binder
This directory contains the generated C++ source code from `binder`.

You can regenerate this code using the below command:
```bash
binder --root-module asmjit --prefix src/gen/ --bind asmjit src/all_includes.hpp -- -std=c++11 -Iextern/asmjit/src/ -DNDEBUG -iwithsysroot=/usr/local/c++/13/ -DASMJIT_NO_DEPRECATED
```