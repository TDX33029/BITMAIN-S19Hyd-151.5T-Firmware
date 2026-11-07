// FUN_019269f4 @ 019269f4 size=436 calls_out=5 calls_in=6
// strings: 

void FUN_019269f4(int *param_1,undefined1 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_34;
  int local_30;
  undefined1 *local_2c;
  int local_28;
  
  uVar2 = param_6 + param_4;
  if (uVar2 < 0x80) {
    iVar3 = uVar2 + 2;
    local_2c = (undefined1 *)FUN_01298504(iVar3,1);
    if (local_2c == (undefined1 *)0x0) {
      uVar1 = 1;
      goto LAB_01926acc;
    }
    local_2c[1] = (char)uVar2;
    *local_2c = param_2;
    local_28 = 2;
    local_30 = iVar3;
    FUN_01ac6cbc(&local_30,param_3,param_4);
    FUN_01ac6cbc(&local_30,param_5,param_6);
  }
  else {
    iVar4 = 0;
    local_34 = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
    while (*(char *)((int)&local_34 + iVar4) == '\0') {
      iVar4 = iVar4 + 1;
      if (iVar4 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533af3,0x31,&DAT_01d25500);
      }
    }
    uVar1 = 0;
    iVar3 = (uVar2 - iVar4) + 6;
    if (iVar3 < 0) {
LAB_01926acc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar1,iVar3);
    }
    if (iVar3 == 0) {
      local_28 = 0;
      local_2c = &DAT_00000001;
      local_30 = 0;
      FUN_006666a0(&local_30);
    }
    else {
      uVar1 = 1;
      local_2c = (undefined1 *)FUN_01298504(iVar3,1);
      if (local_2c == (undefined1 *)0x0) goto LAB_01926acc;
      local_30 = iVar3;
    }
    *local_2c = param_2;
    local_28 = 1;
    if (local_30 == 1) {
      FUN_006666a0(&local_30);
    }
    local_2c[1] = -0x7c - (char)iVar4;
    local_28 = 2;
    FUN_01ac6cbc(&local_30,(int)&local_34 + iVar4,4 - iVar4);
    FUN_01ac6cbc(&local_30,param_3,param_4);
    FUN_01ac6cbc(&local_30,param_5,param_6);
  }
  *param_1 = local_30;
  param_1[1] = (int)local_2c;
  param_1[2] = local_28;
  return;
}

