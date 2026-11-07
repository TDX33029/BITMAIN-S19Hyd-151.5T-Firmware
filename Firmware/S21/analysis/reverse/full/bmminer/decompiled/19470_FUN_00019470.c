// FUN_00019470 @ 00019470  size=208  callers=1
// program: bmminer


void FUN_00019470(void)

{
  char local_2010 [24];
  undefined4 local_1ff8;
  char acStack_1ff4 [8168];
  
  if (DAT_000bfb94 != 0) {
    if (DAT_000be63c < 4) {
      DAT_000bfb94 = 0;
    }
    else {
      builtin_strncpy(local_2010,"uninit_asic_temp_vol_inf",0x18);
      local_1ff8 = CONCAT22(local_1ff8._2_2_,0x6f);
      FUN_0004948c(3,local_2010,0);
      DAT_000bfb94 = 0;
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"do not read asic_temp_vo",0x18);
        local_1ff8._0_1_ = 'l';
        local_1ff8._1_1_ = ' ';
        local_1ff8._2_1_ = 'a';
        local_1ff8._3_1_ = 'n';
        builtin_strncpy(acStack_1ff4,"ymore...",9);
        FUN_0004948c(3,local_2010,0);
        return;
      }
    }
  }
  return;
}

