// FUN_014b1c80 @ 014b1c80 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_014b1c80(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
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

