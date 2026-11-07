// FUN_0007eb90 @ 0007eb90  size=192  callers=4
// program: bmminer


undefined4 FUN_0007eb90(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    if ((((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0)) && (param_1 != param_3)) {
      iVar1 = FUN_0007aa1c(param_1 + 2,param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_0007e8e0(param_3);
      return 0xffffffff;
    }
    FUN_0007e8e0(param_3);
  }
  return 0xffffffff;
}

