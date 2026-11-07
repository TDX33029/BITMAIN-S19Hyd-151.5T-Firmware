// FUN_0005bd0c @ 0005bd0c  size=188  callers=0
// program: bmminer


void FUN_0005bd0c(void)

{
  char local_2008 [32];
  uint local_1fe8;
  char acStack_1fe4 [8156];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2008,"[DEBUG] Freq tuning basic exit.\n",0x20);
    local_1fe8 = local_1fe8 & 0xffffff00;
    FUN_0004948c(4,local_2008,0);
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2008,"[DEBUG] Free memory for freq tun",0x20);
      local_1fe8._0_1_ = 'i';
      local_1fe8._1_1_ = 'n';
      local_1fe8._2_1_ = 'g';
      local_1fe8._3_1_ = ' ';
      builtin_strncpy(acStack_1fe4,"basic.\n",8);
      FUN_0004948c(4,local_2008,0);
    }
  }
  if (DAT_00944b88 != (void *)0x0) {
    free(DAT_00944b88);
    DAT_00944b88 = (void *)0x0;
  }
  return;
}

