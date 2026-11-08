// FUN_0005bbd4 @ 0005bbd4  size=312  callers=0
// program: bmminer


undefined4 FUN_0005bbd4(void)

{
  undefined4 uVar1;
  char local_2018 [32];
  uint local_1ff8;
  char acStack_1ff4 [8160];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2018,"[DEBUG] Freq tuning basic init.\n",0x20);
    local_1ff8 = local_1ff8 & 0xffffff00;
    FUN_0004948c(4,local_2018,0);
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2018,"[DEBUG] Allocate memory for freq",0x20);
      local_1ff8._0_1_ = ' ';
      local_1ff8._1_1_ = 't';
      local_1ff8._2_1_ = 'u';
      local_1ff8._3_1_ = 'n';
      builtin_strncpy(acStack_1ff4,"ing basic.\n",0xc);
      FUN_0004948c(4,local_2018,0);
    }
  }
  if ((DAT_00944b88 == (void *)0x0) && (DAT_00944b88 = calloc(0x34,1), DAT_00944b88 == (void *)0x0))
  {
    FUN_00056e88(0xd,0xff);
    if (DAT_000be63c < 4) {
      uVar1 = 0xffffffff;
    }
    else {
      builtin_strncpy(local_2018,"Fail to allocate memory for freq",0x20);
      local_1ff8._0_1_ = ' ';
      local_1ff8._1_1_ = 't';
      local_1ff8._2_1_ = 'u';
      local_1ff8._3_1_ = 'n';
      builtin_strncpy(acStack_1ff4,"ing basic context.\n",0x14);
      FUN_0004948c(3,local_2018,0);
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

