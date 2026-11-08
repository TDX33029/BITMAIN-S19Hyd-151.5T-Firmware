// FUN_0171da24 @ 0171da24 size=188 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_0171da24(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    return 1;
  }
  if (param_2 == 0) {
    FUN_01714350();
  }
  else {
    iVar1 = FUN_01718cb4(*param_1);
    if (iVar1 != 0) {
      iVar2 = FUN_0171464c(param_1,param_1[1] + 1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = param_1[1];
      param_1[1] = iVar2 + 1;
      *(int *)(*param_1 + iVar2 * 4) = iVar1;
    }
  }
  return 1;
}

