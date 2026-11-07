// FUN_00059f94 @ 00059f94  size=196  callers=4
// program: bmminer


undefined4 FUN_00059f94(void)

{
  undefined4 uVar1;
  char local_2008 [16];
  uint local_1ff8;
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2008,"[DEBUG] Get stat",0x10);
    local_1ff8._0_1_ = 's';
    local_1ff8._1_1_ = '.';
    local_1ff8._2_1_ = '\n';
    local_1ff8._3_1_ = '\0';
    FUN_0004948c(4,local_2008,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2008,"Handle is NULL.\n",0x10);
      local_1ff8 = local_1ff8 & 0xffffff00;
      FUN_0004948c(3,local_2008,0);
      return 0;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(DAT_00944b84 + 4) + 0x20))();
  }
  return uVar1;
}

