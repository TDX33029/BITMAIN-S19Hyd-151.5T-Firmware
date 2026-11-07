// FUN_01514590 @ 01514590 size=1760 calls_out=20 calls_in=0
// strings: 

void FUN_01514590(uint *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
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
    piVar6 = *(int **)(param_3 + 0xc);
    uVar9 = 0;
    iVar10 = (int)piVar6 * 0xc;
    if ((int *)0xaaaaaaa < piVar6) {
LAB_015145d0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,iVar10);
    }
    if (iVar10 == 0) {
      local_b8 = (int *)0x0;
      local_cc = 4;
      local_bc = (int *)0x0;
      local_c0 = 4;
      local_c4 = (int *)0x0;
    }
    else {
      uVar9 = 4;
      local_c0 = FUN_01298504(iVar10,4);
      if (local_c0 == 0) goto LAB_015145d0;
      local_bc = (int *)0x0;
      local_c4 = piVar6;
      local_cc = FUN_01298504(iVar10,4);
      if (local_cc == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar10);
      }
      local_b8 = piVar6;
    }
    uVar17 = 0;
    local_b0 = (int *)0x0;
    local_b4 = local_cc;
    if (((int *)0x3ffffff < piVar6) || (uVar9 = (int)piVar6 * 0x40, 0x7ffffffc < uVar9)) {
LAB_015146bc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,uVar9);
    }
    if (uVar9 == 0) {
      local_d8 = 4;
      local_ac = (int *)0x0;
    }
    else {
      uVar17 = 4;
      local_d8 = FUN_01298504(uVar9,4);
      if (local_d8 == 0) goto LAB_015146bc;
      local_ac = piVar6;
    }
    iVar10 = param_2[2];
    piVar18 = (int *)0x0;
    local_98 = *(uint *)(param_3 + 4);
    local_94 = *(int **)(param_3 + 8);
    iVar16 = param_2[1];
    if (local_98 == 0) {
      piVar6 = (int *)0x0;
    }
    iVar19 = iVar10 * 100 + iVar16;
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
    local_80 = piVar6;
LAB_0151474c:
    uVar20 = FUN_01a41998(&local_a0);
    iVar4 = (int)uVar20;
    if (iVar4 != 0) {
      local_74 = *(undefined4 *)(iVar4 + 4);
      uStack_70 = *(undefined4 *)(iVar4 + 8);
      local_78 = 0x80000000;
      uStack_6c = param_4;
      if (iVar10 == 0) {
LAB_015148a8:
        FUN_006666fc(&local_68,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
        piVar6 = local_bc;
        if (local_bc == local_c4) {
          FUN_019abd3c(&local_c4);
        }
        puVar5 = (undefined4 *)(local_c0 + (int)piVar6 * 0xc);
        *puVar5 = local_68;
        puVar5[1] = local_64;
        puVar5[2] = local_60;
        local_bc = (int *)((int)piVar6 + 1);
      }
      else {
        bVar15 = false;
        iVar11 = iVar16;
        do {
          iVar7 = iVar11;
          while( true ) {
            cVar3 = FUN_01501468(iVar7,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
            iVar11 = iVar7 + 100;
            if (cVar3 != '\0') break;
            iVar7 = iVar11;
            if (iVar11 == iVar19) {
              if (bVar15) goto LAB_0151474c;
              goto LAB_015148a8;
            }
          }
          FUN_006666fc(&local_68,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
          if (piVar18 == local_b8) {
            FUN_019abd3c(&local_b8);
            local_cc = local_b4;
          }
          puVar5 = (undefined4 *)(local_cc + (int)piVar18 * 0xc);
          piVar18 = (int *)((int)piVar18 + 1);
          *puVar5 = local_68;
          puVar5[1] = local_64;
          puVar5[2] = local_60;
          local_b0 = piVar18;
          FUN_015737d4(&local_68,iVar7 + 0x50,(int)((ulonglong)uVar20 >> 0x20),&local_78,param_5,
                       param_6);
          piVar14 = local_a4;
          if (local_a4 == local_ac) {
            FUN_0155ab78(&local_ac);
          }
          local_d8 = local_a8;
          puVar5 = (undefined4 *)(local_a8 + (int)piVar14 * 0x40);
          *puVar5 = local_68;
          puVar5[1] = local_64;
          puVar5[2] = local_60;
          puVar5[3] = local_5c;
          puVar5[4] = local_58;
          puVar5[5] = local_54;
          puVar5[6] = local_50;
          puVar5[7] = local_4c;
          puVar5[8] = (undefined4)local_48;
          puVar5[9] = local_48._4_4_;
          puVar5[10] = (undefined4)local_40;
          puVar5[0xb] = local_40._4_4_;
          puVar5[0xc] = local_38;
          puVar5[0xd] = local_34;
          puVar5[0xe] = local_30;
          puVar5[0xf] = local_2c;
          piVar14 = (int *)((int)piVar14 + 1);
          bVar15 = true;
          local_a4 = piVar14;
        } while (iVar11 != iVar19);
      }
      goto LAB_0151474c;
    }
    if (piVar18 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      FUN_01538264(&local_68,&local_b8);
      uVar17 = FUN_01531708(&local_68);
      piVar6 = param_2 + 7;
      piVar12 = (int *)*piVar6;
      piVar8 = (int *)param_2[5];
      iVar10 = param_2[6];
      if (piVar12 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      uVar20 = FUN_01534b44(piVar8,iVar10,piVar6);
      do {
        iVar16 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar16 + 1;
      local_48 = CONCAT44(local_48._4_4_,(undefined4)local_48);
      local_40 = CONCAT44(local_40._4_4_,(undefined4)local_40);
      if (iVar16 < 0) goto LAB_01514c64;
      if (piVar12 != (int *)0x0) {
        do {
          iVar16 = *piVar12;
          bVar15 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar15);
        *piVar12 = iVar16 + 1;
        local_48 = CONCAT44(local_48._4_4_,(undefined4)local_48);
        local_40 = CONCAT44(local_40._4_4_,(undefined4)local_40);
        if (iVar16 < 0) goto LAB_01514c64;
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
      local_50 = piVar8;
      local_4c = iVar10;
      local_38 = piVar12;
      local_34 = uVar17;
      local_48 = uVar20;
      if (piVar14 == local_ac) {
        FUN_0155ab78(&local_ac);
        local_d8 = local_a8;
      }
      puVar5 = (undefined4 *)(local_d8 + (int)piVar14 * 0x40);
      piVar14 = (int *)((int)piVar14 + 1);
      *puVar5 = local_68;
      puVar5[1] = local_64;
      puVar5[2] = local_60;
      puVar5[3] = local_5c;
      puVar5[4] = local_58;
      puVar5[5] = local_54;
      puVar5[6] = local_50;
      puVar5[7] = local_4c;
      *(undefined8 *)(puVar5 + 8) = local_48;
      *(undefined8 *)(puVar5 + 10) = local_40;
      puVar5[0xc] = local_38;
      puVar5[0xd] = local_34;
      puVar5[0xe] = local_30;
      puVar5[0xf] = local_2c;
      local_a4 = piVar14;
    }
    iVar16 = (int)piVar14 << 6;
    uVar9 = local_d8;
    do {
      if (iVar16 == 0) {
        local_9c = local_ac;
        local_a0 = 0x80000000;
        local_90 = 0;
        local_98 = local_d8;
        local_94 = piVar14;
        goto LAB_01514aa4;
      }
      pcVar1 = (char *)(uVar9 + 0x3c);
      iVar16 = iVar16 + -0x40;
      uVar9 = uVar9 + 0x40;
    } while (*pcVar1 != '\0');
    local_94 = local_ac;
    local_a0 = 0;
    local_88 = 0;
    local_98 = 0;
    local_9c = (int *)&SUB_00000004;
    local_90 = local_d8;
    local_8c = piVar14;
LAB_01514aa4:
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
      piVar6 = (int *)param_2[3];
      if (param_5 == 0) {
        uVar17 = 0;
        iVar16 = 0;
        piVar8 = param_2;
      }
      else {
        uVar9 = param_2[4];
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_5 + 0xc));
        }
        piVar14 = *(int **)(param_5 + 0xc);
        do {
          iVar10 = *piVar14;
          bVar15 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar15);
        *piVar14 = iVar10 + 1;
        if (iVar10 < 0) goto LAB_01514c64;
        piVar6 = piVar6 + 2;
        iVar10 = *(int *)(param_5 + 0x10);
        uVar13 = (*(int **)(param_5 + 4))[1];
        if (uVar9 < uVar13) {
          uVar13 = 0;
        }
        else {
          iVar16 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,piVar6,uVar13);
          if (iVar16 != 0) {
            uVar13 = 0;
          }
          piVar6 = (int *)((int)piVar6 + uVar13);
        }
        uVar20 = FUN_016bc0ec(piVar6,uVar9 - uVar13);
        iVar16 = (int)((ulonglong)uVar20 >> 0x20);
        uVar17 = 2;
        piVar6 = (int *)param_2[3];
        piVar8 = (int *)uVar20;
      }
      do {
        iVar19 = *piVar6;
        bVar15 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar15);
      *piVar6 = iVar19 + 1;
      if (iVar19 < 0) {
LAB_01514c64:
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xfdee,0x1514c64);
        (*pcVar2)();
      }
      iVar19 = param_2[4];
      local_5c = 3;
      local_68 = uVar17;
      local_58 = piVar14;
      local_54 = iVar10;
      local_50 = piVar8;
      local_4c = iVar16;
      uVar20 = FUN_01531840(param_4);
      local_78 = FUN_01595b0c(piVar6,iVar19,&local_68,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),
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

