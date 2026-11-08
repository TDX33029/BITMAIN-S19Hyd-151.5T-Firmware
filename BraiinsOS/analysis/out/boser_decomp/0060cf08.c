// FUN_0060cf08 @ 0060cf08 size=3132 calls_out=37 calls_in=1
// strings: background task failed | background task failed | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698

undefined8 FUN_0060cf08(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint ****ppppuVar2;
  uint ****ppppuVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint ****ppppuVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint ****ppppuVar14;
  undefined4 *puVar15;
  uint ****unaff_r7;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined4 *local_128;
  uint ****local_120;
  uint ****local_11c;
  uint ****local_118;
  uint ***local_110;
  uint ***local_10c;
  uint ***local_108;
  uint ****local_104;
  uint ***local_100;
  undefined1 *local_fc;
  undefined4 uStack_f8;
  uint ****ppppuStack_f4;
  uint ****local_f0;
  uint ****local_ec;
  uint ****local_e8;
  uint ****local_e4;
  uint ****local_e0;
  uint ****local_dc;
  uint ****local_d8;
  uint ****local_d4;
  uint ****ppppuStack_d0;
  uint ****local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint ****local_b0;
  uint ****local_ac;
  uint ****local_a8;
  undefined4 uStack_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  uint ****local_94;
  uint ****local_90;
  uint ****local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [60];
  uint ***local_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  uint ****ppppuStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x6d)) {
  case 0:
    iVar8 = param_1[0x10];
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[0x11] = iVar8;
    param_1[6] = param_1[2];
    *(undefined1 *)((int)param_1 + 0x6e) = *(undefined1 *)(param_1 + 0x1b);
    FUN_00f25b04(&local_a0,*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x18),&DAT_00400ca8
                );
    ppppuVar10 = local_9c;
    puVar15 = param_1 + 0x12;
    FUN_019a66e4(puVar15,local_9c,local_98,
                 *(undefined4 *)(&DAT_01c2087c + (uint)*(byte *)((int)param_1 + 0x6e) * 4),
                 *(undefined4 *)(&DAT_0056ada8 + (uint)*(byte *)((int)param_1 + 0x6e) * 4));
    FUN_019bb7e0(local_a0,ppppuVar10);
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x1c] = puVar15;
LAB_0060d0a8:
    param_1[0x1d] = puVar15;
    FUN_019afae4(&local_f0,puVar15[1],puVar15[2]);
    param_1[0x1e] = local_f0;
    param_1[0x1f] = local_ec;
    param_1[0x20] = local_e8;
    *(undefined1 *)(param_1 + 0x22) = 0;
switchD_0060d1d4_caseD_0:
    local_b0 = (uint ****)param_1[0x1e];
    local_ac = (uint ****)param_1[0x1f];
    local_a8 = (uint ****)param_1[0x20];
    uVar11 = FUN_006308d4(&local_b0,&DAT_01c230d0);
    param_1[0x21] = uVar11;
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
      puVar15 = (undefined4 *)param_1[0x1c];
      goto LAB_0060d0a8;
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
      goto switchD_0060d1d4_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar11 = param_1[0x21];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x23)) {
    case 0:
      goto switchD_0060d02c_caseD_0;
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
        goto switchD_0060d180_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case 3:
        uVar11 = param_1[0x21];
      }
    }
    goto LAB_0060d324;
  case 5:
    goto switchD_0060cf28_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x27)) {
    case 0:
      uVar11 = param_1[0x1c];
      uVar12 = param_1[0x1d];
      uVar13 = param_1[0x1e];
      goto LAB_0060d864;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20304);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20304);
    case 3:
      goto switchD_0060cff0_caseD_3;
    case 4:
      uVar11 = *param_2;
      goto LAB_0060d9a0;
    case 5:
      uVar11 = *param_2;
      ppppuVar10 = unaff_r7;
    }
    goto LAB_0060da34;
  }
  local_128 = param_1 + 0x1e;
  ppppuVar10 = (uint ****)&local_a0;
  FUN_014b4c40(ppppuVar10,uVar11,*param_2);
  if (((uint)local_a0 & 1) == 0) {
    local_e0 = local_98;
    local_dc = local_94;
    local_d8 = local_90;
    local_d4 = local_8c;
    piVar7 = (int *)param_1[0x21];
    if (*piVar7 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar5 = (bool)hasExclusiveAccess(piVar7);
      if (!bVar5) goto LAB_0060d1f8;
      *piVar7 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_0060d1f8:
      (**(code **)(piVar7[2] + 0x10))();
    }
    if (local_e0 == (uint ****)0x0 && local_dc == (uint ****)0x0) {
      uVar16 = (uint)local_d8 >> 8 | (int)local_d4 << 0x18;
      ppppuVar14 = local_d8;
      ppppuVar10 = local_d4;
    }
    else {
      FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
      ppppuVar10 = local_9c;
      ppppuVar14 = local_a0;
      FUN_005f3800(&local_e0);
      uVar16 = (uint)ppppuVar14 >> 8 | (int)ppppuVar10 << 0x18;
    }
    ppppuVar10 = (uint ****)((uint)ppppuVar10 >> 8);
    uVar17 = (uint)ppppuVar14 & 0xff;
    *(undefined1 *)(param_1 + 0x22) = 1;
    if (uVar17 == 5) goto LAB_0060d288;
    FUN_00b71be0(local_128);
    *(undefined1 *)(param_1 + 0x23) = 1;
    if (uVar17 != 4) {
      local_a0 = (uint ****)(uVar17 | uVar16 << 8);
      local_9c = (uint ****)((int)ppppuVar10 << 8 | uVar16 >> 0x18);
      ppppuVar10 = (uint ****)FUN_007afd78(&local_a0);
LAB_0060daa4:
      FUN_019bb7e0(param_1[0x12],param_1[0x13]);
      *(undefined1 *)((int)param_1 + 0x6d) = 1;
      uVar11 = 0;
      goto LAB_0060dab8;
    }
    uVar18 = FUN_019b00d0(*(undefined4 *)(param_1[0x11] + 0x14),
                          *(undefined4 *)(param_1[0x11] + 0x18));
    if ((int)uVar18 == 0) {
      FUN_019b9f84(&local_a0);
      ppppuVar10 = (uint ****)FUN_00783ce8(&DAT_00400caf,0x18,&local_a0);
      goto LAB_0060daa4;
    }
    FUN_012fbd94(&local_a0,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    ppppuVar10 = local_9c;
    if (local_a0 != (uint ****)0x0) {
      ppppuVar10 = (uint ****)0x0;
    }
    if (local_a0 == (uint ****)&DAT_00000001) {
      FUN_019b9f84(&local_a0);
      ppppuVar10 = (uint ****)FUN_012c6a30(&DAT_00400cc7,0x1d,&local_a0);
      goto LAB_0060daa4;
    }
    local_a0 = (uint ****)(param_1 + 8);
    *local_a0 = (uint ***)ppppuVar10;
    param_1[10] = (uint ***)param_1[4];
    param_1[9] = local_98;
    *(undefined1 *)(param_1 + 0xe) = 1;
    uVar11 = param_1[0x13];
    uVar12 = param_1[0x14];
    param_1[0xc] = param_1[6];
    param_1[0xb] = param_1[5];
    local_9c = (uint ****)&DAT_0132b6a0;
    local_94 = (uint ****)FUN_01417570;
    local_98 = (uint ****)(param_1 + 10);
    FUN_00664898(&local_e0,&DAT_005b64e9,&local_a0);
    local_b0 = local_e0;
    local_ac = local_dc;
    local_a8 = local_d8;
    FUN_019c8874(param_1 + 0x15,uVar11,uVar12);
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x1c] = param_1[0x11] + 0x10;
switchD_0060d02c_caseD_0:
    iVar8 = param_1[0x1c];
    param_1[0x1d] = iVar8;
    FUN_019afae4(&local_f0,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
    param_1[0x1e] = local_f0;
    param_1[0x1f] = local_ec;
    param_1[0x20] = local_e8;
    *(undefined1 *)(param_1 + 0x22) = 0;
switchD_0060d180_caseD_0:
    local_b0 = (uint ****)param_1[0x1e];
    local_ac = (uint ****)param_1[0x1f];
    local_a8 = (uint ****)param_1[0x20];
    uVar11 = FUN_00631460(&local_b0,&DAT_01c230d0);
    param_1[0x21] = uVar11;
LAB_0060d324:
    puVar15 = param_1 + 0x22;
    FUN_00798728(&local_a0,uVar11,*param_2);
    if (local_a0 == (uint ****)0x2) {
      *(undefined1 *)puVar15 = 3;
      local_d4 = (uint ****)&local_a0;
LAB_0060d34c:
      *(undefined1 *)((int)param_1 + 0x6d) = 4;
      goto LAB_0060d358;
    }
    local_e0 = local_a0;
    local_dc = local_9c;
    local_d8 = local_98;
    local_d4 = local_94;
    ppppuStack_d0 = local_90;
    local_cc = local_8c;
    piVar7 = (int *)param_1[0x21];
    if (*piVar7 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar5 = (bool)hasExclusiveAccess(piVar7);
      if (!bVar5) goto LAB_0060d3a8;
      *piVar7 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_0060d3a8:
      (**(code **)(piVar7[2] + 0x10))();
    }
    if (local_e0 == (uint ****)&DAT_00000001) {
      FUN_019a18a8(&local_a0,0x28,"background task failed",0x16);
      unaff_r7 = local_9c;
      ppppuVar10 = local_a0;
      FUN_005f4200(&local_e0);
      *(undefined1 *)puVar15 = 1;
      ppppuVar14 = (uint ****)&DAT_80000000;
    }
    else {
      *(undefined1 *)puVar15 = 1;
      ppppuVar14 = local_dc;
      unaff_r7 = local_d4;
      ppppuVar10 = local_d8;
      if (local_dc == (uint ****)&DAT_80000001) goto LAB_0060d34c;
    }
    FUN_00b71be0(param_1 + 0x1e);
    *(undefined1 *)(param_1 + 0x23) = 1;
    if (ppppuVar14 == (uint ****)&DAT_80000000) {
      local_a0 = ppppuVar10;
      local_9c = unaff_r7;
      ppppuVar10 = (uint ****)FUN_007afd78(&local_a0);
LAB_0060da9c:
      FUN_019bb7e0(param_1[0x15],param_1[0x16]);
      goto LAB_0060daa4;
    }
    *(undefined1 *)((int)param_1 + 0x85) = 0;
    param_1[0x20] = param_1 + 0x15;
    param_1[0x1c] = ppppuVar10;
    param_1[0x18] = ppppuVar14;
    param_1[0x19] = ppppuVar10;
    param_1[0x1a] = unaff_r7;
    param_1[0x1d] = unaff_r7;
switchD_0060cf28_caseD_5:
    uVar19 = FUN_00616738(param_1 + 0x1c,*param_2);
    ppppuVar10 = (uint ****)(uVar19 >> 0x20);
    if ((uVar19 & 1) == 0) {
      if (*(char *)((int)param_1 + 0x85) == '\x03') {
        piVar7 = (int *)param_1[0x1f];
        if (*piVar7 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar5 = (bool)hasExclusiveAccess(piVar7);
          if (!bVar5) goto LAB_0060d4f0;
          *piVar7 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_0060d4f0:
          (**(code **)(piVar7[2] + 0x10))();
        }
        *(undefined1 *)(param_1 + 0x21) = 0;
      }
      if (ppppuVar10 == (uint ****)0x0) {
        if ((DAT_01d50f88 < 2) &&
           (((DAT_01d4c8b0 - 1 < 2 ||
             ((DAT_01d4c8b0 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c8a8), cVar6 != '\0')))) &&
            (iVar8 = FUN_01aaa278(DAT_01d4c8a8), iVar8 != 0)))) {
          if (*(uint *****)(DAT_01d4c8a8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,0x1c20204);
          }
          local_98 = *(uint *****)(DAT_01d4c8a8 + 0x24);
          local_94 = *(uint *****)(DAT_01d4c8a8 + 0x28);
          local_90 = (uint ****)0x0;
          local_dc = &local_108;
          local_e0 = (uint ****)&local_a0;
          local_104 = (uint ****)&local_f0;
          local_100 = (uint ***)param_1[0x16];
          local_fc = (undefined1 *)param_1[0x17];
          local_f0 = &local_100;
          local_ac = (uint ****)&DAT_00000001;
          local_b0 = (uint ****)&local_e0;
          local_d8 = (uint ****)&DAT_01d2ea4c;
          local_108 = (uint ***)&DAT_005a5c71;
          local_ec = (uint ****)&LAB_019ba78c;
          local_a8 = (uint ****)(DAT_01d4c8a8 + 0x1c);
          local_a0 = *(uint *****)(DAT_01d4c8a8 + 0x1c);
          local_9c = *(uint *****)(DAT_01d4c8a8 + 0x20);
          FUN_0060df78(&local_b0);
        }
        else {
          iVar8 = DAT_01d4c8a8;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_11c = *(uint *****)(DAT_01d4c8a8 + 0x14);
            local_118 = *(uint *****)(DAT_01d4c8a8 + 0x18);
            local_120 = (uint ****)&SUB_00000004;
            DataMemoryBarrier(0xb);
            puVar15 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar15 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)puVar15[3])(pcVar1,&local_120);
            if (iVar9 != 0) {
              local_e8 = (uint ****)(DAT_01d4c8a8 + 0x1c);
              if (*(uint *****)(DAT_01d4c8a8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,0x1c20204);
              }
              local_98 = *(uint *****)(DAT_01d4c8a8 + 0x24);
              local_94 = *(uint *****)(DAT_01d4c8a8 + 0x28);
              local_ac = &local_110;
              local_108 = (uint ***)param_1[0x16];
              local_104 = (uint ****)param_1[0x17];
              local_b0 = (uint ****)&local_a0;
              local_10c = (uint ***)&local_100;
              local_90 = (uint ****)0x0;
              local_a8 = (uint ****)&DAT_01d2ea4c;
              local_110 = (uint ***)&DAT_005a5c71;
              local_100 = (uint ***)&local_108;
              local_ec = (uint ****)&DAT_00000001;
              local_f0 = (uint ****)&local_b0;
              local_fc = &LAB_019ba78c;
              local_e0 = local_120;
              local_dc = local_11c;
              local_d8 = local_118;
              local_a0 = (uint ****)*local_e8;
              local_9c = *(uint *****)(DAT_01d4c8a8 + 0x20);
              FUN_01aaa328(iVar8,pcVar1,puVar15[4],&local_e0,&local_f0);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x27) = 0;
        uVar11 = param_1[0x13];
        uVar12 = param_1[0x14];
        uVar13 = *(undefined4 *)(&DAT_00568848 + (uint)*(byte *)((int)param_1 + 0x6e) * 4);
        param_1[0x1c] = uVar11;
        param_1[0x1d] = uVar12;
        param_1[0x1e] = uVar13;
LAB_0060d864:
        param_1[0x1f] = uVar13;
        *(undefined1 *)(param_1 + 0x31) = 0;
        param_1[0x28] = uVar11;
        param_1[0x29] = uVar12;
switchD_0060cff0_caseD_3:
        uVar11 = *param_2;
        ppppuVar10 = (uint ****)&local_a0;
        FUN_00617128(ppppuVar10,param_1 + 0x28,uVar11);
        ppppuVar3 = local_98;
        ppppuVar2 = local_9c;
        ppppuVar14 = local_a0;
        if (local_a0 == (uint ****)0x80000003) {
          uVar4 = 3;
LAB_0060da50:
          *(undefined1 *)(param_1 + 0x27) = uVar4;
          bVar5 = true;
        }
        else {
          local_b0 = local_94;
          local_ac = local_90;
          local_a8 = local_8c;
          uStack_a4 = uStack_88;
          if (*(char *)(param_1 + 0x31) == '\x03') {
            FUN_00b71be0(param_1 + 0x2c);
          }
          if (ppppuVar14 != (uint ****)0x80000002) {
            param_1[0x20] = ppppuVar14;
            param_1[0x21] = ppppuVar2;
            param_1[0x22] = ppppuVar3;
            param_1[0x23] = local_b0;
            param_1[0x24] = local_ac;
            param_1[0x25] = local_a8;
            param_1[0x26] = uStack_a4;
            ppppuStack_d0 = (uint ****)param_1[0x20];
            local_cc = (uint ****)param_1[0x21];
            uStack_c8 = param_1[0x22];
            uStack_c4 = param_1[0x23];
            uStack_c0 = param_1[0x24];
            uStack_bc = param_1[0x25];
            uStack_b8 = param_1[0x26];
            local_e0 = local_a0;
            local_dc = local_9c;
            local_d8 = local_98;
            local_d4 = local_94;
            param_1[0x28] = 0;
            param_1[0x29] = local_a0;
            param_1[0x2a] = local_9c;
            param_1[0x2b] = local_98;
            param_1[0x2c] = local_94;
            param_1[0x2d] = ppppuStack_d0;
            param_1[0x2e] = local_cc;
            param_1[0x2f] = uStack_c8;
            param_1[0x30] = uStack_c4;
            param_1[0x31] = uStack_c0;
            param_1[0x32] = uStack_bc;
            param_1[0x33] = uStack_b8;
            param_1[0x34] = 0;
            param_1[0x35] = 4;
            param_1[0x36] = 0;
            local_90 = ppppuStack_d0;
            local_8c = local_cc;
            uStack_88 = uStack_c8;
            local_84 = uStack_c4;
            uStack_80 = uStack_c0;
            uStack_7c = uStack_bc;
            uStack_78 = uStack_b8;
LAB_0060d9a0:
            ppppuVar10 = (uint ****)(param_1 + 0x28);
            FUN_0101efcc(&local_a0,ppppuVar10,uVar11);
            ppppuVar3 = local_98;
            ppppuVar2 = local_9c;
            ppppuVar14 = local_a0;
            if (local_a0 == (uint ****)&DAT_80000000) {
              uVar4 = 4;
            }
            else {
              FUN_005f6d48(ppppuVar10);
              local_e8 = ppppuVar14;
              local_ec = ppppuVar2;
              local_e4 = ppppuVar2 + (int)ppppuVar3 * 3;
              local_f0 = ppppuVar2;
              FUN_01018698(&local_100,&local_f0);
              local_34 = local_100;
              puStack_30 = local_fc;
              uStack_2c = uStack_f8;
              ppppuStack_28 = ppppuStack_f4;
              param_1[0x28] = 0;
              uVar12 = param_1[0x1f];
              FUN_01bed4e2(param_1 + 0x29,auStack_70,0x4c);
              param_1[0x3c] = uVar12;
              ppppuVar10 = ppppuStack_f4;
LAB_0060da34:
              iVar8 = FUN_010bd674(param_1 + 0x28,uVar11);
              if (iVar8 == 0) {
                ppppuVar10 = (uint ****)0x0;
                FUN_005f7098(param_1 + 0x28);
                goto LAB_0060da68;
              }
              uVar4 = 5;
            }
            goto LAB_0060da50;
          }
          param_1[0x20] = 0x80000002;
          local_9c = ppppuVar3;
          local_a0 = ppppuVar2;
          param_1[0x21] = ppppuVar2;
          param_1[0x22] = ppppuVar3;
          ppppuVar10 = (uint ****)FUN_007afd78(&local_a0);
LAB_0060da68:
          *(undefined1 *)(param_1 + 0x27) = 1;
          bVar5 = false;
        }
        if (bVar5) {
          uVar4 = 6;
          goto LAB_0060da80;
        }
        FUN_005fc358(param_1 + 0x1c);
      }
      FUN_019bb7e0(param_1[0x18],param_1[0x19]);
      goto LAB_0060da9c;
    }
    uVar4 = 5;
    ppppuVar10 = unaff_r7;
LAB_0060da80:
    *(undefined1 *)((int)param_1 + 0x6d) = uVar4;
    local_d4 = ppppuVar10;
  }
  else {
    *(undefined1 *)(param_1 + 0x22) = 3;
LAB_0060d288:
    *(undefined1 *)((int)param_1 + 0x6d) = 3;
    local_d4 = ppppuVar10;
LAB_0060d358:
    *(undefined1 *)(param_1 + 0x23) = 3;
  }
  uVar11 = 1;
  ppppuVar10 = local_d4;
LAB_0060dab8:
  return CONCAT44(ppppuVar10,uVar11);
}

