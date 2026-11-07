// FUN_01510de4 @ 01510de4 size=1560 calls_out=14 calls_in=0
// strings: 

void FUN_01510de4(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
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
    uVar9 = *(uint *)(param_3 + 0xc);
    uVar6 = 0;
    iVar5 = uVar9 * 0xc;
    if (0xaaaaaaa < uVar9) {
LAB_01510e24:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,iVar5);
    }
    if (iVar5 == 0) {
      local_b8 = 0;
      local_d0 = 4;
      local_bc = 0;
      local_b4 = 4;
      local_c0 = 4;
      local_c4 = 0;
    }
    else {
      uVar6 = 4;
      local_d0 = FUN_01298504(iVar5,4);
      if (local_d0 == 0) goto LAB_01510e24;
      local_bc = 0;
      local_c4 = uVar9;
      local_c0 = local_d0;
      local_b4 = FUN_01298504(iVar5,4);
      if (local_b4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar5);
      }
      local_b8 = uVar9;
      uVar6 = local_d0;
    }
    uVar13 = 0;
    local_b0 = 0;
    if ((0x3ffffff < uVar9) || (uVar6 = uVar9 * 0x40, 0x7ffffffc < uVar6)) {
LAB_01510f1c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,uVar6);
    }
    if (uVar6 == 0) {
      local_c8 = 4;
      local_ac = 0;
    }
    else {
      uVar13 = 4;
      local_c8 = FUN_01298504(uVar6,4);
      if (local_c8 == 0) goto LAB_01510f1c;
      local_ac = uVar9;
    }
    iVar11 = *(int *)(param_2 + 8);
    uVar6 = 0;
    local_a4 = 0;
    iVar5 = *(int *)(param_2 + 4);
    iVar16 = iVar11 * 100 + iVar5;
    local_a0[2] = *(uint *)(param_3 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    local_80 = uVar9;
    if (local_a0[2] == 0) {
      local_80 = 0;
    }
    local_a0[0] = (uint)(local_a0[2] != 0);
    local_8c = 0;
    local_a0[1] = 0;
    local_cc = 0;
    local_a8 = local_c8;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
LAB_01510fa8:
    uVar18 = FUN_01a41998(local_a0);
    uVar13 = (undefined4)((ulonglong)uVar18 >> 0x20);
    iVar4 = (int)uVar18;
    if (iVar4 != 0) {
      local_74 = *(undefined4 *)(iVar4 + 4);
      uStack_70 = *(undefined4 *)(iVar4 + 8);
      local_78 = 0x80000000;
      uStack_6c = param_4;
      if (iVar11 == 0) {
LAB_01511104:
        FUN_006666fc(&local_68,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
        uVar9 = local_b0;
        if (local_b0 == local_b8) {
          FUN_019abd3c(&local_b8);
        }
        puVar10 = (undefined4 *)(local_b4 + uVar9 * 0xc);
        local_b0 = uVar9 + 1;
        *puVar10 = local_68;
        puVar10[1] = local_64;
        puVar10[2] = local_60;
        FUN_015737d4(&local_68,param_2 + 0xc,uVar13,&local_78,param_5,param_6);
        if (uVar6 == local_ac) {
          FUN_0155ab78(&local_ac);
          local_c8 = local_a8;
        }
        puVar10 = (undefined4 *)(local_c8 + uVar6 * 0x40);
        *puVar10 = local_68;
        puVar10[1] = local_64;
        puVar10[2] = local_60;
        puVar10[3] = local_5c;
        puVar10[4] = local_58;
        puVar10[5] = local_54;
        puVar10[6] = local_50;
        puVar10[7] = local_4c;
        puVar10[8] = (undefined4)local_48;
        puVar10[9] = local_48._4_4_;
        puVar10[10] = (undefined4)local_40;
        puVar10[0xb] = local_40._4_4_;
        puVar10[0xc] = local_38;
        puVar10[0xd] = local_34;
        puVar10[0xe] = local_30;
        puVar10[0xf] = local_2c;
        uVar6 = uVar6 + 1;
        local_a4 = uVar6;
      }
      else {
        bVar8 = false;
        iVar12 = iVar5;
        do {
          iVar14 = iVar12;
          while( true ) {
            cVar3 = FUN_01501468(iVar14,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
            iVar12 = iVar14 + 100;
            if (cVar3 != '\0') break;
            iVar14 = iVar12;
            if (iVar12 == iVar16) {
              if (!bVar8) goto LAB_01511104;
              goto LAB_01510fa8;
            }
          }
          FUN_006666fc(&local_68,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
          if (local_cc == local_c4) {
            FUN_019abd3c(&local_c4);
            local_d0 = local_c0;
          }
          uVar9 = local_cc + 1;
          puVar10 = (undefined4 *)(local_d0 + local_cc * 0xc);
          *puVar10 = local_68;
          puVar10[1] = local_64;
          puVar10[2] = local_60;
          local_bc = uVar9;
          FUN_015737d4(&local_68,iVar14 + 0x50,uVar13,&local_78,param_5,param_6);
          uVar6 = local_a4;
          if (local_a4 == local_ac) {
            FUN_0155ab78(&local_ac);
          }
          local_c8 = local_a8;
          puVar10 = (undefined4 *)(local_a8 + uVar6 * 0x40);
          *puVar10 = local_68;
          puVar10[1] = local_64;
          puVar10[2] = local_60;
          puVar10[3] = local_5c;
          puVar10[4] = local_58;
          puVar10[5] = local_54;
          puVar10[6] = local_50;
          puVar10[7] = local_4c;
          puVar10[8] = (undefined4)local_48;
          puVar10[9] = local_48._4_4_;
          puVar10[10] = (undefined4)local_40;
          puVar10[0xb] = local_40._4_4_;
          puVar10[0xc] = local_38;
          puVar10[0xd] = local_34;
          puVar10[0xe] = local_30;
          puVar10[0xf] = local_2c;
          uVar6 = uVar6 + 1;
          bVar8 = true;
          local_cc = uVar9;
          local_a4 = uVar6;
        } while (iVar12 != iVar16);
      }
      goto LAB_01510fa8;
    }
    if (local_cc != 0) {
      FUN_01538264(&local_68,&local_c4);
      uVar13 = FUN_01531708(&local_68);
      puVar10 = (undefined4 *)(param_2 + 0x28);
      piVar15 = (int *)*puVar10;
      piVar7 = *(int **)(param_2 + 0x20);
      uVar17 = *(undefined4 *)(param_2 + 0x24);
      if (piVar15 == (int *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      uVar18 = FUN_01534b44(piVar7,uVar17,puVar10);
      do {
        iVar5 = *piVar7;
        bVar8 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar8);
      *piVar7 = iVar5 + 1;
      if (iVar5 < 0) {
LAB_015113fc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x15113fc);
        (*pcVar2)();
      }
      if (piVar15 != (int *)0x0) {
        do {
          iVar5 = *piVar15;
          bVar8 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar8);
        *piVar15 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_015113fc;
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
      local_50 = piVar7;
      local_4c = uVar17;
      local_38 = piVar15;
      local_34 = uVar13;
      local_48 = uVar18;
      if (uVar6 == local_ac) {
        FUN_0155ab78(&local_ac);
        local_c8 = local_a8;
      }
      puVar10 = (undefined4 *)(local_c8 + uVar6 * 0x40);
      *puVar10 = local_68;
      puVar10[1] = local_64;
      puVar10[2] = local_60;
      puVar10[3] = local_5c;
      puVar10[4] = local_58;
      puVar10[5] = local_54;
      puVar10[6] = local_50;
      puVar10[7] = local_4c;
      *(undefined8 *)(puVar10 + 8) = local_48;
      *(undefined8 *)(puVar10 + 10) = local_40;
      puVar10[0xc] = local_38;
      puVar10[0xd] = local_34;
      puVar10[0xe] = local_30;
      puVar10[0xf] = local_2c;
      uVar6 = uVar6 + 1;
    }
    iVar5 = uVar6 << 6;
    iVar11 = local_c8;
    do {
      if (iVar5 == 0) {
        local_64 = local_ac;
        local_68 = 0x80000000;
        local_58 = 0;
        local_60 = local_c8;
        local_5c = uVar6;
        goto LAB_01511378;
      }
      pcVar1 = (char *)(iVar11 + 0x3c);
      iVar5 = iVar5 + -0x40;
      iVar11 = iVar11 + 0x40;
    } while (*pcVar1 != '\0');
    local_5c = local_ac;
    local_68 = 0;
    local_50 = (int *)0x0;
    local_60 = 0;
    local_64 = 4;
    local_58 = local_c8;
    local_54 = uVar6;
LAB_01511378:
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

