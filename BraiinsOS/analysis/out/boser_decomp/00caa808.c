// FUN_00caa808 @ 00caa808 size=3140 calls_out=15 calls_in=0
// strings: WifiConnectResult | WifiConnectResult | WifiConnectResult | WifiConnectResult | WifiConnectResult | WifiConnectResult

void FUN_00caa808(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  int *unaff_r6;
  int iVar22;
  int iVar23;
  int *piVar24;
  int *unaff_r7;
  int iVar25;
  int *unaff_r8;
  int iVar26;
  int *unaff_r10;
  int *piVar27;
  int *piVar28;
  int iVar29;
  bool bVar30;
  int local_10c;
  int local_108;
  int local_f4;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int **local_98;
  undefined1 *local_94;
  int *local_90;
  undefined1 *local_8c;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  undefined1 local_78;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x17]) {
  case '\0':
    unaff_r7 = (int *)param_2[9];
    unaff_r6 = (int *)(uint)*(byte *)(param_2 + 8);
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    piVar20 = (int *)0x0;
    if (*param_2 != 0) {
      piVar20 = param_2 + 1;
    }
    *(byte *)(param_2 + 0x13) = *(byte *)(param_2 + 8);
    param_2[0xf] = (int)unaff_r7;
    iVar14 = unaff_r7[0x13];
    param_2[0xe] = (int)piVar20;
    iVar17 = 0x3c;
    iVar15 = 0x3c;
    if (iVar14 == 0) {
      iVar15 = 0x2c;
    }
    iVar14 = *(int *)((int)unaff_r7 + iVar15 + 0x10);
    param_2[0xd] = *(int *)((int)unaff_r7 + iVar15 + 0x14);
    local_bc = param_2 + 0xb;
    *local_bc = 1;
    local_c4 = param_2 + 0xc;
    *local_c4 = iVar14 + 8;
    if (unaff_r7[0x13] == 0) {
      iVar17 = 0x2c;
    }
    unaff_r10 = *(int **)((int)unaff_r7 + iVar17 + 0x10);
    do {
      iVar14 = *unaff_r10;
      bVar30 = (bool)hasExclusiveAccess(unaff_r10);
    } while (!bVar30);
    *unaff_r10 = iVar14 + 1;
    if (iVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xcab46c);
      (*pcVar1)();
    }
    piVar20 = *(int **)((int)unaff_r7 + iVar17 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    unaff_r8 = *(int **)param_2[6];
    if ((unaff_r8[4] == 0) && (*(int *)(param_2[9] + 0x1c) == 0)) {
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      *(undefined1 *)(param_2 + 0x1a) = 0;
      param_2[0x1b] = (int)unaff_r10;
      param_2[0x1c] = (int)piVar20;
      param_2[0x18] = param_2[10];
      param_2[0x19] = (int)local_bc;
      local_b8 = piVar20;
      local_b4 = unaff_r10;
      goto LAB_00caaa0c;
    }
    param_2[0x14] = -0x80000000;
    param_2[0x15] = (int)"WifiConnectResult";
    param_2[0x16] = 0x11;
    local_b0 = unaff_r10;
    local_ac = piVar20;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&LAB_01c14638);
    }
    iVar17 = FUN_006c176c(*(undefined4 *)(*(int *)param_2[0x10] + 0x78),
                          *(undefined4 *)(*(int *)param_2[0x10] + 0x7c),"WifiConnectResult",0x11);
    if (iVar17 != 0) {
      uVar16 = 2;
      if ((int)*(uint *)(iVar17 + 0x10) < 0) {
        uVar16 = *(uint *)(iVar17 + 0x10) ^ 0x80000000;
      }
      if (uVar16 != 2) {
        if (uVar16 != 1) goto LAB_00caaa1c;
        iVar17 = iVar17 + 0x18;
      }
      iVar17 = FUN_006e05dc(iVar17,*(int *)(param_2[9] + 0x3c) + 8,
                            *(undefined4 *)(param_2[9] + 0x40));
      if (iVar17 != 0) {
        iVar14 = param_2[9];
        if (*(int *)(iVar14 + 0x4c) == 0) {
          local_108 = 0;
        }
        else {
          local_10c = *(int *)(iVar14 + 0x50);
          local_108 = *(int *)(iVar14 + 0x4c) + 8;
        }
        iVar29 = *(int *)(iVar17 + 0x8c);
        iVar15 = *(int *)(iVar17 + 0x90);
        iVar26 = *(int *)(iVar14 + 0x3c) + 8;
        iVar18 = *(int *)(iVar14 + 0x40);
        *(undefined1 *)((int)param_2 + 0x5e) = 1;
        iVar22 = param_2[10];
        iVar17 = param_2[0x13];
        iVar4 = *(int *)(iVar14 + 0x1c);
        *(undefined1 *)((int)param_2 + 0x5e) = 0;
        if (iVar4 == 0) {
          param_2[0x18] = iVar22;
          param_2[0x19] = (int)local_bc;
          param_2[0x3c] = iVar14 + 8;
          param_2[0x41] = (int)unaff_r10;
          param_2[0x42] = (int)piVar20;
          param_2[0x3d] = local_108;
          param_2[0x3e] = local_10c;
          *(undefined1 *)(param_2 + 0x1a) = 0;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x40) = 0;
          *(char *)(param_2 + 0x3f) = (char)iVar17;
          param_2[0x34] = (int)(unaff_r8 + 2);
          param_2[0x35] = (int)local_c4;
          param_2[0x37] = 0x11;
          param_2[0x39] = iVar15;
          param_2[0x36] = (int)"WifiConnectResult";
          param_2[0x38] = iVar29;
          param_2[0x3a] = iVar26;
          param_2[0x3b] = iVar18;
          param_2[0x1b] = (int)(param_2 + 0x18);
          param_2[0x1c] = (int)(param_2 + 0x1b);
          param_2[0x1d] = (int)&DAT_01c147e8;
          goto switchD_00caa828_caseD_4;
        }
        piVar12 = (int *)thunk_FUN_01be5118(0xc);
        if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *(undefined1 *)(piVar12 + 2) = 0;
        *piVar12 = iVar22;
        piVar12[1] = (int)local_bc;
        param_2[0x3d] = (int)piVar12;
        param_2[0x3e] = (int)&DAT_01c16370;
        if (*(int *)(iVar14 + 0x1c) != 0) {
          iVar22 = *(int *)(iVar14 + 0x18);
          iVar4 = iVar22 + *(int *)(iVar14 + 0x1c) * 0x24;
          piVar5 = (int *)((uint)&local_70 | 4);
          do {
            iVar23 = *(int *)param_2[5];
            if (*(int *)(iVar23 + 0x14) != 0) {
              iVar21 = *(int *)(iVar22 + 0x20);
              iVar25 = *(int *)(iVar22 + 0x1c) + 8;
              uVar6 = FUN_01a9c24c(*(undefined4 *)(iVar23 + 0x18),*(undefined4 *)(iVar23 + 0x1c),
                                   *(undefined4 *)(iVar23 + 0x20),*(undefined4 *)(iVar23 + 0x24),
                                   iVar25,iVar21);
              uVar16 = uVar6 >> 0x19;
              uVar19 = *(uint *)(iVar23 + 0xc);
              iVar23 = *(int *)(iVar23 + 8);
              local_f4 = 0;
              while( true ) {
                uVar6 = uVar19 & uVar6;
                uVar7 = *(uint *)(iVar23 + uVar6);
                uVar8 = uVar7 ^ uVar16 * 0x1010101;
                for (uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff; uVar8 != 0;
                    uVar8 = uVar8 - 1 & uVar8) {
                  uVar9 = uVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                 (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3)
                          & uVar19;
                  iVar10 = iVar23 + -0x14 + uVar9 * -0x14;
                  if ((iVar21 == *(int *)(iVar10 + 8)) &&
                     (iVar10 = thunk_FUN_01bed842(iVar25,*(undefined4 *)(iVar10 + 4),iVar21),
                     iVar10 == 0)) {
                    local_98 = (int **)*local_bc;
                    local_94 = (undefined1 *)param_2[0xc];
                    local_90 = (int *)param_2[0xd];
                    local_8c = (undefined1 *)param_2[0xe];
                    local_84 = param_2[0x10];
                    iStack_80 = param_2[0x11];
                    iStack_7c = param_2[0x12];
                    local_78 = 0;
                    iVar23 = iVar23 + uVar9 * -0x14;
                    local_88 = iVar22;
                    (**(code **)(*(int *)(iVar23 + -4) + 0x14))
                              (&local_70,*(undefined4 *)(iVar23 + -8),&local_98,iVar22 + 8);
                    piVar27 = local_48;
                    piVar24 = local_50;
                    local_dc = local_54;
                    piVar28 = local_5c;
                    piVar12 = local_70;
                    local_b4 = local_6c;
                    local_b8 = local_68;
                    if (local_70 != (int *)0x2) {
                      local_c4 = local_38;
                      local_d0 = local_40;
                      local_cc = local_44;
                      local_bc = local_64;
                      local_c0 = local_60;
                      local_c8 = local_58;
                      local_d4 = local_4c;
                      FUN_0175d85c(param_2 + 0x3d);
                      local_38 = local_3c;
                      goto LAB_00cab258;
                    }
                    if (*local_bc == 1) {
                      local_30 = *local_c4;
                      iStack_2c = param_2[0xd];
                      iStack_28 = param_2[0xe];
                    }
                    local_70 = (int *)(uint)(*local_bc == 1);
                    local_60 = (int *)param_2[0xf];
                    local_5c = (int *)param_2[0x10];
                    local_58 = (int *)param_2[0x11];
                    local_54 = (int *)param_2[0x12];
                    iVar23 = param_2[0x13];
                    *piVar5 = local_30;
                    piVar5[1] = iStack_2c;
                    piVar5[2] = iStack_28;
                    local_48 = local_68;
                    local_4c = local_6c;
                    local_44 = (int *)param_2[0x3d];
                    local_40 = (int *)param_2[0x3e];
                    local_50 = (int *)CONCAT31(local_50._1_3_,(char)iVar23);
                    local_34 = (int *)((uint)local_34 & 0xffffff00);
                    puVar11 = (undefined4 *)thunk_FUN_01be5118(0x40);
                    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x40);
                    }
                    *puVar11 = local_70;
                    puVar11[1] = local_6c;
                    puVar11[2] = local_68;
                    puVar11[3] = local_64;
                    puVar11[4] = local_60;
                    puVar11[5] = local_5c;
                    puVar11[6] = local_58;
                    puVar11[7] = local_54;
                    puVar11[8] = local_50;
                    puVar11[9] = local_4c;
                    puVar11[10] = local_48;
                    puVar11[0xb] = local_44;
                    puVar11[0xc] = local_40;
                    puVar11[0xd] = local_3c;
                    puVar11[0xe] = local_38;
                    puVar11[0xf] = local_34;
                    param_2[0x3d] = (int)puVar11;
                    param_2[0x3e] = (int)&DAT_01c14b38;
                    goto LAB_00caaeb0;
                  }
                }
                if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
                local_f4 = local_f4 + 4;
                uVar6 = uVar6 + local_f4;
              }
            }
LAB_00caaeb0:
            iVar22 = iVar22 + 0x24;
          } while (iVar22 != iVar4);
        }
        param_2[0x3f] = (int)unaff_r10;
        param_2[0x40] = (int)piVar20;
        *(undefined1 *)((int)param_2 + 0x5d) = 0;
        *(undefined1 *)(param_2 + 0x3c) = 0;
        param_2[0x39] = local_108;
        param_2[0x30] = (int)(unaff_r8 + 2);
        param_2[0x3a] = local_10c;
        *(char *)(param_2 + 0x3b) = (char)iVar17;
        param_2[0x38] = iVar14 + 8;
        param_2[0x31] = (int)local_c4;
        param_2[0x33] = 0x11;
        param_2[0x18] = (int)(param_2 + 0x3d);
        param_2[0x19] = (int)&DAT_01c14648;
        param_2[0x32] = (int)"WifiConnectResult";
        param_2[0x34] = iVar29;
        param_2[0x35] = iVar15;
        param_2[0x36] = iVar26;
        param_2[0x37] = iVar18;
        goto switchD_00caa828_caseD_5;
      }
    }
LAB_00caaa1c:
    local_94 = &LAB_00701524;
    local_98 = &local_b0;
    local_8c = &LAB_012b97d8;
    local_90 = param_2 + 0x14;
    FUN_00664898(&local_30,&DAT_005952c0,&local_98);
    local_a8 = local_30;
    iStack_a4 = iStack_2c;
    iStack_a0 = iStack_28;
    local_94 = *(undefined1 **)param_2[0xf];
    local_90 = (int *)((int *)param_2[0xf])[1];
    local_98 = (int **)0x1;
    FUN_006bd784(&local_70,&local_a8,&local_98);
    local_c4 = local_38;
    local_d0 = local_40;
    local_cc = local_44;
    local_d4 = local_4c;
    local_b4 = local_6c;
    local_b8 = local_68;
    local_bc = local_64;
    local_c0 = local_60;
    local_c8 = local_58;
    piVar20 = local_54;
    unaff_r6 = local_50;
    unaff_r7 = local_70;
    unaff_r8 = local_3c;
    unaff_r10 = local_48;
    param_3 = local_5c;
LAB_00cab260:
    if (param_2[0x14] != -0x80000000) {
      FUN_019bb7e0(param_2[0x14],param_2[0x15]);
    }
    if (*(char *)((int)param_2 + 0x5d) != '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *local_b0;
        bVar30 = (bool)hasExclusiveAccess(local_b0);
      } while (!bVar30);
      *local_b0 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_b0,local_ac);
      }
    }
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    uVar13 = 1;
    goto LAB_00cab340;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c14668);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c14668);
  case '\x03':
    if ((*(byte *)(param_2 + 0x1a) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1600c);
    }
    local_b4 = (int *)param_2[0x1b];
    local_b8 = (int *)param_2[0x1c];
LAB_00caaa0c:
    piVar20 = (int *)&DAT_80000000;
    *(undefined1 *)(param_2 + 0x1a) = 1;
    goto LAB_00cab338;
  case '\x04':
switchD_00caa828_caseD_4:
    FUN_00b4f44c(&local_70,param_2 + 0x1c,param_3);
    piVar28 = local_34;
    unaff_r8 = local_40;
    unaff_r7 = local_44;
    local_d4 = local_48;
    piVar24 = local_4c;
    local_dc = local_50;
    unaff_r6 = local_54;
    piVar20 = local_58;
    local_bc = local_60;
    piVar12 = local_70;
    if (local_70 == (int *)0x2) {
      *param_1 = 2;
      uVar3 = 4;
      goto LAB_00cab3a4;
    }
    local_e0 = local_68;
    local_e4 = local_64;
    local_d8 = local_48;
    local_c8 = local_54;
    local_c0 = local_5c;
    cVar2 = (char)param_2[0x40];
    bVar30 = cVar2 == '\x03';
    if (bVar30) {
      cVar2 = (char)param_2[0x31];
    }
    if (bVar30 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x32);
    }
    local_c4 = local_3c;
    if (((uint)piVar12 & 1) != 0) {
      piVar12 = (int *)param_2[0x41];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar12;
        bVar30 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar30);
      *piVar12 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x41],param_2[0x42]);
      }
      local_b4 = local_68;
      local_b8 = local_64;
      local_d0 = local_3c;
      local_cc = unaff_r8;
      local_c4 = piVar28;
      piVar12 = local_6c;
      piVar27 = unaff_r7;
      piVar28 = piVar20;
      goto LAB_00cab258;
    }
    if (piVar20 == (int *)0x80000007) {
      piVar20 = (int *)&DAT_80000000;
    }
    local_b4 = (int *)param_2[0x41];
    local_b8 = (int *)param_2[0x42];
    break;
  case '\x05':
switchD_00caa828_caseD_5:
    FUN_00b4f44c(&local_70,param_2 + 0x18,param_3);
    unaff_r8 = local_40;
    unaff_r7 = local_44;
    local_d8 = local_48;
    piVar24 = local_4c;
    local_dc = local_50;
    unaff_r6 = local_54;
    piVar20 = local_58;
    piVar12 = local_70;
    if (local_70 == (int *)0x2) {
      *param_1 = 2;
      uVar3 = 5;
      goto LAB_00cab3a4;
    }
    local_b4 = local_68;
    local_b8 = local_64;
    local_bc = local_60;
    local_c4 = local_34;
    local_d0 = local_3c;
    local_cc = local_40;
    local_d4 = local_48;
    local_c8 = local_54;
    local_c0 = local_5c;
    cVar2 = (char)param_2[0x3c];
    bVar30 = cVar2 == '\x03';
    if (bVar30) {
      cVar2 = (char)param_2[0x2d];
    }
    if (bVar30 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    if (((uint)piVar12 & 1) != 0) {
      piVar12 = (int *)param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        iVar17 = *piVar12;
        bVar30 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar30);
      *piVar12 = iVar17 + -1;
      if (iVar17 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      piVar12 = local_6c;
      piVar27 = unaff_r7;
      piVar28 = piVar20;
LAB_00cab258:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      piVar20 = local_dc;
      unaff_r6 = piVar24;
      unaff_r7 = piVar12;
      unaff_r8 = local_38;
      unaff_r10 = piVar27;
      param_3 = piVar28;
      goto LAB_00cab260;
    }
    local_c4 = local_3c;
    local_e0 = local_68;
    local_e4 = local_64;
    if (piVar20 == (int *)0x80000007) {
      piVar20 = (int *)&DAT_80000000;
    }
    local_b4 = (int *)param_2[0x3f];
    local_b8 = (int *)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
  }
  param_3 = local_bc;
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != -0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_c8 = local_c0;
  local_d4 = local_dc;
  local_cc = local_d8;
  local_bc = local_e0;
  local_c0 = local_e4;
  unaff_r10 = piVar24;
  local_d0 = unaff_r7;
LAB_00cab338:
  uVar13 = 0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_00cab340:
  *param_1 = uVar13;
  param_1[1] = unaff_r7;
  param_1[2] = local_b4;
  param_1[10] = local_d4;
  param_1[3] = local_b8;
  param_1[0xc] = local_cc;
  param_1[4] = local_bc;
  param_1[0xd] = local_d0;
  param_1[5] = local_c0;
  param_1[7] = local_c8;
  uVar3 = 1;
  param_1[8] = piVar20;
  param_1[9] = unaff_r6;
  param_1[0xb] = unaff_r10;
  param_1[0xe] = unaff_r8;
  param_1[0xf] = local_c4;
  param_1[6] = param_3;
LAB_00cab3a4:
  *(undefined1 *)(param_2 + 0x17) = uVar3;
  return;
}

