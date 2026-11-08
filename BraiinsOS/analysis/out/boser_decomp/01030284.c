// FUN_01030284 @ 01030284 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_01030284(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x2d] == '\x03') {
      FUN_010302b8(param_1 + 2);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    FUN_01030054(param_1 + 2);
    return;
  }
  return;
}

