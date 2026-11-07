// FUN_0005ab28 @ 0005ab28  size=280  callers=0
// program: bmminer


undefined4 FUN_0005ab28(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_2010 [16];
  uint local_2000;
  char acStack_1ffc [8176];
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2010,"[DEBUG] Check if",0x10);
    local_2000._0_1_ = ' ';
    local_2000._1_1_ = 'a';
    local_2000._2_1_ = 'l';
    local_2000._3_1_ = 'l';
    builtin_strncpy(acStack_1ffc," chain pattern test done.\n",0x1b);
    FUN_0004948c(4,local_2010,0);
  }
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"Handle is NULL.\n",0x10);
      local_2000 = local_2000 & 0xffffff00;
      FUN_0004948c(3,local_2010,0);
      return 1;
    }
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_0002a6f0(iVar3);
      iVar2 = iVar3 + 2;
      iVar3 = iVar3 + 1;
      if ((iVar1 != 0) && (*(int *)(DAT_00944b84 + iVar2 * 4) != 2)) {
        return 0;
      }
    } while (iVar3 != 4);
  }
  return 1;
}

