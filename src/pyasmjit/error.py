from ._pyasmjit.asmjit import ErrorCode

def raise_exception_for_error_code(code: int):
    if code == 0:
        return
    raise RuntimeError(ErrorCode(code))