// FUN_00e36808 @ 00e36808 size=3816 calls_out=32 calls_in=5
// strings: tuner is not enabled | failed to change tuner mode using BOSminer API | failed to change tuner mode using BOSminer API | boser::api::grpc::performanceopen/boser/boser/src/api/grpc/performance.rsevent open/boser/boser/src/api/grpc/performance.rs:1144event open/boser/boser/src/api/grpc/performance.rs:1179event open/boser/boser/src/api/grpc/performance.rs:1171 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e36808(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  char *pcVar2;
  undefined4 ****ppppuVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 ****ppppuVar12;
  int iVar13;
  undefined4 ****ppppuVar14;
  undefined4 ****ppppuVar15;
  uint uVar16;
  undefined4 ****ppppuVar17;
  undefined1 *puVar18;
  bool bVar19;
  uint in_fpscr;
  double in_d16;
  undefined8 uVar20;
  undefined4 ****local_3b4;
  int local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined1 auStack_388 [104];
  undefined1 auStack_320 [88];
  undefined1 auStack_2c8 [88];
  undefined1 auStack_270 [88];
  undefined1 auStack_218 [104];
  undefined1 auStack_1b0 [96];
  undefined4 ***local_150;
  undefined4 *local_14c;
  int local_148;
  undefined4 ****local_fc;
  undefined4 ****local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 ****local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined4 ***local_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 ****local_c8;
  undefined4 local_c4;
  undefined4 ***pppuStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 ****local_ac;
  undefined4 ****local_a8;
  undefined4 ****local_a4;
  undefined4 ****local_a0;
  undefined4 ****local_9c;
  undefined4 ****local_98;
  undefined *local_94 [21];
  undefined4 ****local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x19)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0x66) = 0;
    param_2[0x13] = param_2[0x12];
    param_2[8] = *param_2;
    param_2[9] = param_2[1];
    param_2[10] = param_2[2];
    param_2[0xb] = param_2[3];
    param_2[0xc] = param_2[4];
    param_2[0xd] = param_2[5];
    param_2[0xe] = param_2[6];
    param_2[0xf] = param_2[7];
    FUN_00a21428(&local_a8,*(undefined4 *)((int)param_2 + *(int *)("$" + param_2[8] * 4)));
    local_3b4 = local_98;
    ppppuVar15 = local_9c;
    ppppuVar17 = local_a4;
    ppppuVar14 = local_a8;
    ppppuVar12 = (undefined4 ****)((uint)local_a0 & 0xff);
    if (local_a8 == (undefined4 ****)&DAT_00000003 && local_a4 == (undefined4 ****)0x0) {
      *(undefined1 *)((int)param_2 + 0x65) = local_a0._0_1_;
      iVar11 = *(int *)param_2[0x13];
      *(undefined1 *)(param_2 + 0x1d) = 0;
      iVar11 = iVar11 + 8;
      param_2[0x1a] = iVar11;
LAB_00e369ac:
      uVar6 = FUN_00b8a1bc(*(int *)(iVar11 + 0x34) + 8);
      puVar8 = &DAT_01c13d9c;
      param_2[0x1b] = uVar6;
      param_2[0x1c] = &DAT_01c13d9c;
      goto LAB_00e36a08;
    }
    uVar16 = (uint)local_a0 >> 8;
    FUN_01bed4e2(auStack_270,local_94,0x54);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c174a8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c174a8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1d)) {
    case 0:
      iVar11 = param_2[0x1a];
      goto LAB_00e369ac;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar6 = param_2[0x1b];
      puVar8 = (undefined *)param_2[0x1c];
    }
LAB_00e36a08:
    iVar11 = (**(code **)(puVar8 + 0xc))(uVar6,param_3);
    if (iVar11 == 0) {
      uVar4 = 3;
      *(undefined1 *)(param_2 + 0x1d) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e37cc8;
    }
    FUN_01139b38(param_2[0x1b],param_2[0x1c]);
    param_2[0x14] = iVar11;
    *(undefined1 *)(param_2 + 0x1d) = 1;
    FUN_00e381bc(&local_a8,iVar11 + 8,0);
    local_3b4 = local_98;
    ppppuVar15 = local_9c;
    ppppuVar12 = local_a0;
    ppppuVar17 = local_a4;
    ppppuVar14 = local_a8;
    if (local_a8 == (undefined4 ****)&DAT_00000003 && local_a4 == (undefined4 ****)0x0) {
      param_2[0x15] = local_a0;
      param_2[0x1a] = *(int *)param_2[0x13] + 8;
      *(undefined1 *)(param_2 + 0x29) = 0;
      goto switchD_00e3695c_caseD_0;
    }
    FUN_01bed4e2(auStack_270,local_94,0x54);
LAB_00e37c6c:
    piVar7 = (int *)param_2[0x14];
    uVar16 = (uint)ppppuVar12 >> 8;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar7;
      bVar19 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar19);
    *piVar7 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(param_2[0x14]);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
switchD_00e3695c_caseD_0:
      *(undefined1 *)(param_2 + 0x28) = 0;
      param_2[0x1b] = param_2[0x1a] + 0x3c;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c183ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c183ac);
    }
    uVar20 = FUN_00df39fc(param_2 + 0x1b,param_3);
    iVar11 = (int)uVar20;
    if (iVar11 == 0) {
      uVar4 = 3;
      iVar11 = 0;
    }
    else {
      if (*(char *)(param_2 + 0x28) == '\x03') {
        cVar5 = *(char *)(param_2 + 0x27);
        bVar19 = cVar5 == '\x03';
        if (bVar19) {
          cVar5 = *(char *)(param_2 + 0x26);
        }
        if (bVar19 && cVar5 == '\x03') {
          FUN_0193c3cc(param_2 + 0x1e);
        }
      }
      uVar4 = 1;
    }
    *(undefined1 *)(param_2 + 0x29) = uVar4;
    if (iVar11 == 0) {
      uVar4 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e37cc8;
    }
    param_2[0x10] = iVar11;
    param_2[0x11] = (int)((ulonglong)uVar20 >> 0x20);
    FUN_00bba254(param_2 + 0x1a);
    *(undefined1 *)(param_2 + 0x27) = 0;
    param_2[0x1a] = param_2[0x11] + 0x44;
  case 5:
    FUN_00bd2a8c(&local_398,param_2 + 0x1a,param_3);
    if (local_398 != 0) {
      *(undefined1 *)((int)param_2 + 0x66) = 1;
      param_2[0x16] = local_398;
      param_2[0x17] = uStack_394;
      param_2[0x18] = uStack_390;
      if (*(char *)(param_2 + 0x27) == '\x03') {
        cVar5 = *(char *)(param_2 + 0x26);
        bVar19 = cVar5 == '\x03';
        if (bVar19) {
          cVar5 = *(char *)(param_2 + 0x25);
        }
        if (bVar19 && cVar5 == '\x03') {
          FUN_0193c3cc(param_2 + 0x1d);
        }
      }
      piVar7 = (int *)param_2[0x18];
      iVar11 = piVar7[1];
      if (*piVar7 == 2 && iVar11 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = piVar7[4];
        iVar11 = piVar7[5];
      }
      param_2[0x1a] = iVar10;
      param_2[0x1b] = iVar11;
      if (*piVar7 == 2 && piVar7[1] == 0) {
        local_148 = param_2[0x15];
        cVar5 = *(char *)(local_148 + 0x75);
      }
      else {
        local_148 = param_2[0x15];
        cVar5 = *(char *)(local_148 + 0x75);
        if (*(char *)((int)piVar7 + 0x19) != '\x02') {
          cVar5 = *(char *)((int)piVar7 + 0x19);
        }
      }
      local_dc = (undefined4 ***)(CONCAT31(local_dc._1_3_,cVar5) & 0xffffff01);
      local_150 = &local_dc;
                    /* WARNING: Could not recover jumptable at 0x00e36c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      local_14c = param_2 + 0x1a;
      (*(code *)(&DAT_00e36c28 + *(int *)(&DAT_00e36c28 + param_2[8] * 4)))();
      return;
    }
    *param_1 = 4;
    param_1[1] = 0;
    uVar4 = 5;
    goto LAB_00e37cc8;
  case 6:
    puVar18 = (undefined1 *)((int)param_2 + 0xb1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*puVar18) {
    case 0:
      uVar16 = param_2[0x1e];
      iVar11 = param_2[0x1f];
      param_2[0x26] = param_2[0x21];
      param_2[0x25] = param_2[0x20];
      param_2[0x27] = uVar16;
      param_2[0x28] = iVar11;
      param_2[0x29] = param_2[0x22];
      param_2[0x2a] = param_2[0x23];
      param_2[0x2b] = param_2[0x24];
      if (*(char *)(param_2 + 0x2c) == '\x02') {
        *(undefined1 *)(param_2 + 0x42) = 0;
        goto switchD_00e36900_caseD_6;
      }
      if (*(char *)(param_2 + 0x2c) == '\x01') {
        *(undefined1 *)(param_2 + 0x42) = 0;
        goto switchD_00e36900_caseD_3;
      }
      puVar9 = (undefined4 *)param_2[0x2b];
      ppppuVar12 = (undefined4 ****)*puVar9;
      iVar10 = puVar9[1];
      if (ppppuVar12 == (undefined4 ****)0x2 && iVar10 == 0) {
        ppppuVar15 = (undefined4 ****)0x2;
        ppppuVar12 = (undefined4 ****)0x0;
        iVar10 = 0;
LAB_00e374c8:
        puVar9[4] = uVar16;
        *puVar9 = ppppuVar12;
        *(undefined1 *)((int)puVar9 + 0x19) = 0;
        *(char *)(puVar9 + 6) = (char)ppppuVar15;
        puVar9[5] = iVar11;
        *(double *)(puVar9 + 2) = in_d16;
        puVar9[1] = iVar10;
        FUN_019e0044(*(int *)(*(int *)param_2[0x25] + 0x54) + 8);
      }
      else {
        ppppuVar15 = (undefined4 ****)(uint)*(byte *)(puVar9 + 6);
        in_d16 = *(double *)(puVar9 + 2);
        if (*(char *)((int)puVar9 + 0x19) != '\0') goto LAB_00e374c8;
        if (puVar9[4] != 1) {
          if ((uVar16 & 1) == 0) goto LAB_00e377e4;
          goto LAB_00e374c8;
        }
        if (((uVar16 & 1) == 0) || (puVar9[5] != iVar11)) goto LAB_00e374c8;
LAB_00e377e4:
        iVar10 = 0;
        if (((uint)ppppuVar12 & (uint)NAN(in_d16)) == 1) {
          ppppuVar12 = (undefined4 ****)&DAT_00000001;
          goto LAB_00e374c8;
        }
      }
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c174b8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c174b8);
    case 3:
switchD_00e36900_caseD_3:
      FUN_00e100c8(&local_a8,param_2 + 0x2d,param_3);
      ppppuVar15 = local_9c;
      ppppuVar12 = local_a0;
      ppppuVar17 = local_a4;
      ppppuVar14 = local_a8;
      if (local_a8 == (undefined4 ****)&SUB_00000004 && local_a4 == (undefined4 ****)0x0) {
        uVar4 = 3;
        goto LAB_00e37674;
      }
      local_3b4 = local_98;
      FUN_01bed4e2(&local_150,local_94,0x54);
      if (*(char *)(param_2 + 0x42) == '\x03') {
        FUN_00e1003c(param_2 + 0x2d);
      }
      if (ppppuVar14 == (undefined4 ****)&DAT_00000003 && ppppuVar17 == (undefined4 ****)0x0) {
        piVar7 = (int *)param_2[0x2b];
        if (*piVar7 == 2 && piVar7[1] == 0) {
          iVar11 = param_2[0x26];
LAB_00e37548:
          bVar1 = *(byte *)(iVar11 + 0x74);
        }
        else {
          if (*(byte *)(piVar7 + 6) == 2) {
            iVar11 = param_2[0x26];
            goto LAB_00e37548;
          }
          bVar1 = *(byte *)(piVar7 + 6) & 1;
        }
        if (bVar1 != 0) {
          *(undefined1 *)(param_2 + 0x5f) = 0;
          param_2[0x2d] = param_2[0x25];
          goto switchD_00e36900_caseD_4;
        }
        FUN_01a71aac(&local_a8,9,"tuner is not enabled",0x14);
        ppppuVar15 = local_9c;
        ppppuVar12 = local_a0;
        ppppuVar17 = local_a4;
        ppppuVar14 = local_a8;
        local_3b4 = local_98;
        FUN_01bed4e2(auStack_218,local_94,0x54);
      }
      else {
        FUN_01bed4e2(auStack_218,&local_150,0x54);
      }
LAB_00e3779c:
      FUN_019f8c54(param_2[0x29],param_2[0x2a]);
      FUN_01bed4e2(auStack_320,auStack_218,0x54);
      *puVar18 = 1;
      if (ppppuVar14 == (undefined4 ****)&SUB_00000004 && ppppuVar17 == (undefined4 ****)0x0)
      goto LAB_00e3767c;
      goto LAB_00e37b9c;
    case 4:
switchD_00e36900_caseD_4:
      FUN_00e38430(&local_a8,param_2 + 0x2d,param_3);
      ppppuVar3 = local_98;
      ppppuVar15 = local_9c;
      ppppuVar12 = local_a0;
      ppppuVar17 = local_a4;
      ppppuVar14 = local_a8;
      if (local_a8 != (undefined4 ****)&SUB_00000004 || local_a4 != (undefined4 ****)0x0) {
        local_3b4 = local_98;
        FUN_01bed4e2(auStack_1b0,local_94,0x54);
        cVar5 = *(char *)(param_2 + 0x5f);
        bVar19 = cVar5 == '\x03';
        if (bVar19) {
          cVar5 = *(char *)(param_2 + 0x5e);
        }
        if (bVar19 && cVar5 == '\x03') {
          FUN_00df984c(param_2 + 0x2f);
        }
        if (ppppuVar14 != (undefined4 ****)&DAT_00000003 || ppppuVar17 != (undefined4 ****)0x0) {
          FUN_01bed4e2(auStack_218,auStack_1b0,0x54);
          goto LAB_00e3779c;
        }
        puVar9 = (undefined4 *)(param_2[0x26] + 100);
        param_2[0x2e] = ppppuVar15;
        if (param_2[0x27] != 0) {
          puVar9 = param_2 + 0x28;
        }
        param_2[0x2f] = ppppuVar3;
        param_2[0x2d] = ppppuVar12;
        in_d16 = (double)VectorUnsignedToFloat(*puVar9,(byte)(in_fpscr >> 0x16) & 3);
        param_2[0x19c] = param_2 + 0x2d;
        *(undefined1 *)(param_2 + 0x19d) = 0;
        param_2[0x30] = 6;
        param_2[0x31] = 0;
        *(double *)(param_2 + 0x32) = in_d16;
        goto switchD_00e36900_caseD_5;
      }
      uVar4 = 4;
LAB_00e37674:
      *puVar18 = uVar4;
LAB_00e3767c:
      *param_1 = 4;
      param_1[1] = 0;
      uVar4 = 6;
      goto LAB_00e37cc8;
    case 5:
switchD_00e36900_caseD_5:
      FUN_00e0d514(&local_a8,param_2 + 0x30,param_3);
      ppppuVar15 = local_9c;
      ppppuVar12 = local_a0;
      ppppuVar17 = local_a4;
      ppppuVar14 = local_a8;
      if (local_a8 == (undefined4 ****)0x80000006) {
        uVar4 = 5;
        goto LAB_00e37674;
      }
      if (*(char *)(param_2 + 0x19d) == '\x03') {
        if (*(char *)(param_2 + 0x19a) == '\x03') {
          puVar9 = param_2 + 0xe8;
        }
        else {
          if (*(char *)(param_2 + 0x19a) != '\0') goto LAB_00e37814;
          puVar9 = param_2 + 0x36;
        }
        FUN_00df9ef8(puVar9);
      }
LAB_00e37814:
      if (ppppuVar14 == (undefined4 ****)&DAT_80000005) {
        if (ppppuVar17 != (undefined4 ****)&DAT_80000000) {
          if (ppppuVar17 == (undefined4 ****)&DAT_80000001) {
            if (ppppuVar12 == (undefined4 ****)0x0) goto LAB_00e37b08;
          }
          else {
            local_a8 = ppppuVar17;
            local_a4 = ppppuVar12;
            local_a0 = ppppuVar15;
            ppppuVar12 = (undefined4 ****)FUN_00eace94(&local_a8);
          }
          goto LAB_00e37868;
        }
      }
      else {
        local_a8 = ppppuVar14;
        local_a4 = ppppuVar17;
        local_a0 = ppppuVar12;
        local_9c = ppppuVar15;
        ppppuVar12 = (undefined4 ****)FUN_00a98bac(&local_a8);
LAB_00e37868:
        local_fc = ppppuVar12;
        if ((DAT_01d50f88 < 4) &&
           ((DAT_01d4c41c - 1 < 2 ||
            ((DAT_01d4c41c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c414), cVar5 != '\0')))))) {
          iVar11 = FUN_01aaa278(DAT_01d4c414);
          if (iVar11 == 0) goto LAB_00e37968;
          local_38 = (undefined4 *)(DAT_01d4c414 + 0x1c);
          local_dc = (undefined4 ***)*local_38;
          iStack_d8 = *(int *)(DAT_01d4c414 + 0x20);
          if (iStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174c8);
          }
          uStack_d4 = *(undefined4 *)(DAT_01d4c414 + 0x24);
          local_d0 = *(undefined4 *)(DAT_01d4c414 + 0x28);
          local_cc = 0;
          local_e4 = 0x5d;
          local_e8 = (undefined4 ****)0x3f0ad4;
          if (iStack_d8 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174c8);
          }
          local_98 = &local_c8;
          local_9c = &pppuStack_c0;
          local_a4 = &local_e8;
          local_3c = 2;
          local_c8 = &local_fc;
          local_a8 = &local_dc;
          local_b0 = 1;
          local_94[0] = &DAT_01c1e0b8;
          local_a0 = (undefined4 ****)&DAT_01d2ea4c;
          pppuStack_c0 = local_dc;
          iStack_bc = iStack_d8;
          uStack_b8 = uStack_d4;
          local_b4 = local_d0;
          local_40 = &local_a8;
          FUN_00e38620(&local_40);
        }
        else {
LAB_00e37968:
          iVar11 = DAT_01d4c414;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_f4 = *(undefined4 *)(DAT_01d4c414 + 0x14);
            local_f0 = *(undefined4 **)(DAT_01d4c414 + 0x18);
            local_f8 = (undefined4 ****)0x2;
            DataMemoryBarrier(0xb);
            puVar9 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar9 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar10 = (*(code *)puVar9[3])(pcVar2,&local_f8);
            if (iVar10 != 0) {
              local_e0 = (undefined4 *)(DAT_01d4c414 + 0x1c);
              local_dc = (undefined4 ***)*local_e0;
              iStack_d8 = *(int *)(DAT_01d4c414 + 0x20);
              if (iStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174c8);
              }
              uStack_d4 = *(undefined4 *)(DAT_01d4c414 + 0x24);
              local_d0 = *(undefined4 *)(DAT_01d4c414 + 0x28);
              local_cc = 0;
              local_c4 = 0x5d;
              local_c8 = (undefined4 ****)0x3f0ad4;
              if (iStack_d8 == 1) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c174c8);
              }
              local_98 = &local_ac;
              local_9c = &pppuStack_c0;
              local_a4 = &local_c8;
              local_a8 = &local_dc;
              local_b0 = 1;
              local_e4 = 2;
              local_a0 = (undefined4 ****)&DAT_01d2ea4c;
              local_94[0] = &DAT_01c1e0b8;
              local_ac = &local_fc;
              local_40 = local_f8;
              local_3c = local_f4;
              local_38 = local_f0;
              local_e8 = &local_a8;
              pppuStack_c0 = local_dc;
              iStack_bc = iStack_d8;
              uStack_b8 = uStack_d4;
              local_b4 = local_d0;
              FUN_01aaa328(iVar11,pcVar2,puVar9[4],&local_40,&local_e8);
            }
          }
        }
        *(undefined1 *)(*(int *)(*(int *)param_2[0x25] + 0x58) + 8) = 1;
        (*(code *)**local_fc)();
      }
LAB_00e37b08:
      piVar7 = (int *)param_2[0x2b];
      iVar11 = *piVar7;
      iVar10 = piVar7[1];
      if (iVar11 == 2 && iVar10 == 0) {
        ppppuVar15 = (undefined4 ****)0x2;
        iVar11 = 0;
        iVar10 = 0;
      }
      else {
        ppppuVar15 = (undefined4 ****)(uint)*(byte *)(piVar7 + 6);
        in_d16 = *(double *)(piVar7 + 2);
      }
      ppppuVar12 = (undefined4 ****)param_2[0x27];
      iVar13 = param_2[0x28];
      *piVar7 = iVar11;
      piVar7[1] = iVar10;
      *(undefined1 *)((int)piVar7 + 0x19) = 0;
      *(char *)(piVar7 + 6) = (char)ppppuVar15;
      piVar7[4] = (int)ppppuVar12;
      piVar7[5] = iVar13;
      *(double *)(piVar7 + 2) = in_d16;
      FUN_019e0044(*(int *)(*(int *)param_2[0x25] + 0x54) + 8);
      FUN_0084ec48(param_2 + 0x2d);
      break;
    case 6:
switchD_00e36900_caseD_6:
      FUN_00e100c8(&local_a8,param_2 + 0x2d,param_3);
      ppppuVar15 = local_9c;
      ppppuVar12 = local_a0;
      ppppuVar17 = local_a4;
      ppppuVar14 = local_a8;
      if (local_a8 == (undefined4 ****)&SUB_00000004 && local_a4 == (undefined4 ****)0x0) {
        uVar4 = 6;
        goto LAB_00e37674;
      }
      local_3b4 = local_98;
      FUN_01bed4e2(auStack_388,local_94,0x54);
      if (*(char *)(param_2 + 0x42) == '\x03') {
        FUN_00e1003c(param_2 + 0x2d);
      }
      if (ppppuVar14 != (undefined4 ****)&DAT_00000003 || ppppuVar17 != (undefined4 ****)0x0) {
        FUN_01bed4e2(auStack_218,auStack_388,0x54);
        goto LAB_00e3779c;
      }
      piVar7 = (int *)param_2[0x2b];
      iVar11 = *piVar7;
      iVar10 = piVar7[1];
      if (iVar11 == 2 && iVar10 == 0) {
        iVar11 = 0;
        iVar10 = 0;
      }
      else {
        in_d16 = *(double *)(piVar7 + 2);
      }
      ppppuVar12 = (undefined4 ****)param_2[0x27];
      iVar13 = param_2[0x28];
      *piVar7 = iVar11;
      piVar7[1] = iVar10;
      *(undefined2 *)(piVar7 + 6) = 1;
      piVar7[4] = (int)ppppuVar12;
      piVar7[5] = iVar13;
      *(double *)(piVar7 + 2) = in_d16;
      *(undefined1 *)(*(int *)(*(int *)param_2[0x25] + 0x58) + 8) = 1;
      FUN_019e0044(*(int *)(*(int *)param_2[0x25] + 0x54) + 8);
    }
    FUN_019f8c54(param_2[0x29],param_2[0x2a]);
    FUN_01bed4e2(auStack_320,auStack_218,0x54);
    ppppuVar17 = (undefined4 ****)0x0;
    ppppuVar14 = (undefined4 ****)&DAT_00000003;
    *puVar18 = 1;
LAB_00e37b9c:
    FUN_01bed4e2(auStack_2c8,auStack_320,0x54);
    FUN_00e38310(param_2 + 0x1e);
    if (ppppuVar14 != (undefined4 ****)&DAT_00000003 || ppppuVar17 != (undefined4 ****)0x0) {
      FUN_01bed4e2(auStack_270,auStack_2c8,0x54);
      if (*(char *)((int)param_2 + 0x66) != '\0') {
        FUN_019f8c54(param_2[0x16],param_2[0x17]);
      }
      *(undefined1 *)((int)param_2 + 0x66) = 0;
      FUN_019f8c54(param_2[0x10],1);
      goto LAB_00e37c6c;
    }
    puVar9 = (undefined4 *)(param_2[0x15] + 100);
    if (param_2[0x1c] != 0) {
      puVar9 = param_2 + 0x1d;
    }
    ppppuVar12 = (undefined4 ****)*puVar9;
    *(undefined1 *)((int)param_2 + 0x66) = 0;
    FUN_019f8c54(param_2[0x10],1);
    piVar7 = (int *)param_2[0x14];
    uVar16 = (uint)ppppuVar12 >> 8;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar7;
      bVar19 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar19);
    *piVar7 = iVar11 + -1;
    ppppuVar17 = (undefined4 ****)0x0;
    ppppuVar14 = (undefined4 ****)&DAT_00000003;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(param_2[0x14]);
    }
  }
  param_1[2] = (uint)ppppuVar12 & 0xff | uVar16 << 8;
  param_1[3] = ppppuVar15;
  param_1[4] = local_3b4;
  *param_1 = ppppuVar14;
  param_1[1] = ppppuVar17;
  FUN_01bed4e2(param_1 + 5,auStack_270,0x54);
  uVar4 = 1;
LAB_00e37cc8:
  *(undefined1 *)(param_2 + 0x19) = uVar4;
  return;
}

