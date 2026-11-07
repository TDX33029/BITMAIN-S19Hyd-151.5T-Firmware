// FUN_00018510 @ 00018510  size=216  callers=1
// program: bmminer


void FUN_00018510(void)

{
  char local_810 [16];
  uint local_800;
  char acStack_7fc [2032];
  
  if (DAT_00089054 != 0) {
    if (DAT_00087bbc < 4) {
      DAT_00089054 = 0;
      DAT_000872fc = 0;
    }
    else {
      builtin_strncpy(local_810,"uninit_temp_info",0x10);
      local_800 = local_800 & 0xffffff00;
      FUN_00032218(3,local_810,0);
      DAT_000872fc = 0;
      DAT_00089054 = 0;
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_810,"do not read temp",0x10);
        local_800._0_1_ = ' ';
        local_800._1_1_ = 'a';
        local_800._2_1_ = 'n';
        local_800._3_1_ = 'y';
        builtin_strncpy(acStack_7fc,"more...",8);
        FUN_00032218(3,local_810,0);
        return;
      }
    }
  }
  return;
}

