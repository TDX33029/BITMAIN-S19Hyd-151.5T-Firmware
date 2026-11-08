// FUN_00eb8eb4 @ 00eb8eb4 size=212 calls_out=2 calls_in=0
// strings: 

void FUN_00eb8eb4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4,int param_5
                 )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x2000;
  if (param_4 == '\0' || param_5 != 0) {
    uVar3 = 0;
  }
  iVar1 = 1;
  uVar2 = 0;
  if (param_4 != '\0' && param_5 == 0) {
    iVar1 = FUN_01298504(uVar3,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar3);
    }
    uVar2 = uVar3;
  }
  uVar3 = 0x20 - LZCOUNT(uVar2 >> 10);
  param_1[0x10] = param_2;
  if (6 < uVar3) {
    uVar3 = 7;
  }
  param_1[0x11] = param_3;
  param_1[0x12] = iVar1;
  param_1[0x13] = 0;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3 << 2 | 1;
  *param_1 = 3;
  param_1[1] = 0;
  *(char *)((int)param_1 + 0x6a) = param_4;
  param_1[0x16] = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  *(char *)(param_1 + 0x1a) = (char)param_5;
  return;
}

