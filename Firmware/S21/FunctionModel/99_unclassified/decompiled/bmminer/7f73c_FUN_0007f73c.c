// FUN_0007f73c @ 0007f73c  size=224  callers=0
// program: bmminer


undefined4 FUN_0007f73c(int *param_1,uint param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    if (((param_1 != (int *)0x0) && (*param_1 == 1)) && (param_1 != param_3)) {
      if (param_2 < (uint)param_1[3]) {
        FUN_0007e8e0(*(undefined4 *)(param_1[4] + param_2 * 4));
        *(int **)(param_1[4] + param_2 * 4) = param_3;
        return 0;
      }
      FUN_0007e8e0(param_3);
      return 0xffffffff;
    }
    FUN_0007e8e0(param_3);
  }
  return 0xffffffff;
}

