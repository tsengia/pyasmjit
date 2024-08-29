from typing import Optional, Union
from .._pyasmjit.asmjit import CodeHolder as _CodeHolder
from .._pyasmjit.asmjit import Environment
from .._pyasmjit.asmjit import CpuFeatures
from .._pyasmjit.asmjit import Label
from .._pyasmjit.asmjit import Operand
from .._pyasmjit.asmjit import Imm as _Imm
from .._pyasmjit.asmjit import ImmType
from .._pyasmjit.asmjit import JumpAnnotation
from .._pyasmjit.asmjit import FuncNode
from .._pyasmjit.asmjit import FuncDetail
from .._pyasmjit.asmjit import FuncFrame
from .._pyasmjit.asmjit import CallConv
from .._pyasmjit.asmjit import FuncValue
from .._pyasmjit.asmjit import FuncSignature
from .._pyasmjit.asmjit import JitRuntime as _JitRuntime

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

class Imm(_Imm):

    def __init__(self, value: Union[int,float]):
        if isinstance(value, int):
            super().__init__()
            super().setType(ImmType(ImmType.kInt))
            super().setValue(value)

        elif isinstance(value, float):
            super().__init__()
            super().setType(ImmType(ImmType.kDouble))
            super().setValue(value)

    @property
    def value(self) -> Union[int, float]:
         
        if self.type == ImmType.kInt:
            return super().value()
        
        return super().valueAsDouble()
    
    @property
    def type(self) -> ImmType:
        return super().type()

class FunctionHandle():

    def __init__(self, runtime = None):
        self._address: int = 0
        self.runtime: Optional[JitRuntime] = runtime

        # TODO: Implement JitRuntime::add(self._address, code_holder)
        # https://asmjit.com/doc/classasmjit_1_1JitRuntime.html#a8d0aaefc03ac97d845c9ebbc68358c4b

    def release(self):
        if self.runtime is None:
            return
        self.runtime.release(self._address)

class JitRuntime(_JitRuntime):

    def add(self, code: CodeHolder) -> FunctionHandle:
        f = FunctionHandle(self)

        super().add(f, code)

        return f

__all__ = [ "CodeHolder", "Environment", "CpuFeatures", "Label", "JitRuntime", "Imm", "ImmType", "Operand", "JumpAnnotation" ]