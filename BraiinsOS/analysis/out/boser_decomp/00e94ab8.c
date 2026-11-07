// FUN_00e94ab8 @ 00e94ab8 size=2648 calls_out=24 calls_in=2
// strings: Hashboard settings is not supported | internal error: entered unreachable code | internal error: entered unreachable code

void FUN_00e94ab8(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int extraout_r3;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  int iVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 *local_1c0;
  undefined4 *local_194;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int local_180;
  int local_17c;
  undefined8 local_178;
  int local_170;
  int iStack_16c;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined8 local_148;
  int local_140;
  int iStack_13c;
  undefined8 local_138;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int aiStack_e8 [22];
  undefined1 auStack_90 [88];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x3a)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x3b) = *(undefined1 *)(param_2 + 0xe);
    *(undefined2 *)((int)param_2 + 0x3d) = 0;
    param_2[4] = param_2[3];
    param_2[5] = *param_2;
    param_2[6] = param_2[1];
    param_2[7] = param_2[2];
    *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)((int)param_2 + 0x39);
    iVar15 = *(int *)(param_2[3] + 4);
    *(undefined1 *)(param_2 + 0x13) = 0;
    iVar15 = iVar15 + 8;
    param_2[0x10] = iVar15;
LAB_00e94c38:
    uVar7 = FUN_00b8a1bc(*(int *)(iVar15 + 0x34) + 8);
    puVar10 = &DAT_01c13d9c;
    param_2[0x11] = uVar7;
    param_2[0x12] = &DAT_01c13d9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1815c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1815c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x13)) {
    case 0:
      iVar15 = param_2[0x10];
      goto LAB_00e94c38;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar7 = param_2[0x11];
      puVar10 = (undefined *)param_2[0x12];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1f)) {
    case 0:
      goto switchD_00e94bc4_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c183ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c183ac);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x1e)) {
      case 0:
        piVar14 = (int *)param_2[0x11];
        goto LAB_00e94cd0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f190);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f190);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x1d)) {
        case 0:
          iVar15 = param_2[0x12];
          goto LAB_00e94cec;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b3d0);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b3d0);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(param_2 + 0x1c)) {
          case 0:
            iVar15 = param_2[0x13];
            goto LAB_00e94d00;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01d2b3e0);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01d2b3e0);
          }
        }
      }
    }
    goto switchD_00e95480_caseD_3;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1d)) {
    case 0:
      goto switchD_00e94b6c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f1a0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f1a0);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x1c)) {
      case 0:
        puVar8 = (undefined4 *)param_2[0x11];
        goto LAB_00e94dd0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x1b)) {
        case 0:
          puVar8 = (undefined4 *)param_2[0x12];
          goto LAB_00e94de0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d2b410);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d2b410);
        }
      }
    }
    goto switchD_00e95318_caseD_3;
  case 6:
    goto switchD_00e94ae4_caseD_6;
  }
  iVar15 = (**(code **)(puVar10 + 0xc))(uVar7,param_3);
  if (iVar15 == 0) {
    uVar6 = 3;
    *(undefined1 *)(param_2 + 0x13) = 3;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e95454;
  }
  FUN_01139b38(param_2[0x11],param_2[0x12]);
  param_2[8] = iVar15;
  *(undefined1 *)(param_2 + 0x13) = 1;
  param_2[0x10] = *(int *)(param_2[4] + 4) + 8;
  *(undefined1 *)(param_2 + 0x1f) = 0;
switchD_00e94bc4_caseD_0:
  piVar14 = (int *)(param_2[0x10] + 0x3c);
  param_2[0x11] = piVar14;
  *(undefined1 *)(param_2 + 0x1e) = 0;
LAB_00e94cd0:
  iVar15 = *piVar14;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  iVar15 = iVar15 + 8;
  param_2[0x12] = iVar15;
LAB_00e94cec:
  param_2[0x13] = iVar15;
  *(undefined1 *)(param_2 + 0x1c) = 0;
LAB_00e94d00:
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 1;
  param_2[0x1a] = 1;
  param_2[0x14] = iVar15 + 4;
  param_2[0x15] = 0;
switchD_00e95480_caseD_3:
  local_194 = param_2 + 0x10;
  bVar5 = FUN_019f9bc4(param_2 + 0x14,param_3);
  if (bVar5 == 2) {
    uVar6 = 3;
    iVar23 = 0;
    *(undefined1 *)(param_2 + 0x1c) = 3;
    iVar15 = extraout_r3;
  }
  else {
    FUN_0193c3cc(param_2 + 0x14);
    if ((bVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
    }
    uVar6 = 1;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    iVar15 = param_2[0x13] + 0x18;
    iVar23 = param_2[0x13] + 4;
  }
  *(undefined1 *)(param_2 + 0x1d) = uVar6;
  *(undefined1 *)(param_2 + 0x1e) = uVar6;
  *(undefined1 *)(param_2 + 0x1f) = uVar6;
  if (iVar23 == 0) {
    uVar6 = 4;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e95454;
  }
  param_2[9] = iVar23;
  param_2[10] = iVar15;
  FUN_00bba254(local_194);
  param_2[0x10] = param_2[10] + 0x38;
  *(undefined1 *)(param_2 + 0x1d) = 0;
switchD_00e94b6c_caseD_0:
  iVar15 = *(int *)param_2[0x10];
  *(undefined1 *)(param_2 + 0x1c) = 0;
  puVar8 = (undefined4 *)(iVar15 + 8);
  param_2[0x11] = puVar8;
LAB_00e94dd0:
  *(undefined1 *)(param_2 + 0x1b) = 0;
  param_2[0x12] = puVar8;
LAB_00e94de0:
  uVar7 = *puVar8;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = uVar7;
  param_2[0x19] = uVar7;
  param_2[0x13] = puVar8 + 1;
  param_2[0x14] = 0;
switchD_00e95318_caseD_3:
  local_1c0 = param_2 + 0x10;
  piVar14 = param_2 + 0x13;
  bVar5 = FUN_019f9bc4(piVar14,param_3);
  if (bVar5 == 2) {
    *(undefined1 *)(param_2 + 0x1b) = 3;
    *(undefined1 *)(param_2 + 0x1c) = 3;
    *(undefined1 *)(param_2 + 0x1d) = 3;
    *param_1 = 4;
    param_1[1] = 0;
    uVar6 = 5;
    goto LAB_00e95454;
  }
  FUN_0193c3cc(piVar14);
  if ((bVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
  }
  puVar11 = (undefined4 *)param_2[0x12];
  puVar8 = puVar11 + 6;
  uVar7 = *puVar11;
  param_2[0xb] = puVar11 + 1;
  param_2[0x14] = 8;
  bVar2 = false;
  *(undefined1 *)(param_2 + 0x1d) = 1;
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined1 *)(param_2 + 0x1b) = 1;
  param_2[0xc] = uVar7;
  param_2[0xd] = puVar8;
  param_2[0x10] = 0;
  param_2[0x11] = 4;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x15] = 0;
  *(undefined2 *)((int)param_2 + 0x3d) = 0x101;
  piVar12 = (int *)(param_2[8] + 8);
  if (*piVar12 == 2 && *(int *)(param_2[8] + 0xc) == 0) {
    FUN_01a71aac(&local_150,9,"Hashboard settings is not supported",0x23);
    if (local_150 == 3 && local_14c == 0) {
      puVar8 = (undefined4 *)param_2[0xd];
      piVar12 = (int *)local_148;
      goto LAB_00e94f08;
    }
    piVar12 = &iStack_13c;
    iVar15 = local_150;
    piVar14 = (int *)local_148;
    iVar18 = local_148._4_4_;
    iVar21 = local_140;
    iVar23 = local_14c;
LAB_00e95290:
    FUN_01bed4e2(auStack_90,piVar12,0x54);
    FUN_00b5f0e4(param_2 + 0x13);
    *(undefined1 *)((int)param_2 + 0x3d) = 0;
    FUN_00d66698(param_2 + 0x10);
    *(undefined1 *)((int)param_2 + 0x3e) = 0;
    FUN_019f8c54(param_2[0xb],param_2[0xc]);
    FUN_019f8c54(param_2[9],1);
    piVar12 = (int *)param_2[8];
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(param_2[8]);
    }
  }
  else {
LAB_00e94f08:
    piVar13 = (int *)puVar8[1];
    bVar5 = *(byte *)((int)piVar12 + 0xbd);
    for (iVar15 = puVar8[2] * 0x30; iVar15 != 0; iVar15 = iVar15 + -0x30) {
      FUN_006666fc(&local_130,piVar13[9],piVar13[10]);
      iVar21 = local_128;
      iVar18 = local_12c;
      iVar23 = local_130;
      iVar16 = piVar13[4];
      iVar17 = piVar13[5];
      iVar20 = *piVar13;
      iVar19 = piVar13[1];
      bVar1 = *(byte *)(piVar13 + 0xb);
      uVar24 = *(undefined8 *)(piVar13 + 6);
      uVar25 = *(undefined8 *)(piVar13 + 2);
      FUN_006666fc(&local_18c,local_12c,local_128);
      uVar4 = local_184;
      uVar7 = local_188;
      iVar9 = FUN_01ac63fc(local_188,local_184,param_2[6],param_2[7]);
      if ((iVar9 == 0) || (bVar22 = *(byte *)((int)param_2 + 0x3b), bVar22 == bVar1)) {
        FUN_006666fc(&local_130,iVar18,iVar21);
        iVar21 = param_2[0x15];
        local_124 = CONCAT31(local_124._1_3_,bVar1);
        local_150 = iVar20;
        local_14c = iVar19;
        local_148 = uVar25;
        local_140 = iVar16;
        iStack_13c = iVar17;
        local_138 = uVar24;
        if (iVar21 == param_2[0x13]) {
          FUN_018061c0(piVar14);
        }
        piVar12 = (int *)(param_2[0x14] + iVar21 * 0x30);
        *piVar12 = local_150;
        piVar12[1] = local_14c;
        piVar12[2] = (int)(int *)local_148;
        piVar12[3] = local_148._4_4_;
        piVar12[4] = local_140;
        piVar12[5] = iStack_13c;
        piVar12[6] = (int)local_138;
        piVar12[7] = local_138._4_4_;
        piVar12[8] = local_130;
        piVar12[9] = local_12c;
        piVar12[10] = local_128;
        piVar12[0xb] = local_124;
        param_2[0x15] = iVar21 + 1;
        bVar22 = bVar1;
      }
      else {
        FUN_006666fc(&iStack_160,iVar18,iVar21);
        iVar21 = param_2[0x15];
        local_154 = CONCAT31(local_154._1_3_,bVar22);
        local_180 = iVar20;
        local_17c = iVar19;
        local_178 = uVar25;
        local_170 = iVar16;
        iStack_16c = iVar17;
        local_168 = uVar24;
        if (iVar21 == param_2[0x13]) {
          FUN_018061c0(piVar14);
        }
        piVar12 = (int *)(param_2[0x14] + iVar21 * 0x30);
        *piVar12 = local_180;
        piVar12[1] = local_17c;
        piVar12[2] = (int)local_178;
        piVar12[3] = local_178._4_4_;
        piVar12[4] = local_170;
        piVar12[5] = iStack_16c;
        piVar12[6] = (int)local_168;
        piVar12[7] = local_168._4_4_;
        piVar12[8] = iStack_160;
        piVar12[9] = iStack_15c;
        piVar12[10] = iStack_158;
        piVar12[0xb] = local_154;
        param_2[0x15] = iVar21 + 1;
        bVar2 = true;
      }
      uVar3 = local_18c;
      iVar21 = param_2[0x12];
      if (bVar22 == 2) {
        bVar22 = bVar5;
      }
      if (iVar21 == param_2[0x10]) {
        FUN_01aa1b90(local_1c0);
      }
      piVar13 = piVar13 + 0xc;
      puVar8 = (undefined4 *)(param_2[0x11] + iVar21 * 0x10);
      *puVar8 = uVar3;
      *(byte *)(puVar8 + 3) = bVar22 & 1;
      puVar8[1] = uVar7;
      puVar8[2] = uVar4;
      param_2[0x12] = iVar21 + 1;
      FUN_019bb7e0(iVar23,iVar18);
    }
    if (bVar2) {
      if (*(char *)(param_2 + 0xf) == '\0') {
        *(undefined1 *)((int)param_2 + 0x3d) = 0;
        local_150 = *piVar14;
        local_14c = param_2[0x14];
        local_148 = CONCAT44(local_148._4_4_,param_2[0x15]);
        piVar14 = (int *)param_2[0xd];
        FUN_00b5f0e4(piVar14);
        *piVar14 = local_150;
        piVar14[1] = local_14c;
        piVar14[2] = (int)(int *)local_148;
        FUN_019e0044(*(int *)(*(int *)(param_2[4] + 4) + 0x54) + 8);
      }
      else {
        *(undefined1 *)(param_2 + 0x2b) = 0;
switchD_00e94ae4_caseD_6:
        FUN_00e903b4(&local_150,param_2 + 0x16,param_3);
        iVar23 = local_14c;
        iVar15 = local_150;
        if (local_150 == 4 && local_14c == 0) {
          *param_1 = 4;
          param_1[1] = 0;
          uVar6 = 6;
          goto LAB_00e95454;
        }
        piVar14 = (int *)local_148;
        iVar18 = local_148._4_4_;
        FUN_01bed4e2(aiStack_e8,&iStack_13c,0x54);
        if (*(char *)(param_2 + 0x2b) == '\x03') {
          FUN_00e7a724(param_2 + 0x16);
        }
        if (iVar15 != 3 || iVar23 != 0) {
          piVar12 = aiStack_e8;
          iVar21 = local_140;
          goto LAB_00e95290;
        }
        *(undefined1 *)((int)param_2 + 0x3d) = 0;
        local_150 = param_2[0x13];
        local_14c = param_2[0x14];
        local_148 = CONCAT44(local_148._4_4_,param_2[0x15]);
        piVar14 = (int *)param_2[0xd];
        FUN_00b5f0e4(piVar14);
        *piVar14 = local_150;
        piVar14[1] = local_14c;
        piVar14[2] = (int)(int *)local_148;
        *(undefined1 *)(*(int *)(*(int *)(param_2[4] + 4) + 0x58) + 8) = 1;
        FUN_019e0044(*(int *)(*(int *)(param_2[4] + 4) + 0x54) + 8);
      }
    }
    piVar14 = (int *)param_2[0x10];
    iVar18 = param_2[0x11];
    iVar21 = param_2[0x12];
    *(undefined1 *)((int)param_2 + 0x3e) = 0;
    if (*(char *)((int)param_2 + 0x3d) != '\0') {
      FUN_00b5f0e4(param_2 + 0x13);
    }
    *(undefined2 *)((int)param_2 + 0x3d) = 0;
    FUN_019f8c54(param_2[0xb],param_2[0xc]);
    FUN_019f8c54(param_2[9],1);
    piVar12 = (int *)param_2[8];
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar9 + -1;
    iVar23 = 0;
    iVar15 = 3;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(param_2[8]);
    }
  }
  FUN_006a41c0(param_2 + 5);
  *param_1 = iVar15;
  param_1[1] = iVar23;
  param_1[2] = (int)piVar14;
  param_1[3] = iVar18;
  param_1[4] = iVar21;
  FUN_01bed4e2(param_1 + 5,auStack_90,0x54);
  uVar6 = 1;
LAB_00e95454:
  *(undefined1 *)((int)param_2 + 0x3a) = uVar6;
  return;
}

