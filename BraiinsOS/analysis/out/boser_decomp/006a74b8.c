// FUN_006a74b8 @ 006a74b8 size=80 calls_out=3 calls_in=2
// strings: 

void FUN_006a74b8(int *param_1)

{
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[9] != -0x80000000) {
    FUN_019bb7e0(param_1[9],param_1[10]);
  }
  if (-0x7fffffff < param_1[0xc]) {
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  }
  FUN_006a41c0(param_1 + 3);
  FUN_00b3bc54(param_1 + 6);
  return;
}

