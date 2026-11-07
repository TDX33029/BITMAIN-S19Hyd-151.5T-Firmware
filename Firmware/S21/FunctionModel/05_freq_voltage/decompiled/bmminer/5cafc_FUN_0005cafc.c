// FUN_0005cafc @ 0005cafc  size=368  callers=1
// program: bmminer


undefined4 FUN_0005cafc(int param_1)

{
  uint uVar1;
  int param5;
  int param4;
  uint param4_00;
  uint param5_00;
  char acStack_2018 [8192];
  
  uVar1 = FUN_0005c8b8(param_1,DAT_00944b8c + 1);
  param5 = FUN_0005c964(param_1,DAT_00944b8c + 1);
  param4 = FUN_0005ca30(param_1,DAT_00944b8c + 1);
  param4_00 = FUN_0005ca30(param_1,DAT_00944b8c + 0x405);
  param5_00 = *(uint *)(*DAT_00944b8c + 0x14);
  if (uVar1 < param5_00) {
    uVar1 = *(uint *)(*DAT_00944b8c + 0x1c);
    if ((uint)(param4 - param5) < uVar1) {
      if (param4_00 <= param5_00) {
        return 0;
      }
      if (3 < DAT_000be63c) {
        snprintf(acStack_2018,0x2000,
                 "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n",param_1
                 ,param4_00,param5_00);
        goto LAB_0005cc4c;
      }
    }
    else if (3 < DAT_000be63c) {
      snprintf(acStack_2018,0x2000,
               "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n"
               ,param_1,param4,param5,param4 - param5,uVar1);
LAB_0005cc4c:
      FUN_0004948c(3,acStack_2018,0);
      return 1;
    }
  }
  else if (3 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n"
             ,param_1,uVar1,param5_00);
    goto LAB_0005cc4c;
  }
  return 1;
}

