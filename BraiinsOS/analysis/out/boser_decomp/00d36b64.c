// FUN_00d36b64 @ 00d36b64 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_00d36b64(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00d332bc(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (param_1[2] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  FUN_019bb7e0(param_1[5],param_1[6]);
  return;
}

