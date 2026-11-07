// FUN_0007f9e4 @ 0007f9e4  size=220  callers=11
// program: bmminer


undefined4 FUN_0007f9e4(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    if (((param_1 != (int *)0x0) && (*param_1 == 1)) && (param_1 != param_2)) {
      iVar1 = FUN_0007f8d4(param_1,1,1);
      if (iVar1 == 0) {
        FUN_0007e8e0(param_2);
        return 0xffffffff;
      }
      *(int **)(param_1[4] + param_1[3] * 4) = param_2;
      param_1[3] = param_1[3] + 1;
      return 0;
    }
    FUN_0007e8e0(param_2);
  }
  return 0xffffffff;
}

