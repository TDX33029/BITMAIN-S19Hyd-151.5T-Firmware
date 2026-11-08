// FUN_0081f7d8 @ 0081f7d8 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_0081f7d8(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x35] == '\x03') {
      FUN_0081f80c(param_1 + 2);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    FUN_00ba8128(param_1 + 2);
    return;
  }
  return;
}

