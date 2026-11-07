// FUN_00eaa900 @ 00eaa900 size=652 calls_out=3 calls_in=1
// strings: 

void FUN_00eaa900(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_88;
  undefined4 *local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_30;
  undefined4 *puStack_2c;
  uint uStack_28;
  
  FUN_006666fc(&local_a8,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_006666fc(&local_98,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar3 = 0;
  iVar6 = uVar1 * 0x24;
  if (0x38e38e3 < uVar1) {
LAB_00eaa960:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar6);
  }
  if (iVar6 == 0) {
    local_84 = (undefined4 *)&SUB_00000004;
    local_88 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x1c);
    uVar3 = 4;
    local_84 = (undefined4 *)FUN_01298504(iVar6,4);
    if (local_84 == (undefined4 *)0x0) goto LAB_00eaa960;
    local_88 = uVar1;
    if (uVar1 != 0) {
      uVar7 = 0;
      puVar5 = local_84;
      do {
        if (iVar6 == 0) break;
        FUN_006666fc(&local_50,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
        FUN_006666fc(&local_40,*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14));
        FUN_006666fc(&local_30,*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar8 + 0x20));
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + 0x24;
        iVar6 = iVar6 + -0x24;
        local_78 = local_50;
        uStack_74 = uStack_4c;
        uStack_70 = uStack_48;
        *puVar5 = local_50;
        puVar5[1] = uStack_4c;
        puVar5[2] = uStack_48;
        puVar5[3] = local_40;
        puVar5[4] = uStack_3c;
        puVar5[5] = uStack_38;
        puVar5[6] = local_30;
        puVar5[7] = puStack_2c;
        puVar5[8] = uStack_28;
        puVar5 = puVar5 + 9;
      } while (uVar1 != uVar7);
    }
  }
  uVar3 = 0;
  local_30 = local_88;
  puStack_2c = local_84;
  uVar4 = *(uint *)(param_2 + 0x2c);
  uVar7 = uVar4 * 8;
  local_80 = uVar1;
  uStack_28 = uVar1;
  if ((0x1fffffff < uVar4) || (0x7ffffffc < uVar7)) {
LAB_00eaab3c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,uVar7);
  }
  if (uVar7 == 0) {
    uVar1 = 0;
    iVar6 = 4;
  }
  else {
    puVar5 = *(undefined4 **)(param_2 + 0x28);
    uVar3 = 4;
    iVar6 = FUN_01298504(uVar7,4);
    if (iVar6 == 0) goto LAB_00eaab3c;
    if (uVar4 != 0) {
      uVar1 = 0;
      do {
        if (uVar7 == 0) break;
        uVar3 = puVar5[1];
        puVar2 = (undefined4 *)(iVar6 + uVar1 * 8);
        *puVar2 = *puVar5;
        uVar1 = uVar1 + 1;
        uVar7 = uVar7 - 8;
        puVar5 = puVar5 + 2;
        puVar2[1] = uVar3;
      } while (uVar4 != uVar1);
    }
    uVar1 = uVar4;
  }
  param_1[6] = local_30;
  param_1[7] = puStack_2c;
  param_1[8] = uStack_28;
  *param_1 = local_a8;
  param_1[1] = uStack_a4;
  param_1[2] = uStack_a0;
  param_1[3] = local_98;
  param_1[4] = uStack_94;
  param_1[5] = uStack_90;
  param_1[9] = uVar1;
  param_1[10] = iVar6;
  param_1[0xb] = uVar4;
  return;
}

