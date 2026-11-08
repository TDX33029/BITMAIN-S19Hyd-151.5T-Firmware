// FUN_00741f54 @ 00741f54 size=88 calls_out=3 calls_in=2
// strings: 

void FUN_00741f54(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] != -0x80000000) {
      FUN_019bb7e0(param_1[2],param_1[3]);
      return;
    }
  }
  else if (*param_1 == 1) {
    if (param_1[2] == 0) {
      return;
    }
    if (param_1[2] == 2) {
      FUN_00b91e68(param_1[6],param_1[7]);
      return;
    }
    FUN_0069d8a4((char)param_1[3],param_1[4]);
    return;
  }
  return;
}

