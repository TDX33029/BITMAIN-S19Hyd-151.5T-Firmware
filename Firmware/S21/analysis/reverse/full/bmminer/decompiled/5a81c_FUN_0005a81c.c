// FUN_0005a81c @ 0005a81c  size=228  callers=2
// program: bmminer


void FUN_0005a81c(void)

{
  int iVar1;
  char local_2008 [16];
  uint local_1ff8;
  undefined1 local_1ff4;
  
  if (4 < DAT_000be63c) {
    builtin_strncpy(local_2008,"[DEBUG] Clear ct",0x10);
    local_1ff8._0_1_ = 'x';
    local_1ff8._1_1_ = 't';
    local_1ff8._2_1_ = '.';
    local_1ff8._3_1_ = '\n';
    local_1ff4 = 0;
    FUN_0004948c(4,local_2008,0);
  }
  iVar1 = DAT_00944b84;
  if ((DAT_00944b84 == 0) || (*(int *)(DAT_00944b84 + 4) == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2008,"Handle is NULL.\n",0x10);
      local_1ff8 = local_1ff8 & 0xffffff00;
      FUN_0004948c(3,local_2008,0);
      return;
    }
  }
  else {
    *(undefined4 *)(DAT_00944b84 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  return;
}

