// FUN_00b11040 @ 00b11040 size=5976 calls_out=45 calls_in=1
// strings: Preheat StageFinding threshold voltage | Preheat StageFinding threshold voltage | BUG: impossible | SetGloba | SetGloba | lDefaultError

void FUN_00b11040(undefined8 *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint ***pppuVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  double *pdVar19;
  undefined1 **ppuVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  char *pcVar24;
  bool bVar25;
  uint in_fpscr;
  float fVar26;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar27;
  double unaff_d8;
  float unaff_s18;
  undefined8 unaff_d10;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong uVar32;
  float local_2f8;
  uint local_2f4;
  uint local_2e8;
  float fStack_2e4;
  undefined1 *puStack_2e0;
  uint uStack_2dc;
  undefined1 *local_2d8;
  uint *puStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  uint local_2c8;
  float local_2c4;
  undefined1 *local_2c0;
  uint uStack_2bc;
  uint ***local_2b8;
  uint *local_2b4;
  int local_2b0;
  undefined4 local_2ac;
  int local_2a4;
  int local_2a0;
  int local_29c;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint **local_1b8;
  undefined4 local_1b4;
  uint *local_1b0;
  uint *local_1ac;
  undefined **local_1a8;
  undefined *local_1a4;
  undefined *local_1a0;
  uint **local_19c;
  undefined1 *local_198;
  uint local_194;
  uint local_190;
  float fStack_18c;
  undefined1 *local_188;
  uint uStack_184;
  undefined4 uStack_180;
  double local_140;
  uint *local_100;
  code *local_fc;
  undefined1 **local_f8;
  code *local_f4;
  uint *local_f0;
  code *local_ec;
  uint local_70;
  float fStack_6c;
  undefined1 *puStack_68;
  uint uStack_64;
  undefined8 local_60;
  uint local_58;
  float local_54;
  undefined1 *puStack_50;
  
  puVar10 = param_2 + 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x306)) {
  case 0:
    uVar15 = param_2[0xb8];
    param_2[0xb9] = uVar15;
    *puVar10 = param_2[4];
    param_2[0xb] = param_2[5];
    param_2[0xc] = param_2[6];
    param_2[0xd] = param_2[7];
    param_2[0xe] = param_2[8];
    param_2[0xf] = param_2[9];
    *(short *)((int)param_2 + 0x307) = (short)param_2[0xc1];
    if ((*param_2 & 1) == 0) {
      iVar5 = *(int *)(uVar15 + 0x570);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0034f831,0x16,&DAT_0186f7d0);
      }
      iVar16 = *(int *)(uVar15 + 0x56c);
      if (*(int *)(iVar16 + 0x10) == 1) {
        unaff_d8 = *(double *)(iVar16 + 0x18);
      }
      else {
        uVar6 = FUN_00d5d4d0(*(undefined4 *)(iVar16 + 0x14),uVar15);
        unaff_d8 = (double)CONCAT44(extraout_s1,uVar6);
      }
      if (iVar5 != 1) {
        pdVar19 = (double *)(iVar16 + 0x68);
        uVar21 = (iVar5 * 0x50 - 0x50U) / 0x50;
        dVar28 = unaff_d8;
        do {
          if (*(int *)(pdVar19 + -1) == 1) {
            unaff_d8 = *pdVar19;
          }
          else {
            uVar6 = FUN_00d5d4d0(*(undefined4 *)((int)pdVar19 + -4),uVar15);
            unaff_d8 = (double)CONCAT44(extraout_s1_00,uVar6);
          }
          uVar8 = in_fpscr & 0xfffffff;
          in_fpscr = uVar8;
          if (NAN(dVar28)) {
            if (!NAN(unaff_d8)) {
              unaff_d8 = dVar28;
            }
          }
          else if (!NAN(unaff_d8)) {
            uVar1 = uVar8 | (uint)(dVar28 == unaff_d8) << 0x1e;
            in_fpscr = uVar1 | (uint)(unaff_d8 <= dVar28) << 0x1d;
            if (!(!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0))) {
              uVar8 = uVar8 | (uint)(dVar28 < unaff_d8) << 0x1f;
              in_fpscr = uVar8 | (uint)(NAN(dVar28) || NAN(unaff_d8)) << 0x1c;
              unaff_d8 = dVar28;
              if ((byte)(uVar8 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
              }
            }
          }
          pdVar19 = pdVar19 + 10;
          uVar21 = uVar21 - 1;
          dVar28 = unaff_d8;
        } while (uVar21 != 0);
      }
      uVar15 = param_2[0xb9];
      *(double *)(param_2 + 0x10) = unaff_d8;
    }
    else {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 2);
    }
    iVar5 = *(int *)(uVar15 + 0x618);
    *(undefined1 *)(param_2 + 0xd1) = 0;
    uVar15 = iVar5 + 8;
    param_2[0xc4] = uVar15;
LAB_00b1119c:
    param_2[0xc5] = uVar15;
    *(undefined1 *)(param_2 + 0xd0) = 0;
    goto switchD_00b11120_caseD_3;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f7e0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f7e0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xd1]) {
    case '\0':
      uVar15 = param_2[0xc4];
      goto LAB_00b1119c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018770dc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018770dc);
    }
switchD_00b11120_caseD_3:
    FUN_00b23e50(&local_2c8,param_2 + 0xc5,param_3);
    puVar22 = local_2c0;
    fVar27 = local_2c4;
    uVar15 = local_2c8;
    if (local_2c8 == 0x80000000) {
      uVar3 = 3;
      *(undefined1 *)(param_2 + 0xd1) = 3;
      *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
      goto LAB_00b11b9c;
    }
    FUN_00b216bc(param_2 + 0xc5);
    if (puVar22 != (undefined1 *)0x0) {
      puVar17 = (undefined1 *)0x0;
      do {
        piVar7 = *(int **)((int)fVar27 + (int)puVar17 * 4);
        puVar18 = puVar17 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar7;
          bVar25 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar25);
        *piVar7 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*(undefined4 *)((int)fVar27 + (int)puVar17 * 4));
        }
        puVar17 = puVar18;
      } while (puVar18 != puVar22);
    }
    if (uVar15 != 0) {
      thunk_FUN_016d3fb4(fVar27);
    }
    uVar15 = param_2[0xb9];
    *(undefined1 *)(param_2 + 0xd1) = 1;
    if (*(undefined1 **)(uVar15 + 0x570) <= puVar22) {
LAB_00b11300:
      iVar5 = *(int *)(*(int *)(uVar15 + 0x618) + 0x338);
      puVar14 = (uint *)(iVar5 + 0x98);
      uVar15 = *(uint *)(iVar5 + 0x98);
      if ((uVar15 < 0xfffffff0) && ((uVar15 & 8) == 0)) {
        if (*puVar14 != uVar15) {
          ClearExclusiveLocal();
          goto LAB_00b113ac;
        }
        bVar25 = (bool)hasExclusiveAccess(puVar14);
        if (!bVar25) goto LAB_00b113ac;
        *puVar14 = uVar15 + 0x10;
        DataMemoryBarrier(0xb);
      }
      else {
LAB_00b113ac:
        FUN_0127d66c(puVar14);
      }
      FUN_0128236c(puVar14);
      puVar12 = (uint *)((uint)puVar14 | 1);
      FUN_0128236c(puVar12);
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar5 + 0xa0) == 2) {
        local_2c8 = 2;
LAB_00b11400:
        FUN_01282570(puVar14);
        FUN_01282570(puVar12);
        DataMemoryBarrier(0xb);
        do {
          uVar15 = *puVar14;
          bVar25 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar25);
        *puVar14 = uVar15 - 0x10;
        if ((uVar15 & 0xfffffff2) == 0x12) {
          FUN_0127d34c(puVar14);
        }
        local_60 = *(undefined8 *)(param_2 + 0x10);
        pppuVar9 = (uint ***)&DAT_3b9aca00;
        goto LAB_00b11b6c;
      }
      FUN_00b2392c(&local_2c8,(int *)(iVar5 + 0xa0));
      if (local_2c8 == 2) goto LAB_00b11400;
      FUN_016dd1aa(param_2 + 0x12,&local_2c8,0xf0);
      FUN_01282570(puVar14);
      FUN_01282570(puVar12);
      DataMemoryBarrier(0xb);
      do {
        uVar15 = *puVar14;
        bVar25 = (bool)hasExclusiveAccess(puVar14);
      } while (!bVar25);
      *puVar14 = uVar15 - 0x10;
      if ((uVar15 & 0xfffffff2) == 0x12) {
        FUN_0127d34c(puVar14);
      }
      uVar15 = param_2[0xb9];
      if (*(char *)(uVar15 + 0x634) != '\x01') {
LAB_00b114ac:
        uVar21 = *(uint *)(uVar15 + 0x5a0);
        uVar8 = *(uint *)(uVar15 + 0x5a4);
        *(undefined1 *)(param_2 + 0x102) = 0;
        param_2[0xfe] = uVar15;
        param_2[0xff] = (uint)puVar10;
        param_2[0x100] = 1;
        param_2[0xc4] = (uint)"Preheat StageFinding threshold voltage";
        param_2[0xc5] = 0xd;
        param_2[0x4e] = uVar21;
        param_2[0x4f] = uVar8;
switchD_00b11078_caseD_7:
        iVar5 = FUN_00b14ab8(param_2 + 0xc4,param_3);
        if (iVar5 != 0) {
          *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
          uVar3 = 7;
          goto LAB_00b11b9c;
        }
        if ((char)param_2[0x102] == '\x03') {
          cVar2 = (char)param_2[0xfd];
          bVar25 = cVar2 == '\x03';
          if (bVar25) {
            cVar2 = (char)param_2[0xfb];
          }
          if ((bVar25 && cVar2 == '\x03') && (param_2[0xf8] != 0)) {
            FUN_00c81a4c(param_2[0xf8],param_2[0xf9],1);
          }
        }
        iVar5 = *(int *)(param_2[0xb9] + 0x204);
        param_2[0x55] = 0x3fe99999;
        param_2[0x51] = 0;
        uVar15 = *(uint *)(iVar5 + 0xb8);
        param_2[0x50] = 0x1e;
        *(undefined1 *)(param_2 + 0x57) = 0;
        param_2[0x54] = 0x9999999a;
        param_2[0x56] = uVar15;
        param_2[0x52] = 0;
        FUN_015f3b0c(&local_2c8,1);
        param_2[0x58] = local_2c8;
        param_2[0x59] = (uint)local_2c4;
        param_2[0x5a] = (uint)local_2c0;
        if ((char)param_2[0x1b] == '\0') {
          uVar15 = 600;
          param_2[0x5c] = 600;
          param_2[0x5d] = 0;
        }
        else {
          if ((char)param_2[0xc2] == '\0') {
            uVar15 = 0xb4;
          }
          else {
            uVar15 = 900;
          }
          param_2[0x5c] = uVar15;
          param_2[0x5d] = 0;
        }
        param_2[0x5e] = 0;
        FUN_008d67c0(&local_2c8,0,uVar15,0,0);
        param_2[0x60] = 0;
        param_2[0xba] = 5;
        param_2[0xbb] = local_2c8;
        param_2[0xbc] = (uint)local_2c4;
        param_2[0xbd] = (uint)local_2c0;
        param_2[0xbe] = uStack_2bc;
        if (*(char *)(param_2[0xb9] + 0x634) == '\0') {
          dVar28 = *(double *)(param_2 + 0x10);
LAB_00b117a0:
          *(double *)(param_2 + 0x62) = dVar28;
          param_2[100] = 0;
          param_2[0x65] = 0;
          do {
            puVar12 = (uint *)param_2[0x58];
            puVar22 = (undefined1 *)param_2[0x59];
            ppuVar20 = (undefined1 **)param_2[0x5a];
            FUN_015f3b0c(&local_2c8,1);
            local_190 = local_2c8;
            fStack_18c = local_2c4;
            local_188 = local_2c0;
            local_100 = puVar12;
            local_fc = (code *)puVar22;
            local_f8 = ppuVar20;
            FUN_015f3c24(&local_2c8,&local_190,&local_100);
            bVar25 = (local_2c8 & 1) != 0;
            puVar22 = local_2c0;
            if (bVar25) {
              puVar22 = (undefined1 *)0x0;
            }
            uVar21 = param_2[0x5d];
            pppuVar9 = local_2b8;
            uVar15 = uStack_2bc;
            if (bVar25) {
              uVar15 = 0;
              pppuVar9 = (uint ***)0x0;
            }
            bVar25 = pppuVar9 < (undefined1 *)param_2[0x5e];
            if (puVar22 != (undefined1 *)param_2[0x5c] || uVar15 != uVar21) {
              bVar25 = uVar15 <= uVar21 &&
                       (uint)((undefined1 *)param_2[0x5c] <= puVar22) <= uVar15 - uVar21;
            }
            if (!bVar25) goto LAB_00b12448;
            iVar5 = *(int *)(*(int *)(param_2[0xb9] + 0x618) + 0x338);
            puVar12 = (uint *)(iVar5 + 0x98);
            uVar15 = *(uint *)(iVar5 + 0x98);
            if ((uVar15 < 0xfffffff0) && ((uVar15 & 8) == 0)) {
              if (*puVar12 != uVar15) {
                ClearExclusiveLocal();
                goto LAB_00b11cb0;
              }
              bVar25 = (bool)hasExclusiveAccess(puVar12);
              if (!bVar25) goto LAB_00b11cb0;
              *puVar12 = uVar15 + 0x10;
              DataMemoryBarrier(0xb);
            }
            else {
LAB_00b11cb0:
              FUN_0127d66c(puVar12);
            }
            FUN_0128236c(puVar12);
            uVar15 = (uint)puVar12 | 1;
            FUN_0128236c(uVar15);
            DataMemoryBarrier(0xb);
            if (*(int *)(iVar5 + 0xa0) == 2) {
              local_2c8 = 2;
LAB_00b12388:
              FUN_01282570(puVar12);
              FUN_01282570(uVar15);
              DataMemoryBarrier(0xb);
              do {
                uVar15 = *puVar12;
                bVar25 = (bool)hasExclusiveAccess(puVar12);
              } while (!bVar25);
              *puVar12 = uVar15 - 0x10;
              if ((uVar15 & 0xfffffff2) == 0x12) {
                FUN_0127d34c(puVar12);
              }
LAB_00b12448:
              *(undefined1 *)(param_2[0xb9] + 0x634) = 1;
              local_2c8 = 6;
              FUN_008ebf58(*(int *)(param_2[0xb9] + 0x618) + 8,&local_2c8);
              if (param_2[0x4e] == 1) {
                *(undefined1 *)(param_2 + 0x102) = 0;
                param_2[0xfe] = param_2[0xb9];
                param_2[0xff] = (uint)puVar10;
                param_2[0x100] = param_2[0x4f];
                param_2[0xc4] = (uint)"Preheat finished";
                param_2[0xc5] = 0x10;
                goto switchD_00b11078_caseD_d;
              }
              goto LAB_00b124f0;
            }
            FUN_00b2392c(&local_2c8,(int *)(iVar5 + 0xa0));
            if (local_2c8 == 2) goto LAB_00b12388;
            FUN_016dd1aa(param_2 + 0x66,&local_2c8,0xf0);
            FUN_01282570(puVar12);
            FUN_01282570(uVar15);
            DataMemoryBarrier(0xb);
            do {
              uVar15 = *puVar12;
              bVar25 = (bool)hasExclusiveAccess(puVar12);
            } while (!bVar25);
            *puVar12 = uVar15 - 0x10;
            if ((uVar15 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar12);
            }
            FUN_009a7ebc(param_2 + 0xa2,*(int *)(param_2[0xb9] + 0x578) + 8);
            if (param_2[0xa2] != 1) {
LAB_00b123d8:
              if (param_2[0xa8] != 0) {
                thunk_FUN_016d3fb4(param_2[0xa9]);
              }
              uVar15 = param_2[0xac];
              puVar23 = (undefined4 *)(uVar15 + 4);
              for (uVar21 = param_2[0xad]; uVar21 != 0; uVar21 = uVar21 - 1) {
                if (puVar23[-1] != 0) {
                  thunk_FUN_016d3fb4(*puVar23);
                }
                puVar23 = puVar23 + 6;
              }
              if (param_2[0xab] != 0) {
                thunk_FUN_016d3fb4(uVar15);
              }
              FUN_00ac8e24(param_2 + 0x66);
              goto LAB_00b12448;
            }
            fVar27 = (float)param_2[0xa3];
            param_2[0xbf] = (uint)fVar27;
            if (param_2[0x60] == 0) {
              fVar26 = 0.0;
              uVar15 = 2;
              bVar25 = false;
              if (*(char *)(param_2[0xb9] + 0x634) != '\0') {
                uVar15 = 1;
              }
            }
            else {
              uVar15 = 1;
              fVar26 = fVar27 - (float)param_2[0x61];
              fVar27 = fVar27 + fVar26;
              bVar25 = ABS(fVar26) < 1.0;
              in_fpscr = in_fpscr & 0xfffffff;
            }
            param_2[0xae] = uVar15;
            *(bool *)((int)param_2 + 0x309) = bVar25;
            param_2[0xaf] = (uint)fVar27;
            param_2[0xc0] = (uint)fVar26;
            if (param_2[0xa4] == 1) {
              bVar25 = param_2[0xa6] != 0;
              if (bVar25) {
                fVar27 = (float)param_2[0xa5];
              }
              uVar15 = (uint)bVar25;
              if (bVar25) {
                unaff_d8 = (double)(ulonglong)(uint)(fVar26 + fVar27);
                unaff_s18 = fVar26 + (float)param_2[0xa7];
              }
            }
            else {
              uVar15 = 0;
            }
            *(undefined1 *)(param_2 + 200) = 0;
            param_2[0xc5] = SUB84(unaff_d8,0);
            param_2[0xc6] = (uint)unaff_s18;
            param_2[0xc4] = uVar15;
            param_2[199] = param_2[0xb9];
switchD_00b11078_caseD_a:
            FUN_00b12b90(&local_1d8,param_2 + 0xc4);
            if (local_1d8 == 2) {
              *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
              uVar3 = 10;
              goto LAB_00b11b9c;
            }
            param_2[0xb0] = local_1d8;
            param_2[0xb1] = uStack_1d4;
            param_2[0xb2] = uStack_1d0;
            param_2[0xb3] = uStack_1cc;
            param_2[0xb4] = local_1c8;
            param_2[0xb5] = uStack_1c4;
            param_2[0xb6] = uStack_1c0;
            param_2[0xb7] = uStack_1bc;
            dVar29 = *(double *)(param_2 + 0x62);
            uVar15 = in_fpscr & 0xfffffff;
            dVar30 = *(double *)(param_2[0xb9] + 0x278);
            dVar28 = *(double *)(param_2 + 0xb2);
            bVar25 = !NAN(dVar29) || NAN(dVar30);
            uVar21 = uVar15;
            if (!NAN(dVar29) && !NAN(dVar30)) {
              uVar8 = uVar15 | (uint)(dVar29 == dVar30) << 0x1e;
              uVar21 = uVar8 | (uint)(dVar30 <= dVar29) << 0x1d;
              bVar25 = true;
              if ((bool)((byte)(uVar21 >> 0x1d) & 1) && !SUB41(uVar8 >> 0x1e,0)) {
                uVar15 = uVar15 | (uint)(dVar29 < dVar30) << 0x1f;
                uVar21 = uVar15 | (uint)(NAN(dVar29) || NAN(dVar30)) << 0x1c;
                bVar25 = false;
                if ((byte)(uVar15 >> 0x1f) != ((byte)(uVar21 >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                }
              }
            }
            if (((param_2[0x96] == 2) &&
                ((*(char *)((int)param_2 + 0x307) == '\0' ||
                 (*(char *)((int)param_2 + 0x309) != '\0')))) &&
               ((uVar21 = uVar21 & 0xfffffff, dVar28 < 1.0 ||
                (bVar25 || (((byte)param_2[0xc2] ^ 1) & 1) != 0)))) goto LAB_00b123d8;
            if ((DAT_018d9130 < 3) && (DAT_018d9c2c != '\0')) {
              puVar13 = &DAT_018ae394;
              pcVar24 = s_SetGloba_00414c05;
              if (DAT_018d9c2c == '\x01') {
LAB_00b11f60:
                DataMemoryBarrier(0xb);
                pcVar4 = pcVar24;
                if (DAT_018dd984 == 2) {
                  pcVar4 = DAT_018daa74;
                  puVar13 = DAT_018daa78;
                  if (DAT_018daa70 != 0) {
                    pcVar4 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                  }
                }
                iVar5 = (**(code **)(puVar13 + 0x14))(pcVar4,DAT_018d9c24);
                if (iVar5 == 0) goto LAB_00b121a0;
              }
              else if (DAT_018d9c2c != '\x02') {
                cVar2 = FUN_0169ac90(&DAT_018d9c24);
                if (cVar2 == '\0') goto LAB_00b121a0;
                if (cVar2 != '\x02') goto LAB_00b11f60;
              }
              puVar12 = DAT_018d9c24 + 7;
              if ((float)DAT_018d9c24[8] == 0.0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f7f0);
              }
              local_188 = (undefined1 *)DAT_018d9c24[9];
              uStack_184 = DAT_018d9c24[10];
              uStack_180 = 0;
              ppuVar20 = (undefined1 **)param_2[0x5a];
              puVar14 = (uint *)param_2[0x58];
              uVar15 = param_2[0x59];
              local_190 = *puVar12;
              fStack_18c = (float)DAT_018d9c24[8];
              FUN_015f3b0c(&local_2c8,1);
              local_58 = local_2c8;
              local_54 = local_2c4;
              puStack_50 = local_2c0;
              local_100 = puVar14;
              local_fc = (code *)uVar15;
              local_f8 = ppuVar20;
              FUN_015f3c24(&local_2c8,&local_58,&local_100);
              local_194 = uStack_2bc;
              local_198 = local_2c0;
              if ((local_2c8 & 1) != 0) {
                local_198 = (undefined1 *)0x0;
                local_194 = 0;
              }
              local_58 = param_2[0x5c];
              local_54 = (float)param_2[0x5d];
              local_1a8 = &local_1a0;
              local_f8 = &local_198;
              local_1a0 = &DAT_00572fd3;
              local_1b8 = &local_1ac;
              local_ec = FUN_00fac4cc;
              local_f4 = FUN_00fac4cc;
              local_fc = (code *)&LAB_009a8240;
              local_1ac = &local_190;
              local_2b4 = DAT_018d9c24;
              local_2b8 = &local_1b8;
              local_1a4 = &DAT_018abb78;
              local_1b4 = 1;
              local_2c4 = 0.0;
              local_2c8 = 1;
              DataMemoryBarrier(0xb);
              puVar13 = &DAT_018ae394;
              if (DAT_018dd984 == 2) {
                pcVar24 = DAT_018daa74;
                puVar13 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar24 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
              }
              local_1b0 = puVar12;
              local_19c = &local_100;
              local_100 = param_2 + 0x96;
              local_f0 = &local_58;
              iVar5 = (**(code **)(puVar13 + 0x28))(pcVar24,&local_2c8);
              if (iVar5 != 0) {
                (**(code **)(puVar13 + 0x2c))(pcVar24,&local_2c8);
              }
            }
LAB_00b121a0:
            local_2c8 = param_2[0xba];
            local_2c4 = (float)param_2[0xbb];
            local_2c0 = (undefined1 *)param_2[0xbc];
            uStack_2bc = param_2[0xbd];
            local_2b8 = (uint ***)param_2[0xbe];
            FUN_008ebf58(*(int *)(param_2[0xb9] + 0x618) + 8);
            if ((char)param_2[0xc2] == '\0') {
              dVar29 = *(double *)(param_2 + 0x10);
              dVar28 = dVar29;
            }
            else {
              dVar29 = ((dVar28 + 1.0) / (dVar28 + dVar28)) * *(double *)(param_2 + 0x62);
              dVar28 = *(double *)(param_2 + 0x10);
            }
            uVar15 = param_2[0xb9];
            *(double *)(param_2 + 0x62) = dVar29;
            dVar30 = (double)VectorUnsignedToFloat
                                       (*(undefined4 *)(uVar15 + 0x570),(byte)(uVar21 >> 0x16) & 3);
            dVar28 = dVar28 - *(double *)(param_2 + 100) / dVar30;
            uVar21 = uVar21 & 0xfffffff;
            dVar30 = *(double *)(uVar15 + 0x278);
            if (!NAN(dVar28)) {
              if (dVar28 < 0.0) {
                uVar21 = uVar21 | (uint)(dVar28 < 0.0) << 0x1f;
                if (SUB41(uVar21 >> 0x1f,0) != NAN(dVar28)) {
                  dVar28 = 0.0;
                }
              }
              else {
                uVar21 = uVar21 | (uint)(dVar28 < 0.0) << 0x1f;
                if (SUB41(uVar21 >> 0x1f,0) != NAN(dVar28)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                }
              }
            }
            uVar21 = uVar21 & 0xfffffff;
            if (NAN(dVar30)) {
              dVar28 = dVar30;
              if (!NAN(dVar30)) {
LAB_00b12640:
                    /* WARNING: Subroutine does not return */
                FUN_00faa464("assertion failed: min <= maxmnamernameserialretryexpire",0x1c,
                             &DAT_01883e60);
              }
            }
            else {
              if (!NAN(dVar28)) {
                dVar31 = dVar30;
                if (dVar30 < dVar28) {
                  uVar21 = uVar21 | (uint)(dVar30 < dVar28) << 0x1f;
                  if (SUB41(uVar21 >> 0x1f,0) != (NAN(dVar30) || NAN(dVar28))) {
                    dVar31 = dVar28;
                  }
                }
                else {
                  uVar21 = uVar21 | (uint)(dVar30 < dVar28) << 0x1f;
                  if (SUB41(uVar21 >> 0x1f,0) != (NAN(dVar30) || NAN(dVar28))) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                  }
                }
                uVar21 = uVar21 & 0xfffffff;
                dVar28 = dVar31;
              }
              if (!NAN(dVar28)) {
                uVar8 = uVar21 | (uint)(dVar30 == dVar28) << 0x1e;
                uVar21 = uVar8 | (uint)(dVar28 <= dVar30) << 0x1d;
                if ((bool)((byte)(uVar21 >> 0x1d) & 1) && !SUB41(uVar8 >> 0x1e,0)) {
                  if (dVar28 <= dVar30) goto LAB_00b12640;
                  goto LAB_00b12358;
                }
              }
            }
            in_fpscr = uVar21 & 0xfffffff;
            if (NAN(dVar29)) {
              dVar30 = dVar29;
              if (!NAN(dVar28)) {
                dVar30 = dVar28;
              }
            }
            else if (!NAN(dVar30)) {
              if (dVar29 < dVar30) {
                uVar21 = in_fpscr | (uint)(dVar29 < dVar30) << 0x1f;
                in_fpscr = uVar21 | (uint)(NAN(dVar29) || NAN(dVar30)) << 0x1c;
                if ((byte)(uVar21 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00b12678;
              }
              else {
                uVar21 = in_fpscr | (uint)(dVar29 < dVar30) << 0x1f;
                in_fpscr = uVar21 | (uint)(NAN(dVar29) || NAN(dVar30)) << 0x1c;
                if ((byte)(uVar21 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00b12358;
              }
              uVar21 = in_fpscr & 0xfffffff;
              in_fpscr = uVar21;
              dVar30 = dVar29;
              if (!NAN(dVar28)) {
                uVar8 = uVar21 | (uint)(dVar29 == dVar28) << 0x1e;
                in_fpscr = uVar8 | (uint)(dVar28 <= dVar29) << 0x1d;
                if (!(!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar8 >> 0x1e,0))) {
                  uVar21 = uVar21 | (uint)(dVar29 < dVar28) << 0x1f;
                  in_fpscr = uVar21 | (uint)(NAN(dVar29) || NAN(dVar28)) << 0x1c;
                  dVar30 = dVar28;
                  if ((byte)(uVar21 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
LAB_00b12358:
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                  }
                }
              }
            }
LAB_00b12678:
            *(undefined1 *)(param_2 + 0xcf) = 0;
            param_2[0xce] = uVar15 + 0x288;
            *(double *)(param_2 + 0x62) = dVar30;
            *(double *)(param_2 + 0xcc) = dVar30;
            param_2[0xc6] = *puVar10;
            param_2[199] = param_2[0xb];
            param_2[0xc4] = param_2[0xae];
            param_2[0xc5] = param_2[0xaf];
            *(char *)(param_2 + 0xcb) = (char)param_2[0xf];
            param_2[0xca] = param_2[0xe];
            param_2[200] = param_2[0xc];
switchD_00b11078_caseD_b:
            FUN_00b233d8(&local_2c8,param_2 + 0xc4);
            if (local_2c8 == 2) {
              *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
              uVar3 = 0xb;
              goto LAB_00b11b9c;
            }
            if ((local_2c8 & 1) != 0) {
              local_60 = CONCAT44(local_60._4_4_,local_2c4);
              goto LAB_00b12980;
            }
            param_2[0xc4] = (uint)local_2c4;
            param_2[0xc5] = (uint)local_2c0;
            param_2[0xc6] = uStack_2bc;
            puVar22 = &DAT_3b9aca00;
            if (param_2[0x60] == 0) {
              cVar2 = *(char *)(param_2[0xb9] + 0x634);
              bVar25 = cVar2 == '\0';
              if (bVar25) {
                cVar2 = (char)param_2[0xc2];
              }
              if (bVar25 && cVar2 == '\x01') {
                unaff_d10 = *(undefined8 *)(param_2 + 0xb4);
                FUN_015f3b0c(&local_2c8,1);
                local_2f8 = local_2c4;
                puVar22 = local_2c0;
                local_2f4 = local_2c8;
              }
            }
            param_2[0x61] = param_2[0xbf];
            param_2[0x60] = 1;
            param_2[200] = param_2[0x50];
            param_2[0xc9] = param_2[0x51];
            param_2[0xca] = param_2[0x52];
            param_2[0xcb] = param_2[0x53];
            param_2[0xcc] = param_2[0x54];
            param_2[0xcd] = param_2[0x55];
            param_2[0xce] = param_2[0x56];
            param_2[0xcf] = param_2[0x57];
            *(undefined1 *)(param_2 + 0x145) = 0;
            param_2[0xd2] = local_2f4;
            param_2[0xd3] = (uint)local_2f8;
            *(undefined8 *)(param_2 + 0xd0) = unaff_d10;
            param_2[0x13e] = param_2[0xb9];
            param_2[0x13f] = (uint)(param_2 + 0xc4);
            param_2[0xd6] = 0x80000000;
            param_2[0xd4] = (uint)puVar22;
LAB_00b1279c:
            FUN_00b18640(&local_2c8,param_2 + 200,param_3);
            if (local_2c8 == 3 && local_2c4 == 0.0) {
              *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
              uVar3 = 0xc;
              goto LAB_00b11b9c;
            }
            FUN_016dd1aa(&local_100,&local_2c8,0x90);
            FUN_00b17ed8(param_2 + 200);
            if (local_100 == (uint *)&SUB_00000002 && local_fc == (code *)0x0) {
              if (local_f8 != (undefined1 **)&DAT_00000009) goto LAB_00b12970;
              FUN_00ad20e4();
            }
            else {
              FUN_016dd1aa(&local_190,&local_100,0x90);
              dVar28 = 0.0;
              if ((local_190 & 1) != 0) {
                dVar28 = (double)CONCAT44(uStack_184,local_188) - local_140;
                in_fpscr = in_fpscr & 0xfffffff;
                if (!NAN(dVar28)) {
                  if (dVar28 < 0.0) {
                    uVar15 = in_fpscr | (uint)(dVar28 < 0.0) << 0x1f;
                    in_fpscr = uVar15 | (uint)NAN(dVar28) << 0x1c;
                    if ((byte)(uVar15 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                      dVar28 = 0.0;
                    }
                  }
                  else {
                    uVar15 = in_fpscr | (uint)(dVar28 < 0.0) << 0x1f;
                    in_fpscr = uVar15 | (uint)NAN(dVar28) << 0x1c;
                    if ((byte)(uVar15 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                    }
                  }
                }
              }
              *(double *)(param_2 + 100) = dVar28;
              FUN_00ad1570(&local_190);
            }
            FUN_00c48cbc(param_2 + 0xc4);
            if (param_2[0xa8] != 0) {
              thunk_FUN_016d3fb4(param_2[0xa9]);
            }
            uVar15 = param_2[0xac];
            puVar23 = (undefined4 *)(uVar15 + 4);
            for (uVar21 = param_2[0xad]; uVar21 != 0; uVar21 = uVar21 - 1) {
              if (puVar23[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar23);
              }
              puVar23 = puVar23 + 6;
            }
            if (param_2[0xab] != 0) {
              thunk_FUN_016d3fb4(uVar15);
            }
            FUN_00ac8e24(param_2 + 0x66);
          } while( true );
        }
        *(undefined1 *)(param_2 + 0xdd) = 0;
        param_2[0xda] = param_2[0xb9] + 0x288;
switchD_00b11078_caseD_8:
        uVar32 = FUN_00b240ec(param_2 + 0xc4,param_3);
        if ((undefined1 *)uVar32 == &SUB_00000002) {
          *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
          uVar3 = 8;
          goto LAB_00b11b9c;
        }
        if ((char)param_2[0xdd] == '\x03') {
          FUN_00ad235c(param_2 + 0xc6);
        }
        if ((uVar32 & 1) == 0) {
          param_2[0xc4] = (uint)(uVar32 >> 0x20);
          iVar5 = *(int *)(param_2[0xb9] + 0x618);
          param_2[0xc6] = 0;
          uVar15 = iVar5 + 8;
          param_2[0xc5] = uVar15;
LAB_00b1167c:
          FUN_008ef954(&local_2c8,*(int *)(*(int *)(uVar15 + 0x3c4) + 8) + 8);
          if ((local_2c8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_0035008e,0x2d,&DAT_01871500);
          }
          unaff_d8 = (double)CONCAT44(uStack_2bc,local_2c0);
          *(undefined1 *)(param_2 + 0xc6) = 1;
          FUN_009a7ebc(&local_2c8,*(int *)(param_2[0xb9] + 0x578) + 8);
          unaff_s18 = local_2c4;
          uVar15 = local_2c8;
          if (local_2b0 != 0) {
            thunk_FUN_016d3fb4(local_2ac);
          }
          puVar23 = (undefined4 *)(local_2a0 + 4);
          for (iVar5 = local_29c; iVar5 != 0; iVar5 = iVar5 + -1) {
            if (puVar23[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar23);
            }
            puVar23 = puVar23 + 6;
          }
          if (local_2a4 != 0) {
            thunk_FUN_016d3fb4(local_2a0);
          }
          uVar21 = param_2[0xb9];
          if (uVar15 == 0) {
            unaff_s18 = *(float *)(uVar21 + 0x1d0);
          }
          if (*(int *)(*(int *)(uVar21 + 0x1d8) + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faf2a4(&DAT_01879bd0);
          }
          uVar11 = *(undefined4 *)(*(int *)(uVar21 + 0x1d8) + 0xb8);
          uVar15 = param_2[0xc4];
          uVar6 = FUN_018462e8(uVar11);
          dVar28 = (double)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
          dVar29 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
          dVar30 = (double)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
          dVar28 = (unaff_d8 / dVar28) * (unaff_d8 / dVar28) * dVar30 *
                   (*(double *)(uVar21 + 0x1b0) + (dVar29 / 1000000.0) * *(double *)(uVar21 + 0x1a8)
                   ) * (*(double *)(uVar21 + 0x1b8) * (double)unaff_s18 + 1.0);
          goto LAB_00b117a0;
        }
        goto LAB_00b12548;
      }
      cVar2 = *(char *)((int)param_2 + 0x307);
      bVar25 = cVar2 == '\0';
      if (bVar25) {
        cVar2 = (char)param_2[0xc2];
      }
      if (!bVar25 || cVar2 != '\0') goto LAB_00b114ac;
      *(undefined1 *)(param_2 + 0xdd) = 0;
      param_2[0xda] = uVar15 + 0x288;
switchD_00b11078_caseD_5:
      uVar32 = FUN_00b240ec(param_2 + 0xc4,param_3);
      if ((undefined1 *)uVar32 == &SUB_00000002) {
        *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
        uVar3 = 5;
        goto LAB_00b11b9c;
      }
      if ((char)param_2[0xdd] == '\x03') {
        FUN_00ad235c(param_2 + 0xc6);
      }
      if ((uVar32 & 1) != 0) goto LAB_00b12548;
      *(undefined1 *)(param_2 + 0xd2) = 0;
      param_2[0xca] = param_2[0xb9];
      param_2[0xcb] = (uint)(uVar32 >> 0x20);
      *(undefined8 *)(param_2 + 0xc4) = *(undefined8 *)(param_2 + 0x10);
switchD_00b11078_caseD_6:
      FUN_00b24858(&local_2c8,param_2 + 0xc4);
      if (local_2b8 == (uint ***)0x3b9aca01) {
        uVar3 = 6;
        *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
        goto LAB_00b11b9c;
      }
      local_60 = *(undefined8 *)(param_2 + 0x10);
      local_70 = local_2c8;
      fStack_6c = local_2c4;
      puStack_68 = local_2c0;
      uStack_64 = uStack_2bc;
      pppuVar9 = local_2b8;
      puVar12 = local_2b4;
      goto LAB_00b11bb0;
    }
    *(undefined1 *)((int)param_2 + 0x36d) = 0;
    param_2[0xda] = uVar15 + 0x288;
switchD_00b11078_caseD_4:
    puVar12 = param_2 + 0xc4;
    FUN_00af0eac(&local_2c8,puVar12,param_3);
    if (local_2c8 == 0xf) {
      *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
      uVar3 = 4;
      goto LAB_00b11b9c;
    }
    local_2e8 = local_2c8;
    fStack_2e4 = local_2c4;
    puStack_2e0 = local_2c0;
    uStack_2dc = uStack_2bc;
    local_2d8 = (undefined1 *)local_2b8;
    puStack_2d4 = local_2b4;
    iStack_2d0 = local_2b0;
    uStack_2cc = local_2ac;
    FUN_00af0ad8(puVar12);
    if (local_2e8 == 0xe) {
      *(undefined1 *)(param_2[0xb9] + 0x634) = 0;
      uVar15 = param_2[0xb9];
      goto LAB_00b11300;
    }
    local_100 = (uint *)(param_2[0xb9] + 0x5a0);
    local_fc = FUN_0138c79c;
    FUN_00600d2c(&local_2c8,&DAT_00595d54,&local_100);
    uVar6 = FUN_00d643a0(&local_2e8,&local_2c8);
    pppuVar9 = (uint ***)0x3b9aca01;
    local_60 = CONCAT44(local_60._4_4_,uVar6);
    goto LAB_00b11b6c;
  case 4:
    goto switchD_00b11078_caseD_4;
  case 5:
    goto switchD_00b11078_caseD_5;
  case 6:
    goto switchD_00b11078_caseD_6;
  case 7:
    goto switchD_00b11078_caseD_7;
  case 8:
    goto switchD_00b11078_caseD_8;
  case 9:
    if ((char)param_2[0xc6] != '\0') {
      if ((char)param_2[0xc6] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01871510);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871510);
    }
    uVar15 = param_2[0xc5];
    goto LAB_00b1167c;
  case 10:
    goto switchD_00b11078_caseD_a;
  case 0xb:
    goto switchD_00b11078_caseD_b;
  case 0xc:
    goto LAB_00b1279c;
  case 0xd:
switchD_00b11078_caseD_d:
    iVar5 = FUN_00b14ab8(param_2 + 0xc4,param_3);
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
      uVar3 = 0xd;
      goto LAB_00b11b9c;
    }
    if ((char)param_2[0x102] == '\x03') {
      cVar2 = (char)param_2[0xfd];
      bVar25 = cVar2 == '\x03';
      if (bVar25) {
        cVar2 = (char)param_2[0xfb];
      }
      if ((bVar25 && cVar2 == '\x03') && (param_2[0xf8] != 0)) {
        FUN_00c81a4c(param_2[0xf8],param_2[0xf9],1);
      }
    }
LAB_00b124f0:
    *(undefined1 *)(param_2 + 0xdd) = 0;
    param_2[0xda] = param_2[0xb9] + 0x288;
    break;
  case 0xf:
    goto switchD_00b11078_caseD_f;
  }
  uVar32 = FUN_00b240ec(param_2 + 0xc4,param_3);
  if ((undefined1 *)uVar32 == &SUB_00000002) {
    *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
    uVar3 = 0xe;
  }
  else {
    if ((char)param_2[0xdd] == '\x03') {
      FUN_00ad235c(param_2 + 0xc6);
    }
    if ((uVar32 & 1) == 0) {
      *(undefined1 *)(param_2 + 0xd2) = 0;
      param_2[0xca] = param_2[0xb9];
      param_2[0xcb] = (uint)(uVar32 >> 0x20);
      *(undefined8 *)(param_2 + 0xc4) = *(undefined8 *)(param_2 + 0x62);
switchD_00b11078_caseD_f:
      FUN_00b24858(&local_2c8,param_2 + 0xc4);
      puVar12 = local_2b4;
      pppuVar9 = local_2b8;
      if (local_2b8 == (uint ***)0x3b9aca01) {
        *(undefined4 *)(param_1 + 3) = 0x3b9aca02;
        uVar3 = 0xf;
        goto LAB_00b11b9c;
      }
      local_60 = *(undefined8 *)(param_2 + 0x62);
      local_70 = local_2c8;
      fStack_6c = local_2c4;
      puStack_68 = local_2c0;
      uStack_64 = uStack_2bc;
      FUN_00ac8e24(param_2 + 0x12);
    }
    else {
LAB_00b12548:
      puVar12 = (uint *)uVar32;
      local_60 = CONCAT44(local_60._4_4_,(int)(uVar32 >> 0x20));
LAB_00b129f4:
      pppuVar9 = (uint ***)(undefined1 *)0x3b9aca01;
LAB_00b11bb0:
      FUN_00ac8e24(param_2 + 0x12);
    }
LAB_00b11b6c:
    *param_1 = local_60;
    *(uint *)(param_1 + 1) = local_70;
    *(float *)((int)param_1 + 0xc) = fStack_6c;
    *(undefined1 **)(param_1 + 2) = puStack_68;
    *(uint *)((int)param_1 + 0x14) = uStack_64;
    *(uint ****)(param_1 + 3) = pppuVar9;
    *(uint **)((int)param_1 + 0x1c) = puVar12;
    uVar3 = 1;
  }
LAB_00b11b9c:
  *(undefined1 *)((int)param_2 + 0x306) = uVar3;
  return;
LAB_00b12970:
  uVar6 = FUN_00c79b64(&local_f8);
  local_60 = CONCAT44(local_60._4_4_,uVar6);
  FUN_00c48cbc(param_2 + 0xc4);
LAB_00b12980:
  if (param_2[0xa8] != 0) {
    thunk_FUN_016d3fb4(param_2[0xa9]);
  }
  uVar15 = param_2[0xac];
  puVar23 = (undefined4 *)(uVar15 + 4);
  for (uVar21 = param_2[0xad]; uVar21 != 0; uVar21 = uVar21 - 1) {
    if (puVar23[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar23);
    }
    puVar23 = puVar23 + 6;
  }
  if (param_2[0xab] != 0) {
    thunk_FUN_016d3fb4(uVar15);
  }
  FUN_00ac8e24(param_2 + 0x66);
  puVar12 = (uint *)0x0;
  goto LAB_00b129f4;
}

