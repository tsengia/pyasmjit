from pyasmjit import Imm, ImmType
from pyasmjit.x86 import *


def test_immediate_positive_int_value():

    i = Imm(22)

    assert i.type == ImmType.kInt
    assert i.value == 22
    assert i.isInt()
    assert not i.isDouble()
    assert i.isInt32()
    assert i.isUInt32()
    assert i.isInt16()
    assert i.isUInt16()
    assert i.isInt8()
    assert i.isUInt8()
    assert i.predicate() == 0

def test_immediate_negative_int_value():

    i = Imm(-17)

    assert i.type == ImmType.kInt
    assert i.value == -17
    assert i.isInt()
    assert not i.isDouble()
    assert i.isInt32()
    assert not i.isUInt32()
    assert i.isInt16()
    assert not i.isUInt16()
    assert i.isInt8()
    assert not i.isUInt8()
    assert i.predicate() == 0


def test_immediate_float_value():

    i = Imm(5.5)

    assert i.type == ImmType.kDouble
    assert i.isDouble()
    assert i.value == 5.5
    assert not i.isInt()
    assert not i.isInt32()
    assert not i.isUInt32()
    assert not i.isInt16()
    assert not i.isUInt16()
    assert not i.isInt8()
    assert not i.isUInt8()
    assert i.predicate() == 0