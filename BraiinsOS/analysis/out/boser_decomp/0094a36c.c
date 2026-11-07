// FUN_0094a36c @ 0094a36c size=72 calls_out=1 calls_in=16
// strings: 

void FUN_0094a36c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == -0x7ffffffe) {
    return;
  }
  if (-0x7fffffff < iVar1) {
    FUN_019bb7e0(iVar1,param_1[1]);
  }
  if (-0x7fffffff < param_1[3]) {
    FUN_019bb7e0(param_1[3],param_1[4]);
  }
  if (param_1[6] < -0x7ffffffe) {
    return;
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

