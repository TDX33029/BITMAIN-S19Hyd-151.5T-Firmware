// FUN_00ab7068 @ 00ab7068 size=540 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ab7068(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  int *local_9c;
  int local_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  uVar9 = param_2[3];
  iVar1 = 0;
  if (uVar9 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *param_2;
    uVar8 = param_2[2];
    uVar5 = uVar8 - uVar6;
    if (uVar8 < uVar6) {
      uVar5 = uVar8;
    }
    if (uVar6 - uVar5 < uVar9) {
      iVar1 = uVar9 - (uVar6 - uVar5);
    }
    else {
      uVar6 = uVar5 + uVar9;
    }
  }
  local_a8 = param_2[1];
  local_a4 = iVar1 * 0x2c + local_a8;
  local_ac = uVar6 * 0x2c + local_a8;
  local_b0 = uVar5 * 0x2c + local_a8;
  FUN_00b1467c(&local_90,&local_b0);
  if (local_90 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    iVar1 = -0x45d1745d;
    uVar5 = (local_a4 - local_a8 >> 2) * -0x45d1745d +
            ((uint)(local_ac - local_b0) >> 2) * -0x45d1745d;
    uVar9 = uVar5;
    if (uVar5 < 4) {
      uVar9 = 3;
    }
    if (0x2e8ba2d < uVar5) {
      uVar7 = 0;
LAB_00ab7150:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,iVar1);
    }
    iVar2 = uVar9 + 1;
    iVar1 = iVar2 * 0x2c;
    if (iVar1 == 0) {
      iVar2 = 0;
      piVar3 = (int *)&SUB_00000004;
    }
    else {
      uVar7 = 4;
      piVar3 = (int *)FUN_01298504(iVar1,4);
      if (piVar3 == (int *)0x0) goto LAB_00ab7150;
    }
    *piVar3 = local_90;
    piVar3[1] = iStack_8c;
    piVar3[2] = iStack_88;
    piVar3[3] = iStack_84;
    piVar3[4] = iStack_80;
    iVar1 = 0x2c;
    piVar3[5] = local_7c;
    piVar3[6] = iStack_78;
    piVar3[7] = iStack_74;
    piVar3[8] = iStack_70;
    piVar3[9] = iStack_6c;
    piVar3[10] = iStack_68;
    local_98 = 1;
    local_60 = local_b0;
    iStack_5c = local_ac;
    uStack_58 = local_a8;
    iStack_54 = local_a4;
    local_a0 = iVar2;
    local_9c = piVar3;
    while (iVar2 = local_98, FUN_00b1467c(&local_50,&local_60), local_50 != -0x80000000) {
      if (iVar2 == local_a0) {
        FUN_0132b898(&local_a0,iVar2,
                     (iStack_54 - uStack_58 >> 2) * -0x45d1745d +
                     ((uint)(iStack_5c - local_60) >> 2) * -0x45d1745d + 1,4,0x2c);
        piVar3 = local_9c;
      }
      piVar4 = (int *)((int)piVar3 + iVar1);
      local_98 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
      *piVar4 = local_50;
      piVar4[1] = iStack_4c;
      piVar4[2] = iStack_48;
      piVar4[3] = iStack_44;
      piVar4[4] = iStack_40;
      piVar4[5] = local_3c;
      piVar4[6] = iStack_38;
      piVar4[7] = iStack_34;
      piVar4[8] = iStack_30;
      piVar4[9] = iStack_2c;
      piVar4[10] = iStack_28;
    }
    *param_1 = local_a0;
    param_1[1] = (int)local_9c;
    param_1[2] = local_98;
  }
  return;
}

