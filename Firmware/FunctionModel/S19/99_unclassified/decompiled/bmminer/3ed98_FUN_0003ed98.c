// FUN_0003ed98 @ 0003ed98  size=228  callers=2
// program: bmminer


void FUN_0003ed98(void)

{
  int iVar1;
  char local_808 [16];
  uint local_7f8;
  undefined1 local_7f4;
  
  if (4 < DAT_00087bbc) {
    builtin_strncpy(local_808,"[DEBUG] Clear ct",0x10);
    local_7f8._0_1_ = 'x';
    local_7f8._1_1_ = 't';
    local_7f8._2_1_ = '.';
    local_7f8._3_1_ = '\n';
    local_7f4 = 0;
    FUN_00032218(4,local_808,0);
  }
  iVar1 = DAT_0050748c;
  if ((DAT_0050748c == 0) || (*(int *)(DAT_0050748c + 4) == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_808,"Handle is NULL.\n",0x10);
      local_7f8 = local_7f8 & 0xffffff00;
      FUN_00032218(3,local_808,0);
      return;
    }
  }
  else {
    *(undefined4 *)(DAT_0050748c + 0x18) = 0;
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

