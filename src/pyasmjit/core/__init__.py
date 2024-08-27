from typing import Optional
from .._pyasmjit.asmjit import CodeHolder as _CodeHolder
from .._pyasmjit.asmjit import Environment as Environment
from .._pyasmjit.asmjit import CpuFeatures as CpuFeatures
from .._pyasmjit.asmjit import Label as Label
from .._pyasmjit.asmjit import JitRuntime as JitRuntime

from ..error import raise_exception_for_error_code

class CodeHolder(_CodeHolder):

    def __init__(self, env: Environment, cpu: Optional[CpuFeatures] = None, base_address: Optional[int] = None):
        err_code = 0
        super().__init__()
        if cpu is None and base_address is None:
            err_code = super().init(env)
        elif base_address is None:
            err_code = super().init(env, cpu)
        else:
            err_code = super().init(env, cpu, base_address)

        raise_exception_for_error_code(err_code)

__all__ = [ "CodeHolder", "Environment", "CpuFeatures", "Label", "JitRuntime" ]