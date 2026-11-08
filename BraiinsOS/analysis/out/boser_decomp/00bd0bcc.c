// FUN_00bd0bcc @ 00bd0bcc size=3672 calls_out=39 calls_in=1
// strings: background task failed | background task failed | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698

undefined8 FUN_00bd0bcc(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint ****ppppuVar13;
  uint ****unaff_r7;
  uint ****ppppuVar14;
  uint uVar15;
  uint ****ppppuVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint ****local_190;
  undefined4 *local_184;
  undefined4 *local_180;
  undefined4 *local_178;
  uint ****local_170;
  uint ****local_16c;
  uint ****local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  uint ****ppppuStack_154;
  uint ****local_150;
  uint ****local_14c;
  uint ****local_148;
  uint ****local_144;
  uint ****local_140;
  uint ****local_13c;
  uint ****local_138;
  uint ****local_134;
  uint ****ppppuStack_130;
  uint ****local_12c;
  undefined4 *puStack_128;
  uint ****ppppuStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint ****local_110;
  uint ****local_10c;
  undefined4 *puStack_108;
  uint ****ppppuStack_104;
  uint ****local_100;
  uint ****local_fc;
  undefined4 *puStack_f8;
  uint ****ppppuStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint local_e0;
  undefined4 uStack_dc;
  uint ****ppppuStack_d8;
  uint ****local_d0;
  uint ****local_cc;
  uint ****local_c8;
  uint ****local_c4;
  uint ****local_c0;
  uint ****ppppuStack_bc;
  undefined4 *puStack_b8;
  uint ****ppppuStack_b4;
  uint ****local_b0;
  uint ****local_ac;
  undefined4 *local_a8;
  uint ****ppppuStack_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  uint ****local_94;
  uint ****local_90;
  uint ****local_8c;
  undefined4 *puStack_88;
  uint ****local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [60];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint ****ppppuStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x6d)) {
  case 0:
    iVar6 = param_1[0x10];
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[0x11] = iVar6;
    param_1[6] = param_1[2];
    *(undefined1 *)((int)param_1 + 0x6e) = *(undefined1 *)(param_1 + 0x1b);
    FUN_00f25b04(&local_a0,*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x18),&DAT_00400ca8
                );
    ppppuVar14 = local_9c;
    puVar11 = param_1 + 0x12;
    FUN_019a66e4(puVar11,local_9c,local_98,
                 *(undefined4 *)(&DAT_01c2087c + (uint)*(byte *)((int)param_1 + 0x6e) * 4),
                 *(undefined4 *)(&DAT_0056ada8 + (uint)*(byte *)((int)param_1 + 0x6e) * 4));
    FUN_019bb7e0(local_a0,ppppuVar14);
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x1c] = puVar11;
LAB_00bd0d70:
    param_1[0x1d] = puVar11;
    FUN_019afae4(&local_b0,puVar11[1],puVar11[2]);
    param_1[0x1e] = local_b0;
    param_1[0x1f] = local_ac;
    param_1[0x20] = local_a8;
    *(undefined1 *)(param_1 + 0x22) = 0;
switchD_00bd0ea0_caseD_0:
    local_d0 = (uint ****)param_1[0x1e];
    local_cc = (uint ****)param_1[0x1f];
    local_c8 = (uint ****)param_1[0x20];
    uVar9 = FUN_006308d4(&local_d0,&DAT_01c230d0);
    param_1[0x21] = uVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(0x1c201f4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(0x1c201f4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x23)) {
    case 0:
      puVar11 = (undefined4 *)param_1[0x1c];
      goto LAB_00bd0d70;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2043c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2043c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x22)) {
    case 0:
      goto switchD_00bd0ea0_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar9 = param_1[0x21];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x23)) {
    case 0:
      goto switchD_00bd0cf0_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2047c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2047c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x22)) {
      case 0:
        goto switchD_00bd0e4c_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case 3:
        uVar9 = param_1[0x21];
      }
    }
    goto LAB_00bd1024;
  case 5:
    goto switchD_00bd0bec_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x27)) {
    case 0:
      uVar9 = param_1[0x1c];
      uVar10 = param_1[0x1d];
      uVar8 = param_1[0x1e];
      goto LAB_00bd1584;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20304);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20304);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x31)) {
      case 0:
        uVar9 = param_1[0x28];
        uVar10 = param_1[0x29];
        goto LAB_00bd15a4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c204dc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c204dc);
      case 3:
        ppppuVar14 = (uint ****)(param_1 + 0x2c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x30)) {
        case 0:
          goto switchD_00bd12f4_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230e0);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230e0);
        case 3:
          uVar9 = param_1[0x2f];
        }
      }
      goto LAB_00bd160c;
    case 4:
      goto switchD_00bd0cb4_caseD_4;
    case 5:
      uVar9 = *param_2;
      ppppuVar14 = unaff_r7;
    }
    goto LAB_00bd18d4;
  }
  local_178 = param_1 + 0x1e;
  FUN_014b4c40(&local_a0,uVar9,*param_2);
  ppppuVar14 = local_8c;
  if (((uint)local_a0 & 1) == 0) {
    local_140 = local_98;
    local_13c = local_94;
    local_138 = local_90;
    local_134 = local_8c;
    piVar5 = (int *)param_1[0x21];
    if (*piVar5 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(piVar5);
      if (!bVar3) goto LAB_00bd0ec4;
      *piVar5 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bd0ec4:
      (**(code **)(piVar5[2] + 0x10))();
    }
    if (local_140 == (uint ****)0x0 && local_13c == (uint ****)0x0) {
      uVar15 = (uint)local_138 >> 8 | (int)local_134 << 0x18;
      ppppuVar13 = local_138;
      ppppuVar16 = local_134;
    }
    else {
      FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
      ppppuVar14 = local_9c;
      ppppuVar13 = local_a0;
      FUN_00b938dc(&local_140);
      uVar15 = (uint)ppppuVar13 >> 8 | (int)ppppuVar14 << 0x18;
      ppppuVar16 = ppppuVar14;
    }
    uVar12 = (uint)ppppuVar13 & 0xff;
    *(undefined1 *)(param_1 + 0x22) = 1;
    if (uVar12 == 5) goto LAB_00bd0f54;
    FUN_00b71be0(local_178);
    *(undefined1 *)(param_1 + 0x23) = 1;
    if (uVar12 != 4) {
      local_a0 = (uint ****)(uVar12 | uVar15 << 8);
      local_9c = (uint ****)((uint)ppppuVar16 & 0xffffff00 | uVar15 >> 0x18);
      ppppuVar14 = (uint ****)FUN_007afd78(&local_a0);
LAB_00bd1944:
      FUN_019bb7e0(param_1[0x12],param_1[0x13]);
      *(undefined1 *)((int)param_1 + 0x6d) = 1;
      uVar9 = 0;
      goto LAB_00bd1958;
    }
    uVar17 = FUN_019b00d0(*(undefined4 *)(param_1[0x11] + 0x14),
                          *(undefined4 *)(param_1[0x11] + 0x18));
    if ((int)uVar17 == 0) {
      FUN_019b9f84(&local_a0);
      ppppuVar14 = (uint ****)FUN_00783ce8(&DAT_00400caf,0x18,&local_a0);
      goto LAB_00bd1944;
    }
    FUN_012fbd94(&local_a0,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    ppppuVar14 = local_9c;
    if (local_a0 != (uint ****)0x0) {
      ppppuVar14 = (uint ****)0x0;
    }
    if (local_a0 == (uint ****)&DAT_00000001) {
      FUN_019b9f84(&local_a0);
      ppppuVar14 = (uint ****)FUN_012c6a30(&DAT_00400cc7,0x1d,&local_a0);
      goto LAB_00bd1944;
    }
    local_a0 = (uint ****)(param_1 + 8);
    *local_a0 = (uint ***)ppppuVar14;
    param_1[10] = (uint ***)param_1[4];
    param_1[9] = local_98;
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar9 = param_1[0x13];
    uVar10 = param_1[0x14];
    param_1[0xc] = param_1[6];
    param_1[0xb] = param_1[5];
    local_9c = (uint ****)&DAT_0132b6a0;
    local_94 = (uint ****)FUN_01417570;
    local_98 = (uint ****)(param_1 + 10);
    FUN_00664898(&local_140,&DAT_005b64e9,&local_a0);
    local_d0 = local_140;
    local_cc = local_13c;
    local_c8 = local_138;
    FUN_019c8874(param_1 + 0x15,uVar9,uVar10);
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x1c] = param_1[0x11] + 0x10;
switchD_00bd0cf0_caseD_0:
    iVar6 = param_1[0x1c];
    param_1[0x1d] = iVar6;
    FUN_019afae4(&local_b0,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
    param_1[0x1e] = local_b0;
    param_1[0x1f] = local_ac;
    param_1[0x20] = local_a8;
    *(undefined1 *)(param_1 + 0x22) = 0;
switchD_00bd0e4c_caseD_0:
    local_d0 = (uint ****)param_1[0x1e];
    local_cc = (uint ****)param_1[0x1f];
    local_c8 = (uint ****)param_1[0x20];
    uVar9 = FUN_00631460(&local_d0,&DAT_01c230d0);
    param_1[0x21] = uVar9;
LAB_00bd1024:
    puVar11 = param_1 + 0x22;
    FUN_00798728(&local_a0,uVar9,*param_2);
    if (local_a0 == (uint ****)0x2) {
      *(undefined1 *)puVar11 = 3;
      local_13c = (uint ****)&local_a0;
LAB_00bd1048:
      *(undefined1 *)((int)param_1 + 0x6d) = 4;
      goto LAB_00bd1054;
    }
    local_140 = local_a0;
    local_13c = local_9c;
    local_138 = local_98;
    local_134 = local_94;
    ppppuStack_130 = local_90;
    local_12c = local_8c;
    piVar5 = (int *)param_1[0x21];
    if (*piVar5 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(piVar5);
      if (!bVar3) goto LAB_00bd10a0;
      *piVar5 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bd10a0:
      (**(code **)(piVar5[2] + 0x10))();
    }
    if (local_140 == (uint ****)&DAT_00000001) {
      FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
      ppppuVar13 = local_9c;
      ppppuVar14 = local_a0;
      FUN_00bc8cf8(&local_140);
      *(undefined1 *)puVar11 = 1;
      unaff_r7 = (uint ****)&DAT_80000000;
    }
    else {
      *(undefined1 *)puVar11 = 1;
      unaff_r7 = local_13c;
      ppppuVar14 = local_138;
      ppppuVar13 = local_134;
      if (local_13c == (uint ****)&DAT_80000001) goto LAB_00bd1048;
    }
    FUN_00b71be0(param_1 + 0x1e);
    *(undefined1 *)(param_1 + 0x23) = 1;
    if (unaff_r7 == (uint ****)&DAT_80000000) {
      local_a0 = ppppuVar14;
      local_9c = ppppuVar13;
      ppppuVar14 = (uint ****)FUN_007afd78(&local_a0);
LAB_00bd193c:
      FUN_019bb7e0(param_1[0x15],param_1[0x16]);
      goto LAB_00bd1944;
    }
    param_1[0x19] = ppppuVar14;
    param_1[0x1a] = ppppuVar13;
    param_1[0x1c] = ppppuVar14;
    param_1[0x1d] = ppppuVar13;
    *(undefined1 *)((int)param_1 + 0x85) = 0;
    param_1[0x18] = unaff_r7;
    param_1[0x20] = param_1 + 0x15;
switchD_00bd0bec_caseD_5:
    uVar18 = FUN_00616738(param_1 + 0x1c,*param_2);
    ppppuVar14 = (uint ****)(uVar18 >> 0x20);
    if ((uVar18 & 1) == 0) {
      if (*(char *)((int)param_1 + 0x85) == '\x03') {
        piVar5 = (int *)param_1[0x1f];
        if (*piVar5 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar3 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar3) goto LAB_00bd11dc;
          *piVar5 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00bd11dc:
          (**(code **)(piVar5[2] + 0x10))();
        }
        *(undefined1 *)(param_1 + 0x21) = 0;
      }
      if (ppppuVar14 == (uint ****)0x0) {
        if ((DAT_01d50f88 < 2) &&
           (((DAT_01d4c8b0 - 1 < 2 ||
             ((DAT_01d4c8b0 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c8a8), cVar4 != '\0')))) &&
            (iVar6 = FUN_01aaa278(DAT_01d4c8a8), iVar6 != 0)))) {
          if (*(uint *****)(DAT_01d4c8a8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,0x1c20204);
          }
          local_98 = *(uint *****)(DAT_01d4c8a8 + 0x24);
          local_94 = *(uint *****)(DAT_01d4c8a8 + 0x28);
          local_90 = (uint ****)0x0;
          local_13c = (uint ****)&local_110;
          local_140 = (uint ****)&local_a0;
          local_10c = (uint ****)&local_b0;
          local_100 = (uint ****)param_1[0x16];
          local_fc = (uint ****)param_1[0x17];
          local_b0 = (uint ****)&local_100;
          local_cc = (uint ****)&DAT_00000001;
          local_d0 = (uint ****)&local_140;
          local_138 = (uint ****)&DAT_01d2ea4c;
          local_110 = (uint ****)&DAT_005a5c71;
          local_ac = (uint ****)&LAB_019ba78c;
          local_c8 = (uint ****)(DAT_01d4c8a8 + 0x1c);
          local_a0 = *(uint *****)(DAT_01d4c8a8 + 0x1c);
          local_9c = *(uint *****)(DAT_01d4c8a8 + 0x20);
          FUN_0060df78(&local_d0);
        }
        else {
          iVar6 = DAT_01d4c8a8;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_16c = *(uint *****)(DAT_01d4c8a8 + 0x14);
            local_168 = *(uint *****)(DAT_01d4c8a8 + 0x18);
            local_170 = (uint ****)&SUB_00000004;
            DataMemoryBarrier(0xb);
            puVar11 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar7 = (*(code *)puVar11[3])(pcVar1,&local_170);
            if (iVar7 != 0) {
              local_a8 = (undefined4 *)(DAT_01d4c8a8 + 0x1c);
              if (*(uint *****)(DAT_01d4c8a8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,0x1c20204);
              }
              local_94 = *(uint *****)(DAT_01d4c8a8 + 0x28);
              local_98 = *(uint *****)(DAT_01d4c8a8 + 0x24);
              local_cc = (uint ****)&local_150;
              local_110 = (uint ****)param_1[0x16];
              local_10c = (uint ****)param_1[0x17];
              local_d0 = (uint ****)&local_a0;
              local_14c = (uint ****)&local_100;
              local_90 = (uint ****)0x0;
              local_c8 = (uint ****)&DAT_01d2ea4c;
              local_150 = (uint ****)&DAT_005a5c71;
              local_fc = (uint ****)&LAB_019ba78c;
              local_100 = (uint ****)&local_110;
              local_ac = (uint ****)&DAT_00000001;
              local_b0 = (uint ****)&local_d0;
              local_140 = local_170;
              local_13c = local_16c;
              local_138 = local_168;
              local_a0 = (uint ****)*local_a8;
              local_9c = *(uint *****)(DAT_01d4c8a8 + 0x20);
              FUN_01aaa328(iVar6,pcVar1,puVar11[4],&local_140,&local_b0);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x27) = 0;
        uVar9 = param_1[0x13];
        uVar10 = param_1[0x14];
        uVar8 = *(undefined4 *)(&DAT_00568848 + (uint)*(byte *)((int)param_1 + 0x6e) * 4);
        param_1[0x1c] = uVar9;
        param_1[0x1d] = uVar10;
        param_1[0x1e] = uVar8;
LAB_00bd1584:
        param_1[0x1f] = uVar8;
        param_1[0x28] = uVar9;
        param_1[0x29] = uVar10;
        *(undefined1 *)(param_1 + 0x31) = 0;
LAB_00bd15a4:
        param_1[0x2a] = uVar9;
        param_1[0x2b] = uVar10;
        FUN_019afae4(&local_f0,uVar9,uVar10);
        param_1[0x2c] = local_f0;
        param_1[0x2d] = uStack_ec;
        param_1[0x2e] = uStack_e8;
        *(undefined1 *)(param_1 + 0x30) = 0;
switchD_00bd12f4_caseD_0:
        local_e0 = param_1[0x2c];
        uStack_dc = param_1[0x2d];
        ppppuVar14 = (uint ****)param_1[0x2e];
        ppppuStack_d8 = ppppuVar14;
        uVar9 = FUN_00b912c8(&local_e0,&DAT_01c230d0);
        param_1[0x2f] = uVar9;
LAB_00bd160c:
        local_178 = param_1 + 0x27;
        local_180 = param_1 + 0x31;
        local_184 = param_1 + 0x2c;
        puVar11 = param_1 + 0x30;
        FUN_00798844(&local_a0,uVar9,*param_2);
        if (local_a0 == (uint ****)0x2) {
          *(undefined1 *)puVar11 = 3;
LAB_00bd1630:
          *(undefined1 *)local_180 = 3;
          *(undefined1 *)local_178 = 3;
LAB_00bd18f4:
          bVar3 = true;
        }
        else {
          local_d0 = local_a0;
          local_cc = local_9c;
          local_c8 = local_98;
          local_c4 = local_94;
          local_c0 = local_90;
          ppppuStack_bc = local_8c;
          puStack_b8 = puStack_88;
          ppppuStack_b4 = local_84;
          piVar5 = (int *)param_1[0x2f];
          if (*piVar5 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar3 = (bool)hasExclusiveAccess(piVar5);
            if (!bVar3) goto LAB_00bd1690;
            *piVar5 = 0x84;
          }
          else {
            ClearExclusiveLocal();
LAB_00bd1690:
            (**(code **)(piVar5[2] + 0x10))();
          }
          if (local_d0 == (uint ****)&DAT_00000001) {
            FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
            ppppuVar13 = local_a0;
            local_190 = local_9c;
            FUN_00bd2014(&local_d0);
            *(undefined1 *)puVar11 = 1;
            ppppuVar16 = (uint ****)0x80000002;
          }
          else {
            local_190 = local_c4;
            local_b0 = local_c0;
            local_ac = ppppuStack_bc;
            local_a8 = puStack_b8;
            ppppuStack_a4 = ppppuStack_b4;
            local_110 = local_c0;
            local_10c = ppppuStack_bc;
            puStack_108 = puStack_b8;
            ppppuStack_104 = ppppuStack_b4;
            *(undefined1 *)puVar11 = 1;
            ppppuVar13 = local_c8;
            ppppuVar14 = ppppuStack_b4;
            ppppuVar16 = local_cc;
            if (local_cc == (uint ****)0x80000003) goto LAB_00bd1630;
          }
          local_110 = local_b0;
          local_10c = local_ac;
          puStack_108 = local_a8;
          ppppuStack_104 = ppppuStack_a4;
          FUN_00b71be0(local_184);
          *(undefined1 *)(param_1 + 0x31) = 1;
          local_100 = local_110;
          local_fc = local_10c;
          puStack_f8 = puStack_108;
          ppppuStack_f4 = ppppuStack_104;
          if (ppppuVar16 != (uint ****)0x80000002) {
            param_1[0x20] = ppppuVar16;
            param_1[0x21] = ppppuVar13;
            param_1[0x22] = local_190;
            param_1[0x23] = local_110;
            param_1[0x24] = local_10c;
            param_1[0x25] = puStack_108;
            param_1[0x26] = ppppuStack_104;
            ppppuStack_130 = (uint ****)param_1[0x20];
            local_12c = (uint ****)param_1[0x21];
            puStack_128 = (undefined4 *)param_1[0x22];
            ppppuStack_124 = (uint ****)param_1[0x23];
            uStack_120 = param_1[0x24];
            uStack_11c = param_1[0x25];
            uStack_118 = param_1[0x26];
            local_140 = local_a0;
            local_13c = local_9c;
            local_138 = local_98;
            local_134 = local_94;
            param_1[0x28] = 0;
            param_1[0x29] = local_a0;
            param_1[0x2a] = local_9c;
            param_1[0x2b] = local_98;
            param_1[0x2c] = local_94;
            param_1[0x2d] = ppppuStack_130;
            param_1[0x2e] = local_12c;
            param_1[0x2f] = puStack_128;
            param_1[0x30] = ppppuStack_124;
            param_1[0x31] = uStack_120;
            param_1[0x32] = uStack_11c;
            param_1[0x33] = uStack_118;
            param_1[0x34] = 0;
            param_1[0x35] = 4;
            param_1[0x36] = 0;
            local_90 = ppppuStack_130;
            local_8c = local_12c;
            puStack_88 = puStack_128;
            local_84 = ppppuStack_124;
            uStack_80 = uStack_120;
            uStack_7c = uStack_11c;
            uStack_78 = uStack_118;
switchD_00bd0cb4_caseD_4:
            uVar9 = *param_2;
            FUN_0101efcc(&local_a0,param_1 + 0x28,uVar9);
            ppppuVar16 = local_98;
            ppppuVar13 = local_9c;
            ppppuVar14 = local_a0;
            if (local_a0 == (uint ****)&DAT_80000000) {
              uVar2 = 4;
              ppppuVar14 = (uint ****)&DAT_80000000;
            }
            else {
              FUN_00bd3030(param_1 + 0x28);
              local_148 = ppppuVar14;
              local_14c = ppppuVar13;
              local_144 = ppppuVar13 + (int)ppppuVar16 * 3;
              local_150 = ppppuVar13;
              FUN_01018698(&local_160,&local_150);
              local_34 = local_160;
              uStack_30 = uStack_15c;
              uStack_2c = uStack_158;
              ppppuStack_28 = ppppuStack_154;
              param_1[0x28] = 0;
              uVar10 = param_1[0x1f];
              FUN_01bed4e2(param_1 + 0x29,auStack_70,0x4c);
              param_1[0x3c] = uVar10;
              ppppuVar14 = ppppuStack_154;
LAB_00bd18d4:
              iVar6 = FUN_010bd674(param_1 + 0x28,uVar9);
              if (iVar6 == 0) {
                ppppuVar14 = (uint ****)0x0;
                FUN_005f7098(param_1 + 0x28);
                goto LAB_00bd1908;
              }
              uVar2 = 5;
            }
            *(undefined1 *)(param_1 + 0x27) = uVar2;
            goto LAB_00bd18f4;
          }
          param_1[0x20] = 0x80000002;
          local_9c = local_190;
          param_1[0x21] = ppppuVar13;
          param_1[0x22] = local_190;
          local_a0 = ppppuVar13;
          ppppuVar14 = (uint ****)FUN_007afd78(&local_a0);
LAB_00bd1908:
          *(undefined1 *)(param_1 + 0x27) = 1;
          bVar3 = false;
        }
        if (bVar3) {
          uVar2 = 6;
          goto LAB_00bd1920;
        }
        FUN_00bd2fec(param_1 + 0x1c);
      }
      FUN_019bb7e0(param_1[0x18],param_1[0x19]);
      goto LAB_00bd193c;
    }
    uVar2 = 5;
    ppppuVar14 = unaff_r7;
LAB_00bd1920:
    *(undefined1 *)((int)param_1 + 0x6d) = uVar2;
    local_13c = ppppuVar14;
  }
  else {
    *(undefined1 *)(param_1 + 0x22) = 3;
    ppppuVar14 = (uint ****)&local_a0;
LAB_00bd0f54:
    *(undefined1 *)((int)param_1 + 0x6d) = 3;
    local_13c = ppppuVar14;
LAB_00bd1054:
    *(undefined1 *)(param_1 + 0x23) = 3;
  }
  uVar9 = 1;
  ppppuVar14 = local_13c;
LAB_00bd1958:
  return CONCAT44(ppppuVar14,uVar9);
}

