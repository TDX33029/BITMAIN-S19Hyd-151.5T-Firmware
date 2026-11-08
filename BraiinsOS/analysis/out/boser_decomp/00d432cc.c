// FUN_00d432cc @ 00d432cc size=48 calls_out=1 calls_in=4
// strings: 

void FUN_00d432cc(int *param_1)

{
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
  }
  if (param_1[3] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[3],param_1[4]);
  return;
}

