// FUN_014a6120 @ 014a6120 size=412 calls_out=6 calls_in=1
// strings: BUG: response serialization failedAPI

void FUN_014a6120(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r5;
  undefined4 uVar4;
  int iVar5;
  int unaff_r9;
  int local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  
  if (*param_4 == -0x80000000) {
    local_68 = -0x80000000;
    local_50 = 0x80000000;
  }
  else {
    unaff_r9 = param_4[4];
    if (unaff_r9 < 0) {
      uVar3 = 0;
LAB_014a615c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,unaff_r9);
    }
    iVar5 = param_4[3];
    if (unaff_r9 == 0) {
      unaff_r5 = 1;
      local_68 = 0;
    }
    else {
      uVar3 = 1;
      unaff_r5 = FUN_01298504(unaff_r9,1);
      if (unaff_r5 == 0) goto LAB_014a615c;
      local_68 = unaff_r9;
    }
    FUN_01bed4e2(unaff_r5,iVar5,unaff_r9);
    iVar5 = param_4[2];
    FUN_0196aa8c(&local_40,iVar5);
    if (local_40 == 0x80000000) {
      local_40 = local_3c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: response serialization failedAPI",0x22,&local_40,&DAT_01cf9524,
                   &DAT_01cf9514);
    }
    local_50 = local_40;
    local_4c = local_3c;
    local_48 = uStack_38;
    puVar2 = (undefined4 *)((uint)&local_50 | 4);
    for (; uVar1 = local_48, iVar5 != 0; iVar5 = iVar5 + -1) {
      local_40 = local_40 & 0xffffff00;
      if (local_48 == local_50) {
        FUN_01969b6c(&local_50);
      }
      *(undefined1 *)(local_4c + uVar1 * 0x18) = 0;
      local_48 = uVar1 + 1;
    }
    local_60 = *puVar2;
    local_5c = puVar2[1];
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[7] = local_50;
  *(undefined1 *)(param_1 + 6) = 4;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = local_68;
  param_1[3] = unaff_r5;
  param_1[4] = unaff_r9;
  *(undefined1 *)(param_1 + 0xf) = 2;
  param_1[8] = local_60;
  param_1[9] = local_5c;
  param_1[10] = uStack_58;
  param_1[0xb] = uStack_54;
  return;
}

