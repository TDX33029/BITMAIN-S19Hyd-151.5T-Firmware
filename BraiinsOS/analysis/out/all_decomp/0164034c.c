// FUN_0164034c @ 0164034c size=2132 calls_out=17 calls_in=2
// strings: task was cancelled | task panicked | background task failed

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0164034c(undefined1 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  code *pcVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  int extraout_r3;
  int extraout_r3_00;
  int iVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  int iVar23;
  undefined4 *unaff_r10;
  int iVar24;
  ulonglong uVar25;
  int local_120;
  int local_118;
  int local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 *local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int iStack_f0;
  uint uStack_ec;
  int *local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 *local_dc;
  undefined **local_d8;
  int local_d0;
  int *piStack_cc;
  undefined4 local_c8;
  int *local_c4;
  uint *local_c0;
  int local_bc;
  undefined4 local_b0;
  uint local_ac;
  uint uStack_a8;
  undefined4 *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint *local_70;
  int local_6c;
  uint local_58;
  uint local_54;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *local_28;
  
  cVar1 = *(char *)(param_2 + 0x30);
  *(undefined1 *)(param_2 + 0x30) = 0x2a;
  if (cVar1 != '*') {
    param_1[1] = cVar1;
    *param_1 = 1;
    return;
  }
  piVar5 = (int *)(param_2 + 0x18);
  iVar23 = *piVar5;
  if (iVar23 == -0x7fffffff) {
    unaff_r10 = (undefined4 *)((uint)&local_e0 | 4);
    puVar6 = (undefined4 *)((uint)&local_58 | 5);
    puVar7 = (undefined4 *)((uint)&local_58 | 4);
    piVar9 = *(int **)(param_2 + 0x1c);
    do {
      FUN_016626bc(&local_e0,piVar9,param_3);
      piVar18 = local_c4;
      uVar21 = local_c8;
      piVar16 = piStack_cc;
      iVar23 = local_d0;
      uVar12 = local_e0;
      if (local_e0 == 5) {
        *param_1 = 5;
        return;
      }
      if (local_e0 == 4) {
        uVar21 = 0xd;
        pcVar11 = "task panicked";
        if (local_d0 == 0) {
          uVar21 = 0x12;
          pcVar11 = "task was cancelled";
        }
        FUN_015e79d4(param_1,0x28,pcVar11,uVar21);
        if (local_d0 == 0) {
          return;
        }
        if ((code *)*piStack_cc != (code *)0x0) {
          (*(code *)*piStack_cc)(local_d0);
        }
        if (piStack_cc[1] == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_d0);
        return;
      }
      local_58 = local_e0;
      uVar13 = unaff_r10[1];
      uVar17 = unaff_r10[2];
      *puVar7 = *unaff_r10;
      puVar7[1] = uVar13;
      puVar7[2] = uVar17;
      if (*piVar9 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar9);
        if (!bVar2) goto LAB_0164046c;
        *piVar9 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_0164046c:
        (**(code **)(piVar9[2] + 0x10))(piVar9);
      }
      puVar4 = local_50;
      uVar8 = local_54 & 0xff;
      *(undefined4 *)(param_2 + 0x20) = uVar21;
      *(int **)(param_2 + 0x24) = piVar18;
      *piVar5 = iVar23;
      *(int **)(param_2 + 0x1c) = piVar16;
      uVar14 = uVar12 - 2;
      if (uVar12 < 2) {
        uVar14 = 2;
      }
      if ((uVar14 == 1) && (uVar8 != 4)) {
        uVar21 = *puVar6;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)puVar6 + 3);
        *param_1 = (undefined1)local_54;
        *(undefined4 *)(param_1 + 1) = uVar21;
        if (uVar12 == 3) {
          return;
        }
        if (uVar8 != 3) {
          return;
        }
        uVar21 = *local_50;
        puVar6 = (undefined4 *)local_50[1];
        pcVar15 = (code *)*puVar6;
        if (pcVar15 != (code *)0x0) {
          (*pcVar15)(uVar21);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(uVar21);
        }
        thunk_FUN_016d3fb4(local_50);
        return;
      }
      if (uVar12 != 3) {
        if (uVar14 < 2) {
          if (uVar8 != 4) goto LAB_016404d0;
        }
        else if (uVar12 != 0) {
LAB_016404d0:
          if (uVar8 == 3) {
            uVar21 = *local_50;
            puVar22 = (undefined4 *)local_50[1];
            pcVar15 = (code *)*puVar22;
            if (pcVar15 != (code *)0x0) {
              (*pcVar15)(uVar21);
            }
            if (puVar22[1] != 0) {
              thunk_FUN_016d3fb4(uVar21);
            }
            thunk_FUN_016d3fb4(puVar4);
          }
        }
      }
      piVar9 = piVar16;
    } while (iVar23 == -0x7fffffff);
  }
  *(undefined4 *)(param_2 + 0x18) = 0x80000000;
  if (iVar23 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac8dc);
  }
  piVar9 = (int *)(param_2 + 0x1c);
  local_114 = *piVar9;
  local_110 = *(uint *)(param_2 + 0x20);
  local_10c = *(uint *)(param_2 + 0x24);
  local_118 = iVar23;
  if (local_110 == local_10c) {
    uVar21 = 3;
    local_120 = param_3;
  }
  else {
    if (local_110 < local_10c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(local_10c,local_110,local_110,&DAT_018ac77c);
    }
    unaff_r10 = (undefined4 *)-(local_110 - local_10c);
    uVar21 = 2;
    local_120 = -(uint)(local_110 - local_10c != 0);
    local_110 = 0;
    local_10c = 0;
  }
  if (*(uint *)(param_2 + 0x38) < param_5) {
    param_5 = *(uint *)(param_2 + 0x38);
  }
  if (iVar23 - local_110 < param_5) {
    FUN_0164328c(&local_118,local_110,param_5);
  }
  uVar12 = local_110;
  puVar6 = (undefined4 *)((uint)&local_e0 | 0x10);
  FUN_016dd1aa(local_114 + local_110,param_4,param_5);
  piVar16 = *(int **)(param_2 + 0x3c);
  local_110 = uVar12 + param_5;
  do {
    iVar23 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar23 + 1;
  if (iVar23 < 0) goto LAB_01640870;
  local_f8 = local_118;
  local_f4 = local_114;
  uStack_ec = local_10c;
  local_fc = local_120;
  local_104 = 0;
  local_108 = uVar21;
  local_100 = unaff_r10;
  iStack_f0 = local_110;
  local_e8 = piVar16;
  uVar25 = FUN_0164ec90(&DAT_018accc0);
  piVar16 = (int *)(uVar25 >> 0x20);
  do {
    do {
      iVar23 = DAT_018d9204;
      uVar12 = DAT_018d9200;
      uVar8 = DAT_018d9200 + 1;
      local_bc = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar8;
    DAT_018d9204 = local_bc;
  } while (bVar2 && bVar3);
  iVar24 = 0x248;
  if ((uVar25 & 1) == 0) {
    piVar18 = piVar16 + 0x60;
    if ((char)*piVar18 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(piVar18);
      if (!bVar2) goto LAB_0164079c;
      *(char *)piVar18 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0164079c:
      FUN_01280da8(piVar18);
    }
    FUN_0128236c(piVar18);
    piVar16[0x6a] = piVar16[0x6a] + 1;
    FUN_01282570(piVar18);
    if ((char)*piVar18 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar18);
        if (bVar2) {
          *(char *)piVar18 = '\0';
          local_bc = extraout_r3;
          goto LAB_016407f8;
        }
      } while ((char)*piVar18 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar18);
    local_bc = extraout_r3_00;
LAB_016407f8:
    do {
      iVar10 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_01640870;
    local_c8 = 0;
    iVar10 = 0x230;
  }
  else {
    iVar24 = 0x178;
    do {
      iVar10 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_01640870;
    local_c8 = 1;
    iVar10 = 0x168;
  }
  piVar18 = *(int **)((int)piVar16 + iVar10 + 8);
  if (piVar18 == (int *)0x0) {
    local_c0 = (uint *)0x0;
  }
  else {
    do {
      iVar19 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar19 + 1;
    if (iVar19 < 0) {
LAB_01640870:
                    /* WARNING: Does not return */
      pcVar15 = (code *)software_udf(0xfdee,0x1640870);
      (*pcVar15)();
    }
    local_c0 = *(uint **)((int)piVar16 + iVar10 + 8);
    local_bc = *(int *)((int)piVar16 + iVar10 + 0xc);
    do {
      uVar8 = *local_c0;
      bVar2 = (bool)hasExclusiveAccess(local_c0);
    } while (!bVar2);
    *local_c0 = uVar8 + 1;
    if (0x7fffffff < uVar8) goto LAB_01640870;
  }
  puVar7 = (undefined4 *)((uint)&local_58 | 4);
  *puVar7 = local_108;
  puVar7[1] = local_104;
  puVar7[2] = local_100;
  puVar7[3] = local_fc;
  puVar7[4] = local_f8;
  puVar7[5] = local_f4;
  puVar7[6] = iStack_f0;
  puVar7[7] = uStack_ec;
  puVar7[8] = local_e8;
  puVar7[9] = uStack_e4;
  local_d8 = &PTR_FUN_018acdcc;
  local_dc = (undefined4 *)0x0;
  puVar6[6] = uVar12;
  puVar6[7] = iVar23;
  *puVar6 = 0;
  puVar6[1] = 0;
  local_e0 = 0xcc;
  local_b0 = 0;
  local_ac = local_58;
  uStack_a8 = local_54;
  puStack_a4 = local_50;
  uStack_a0 = uStack_4c;
  uStack_9c = uStack_48;
  local_98 = local_44;
  uStack_94 = uStack_40;
  uStack_90 = uStack_3c;
  uStack_8c = uStack_38;
  uStack_88 = uStack_34;
  uStack_84 = uStack_30;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_28 = (int *)0x0;
  local_c4 = piVar16;
  local_70 = local_c0;
  local_6c = local_bc;
  iVar23 = FUN_016d51b0(&local_28,0x20,0x80);
  piVar18 = local_28;
  if ((iVar23 != 0) || (local_28 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(0x20,0x80);
  }
  FUN_016dd1aa(local_28,&local_e0,0x80);
  FUN_0164f1a8(&local_e0,*(undefined4 *)((int)piVar16 + iVar24),piVar18,0,uVar25);
  puVar6 = local_dc;
  uVar12 = local_e0 & 0xff;
  if (uVar12 == 5) {
    piVar20 = piVar18;
  }
  else {
    if ((uVar12 < 5) && (uVar12 != 3)) {
      if (*piVar18 != 0xcc) goto LAB_01640a0c;
LAB_016409a8:
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar18);
      if (bVar2) {
        *piVar18 = 0x84;
        piVar20 = (int *)0x0;
        goto LAB_01640a2c;
      }
    }
    else {
      uVar21 = *local_dc;
      puVar7 = (undefined4 *)local_dc[1];
      pcVar15 = (code *)*puVar7;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(uVar21);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar21);
      }
      thunk_FUN_016d3fb4(puVar6);
      if (*piVar18 == 0xcc) goto LAB_016409a8;
LAB_01640a0c:
      ClearExclusiveLocal();
    }
    piVar20 = (int *)0x0;
    (**(code **)(piVar18[2] + 0x10))(piVar18);
  }
LAB_01640a2c:
  DataMemoryBarrier(0xb);
  do {
    iVar23 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar23 + -1;
  if ((int)uVar25 == 0) {
    if (iVar23 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(piVar16);
    }
  }
  else if (iVar23 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(piVar16);
  }
  if (piVar20 == (int *)0x0) {
    FUN_015e79d4(&local_e0,0x28,"background task failed",0x16);
    *(undefined2 *)(param_1 + 1) = local_e0._1_2_;
    param_1[3] = local_e0._3_1_;
    *(undefined4 **)(param_1 + 4) = local_dc;
    *param_1 = (undefined1)local_e0;
    return;
  }
  iVar23 = *piVar5;
  if (iVar23 != -0x80000000) {
    if (iVar23 == -0x7fffffff) {
      piVar16 = (int *)*piVar9;
      if (*piVar16 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar16);
        if (bVar2) {
          *piVar16 = 0x84;
          goto LAB_01640b2c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar16[2] + 0x10))();
    }
    else if (iVar23 != 0) {
      thunk_FUN_016d3fb4(*piVar9);
    }
  }
LAB_01640b2c:
  *(uint *)(param_1 + 4) = param_5;
  *piVar9 = (int)piVar20;
  *piVar5 = -0x7fffffff;
  *param_1 = 4;
  return;
}

