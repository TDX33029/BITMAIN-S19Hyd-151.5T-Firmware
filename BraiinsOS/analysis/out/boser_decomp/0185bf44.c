// FUN_0185bf44 @ 0185bf44 size=96 calls_out=3 calls_in=3
// strings: 

void FUN_0185bf44(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < -0x7ffffffe) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  if (iVar1 == -0x7ffffffe) {
    return;
  }
  FUN_019bb7e0(iVar1,param_1[1]);
  FUN_0134aee0(param_1[3],param_1[4],2,8);
  if (param_1[0xb] != -0x80000000) {
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  }
  FUN_01703ca8(param_1 + 8);
  return;
}

