// FUN_0007fac0 @ 0007fac0  size=408  callers=0
// program: bmminer


undefined4 FUN_0007fac0(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    if (((param_1 != (int *)0x0) && (*param_1 == 1)) && (param_1 != param_3)) {
      if ((uint)param_1[3] < param_2) {
        FUN_0007e8e0(param_3);
        return 0xffffffff;
      }
      iVar1 = FUN_0007f8d4(param_1,1,0);
      if (iVar1 == 0) {
        FUN_0007e8e0(param_3);
        return 0xffffffff;
      }
      if (iVar1 == param_1[4]) {
        FUN_0007f81c(param_1,param_2 + 1,param_2,param_1[3] - param_2);
      }
      else {
        FUN_0007f87c(param_1[4],0,iVar1,0,param_2);
        FUN_0007f87c(param_1[4],param_2 + 1,iVar1,param_2,param_1[3] - param_2);
        FUN_0007d8e8(iVar1);
      }
      *(int **)(param_1[4] + param_2 * 4) = param_3;
      param_1[3] = param_1[3] + 1;
      return 0;
    }
    FUN_0007e8e0(param_3);
  }
  return 0xffffffff;
}

