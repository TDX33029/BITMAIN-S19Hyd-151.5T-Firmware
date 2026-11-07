// FUN_00769e24 @ 00769e24 size=3440 calls_out=30 calls_in=1
// strings: Map must not be polled after it returned `Poll::Ready` | internal error: entered unreachable code

void FUN_00769e24(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 extraout_r1;
  int iVar11;
  undefined4 uVar12;
  uint extraout_r3;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  short *psVar22;
  uint *puVar23;
  short *psVar24;
  bool bVar25;
  bool bVar26;
  undefined1 *puVar27;
  undefined1 auStack_4e0 [96];
  short *local_480;
  short *local_47c;
  undefined1 *puStack_478;
  uint uStack_474;
  int local_470;
  undefined4 local_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  int local_45c;
  uint local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined1 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_418;
  short *psStack_414;
  undefined1 *puStack_410;
  uint uStack_40c;
  int local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  short *local_3c8;
  undefined4 local_3c4;
  undefined1 *local_3c0;
  undefined1 auStack_3bc [92];
  int local_360 [30];
  undefined1 auStack_2e8 [116];
  short *local_274;
  short *local_270;
  short *local_26c;
  undefined1 *local_268;
  undefined4 local_264;
  int local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  int local_24c;
  uint local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 local_230;
  uint local_22c;
  uint local_228;
  undefined1 auStack_188 [120];
  undefined1 auStack_110 [96];
  short *local_b0;
  short *local_ac;
  undefined1 *local_a8;
  undefined1 auStack_a4 [92];
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if ((*param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  puVar23 = param_2 + 0x7f;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xb5]) {
  case '\0':
    param_2[0xb6] = 0x1010000;
    FUN_01bed4e2(puVar23,param_2 + 0x69,0x4c);
    param_2[0x92] = param_2[0x7c];
    param_2[0x93] = param_2[0x7d];
    param_2[0x94] = param_2[0x7e];
    FUN_01bed4e2(param_2 + 0x34,param_2 + 2,200);
    param_2[0x95] = param_2[0x66];
    param_2[0x96] = param_2[0x67];
    param_2[0x97] = param_2[0x68];
    *(undefined1 *)((int)param_2 + 0x2d6) = *(undefined1 *)((int)param_2 + 0x2d5);
    if ((short)param_2[0x90] == 0) {
      DataMemoryBarrier(0xb);
      if (DAT_01d4e4f0 != 2) {
        FUN_013d53c0(&DAT_01d4e4f0,&DAT_01d4e4f0);
      }
      iVar11 = FUN_013c9530(&DAT_01d4e4f4,puVar23);
      piVar7 = &DAT_01d4e4f0;
      if (iVar11 == 0) {
        DataMemoryBarrier(0xb);
        if (DAT_01d4e2b4 != 2) {
          FUN_013d53c0(&DAT_01d4e2b4,&DAT_01d4e2b4);
        }
        iVar11 = FUN_013c9530(&DAT_01d4e2b8,puVar23);
        if (iVar11 == 0) {
          DataMemoryBarrier(0xb);
          if (DAT_01d4e214 != 2) {
            FUN_013d53c0(&DAT_01d4e214,&DAT_01d4e214);
          }
          iVar11 = FUN_013c9530(&DAT_01d4e218,puVar23);
          if (iVar11 == 0) {
            DataMemoryBarrier(0xb);
            if (DAT_01d4e450 != 2) {
              FUN_013d53c0(&DAT_01d4e450,&DAT_01d4e450);
            }
            iVar11 = FUN_013c9530(&DAT_01d4e454,puVar23);
            piVar7 = &DAT_01d4e450;
            if (iVar11 == 0) {
              DataMemoryBarrier(0xb);
              if (DAT_01d4e354 != 2) {
                FUN_013d53c0(&DAT_01d4e354,&DAT_01d4e354);
              }
              iVar11 = FUN_013c9530(&DAT_01d4e358,puVar23);
              piVar7 = &DAT_01d4e354;
              if (iVar11 == 0) {
                DataMemoryBarrier(0xb);
                if (DAT_01d4e3a8 != 2) {
                  FUN_013d53c0(&DAT_01d4e3a8,&DAT_01d4e3a8);
                }
                iVar11 = FUN_013c9530(&DAT_01d4e3ac,puVar23);
                piVar7 = &DAT_01d4e3fc;
                if (iVar11 != 0) {
                  piVar7 = &DAT_01d4e3a8;
                }
              }
            }
          }
        }
      }
      DataMemoryBarrier(0xb);
      if (*piVar7 != 2) {
        FUN_013d53c0(piVar7,piVar7);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar7[0x13]) {
      default:
        goto switchD_0076a088_caseD_0;
      case '\x01':
        sVar2 = (short)param_2[0x91];
        if (sVar2 == 0) {
          *(undefined1 *)((int)param_2 + 0x2db) = 0;
          FUN_01bed4e2(&local_418,puVar23,0x4c);
          DataMemoryBarrier(0xb);
          if (DAT_01d4e6a8 != 2) {
            FUN_0077e9f0(&DAT_01d4e6a8,&DAT_01d4e6a8);
          }
          FUN_01401e58(&local_270,&DAT_01d4e6ac);
          FUN_014057f8(&local_480,&local_418,&local_270);
        }
        else if (sVar2 == 1) {
          *(undefined1 *)((int)param_2 + 0x2db) = 0;
          FUN_01bed4e2(&local_418,puVar23,0x4c);
          DataMemoryBarrier(0xb);
          if (DAT_01d4e74c != 2) {
            FUN_0077e9f0(&DAT_01d4e74c,&DAT_01d4e74c);
          }
          FUN_01401e58(&local_270,&DAT_01d4e750);
          FUN_014057f8(&local_480,&local_418,&local_270);
        }
        else {
          if (sVar2 != 0x1a) {
            *(undefined1 *)((int)param_2 + 0x2db) = 0;
            FUN_01bed4e2(&local_270,puVar23,0x4c);
            iVar11 = FUN_007699bc();
            FUN_01bed4e2(iVar11,&local_270,0x4c);
            local_258 = 0;
            local_25c = 0;
            local_248 = local_248 & 0xffffff00;
            local_264 = (uint)local_264._2_2_ << 0x10;
            local_26c = (short *)0x0;
            local_250 = 0;
            local_270 = (short *)CONCAT22(local_270._2_2_,0x15);
            local_260 = iVar11;
            local_3c8 = (short *)FUN_013e649c(&local_270);
            goto LAB_0076aa44;
          }
          *(undefined1 *)((int)param_2 + 0x2db) = 0;
          FUN_01bed4e2(&local_418,puVar23,0x4c);
          DataMemoryBarrier(0xb);
          if (DAT_01d4e7f0 != 2) {
            FUN_0077e9f0(&DAT_01d4e7f0,&DAT_01d4e7f0);
          }
          FUN_01401e58(&local_270,&DAT_01d4e7f4);
          FUN_014057f8(&local_480,&local_418,&local_270);
        }
        FUN_01bed4e2(&local_3c8,&local_480,0x68);
        break;
      case '\x03':
        *(undefined1 *)((int)param_2 + 0x2db) = 0;
        FUN_01bed4e2(&local_270,puVar23,0x4c);
        iVar11 = thunk_FUN_01be5118(0x4c);
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x4c);
        }
        FUN_01bed4e2(iVar11,puVar23,0x4c);
        local_258 = 0;
        local_264 = CONCAT22(local_264._2_2_,3);
        local_25c = 0;
        local_248 = local_248 & 0xffffff00;
        local_26c = (short *)0x0;
        local_250 = 0;
        local_270 = (short *)CONCAT22(local_270._2_2_,0x15);
        local_260 = iVar11;
        local_3c8 = (short *)FUN_013e649c(&local_270);
LAB_0076aa44:
        local_3c0 = &DAT_3b9aca00;
      }
    }
    else {
switchD_0076a088_caseD_0:
      *(undefined1 *)((int)param_2 + 0x2d7) = 0;
      FUN_019ac130(&local_480,1);
      psVar22 = local_480;
      psVar24 = local_47c;
      puVar27 = puStack_478;
      FUN_013f6f14(&local_270,param_2 + 0x34,puVar23);
      if (local_268 == (undefined1 *)0x3b9aca01) {
        uVar6 = param_2[0x8f];
        bVar25 = (short)*puVar23 != 1;
        if (bVar25) {
          puVar9 = (uint *)((uint)&local_418 | 4);
          uVar8 = param_2[0x81];
          uVar14 = param_2[0x82];
          uVar16 = param_2[0x83];
          *puVar9 = param_2[0x80];
          puVar9[1] = uVar8;
          puVar9[2] = uVar14;
          puVar9[3] = uVar16;
          uVar8 = param_2[0x85];
          uVar14 = param_2[0x86];
          uVar16 = param_2[0x87];
          puVar9[4] = param_2[0x84];
          puVar9[5] = uVar8;
          puVar9[6] = uVar14;
          puVar9[7] = uVar16;
          local_418._2_2_ = *(undefined2 *)((int)param_2 + 0x1fe);
        }
        else {
          FUN_015e8ad4((uint)&local_418 | 4,param_2[0x81],param_2[0x82]);
          uVar8 = extraout_r3;
        }
        bVar26 = (short)param_2[0x88] != 1;
        local_418 = (short *)CONCAT22(local_418._2_2_,(ushort)!bVar25);
        if (bVar26) {
          puVar9 = (uint *)((uint)&local_48 | 4);
          uVar8 = param_2[0x8a];
          uVar14 = param_2[0x8b];
          uVar16 = param_2[0x8c];
          uVar19 = param_2[0x8d];
          uVar20 = param_2[0x8e];
          *puVar9 = param_2[0x89];
          puVar9[1] = uVar8;
          puVar9[2] = uVar14;
          puVar9[3] = uVar16;
          puVar9[4] = uVar19;
          puVar9[5] = uVar20;
          local_48._2_2_ = *(undefined2 *)((int)param_2 + 0x222);
        }
        else {
          FUN_015e8ad4((uint)&local_48 | 4,param_2[0x8a],param_2[0x8b],uVar8,psVar22,psVar24,puVar27
                      );
        }
        local_48 = CONCAT22(local_48._2_2_,(ushort)!bVar26);
        uStack_474 = uStack_40c;
        local_470 = local_408;
        local_46c = uStack_404;
        uStack_468 = uStack_400;
        uStack_464 = uStack_3fc;
        uStack_460 = uStack_3f8;
        local_45c = local_48;
        local_458 = uStack_44;
        uStack_454 = uStack_40;
        local_450 = local_3c;
        uStack_44c = uStack_38;
        uStack_448 = uStack_34;
        uStack_444 = uStack_30;
        local_22c = param_2[0x90];
        local_228 = param_2[0x91];
        local_270 = local_418;
        local_26c = psStack_414;
        local_268 = puStack_410;
        local_264 = uStack_40c;
        local_260 = local_408;
        local_25c = uStack_404;
        local_258 = uStack_400;
        uStack_254 = uStack_3fc;
        local_250 = uStack_3f8;
        local_24c = local_48;
        local_248 = uStack_44;
        uStack_244 = uStack_40;
        local_240 = local_3c;
        uStack_23c = uStack_38;
        uStack_238 = uStack_34;
        uStack_234 = uStack_30;
        local_480 = (short *)param_2[0x92];
        local_47c = (short *)param_2[0x93];
        puStack_478 = (undefined1 *)param_2[0x94];
        local_230 = (char)uVar6;
        uVar6 = FUN_0078a3cc(param_2 + 0x3c,&local_270,&local_480);
        param_2[0xb8] = uVar6;
        param_2[0xb9] = (uint)&DAT_01c08798;
        goto switchD_00769e70_caseD_3;
      }
      FUN_01bed4e2(&local_3c8,&local_270,0x68);
    }
LAB_0076aa54:
    if (*(char *)((int)param_2 + 0x2da) != '\0') {
      FUN_00769be4(param_2 + 0x95);
    }
    *(undefined1 *)((int)param_2 + 0x2da) = 0;
    FUN_007699dc(param_2 + 0x34);
    if (*(char *)((int)param_2 + 0x2db) != '\0') {
      FUN_0079217c(puVar23);
    }
    *(undefined1 *)((int)param_2 + 0x2db) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c08a94);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c08a94);
  case '\x03':
switchD_00769e70_caseD_3:
    puVar9 = param_2 + 0xb8;
    FUN_0077d1d4(local_360,puVar9,param_3);
    uVar5 = 3;
    if (local_360[0] == -0x7fffffff) goto LAB_0076a3c0;
    puVar17 = param_2 + 0x98;
    *(undefined1 *)((int)param_2 + 0x2d9) = 1;
    FUN_01bed4e2(puVar17,local_360,0x74);
    if (param_2[0xb8] != 0) {
      FUN_01139b38(param_2[0xb8],param_2[0xb9]);
    }
    if (*puVar17 == 0x80000000) {
      *(undefined1 *)((int)param_2 + 0x2d9) = 0;
      FUN_01bed4e2(puVar9,puVar17,0x74);
    }
    else {
      FUN_01bed4e2(auStack_2e8,puVar17,0x74);
      FUN_013e6c58(puVar9,auStack_2e8,0);
    }
    if (*puVar9 == 0x80000000) {
      psVar22 = (short *)param_2[0xb9];
      local_274 = psVar22;
      if (*psVar22 != 0x15) {
        local_3c8 = psVar22;
LAB_0076a544:
        local_3c0 = &DAT_3b9aca00;
        *(undefined1 *)(param_2 + 0xb6) = 0;
        if ((*(char *)((int)param_2 + 0x2d9) != '\0') && (*puVar17 == 0x80000000)) {
          FUN_0076953c(puVar17);
        }
        *(undefined1 *)((int)param_2 + 0x2d9) = 0;
        goto LAB_0076aa54;
      }
      psVar24 = *(short **)(psVar22 + 8);
      uVar5 = *(undefined1 *)((int)param_2 + 0x2d7);
      sVar2 = *psVar24;
      sVar4 = psVar24[0x20];
      if (sVar2 != 1) {
        puVar10 = (undefined4 *)((uint)&local_418 | 4);
        uVar12 = *(undefined4 *)(psVar24 + 4);
        uVar13 = *(undefined4 *)(psVar24 + 6);
        uVar15 = *(undefined4 *)(psVar24 + 8);
        *puVar10 = *(undefined4 *)(psVar24 + 2);
        puVar10[1] = uVar12;
        puVar10[2] = uVar13;
        puVar10[3] = uVar15;
        uVar12 = *(undefined4 *)(psVar24 + 0xc);
        uVar13 = *(undefined4 *)(psVar24 + 0xe);
        uVar15 = *(undefined4 *)(psVar24 + 0x10);
        puVar10[4] = *(undefined4 *)(psVar24 + 10);
        puVar10[5] = uVar12;
        puVar10[6] = uVar13;
        puVar10[7] = uVar15;
        local_418 = (short *)((uint)(ushort)psVar24[1] << 0x10);
      }
      else {
        FUN_015e8ad4((uint)&local_418 | 4,*(undefined4 *)(psVar24 + 4),*(undefined4 *)(psVar24 + 6))
        ;
      }
      sVar3 = psVar24[0x12];
      local_418 = (short *)CONCAT22(local_418._2_2_,(ushort)(sVar2 == 1));
      if (sVar3 != 1) {
        puVar10 = (undefined4 *)((uint)&local_48 | 4);
        uVar12 = *(undefined4 *)(psVar24 + 0x16);
        uVar13 = *(undefined4 *)(psVar24 + 0x18);
        uVar15 = *(undefined4 *)(psVar24 + 0x1a);
        uVar18 = *(undefined4 *)(psVar24 + 0x1c);
        uVar21 = *(undefined4 *)(psVar24 + 0x1e);
        *puVar10 = *(undefined4 *)(psVar24 + 0x14);
        puVar10[1] = uVar12;
        puVar10[2] = uVar13;
        puVar10[3] = uVar15;
        puVar10[4] = uVar18;
        puVar10[5] = uVar21;
        local_48 = (uint)(ushort)psVar24[0x13] << 0x10;
      }
      else {
        FUN_015e8ad4((uint)&local_48 | 4,*(undefined4 *)(psVar24 + 0x16),
                     *(undefined4 *)(psVar24 + 0x18));
      }
      local_48 = CONCAT22(local_48._2_2_,(ushort)(sVar3 == 1));
      local_270 = local_418;
      local_26c = psStack_414;
      local_268 = puStack_410;
      local_264 = uStack_40c;
      local_260 = local_408;
      local_25c = uStack_404;
      local_258 = uStack_400;
      uStack_254 = uStack_3fc;
      local_250 = uStack_3f8;
      local_24c = local_48;
      local_248 = uStack_44;
      uStack_244 = uStack_40;
      local_240 = local_3c;
      uStack_23c = uStack_38;
      uStack_238 = uStack_34;
      uStack_234 = uStack_30;
      local_43c = *(undefined4 *)(psVar24 + 0x22);
      local_438 = *(undefined4 *)(psVar24 + 0x24);
      local_480 = local_418;
      local_47c = psStack_414;
      puStack_478 = puStack_410;
      uStack_474 = uStack_40c;
      local_470 = local_408;
      local_46c = uStack_404;
      uStack_468 = uStack_400;
      uStack_464 = uStack_3fc;
      uStack_460 = uStack_3f8;
      local_45c = local_48;
      local_458 = uStack_44;
      uStack_454 = uStack_40;
      local_450 = local_3c;
      uStack_44c = uStack_38;
      uStack_448 = uStack_34;
      uStack_444 = uStack_30;
      local_440 = (char)sVar4;
      FUN_0074a610(&local_270,*(undefined4 *)(psVar22 + 10));
      piVar7 = *(int **)(psVar22 + 0xc);
      uVar12 = extraout_r1;
      if (piVar7 != (int *)0x0) {
        do {
          iVar11 = *piVar7;
          bVar25 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar25);
        *piVar7 = iVar11 + 1;
        if (iVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x76abb8);
          (*pcVar1)();
        }
        uVar12 = *(undefined4 *)(psVar22 + 0xe);
      }
      uVar6 = FUN_0077c024(uVar5,0,&local_480,&local_270,piVar7,uVar12,*(undefined4 *)(psVar22 + 2),
                           *(undefined4 *)(psVar22 + 4),psVar22[6],psVar22[7],(char)psVar22[0x14]);
      param_2[0xd9] = uVar6;
      *(undefined1 *)(param_2 + 0xb6) = 1;
      param_2[0xd8] = 2;
      FUN_00769758(&local_274);
      psVar22 = (short *)param_2[0xd8];
      if ((short *)param_2[0xd8] != (short *)0x2) goto LAB_0076a84c;
      *(undefined1 *)((int)param_2 + 0x2db) = 0;
      psVar22 = (short *)param_2[0xd9];
      FUN_01bed4e2(&local_270,puVar23,0x4c);
      local_480 = (short *)&DAT_80000000;
      local_47c = psVar22;
      FUN_0077d2c0(&local_3c8,param_2 + 0x34,&local_270,&local_480);
    }
    else {
      FUN_01bed4e2(auStack_188,puVar9,0x74);
      local_418 = (short *)param_2[0x92];
      psStack_414 = (short *)param_2[0x93];
      puStack_410 = (undefined1 *)param_2[0x94];
      *(undefined1 *)((int)param_2 + 0x2da) = 0;
      local_480 = (short *)param_2[0x95];
      local_47c = (short *)param_2[0x96];
      puStack_478 = (undefined1 *)param_2[0x97];
      FUN_0077ac20(&local_270,param_2 + 0x34,&local_418,*(undefined1 *)((int)param_2 + 0x2d7),
                   puVar23,auStack_188,&local_480,*(undefined1 *)((int)param_2 + 0x2d6));
      if (local_270 == (short *)0x2) {
        local_3c8 = local_26c;
        goto LAB_0076a544;
      }
      param_2[0xd9] = (uint)local_26c;
      param_2[0xda] = (uint)local_268;
      param_2[0xdb] = local_264;
      param_2[0xd8] = (uint)local_270;
      *(undefined1 *)(param_2 + 0xb6) = 1;
      psVar22 = local_270;
LAB_0076a84c:
      if (((uint)psVar22 & 1) != 0) {
        uVar8 = param_2[0xda];
        uVar6 = param_2[0xdb];
        param_2[0xd5] = param_2[0xd9];
        param_2[0xd6] = uVar8;
        param_2[0xd7] = uVar6;
        goto LAB_0076a134;
      }
      local_480 = (short *)param_2[0xd9];
      local_47c = (short *)param_2[0xda];
      puStack_478 = (undefined1 *)param_2[0xdb];
      *(undefined1 *)((int)param_2 + 0x2db) = 0;
      FUN_01bed4e2(&local_270,puVar23,0x4c);
      FUN_0077d2c0(&local_3c8,param_2 + 0x34,&local_270,&local_480);
    }
LAB_0076a8b4:
    if (param_2[0xd8] != 2) {
      *(undefined1 *)(param_2 + 0xb6) = 0;
    }
    *(undefined1 *)(param_2 + 0xb6) = 0;
    if ((*(char *)((int)param_2 + 0x2d9) != '\0') && (param_2[0x98] == 0x80000000)) {
      FUN_0076953c();
    }
    *(undefined1 *)((int)param_2 + 0x2d9) = 0;
    if (*(char *)((int)param_2 + 0x2da) != '\0') {
      FUN_00769be4(param_2 + 0x95);
    }
    *(undefined1 *)((int)param_2 + 0x2da) = 0;
    FUN_007699dc(param_2 + 0x34);
    *(undefined1 *)((int)param_2 + 0x2db) = 0;
    break;
  case '\x04':
    uVar8 = param_2[0xd6];
    uVar6 = param_2[0xd7];
LAB_0076a134:
    (**(code **)(uVar6 + 0xc))(&local_270,uVar8,param_3);
    puVar27 = local_268;
    psVar24 = local_26c;
    psVar22 = local_270;
    if (local_268 != (undefined1 *)0x3b9aca01) {
      FUN_01bed4e2(auStack_110,&local_264,0x5c);
      FUN_01139b38(param_2[0xd6],param_2[0xd7]);
      if (puVar27 == &DAT_3b9aca00) {
        *(undefined1 *)((int)param_2 + 0x2db) = 0;
        FUN_01bed4e2(&local_270,puVar23,0x4c);
        local_47c = psVar22;
        local_480 = (short *)&DAT_80000000;
        FUN_0077d2c0(&local_3c8,param_2 + 0x34,&local_270,&local_480);
      }
      else {
        local_a8 = puVar27;
        local_ac = psVar24;
        local_b0 = psVar22;
        FUN_01bed4e2(auStack_a4,auStack_110,0x5c);
        *(undefined1 *)((int)param_2 + 0x2db) = 0;
        FUN_01bed4e2(&local_270,puVar23,0x4c);
        FUN_0077e0f4(&local_3c8,param_2 + 0x34,&local_b0,&local_270,param_2[0xd5]);
      }
      goto LAB_0076a8b4;
    }
    uVar5 = 4;
LAB_0076a3c0:
    *(undefined1 *)(param_2 + 0xb5) = uVar5;
    goto LAB_0076aad4;
  }
  puVar27 = local_3c0;
  psVar22 = local_3c8;
  FUN_01bed4e2(auStack_4e0,auStack_3bc,0x5c);
  *(undefined1 *)(param_2 + 0xb5) = 1;
  if (puVar27 == (undefined1 *)0x3b9aca01) {
LAB_0076aad4:
    param_1[2] = 0x3b9aca01;
  }
  else {
    FUN_01bed4e2(&local_264,auStack_4e0,0x5c);
    uVar6 = *param_2;
    *param_2 = 1;
    local_26c = (short *)local_3c4;
    local_270 = psVar22;
    local_268 = puVar27;
    param_2[1] = 0;
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    if (puVar27 == &DAT_3b9aca00) {
      param_1[2] = &DAT_3b9aca00;
      param_1[3] = 0x80000002;
      param_1[4] = psVar22;
    }
    else {
      *param_1 = psVar22;
      param_1[1] = local_3c4;
      param_1[2] = puVar27;
      FUN_01bed4e2(param_1 + 3,&local_264,0x5c);
    }
  }
  return;
}

