// FUN_00737454 @ 00737454 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_00737454(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 != 2) {
    FUN_0069d8a4((char)param_1[1],param_1[2]);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_01443048(param_1[4],param_1[5]);
  return;
}

