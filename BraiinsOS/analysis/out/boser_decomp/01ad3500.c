// FUN_01ad3500 @ 01ad3500 size=72 calls_out=1 calls_in=5
// strings: 

void FUN_01ad3500(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == -0x7ffffffe) {
    return;
  }
  if (-0x7fffffff < iVar1) {
    FUN_0134bd64(iVar1,param_1[1]);
  }
  if (-0x7fffffff < param_1[3]) {
    FUN_0134bd64(param_1[3],param_1[4]);
  }
  if (param_1[6] < -0x7ffffffe) {
    return;
  }
  FUN_0134bd64(param_1[6],param_1[7]);
  return;
}

