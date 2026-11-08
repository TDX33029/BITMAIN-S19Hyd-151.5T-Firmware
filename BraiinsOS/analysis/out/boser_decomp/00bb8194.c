// FUN_00bb8194 @ 00bb8194 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_00bb8194(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x2d] == '\x03') {
      FUN_00e7b2d0(param_1 + 2);
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

