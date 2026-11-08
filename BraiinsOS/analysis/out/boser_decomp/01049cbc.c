// FUN_01049cbc @ 01049cbc size=104 calls_out=3 calls_in=11
// strings: 

void FUN_01049cbc(int *param_1)

{
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[0xc] != -0x80000000) {
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  }
  FUN_019bb7e0(param_1[3],param_1[4]);
  if (-0x7fffffff < param_1[0x12]) {
    FUN_019bb7e0(param_1[0x12],param_1[0x13]);
  }
  if (param_1[0xf] != -0x80000000) {
    FUN_019bb7e0(param_1[0xf],param_1[0x10]);
  }
  FUN_006a41c0(param_1 + 6);
  FUN_00b3bc54(param_1 + 9);
  return;
}

