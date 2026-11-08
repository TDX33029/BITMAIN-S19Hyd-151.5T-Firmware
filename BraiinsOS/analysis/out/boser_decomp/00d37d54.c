// FUN_00d37d54 @ 00d37d54 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00d37d54(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 != 2) {
    FUN_0185401c((char)param_1[1],param_1[2]);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_01443048(param_1[4],param_1[5]);
  return;
}

