// FUN_00f2b350 @ 00f2b350 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00f2b350(int param_1)

{
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_005f3030(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 0x31) != '\x03') {
      return;
    }
    FUN_005f3030(param_1 + 0x1c);
  }
  FUN_019d8724(param_1);
  return;
}

