// FUN_00e3a488 @ 00e3a488 size=3828 calls_out=31 calls_in=2
// strings: tuner is not enabled | failed to change tuner mode using BOSminer API | failed to change tuner mode using BOSminer API | boser::api::grpc::performanceopen/boser/boser/src/api/grpc/performance.rsevent open/boser/boser/src/api/grpc/performance.rs:1144event open/boser/boser/src/api/grpc/performance.rs:1179event open/boser/boser/src/api/grpc/performance.rs:1171 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e3a488(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  char *pcVar2;
  uint *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined *puVar11;
  int *piVar12;
  undefined1 *puVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  undefined4 ****ppppuVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined4 ****ppppuVar23;
  undefined4 ****ppppuVar24;
  undefined4 ****ppppuVar25;
  bool bVar26;
  double dVar27;
  undefined8 uVar28;
  undefined4 ****local_3a4;
  undefined4 local_3a0;
  int local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined1 auStack_378 [104];
  undefined4 ***local_310;
  int *local_30c;
  int local_308;
  undefined1 auStack_2c0 [80];
  undefined1 auStack_270 [80];
  undefined8 local_220;
  undefined1 auStack_218 [104];
  undefined1 auStack_1b0 [88];
  undefined4 ***local_158;
  uint uStack_154;
  undefined4 ****ppppuStack_150;
  uint *local_14c;
  undefined4 ****local_148;
  uint *puStack_144;
  undefined1 auStack_140 [84];
  undefined4 ****local_ec;
  undefined4 ****local_e8;
  undefined4 local_e4;
  uint *local_e0;
  undefined4 ****local_dc;
  undefined4 local_d8;
  uint *local_d4;
  undefined4 ***local_d0;
  uint uStack_cc;
  undefined4 ****ppppuStack_c8;
  uint *local_c4;
  undefined4 local_c0;
  undefined4 ****local_bc;
  undefined4 local_b8;
  undefined4 ****local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined8 local_a8;
  undefined4 ****local_a0;
  uint *local_9c;
  undefined4 ****local_98;
  uint *puStack_94;
  undefined4 ****local_48;
  undefined4 local_44;
  uint *local_40;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x19)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x65) = 0;
    param_2[0x13] = (int *)param_2[0x12];
    param_2[8] = *param_2;
    param_2[9] = param_2[1];
    param_2[10] = param_2[2];
    param_2[0xb] = param_2[3];
    param_2[0xc] = param_2[4];
    param_2[0xd] = param_2[5];
    param_2[0xe] = param_2[6];
    param_2[0xf] = param_2[7];
    iVar10 = *(int *)param_2[0x12];
    *(undefined1 *)(param_2 + 0x1d) = 0;
    iVar10 = iVar10 + 8;
    param_2[0x1a] = iVar10;
LAB_00e3a5d4:
    uVar6 = FUN_00b8a1bc(*(int *)(iVar10 + 0x34) + 8);
    puVar11 = &DAT_01c13d9c;
    param_2[0x1b] = uVar6;
    param_2[0x1c] = &DAT_01c13d9c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c174d8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c174d8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1d)) {
    case 0:
      iVar10 = param_2[0x1a];
      goto LAB_00e3a5d4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar6 = param_2[0x1b];
      puVar11 = (undefined *)param_2[0x1c];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
      goto switchD_00e3a588_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c183ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c183ac);
    }
    goto switchD_00e3a588_caseD_3;
  case 5:
    goto switchD_00e3a4b4_caseD_5;
  case 6:
    puVar20 = (uint *)((int)param_2 + 0xb1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)puVar20) {
    case 0:
      uVar22 = param_2[0x1a];
      ppppuVar24 = (undefined4 ****)param_2[0x1b];
      dVar27 = *(double *)(param_2 + 0x1c);
      param_2[0x27] = param_2[0x22];
      param_2[0x28] = param_2[0x23];
      *(double *)(param_2 + 0x20) = dVar27;
      param_2[0x1e] = uVar22;
      param_2[0x1f] = ppppuVar24;
      param_2[0x29] = param_2[0x24];
      param_2[0x2a] = param_2[0x25];
      param_2[0x2b] = param_2[0x26];
      if (*(char *)(param_2 + 0x2c) != '\x02') {
        if (*(char *)(param_2 + 0x2c) == '\x01') {
          *(undefined1 *)(param_2 + 0x43) = 0;
          goto switchD_00e3a528_caseD_3;
        }
        puVar17 = (uint *)param_2[0x2b];
        local_a8 = dVar27;
        if (*puVar17 == 2 && puVar17[1] == 0) {
          local_a0 = (undefined4 ****)0x0;
          local_98 = (undefined4 ****)CONCAT22(local_98._2_2_,0x102);
LAB_00e3b2b8:
          uVar8 = (uint)local_98 & 0xff;
          bVar26 = uVar8 != 2;
          if (!bVar26) {
            uVar8 = (uint)local_98 >> 8 & 0xff;
          }
          if ((bVar26 || uVar8 != 2) ||
             (local_a0 != (undefined4 ****)0x0 ||
              (uVar22 != 0 || ppppuVar24 != (undefined4 ****)0x0))) {
            local_a8._0_4_ = SUB84(dVar27,0);
            local_a8._4_4_ = (uint)((ulonglong)dVar27 >> 0x20);
            local_158 = (undefined4 ****)local_a8;
            uStack_154 = local_a8._4_4_;
            ppppuStack_150 = local_a0;
            local_14c = local_9c;
            local_148 = local_98;
            puStack_144 = puStack_94;
          }
          else {
            ppppuVar24 = (undefined4 ****)0x0;
            uVar22 = 2;
          }
          ppppuVar19 = local_148;
          *puVar17 = uVar22;
          puVar17[1] = (uint)ppppuVar24;
          puVar17[2] = (uint)local_158;
          puVar17[3] = uStack_154;
          puVar17[4] = (uint)ppppuStack_150;
          puVar17[5] = (uint)local_14c;
          puVar17[6] = (uint)local_148;
          puVar17[7] = (uint)puStack_144;
          FUN_019e0044(*(int *)(*(int *)param_2[0x27] + 0x54) + 8);
          puVar21 = puStack_144;
        }
        else {
          local_a0 = (undefined4 ****)puVar17[4];
          local_9c = (uint *)puVar17[5];
          ppppuVar19 = (undefined4 ****)&DAT_00000001;
          local_98 = (undefined4 ****)CONCAT22(local_98._2_2_,0x100);
          local_98 = (undefined4 ****)CONCAT31(local_98._1_3_,(char)puVar17[6]);
          if (*(char *)((int)puVar17 + 0x19) != '\x01') goto LAB_00e3b2b8;
          puVar21 = (uint *)&DAT_00000001;
          if ((*puVar17 & 1) == 0) {
            if ((uVar22 & 1) != 0) goto LAB_00e3b2b8;
          }
          else if ((uVar22 & *(double *)(puVar17 + 2) == dVar27) == 0) goto LAB_00e3b2b8;
        }
        goto LAB_00e3b794;
      }
      *(undefined1 *)(param_2 + 0x43) = 0;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c174e8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c174e8);
    case 3:
switchD_00e3a528_caseD_3:
      FUN_00e100c8(&local_b0,param_2 + 0x2e,param_3);
      puVar21 = local_9c;
      ppppuVar24 = local_a0;
      ppppuVar23 = local_ac;
      ppppuVar25 = local_b0;
      if (local_b0 == (undefined4 ****)&SUB_00000004 && local_ac == (undefined4 ****)0x0) {
        uVar4 = 3;
        goto LAB_00e3b164;
      }
      local_3a4 = (undefined4 ****)local_a8;
      local_3a0 = local_a8._4_4_;
      FUN_01bed4e2(auStack_140,&local_98,0x50);
      if (*(char *)(param_2 + 0x43) == '\x03') {
        FUN_00e1003c(param_2 + 0x2e);
      }
      if (ppppuVar25 != (undefined4 ****)&DAT_00000003 || ppppuVar23 != (undefined4 ****)0x0) {
        puVar13 = auStack_140;
        goto LAB_00e3b1c0;
      }
      piVar12 = (int *)param_2[0x2b];
      if (*piVar12 == 2 && piVar12[1] == 0) {
        iVar10 = param_2[0x28];
LAB_00e3b044:
        bVar1 = *(byte *)(iVar10 + 0x74);
      }
      else {
        if (*(byte *)(piVar12 + 6) == 2) {
          iVar10 = param_2[0x28];
          goto LAB_00e3b044;
        }
        bVar1 = *(byte *)(piVar12 + 6) & 1;
      }
      if (bVar1 != 0) {
        *(undefined1 *)(param_2 + 0x60) = 0;
        param_2[0x2e] = param_2[0x27];
        goto switchD_00e3a528_caseD_4;
      }
      FUN_01a71aac(&local_b0,9,"tuner is not enabled",0x14);
      puVar21 = local_9c;
      ppppuVar24 = local_a0;
      ppppuVar23 = local_ac;
      ppppuVar25 = local_b0;
      local_3a0 = local_a8._4_4_;
      local_3a4 = (undefined4 ****)local_a8;
      FUN_01bed4e2(auStack_218,&local_98,0x50);
      goto LAB_00e3b1cc;
    case 4:
switchD_00e3a528_caseD_4:
      puVar9 = param_2 + 0x2e;
      FUN_00e38430(&local_b0,puVar9,param_3);
      puVar21 = local_9c;
      ppppuVar24 = local_a0;
      ppppuVar23 = local_ac;
      ppppuVar25 = local_b0;
      if (local_b0 == (undefined4 ****)&SUB_00000004 && local_ac == (undefined4 ****)0x0) {
        uVar4 = 4;
        goto LAB_00e3b164;
      }
      ppppuVar19 = (undefined4 ****)local_a8;
      local_3a4 = (undefined4 ****)local_a8;
      uVar6 = local_a8._4_4_;
      local_3a0 = local_a8._4_4_;
      FUN_01bed4e2(auStack_1b0,&local_98,0x50);
      cVar5 = *(char *)(param_2 + 0x60);
      bVar26 = cVar5 == '\x03';
      if (bVar26) {
        cVar5 = *(char *)(param_2 + 0x5f);
      }
      if (bVar26 && cVar5 == '\x03') {
        FUN_00df984c(param_2 + 0x30);
      }
      if (ppppuVar25 == (undefined4 ****)&DAT_00000003 && ppppuVar23 == (undefined4 ****)0x0) {
        param_2[0x30] = ppppuVar24;
        puVar7 = (undefined8 *)(param_2[0x28] + 0x30);
        *puVar9 = ppppuVar19;
        param_2[0x2f] = uVar6;
        if ((param_2[0x1e] & 1) != 0) {
          puVar7 = (undefined8 *)(param_2 + 0x20);
        }
        uVar28 = *puVar7;
        param_2[0x32] = 4;
        param_2[0x33] = 0;
        *(undefined1 *)(param_2 + 0x19f) = 0;
        param_2[0x19e] = puVar9;
        *(undefined8 *)(param_2 + 0x34) = uVar28;
        goto switchD_00e3a528_caseD_5;
      }
      puVar13 = auStack_1b0;
      goto LAB_00e3b1c0;
    case 5:
switchD_00e3a528_caseD_5:
      FUN_00e0d514(&local_b0,param_2 + 0x32,param_3);
      dVar27 = local_a8;
      ppppuVar25 = local_ac;
      ppppuVar24 = local_b0;
      if (local_b0 == (undefined4 ****)0x80000006) {
        uVar4 = 5;
        goto LAB_00e3b164;
      }
      ppppuVar19 = (undefined4 ****)local_a8;
      uVar6 = local_a8._4_4_;
      if (*(char *)(param_2 + 0x19f) == '\x03') {
        if (*(char *)(param_2 + 0x19c) == '\x03') {
          puVar9 = param_2 + 0xea;
        }
        else {
          if (*(char *)(param_2 + 0x19c) != '\0') goto LAB_00e3b330;
          puVar9 = param_2 + 0x38;
        }
        FUN_00df9ef8(puVar9);
      }
LAB_00e3b330:
      puVar21 = puVar20;
      if (ppppuVar24 == (undefined4 ****)&DAT_80000005) {
        if (ppppuVar25 != (undefined4 ****)&DAT_80000000) {
          if (ppppuVar25 == (undefined4 ****)&DAT_80000001) {
            if (ppppuVar19 == (undefined4 ****)0x0) goto LAB_00e3b72c;
          }
          else {
            local_b0 = ppppuVar25;
            local_ac = ppppuVar19;
            local_a8 = (double)CONCAT44(local_a8._4_4_,uVar6);
            ppppuVar19 = (undefined4 ****)FUN_00eace94(&local_b0);
          }
          goto LAB_00e3b384;
        }
      }
      else {
        local_b0 = ppppuVar24;
        local_ac = ppppuVar25;
        local_a8 = dVar27;
        ppppuVar19 = (undefined4 ****)FUN_00a98bac(&local_b0);
LAB_00e3b384:
        local_ec = ppppuVar19;
        if ((DAT_01d50f88 < 4) &&
           ((DAT_01d4c428 - 1 < 2 ||
            ((DAT_01d4c428 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c420), cVar5 != '\0')))))) {
          iVar10 = FUN_01aaa278(DAT_01d4c420);
          if (iVar10 == 0) goto LAB_00e3b588;
          local_40 = (uint *)(DAT_01d4c420 + 0x1c);
          local_158 = (undefined4 ***)*local_40;
          uStack_154 = *(uint *)(DAT_01d4c420 + 0x20);
          if (uStack_154 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174f8);
          }
          ppppuStack_150 = *(undefined4 *****)(DAT_01d4c420 + 0x24);
          local_14c = *(uint **)(DAT_01d4c420 + 0x28);
          local_c0 = 0;
          local_d8 = 0x5d;
          local_dc = (undefined4 ****)0x3f0ad4;
          local_d0 = local_158;
          uStack_cc = uStack_154;
          ppppuStack_c8 = ppppuStack_150;
          local_c4 = local_14c;
          if (uStack_154 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174f8);
          }
          local_a0 = &local_bc;
          local_ac = &local_dc;
          local_b0 = &local_d0;
          local_44 = 2;
          local_bc = &local_ec;
          local_48 = &local_b0;
          ppppuVar19 = (undefined4 ****)&DAT_00000001;
          local_148 = (undefined4 ****)&DAT_00000001;
          local_9c = (uint *)&DAT_01c1e0b8;
          local_a8 = (double)CONCAT44(&local_158,&DAT_01d2ea4c);
          FUN_00e3c04c(&local_48);
          puVar21 = (uint *)&DAT_01d2ea4c;
        }
        else {
LAB_00e3b588:
          iVar10 = DAT_01d4c420;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_e4 = *(undefined4 *)(DAT_01d4c420 + 0x14);
            local_e0 = *(uint **)(DAT_01d4c420 + 0x18);
            local_e8 = (undefined4 ****)0x2;
            DataMemoryBarrier(0xb);
            puVar17 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar17 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            ppppuVar19 = &local_e8;
            iVar16 = (*(code *)puVar17[3])(pcVar2,ppppuVar19);
            puVar3 = local_e0;
            puVar21 = &DAT_01cfc5e0;
            if (iVar16 != 0) {
              local_d4 = (uint *)(DAT_01d4c420 + 0x1c);
              local_158 = (undefined4 ***)*local_d4;
              uStack_154 = *(uint *)(DAT_01d4c420 + 0x20);
              if (uStack_154 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174f8);
              }
              ppppuStack_150 = *(undefined4 *****)(DAT_01d4c420 + 0x24);
              local_14c = *(uint **)(DAT_01d4c420 + 0x28);
              local_c0 = 0;
              local_b8 = 0x5d;
              local_bc = (undefined4 ****)0x3f0ad4;
              local_d0 = local_158;
              uStack_cc = uStack_154;
              ppppuStack_c8 = ppppuStack_150;
              local_c4 = local_14c;
              if (uStack_154 == 1) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174f8);
              }
              local_a0 = &local_b4;
              local_ac = &local_bc;
              local_b0 = &local_d0;
              local_dc = &local_b0;
              local_d8 = 2;
              local_b4 = &local_ec;
              local_148 = (undefined4 ****)&DAT_00000001;
              local_9c = (uint *)&DAT_01c1e0b8;
              local_a8 = (double)CONCAT44(&local_158,&DAT_01d2ea4c);
              local_48 = local_e8;
              local_44 = local_e4;
              local_40 = local_e0;
              FUN_01aaa328(iVar10,pcVar2,puVar17[4],&local_48,&local_dc);
              puVar21 = puVar3;
            }
          }
        }
        *(undefined1 *)(*(int *)(*(int *)param_2[0x27] + 0x58) + 8) = 1;
        (*(code *)**local_ec)();
      }
LAB_00e3b72c:
      piVar12 = (int *)param_2[0x2b];
      iVar10 = piVar12[1];
      if (*piVar12 == 2 && iVar10 == 0) {
        uVar4 = 2;
        iVar16 = 0;
      }
      else {
        iVar16 = piVar12[4];
        iVar10 = piVar12[5];
        uVar4 = (undefined1)piVar12[6];
      }
      uVar28 = *(undefined8 *)(param_2 + 0x20);
      iVar15 = param_2[0x1e];
      iVar18 = param_2[0x1f];
      piVar12[4] = iVar16;
      piVar12[5] = iVar10;
      *(undefined1 *)((int)piVar12 + 0x19) = 1;
      *(undefined1 *)(piVar12 + 6) = uVar4;
      *piVar12 = iVar15;
      piVar12[1] = iVar18;
      *(undefined8 *)(piVar12 + 2) = uVar28;
      FUN_019e0044(*(int *)(*(int *)param_2[0x27] + 0x54) + 8);
      FUN_0084ec48(param_2 + 0x2e);
      ppppuVar24 = (undefined4 ****)(param_2 + 10);
      goto LAB_00e3b794;
    }
    ppppuVar19 = (undefined4 ****)(param_2 + 0x2e);
    FUN_00e100c8(&local_b0,ppppuVar19,param_3);
    puVar21 = local_9c;
    ppppuVar24 = local_a0;
    ppppuVar23 = local_ac;
    ppppuVar25 = local_b0;
    if (local_b0 == (undefined4 ****)&SUB_00000004 && local_ac == (undefined4 ****)0x0) {
      uVar4 = 6;
LAB_00e3b164:
      *(undefined1 *)puVar20 = uVar4;
LAB_00e3b168:
      *param_1 = 4;
      param_1[1] = 0;
      uVar4 = 6;
      goto LAB_00e3b900;
    }
    local_3a4 = (undefined4 ****)local_a8;
    local_3a0 = local_a8._4_4_;
    FUN_01bed4e2(auStack_378,&local_98,0x50);
    if (*(char *)(param_2 + 0x43) == '\x03') {
      FUN_00e1003c(ppppuVar19);
    }
    if (ppppuVar25 == (undefined4 ****)&DAT_00000003 && ppppuVar23 == (undefined4 ****)0x0) {
      piVar12 = (int *)param_2[0x2b];
      iVar10 = piVar12[1];
      if (*piVar12 == 2 && iVar10 == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = piVar12[4];
        iVar10 = piVar12[5];
      }
      uVar28 = *(undefined8 *)(param_2 + 0x20);
      iVar15 = param_2[0x1e];
      iVar18 = param_2[0x1f];
      *(undefined2 *)(piVar12 + 6) = 0x101;
      piVar12[4] = iVar16;
      piVar12[5] = iVar10;
      *piVar12 = iVar15;
      piVar12[1] = iVar18;
      *(undefined8 *)(piVar12 + 2) = uVar28;
      *(undefined1 *)(*(int *)(*(int *)param_2[0x27] + 0x58) + 8) = 1;
      FUN_019e0044(*(int *)(*(int *)param_2[0x27] + 0x54) + 8);
LAB_00e3b794:
      FUN_019f8c54(param_2[0x29],param_2[0x2a]);
      FUN_01bed4e2(&local_310,auStack_218,0x50);
      ppppuVar23 = (undefined4 ****)0x0;
      ppppuVar25 = (undefined4 ****)&DAT_00000003;
      *(undefined1 *)puVar20 = 1;
      local_3a4 = ppppuVar19;
    }
    else {
      puVar13 = auStack_378;
LAB_00e3b1c0:
      FUN_01bed4e2(auStack_218,puVar13,0x50);
LAB_00e3b1cc:
      FUN_019f8c54(param_2[0x29],param_2[0x2a]);
      FUN_01bed4e2(&local_310,auStack_218,0x50);
      *(undefined1 *)puVar20 = 1;
      if (ppppuVar25 == (undefined4 ****)&SUB_00000004 && ppppuVar23 == (undefined4 ****)0x0)
      goto LAB_00e3b168;
    }
    FUN_01bed4e2(auStack_2c0,&local_310,0x50);
    FUN_00e3bf2c(param_2 + 0x1a);
    if (ppppuVar25 != (undefined4 ****)&DAT_00000003 || ppppuVar23 != (undefined4 ****)0x0) {
      FUN_01bed4e2(auStack_270,auStack_2c0,0x50);
      local_220 = (double)CONCAT44(local_3a0,local_3a4);
      if (*(char *)((int)param_2 + 0x65) != '\0') {
        FUN_019f8c54(param_2[0x16],param_2[0x17]);
      }
      *(undefined1 *)((int)param_2 + 0x65) = 0;
      FUN_019f8c54(param_2[0x10],1);
      goto LAB_00e3b89c;
    }
    pdVar14 = (double *)(param_2[0x15] + 0x30);
    if ((param_2[0x1a4] & 1) != 0) {
      pdVar14 = (double *)(param_2 + 0x1a6);
    }
    local_220 = *pdVar14;
    *(undefined1 *)((int)param_2 + 0x65) = 0;
    FUN_019f8c54(param_2[0x10],1);
    piVar12 = (int *)param_2[0x14];
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar12;
      bVar26 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar26);
    *piVar12 = iVar10 + -1;
    ppppuVar23 = (undefined4 ****)0x0;
    ppppuVar25 = (undefined4 ****)&DAT_00000003;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(param_2[0x14]);
    }
    goto LAB_00e3b8cc;
  }
  iVar10 = (**(code **)(puVar11 + 0xc))(uVar6,param_3);
  if (iVar10 == 0) {
    uVar4 = 3;
    *(undefined1 *)(param_2 + 0x1d) = 3;
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    FUN_01139b38(param_2[0x1b],param_2[0x1c]);
    param_2[0x14] = iVar10;
    *(undefined1 *)(param_2 + 0x1d) = 1;
    FUN_00e381bc(&local_b0,iVar10 + 8,1);
    puVar21 = local_9c;
    ppppuVar24 = local_a0;
    local_220 = local_a8;
    ppppuVar23 = local_ac;
    ppppuVar25 = local_b0;
    if (local_b0 == (undefined4 ****)&DAT_00000003 && local_ac == (undefined4 ****)0x0) {
      param_2[0x15] = (undefined4 ****)local_a8;
      param_2[0x1a] = *(int *)param_2[0x13] + 8;
      *(undefined1 *)(param_2 + 0x29) = 0;
switchD_00e3a588_caseD_0:
      *(undefined1 *)(param_2 + 0x28) = 0;
      param_2[0x1b] = param_2[0x1a] + 0x3c;
switchD_00e3a588_caseD_3:
      uVar28 = FUN_00df39fc(param_2 + 0x1b,param_3);
      iVar10 = (int)uVar28;
      if (iVar10 == 0) {
        uVar4 = 3;
        iVar10 = 0;
      }
      else {
        if (*(char *)(param_2 + 0x28) == '\x03') {
          cVar5 = *(char *)(param_2 + 0x27);
          bVar26 = cVar5 == '\x03';
          if (bVar26) {
            cVar5 = *(char *)(param_2 + 0x26);
          }
          if (bVar26 && cVar5 == '\x03') {
            FUN_0193c3cc(param_2 + 0x1e);
          }
        }
        uVar4 = 1;
      }
      *(undefined1 *)(param_2 + 0x29) = uVar4;
      if (iVar10 == 0) {
        uVar4 = 4;
        *param_1 = 4;
        param_1[1] = 0;
      }
      else {
        param_2[0x10] = iVar10;
        param_2[0x11] = (int)((ulonglong)uVar28 >> 0x20);
        FUN_00bba254(param_2 + 0x1a);
        *(undefined1 *)(param_2 + 0x27) = 0;
        param_2[0x1a] = param_2[0x11] + 0x44;
switchD_00e3a4b4_caseD_5:
        FUN_00bd2a8c(&local_388,param_2 + 0x1a,param_3);
        if (local_388 != 0) {
          *(undefined1 *)((int)param_2 + 0x65) = 1;
          param_2[0x16] = local_388;
          param_2[0x17] = uStack_384;
          param_2[0x18] = uStack_380;
          if (*(char *)(param_2 + 0x27) == '\x03') {
            cVar5 = *(char *)(param_2 + 0x26);
            bVar26 = cVar5 == '\x03';
            if (bVar26) {
              cVar5 = *(char *)(param_2 + 0x25);
            }
            if (bVar26 && cVar5 == '\x03') {
              FUN_0193c3cc(param_2 + 0x1d);
            }
          }
          piVar12 = (int *)param_2[0x18];
          local_30c = param_2 + 0x1a0;
          iVar15 = *piVar12;
          iVar18 = piVar12[1];
          iVar10 = 0;
          iVar16 = 0;
          if (iVar15 != 2 || iVar18 != 0) {
            *(undefined8 *)(param_2 + 0x1a2) = *(undefined8 *)(piVar12 + 2);
            iVar10 = iVar15;
            iVar16 = iVar18;
          }
          *local_30c = iVar10;
          iVar15 = *piVar12;
          param_2[0x1a1] = iVar16;
          if (iVar15 == 2 && piVar12[1] == 0) {
            local_308 = param_2[0x15];
            cVar5 = *(char *)(local_308 + 0x75);
          }
          else {
            local_308 = param_2[0x15];
            cVar5 = *(char *)(local_308 + 0x75);
            if (*(char *)((int)piVar12 + 0x19) != '\x02') {
              cVar5 = *(char *)((int)piVar12 + 0x19);
            }
          }
          local_d0 = (undefined4 ***)(CONCAT31(local_d0._1_3_,cVar5) & 0xffffff01);
          local_310 = &local_d0;
                    /* WARNING: Could not recover jumptable at 0x00e3a884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00e3a888 + *(int *)(&DAT_00e3a888 + param_2[8] * 4)))(iVar10,0,0);
          return;
        }
        *param_1 = 4;
        param_1[1] = 0;
        uVar4 = 5;
      }
    }
    else {
      FUN_01bed4e2(auStack_270,&local_98,0x50);
LAB_00e3b89c:
      piVar12 = (int *)param_2[0x14];
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar12;
        bVar26 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar26);
      *piVar12 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a967c0(param_2[0x14]);
      }
LAB_00e3b8cc:
      param_1[2] = (undefined4)local_220;
      param_1[3] = local_220._4_4_;
      param_1[4] = ppppuVar24;
      *param_1 = ppppuVar25;
      param_1[1] = ppppuVar23;
      param_1[5] = puVar21;
      FUN_01bed4e2(param_1 + 6,auStack_270,0x50);
      uVar4 = 1;
    }
  }
LAB_00e3b900:
  *(undefined1 *)(param_2 + 0x19) = uVar4;
  return;
}

