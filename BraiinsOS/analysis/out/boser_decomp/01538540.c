// FUN_01538540 @ 01538540 size=40 calls_out=2 calls_in=1
// strings: 

void FUN_01538540(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  if (iVar1 == -0x7fffffff) {
    FUN_01531dec(param_1 + 1);
    return;
  }
  FUN_019bb7e0(iVar1,param_1[1]);
  return;
}

