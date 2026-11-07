// FUN_0082023c @ 0082023c size=3992 calls_out=18 calls_in=0
// strings: Preheating | Preheating | endTimeevent open/boser/boser/src/api/grpc/miner.rs:571 | Preheating | Preheating | Preheating

void FUN_0082023c(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int *extraout_r2;
  int *piVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int *unaff_r7;
  int iVar25;
  int iVar26;
  uint uVar27;
  int *unaff_r8;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  int local_260;
  int local_25c;
  int local_240;
  int *local_234;
  int *local_230;
  int *local_228;
  int *local_224;
  int *local_220;
  int *local_21c;
  int *local_218;
  int *local_214;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  int *local_200;
  int *local_1fc;
  int **local_1f8;
  int *local_1f4;
  int *local_1f0;
  undefined1 *local_1ec;
  int *local_128;
  int *local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int *local_ec;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  undefined1 local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x17]) {
  case '\0':
    unaff_r7 = (int *)param_2[9];
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    piVar19 = (int *)0x0;
    if (*param_2 != 0) {
      piVar19 = param_2 + 1;
    }
    *(char *)(param_2 + 0x13) = (char)param_2[8];
    param_2[0xf] = (int)unaff_r7;
    iVar14 = unaff_r7[0x13];
    param_2[0xe] = (int)piVar19;
    iVar17 = 0x3c;
    iVar15 = 0x3c;
    if (iVar14 == 0) {
      iVar15 = 0x2c;
    }
    iVar14 = *(int *)((int)unaff_r7 + iVar15 + 0x10);
    iVar15 = *(int *)((int)unaff_r7 + iVar15 + 0x14);
    piVar12 = param_2 + 0xb;
    *piVar12 = 1;
    param_2[0xd] = iVar15;
    piVar4 = param_2 + 0xc;
    *piVar4 = iVar14 + 8;
    if (unaff_r7[0x13] == 0) {
      iVar17 = 0x2c;
    }
    unaff_r8 = *(int **)((int)unaff_r7 + iVar17 + 0x10);
    do {
      iVar14 = *unaff_r8;
      bVar32 = (bool)hasExclusiveAccess(unaff_r8);
    } while (!bVar32);
    *unaff_r8 = iVar14 + 1;
    if (iVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x821228);
      (*pcVar1)();
    }
    piVar18 = *(int **)((int)unaff_r7 + iVar17 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    iVar17 = *(int *)param_2[6];
    local_200 = unaff_r8;
    local_1fc = piVar18;
    if ((*(int *)(iVar17 + 0x10) == 0) && (*(int *)(param_2[9] + 0x1c) == 0)) {
      *(undefined1 *)(param_2 + 0x1d) = 0;
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      piVar19 = (int *)param_2[10];
      param_2[0x18] = (int)unaff_r8;
      param_2[0x19] = (int)piVar18;
      param_2[0x1a] = (int)piVar19;
      param_2[0x1b] = (int)piVar12;
LAB_008205c8:
      param_2[0x1c] = (int)piVar12;
      if (*(int *)(piVar12[4] + 0x40) == 7) {
        iVar17 = thunk_FUN_01bed842(*(int *)(piVar12[4] + 0x3c) + 8,
                                    "endTimeevent open/boser/boser/src/api/grpc/miner.rs:571",7);
        piVar18 = extraout_r2;
        if (iVar17 == 0) {
          param_2[0x1e] = (int)piVar19;
          *(undefined1 *)(param_2 + 0x23) = 0;
          param_2[0x1f] = (int)piVar12;
          goto LAB_0082064c;
        }
      }
      local_120 = piVar18;
      *(undefined1 *)(param_2 + 0x1d) = 1;
      local_124 = param_2 + 0x1d;
LAB_0082060c:
      local_208 = (int *)&DAT_80000000;
      goto LAB_00820614;
    }
    param_2[0x14] = -0x80000000;
    param_2[0x15] = (int)"Preheating";
    param_2[0x16] = 10;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&LAB_01c14638);
    }
    iVar14 = FUN_006c176c(*(undefined4 *)(*(int *)param_2[0x10] + 0x78),
                          *(undefined4 *)(*(int *)param_2[0x10] + 0x7c),"Preheating",10);
    if (iVar14 != 0) {
      uVar16 = 2;
      if ((int)*(uint *)(iVar14 + 0x10) < 0) {
        uVar16 = *(uint *)(iVar14 + 0x10) ^ 0x80000000;
      }
      if (uVar16 != 2) {
        if (uVar16 != 1) goto LAB_00820460;
        iVar14 = iVar14 + 0x18;
      }
      iVar14 = FUN_006e05dc(iVar14,*(int *)(param_2[9] + 0x3c) + 8,
                            *(undefined4 *)(param_2[9] + 0x40));
      if (iVar14 != 0) {
        iVar25 = param_2[9];
        iVar15 = *(int *)(iVar25 + 0x3c);
        if (*(int *)(iVar25 + 0x4c) == 0) {
          local_25c = 0;
        }
        else {
          local_260 = *(int *)(iVar25 + 0x50);
          local_25c = *(int *)(iVar25 + 0x4c) + 8;
        }
        iVar29 = *(int *)(iVar14 + 0x8c);
        iVar17 = iVar17 + 8;
        iVar20 = *(int *)(iVar14 + 0x90);
        iVar30 = *(int *)(iVar25 + 0x40);
        *(undefined1 *)((int)param_2 + 0x5e) = 1;
        iVar15 = iVar15 + 8;
        iVar14 = param_2[0x13];
        local_1ec = (undefined1 *)((uint)local_1ec & 0xffffff00);
        local_1f8 = (int **)param_2[10];
        local_1f4 = piVar12;
        if (*(int *)(iVar25 + 0x1c) == 0) {
          *(undefined1 *)((int)param_2 + 0x5e) = 0;
          FUN_01bed4e2(param_2 + 0x40,&local_1f8,0xd0);
          param_2[0x18] = (int)(param_2 + 0x40);
          param_2[0x3e] = (int)unaff_r8;
          param_2[0x3f] = (int)piVar18;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3d) = 0;
          param_2[0x3a] = local_25c;
          param_2[0x3b] = local_260;
          *(char *)(param_2 + 0x3c) = (char)iVar14;
          param_2[0x39] = iVar25 + 8;
          param_2[0x31] = iVar17;
          param_2[0x32] = (int)piVar4;
          param_2[0x34] = 10;
          param_2[0x35] = iVar29;
          param_2[0x37] = iVar15;
          param_2[0x33] = (int)"Preheating";
          param_2[0x36] = iVar20;
          param_2[0x38] = iVar30;
          param_2[0x19] = (int)(param_2 + 0x18);
          param_2[0x1a] = (int)&DAT_01c0b9b0;
          goto switchD_00820260_caseD_4;
        }
        *(undefined1 *)((int)param_2 + 0x5e) = 0;
        FUN_01bed4e2(&local_128,&local_1f8,0xd0);
        iVar5 = thunk_FUN_01be5118(0xd0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0xd0);
        }
        FUN_01bed4e2(iVar5,&local_1f8,0xd0);
        param_2[0x3d] = iVar5;
        param_2[0x3e] = (int)&DAT_01c12200;
        if (*(int *)(iVar25 + 0x1c) != 0) {
          iVar28 = *(int *)(iVar25 + 0x18);
          iVar5 = iVar28 + *(int *)(iVar25 + 0x1c) * 0x24;
          piVar6 = (int *)((uint)&local_128 | 4);
          do {
            iVar22 = *(int *)param_2[5];
            if (*(int *)(iVar22 + 0x14) != 0) {
              iVar23 = *(int *)(iVar28 + 0x20);
              iVar26 = *(int *)(iVar28 + 0x1c) + 8;
              uVar7 = FUN_01a9c24c(*(undefined4 *)(iVar22 + 0x18),*(undefined4 *)(iVar22 + 0x1c),
                                   *(undefined4 *)(iVar22 + 0x20),*(undefined4 *)(iVar22 + 0x24),
                                   iVar26,iVar23);
              uVar16 = uVar7 >> 0x19;
              iVar31 = *(int *)(iVar22 + 8);
              uVar27 = *(uint *)(iVar22 + 0xc);
              local_240 = 0;
              while( true ) {
                uVar7 = uVar27 & uVar7;
                uVar8 = *(uint *)(iVar31 + uVar7);
                uVar9 = uVar8 ^ uVar16 * 0x1010101;
                for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0;
                    uVar9 = uVar9 - 1 & uVar9) {
                  uVar10 = uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                                  (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3)
                           & uVar27;
                  iVar22 = iVar31 + -0x14 + uVar10 * -0x14;
                  if ((iVar23 == *(int *)(iVar22 + 8)) &&
                     (iVar22 = thunk_FUN_01bed842(iVar26,*(undefined4 *)(iVar22 + 4),iVar23),
                     iVar22 == 0)) {
                    local_58 = *piVar12;
                    iStack_54 = param_2[0xc];
                    iStack_50 = param_2[0xd];
                    iStack_4c = param_2[0xe];
                    local_38 = 0;
                    local_44 = param_2[0x10];
                    iStack_40 = param_2[0x11];
                    iStack_3c = param_2[0x12];
                    iVar31 = iVar31 + uVar10 * -0x14;
                    local_48 = iVar28;
                    (**(code **)(*(int *)(iVar31 + -4) + 0x14))
                              (&local_128,*(undefined4 *)(iVar31 + -8),&local_58,iVar28 + 8);
                    unaff_r7 = local_104;
                    piVar21 = local_10c;
                    piVar19 = local_110;
                    piVar24 = local_128;
                    local_20c = local_124;
                    local_210 = local_120;
                    if (local_128 != (int *)0x2) {
                      local_224 = local_f0;
                      local_228 = local_f4;
                      local_230 = local_f8;
                      local_234 = local_fc;
                      local_220 = local_11c;
                      local_218 = local_118;
                      local_208 = local_114;
                      local_214 = local_100;
                      local_21c = local_108;
                      FUN_0175d85c(param_2 + 0x3d);
                      goto LAB_00820f78;
                    }
                    if (*piVar12 == 1) {
                      local_30 = *piVar4;
                      iStack_2c = param_2[0xd];
                      iStack_28 = param_2[0xe];
                    }
                    local_128 = (int *)(uint)(*piVar12 == 1);
                    local_118 = (int *)param_2[0xf];
                    local_114 = (int *)param_2[0x10];
                    local_110 = (int *)param_2[0x11];
                    local_10c = (int *)param_2[0x12];
                    iVar22 = param_2[0x13];
                    *piVar6 = local_30;
                    piVar6[1] = iStack_2c;
                    piVar6[2] = iStack_28;
                    local_100 = local_120;
                    local_104 = local_124;
                    local_fc = (int *)param_2[0x3d];
                    local_f8 = (int *)param_2[0x3e];
                    local_108 = (int *)CONCAT31(local_108._1_3_,(char)iVar22);
                    local_ec = (int *)((uint)local_ec & 0xffffff00);
                    puVar11 = (undefined4 *)thunk_FUN_01be5118(0x40);
                    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x40);
                    }
                    *puVar11 = local_128;
                    puVar11[1] = local_124;
                    puVar11[2] = local_120;
                    puVar11[3] = local_11c;
                    puVar11[4] = local_118;
                    puVar11[5] = local_114;
                    puVar11[6] = local_110;
                    puVar11[7] = local_10c;
                    puVar11[8] = local_108;
                    puVar11[9] = local_104;
                    puVar11[10] = local_100;
                    puVar11[0xb] = local_fc;
                    puVar11[0xc] = local_f8;
                    puVar11[0xd] = local_f4;
                    puVar11[0xe] = local_f0;
                    puVar11[0xf] = local_ec;
                    param_2[0x3d] = (int)puVar11;
                    param_2[0x3e] = (int)&DAT_01c0b9a0;
                    goto LAB_00820c18;
                  }
                }
                if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
                local_240 = local_240 + 4;
                uVar7 = uVar7 + local_240;
              }
            }
LAB_00820c18:
            iVar28 = iVar28 + 0x24;
          } while (iVar28 != iVar5);
        }
        param_2[0x3f] = (int)unaff_r8;
        param_2[0x40] = (int)piVar18;
        *(undefined1 *)((int)param_2 + 0x5d) = 0;
        *(undefined1 *)(param_2 + 0x3c) = 0;
        *(char *)(param_2 + 0x3b) = (char)iVar14;
        param_2[0x39] = local_25c;
        param_2[0x3a] = local_260;
        param_2[0x38] = iVar25 + 8;
        param_2[0x30] = iVar17;
        param_2[0x31] = (int)piVar4;
        param_2[0x33] = 10;
        param_2[0x34] = iVar29;
        param_2[0x36] = iVar15;
        param_2[0x37] = iVar30;
        param_2[0x18] = (int)(param_2 + 0x3d);
        param_2[0x32] = (int)"Preheating";
        param_2[0x35] = iVar20;
        param_2[0x19] = (int)&DAT_01c0b0b0;
        goto switchD_00820260_caseD_5;
      }
    }
LAB_00820460:
    local_1f4 = (int *)&LAB_00701524;
    local_1f8 = &local_200;
    local_1ec = &LAB_012b97d8;
    local_1f0 = param_2 + 0x14;
    FUN_00664898(&local_58,&DAT_005952c0,&local_1f8);
    local_30 = local_58;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    local_1f4 = *(int **)param_2[0xf];
    local_1f0 = (int *)((undefined4 *)param_2[0xf])[1];
    local_1f8 = (int **)0x1;
    FUN_006bd784(&local_128,&local_30,&local_1f8);
    local_224 = local_f0;
    local_228 = local_f4;
    local_230 = local_f8;
    local_234 = local_fc;
    local_214 = local_100;
    local_21c = local_108;
    local_20c = local_124;
    local_210 = local_120;
    local_220 = local_11c;
    local_218 = local_118;
    local_208 = local_114;
    piVar21 = local_10c;
    piVar24 = local_128;
    piVar19 = local_110;
    unaff_r7 = local_104;
LAB_00820f84:
    piVar18 = local_21c;
    if (param_2[0x14] != -0x80000000) {
      FUN_019bb7e0(param_2[0x14],param_2[0x15]);
    }
    local_21c = local_214;
    local_214 = local_230;
    piVar6 = local_208;
    param_3 = local_218;
    local_218 = piVar19;
    local_208 = piVar21;
LAB_00820fc4:
    if (*(char *)((int)param_2 + 0x5d) != '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *local_200;
        bVar32 = (bool)hasExclusiveAccess(local_200);
      } while (!bVar32);
      *local_200 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_200,local_1fc);
      }
    }
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    uVar13 = 1;
    piVar19 = piVar18;
    piVar12 = unaff_r7;
    unaff_r7 = local_234;
    unaff_r8 = piVar6;
    goto LAB_008210ac;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c14668);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c14668);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1d]) {
    case '\0':
      piVar19 = (int *)param_2[0x1a];
      piVar12 = (int *)param_2[0x1b];
      piVar18 = param_3;
      goto LAB_008205c8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12360);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12360);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x23]) {
      case '\0':
        piVar19 = (int *)param_2[0x1e];
        piVar12 = (int *)param_2[0x1f];
LAB_0082064c:
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x20] = (int)piVar19;
        param_2[0x21] = (int)piVar12;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12360);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c12360);
      case '\x03':
        if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c12360);
        }
        piVar19 = (int *)param_2[0x20];
      }
      piVar12 = (int *)param_2[0x1c];
      *(undefined1 *)(param_2 + 0x23) = 1;
      *(undefined1 *)(param_2 + 0x22) = 1;
      param_2[0x1e] = (int)piVar19;
      iVar14 = piVar12[4];
      iVar5 = piVar12[5];
      iVar29 = piVar12[6];
      iVar20 = piVar12[7];
      iVar17 = piVar12[8];
      iVar15 = piVar12[1];
      iVar25 = piVar12[2];
      iVar30 = piVar12[3];
      param_2[0x1f] = *piVar12;
      param_2[0x20] = iVar15;
      param_2[0x21] = iVar25;
      param_2[0x22] = iVar30;
      param_2[0x25] = iVar29;
      param_2[0x26] = iVar20;
      param_2[0x23] = iVar14 + 0x20;
      param_2[0x24] = iVar5;
      *(char *)(param_2 + 0x27) = (char)iVar17;
      iVar17 = piVar12[4];
      param_2[0x4b] = (int)(param_2 + 0x1f);
      *(undefined1 *)(param_2 + 0x4d) = 0;
      param_2[0x4a] = (int)(param_2 + 0x1e);
      param_2[0x4c] = iVar17;
    }
    FUN_00818a28(&local_128,param_2 + 0x28,param_3);
    piVar24 = local_ec;
    local_234 = local_f8;
    local_21c = local_fc;
    unaff_r7 = local_100;
    piVar18 = local_104;
    piVar12 = local_108;
    piVar19 = local_10c;
    piVar6 = local_110;
    param_3 = local_114;
    unaff_r8 = local_118;
    piVar4 = local_128;
    if (local_128 == (int *)0x2) {
      *(undefined1 *)(param_2 + 0x1d) = 4;
      *param_1 = 2;
      uVar3 = 3;
      goto LAB_0082110c;
    }
    local_224 = local_f4;
    local_228 = local_f8;
    local_214 = local_fc;
    local_210 = local_11c;
    local_208 = local_110;
    local_218 = local_114;
    FUN_007eb59c(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x1d) = 1;
    if (((uint)piVar4 & 1) != 0) {
      piVar4 = (int *)param_2[0x18];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar4;
        bVar32 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar32);
      *piVar4 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x18],param_2[0x19]);
      }
      local_208 = piVar12;
      local_20c = local_120;
      local_218 = piVar19;
      local_220 = unaff_r8;
      local_214 = local_f4;
      local_228 = local_f0;
      local_224 = piVar24;
      piVar24 = local_124;
      goto LAB_00820fc4;
    }
    local_21c = piVar18;
    param_3 = local_11c;
    if (piVar6 == (int *)0x80000007) goto LAB_0082060c;
LAB_00820614:
    local_20c = (int *)param_2[0x18];
    local_210 = (int *)param_2[0x19];
    piVar24 = local_124;
    local_220 = local_120;
    goto LAB_008210a4;
  case '\x04':
switchD_00820260_caseD_4:
    FUN_00b4f44c(&local_128,param_2 + 0x19,param_3);
    unaff_r7 = local_100;
    local_21c = local_104;
    piVar21 = local_108;
    piVar19 = local_10c;
    piVar18 = local_110;
    piVar12 = local_128;
    if (local_128 == (int *)0x2) {
      *param_1 = 2;
      uVar3 = 4;
      goto LAB_0082110c;
    }
    local_20c = local_120;
    local_210 = local_11c;
    local_220 = local_118;
    local_224 = local_ec;
    local_228 = local_f0;
    local_230 = local_f4;
    local_234 = local_f8;
    local_214 = local_fc;
    local_208 = local_110;
    local_218 = local_114;
    cVar2 = (char)param_2[0x3d];
    bVar32 = cVar2 == '\x03';
    if (bVar32) {
      cVar2 = (char)param_2[0x2e];
    }
    if (bVar32 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2f);
    }
    if (((uint)piVar12 & 1) != 0) {
      piVar12 = (int *)param_2[0x3e];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar12;
        bVar32 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar32);
      *piVar12 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3e],param_2[0x3f]);
      }
      piVar24 = local_124;
      if ((char)param_2[0x43] == '\x04') {
        FUN_007eb59c(param_2 + 0x4e);
      }
      goto LAB_00820f78;
    }
    if (piVar18 == (int *)0x80000007) {
      local_208 = (int *)&DAT_80000000;
    }
    piVar24 = (int *)param_2[0x3f];
    local_204 = (int *)param_2[0x3e];
    if ((char)param_2[0x43] == '\x04') {
      FUN_007eb59c(param_2 + 0x4e);
    }
    break;
  case '\x05':
switchD_00820260_caseD_5:
    FUN_00b4f44c(&local_128,param_2 + 0x18,param_3);
    unaff_r7 = local_100;
    local_21c = local_104;
    piVar21 = local_108;
    piVar19 = local_10c;
    piVar18 = local_110;
    piVar12 = local_128;
    if (local_128 == (int *)0x2) {
      *param_1 = 2;
      uVar3 = 5;
      goto LAB_0082110c;
    }
    local_20c = local_120;
    local_210 = local_11c;
    local_220 = local_118;
    local_224 = local_ec;
    local_228 = local_f0;
    local_230 = local_f4;
    local_234 = local_f8;
    local_214 = local_fc;
    local_208 = local_110;
    local_218 = local_114;
    cVar2 = (char)param_2[0x3c];
    bVar32 = cVar2 == '\x03';
    if (bVar32) {
      cVar2 = (char)param_2[0x2d];
    }
    if (bVar32 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    if (((uint)piVar12 & 1) != 0) {
      piVar12 = (int *)param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar12;
        bVar32 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar32);
      *piVar12 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      piVar24 = local_124;
LAB_00820f78:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      goto LAB_00820f84;
    }
    if (piVar18 == (int *)0x80000007) {
      local_208 = (int *)&DAT_80000000;
    }
    local_204 = (int *)param_2[0x3f];
    piVar24 = (int *)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
  }
  unaff_r8 = local_220;
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != -0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_220 = local_20c;
  local_20c = local_204;
  local_228 = local_234;
  local_224 = local_230;
  piVar12 = piVar21;
  param_3 = local_210;
  local_210 = piVar24;
LAB_008210a4:
  uVar13 = 0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_008210ac:
  *param_1 = uVar13;
  param_1[1] = piVar24;
  param_1[8] = local_208;
  param_1[9] = piVar19;
  param_1[10] = piVar12;
  param_1[0xb] = local_21c;
  param_1[2] = local_20c;
  param_1[0xd] = local_214;
  param_1[3] = local_210;
  param_1[0xe] = local_228;
  param_1[4] = local_220;
  param_1[7] = local_218;
  uVar3 = 1;
  param_1[0xc] = unaff_r7;
  param_1[0xf] = local_224;
  param_1[5] = param_3;
  param_1[6] = unaff_r8;
LAB_0082110c:
  *(undefined1 *)(param_2 + 0x17) = uVar3;
  return;
}

