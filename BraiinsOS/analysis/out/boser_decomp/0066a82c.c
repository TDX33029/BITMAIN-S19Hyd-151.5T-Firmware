// FUN_0066a82c @ 0066a82c size=4024 calls_out=29 calls_in=0
// strings: api_logging::manageropen/utils-rs/api-logging/src/manager.rsevent open/utils-rs/api-logging/src/manager.rs:163 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | api_logging::manageropen/utils-rs/api-logging/src/manager.rsevent open/utils-rs/api-logging/src/manager.rs:163 | InvalidParamSegmentInvalidParamInvalidCatchAll | API logs emit channel closed.

undefined8 FUN_0066a82c(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  undefined4 ****ppppuVar13;
  undefined4 ****unaff_r4;
  int iVar14;
  undefined4 ****unaff_r6;
  undefined4 *puVar15;
  undefined4 ****ppppuVar16;
  undefined4 ****ppppuVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined1 *local_200;
  undefined4 ****local_1f4;
  code *local_1f0;
  undefined4 *local_1ec;
  undefined4 ***local_1e8;
  undefined4 ****local_1e4;
  undefined4 ****local_1e0;
  undefined4 ****local_1dc;
  undefined4 ****local_1d8;
  undefined4 ****local_1d0;
  undefined4 ****local_1cc;
  undefined4 ****local_1c8;
  undefined4 ****local_1c4;
  undefined4 ****local_1c0;
  undefined4 ****local_160;
  undefined4 ****local_15c;
  undefined4 ****local_158;
  undefined4 uStack_154;
  uint local_150;
  undefined4 ****local_14c;
  undefined4 ****local_148;
  undefined4 *local_144;
  undefined4 ****local_140;
  undefined4 ****local_13c;
  undefined4 ****local_138;
  undefined4 ****local_130;
  undefined4 ****local_12c;
  undefined4 ****local_128;
  undefined4 local_124;
  undefined4 ****local_b0;
  int local_ac;
  undefined4 ***local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 ****ppppuStack_60;
  undefined4 ****ppppuStack_5c;
  undefined4 ****ppppuStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x44)) {
  case 0:
    unaff_r4 = (undefined4 ****)param_1[0x42];
    iVar14 = param_1[0x43];
    local_b0 = unaff_r4;
    FUN_01a3c2e0(iVar14);
    *(undefined1 *)((int)param_1 + 0x9b) = 0;
    param_1[0x24] = unaff_r4;
    param_1[0x25] = iVar14;
LAB_0066a8bc:
    param_1[0x22] = unaff_r4;
    param_1[0x23] = iVar14;
    *(undefined2 *)((int)param_1 + 0x99) = 0x101;
    do {
      pbVar18 = (byte *)(param_1 + 0x26);
      *pbVar18 = 0;
      uVar12 = *(uint *)(iVar14 + 8);
      DataMemoryBarrier(0xb);
      puVar15 = param_1 + 0x2a;
      *puVar15 = param_1 + 0x22;
      param_1[0x28] = pbVar18;
      *(undefined1 *)(param_1 + 0x35) = 0;
      param_1[0x34] = 0;
      param_1[0x2d] = param_1 + 0x23;
      param_1[0x2e] = iVar14 + 8;
      param_1[0x2f] = uVar12 >> 2;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      param_1[0x29] = puVar15;
LAB_0066a95c:
      bVar2 = FUN_019ec70c();
      if ((bVar2 != 2) && ((bVar2 & 1) == 0)) {
        FUN_019ece98(*param_2,param_2[1]);
LAB_0066ab78:
        uVar4 = 3;
        goto LAB_0066b1ac;
      }
      unaff_r6 = (undefined4 ****)FUN_019f8914(2);
      bVar11 = false;
      iVar14 = 0;
      bVar5 = true;
      do {
        bVar3 = bVar5;
        if ((iVar14 + (int)unaff_r6 & 1U) == 0) {
          if ((*pbVar18 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)(puVar15 + 2)) {
            case 0:
              puVar7 = (undefined4 *)*puVar15;
              puVar15[1] = puVar7;
              break;
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c23270);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c23270);
            case 3:
              puVar7 = (undefined4 *)puVar15[1];
            }
            FUN_0068cdf8(&local_b0,*puVar7,param_2);
            iVar14 = local_ac;
            unaff_r4 = local_b0;
            uVar4 = 1;
            if (local_b0 == (undefined4 ****)&DAT_00000003 && local_ac == 0) {
              uVar4 = 3;
            }
            *(undefined1 *)(puVar15 + 2) = uVar4;
            if (local_b0 != (undefined4 ****)&DAT_00000003 || local_ac != 0) {
              FUN_01bed4e2(&local_130,&local_a8,0x80);
              bVar2 = 1;
              goto LAB_0066aa8c;
            }
            bVar11 = true;
          }
        }
        else if ((*pbVar18 & 2) == 0) {
          iVar14 = FUN_01a3be00(puVar15 + 3,param_2);
          bVar11 = true;
          if (iVar14 == 0) {
            iVar14 = 0;
            unaff_r4 = (undefined4 ****)&DAT_00000003;
            bVar2 = 2;
LAB_0066aa8c:
            *pbVar18 = *pbVar18 | bVar2;
            goto LAB_0066aa98;
          }
        }
        iVar14 = 1;
        bVar5 = false;
      } while (bVar3);
      iVar14 = 0;
      unaff_r4 = (undefined4 ****)&SUB_00000004;
      if (bVar11) goto LAB_0066ab78;
LAB_0066aa98:
      unaff_r6 = &local_130;
      *param_1 = unaff_r4;
      param_1[1] = iVar14;
      unaff_r4 = (undefined4 ****)(param_1 + 2);
      FUN_01bed4e2(unaff_r4,unaff_r6,0x80);
      FUN_019ede44(param_1 + 0x2e);
      ppppuVar17 = (undefined4 ****)*param_1;
      iVar14 = param_1[1];
      puVar8 = (undefined1 *)0x0;
      if ((uint)(ppppuVar17 < &DAT_00000003) <= (uint)-iVar14) {
        puVar8 = (undefined1 *)((int)ppppuVar17 + -2);
      }
      if (puVar8 != (undefined1 *)0x0) {
        if (puVar8 != &DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01c041f0);
        }
        if ((DAT_01d50f88 < 3) &&
           (((DAT_01d4b568 - 1 < 2 ||
             ((DAT_01d4b568 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b560), cVar6 != '\0')))) &&
            (iVar14 = FUN_01aaa278(DAT_01d4b560), iVar14 != 0)))) {
          if (*(int *)(DAT_01d4b560 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c041d0);
          }
          local_148 = &local_1e8;
          local_a8 = *(undefined4 ****)(DAT_01d4b560 + 0x24);
          local_a4 = *(undefined4 *)(DAT_01d4b560 + 0x28);
          local_1ec = (undefined4 *)(DAT_01d4b560 + 0x1c);
          local_b0 = (undefined4 ****)*local_1ec;
          local_14c = &local_b0;
          local_1f4 = &local_14c;
          local_a0 = 0;
          local_1f0 = (code *)0x1;
          local_130 = (undefined4 ****)&DAT_00000032;
          local_1e4 = &local_1d0;
          local_124 = 0;
          local_144 = (undefined4 *)&DAT_01d2ea4c;
          local_128 = (undefined4 ****)0x0;
          local_12c = (undefined4 ****)0x0;
          local_1e8 = (undefined4 ***)&DAT_005a0cff;
          local_1cc = (undefined4 ****)FUN_012fd810;
          local_1d0 = unaff_r6;
          local_ac = *(int *)(DAT_01d4b560 + 0x20);
          FUN_01aaaecc(DAT_01d4b560,&local_1f4);
          iVar14 = DAT_01d4b560;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_15c = *(undefined4 *****)(DAT_01d4b560 + 0x14);
            local_158 = *(undefined4 *****)(DAT_01d4b560 + 0x18);
            local_160 = (undefined4 ****)&DAT_00000003;
            DataMemoryBarrier(0xb);
            ppppuVar17 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              ppppuVar17 = (undefined4 ****)&DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar10 = (*(code *)ppppuVar17[3])(pcVar1,&local_160);
            if (iVar10 != 0) {
              local_1c8 = local_160;
              local_1c4 = local_15c;
              local_1c0 = local_158;
              FUN_01aaa328(iVar14,pcVar1,ppppuVar17[4],&local_1c8,&local_1f4);
            }
          }
        }
        else {
          iVar14 = DAT_01d4b560;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_1dc = *(undefined4 *****)(DAT_01d4b560 + 0x14);
            local_1d8 = *(undefined4 *****)(DAT_01d4b560 + 0x18);
            local_1e0 = (undefined4 ****)&DAT_00000003;
            DataMemoryBarrier(0xb);
            ppppuVar17 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              ppppuVar17 = (undefined4 ****)&DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar10 = (*(code *)ppppuVar17[3])(pcVar1,&local_1e0);
            if (iVar10 != 0) {
              local_144 = (undefined4 *)(DAT_01d4b560 + 0x1c);
              if (*(int *)(DAT_01d4b560 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c041d0);
              }
              local_15c = &local_1d0;
              local_a8 = *(undefined4 ****)(DAT_01d4b560 + 0x24);
              local_a4 = *(undefined4 *)(DAT_01d4b560 + 0x28);
              local_160 = &local_b0;
              local_14c = &local_160;
              local_148 = (undefined4 ****)&DAT_00000001;
              local_130 = (undefined4 ****)&DAT_00000032;
              local_1cc = &local_1f4;
              local_a0 = 0;
              local_124 = 0;
              local_158 = (undefined4 ****)&DAT_01d2ea4c;
              local_128 = (undefined4 ****)0x0;
              local_12c = (undefined4 ****)0x0;
              local_1f0 = FUN_012fd810;
              local_1d0 = (undefined4 ****)&DAT_005a0cff;
              local_1c8 = local_1e0;
              local_1c4 = local_1dc;
              local_1c0 = local_1d8;
              local_1f4 = unaff_r6;
              local_b0 = (undefined4 ****)*local_144;
              local_ac = *(int *)(DAT_01d4b560 + 0x20);
              FUN_01aaa328(iVar14,pcVar1,ppppuVar17[4],&local_1c8,&local_14c);
            }
          }
        }
        local_160 = (undefined4 ****)param_1[0x22];
        *(undefined2 *)((int)param_1 + 0x99) = 0;
        local_150 = local_150 & 0xffffff00;
        FUN_019ac130(&local_130,1);
        if (local_128 < (undefined4 ****)0x389fd980) {
          ppppuVar16 = local_128 + 12500000;
          ppppuVar17 = local_130;
          ppppuVar13 = local_12c;
LAB_0066af38:
          uVar19 = FUN_019ef7f4(&DAT_01c041e0);
          uVar9 = (undefined4)((ulonglong)uVar19 >> 0x20);
          FUN_019dc4f8(&local_130,(int)uVar19,uVar9,uVar9,ppppuVar17,ppppuVar13,ppppuVar16,
                       &DAT_01c041e0);
        }
        else {
          ppppuVar13 = (undefined4 ****)
                       ((int)local_12c + (uint)((undefined4 ****)0xfffffffe < local_130));
          if (-1 < (int)(((uint)local_12c ^ (uint)ppppuVar13) & ~(uint)local_12c)) {
            ppppuVar16 = local_128 + -0xe27f660;
            ppppuVar17 = (undefined4 ****)((int)local_130 + 1);
            goto LAB_0066af38;
          }
          FUN_019e6e14(&local_130);
        }
        ppppuStack_60 = local_160;
        ppppuStack_5c = local_15c;
        ppppuStack_58 = local_158;
        uStack_54 = uStack_154;
        uStack_50 = local_150;
        FUN_01bed4e2(&local_b0,&local_130,0x50);
        FUN_01bed4e2(&local_1c8,&local_b0,0x68);
        FUN_01bed4e2(param_1 + 0x28,&local_1c8,0x68);
        goto switchD_0066a8a0_caseD_4;
      }
      if (ppppuVar17 == (undefined4 ****)0x2 && iVar14 == 0) goto LAB_0066ad30;
      FUN_01bed4e2(&local_a8,unaff_r4,0x80);
      local_b0 = ppppuVar17;
      local_ac = iVar14;
      FUN_00683aec(&local_b0);
      iVar14 = param_1[0x23];
    } while( true );
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c04210);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c04210);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x9b)) {
    case 0:
      unaff_r4 = (undefined4 ****)param_1[0x24];
      iVar14 = param_1[0x25];
      goto LAB_0066a8bc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c041c0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c041c0);
    case 3:
      puVar15 = (undefined4 *)param_1[0x29];
      pbVar18 = (byte *)param_1[0x28];
      goto LAB_0066a95c;
    case 4:
switchD_0066a8a0_caseD_4:
      bVar2 = FUN_019ec70c();
      unaff_r6 = (undefined4 ****)(param_1 + 0x3c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x40)) {
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c05424);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c05424);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x3f)) {
        case 0:
          ppppuVar17 = (undefined4 ****)param_1[0x3d];
          goto LAB_0066b1e0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c23270);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c23270);
        case 3:
          ppppuVar17 = (undefined4 ****)param_1[0x3e];
          goto LAB_0066b1e4;
        }
      }
switchD_0066afe0_caseD_0:
      *(undefined1 *)(param_1 + 0x3f) = 0;
      param_1[0x3d] = unaff_r6;
      ppppuVar17 = unaff_r6;
LAB_0066b1e0:
      param_1[0x3e] = ppppuVar17;
LAB_0066b1e4:
      unaff_r4 = (undefined4 ****)(param_1 + 0x3f);
      FUN_0068cdf8(&local_b0,*ppppuVar17,param_2);
      iVar14 = local_ac;
      ppppuVar17 = local_b0;
      uVar4 = 1;
      if (local_b0 == (undefined4 ****)&DAT_00000003 && local_ac == 0) {
        uVar4 = 3;
      }
      *(undefined1 *)unaff_r4 = uVar4;
      if (local_b0 == (undefined4 ****)&DAT_00000003 && local_ac == 0) {
        *(undefined1 *)(param_1 + 0x40) = 3;
        iVar14 = FUN_019ee264(bVar2 == 2 | bVar2 & 1,param_1 + 0x28,param_2);
        if (iVar14 != 0) {
          uVar4 = 4;
LAB_0066b1ac:
          local_200 = (undefined1 *)((int)param_1 + 0x9b);
          *local_200 = uVar4;
          bVar5 = true;
          goto LAB_0066b5b4;
        }
      }
      else {
        unaff_r4 = &local_a8;
        FUN_01bed4e2(&local_130,unaff_r4,0x80);
        if (ppppuVar17 != (undefined4 ****)0x2 || iVar14 != 0) goto code_r0x0066b238;
        FUN_00669400(unaff_r6);
        *(undefined1 *)(param_1 + 0x40) = 1;
      }
      FUN_0066a424(param_1 + 0x28);
      if (((DAT_01d50f88 < 3) &&
          ((DAT_01d4b574 - 1 < 2 ||
           ((DAT_01d4b574 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b56c), cVar6 != '\0')))))) &&
         (iVar14 = FUN_01aaa278(DAT_01d4b56c), iVar14 != 0)) {
        if (*(int *)(DAT_01d4b56c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04200);
        }
        local_15c = &local_1f4;
        local_a8 = *(undefined4 ****)(DAT_01d4b56c + 0x24);
        local_a4 = *(undefined4 *)(DAT_01d4b56c + 0x28);
        local_144 = (undefined4 *)(DAT_01d4b56c + 0x1c);
        local_b0 = (undefined4 ****)*local_144;
        local_14c = &local_160;
        unaff_r4 = (undefined4 ****)0x0;
        local_a0 = 0;
        local_148 = (undefined4 ****)&DAT_00000001;
        local_158 = (undefined4 ****)&DAT_01d2ea4c;
        local_1f0 = (code *)0x4d;
        local_1f4 = (undefined4 ****)0x3d430c;
        local_160 = &local_b0;
        local_ac = *(int *)(DAT_01d4b56c + 0x20);
        FUN_01aaaecc(DAT_01d4b56c,&local_14c);
        iVar14 = DAT_01d4b56c;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_1c4 = *(undefined4 *****)(DAT_01d4b56c + 0x14);
          local_1c0 = *(undefined4 *****)(DAT_01d4b56c + 0x18);
          local_1c8 = (undefined4 ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          ppppuVar17 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            ppppuVar17 = (undefined4 ****)&DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)ppppuVar17[3])(pcVar1,&local_1c8);
          ppppuVar13 = local_1c0;
          if (iVar10 != 0) {
            local_130 = local_1c8;
            local_12c = local_1c4;
            local_128 = local_1c0;
            FUN_01aaa328(iVar14,pcVar1,ppppuVar17[4],&local_130,&local_14c);
            unaff_r4 = ppppuVar13;
          }
        }
        unaff_r6 = (undefined4 ****)0x0;
      }
      else {
        iVar14 = DAT_01d4b56c;
        unaff_r6 = (undefined4 ****)0x0;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_13c = *(undefined4 *****)(DAT_01d4b56c + 0x14);
          local_138 = *(undefined4 *****)(DAT_01d4b56c + 0x18);
          local_140 = (undefined4 ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          unaff_r4 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            unaff_r4 = (undefined4 ****)&DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)unaff_r4[3])(pcVar1,&local_140);
          if (iVar10 != 0) {
            if (*(int *)(DAT_01d4b56c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04200);
            }
            local_1c4 = &local_14c;
            local_a8 = *(undefined4 ****)(DAT_01d4b56c + 0x24);
            local_a4 = *(undefined4 *)(DAT_01d4b56c + 0x28);
            local_160 = &local_1c8;
            unaff_r6 = (undefined4 ****)0x0;
            local_15c = (undefined4 ****)&DAT_00000001;
            local_148 = (undefined4 ****)&DAT_0000004d;
            local_a0 = 0;
            local_1c0 = (undefined4 ****)&DAT_01d2ea4c;
            local_14c = (undefined4 ****)0x3d430c;
            local_130 = local_140;
            local_12c = local_13c;
            local_128 = local_138;
            local_1c8 = &local_b0;
            local_158 = (undefined4 ****)(DAT_01d4b56c + 0x1c);
            local_b0 = *(undefined4 *****)(DAT_01d4b56c + 0x1c);
            local_ac = *(int *)(DAT_01d4b56c + 0x20);
            FUN_01aaa328(iVar14,pcVar1,unaff_r4[4],&local_130,&local_160);
          }
        }
      }
    }
  }
  goto LAB_0066b580;
code_r0x0066b238:
  FUN_01bed4e2(unaff_r4,&local_130,0x80);
  local_b0 = ppppuVar17;
  local_ac = iVar14;
  FUN_00683aec(&local_b0);
  goto switchD_0066afe0_caseD_0;
LAB_0066ad30:
  unaff_r6 = (undefined4 ****)FUN_00667978("API logs emit channel closed.",0x1d);
LAB_0066b580:
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  FUN_005faf6c(param_1 + 0x23);
  if (*(char *)((int)param_1 + 0x9a) != '\0') {
    FUN_00669400(param_1 + 0x22);
  }
  *(undefined2 *)((int)param_1 + 0x9a) = 0x100;
  bVar5 = false;
LAB_0066b5b4:
  if (bVar5) {
    *(undefined1 *)(param_1 + 0x44) = 3;
    uVar9 = 1;
  }
  else {
    FUN_0066a348(param_1);
    local_1f4 = unaff_r6;
    if (unaff_r6 == (undefined4 ****)0x0) {
      unaff_r4 = (undefined4 ****)0x0;
    }
    else {
      local_1e0 = &local_1f4;
      FUN_01a3b7c0(param_1[0x43]);
      if (((DAT_01d50f88 < 5) &&
          ((DAT_01d4b58c - 1 < 2 ||
           ((DAT_01d4b58c != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b584), cVar6 != '\0')))))) &&
         (iVar14 = FUN_01aaa278(DAT_01d4b584), iVar14 != 0)) {
        if (*(int *)(DAT_01d4b584 + 0x20) == 0) {
LAB_0066b948:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c04220);
        }
        local_1c4 = &local_14c;
        local_a8 = *(undefined4 ****)(DAT_01d4b584 + 0x24);
        local_a4 = *(undefined4 *)(DAT_01d4b584 + 0x28);
        local_158 = (undefined4 ****)(DAT_01d4b584 + 0x1c);
        local_b0 = (undefined4 ****)*local_158;
        local_1c8 = &local_b0;
        local_160 = &local_1c8;
        local_a0 = 0;
        local_15c = (undefined4 ****)&DAT_00000001;
        local_148 = &local_140;
        local_140 = &local_1e0;
        local_1c0 = (undefined4 ****)&DAT_01d2ea4c;
        local_14c = (undefined4 ****)&DAT_00592b0d;
        local_13c = (undefined4 ****)&LAB_0125f734;
        local_ac = *(int *)(DAT_01d4b584 + 0x20);
        FUN_01aaaecc(DAT_01d4b584,&local_160);
        iVar14 = DAT_01d4b584;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_12c = *(undefined4 *****)(DAT_01d4b584 + 0x14);
          local_128 = *(undefined4 *****)(DAT_01d4b584 + 0x18);
          local_130 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          ppppuVar17 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            ppppuVar17 = (undefined4 ****)&DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)ppppuVar17[3])(pcVar1,&local_130);
          if (iVar10 != 0) {
            FUN_01aaa328(iVar14,pcVar1,ppppuVar17[4],&local_130,&local_160);
          }
        }
      }
      else {
        iVar14 = DAT_01d4b584;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_15c = *(undefined4 *****)(DAT_01d4b584 + 0x14);
          local_158 = *(undefined4 *****)(DAT_01d4b584 + 0x18);
          local_160 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          ppppuVar17 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            ppppuVar17 = (undefined4 ****)&DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)ppppuVar17[3])(pcVar1,&local_160);
          if (iVar10 != 0) {
            if (*(int *)(DAT_01d4b584 + 0x20) == 0) goto LAB_0066b948;
            local_12c = &local_14c;
            local_a8 = *(undefined4 ****)(DAT_01d4b584 + 0x24);
            local_a4 = *(undefined4 *)(DAT_01d4b584 + 0x28);
            local_130 = &local_b0;
            local_1c8 = &local_130;
            local_1c4 = (undefined4 ****)&DAT_00000001;
            local_148 = &local_140;
            local_140 = &local_1e0;
            local_a0 = 0;
            local_128 = (undefined4 ****)&DAT_01d2ea4c;
            local_14c = (undefined4 ****)&DAT_00592b0d;
            local_13c = (undefined4 ****)&LAB_0125f734;
            local_1c0 = (undefined4 ****)(DAT_01d4b584 + 0x1c);
            local_b0 = *(undefined4 *****)(DAT_01d4b584 + 0x1c);
            local_ac = *(int *)(DAT_01d4b584 + 0x20);
            FUN_01aaa328(iVar14,pcVar1,ppppuVar17[4],&local_160,&local_1c8);
          }
        }
      }
      unaff_r4 = local_1f4;
    }
    FUN_005faf6c(param_1 + 0x43);
    *(undefined1 *)(param_1 + 0x44) = 1;
    uVar9 = 0;
  }
  return CONCAT44(unaff_r4,uVar9);
}

