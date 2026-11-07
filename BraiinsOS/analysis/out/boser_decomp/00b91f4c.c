// FUN_00b91f4c @ 00b91f4c size=76 calls_out=3 calls_in=1
// strings: 

void FUN_00b91f4c(int *param_1)

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
    FUN_00799fb0(param_1 + 3);
    return;
  }
  FUN_00b91e68(param_1[6],param_1[7]);
  return;
}

