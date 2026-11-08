// FUN_016f4508 @ 016f4508 size=212 calls_out=2 calls_in=3
// strings: Scriptcfsclc

void FUN_016f4508(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = 0;
  uVar8 = 7;
  do {
    uVar7 = uVar4 + (uVar8 >> 1);
    iVar1 = uVar7 * 0x10;
    uVar5 = *(uint *)(&UNK_01d16a6c + iVar1);
    uVar6 = param_3;
    if (uVar5 < param_3) {
      uVar6 = uVar5;
    }
    iVar1 = FUN_01bed842(*(undefined4 *)(&UNK_01d16a68 + iVar1),param_2,uVar6);
    uVar8 = uVar8 - (uVar8 >> 1);
    if (iVar1 == 0) {
      iVar1 = uVar5 - param_3;
    }
    if (iVar1 < 1) {
      uVar4 = uVar7;
    }
  } while (1 < uVar8);
  uVar6 = *(uint *)(&UNK_01d16a6c + uVar4 * 0x10);
  uVar8 = param_3;
  if (uVar6 < param_3) {
    uVar8 = uVar6;
  }
  iVar1 = FUN_01bed842(*(undefined4 *)(&UNK_01d16a68 + uVar4 * 0x10),param_2,uVar8);
  if (iVar1 == 0) {
    iVar1 = uVar6 - param_3;
  }
  uVar2 = 0;
  uVar3 = extraout_r3;
  if (iVar1 == 0) {
    if (6 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(7,7,&DAT_01d16ad8);
    }
    uVar2 = *(undefined4 *)(&DAT_01d16a70 + uVar4 * 0x10);
    uVar3 = *(undefined4 *)(&DAT_01d16a74 + uVar4 * 0x10);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *param_1 = 0;
  return;
}

