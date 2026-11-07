// FUN_0093a3d4 @ 0093a3d4 size=60 calls_out=2 calls_in=5
// strings: 

void FUN_0093a3d4(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_0093a154(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_0093a294(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

