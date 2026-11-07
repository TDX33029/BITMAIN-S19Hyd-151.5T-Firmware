// FUN_00b8c5f0 @ 00b8c5f0 size=56 calls_out=3 calls_in=2
// strings: 

void FUN_00b8c5f0(int *param_1)

{
  if ((char)param_1[0x85] == '\0') {
    if (*param_1 == 3) {
      FUN_0069d8a4((char)param_1[1],param_1[2]);
      return;
    }
    FUN_01955c2c();
    return;
  }
  if ((char)param_1[0x85] == '\x03') {
    FUN_00b8c68c(param_1 + 0x30);
    return;
  }
  return;
}

