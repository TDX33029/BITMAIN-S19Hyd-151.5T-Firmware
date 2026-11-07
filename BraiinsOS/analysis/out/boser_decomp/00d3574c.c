// FUN_00d3574c @ 00d3574c size=56 calls_out=2 calls_in=1
// strings: 

void FUN_00d3574c(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00d32f14(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (param_1[2] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  return;
}

