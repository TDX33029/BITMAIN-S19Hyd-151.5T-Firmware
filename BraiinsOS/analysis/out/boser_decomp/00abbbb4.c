// FUN_00abbbb4 @ 00abbbb4 size=40 calls_out=2 calls_in=0
// strings: 

void FUN_00abbbb4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  if (iVar1 == -0x7fffffff) {
    FUN_00abbbdc(param_1 + 1);
    return;
  }
  FUN_019bb7e0(iVar1,param_1[1]);
  return;
}

