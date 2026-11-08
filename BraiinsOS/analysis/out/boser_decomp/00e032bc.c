// FUN_00e032bc @ 00e032bc size=80 calls_out=2 calls_in=2
// strings: 

void FUN_00e032bc(int *param_1)

{
  if (*param_1 != 3) {
    FUN_00b5efb4(param_1);
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  if (param_1[4] != -0x80000000) {
    FUN_019bb7e0(param_1[4],param_1[5]);
  }
  if (param_1[7] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[7],param_1[8]);
  return;
}

