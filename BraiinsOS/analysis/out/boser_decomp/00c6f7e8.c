// FUN_00c6f7e8 @ 00c6f7e8 size=4292 calls_out=16 calls_in=0
// strings: since | durationS

void FUN_00c6f7e8(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int ***pppiVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int ***pppiVar18;
  int iVar19;
  int iVar20;
  int ***pppiVar21;
  int iVar22;
  uint uVar23;
  int **ppiVar24;
  int iVar25;
  int ***pppiVar26;
  int **unaff_r6;
  int iVar27;
  int ***pppiVar28;
  int **unaff_r7;
  int iVar29;
  uint uVar30;
  int **ppiVar31;
  int ***pppiVar32;
  int **ppiVar33;
  int **ppiVar34;
  int iVar35;
  int **ppiVar36;
  int iVar37;
  int **ppiVar38;
  int iVar39;
  int ***pppiVar40;
  bool bVar41;
  int local_144;
  int local_140;
  int local_128;
  int **local_118;
  int **local_114;
  int **local_110;
  int **local_10c;
  int **local_104;
  int **local_100;
  int **local_fc;
  int **local_f8;
  int **local_f4;
  int **local_f0;
  int **local_ec;
  int **local_e8;
  int **local_e4;
  int *local_e0;
  int local_dc;
  int **local_d8;
  int iStack_d4;
  int iStack_d0;
  int **local_c8;
  undefined1 *local_c4;
  int *local_c0;
  undefined1 *local_bc;
  int local_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 local_a8;
  int **local_a0;
  int **local_9c;
  int **local_98;
  int **local_94;
  int **local_90;
  int **local_8c;
  int **local_88;
  int **local_84;
  int **local_80;
  int **local_7c;
  int **local_78;
  int **local_74;
  int **local_70;
  int **local_6c;
  int **local_68;
  int **local_64;
  int **local_60;
  int iStack_5c;
  int iStack_58;
  int **local_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int **local_44;
  int **local_40;
  int **local_3c;
  int **local_38;
  int **local_34;
  int **local_30;
  int **local_2c;
  int **local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x17]) {
  case '\0':
    local_10c = (int **)param_2[9];
    *(char *)(param_2 + 0x13) = (char)param_2[8];
    param_2[0x10] = param_2[5];
    param_2[0x11] = param_2[6];
    param_2[0x12] = param_2[7];
    piVar10 = (int *)0x0;
    if (*param_2 != 0) {
      piVar10 = param_2 + 1;
    }
    *(undefined2 *)((int)param_2 + 0x5d) = 0;
    param_2[0xf] = (int)local_10c;
    piVar13 = local_10c[0x13];
    param_2[0xe] = (int)piVar10;
    iVar16 = 0x3c;
    iVar14 = 0x3c;
    if (piVar13 == (int *)0x0) {
      iVar14 = 0x2c;
    }
    iVar22 = *(int *)((int)local_10c + iVar14 + 0x10);
    iVar14 = *(int *)((int)local_10c + iVar14 + 0x14);
    ppiVar38 = (int **)(param_2 + 0xb);
    *ppiVar38 = (int *)0x1;
    param_2[0xd] = iVar14;
    piVar10 = param_2 + 0xc;
    *piVar10 = iVar22 + 8;
    if (local_10c[0x13] == (int *)0x0) {
      iVar16 = 0x2c;
    }
    piVar13 = *(int **)((int)local_10c + iVar16 + 0x10);
    do {
      iVar14 = *piVar13;
      bVar41 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar41);
    *piVar13 = iVar14 + 1;
    if (iVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xc7096c);
      (*pcVar1)();
    }
    iVar16 = *(int *)((int)local_10c + iVar16 + 0x14);
    *(undefined1 *)((int)param_2 + 0x5d) = 1;
    unaff_r6 = *(int ***)param_2[6];
    local_e0 = piVar13;
    local_dc = iVar16;
    if ((unaff_r6[4] == (int *)0x0) && (*(int *)(param_2[9] + 0x1c) == 0)) {
      *(undefined1 *)(param_2 + 0x1d) = 0;
      ppiVar34 = (int **)param_2[10];
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      param_2[0x18] = (int)piVar13;
      param_2[0x19] = iVar16;
      param_2[0x1a] = (int)ppiVar34;
      param_2[0x1b] = (int)ppiVar38;
LAB_00c6fbe8:
      param_2[0x1c] = (int)ppiVar38;
      piVar10 = ppiVar38[4];
      if (piVar10[0x10] == 9) {
        iVar16 = thunk_FUN_01bed842(piVar10[0xf] + 8,"durationS",9);
        if (iVar16 == 0) {
          param_2[0x1e] = (int)ppiVar34;
          *(undefined1 *)(param_2 + 0x23) = 0;
          param_2[0x1f] = (int)ppiVar38;
          goto LAB_00c705e8;
        }
      }
      else if ((piVar10[0x10] == 5) &&
              (iVar16 = thunk_FUN_01bed842(piVar10[0xf] + 8,"since",5), iVar16 == 0)) {
        param_2[0x1e] = (int)ppiVar34;
        *(undefined1 *)(param_2 + 0x23) = 0;
        param_2[0x1f] = (int)ppiVar38;
        goto LAB_00c6fc40;
      }
      *(undefined1 *)(param_2 + 0x1d) = 1;
      goto LAB_00c7071c;
    }
    param_2[0x14] = -0x80000000;
    param_2[0x15] = (int)"B";
    param_2[0x16] = 0xe;
    if (param_2[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&LAB_01c14638);
    }
    iVar14 = FUN_006c176c(*(undefined4 *)(*(int *)param_2[0x10] + 0x78),
                          *(undefined4 *)(*(int *)param_2[0x10] + 0x7c),"B",0xe);
    if (iVar14 != 0) {
      uVar15 = 2;
      if ((int)*(uint *)(iVar14 + 0x10) < 0) {
        uVar15 = *(uint *)(iVar14 + 0x10) ^ 0x80000000;
      }
      if (uVar15 != 2) {
        if (uVar15 != 1) goto LAB_00c6fa08;
        iVar14 = iVar14 + 0x18;
      }
      iVar14 = FUN_006e05dc(iVar14,*(int *)(param_2[9] + 0x3c) + 8,
                            *(undefined4 *)(param_2[9] + 0x40));
      if (iVar14 != 0) {
        iVar22 = param_2[9];
        if (*(int *)(iVar22 + 0x4c) == 0) {
          local_140 = 0;
        }
        else {
          local_144 = *(int *)(iVar22 + 0x50);
          local_140 = *(int *)(iVar22 + 0x4c) + 8;
        }
        iVar39 = *(int *)(iVar14 + 0x8c);
        iVar35 = *(int *)(iVar14 + 0x90);
        iVar19 = *(int *)(iVar22 + 0x40);
        iVar17 = *(int *)(iVar22 + 0x3c) + 8;
        *(undefined1 *)((int)param_2 + 0x5e) = 1;
        iVar27 = param_2[10];
        iVar14 = param_2[0x13];
        iVar4 = *(int *)(iVar22 + 0x1c);
        *(undefined1 *)((int)param_2 + 0x5e) = 0;
        if (iVar4 == 0) {
          param_2[0x3e] = iVar27;
          param_2[0x3f] = (int)ppiVar38;
          *(undefined1 *)(param_2 + 0x41) = 0;
          *(undefined1 *)((int)param_2 + 0x5d) = 0;
          *(undefined1 *)(param_2 + 0x3d) = 0;
          param_2[0x54] = (int)piVar13;
          param_2[0x55] = iVar16;
          param_2[0x3a] = local_140;
          param_2[0x3b] = local_144;
          *(char *)(param_2 + 0x3c) = (char)iVar14;
          param_2[0x39] = iVar22 + 8;
          param_2[0x31] = (int)(unaff_r6 + 2);
          param_2[0x32] = (int)piVar10;
          param_2[0x34] = 0xe;
          param_2[0x19] = (int)(param_2 + 0x18);
          param_2[0x33] = (int)"B";
          param_2[0x35] = iVar39;
          param_2[0x36] = iVar35;
          param_2[0x37] = iVar17;
          param_2[0x38] = iVar19;
          param_2[0x18] = (int)(param_2 + 0x3e);
          param_2[0x1a] = (int)&DAT_01c14838;
          goto switchD_00c6f804_caseD_4;
        }
        piVar5 = (int *)thunk_FUN_01be5118(0x58);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x58);
        }
        *(undefined1 *)(piVar5 + 3) = 0;
        *piVar5 = iVar27;
        piVar5[1] = (int)ppiVar38;
        param_2[0x3d] = (int)piVar5;
        param_2[0x3e] = (int)&DAT_01c1d0b8;
        if (*(int *)(iVar22 + 0x1c) != 0) {
          iVar27 = *(int *)(iVar22 + 0x18);
          iVar4 = iVar27 + *(int *)(iVar22 + 0x1c) * 0x24;
          piVar5 = (int *)((uint)&local_a0 | 4);
          do {
            iVar25 = *(int *)param_2[5];
            if (*(int *)(iVar25 + 0x14) != 0) {
              iVar37 = *(int *)(iVar27 + 0x20);
              iVar29 = *(int *)(iVar27 + 0x1c) + 8;
              uVar6 = FUN_01a9c24c(*(undefined4 *)(iVar25 + 0x18),*(undefined4 *)(iVar25 + 0x1c),
                                   *(undefined4 *)(iVar25 + 0x20),*(undefined4 *)(iVar25 + 0x24),
                                   iVar29,iVar37);
              uVar15 = uVar6 >> 0x19;
              iVar20 = *(int *)(iVar25 + 8);
              uVar30 = *(uint *)(iVar25 + 0xc);
              local_128 = 0;
              while( true ) {
                uVar6 = uVar30 & uVar6;
                uVar23 = *(uint *)(iVar20 + uVar6);
                uVar7 = uVar23 ^ uVar15 * 0x1010101;
                for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0;
                    uVar7 = uVar7 - 1 & uVar7) {
                  uVar8 = uVar6 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                 (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3)
                          & uVar30;
                  iVar25 = iVar20 + -0x14 + uVar8 * -0x14;
                  if ((iVar37 == *(int *)(iVar25 + 8)) &&
                     (iVar25 = thunk_FUN_01bed842(iVar29,*(undefined4 *)(iVar25 + 4),iVar37),
                     iVar25 == 0)) {
                    local_c8 = (int **)*ppiVar38;
                    local_c4 = (undefined1 *)param_2[0xc];
                    local_c0 = (int *)param_2[0xd];
                    local_bc = (undefined1 *)param_2[0xe];
                    local_a8 = 0;
                    local_b4 = param_2[0x10];
                    iStack_b0 = param_2[0x11];
                    iStack_ac = param_2[0x12];
                    iVar20 = iVar20 + uVar8 * -0x14;
                    local_b8 = iVar27;
                    (**(code **)(*(int *)(iVar20 + -4) + 0x14))
                              (&local_a0,*(undefined4 *)(iVar20 + -8),&local_c8,iVar27 + 8);
                    ppiVar34 = local_7c;
                    local_114 = local_80;
                    ppiVar33 = local_8c;
                    ppiVar36 = local_a0;
                    local_e4 = local_9c;
                    if (local_a0 != (int **)0x2) {
                      local_ec = local_68;
                      local_f0 = local_6c;
                      local_fc = local_70;
                      local_100 = local_74;
                      local_f8 = local_94;
                      local_f4 = local_90;
                      local_e8 = local_88;
                      local_104 = local_78;
                      local_10c = local_84;
                      FUN_0175d85c(param_2 + 0x3d);
                      local_94 = local_98;
                      goto LAB_00c704ec;
                    }
                    if (*ppiVar38 == (int *)0x1) {
                      local_60 = (int **)*piVar10;
                      iStack_5c = param_2[0xd];
                      iStack_58 = param_2[0xe];
                    }
                    local_a0 = (int **)(uint)(*ppiVar38 == (int *)0x1);
                    local_90 = (int **)param_2[0xf];
                    local_8c = (int **)param_2[0x10];
                    local_88 = (int **)param_2[0x11];
                    local_84 = (int **)param_2[0x12];
                    iVar25 = param_2[0x13];
                    *piVar5 = (int)local_60;
                    piVar5[1] = iStack_5c;
                    piVar5[2] = iStack_58;
                    local_7c = local_9c;
                    local_74 = (int **)param_2[0x3d];
                    local_70 = (int **)param_2[0x3e];
                    local_78 = local_98;
                    local_80 = (int **)CONCAT31(local_80._1_3_,(char)iVar25);
                    local_64 = (int **)((uint)local_64 & 0xffffff00);
                    puVar9 = (undefined4 *)thunk_FUN_01be5118(0x40);
                    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x40);
                    }
                    *puVar9 = local_a0;
                    puVar9[1] = local_9c;
                    puVar9[2] = local_98;
                    puVar9[3] = local_94;
                    puVar9[4] = local_90;
                    puVar9[5] = local_8c;
                    puVar9[6] = local_88;
                    puVar9[7] = local_84;
                    puVar9[8] = local_80;
                    puVar9[9] = local_7c;
                    puVar9[10] = local_78;
                    puVar9[0xb] = local_74;
                    puVar9[0xc] = local_70;
                    puVar9[0xd] = local_6c;
                    puVar9[0xe] = local_68;
                    puVar9[0xf] = local_64;
                    param_2[0x3d] = (int)puVar9;
                    param_2[0x3e] = (int)&DAT_01c14b38;
                    goto LAB_00c7014c;
                  }
                }
                if ((uVar23 & 0x80808080 & uVar23 << 1) != 0) break;
                local_128 = local_128 + 4;
                uVar6 = uVar6 + local_128;
              }
            }
LAB_00c7014c:
            iVar27 = iVar27 + 0x24;
          } while (iVar27 != iVar4);
        }
        param_2[0x3f] = (int)piVar13;
        param_2[0x40] = iVar16;
        *(undefined1 *)((int)param_2 + 0x5d) = 0;
        *(undefined1 *)(param_2 + 0x3c) = 0;
        param_2[0x39] = local_140;
        param_2[0x30] = (int)(unaff_r6 + 2);
        *(char *)(param_2 + 0x3b) = (char)iVar14;
        param_2[0x3a] = local_144;
        param_2[0x38] = iVar22 + 8;
        param_2[0x31] = (int)piVar10;
        param_2[0x32] = (int)"B";
        param_2[0x33] = 0xe;
        param_2[0x34] = iVar39;
        param_2[0x35] = iVar35;
        param_2[0x36] = iVar17;
        param_2[0x18] = (int)(param_2 + 0x3d);
        param_2[0x37] = iVar19;
        param_2[0x19] = (int)&DAT_01c14648;
        goto switchD_00c6f804_caseD_5;
      }
    }
LAB_00c6fa08:
    local_c4 = &LAB_00701524;
    local_c8 = &local_e0;
    local_bc = &LAB_012b97d8;
    local_c0 = param_2 + 0x14;
    FUN_00664898(&local_60,&DAT_005952c0,&local_c8);
    local_d8 = local_60;
    iStack_d4 = iStack_5c;
    iStack_d0 = iStack_58;
    local_c4 = *(undefined1 **)param_2[0xf];
    local_c0 = (int *)((int *)param_2[0xf])[1];
    local_c8 = (int **)0x1;
    FUN_006bd784(&local_a0,&local_d8,&local_c8);
    local_ec = local_68;
    local_f0 = local_6c;
    local_fc = local_70;
    local_100 = local_74;
    local_104 = local_78;
    local_e4 = local_9c;
    local_f8 = local_94;
    local_f4 = local_90;
    local_e8 = local_88;
    ppiVar24 = local_98;
    ppiVar38 = local_8c;
    local_118 = local_80;
    ppiVar31 = local_7c;
    ppiVar33 = local_84;
    ppiVar34 = local_a0;
LAB_00c704f8:
    if (param_2[0x14] != -0x80000000) {
      FUN_019bb7e0(param_2[0x14],param_2[0x15]);
    }
    if (*(char *)((int)param_2 + 0x5d) != '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *local_e0;
        bVar41 = (bool)hasExclusiveAccess(local_e0);
      } while (!bVar41);
      *local_e0 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(local_e0,local_dc);
      }
    }
    *(undefined1 *)((int)param_2 + 0x5d) = 0;
    uVar11 = 1;
    local_10c = ppiVar31;
    goto LAB_00c70738;
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
      ppiVar34 = (int **)param_2[0x1a];
      ppiVar38 = (int **)param_2[0x1b];
      local_10c = unaff_r7;
      goto LAB_00c6fbe8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1d088);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1d088);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x23]) {
      case '\0':
        ppiVar34 = (int **)param_2[0x1e];
        ppiVar38 = (int **)param_2[0x1f];
LAB_00c6fc40:
        param_2[0x20] = (int)ppiVar34;
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x21] = (int)ppiVar38;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1d088);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1d088);
      case '\x03':
        if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1d088);
        }
        ppiVar34 = (int **)param_2[0x20];
      }
      piVar5 = (int *)param_2[0x1c];
      *(undefined1 *)(param_2 + 0x23) = 1;
      piVar13 = param_2 + 0x1f;
      *(undefined1 *)(param_2 + 0x22) = 1;
      piVar10 = param_2 + 0x1e;
      *piVar10 = (int)ppiVar34;
      iVar27 = piVar5[4];
      iVar19 = piVar5[5];
      iVar17 = piVar5[6];
      iVar35 = piVar5[7];
      iVar16 = piVar5[8];
      iVar14 = piVar5[1];
      iVar22 = piVar5[2];
      iVar4 = piVar5[3];
      *piVar13 = *piVar5;
      param_2[0x20] = iVar14;
      param_2[0x21] = iVar22;
      param_2[0x22] = iVar4;
      param_2[0x23] = iVar27 + 0x20;
      param_2[0x25] = iVar17;
      *(char *)(param_2 + 0x27) = (char)iVar16;
      param_2[0x24] = iVar19;
      param_2[0x26] = iVar35;
      iVar14 = piVar5[4];
      *(undefined1 *)(param_2 + 0x2f) = 0;
      param_2[0x28] = (int)piVar10;
      param_2[0x29] = (int)piVar13;
      param_2[0x2a] = iVar14;
LAB_00c6fd38:
      iVar16 = *piVar10;
      *(undefined1 *)(param_2 + 0x2e) = 0;
      param_2[0x2b] = iVar16;
      param_2[0x2c] = (int)piVar13;
      param_2[0x2d] = iVar14;
      break;
    case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2f]) {
      case '\0':
        piVar10 = (int *)param_2[0x28];
        piVar13 = (int *)param_2[0x29];
        iVar14 = param_2[0x2a];
        goto LAB_00c6fd38;
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
            FUN_013079f0(&DAT_01c1d430);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1d430);
        }
        iVar16 = param_2[0x2b];
      }
      break;
    case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x23]) {
      case '\0':
        ppiVar34 = (int **)param_2[0x1e];
        ppiVar38 = (int **)param_2[0x1f];
LAB_00c705e8:
        param_2[0x20] = (int)ppiVar34;
        *(undefined1 *)(param_2 + 0x22) = 0;
        param_2[0x21] = (int)ppiVar38;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1d088);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1d088);
      case '\x03':
        if ((*(byte *)(param_2 + 0x22) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1d088);
        }
        ppiVar34 = (int **)param_2[0x20];
      }
      piVar5 = (int *)param_2[0x1c];
      *(undefined1 *)(param_2 + 0x23) = 1;
      piVar13 = param_2 + 0x1f;
      *(undefined1 *)(param_2 + 0x22) = 1;
      piVar10 = param_2 + 0x1e;
      *piVar10 = (int)(ppiVar34 + 4);
      iVar27 = piVar5[4];
      iVar19 = piVar5[5];
      iVar17 = piVar5[6];
      iVar35 = piVar5[7];
      iVar16 = piVar5[8];
      iVar14 = piVar5[1];
      iVar22 = piVar5[2];
      iVar4 = piVar5[3];
      *piVar13 = *piVar5;
      param_2[0x20] = iVar14;
      param_2[0x21] = iVar22;
      param_2[0x22] = iVar4;
      param_2[0x25] = iVar17;
      *(char *)(param_2 + 0x27) = (char)iVar16;
      param_2[0x23] = iVar27 + 0x20;
      param_2[0x24] = iVar19;
      param_2[0x26] = iVar35;
      iVar16 = piVar5[4];
      *(undefined1 *)(param_2 + 0x2f) = 0;
      param_2[0x28] = (int)piVar10;
      param_2[0x29] = (int)piVar13;
      param_2[0x2a] = iVar16;
LAB_00c70674:
      puVar9 = (undefined4 *)*piVar10;
      *(undefined1 *)(param_2 + 0x2e) = 0;
      param_2[0x2b] = (int)puVar9;
      param_2[0x2c] = (int)piVar13;
      param_2[0x2d] = iVar16;
      goto LAB_00c7068c;
    case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x2f]) {
      case '\0':
        piVar10 = (int *)param_2[0x28];
        piVar13 = (int *)param_2[0x29];
        iVar16 = param_2[0x2a];
        goto LAB_00c70674;
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
            FUN_013079f0(&DAT_01c1d0c8);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1d0c8);
        }
        puVar9 = (undefined4 *)param_2[0x2b];
      }
LAB_00c7068c:
      ppiVar38 = (int **)*puVar9;
      pppiVar40 = &local_c8;
      ppiVar34 = (int **)puVar9[1];
      *(undefined1 *)(param_2 + 0x2e) = 1;
      local_f4 = (int **)0x0;
      pppiVar12 = &local_34;
      pppiVar18 = &local_30;
      pppiVar21 = &local_2c;
      pppiVar32 = &local_28;
      pppiVar26 = &local_d8;
      pppiVar28 = &local_60;
      local_90 = (int **)&DAT_80000001;
      local_f8 = (int **)0x0;
      goto LAB_00c706cc;
    }
    FUN_011e64c8(&local_a0,iVar16);
    pppiVar40 = &local_38;
    local_38 = local_8c;
    local_f8 = local_a0;
    local_f4 = local_9c;
    local_50 = local_74;
    ppiStack_4c = local_78;
    ppiStack_48 = local_7c;
    pppiVar32 = &local_44;
    local_3c = local_88;
    pppiVar26 = &local_40;
    local_40 = local_84;
    pppiVar18 = &ppiStack_4c;
    local_44 = local_80;
    pppiVar21 = &ppiStack_48;
    *(undefined1 *)(param_2 + 0x2e) = 1;
    pppiVar12 = &local_50;
    pppiVar28 = &local_3c;
    ppiVar34 = local_94;
    ppiVar38 = local_98;
LAB_00c706cc:
    local_e4 = (int **)(param_2 + 0x1d);
    *(undefined1 *)(param_2 + 0x2f) = 1;
    local_ec = *pppiVar12;
    local_f0 = *pppiVar18;
    local_fc = *pppiVar21;
    local_100 = *pppiVar32;
    local_104 = *pppiVar26;
    local_10c = *pppiVar28;
    unaff_r6 = *pppiVar40;
    *(undefined1 *)local_e4 = 1;
    local_118 = unaff_r6;
    ppiVar33 = local_90;
    if (local_90 == (int **)0x80000007) {
LAB_00c7071c:
      ppiVar33 = (int **)&DAT_80000000;
      local_118 = unaff_r6;
    }
    ppiVar24 = (int **)param_2[0x19];
    local_e4 = (int **)param_2[0x18];
    local_e8 = ppiVar34;
    goto LAB_00c70730;
  case '\x04':
switchD_00c6f804_caseD_4:
    FUN_00b4f44c(&local_a0,param_2 + 0x19,param_3);
    ppiVar31 = local_64;
    local_100 = local_70;
    local_104 = local_74;
    ppiVar34 = local_78;
    local_114 = local_7c;
    ppiVar36 = local_84;
    ppiVar33 = local_88;
    local_f4 = local_8c;
    ppiVar38 = local_90;
    ppiVar24 = local_a0;
    if (local_a0 == (int **)0x2) {
      *param_1 = 2;
      uVar3 = 4;
      goto LAB_00c7079c;
    }
    local_ec = local_6c;
    local_f0 = local_70;
    local_110 = local_74;
    local_10c = local_80;
    local_118 = local_84;
    local_e8 = local_8c;
    cVar2 = (char)param_2[0x3d];
    bVar41 = cVar2 == '\x03';
    if (bVar41) {
      cVar2 = (char)param_2[0x2e];
    }
    if (bVar41 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2f);
    }
    if (((uint)ppiVar24 & 1) != 0) {
      piVar10 = (int *)param_2[0x54];
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar10;
        bVar41 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar41);
      *piVar10 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x54],param_2[0x55]);
      }
      local_e8 = ppiVar36;
      local_fc = local_6c;
      local_f0 = local_68;
      local_e4 = local_98;
      local_f8 = ppiVar38;
      local_ec = ppiVar31;
      ppiVar36 = local_9c;
      goto LAB_00c704ec;
    }
    if (ppiVar33 == (int **)0x80000007) {
      ppiVar33 = (int **)&DAT_80000000;
    }
    ppiVar24 = (int **)param_2[0x55];
    local_e4 = (int **)param_2[0x54];
    local_f8 = local_98;
    local_f4 = local_94;
    break;
  case '\x05':
switchD_00c6f804_caseD_5:
    FUN_00b4f44c(&local_a0,param_2 + 0x18,param_3);
    ppiVar31 = local_70;
    local_110 = local_74;
    ppiVar34 = local_78;
    local_114 = local_7c;
    local_118 = local_84;
    ppiVar33 = local_88;
    ppiVar36 = local_8c;
    ppiVar38 = local_90;
    ppiVar24 = local_a0;
    if (local_a0 == (int **)0x2) {
      *param_1 = 2;
      uVar3 = 5;
      goto LAB_00c7079c;
    }
    local_e4 = local_98;
    local_f8 = local_90;
    local_ec = local_64;
    local_f0 = local_68;
    local_fc = local_6c;
    local_100 = local_70;
    local_104 = local_74;
    local_10c = local_80;
    local_e8 = local_84;
    local_f4 = local_8c;
    cVar2 = (char)param_2[0x3c];
    bVar41 = cVar2 == '\x03';
    if (bVar41) {
      cVar2 = (char)param_2[0x2d];
    }
    if (bVar41 && cVar2 == '\x03') {
      FUN_0175d85c(param_2 + 0x2e);
    }
    if (((uint)ppiVar24 & 1) != 0) {
      piVar10 = (int *)param_2[0x3f];
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar10;
        bVar41 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar41);
      *piVar10 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_2[0x3f],param_2[0x40]);
      }
      FUN_0175d85c(param_2 + 0x3d);
      ppiVar36 = local_9c;
LAB_00c704ec:
      *(undefined1 *)((int)param_2 + 0x5e) = 0;
      ppiVar24 = local_94;
      ppiVar38 = ppiVar33;
      local_118 = local_114;
      ppiVar31 = ppiVar34;
      ppiVar33 = local_10c;
      ppiVar34 = ppiVar36;
      goto LAB_00c704f8;
    }
    local_f0 = ppiVar31;
    local_ec = local_6c;
    local_e8 = ppiVar36;
    if (ppiVar33 == (int **)0x80000007) {
      ppiVar33 = (int **)&DAT_80000000;
    }
    local_e4 = (int **)param_2[0x3f];
    ppiVar24 = (int **)param_2[0x40];
    FUN_0175d85c(param_2 + 0x3d);
    local_f8 = local_98;
    local_f4 = local_94;
  }
  *(undefined1 *)((int)param_2 + 0x5e) = 0;
  if (param_2[0x14] != -0x80000000) {
    FUN_019bb7e0(param_2[0x14],param_2[0x15]);
  }
  local_104 = local_114;
  local_fc = local_110;
  local_100 = ppiVar34;
LAB_00c70730:
  uVar11 = 0;
  *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_00c70738:
  param_1[0xb] = local_104;
  *param_1 = uVar11;
  param_1[1] = ppiVar34;
  param_1[0xc] = local_100;
  param_1[2] = local_e4;
  param_1[0xd] = local_fc;
  param_1[4] = local_f8;
  param_1[0xe] = local_f0;
  param_1[5] = local_f4;
  param_1[7] = local_e8;
  uVar3 = 1;
  param_1[8] = ppiVar33;
  param_1[9] = local_118;
  param_1[10] = local_10c;
  param_1[0xf] = local_ec;
  param_1[3] = ppiVar24;
  param_1[6] = ppiVar38;
LAB_00c7079c:
  *(undefined1 *)(param_2 + 0x17) = uVar3;
  return;
}

