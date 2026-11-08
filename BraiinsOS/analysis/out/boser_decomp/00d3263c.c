// FUN_00d3263c @ 00d3263c size=56 calls_out=2 calls_in=1
// strings: 

void FUN_00d3263c(int *param_1)

{
  if (*param_1 == 1) {
    FUN_00d3b5b4(param_1 + 2);
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

