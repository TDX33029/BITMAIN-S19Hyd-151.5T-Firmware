// FUN_01209d24 @ 01209d24 size=60 calls_out=3 calls_in=0
// strings: 

void FUN_01209d24(int param_1)

{
  if (*(char *)(param_1 + 0xe9) == '\x03') {
    FUN_01431b40(param_1 + 0x108);
  }
  else if (*(char *)(param_1 + 0xe9) != '\x04') {
    return;
  }
  FUN_011f6f44(param_1 + 0x80);
  FUN_010a7c94(param_1);
  return;
}

