// FUN_000193b0 @ 000193b0  size=192  callers=1
// program: bmminer


void FUN_000193b0(void)

{
  char local_2010 [16];
  uint local_2000;
  char acStack_1ffc [8176];
  
  if (DAT_000bfb74 != 0) {
    if (DAT_000be63c < 4) {
      DAT_000bfb74 = 0;
    }
    else {
      builtin_strncpy(local_2010,"uninit_temp_info",0x10);
      local_2000 = local_2000 & 0xffffff00;
      FUN_0004948c(3,local_2010,0);
      DAT_000bfb74 = 0;
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2010,"do not read temp",0x10);
        local_2000._0_1_ = ' ';
        local_2000._1_1_ = 'a';
        local_2000._2_1_ = 'n';
        local_2000._3_1_ = 'y';
        builtin_strncpy(acStack_1ffc,"more...",8);
        FUN_0004948c(3,local_2010,0);
        return;
      }
    }
  }
  return;
}

