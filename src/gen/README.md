# Generated Source from binder
This directory contains the generated C++ source code from `binder`.

You can regenerate this code using the below command:
```bash
binder --root-module asmjit --prefix src/gen/ --bind asmjit src/all_includes.hpp -- -std=c++11 -Iextern/asmjit/src/ -DNDEBUG -iwithsysroot=/usr/local/c++/13/ -DASMJIT_NO_DEPRECATED
```

Have to fix generated files in the following ways:
1. Remove references to private methods/fields: Match this regex, `.*\.def\("_[A-Za-z]+",.*`, replace with empty string
2. Add `#include "asmjit/asmjit.h"` to the top of each `.cpp` file