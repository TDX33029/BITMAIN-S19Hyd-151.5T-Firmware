// FUN_0150f190 @ 0150f190 size=1032 calls_out=12 calls_in=0
// strings: 

void FUN_0150f190(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint unaff_r11;
  undefined4 *puVar15;
  undefined8 uVar16;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0 [3];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 == '\x05') {
    uVar9 = *(uint *)(param_3 + 0xc);
    uVar13 = 0;
    iVar3 = uVar9 * 0xc;
    if (0xaaaaaaa < uVar9) {
LAB_0150f1d0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,iVar3);
    }
    uVar11 = 0;
    if (iVar3 == 0) {
      iVar2 = 4;
      local_b8 = 0;
    }
    else {
      uVar13 = 4;
      iVar2 = FUN_01298504(iVar3,4);
      local_b8 = uVar9;
      if (iVar2 == 0) goto LAB_0150f1d0;
    }
    local_b0 = 0;
    local_b4 = iVar2;
    if ((0x3ffffff < uVar9) || (unaff_r11 = uVar9 * 0x40, 0x7ffffffc < unaff_r11)) {
LAB_0150f290:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,unaff_r11);
    }
    if (unaff_r11 == 0) {
      local_bc = 4;
      local_ac = 0;
    }
    else {
      uVar11 = 4;
      local_bc = FUN_01298504(unaff_r11,4);
      if (local_bc == 0) goto LAB_0150f290;
      local_ac = uVar9;
    }
    local_a0[2] = *(uint *)(param_3 + 4);
    local_a4 = 0;
    uVar12 = 0;
    if (local_a0[2] == 0) {
      uVar9 = 0;
    }
    iVar6 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(param_2 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    local_a0[0] = (uint)(local_a0[2] != 0);
    local_8c = 0;
    local_a0[1] = 0;
    uVar7 = 0;
    local_a8 = local_bc;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    local_80 = uVar9;
LAB_0150f310:
    uVar16 = FUN_01a41998(local_a0);
    uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
    iVar4 = (int)uVar16;
    if (iVar4 != 0) {
      local_74 = *(undefined4 *)(iVar4 + 4);
      uStack_70 = *(undefined4 *)(iVar4 + 8);
      local_78 = 0x80000000;
      uStack_6c = param_4;
      if (iVar6 != 0) {
        uVar11 = *(undefined4 *)(iVar4 + 4);
        iVar8 = *(int *)(iVar4 + 8);
        iVar10 = iVar3;
        iVar14 = iVar6 << 5;
        do {
          if ((*(int *)(iVar10 + 8) == iVar8) &&
             (iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar10 + 4),uVar11,iVar8), iVar5 == 0)) {
            FUN_015737d4(&local_68,iVar10 + 0xc,uVar13,&local_78,param_5,param_6);
            if (uVar12 == local_ac) {
              FUN_0155ab78(&local_ac);
              local_bc = local_a8;
            }
            puVar15 = (undefined4 *)(local_bc + uVar12 * 0x40);
            uVar12 = uVar12 + 1;
            *puVar15 = local_68;
            puVar15[1] = local_64;
            puVar15[2] = local_60;
            puVar15[3] = local_5c;
            puVar15[4] = local_58;
            puVar15[5] = local_54;
            puVar15[6] = local_50;
            puVar15[7] = uStack_4c;
            puVar15[8] = uStack_48;
            puVar15[9] = uStack_44;
            puVar15[10] = local_40;
            puVar15[0xb] = uStack_3c;
            puVar15[0xc] = uStack_38;
            puVar15[0xd] = uStack_34;
            puVar15[0xe] = uStack_30;
            puVar15[0xf] = uStack_2c;
            local_a4 = uVar12;
            goto LAB_0150f310;
          }
          iVar10 = iVar10 + 0x20;
          iVar14 = iVar14 + -0x20;
        } while (iVar14 != 0);
      }
      FUN_015737d4(&local_68,param_2 + 0xc,uVar13,&local_78,param_5,param_6);
      if (uVar12 == local_ac) {
        FUN_0155ab78(&local_ac);
        local_bc = local_a8;
      }
      puVar15 = (undefined4 *)(local_bc + uVar12 * 0x40);
      uVar12 = uVar12 + 1;
      *puVar15 = local_68;
      puVar15[1] = local_64;
      puVar15[2] = local_60;
      puVar15[3] = local_5c;
      puVar15[4] = local_58;
      puVar15[5] = local_54;
      puVar15[6] = local_50;
      puVar15[7] = uStack_4c;
      puVar15[8] = uStack_48;
      puVar15[9] = uStack_44;
      puVar15[10] = local_40;
      puVar15[0xb] = uStack_3c;
      puVar15[0xc] = uStack_38;
      puVar15[0xd] = uStack_34;
      puVar15[0xe] = uStack_30;
      puVar15[0xf] = uStack_2c;
      local_a4 = uVar12;
      FUN_006666fc(&local_68,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      if (uVar7 == local_b8) {
        FUN_019abd3c(&local_b8);
        iVar2 = local_b4;
      }
      local_b0 = uVar7 + 1;
      puVar15 = (undefined4 *)(iVar2 + uVar7 * 0xc);
      *puVar15 = local_68;
      puVar15[1] = local_64;
      puVar15[2] = local_60;
      uVar7 = local_b0;
      goto LAB_0150f310;
    }
    iVar3 = local_a4 << 6;
    iVar2 = local_a8;
    do {
      if (iVar3 == 0) {
        local_64 = local_ac;
        local_68 = 0x80000000;
        local_58 = 0;
        local_5c = local_a4;
        local_60 = local_a8;
        goto LAB_0150f538;
      }
      pcVar1 = (char *)(iVar2 + 0x3c);
      iVar3 = iVar3 + -0x40;
      iVar2 = iVar2 + 0x40;
    } while (*pcVar1 != '\0');
    local_5c = local_ac;
    local_68 = 0;
    local_54 = local_a4;
    local_58 = local_a8;
    local_50 = 0;
    local_60 = 0;
    local_64 = 4;
LAB_0150f538:
    if (uVar7 == 0) {
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = local_54;
      param_1[6] = local_50;
      FUN_006a41c0(&local_b8);
    }
    else {
      FUN_01538264(local_a0,&local_b8);
      uVar13 = FUN_01531708(local_a0);
      FUN_0155ff10(&local_68,uVar13);
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = local_54;
      param_1[6] = local_50;
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

