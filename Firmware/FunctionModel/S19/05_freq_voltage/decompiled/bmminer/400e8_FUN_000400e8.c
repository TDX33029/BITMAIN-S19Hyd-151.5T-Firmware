// FUN_000400e8 @ 000400e8  size=188  callers=0
// program: bmminer


void FUN_000400e8(void)

{
  char local_808 [32];
  uint local_7e8;
  char acStack_7e4 [2012];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_808,"[DEBUG] Freq tuning basic exit.\n",0x20);
    local_7e8 = local_7e8 & 0xffffff00;
    FUN_00032218(4,local_808,0);
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_808,"[DEBUG] Free memory for freq tun",0x20);
      local_7e8._0_1_ = 'i';
      local_7e8._1_1_ = 'n';
      local_7e8._2_1_ = 'g';
      local_7e8._3_1_ = ' ';
      builtin_strncpy(acStack_7e4,"basic.\n",8);
      FUN_00032218(4,local_808,0);
    }
  }
  if (DAT_00507490 != (void *)0x0) {
    free(DAT_00507490);
    DAT_00507490 = (void *)0x0;
  }
  return;
}

