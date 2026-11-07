// FUN_01186b04 @ 01186b04 size=2352 calls_out=20 calls_in=0
// strings: 

void FUN_01186b04(undefined4 *param_1,int param_2,char *param_3,uint param_4,int param_5)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  undefined8 uVar18;
  uint local_118;
  int local_114;
  uint local_110;
  uint local_108;
  int local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  int *local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  int *local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  uint local_d0;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  int local_ac;
  int *local_a8;
  undefined4 local_a4;
  int *local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int *local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 == '\x05') {
    uVar12 = *(uint *)(param_3 + 0xc);
    uVar16 = uVar12 * 0xc;
    if (0xaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar16);
    }
    if (uVar16 == 0) {
      local_108 = 0;
      iVar4 = 4;
      local_110 = 0;
      local_104 = 4;
      local_114 = 4;
      local_118 = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(uVar16);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar16);
      }
      local_110 = 0;
      local_118 = uVar12;
      local_114 = iVar4;
      local_104 = thunk_FUN_016d4a50(uVar16);
      if (local_104 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar16);
      }
      local_108 = uVar12;
    }
    uVar5 = 0;
    local_100 = 0;
    if ((0x3ffffff < uVar12) || (uVar16 = uVar12 * 0x40, 0x7ffffffc < uVar16)) {
LAB_01186c34:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,uVar16);
    }
    if (uVar16 == 0) {
      local_f8 = 4;
      local_fc = 0;
    }
    else {
      local_f8 = thunk_FUN_016d4a50(uVar16);
      if (local_f8 == 0) {
        uVar5 = 4;
        goto LAB_01186c34;
      }
      local_fc = uVar12;
    }
    local_e8 = *(int *)(param_3 + 4);
    local_e4 = *(undefined4 *)(param_3 + 8);
    if (local_e8 == 0) {
      uVar12 = 0;
    }
    puVar14 = *(uint **)(param_2 + 4);
    local_f0 = (int *)(uint)(local_e8 != 0);
    local_f4 = 0;
    local_dc = 0;
    local_ec = 0;
    local_e0 = local_f0;
    local_d8._0_4_ = local_e8;
    local_d8._4_4_ = local_e4;
    local_d0 = uVar12;
    if (*(int *)(param_2 + 8) == 0) {
      iVar6 = 0;
      uVar5 = 0x80000000;
      uVar16 = 0;
      while (iVar8 = FUN_00f45584(&local_f0), iVar8 != 0) {
        local_c4 = *(uint *)(iVar8 + 4);
        local_c0 = *(int *)(iVar8 + 8);
        local_c8 = 0x80000000;
        iVar15 = *(int *)(iVar8 + 8);
        uVar10 = *(undefined4 *)(iVar8 + 4);
        if (iVar15 == 0) {
          iVar8 = 1;
          local_bc = param_4;
        }
        else {
          local_bc = param_4;
          iVar8 = thunk_FUN_016d4a50(iVar15);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar15);
          }
        }
        FUN_016dd1aa(iVar8,uVar10,iVar15);
        if (uVar16 == local_118) {
          FUN_015f37b0(&local_118);
          iVar4 = local_114;
        }
        uVar16 = uVar16 + 1;
        piVar13 = (int *)(iVar4 + iVar6);
        *piVar13 = iVar15;
        iVar6 = iVar6 + 0xc;
        piVar13[1] = iVar8;
        piVar13[2] = iVar15;
        local_110 = uVar16;
      }
      iVar4 = local_100;
    }
    else {
      iVar6 = FUN_00f45584(&local_f0);
      uVar5 = 0;
      iVar4 = 0;
      if (iVar6 != 0) {
        local_c4 = *(undefined4 *)(iVar6 + 4);
        local_c0 = *(undefined4 *)(iVar6 + 8);
        local_c8 = 0x80000000;
        iVar4 = 4;
        if (2 < *puVar14) {
          iVar4 = *puVar14 - 3;
        }
                    /* WARNING: Could not recover jumptable at 0x01186d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        local_bc = param_4;
        (*(code *)(&DAT_01186d88 + *(int *)(&DAT_01186d88 + iVar4 * 4)))();
        return;
      }
    }
    if (iVar4 != 0) {
      FUN_011f1dd4(&local_f0,&local_108);
      local_a4 = 1;
      local_a8 = (int *)0x1;
      local_a0 = local_f0;
      local_9c = local_ec;
      local_98 = local_e8;
      local_94 = local_e4;
      local_90._0_4_ = local_e0;
      local_90._4_4_ = local_dc;
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x20);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x20);
      }
      *puVar7 = local_a8;
      puVar7[1] = local_a4;
      puVar7[2] = local_a0;
      puVar7[3] = local_9c;
      puVar7[4] = local_98;
      puVar7[5] = local_94;
      puVar7[6] = (int *)local_90;
      puVar7[7] = local_90._4_4_;
      puVar9 = (undefined4 *)(param_2 + 0x1c);
      piVar13 = (int *)*puVar9;
      piVar17 = *(int **)(param_2 + 0x14);
      uVar5 = *(undefined4 *)(param_2 + 0x18);
      if (piVar13 == (int *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      uVar18 = FUN_01239010(piVar17,uVar5,puVar9);
      do {
        iVar6 = *piVar17;
        bVar3 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar3);
      *piVar17 = iVar6 + 1;
      local_88 = CONCAT44(local_88._4_4_,(undefined1 *)local_88);
      local_80 = CONCAT44(local_80._4_4_,(int)local_80);
      if (iVar6 < 0) goto LAB_01187620;
      if (piVar13 != (int *)0x0) {
        do {
          iVar6 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar6 + 1;
        local_88 = CONCAT44(local_88._4_4_,(undefined1 *)local_88);
        local_80 = CONCAT44(local_80._4_4_,(int)local_80);
        if (iVar6 < 0) goto LAB_01187620;
      }
      local_80 = FUN_01238114(param_4);
      uVar16 = local_f4;
      local_94 = 0;
      local_98 = 4;
      local_9c = 0;
      local_6c = CONCAT31(local_6c._1_3_,1);
      local_70 = 0;
      local_a0 = (int *)0x0;
      local_a4 = 4;
      local_a8 = (int *)0x0;
      local_90._0_4_ = piVar17;
      local_90._4_4_ = uVar5;
      local_78 = piVar13;
      local_74 = puVar7;
      local_88 = uVar18;
      if (local_f4 == local_fc) {
        FUN_011ca644(&local_fc);
      }
      puVar7 = (undefined4 *)(local_f8 + uVar16 * 0x40);
      *puVar7 = local_a8;
      puVar7[1] = local_a4;
      puVar7[2] = local_a0;
      puVar7[3] = local_9c;
      puVar7[4] = local_98;
      puVar7[5] = local_94;
      puVar7[6] = (int *)local_90;
      puVar7[7] = local_90._4_4_;
      *(undefined8 *)(puVar7 + 8) = local_88;
      *(undefined8 *)(puVar7 + 10) = local_80;
      puVar7[0xc] = local_78;
      puVar7[0xd] = local_74;
      puVar7[0xe] = local_70;
      puVar7[0xf] = local_6c;
      local_f4 = uVar16 + 1;
    }
    iVar6 = local_f4 << 6;
    iVar8 = local_f8;
    do {
      if (iVar6 == 0) {
        local_b8 = 0;
        local_c8 = 0x80000000;
        local_c4 = local_fc;
        uVar16 = local_f4;
        local_c0 = local_f8;
        local_bc = local_f4;
        goto LAB_01187350;
      }
      pcVar1 = (char *)(iVar8 + 0x3c);
      iVar6 = iVar6 + -0x40;
      iVar8 = iVar8 + 0x40;
    } while (*pcVar1 != '\0');
    local_c8 = 0;
    local_bc = local_fc;
    local_b0 = 0;
    local_c0 = 0;
    local_c4 = 4;
    uVar16 = 4;
    local_b8 = local_f8;
    local_b4 = local_f4;
LAB_01187350:
    uVar18 = CONCAT44(uVar16,local_110);
    if (local_110 == 0) {
      *param_1 = local_c8;
      param_1[1] = local_c4;
      param_1[2] = local_c0;
      param_1[3] = local_bc;
      param_1[4] = local_b8;
      param_1[5] = local_b4;
      param_1[6] = local_b0;
      if ((iVar4 == 0) && (local_108 != 0)) {
        thunk_FUN_016d3fb4(local_104);
      }
      if (local_118 == 0) {
        return;
      }
      thunk_FUN_016d3fb4(local_114);
      return;
    }
    piVar13 = *(int **)(param_2 + 0xc);
    uVar16 = *(uint *)(param_2 + 0x10);
    if (param_5 == 0) {
      piVar17 = (int *)0x0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_5 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
      }
      piVar17 = *(int **)(param_5 + 0xc);
      do {
        iVar6 = *piVar17;
        bVar3 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar3);
      *piVar17 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01187620;
      param_2 = *(int *)(param_5 + 0xc);
      uVar5 = *(undefined4 *)(param_5 + 0x10);
      uVar12 = 0;
      uVar11 = (*(int **)(param_5 + 4))[1];
      if (uVar11 <= uVar16) {
        iVar6 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar13 + 2,uVar11);
        uVar12 = uVar11;
        if (iVar6 != 0) {
          uVar12 = 0;
        }
      }
      uVar18 = FUN_011e1508((int)(piVar13 + 2) + uVar12,uVar16 - uVar12);
      piVar17 = (int *)0x2;
    }
    do {
      iVar6 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_01187620:
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xfdee,0x1187620);
      (*pcVar2)();
    }
    local_e4 = 3;
    local_f0 = piVar17;
    local_e0 = (int *)param_2;
    local_dc = uVar5;
    local_d8 = uVar18;
    local_38 = FUN_01238114(param_4);
    local_88._0_4_ = &DAT_8000000b;
    local_88._4_4_ = local_118;
    local_80._0_4_ = local_114;
    local_80._4_4_ = local_110;
    local_50 = 6;
    local_a8 = local_f0;
    local_a4 = local_ec;
    local_a0 = (int *)local_e8;
    local_9c = local_e4;
    local_98 = (int)local_e0;
    local_94 = local_dc;
    local_4c = param_3;
    local_30 = piVar13;
    local_2c = uVar16;
    local_90 = local_d8;
    iVar6 = thunk_FUN_016d4a50(0x80);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar6,&local_a8,0x80);
    local_ac = iVar6;
    FUN_011720bc(&local_a8,&local_ac);
    FUN_012128e0(&local_c8,&local_a8);
    FUN_01164df4(iVar6);
    thunk_FUN_016d3fb4(iVar6);
    iVar6 = local_104;
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    if (iVar4 == 0) {
      puVar7 = (undefined4 *)(local_104 + 4);
      for (iVar4 = local_100; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (puVar7[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar7);
        }
        puVar7 = puVar7 + 3;
      }
      if (local_108 != 0) {
        thunk_FUN_016d3fb4(iVar6);
        return;
      }
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

