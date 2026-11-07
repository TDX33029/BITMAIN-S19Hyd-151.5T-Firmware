// FUN_0158ee28 @ 0158ee28 size=776 calls_out=10 calls_in=0
// strings: 

void FUN_0158ee28(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
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
    uVar6 = *(undefined4 *)(param_3 + 4);
    uVar10 = *(undefined4 *)(param_3 + 8);
    iVar2 = FUN_0196b2cc(uVar6,uVar10,*(undefined4 *)(param_2 + 0x10),
                         *(undefined4 *)(param_2 + 0x14));
    if ((iVar2 == 0) ||
       (iVar2 = FUN_0196b2cc(uVar6,uVar10,*(undefined4 *)(param_2 + 0x1c),
                             *(undefined4 *)(param_2 + 0x20)), iVar2 == 0)) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    else {
      uVar8 = 0;
      uVar7 = *(uint *)(param_3 + 0xc);
      iVar2 = uVar7 * 0xc;
      if (0xaaaaaaa < uVar7) {
LAB_0158eea8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,iVar2);
      }
      local_ac = 4;
      iVar9 = 0;
      local_9c = 4;
      local_98 = 0;
      if (iVar2 != 0) {
        uVar8 = 4;
        local_9c = FUN_01298504(iVar2,4);
        local_98 = uVar7;
        if (local_9c == 0) goto LAB_0158eea8;
      }
      local_90 = 0;
      local_84 = 0;
      local_88 = 4;
      local_8c = 0;
      local_94 = local_9c;
      if (*(int *)(param_2 + 8) != 0) {
        puVar12 = (undefined4 *)(*(int *)(param_2 + 4) + 8);
        iVar2 = *(int *)(param_2 + 8) << 5;
        iVar9 = 0;
        local_ac = 4;
        uVar7 = 0;
        do {
          uVar8 = puVar12[-1];
          uVar5 = *puVar12;
          iVar3 = FUN_0196b2cc(uVar6,uVar10,uVar8,uVar5);
          uVar11 = uVar7;
          if (iVar3 != 0) {
            local_40 = 0x80000000;
            local_3c = uVar8;
            local_38 = uVar5;
            local_34 = param_4;
            FUN_006666fc(&local_80,uVar8,uVar5);
            if (uVar7 == local_98) {
              FUN_019abd3c(&local_98);
              local_9c = local_94;
            }
            uVar11 = uVar7 + 1;
            puVar4 = (undefined4 *)(local_9c + uVar7 * 0xc);
            *puVar4 = local_80;
            puVar4[1] = local_7c;
            puVar4[2] = local_78;
            local_90 = uVar11;
            FUN_015737d4(&local_80,puVar12 + 1,iVar3,&local_40,param_5,param_6);
            iVar9 = local_84;
            if (local_84 == local_8c) {
              FUN_0155ab78(&local_8c);
            }
            local_ac = local_88;
            puVar4 = (undefined4 *)(local_88 + iVar9 * 0x40);
            iVar9 = iVar9 + 1;
            *puVar4 = local_80;
            puVar4[1] = local_7c;
            puVar4[2] = local_78;
            puVar4[3] = local_74;
            puVar4[4] = local_70;
            puVar4[5] = local_6c;
            puVar4[6] = local_68;
            puVar4[7] = uStack_64;
            puVar4[8] = uStack_60;
            puVar4[9] = uStack_5c;
            puVar4[10] = local_58;
            puVar4[0xb] = uStack_54;
            puVar4[0xc] = uStack_50;
            puVar4[0xd] = uStack_4c;
            puVar4[0xe] = uStack_48;
            puVar4[0xf] = uStack_44;
            local_84 = iVar9;
          }
          puVar12 = puVar12 + 8;
          iVar2 = iVar2 + -0x20;
          uVar7 = uVar11;
        } while (iVar2 != 0);
      }
      iVar2 = iVar9 << 6;
      iVar3 = local_ac;
      do {
        if (iVar2 == 0) {
          local_70 = 0;
          local_80 = 0x80000000;
          local_7c = local_8c;
          local_78 = local_ac;
          local_74 = iVar9;
          goto LAB_0158f0f0;
        }
        pcVar1 = (char *)(iVar3 + 0x3c);
        iVar2 = iVar2 + -0x40;
        iVar3 = iVar3 + 0x40;
      } while (*pcVar1 != '\0');
      local_80 = 0;
      local_68 = 0;
      local_78 = 0;
      local_7c = 4;
      local_74 = local_8c;
      local_70 = local_ac;
      local_6c = iVar9;
LAB_0158f0f0:
      FUN_01538264(&local_40,&local_98);
      uVar6 = FUN_01531708(&local_40);
      FUN_0155ff10(&local_80,uVar6);
      *param_1 = local_80;
      param_1[1] = local_7c;
      param_1[2] = local_78;
      param_1[3] = local_74;
      param_1[4] = local_70;
      param_1[5] = local_6c;
      param_1[6] = local_68;
    }
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

