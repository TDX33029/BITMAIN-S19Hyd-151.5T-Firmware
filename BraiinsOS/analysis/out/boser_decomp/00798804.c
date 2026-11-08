// FUN_00798804 @ 00798804 size=64 calls_out=3 calls_in=1
// strings: 

void FUN_00798804(int *param_1)

{
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 != 0) {
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  if (param_1[1] == -0x80000000) {
    FUN_0069d8a4((char)param_1[2],param_1[3]);
    return;
  }
  FUN_019bb7e0(param_1[1],param_1[2]);
  return;
}

