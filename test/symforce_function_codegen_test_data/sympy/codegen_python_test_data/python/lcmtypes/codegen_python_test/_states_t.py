# This file automatically generated by skymarshal
# DO NOT MODIFY BY HAND
# fmt: off
# isort: off
# mypy: disallow-untyped-defs

import copy
import typing as T  # pylint: disable=unused-import

from io import BytesIO
import struct
from lcmtypes.eigen_lcm._Vector2d import Vector2d

class states_t(object):
    __slots__ = ["p"]  # type: T.List[str]

    def __init__(
        self,
        p=None,  # type: Vector2d
        _skip_initialize=False,  # type: bool
    ):
        # type: (...) -> None
        """ If _skip_initialize is True, all other constructor arguments are ignored """
        if _skip_initialize:
            return
        self.p = Vector2d._default() if p is None else p  # type: Vector2d

    @staticmethod
    def from_all_fields(
        p,  # type: Vector2d
    ):
        # type: (...) -> states_t
        return states_t(
            p=p,
        )

    @staticmethod
    def _skytype_meta():
        # type: () -> T.Dict[str, str]
        return dict(
            type="struct",
            package="codegen_python_test",
            name="states_t",
        )

    @classmethod
    def _default(cls):
        # type: () -> states_t
        return cls()

    def __repr__(self):
        # type: () -> str
        return "states_t({})".format(
            ", ".join("{}={}".format(name, repr(getattr(self, name))) for name in self.__slots__))

    def __eq__(self, other):
        # type: (object) -> bool
        if not isinstance(other, states_t):
            return NotImplemented
        return (
            (self.p==other.p)
        )
    # Disallow hashing for python struct lcmtypes.
    __hash__ = None  # type: ignore

    def encode(self):
        # type: () -> bytes
        buf = BytesIO()
        buf.write(states_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        # type: (T.BinaryIO) -> None
        if hasattr(self.p, '_get_packed_fingerprint'):
            assert self.p._get_packed_fingerprint() == Vector2d._get_packed_fingerprint()
        else:
            assert self.p._get_hash_recursive([]) == Vector2d._get_hash_recursive([])
        self.p._encode_one(buf)

    @staticmethod
    def decode(data):
        # type: (T.Union[bytes, T.BinaryIO]) -> states_t
        # NOTE(eric): This function can technically accept either a BinaryIO or
        # anything that supports the C++ Buffer Protocol,
        # which is unspecifiable in type hints.

        if hasattr(data, "read"):
            # NOTE(eric): mypy isn't able to figure out the hasattr check
            buf = T.cast(T.BinaryIO, data)
        else:
            buf = BytesIO(T.cast(bytes, data))

        if buf.read(8) != states_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return states_t._decode_one(buf)

    @staticmethod
    def _decode_one(buf):
        # type: (T.BinaryIO) -> states_t
        self = states_t(_skip_initialize=True)
        self.p = Vector2d._decode_one(buf)
        return self

    @staticmethod
    def _get_hash_recursive(parents):
        # type: (T.List[T.Type]) -> int
        if states_t in parents: return 0
        newparents = parents + [states_t]
        tmphash = (0x12345678017000+ Vector2d._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash

    _packed_fingerprint = None  # type: T.Optional[bytes]

    @staticmethod
    def _get_packed_fingerprint():
        # type: () -> bytes
        if states_t._packed_fingerprint is None:
            states_t._packed_fingerprint = struct.pack(">Q", states_t._get_hash_recursive([]))
        return states_t._packed_fingerprint

    def deepcopy(self, **kwargs):
        # type: (**T.Any) -> states_t
        """
        Deep copy of this LCM type

        Returns a copy w/ members specified by kwargs replaced with new values specified by kwargs.
        """
        result = copy.deepcopy(self)
        for key in kwargs:
            if not hasattr(result, key):
                raise KeyError("Type states_t does not have attribute: " + str(key))
            setattr(result, key, kwargs[key])
        return result
