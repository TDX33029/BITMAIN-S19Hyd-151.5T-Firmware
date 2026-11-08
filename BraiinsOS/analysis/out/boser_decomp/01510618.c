// FUN_01510618 @ 01510618 size=1560 calls_out=14 calls_in=0
// strings: 

void FUN_01510618(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  uint local_d0;
  uint local_cc;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
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
  int *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_3 == '\x05') {
    uVar10 = *(uint *)(param_3 + 0xc);
    uVar7 = 0;
    iVar4 = uVar10 * 0xc;
    if (0xaaaaaaa < uVar10) {
LAB_01510658:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,iVar4);
    }
    if (iVar4 == 0) {
      local_b8 = 0;
      local_d0 = 4;
      local_bc = 0;
      local_b4 = 4;
      local_c0 = 4;
      local_c4 = 0;
    }
    else {
      uVar7 = 4;
      local_d0 = FUN_01298504(iVar4,4);
      if (local_d0 == 0) goto LAB_01510658;
      local_bc = 0;
      local_c4 = uVar10;
      local_c0 = local_d0;
      local_b4 = FUN_01298504(iVar4,4);
      if (local_b4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar4);
      }
      local_b8 = uVar10;
      uVar7 = local_d0;
    }
    uVar13 = 0;
    local_b0 = 0;
    if ((0x3ffffff < uVar10) || (uVar7 = uVar10 * 0x40, 0x7ffffffc < uVar7)) {
LAB_01510750:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,uVar7);
    }
    if (uVar7 == 0) {
      local_c8 = 4;
      local_ac = 0;
    }
    else {
      uVar13 = 4;
      local_c8 = FUN_01298504(uVar7,4);
      if (local_c8 == 0) goto LAB_01510750;
      local_ac = uVar10;
    }
    uVar7 = 0;
    local_a4 = 0;
    iVar4 = *(int *)(param_2 + 8);
    local_a0[2] = *(uint *)(param_3 + 4);
    iVar6 = *(int *)(param_2 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    if (local_a0[2] == 0) {
      uVar10 = 0;
    }
    iVar16 = iVar6 + iVar4 * 0x28;
    local_a0[0] = (uint)(local_a0[2] != 0);
    local_8c = 0;
    local_a0[1] = 0;
    local_cc = 0;
    local_a8 = local_c8;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    local_80 = uVar10;
LAB_015107dc:
    uVar18 = FUN_01a41998(local_a0);
    uVar13 = (undefined4)((ulonglong)uVar18 >> 0x20);
    iVar5 = (int)uVar18;
    if (iVar5 != 0) {
      local_74 = *(undefined4 *)(iVar5 + 4);
      uStack_70 = *(undefined4 *)(iVar5 + 8);
      local_78 = 0x80000000;
      uStack_6c = param_4;
      if (iVar4 == 0) {
LAB_01510938:
        FUN_006666fc(&local_68,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
        uVar10 = local_b0;
        if (local_b0 == local_b8) {
          FUN_019abd3c(&local_b8);
        }
        puVar11 = (undefined4 *)(local_b4 + uVar10 * 0xc);
        local_b0 = uVar10 + 1;
        *puVar11 = local_68;
        puVar11[1] = local_64;
        puVar11[2] = local_60;
        FUN_015737d4(&local_68,param_2 + 0xc,uVar13,&local_78,param_5,param_6);
        if (uVar7 == local_ac) {
          FUN_0155ab78(&local_ac);
          local_c8 = local_a8;
        }
        puVar11 = (undefined4 *)(local_c8 + uVar7 * 0x40);
        *puVar11 = local_68;
        puVar11[1] = local_64;
        puVar11[2] = local_60;
        puVar11[3] = local_5c;
        puVar11[4] = local_58;
        puVar11[5] = local_54;
        puVar11[6] = local_50;
        puVar11[7] = local_4c;
        puVar11[8] = (undefined4)local_48;
        puVar11[9] = local_48._4_4_;
        puVar11[10] = (undefined4)local_40;
        puVar11[0xb] = local_40._4_4_;
        puVar11[0xc] = local_38;
        puVar11[0xd] = local_34;
        puVar11[0xe] = local_30;
        puVar11[0xf] = local_2c;
        uVar7 = uVar7 + 1;
        local_a4 = uVar7;
      }
      else {
        bVar9 = false;
        iVar12 = iVar6;
        do {
          iVar14 = iVar12;
          while( true ) {
            cVar3 = FUN_015050f0(iVar14,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
            iVar12 = iVar14 + 0x28;
            if (cVar3 != '\0') break;
            iVar14 = iVar12;
            if (iVar12 == iVar16) {
              if (bVar9) goto LAB_015107dc;
              goto LAB_01510938;
            }
          }
          FUN_006666fc(&local_68,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
          if (local_cc == local_c4) {
            FUN_019abd3c(&local_c4);
            local_d0 = local_c0;
          }
          uVar10 = local_cc + 1;
          puVar11 = (undefined4 *)(local_d0 + local_cc * 0xc);
          *puVar11 = local_68;
          puVar11[1] = local_64;
          puVar11[2] = local_60;
          local_bc = uVar10;
          FUN_015737d4(&local_68,iVar14 + 0x14,uVar13,&local_78,param_5,param_6);
          uVar7 = local_a4;
          if (local_a4 == local_ac) {
            FUN_0155ab78(&local_ac);
          }
          local_c8 = local_a8;
          puVar11 = (undefined4 *)(local_a8 + uVar7 * 0x40);
          *puVar11 = local_68;
          puVar11[1] = local_64;
          puVar11[2] = local_60;
          puVar11[3] = local_5c;
          puVar11[4] = local_58;
          puVar11[5] = local_54;
          puVar11[6] = local_50;
          puVar11[7] = local_4c;
          puVar11[8] = (undefined4)local_48;
          puVar11[9] = local_48._4_4_;
          puVar11[10] = (undefined4)local_40;
          puVar11[0xb] = local_40._4_4_;
          puVar11[0xc] = local_38;
          puVar11[0xd] = local_34;
          puVar11[0xe] = local_30;
          puVar11[0xf] = local_2c;
          uVar7 = uVar7 + 1;
          bVar9 = true;
          local_cc = uVar10;
          local_a4 = uVar7;
        } while (iVar12 != iVar16);
      }
      goto LAB_015107dc;
    }
    if (local_cc != 0) {
      FUN_01538264(&local_68,&local_c4);
      uVar13 = FUN_01531708(&local_68);
      puVar11 = (undefined4 *)(param_2 + 0x28);
      piVar15 = (int *)*puVar11;
      piVar8 = *(int **)(param_2 + 0x20);
      uVar17 = *(undefined4 *)(param_2 + 0x24);
      if (piVar15 == (int *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      uVar18 = FUN_01534b44(piVar8,uVar17,puVar11);
      do {
        iVar4 = *piVar8;
        bVar9 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar9);
      *piVar8 = iVar4 + 1;
      if (iVar4 < 0) {
LAB_01510c30:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x1510c30);
        (*pcVar2)();
      }
      if (piVar15 != (int *)0x0) {
        do {
          iVar4 = *piVar15;
          bVar9 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar9);
        *piVar15 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_01510c30;
      }
      local_40 = FUN_01531840(param_4);
      local_54 = 0;
      local_58 = 4;
      local_5c = 0;
      local_2c = CONCAT31(local_2c._1_3_,1);
      local_30 = 0;
      local_60 = 0;
      local_64 = 4;
      local_68 = 0;
      local_50 = piVar8;
      local_4c = uVar17;
      local_38 = piVar15;
      local_34 = uVar13;
      local_48 = uVar18;
      if (uVar7 == local_ac) {
        FUN_0155ab78(&local_ac);
        local_c8 = local_a8;
      }
      puVar11 = (undefined4 *)(local_c8 + uVar7 * 0x40);
      *puVar11 = local_68;
      puVar11[1] = local_64;
      puVar11[2] = local_60;
      puVar11[3] = local_5c;
      puVar11[4] = local_58;
      puVar11[5] = local_54;
      puVar11[6] = local_50;
      puVar11[7] = local_4c;
      *(undefined8 *)(puVar11 + 8) = local_48;
      *(undefined8 *)(puVar11 + 10) = local_40;
      puVar11[0xc] = local_38;
      puVar11[0xd] = local_34;
      puVar11[0xe] = local_30;
      puVar11[0xf] = local_2c;
      uVar7 = uVar7 + 1;
    }
    iVar4 = uVar7 << 6;
    iVar6 = local_c8;
    do {
      if (iVar4 == 0) {
        local_64 = local_ac;
        local_68 = 0x80000000;
        local_58 = 0;
        local_60 = local_c8;
        local_5c = uVar7;
        goto LAB_01510bac;
      }
      pcVar1 = (char *)(iVar6 + 0x3c);
      iVar4 = iVar4 + -0x40;
      iVar6 = iVar6 + 0x40;
    } while (*pcVar1 != '\0');
    local_5c = local_ac;
    local_68 = 0;
    local_50 = (int *)0x0;
    local_60 = 0;
    local_64 = 4;
    local_58 = local_c8;
    local_54 = uVar7;
LAB_01510bac:
    if (local_b0 == 0) {
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
    if (local_cc == 0) {
      FUN_006a41c0(&local_c4);
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

