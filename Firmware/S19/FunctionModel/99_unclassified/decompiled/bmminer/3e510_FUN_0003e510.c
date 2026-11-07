// FUN_0003e510 @ 0003e510  size=196  callers=4
// program: bmminer


undefined4 FUN_0003e510(void)

{
  undefined4 uVar1;
  char local_808 [16];
  uint local_7f8;
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_808,"[DEBUG] Get stat",0x10);
    local_7f8._0_1_ = 's';
    local_7f8._1_1_ = '.';
    local_7f8._2_1_ = '\n';
    local_7f8._3_1_ = '\0';
    FUN_00032218(4,local_808,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_808,"Handle is NULL.\n",0x10);
      local_7f8 = local_7f8 & 0xffffff00;
      FUN_00032218(3,local_808,0);
      return 0;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(DAT_0050748c + 4) + 0x20))();
  }
  return uVar1;
}

