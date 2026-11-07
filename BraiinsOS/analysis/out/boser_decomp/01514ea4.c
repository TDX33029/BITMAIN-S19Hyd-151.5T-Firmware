// FUN_01514ea4 @ 01514ea4 size=1760 calls_out=20 calls_in=0
// strings: 

void FUN_01514ea4(uint *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  bool bVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  int iVar19;
  undefined8 uVar20;
  int **local_e8;
  uint local_d8;
  int local_cc;
  int *local_c4;
  int local_c0;
  int *local_bc;
  int *local_b8;
  int local_b4;
  int *local_b0;
  int *local_ac;
  uint local_a8;
  int *local_a4;
  uint local_a0;
  int *local_9c;
  uint local_98;
  int *local_94;
  uint local_90;
  int *local_8c;
  uint local_88;
  int *local_84;
  int *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  int local_54;
  int *local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_3 == '\x05') {
    piVar7 = *(int **)(param_3 + 0xc);
    uVar10 = 0;
    iVar4 = (int)piVar7 * 0xc;
    if ((int *)0xaaaaaaa < piVar7) {
LAB_01514ee4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,iVar4);
    }
    if (iVar4 == 0) {
      local_b8 = (int *)0x0;
      local_cc = 4;
      local_bc = (int *)0x0;
      local_c0 = 4;
      local_c4 = (int *)0x0;
    }
    else {
      uVar10 = 4;
      local_c0 = FUN_01298504(iVar4,4);
      if (local_c0 == 0) goto LAB_01514ee4;
      local_bc = (int *)0x0;
      local_c4 = piVar7;
      local_cc = FUN_01298504(iVar4,4);
      if (local_cc == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar4);
      }
      local_b8 = piVar7;
    }
    uVar17 = 0;
    local_b0 = (int *)0x0;
    local_b4 = local_cc;
    if (((int *)0x3ffffff < piVar7) || (uVar10 = (int)piVar7 * 0x40, 0x7ffffffc < uVar10)) {
LAB_01514fd0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,uVar10);
    }
    if (uVar10 == 0) {
      local_d8 = 4;
      local_ac = (int *)0x0;
    }
    else {
      uVar17 = 4;
      local_d8 = FUN_01298504(uVar10,4);
      if (local_d8 == 0) goto LAB_01514fd0;
      local_ac = piVar7;
    }
    piVar18 = (int *)0x0;
    iVar4 = param_2[2];
    local_98 = *(uint *)(param_3 + 4);
    local_94 = *(int **)(param_3 + 8);
    iVar16 = param_2[1];
    if (local_98 == 0) {
      piVar7 = (int *)0x0;
    }
    iVar19 = iVar16 + iVar4 * 0x28;
    piVar14 = (int *)0x0;
    local_a0 = (uint)(local_98 != 0);
    local_e8 = &local_b8;
    local_a4 = (int *)0x0;
    local_8c = (int *)0x0;
    local_9c = (int *)0x0;
    local_a8 = local_d8;
    local_90 = local_a0;
    local_88 = local_98;
    local_84 = local_94;
    local_80 = piVar7;
LAB_01515060:
    uVar20 = FUN_01a41998(&local_a0);
    iVar5 = (int)uVar20;
    if (iVar5 != 0) {
      local_74 = *(undefined4 *)(iVar5 + 4);
      uStack_70 = *(undefined4 *)(iVar5 + 8);
      local_78 = 0x80000000;
      uStack_6c = param_4;
      if (iVar4 == 0) {
LAB_015151bc:
        FUN_006666fc(&local_68,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
        piVar7 = local_bc;
        if (local_bc == local_c4) {
          FUN_019abd3c(&local_c4);
        }
        puVar6 = (undefined4 *)(local_c0 + (int)piVar7 * 0xc);
        *puVar6 = local_68;
        puVar6[1] = local_64;
        puVar6[2] = local_60;
        local_bc = (int *)((int)piVar7 + 1);
      }
      else {
        bVar15 = false;
        iVar11 = iVar16;
        do {
          iVar8 = iVar11;
          while( true ) {
            cVar3 = FUN_015050f0(iVar8,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
            iVar11 = iVar8 + 0x28;
            if (cVar3 != '\0') break;
            iVar8 = iVar11;
            if (iVar11 == iVar19) {
              if (bVar15) goto LAB_01515060;
              goto LAB_015151bc;
            }
          }
          FUN_006666fc(&local_68,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
          if (piVar18 == local_b8) {
            FUN_019abd3c(&local_b8);
            local_cc = local_b4;
          }
          puVar6 = (undefined4 *)(local_cc + (int)piVar18 * 0xc);
          piVar18 = (int *)((int)piVar18 + 1);
          *puVar6 = local_68;
          puVar6[1] = local_64;
          puVar6[2] = local_60;
          local_b0 = piVar18;
          FUN_015737d4(&local_68,iVar8 + 0x14,(int)((ulonglong)uVar20 >> 0x20),&local_78,param_5,
                       param_6);
          piVar14 = local_a4;
          if (local_a4 == local_ac) {
            FUN_0155ab78(&local_ac);
          }
          local_d8 = local_a8;
          puVar6 = (undefined4 *)(local_a8 + (int)piVar14 * 0x40);
          *puVar6 = local_68;
          puVar6[1] = local_64;
          puVar6[2] = local_60;
          puVar6[3] = local_5c;
          puVar6[4] = local_58;
          puVar6[5] = local_54;
          puVar6[6] = local_50;
          puVar6[7] = local_4c;
          puVar6[8] = (undefined4)local_48;
          puVar6[9] = local_48._4_4_;
          puVar6[10] = (undefined4)local_40;
          puVar6[0xb] = local_40._4_4_;
          puVar6[0xc] = local_38;
          puVar6[0xd] = local_34;
          puVar6[0xe] = local_30;
          puVar6[0xf] = local_2c;
          piVar14 = (int *)((int)piVar14 + 1);
          bVar15 = true;
          local_a4 = piVar14;
        } while (iVar11 != iVar19);
      }
      goto LAB_01515060;
    }
    if (piVar18 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      FUN_01538264(&local_68,&local_b8);
      uVar17 = FUN_01531708(&local_68);
      piVar7 = param_2 + 7;
      piVar12 = (int *)*piVar7;
      piVar9 = (int *)param_2[5];
      iVar4 = param_2[6];
      if (piVar12 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      uVar20 = FUN_01534b44(piVar9,iVar4,piVar7);
      do {
        iVar16 = *piVar9;
        bVar15 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar15);
      *piVar9 = iVar16 + 1;
      local_48 = CONCAT44(local_48._4_4_,(undefined4)local_48);
      local_40 = CONCAT44(local_40._4_4_,(undefined4)local_40);
      if (iVar16 < 0) goto LAB_01515578;
      if (piVar12 != (int *)0x0) {
        do {
          iVar16 = *piVar12;
          bVar15 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar15);
        *piVar12 = iVar16 + 1;
        local_48 = CONCAT44(local_48._4_4_,(undefined4)local_48);
        local_40 = CONCAT44(local_40._4_4_,(undefined4)local_40);
        if (iVar16 < 0) goto LAB_01515578;
      }
      local_40 = FUN_01531840(param_4);
      local_54 = 0;
      local_58 = (int *)&SUB_00000004;
      local_5c = 0;
      local_2c = CONCAT31(local_2c._1_3_,1);
      local_30 = 0;
      local_60 = 0;
      local_64 = 4;
      local_68 = 0;
      local_50 = piVar9;
      local_4c = iVar4;
      local_38 = piVar12;
      local_34 = uVar17;
      local_48 = uVar20;
      if (piVar14 == local_ac) {
        FUN_0155ab78(&local_ac);
        local_d8 = local_a8;
      }
      puVar6 = (undefined4 *)(local_d8 + (int)piVar14 * 0x40);
      piVar14 = (int *)((int)piVar14 + 1);
      *puVar6 = local_68;
      puVar6[1] = local_64;
      puVar6[2] = local_60;
      puVar6[3] = local_5c;
      puVar6[4] = local_58;
      puVar6[5] = local_54;
      puVar6[6] = local_50;
      puVar6[7] = local_4c;
      *(undefined8 *)(puVar6 + 8) = local_48;
      *(undefined8 *)(puVar6 + 10) = local_40;
      puVar6[0xc] = local_38;
      puVar6[0xd] = local_34;
      puVar6[0xe] = local_30;
      puVar6[0xf] = local_2c;
      local_a4 = piVar14;
    }
    iVar16 = (int)piVar14 << 6;
    uVar10 = local_d8;
    do {
      if (iVar16 == 0) {
        local_9c = local_ac;
        local_a0 = 0x80000000;
        local_90 = 0;
        local_98 = local_d8;
        local_94 = piVar14;
        goto LAB_015153b8;
      }
      pcVar1 = (char *)(uVar10 + 0x3c);
      iVar16 = iVar16 + -0x40;
      uVar10 = uVar10 + 0x40;
    } while (*pcVar1 != '\0');
    local_94 = local_ac;
    local_a0 = 0;
    local_88 = 0;
    local_98 = 0;
    local_9c = (int *)&SUB_00000004;
    local_90 = local_d8;
    local_8c = piVar14;
LAB_015153b8:
    if (local_bc == (int *)0x0) {
      *param_1 = local_a0;
      param_1[1] = (uint)local_9c;
      param_1[2] = local_98;
      param_1[3] = (uint)local_94;
      param_1[4] = local_90;
      param_1[5] = (uint)local_8c;
      param_1[6] = local_88;
      if (piVar18 == (int *)0x0) {
        FUN_006a41c0(&local_b8);
      }
      local_e8 = &local_c4;
    }
    else {
      piVar7 = (int *)param_2[3];
      if (param_5 == 0) {
        uVar17 = 0;
        iVar16 = 0;
        piVar9 = param_2;
      }
      else {
        uVar10 = param_2[4];
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_5 + 0xc));
        }
        piVar14 = *(int **)(param_5 + 0xc);
        do {
          iVar4 = *piVar14;
          bVar15 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar15);
        *piVar14 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_01515578;
        piVar7 = piVar7 + 2;
        iVar4 = *(int *)(param_5 + 0x10);
        uVar13 = (*(int **)(param_5 + 4))[1];
        if (uVar10 < uVar13) {
          uVar13 = 0;
        }
        else {
          iVar16 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar7,uVar13);
          if (iVar16 != 0) {
            uVar13 = 0;
          }
          piVar7 = (int *)((int)piVar7 + uVar13);
        }
        uVar20 = FUN_016bc0ec(piVar7,uVar10 - uVar13);
        iVar16 = (int)((ulonglong)uVar20 >> 0x20);
        uVar17 = 2;
        piVar7 = (int *)param_2[3];
        piVar9 = (int *)uVar20;
      }
      do {
        iVar19 = *piVar7;
        bVar15 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar15);
      *piVar7 = iVar19 + 1;
      if (iVar19 < 0) {
LAB_01515578:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x1515578);
        (*pcVar2)();
      }
      iVar19 = param_2[4];
      local_5c = 3;
      local_68 = uVar17;
      local_58 = piVar14;
      local_54 = iVar4;
      local_50 = piVar9;
      local_4c = iVar16;
      uVar20 = FUN_01531840(param_4);
      local_78 = FUN_01595b0c(piVar7,iVar19,&local_68,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),
                              param_3,&local_c4);
      FUN_01508738(&local_68,&local_78);
      FUN_01562ef4(&local_a0,&local_68);
      FUN_015019e4(&local_78);
      *param_1 = local_a0;
      param_1[1] = (uint)local_9c;
      param_1[2] = local_98;
      param_1[3] = (uint)local_94;
      param_1[4] = local_90;
      param_1[5] = (uint)local_8c;
      param_1[6] = local_88;
      if (piVar18 != (int *)0x0) {
        return;
      }
    }
    FUN_006a41c0(local_e8);
  }
  else {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

