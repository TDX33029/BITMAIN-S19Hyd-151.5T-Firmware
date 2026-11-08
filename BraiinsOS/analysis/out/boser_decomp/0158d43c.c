// FUN_0158d43c @ 0158d43c size=680 calls_out=10 calls_in=0
// strings: 

void FUN_0158d43c(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int local_ac;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_3 == '\x05') {
    uVar6 = *(uint *)(param_3 + 0xc);
    uVar10 = 0;
    iVar11 = uVar6 * 0xc;
    if (0xaaaaaaa < uVar6) {
LAB_0158d47c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,iVar11);
    }
    local_ac = 4;
    iVar8 = 0;
    local_9c = 4;
    local_98 = 0;
    if (iVar11 != 0) {
      uVar10 = 4;
      local_9c = FUN_01298504(iVar11,4);
      local_98 = uVar6;
      if (local_9c == 0) goto LAB_0158d47c;
    }
    local_90 = 0;
    local_84 = 0;
    local_88 = 4;
    local_8c = 0;
    local_94 = local_9c;
    if (*(int *)(param_2 + 8) != 0) {
      uVar10 = *(undefined4 *)(param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 8);
      puVar9 = (undefined4 *)(*(int *)(param_2 + 4) + 8);
      iVar11 = *(int *)(param_2 + 8) << 5;
      iVar8 = 0;
      uVar6 = 0;
      local_ac = 4;
      do {
        uVar5 = puVar9[-1];
        uVar7 = *puVar9;
        iVar2 = FUN_0196b2cc(uVar10,uVar4,uVar5,uVar7);
        if (iVar2 != 0) {
          local_40 = 0x80000000;
          local_3c = uVar5;
          local_38 = uVar7;
          local_34 = param_4;
          FUN_006666fc(&local_80,uVar5,uVar7);
          if (uVar6 == local_98) {
            FUN_019abd3c(&local_98);
            local_9c = local_94;
          }
          puVar3 = (undefined4 *)(local_9c + uVar6 * 0xc);
          uVar6 = uVar6 + 1;
          *puVar3 = local_80;
          puVar3[1] = local_7c;
          puVar3[2] = local_78;
          local_90 = uVar6;
          FUN_015737d4(&local_80,puVar9 + 1,iVar2,&local_40,param_5,param_6);
          iVar8 = local_84;
          if (local_84 == local_8c) {
            FUN_0155ab78(&local_8c);
          }
          local_ac = local_88;
          puVar3 = (undefined4 *)(local_88 + iVar8 * 0x40);
          *puVar3 = local_80;
          puVar3[1] = local_7c;
          puVar3[2] = local_78;
          puVar3[3] = local_74;
          puVar3[4] = local_70;
          puVar3[5] = local_6c;
          puVar3[6] = local_68;
          puVar3[7] = uStack_64;
          puVar3[8] = uStack_60;
          puVar3[9] = uStack_5c;
          puVar3[10] = local_58;
          puVar3[0xb] = uStack_54;
          puVar3[0xc] = uStack_50;
          puVar3[0xd] = uStack_4c;
          puVar3[0xe] = uStack_48;
          puVar3[0xf] = uStack_44;
          iVar8 = iVar8 + 1;
          local_84 = iVar8;
        }
        puVar9 = puVar9 + 8;
        iVar11 = iVar11 + -0x20;
      } while (iVar11 != 0);
    }
    iVar11 = iVar8 << 6;
    iVar2 = local_ac;
    do {
      if (iVar11 == 0) {
        local_70 = 0;
        local_80 = 0x80000000;
        local_7c = local_8c;
        local_78 = local_ac;
        local_74 = iVar8;
        goto LAB_0158d6a4;
      }
      pcVar1 = (char *)(iVar2 + 0x3c);
      iVar11 = iVar11 + -0x40;
      iVar2 = iVar2 + 0x40;
    } while (*pcVar1 != '\0');
    local_80 = 0;
    local_68 = 0;
    local_78 = 0;
    local_7c = 4;
    local_74 = local_8c;
    local_70 = local_ac;
    local_6c = iVar8;
LAB_0158d6a4:
    FUN_01538264(&local_40,&local_98);
    uVar10 = FUN_01531708(&local_40);
    FUN_0155ff10(&local_80,uVar10);
    *param_1 = local_80;
    param_1[1] = local_7c;
    param_1[2] = local_78;
    param_1[3] = local_74;
    param_1[4] = local_70;
    param_1[5] = local_6c;
    param_1[6] = local_68;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

