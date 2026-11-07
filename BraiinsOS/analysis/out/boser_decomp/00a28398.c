// FUN_00a28398 @ 00a28398 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_00a28398(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x2d] == '\x03') {
      FUN_00a27c50(param_1 + 2);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    FUN_00db19c4(param_1 + 2);
    return;
  }
  return;
}

