// FUN_0003f0a4 @ 0003f0a4  size=280  callers=0
// program: bmminer


undefined4 FUN_0003f0a4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_810 [16];
  uint local_800;
  char acStack_7fc [2032];
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_810,"[DEBUG] Check if",0x10);
    local_800._0_1_ = ' ';
    local_800._1_1_ = 'a';
    local_800._2_1_ = 'l';
    local_800._3_1_ = 'l';
    builtin_strncpy(acStack_7fc," chain pattern test done.\n",0x1b);
    FUN_00032218(4,local_810,0);
  }
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_810,"Handle is NULL.\n",0x10);
      local_800 = local_800 & 0xffffff00;
      FUN_00032218(3,local_810,0);
      return 1;
    }
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_000201d8(iVar3);
      iVar2 = iVar3 + 2;
      iVar3 = iVar3 + 1;
      if ((iVar1 != 0) && (*(int *)(DAT_0050748c + iVar2 * 4) != 2)) {
        return 0;
      }
    } while (iVar3 != 4);
  }
  return 1;
}

