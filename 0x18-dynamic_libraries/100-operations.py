import ctypes

cops = ctypes.CDLL('./100-operations.so')

def add(a, b):
  return cops.add(a, b)
