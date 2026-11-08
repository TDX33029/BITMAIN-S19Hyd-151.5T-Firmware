// FUN_007ac68c @ 007ac68c size=40 calls_out=2 calls_in=1
// strings: 

void FUN_007ac68c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    FUN_01443048(param_1[1],param_1[2]);
    return;
  }
  if (iVar1 == -0x7fffffff) {
    return;
  }
  FUN_019bb7e0(iVar1,param_1[1]);
  return;
}

