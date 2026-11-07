// FUN_00ceb0ac @ 00ceb0ac size=4232 calls_out=16 calls_in=0
// strings: BosVersion | BosVersion | isPlus | BosVersion | BosVersion | BosVersion

void FUN_00ceb0ac(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int *unaff_r4;
  uint uVar24;
  int *piVar25;
  int *unaff_r5;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int *unaff_r7;
  int iVar30;
  int *unaff_r8;
  int *unaff_r10;
  int iVar31;
  int iVar32;
  bool bVar33;
  int local_10c;
  int local_108;
  int local_f0;
  int *local_e8;
  int *local_e4;
  int *local_e0;
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
  int local_ac;
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
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    *(char *)(param_2 + 0x13) = (char)param_2[8];
    param_2[0xf] = (int)unaff_r7;
    piVar14 = (int *)0x0;
    if (*param_2 != 0) {
      piVar14 = param_2 + 1;
    }
    iVar18 = unaff_r7[0x13];
    param_2[0xe] = (int)piVar14;
    iVar21 = 0x3c;
    iVar19 = 0x3c;
    if (iVar18 == 0) {
      iVar19 = 0x2c;
    }
    iVar18 = *(int *)((int)unaff_r7 + iVar19 + 0x10);
    unaff_r5 = *(int **)((int)unaff_r7 + iVar19 + 0x14);
    unaff_r4 = param_2 + 0xb;
    *unaff_r4 = 1;
    param_2[0xd] = (int)unaff_r5;
    piVar14 = param_2 + 0xc;
    *piVar14 = iVar18 + 8;
    if (unaff_r7[0x13] == 0) {
      iVar21 = 0x2c;
    }
    unaff_r8 = *(int **)((int)unaff_r7 + iVar21 + 0x10);
    do {
      iVar18 = *unaff_r8;
      bVar33 = (bool)hasExclusiveAccess(unaff_r8);
    } while (!bVar33);
    *unaff_r8 = iVar18 + 1;
    if (iVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xcec1f0);
      (*pcVar1)();
    }
    iVar18 = *(int *)((int)unaff_r7 + iVar21 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    iVar21 = *(int *)param_2[6];
    local_b0 = unaff_r8;
    local_ac = iVar18;
    if ((*(int *)(iVar21 + 0x10) == 0) && (*(int *)(param_2[9] + 0x1c) == 0)) {
      *(undefined1 *)(param_2 + 0x1d) = 0;
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      local_e4 = (int *)param_2[10];
      param_2[0x19] = iVar18;
      param_2[0x18] = (int)unaff_r8;
      param_2[0x1a] = (int)local_e4;
      param_2[0x1b] = (int)unaff_r4;
      local_bc = unaff_r4;
LAB_00ceb4a8:
      param_2[0x1c] = (int)unaff_r4;
      iVar21 = unaff_r4[4];
      piVar14 = (int *)&DAT_80000000;
      local_e0 = unaff_r8;
      if (*(int *)(iVar21 + 0x40) == 6) {
        iVar21 = thunk_FUN_01bed842(*(int *)(iVar21 + 0x3c) + 8,"isPlus",6);
        if (iVar21 == 0) {
          param_2[0x1e] = (int)local_e4;
          *(undefined1 *)(param_2 + 0x23) = 0;
          param_2[0x1f] = (int)unaff_r4;
          goto LAB_00cebe9c;
        }
      }
      else if ((*(int *)(iVar21 + 0x40) == 4) &&
              (*(int *)(*(int *)(iVar21 + 0x3c) + 8) == 0x6c6c7566)) {
        param_2[0x1e] = (int)local_e4;
        *(undefined1 *)(param_2 + 0x23) = 0;
        param_2[0x1f] = (int)unaff_r4;
        goto LAB_00ceb4fc;
      }
      goto LAB_00cebf54;
    }
    param_2[0x14] = -0x80000000;
    param_2[0x15] = (int)"BosVersion";
    param_2[0x16] = 10;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&LAB_01c14638);
    }
    iVar19 = FUN_006c176c(*(undefined4 *)(*(int *)param_2[0x10] + 0x78),
                          *(undefined4 *)(*(int *)param_2[0x10] + 0x7c),"BosVersion",10);
    if (iVar19 != 0) {
      uVar20 = 2;
      if ((int)*(uint *)(iVar19 + 0x10) < 0) {
        uVar20 = *(uint *)(iVar19 + 0x10) ^ 0x80000000;
      }
      if (uVar20 != 2) {
        if (uVar20 != 1) goto LAB_00ceb2cc;
        iVar19 = iVar19 + 0x18;
      }
      iVar19 = FUN_006e05dc(iVar19,*(int *)(param_2[9] + 0x3c) + 8,
                            *(undefined4 *)(param_2[9] + 0x40));
      if (iVar19 != 0) {
        iVar31 = param_2[9];
        if (*(int *)(iVar31 + 0x4c) == 0) {
          local_108 = 0;
        }
        else {
          local_10c = *(int *)(iVar31 + 0x50);
          local_108 = *(int *)(iVar31 + 0x4c) + 8;
        }
        iVar26 = *(int *)(iVar19 + 0x8c);
        iVar21 = iVar21 + 8;
        iVar32 = *(int *)(iVar19 + 0x90);
        iVar5 = *(int *)(iVar31 + 0x3c) + 8;
        iVar23 = *(int *)(iVar31 + 0x40);
        *(undefined1 *)((int)param_2 + 0x5e) = 1;
        iVar28 = param_2[10];
        iVar19 = param_2[0x13];
        iVar6 = *(int *)(iVar31 + 0x1c);
        *(undefined1 *)((int)param_2 + 0x5e) = 0;
        if (iVar6 == 0) {
          param_2[0x3e] = iVar28;
          param_2[0x3f] = (int)unaff_r4;
          param_2[0x54] = (int)unaff_r8;
          param_2[0x55] = iVar18;
          param_2[0x3a] = local_108;
          param_2[0x39] = iVar31 + 8;
          *(undefined1 *)(param_2 + 0x41) = 0;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3d) = 0;
          *(char *)(param_2 + 0x3c) = (char)iVar19;
          param_2[0x3b] = local_10c;
          param_2[0x31] = iVar21;
          param_2[0x32] = (int)piVar14;
          param_2[0x38] = iVar23;
          param_2[0x37] = iVar5;
          param_2[0x33] = (int)"BosVersion";
          param_2[0x34] = 10;
          param_2[0x35] = iVar26;
          param_2[0x36] = iVar32;
          param_2[0x18] = (int)(param_2 + 0x3e);
          param_2[0x19] = (int)(param_2 + 0x18);
          param_2[0x1a] = (int)&DAT_01c146d8;
          goto switchD_00ceb0cc_caseD_4;
        }
        piVar15 = (int *)thunk_FUN_01be5118(0x58);
        if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x58);
        }
        *(undefined1 *)(piVar15 + 3) = 0;
        *piVar15 = iVar28;
        piVar15[1] = (int)unaff_r4;
        param_2[0x3d] = (int)piVar15;
        param_2[0x3e] = (int)&DAT_01c2177c;
        if (*(int *)(iVar31 + 0x1c) != 0) {
          iVar28 = *(int *)(iVar31 + 0x18);
          iVar6 = iVar28 + *(int *)(iVar31 + 0x1c) * 0x24;
          piVar7 = (int *)((uint)&local_70 | 4);
          do {
            iVar27 = *(int *)param_2[5];
            if (*(int *)(iVar27 + 0x14) != 0) {
              iVar30 = *(int *)(iVar28 + 0x20);
              iVar29 = *(int *)(iVar28 + 0x1c) + 8;
              uVar8 = FUN_01a9c24c(*(undefined4 *)(iVar27 + 0x18),*(undefined4 *)(iVar27 + 0x1c),
                                   *(undefined4 *)(iVar27 + 0x20),*(undefined4 *)(iVar27 + 0x24),
                                   iVar29,iVar30);
              uVar20 = uVar8 >> 0x19;
              uVar24 = *(uint *)(iVar27 + 0xc);
              iVar27 = *(int *)(iVar27 + 8);
              local_f0 = 0;
              while( true ) {
                uVar8 = uVar24 & uVar8;
                uVar9 = *(uint *)(iVar27 + uVar8);
                uVar10 = uVar9 ^ uVar20 * 0x1010101;
                for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
                    uVar10 = uVar10 - 1 & uVar10) {
                  uVar11 = uVar8 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                                  (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >>
                                   3) & uVar24;
                  iVar12 = iVar27 + -0x14 + uVar11 * -0x14;
                  if ((iVar30 == *(int *)(iVar12 + 8)) &&
                     (iVar12 = thunk_FUN_01bed842(iVar29,*(undefined4 *)(iVar12 + 4),iVar30),
                     iVar12 == 0)) {
                    local_98 = (int **)*unaff_r4;
                    local_94 = (undefined1 *)param_2[0xc];
                    local_90 = (int *)param_2[0xd];
                    local_8c = (undefined1 *)param_2[0xe];
                    local_78 = 0;
                    local_84 = param_2[0x10];
                    iStack_80 = param_2[0x11];
                    iStack_7c = param_2[0x12];
                    iVar27 = iVar27 + uVar11 * -0x14;
                    local_88 = iVar28;
                    (**(code **)(*(int *)(iVar27 + -4) + 0x14))
                              (&local_70,*(undefined4 *)(iVar27 + -8),&local_98,iVar28 + 8);
                    local_e0 = local_40;
                    piVar25 = local_48;
                    local_e4 = local_4c;
                    piVar22 = local_54;
                    piVar15 = local_70;
                    local_b4 = local_6c;
                    local_b8 = local_68;
                    if (local_70 != (int *)0x2) {
                      local_c8 = local_38;
                      local_d4 = local_44;
                      local_c4 = local_64;
                      local_cc = local_60;
                      local_bc = local_5c;
                      local_c0 = local_58;
                      local_d0 = local_50;
                      FUN_0175d85c(param_2 + 0x3d);
                      local_38 = local_3c;
                      goto LAB_00cebda8;
                    }
                    if (*unaff_r4 == 1) {
                      local_30 = *piVar14;
                      iStack_2c = param_2[0xd];
                      iStack_28 = param_2[0xe];
                    }
                    local_70 = (int *)(uint)(*unaff_r4 == 1);
                    local_60 = (int *)param_2[0xf];
                    local_5c = (int *)param_2[0x10];
                    local_58 = (int *)param_2[0x11];
                    local_54 = (int *)param_2[0x12];
                    iVar27 = param_2[0x13];
                    *piVar7 = local_30;
                    piVar7[1] = iStack_2c;
                    piVar7[2] = iStack_28;
                    local_48 = local_68;
                    local_4c = local_6c;
                    local_44 = (int *)param_2[0x3d];
                    local_40 = (int *)param_2[0x3e];
                    local_50 = (int *)CONCAT31(local_50._1_3_,(char)iVar27);
                    local_34 = (int *)((uint)local_34 & 0xffffff00);
                    puVar13 = (undefined4 *)thunk_FUN_01be5118(0x40);
                    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x40);
                    }
                    *puVar13 = local_70;
                    puVar13[1] = local_6c;
                    puVar13[2] = local_68;
                    puVar13[3] = local_64;
                    puVar13[4] = local_60;
                    puVar13[5] = local_5c;
                    puVar13[6] = local_58;
                    puVar13[7] = local_54;
                    puVar13[8] = local_50;
                    puVar13[9] = local_4c;
                    puVar13[10] = local_48;
                    puVar13[0xb] = local_44;
                    puVar13[0xc] = local_40;
                    puVar13[0xd] = local_3c;
                    puVar13[0xe] = local_38;
                    puVar13[0xf] = local_34;
                    param_2[0x3d] = (int)puVar13;
                    param_2[0x3e] = (int)&DAT_01c14b38;
                    goto LAB_00ceba04;
                  }
                }
                if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
                local_f0 = local_f0 + 4;
                uVar8 = uVar8 + local_f0;
              }
            }
LAB_00ceba04:
            iVar28 = iVar28 + 0x24;
          } while (iVar28 != iVar6);
        }
        param_2[0x3f] = (int)unaff_r8;
        param_2[0x40] = iVar18;
        *(undefined1 *)((int)param_2 + 0x5d) = 0;
        *(undefined1 *)(param_2 + 0x3c) = 0;
        param_2[0x39] = local_108;
        param_2[0x30] = iVar21;
        param_2[0x3a] = local_10c;
        *(char *)(param_2 + 0x3b) = (char)iVar19;
        param_2[0x38] = iVar31 + 8;
        param_2[0x31] = (int)piVar14;
        param_2[0x36] = iVar5;
        param_2[0x33] = 10;
        param_2[0x37] = iVar23;
        param_2[0x18] = (int)(param_2 + 0x3d);
        param_2[0x32] = (int)"BosVersion";
        param_2[0x34] = iVar26;
        param_2[0x35] = iVar32;
        param_2[0x19] = (int)&DAT_01c14648;
        goto switchD_00ceb0cc_caseD_5;
      }
    }
LAB_00ceb2cc:
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
    local_c8 = local_38;
    local_d4 = local_44;
    local_d0 = local_50;
    local_b4 = local_6c;
    local_b8 = local_68;
    local_c4 = local_64;
    local_cc = local_60;
    local_bc = local_5c;
    local_c0 = local_58;
    unaff_r4 = local_48;
    unaff_r5 = local_3c;
    unaff_r7 = local_70;
    local_e0 = local_40;
    piVar14 = local_54;
    local_e4 = local_4c;
LAB_00cebdb0:
    if (param_2[0x14] != -0x80000000) {
      FUN_019bb7e0(param_2[0x14],param_2[0x15]);
    }
    if (*(char *)((int)param_2 + 0x5d) != '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar21 = *local_b0;
        bVar33 = (bool)hasExclusiveAccess(local_b0);
      } while (!bVar33);
      *local_b0 = iVar21 + -1;
      if (iVar21 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_b0,local_ac);
      }
    }
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    uVar16 = 1;
    goto LAB_00cebf70;
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
      local_e4 = (int *)param_2[0x1a];
      unaff_r4 = (int *)param_2[0x1b];
      goto LAB_00ceb4a8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d74);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d74);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x23]) {
      case '\0':
        local_e4 = (int *)param_2[0x1e];
        unaff_r4 = (int *)param_2[0x1f];
LAB_00ceb4fc:
        param_2[0x20] = (int)local_e4;
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x21] = (int)unaff_r4;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d74);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c20d74);
      case '\x03':
        if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c20d74);
        }
        local_e4 = (int *)param_2[0x20];
      }
      piVar22 = (int *)param_2[0x1c];
      *(undefined1 *)(param_2 + 0x23) = 1;
      piVar15 = param_2 + 0x1f;
      *(undefined1 *)(param_2 + 0x22) = 1;
      piVar14 = param_2 + 0x1e;
      *piVar14 = (int)local_e4;
      iVar18 = piVar22[4];
      unaff_r7 = (int *)piVar22[5];
      iVar23 = piVar22[6];
      iVar5 = piVar22[7];
      iVar21 = piVar22[8];
      iVar19 = piVar22[1];
      iVar31 = piVar22[2];
      iVar6 = piVar22[3];
      *piVar15 = *piVar22;
      param_2[0x20] = iVar19;
      param_2[0x21] = iVar31;
      param_2[0x22] = iVar6;
      param_2[0x23] = iVar18 + 0x20;
      param_2[0x24] = (int)unaff_r7;
      param_2[0x25] = iVar23;
      param_2[0x26] = iVar5;
      *(char *)(param_2 + 0x27) = (char)iVar21;
      iVar18 = piVar22[4];
      *(undefined1 *)(param_2 + 0x2f) = 0;
      param_2[0x28] = (int)piVar14;
      param_2[0x29] = (int)piVar15;
      param_2[0x2a] = iVar18;
LAB_00ceb5ec:
      iVar21 = *piVar14;
      *(undefined1 *)(param_2 + 0x2e) = 0;
      param_2[0x2b] = iVar21;
      param_2[0x2c] = (int)piVar15;
      param_2[0x2d] = iVar18;
      break;
    case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2f]) {
      case '\0':
        piVar14 = (int *)param_2[0x28];
        piVar15 = (int *)param_2[0x29];
        iVar18 = param_2[0x2a];
        goto LAB_00ceb5ec;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      case '\x03':
        if ((char)param_2[0x2e] != '\0') {
          if ((char)param_2[0x2e] == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21c0c);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21c0c);
        }
        iVar21 = param_2[0x2b];
      }
      break;
    case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x23]) {
      case '\0':
        local_e4 = (int *)param_2[0x1e];
        unaff_r4 = (int *)param_2[0x1f];
LAB_00cebe9c:
        param_2[0x20] = (int)local_e4;
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x21] = (int)unaff_r4;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d74);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c20d74);
      case '\x03':
        if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c20d74);
        }
        local_e4 = (int *)param_2[0x20];
      }
      puVar13 = (undefined4 *)param_2[0x1c];
      *(undefined1 *)(param_2 + 0x23) = 1;
      unaff_r4 = param_2 + 0x1f;
      *(undefined1 *)(param_2 + 0x22) = 1;
      piVar14 = param_2 + 0x1e;
      *piVar14 = (int)(local_e4 + 3);
      iVar21 = puVar13[4];
      unaff_r10 = (int *)puVar13[5];
      iVar19 = puVar13[6];
      unaff_r8 = (int *)puVar13[7];
      uVar4 = *(undefined1 *)(puVar13 + 8);
      unaff_r5 = (int *)*puVar13;
      iVar18 = puVar13[1];
      unaff_r7 = (int *)puVar13[2];
      iVar31 = puVar13[3];
      *unaff_r4 = (int)unaff_r5;
      param_2[0x20] = iVar18;
      param_2[0x21] = (int)unaff_r7;
      param_2[0x22] = iVar31;
      param_2[0x23] = iVar21 + 0x20;
      param_2[0x24] = (int)unaff_r10;
      param_2[0x25] = iVar19;
      param_2[0x26] = (int)unaff_r8;
      *(undefined1 *)(param_2 + 0x27) = uVar4;
      iVar21 = puVar13[4];
      *(undefined1 *)(param_2 + 0x2f) = 0;
      param_2[0x28] = (int)piVar14;
      param_2[0x29] = (int)unaff_r4;
      param_2[0x2a] = iVar21;
LAB_00cebf24:
      pbVar17 = (byte *)*piVar14;
      *(undefined1 *)(param_2 + 0x2e) = 0;
      param_2[0x2b] = (int)pbVar17;
      param_2[0x2c] = (int)unaff_r4;
      param_2[0x2d] = iVar21;
      local_e0 = unaff_r8;
      local_e4 = unaff_r10;
      goto LAB_00cebf3c;
    case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2f]) {
      case '\0':
        piVar14 = (int *)param_2[0x28];
        unaff_r4 = (int *)param_2[0x29];
        iVar21 = param_2[0x2a];
        goto LAB_00cebf24;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22218);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22218);
      case '\x03':
        if ((char)param_2[0x2e] != '\0') {
          if ((char)param_2[0x2e] == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21bcc);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21bcc);
        }
        pbVar17 = (byte *)param_2[0x2b];
        local_e0 = unaff_r8;
        local_e4 = unaff_r10;
      }
LAB_00cebf3c:
      local_c4 = (int *)(uint)*pbVar17;
      piVar14 = (int *)0x80000003;
      *(undefined1 *)(param_2 + 0x2f) = 1;
      *(undefined1 *)(param_2 + 0x2e) = 1;
      goto LAB_00cebf54;
    }
    FUN_006666fc(&local_70,*(undefined4 *)(iVar21 + 4),*(undefined4 *)(iVar21 + 8));
    piVar14 = (int *)0x80000002;
    local_c4 = local_70;
    local_cc = local_6c;
    local_bc = local_68;
    local_c0 = local_64;
    local_c8 = local_44;
    local_d4 = local_50;
    local_d0 = local_5c;
    *(undefined1 *)(param_2 + 0x2f) = 1;
    *(undefined1 *)(param_2 + 0x2e) = 1;
    unaff_r4 = local_54;
    unaff_r5 = local_48;
    local_e0 = local_4c;
    local_e4 = local_58;
LAB_00cebf54:
    local_b4 = (int *)param_2[0x18];
    local_b8 = (int *)param_2[0x19];
    *(undefined1 *)(param_2 + 0x1d) = 1;
    goto LAB_00cebf68;
  case '\x04':
switchD_00ceb0cc_caseD_4:
    FUN_00b4f44c(&local_70,param_2 + 0x19,param_3);
    piVar3 = local_34;
    unaff_r5 = local_40;
    piVar25 = local_44;
    unaff_r7 = local_48;
    unaff_r4 = local_4c;
    piVar22 = local_50;
    piVar7 = local_54;
    piVar14 = local_58;
    local_cc = local_5c;
    local_c4 = local_60;
    piVar15 = local_70;
    if (local_70 == (int *)0x2) {
      *param_1 = 2;
      uVar4 = 4;
      goto LAB_00cebfd4;
    }
    local_bc = local_60;
    local_c8 = local_3c;
    local_e0 = local_44;
    local_d0 = local_4c;
    local_e4 = local_50;
    local_e8 = local_54;
    local_c0 = local_5c;
    cVar2 = (char)param_2[0x3d];
    bVar33 = cVar2 == '\x03';
    if (bVar33) {
      cVar2 = (char)param_2[0x2e];
    }
    if (bVar33 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2f);
    }
    if (((uint)piVar15 & 1) != 0) {
      piVar15 = (int *)param_2[0x54];
      DataMemoryBarrier(0xb);
      do {
        iVar21 = *piVar15;
        bVar33 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar33);
      *piVar15 = iVar21 + -1;
      if (iVar21 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x54],param_2[0x55]);
      }
      local_c0 = piVar7;
      local_b4 = local_68;
      local_b8 = local_64;
      local_bc = piVar14;
      local_d4 = unaff_r5;
      local_c8 = piVar3;
      piVar15 = local_6c;
      local_e0 = local_3c;
      local_e4 = unaff_r7;
      goto LAB_00cebda8;
    }
    if (piVar14 == (int *)0x80000007) {
      piVar14 = (int *)&DAT_80000000;
    }
    local_b4 = (int *)param_2[0x54];
    local_b8 = (int *)param_2[0x55];
    local_c4 = local_68;
    local_cc = local_64;
    break;
  case '\x05':
switchD_00ceb0cc_caseD_5:
    FUN_00b4f44c(&local_70,param_2 + 0x18,param_3);
    unaff_r5 = local_40;
    piVar25 = local_44;
    unaff_r7 = local_48;
    unaff_r4 = local_4c;
    piVar22 = local_50;
    local_e8 = local_54;
    piVar14 = local_58;
    piVar3 = local_5c;
    piVar7 = local_60;
    piVar15 = local_70;
    if (local_70 == (int *)0x2) {
      *param_1 = 2;
      uVar4 = 5;
      goto LAB_00cebfd4;
    }
    local_b4 = local_68;
    local_b8 = local_64;
    local_c4 = local_60;
    local_c8 = local_34;
    local_d4 = local_40;
    local_d0 = local_4c;
    local_c0 = local_54;
    local_bc = local_58;
    local_cc = local_5c;
    cVar2 = (char)param_2[0x3c];
    bVar33 = cVar2 == '\x03';
    if (bVar33) {
      cVar2 = (char)param_2[0x2d];
    }
    if (bVar33 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    if (((uint)piVar15 & 1) != 0) {
      piVar14 = (int *)param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        iVar21 = *piVar14;
        bVar33 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar33);
      *piVar14 = iVar21 + -1;
      if (iVar21 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      piVar15 = local_6c;
      local_e0 = local_3c;
      local_e4 = unaff_r7;
LAB_00cebda8:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      unaff_r4 = piVar25;
      unaff_r5 = local_38;
      unaff_r7 = piVar15;
      piVar14 = piVar22;
      goto LAB_00cebdb0;
    }
    local_c8 = local_3c;
    local_e4 = piVar22;
    local_bc = piVar7;
    local_e0 = piVar25;
    local_c0 = piVar3;
    if (piVar14 == (int *)0x80000007) {
      piVar14 = (int *)&DAT_80000000;
    }
    local_b4 = (int *)param_2[0x3f];
    local_b8 = (int *)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
    local_c4 = local_68;
    local_cc = local_64;
  }
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != -0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_d0 = local_e8;
  local_d4 = unaff_r7;
LAB_00cebf68:
  uVar16 = 0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_00cebf70:
  *param_1 = uVar16;
  param_1[1] = unaff_r7;
  param_1[2] = local_b4;
  param_1[3] = local_b8;
  param_1[4] = local_c4;
  param_1[9] = local_d0;
  param_1[5] = local_cc;
  param_1[0xc] = local_d4;
  param_1[6] = local_bc;
  param_1[7] = local_c0;
  uVar4 = 1;
  param_1[8] = piVar14;
  param_1[10] = local_e4;
  param_1[0xb] = unaff_r4;
  param_1[0xd] = local_e0;
  param_1[0xe] = unaff_r5;
  param_1[0xf] = local_c8;
LAB_00cebfd4:
  *(undefined1 *)(param_2 + 0x17) = uVar4;
  return;
}

