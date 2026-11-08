// FUN_00795330 @ 00795330 size=48 calls_out=1 calls_in=2
// strings: 

void FUN_00795330(int *param_1)

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

