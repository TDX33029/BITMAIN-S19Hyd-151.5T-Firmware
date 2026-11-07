// FUN_00040e04 @ 00040e04  size=356  callers=1
// program: bmminer


undefined4 FUN_00040e04(int param_1)

{
  uint uVar1;
  int param5;
  int param4;
  uint param4_00;
  uint param5_00;
  char acStack_818 [2048];
  
  uVar1 = FUN_00040bc0(param_1,DAT_00507494 + 1);
  param5 = FUN_00040c6c(param_1,DAT_00507494 + 1);
  param4 = FUN_00040d38(param_1,DAT_00507494 + 1);
  param4_00 = FUN_00040d38(param_1,DAT_00507494 + 0x405);
  param5_00 = *(uint *)(*DAT_00507494 + 0x14);
  if (uVar1 < param5_00) {
    uVar1 = *(uint *)(*DAT_00507494 + 0x1c);
    if ((uint)(param4 - param5) < uVar1) {
      if (param4_00 <= param5_00) {
        return 0;
      }
      if (3 < DAT_00087bbc) {
        snprintf(acStack_818,0x800,
                 "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n",param_1
                 ,param4_00,param5_00);
        goto LAB_00040f4c;
      }
    }
    else if (3 < DAT_00087bbc) {
      snprintf(acStack_818,0x800,
               "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n"
               ,param_1,param4,param5,param4 - param5,uVar1);
LAB_00040f4c:
      FUN_00032218(3,acStack_818,0);
      return 1;
    }
  }
  else if (3 < DAT_00087bbc) {
    snprintf(acStack_818,0x800,"chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n",
             param_1,uVar1,param5_00);
    goto LAB_00040f4c;
  }
  return 1;
}

