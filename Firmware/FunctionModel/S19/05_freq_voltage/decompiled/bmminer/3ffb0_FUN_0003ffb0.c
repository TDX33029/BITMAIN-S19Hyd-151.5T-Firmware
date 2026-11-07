// FUN_0003ffb0 @ 0003ffb0  size=312  callers=0
// program: bmminer


undefined4 FUN_0003ffb0(void)

{
  undefined4 uVar1;
  char local_818 [32];
  uint local_7f8;
  char acStack_7f4 [2016];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_818,"[DEBUG] Freq tuning basic init.\n",0x20);
    local_7f8 = local_7f8 & 0xffffff00;
    FUN_00032218(4,local_818,0);
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_818,"[DEBUG] Allocate memory for freq",0x20);
      local_7f8._0_1_ = ' ';
      local_7f8._1_1_ = 't';
      local_7f8._2_1_ = 'u';
      local_7f8._3_1_ = 'n';
      builtin_strncpy(acStack_7f4,"ing basic.\n",0xc);
      FUN_00032218(4,local_818,0);
    }
  }
  if ((DAT_00507490 == (void *)0x0) && (DAT_00507490 = calloc(0x34,1), DAT_00507490 == (void *)0x0))
  {
    FUN_0003a9e0(0xd,0xff);
    if (DAT_00087bbc < 4) {
      uVar1 = 0xffffffff;
    }
    else {
      builtin_strncpy(local_818,"Fail to allocate memory for freq",0x20);
      local_7f8._0_1_ = ' ';
      local_7f8._1_1_ = 't';
      local_7f8._2_1_ = 'u';
      local_7f8._3_1_ = 'n';
      builtin_strncpy(acStack_7f4,"ing basic context.\n",0x14);
      FUN_00032218(3,local_818,0);
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

