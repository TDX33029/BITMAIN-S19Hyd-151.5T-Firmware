// FUN_0118a7d4 @ 0118a7d4 size=2772 calls_out=17 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0118a7d4(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint unaff_r6;
  int iVar26;
  undefined4 *puVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  undefined8 uVar34;
  uint local_12c;
  int *local_11c;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int *local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int *local_e8;
  int *local_e4;
  uint local_e0;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  uint local_d0;
  undefined4 local_c8;
  uint local_c4;
  int *local_c0;
  uint local_bc;
  int *local_b8;
  uint local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int *local_a0;
  int *piStack_9c;
  uint local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  undefined1 *local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 == '\x05') {
    uVar25 = *(uint *)(param_3 + 0xc);
    uVar5 = uVar25 * 0xc;
    if (0xaaaaaaa < uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    uVar22 = 0;
    if (uVar5 == 0) {
      local_12c = 4;
      local_108 = 0;
    }
    else {
      local_12c = thunk_FUN_016d4a50(uVar5);
      local_108 = uVar25;
      unaff_r6 = uVar5;
      if (local_12c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar5);
      }
    }
    local_100 = 0;
    local_104 = local_12c;
    if ((0x3ffffff < uVar25) || (unaff_r6 = uVar25 * 0x40, 0x7ffffffc < unaff_r6)) {
LAB_0118a8c4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar22,unaff_r6);
    }
    if (unaff_r6 == 0) {
      local_11c = (int *)&DAT_00000004;
      local_fc = 0;
    }
    else {
      local_11c = (int *)thunk_FUN_016d4a50(unaff_r6);
      if (local_11c == (int *)0x0) {
        uVar22 = 4;
        goto LAB_0118a8c4;
      }
      local_fc = uVar25;
    }
    local_e8 = *(int **)(param_3 + 4);
    uVar5 = param_2[1];
    if (local_e8 == (int *)0x0) {
      uVar25 = 0;
    }
    iVar26 = *param_2;
    local_e4 = *(int **)(param_3 + 8);
    iVar23 = param_2[0x11];
    iVar28 = param_2[0x12];
    local_f0 = (uint)(local_e8 != (int *)0x0);
    local_f4 = 0;
    local_dc = (int *)0x0;
    local_ec = 0;
    local_f8 = local_11c;
    local_e0 = local_f0;
    local_d8 = local_e8;
    local_d4 = local_e4;
    local_d0 = uVar25;
    if (param_2[3] == 0) {
      iVar23 = 0;
      local_10c = 0;
      while (iVar26 = FUN_00f45584(&local_f0), iVar26 != 0) {
        uVar22 = *(undefined4 *)(iVar26 + 4);
        iVar26 = *(int *)(iVar26 + 8);
        if (iVar26 == 0) {
          iVar28 = 1;
        }
        else {
          iVar28 = thunk_FUN_016d4a50(iVar26);
          if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar26);
          }
        }
        FUN_016dd1aa(iVar28,uVar22,iVar26);
        if (local_10c == local_108) {
          FUN_015f37b0(&local_108);
          local_12c = local_104;
        }
        piVar6 = (int *)(local_12c + iVar23);
        *piVar6 = iVar26;
        iVar23 = iVar23 + 0xc;
        piVar6[1] = iVar28;
        piVar6[2] = iVar26;
        local_10c = local_10c + 1;
        local_100 = local_10c;
      }
      bVar11 = false;
    }
    else {
      piVar14 = (int *)param_2[4];
      uVar30 = 0;
      piVar15 = (int *)param_2[5];
      uVar25 = param_2[6];
      piVar16 = (int *)param_2[7];
      uVar17 = param_2[8];
      uVar18 = param_2[9];
      piVar19 = (int *)param_2[10];
      piVar6 = (int *)param_2[0xb];
      bVar11 = false;
      local_10c = 0;
LAB_0118aa24:
      uVar34 = FUN_00f45584(&local_f0);
      iVar10 = (int)uVar34;
      if (iVar10 != 0) {
        uVar22 = *(undefined4 *)(iVar10 + 4);
        iVar31 = *(int *)(iVar10 + 8);
        local_a8 = uVar17;
        local_a4 = uVar18;
        local_a0 = piVar19;
        piStack_9c = piVar6;
        local_98 = uVar25;
        local_94 = piVar16;
        local_90 = piVar14;
        local_8c = piVar15;
        FUN_011df94c(&local_a8,uVar22,iVar31);
        uVar8 = local_98 ^ 0xff;
        uVar29 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
                 ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
        lVar3 = (ulonglong)uVar29 * 0xb36a80d2;
        uVar20 = (uint)lVar3;
        uVar12 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                 uVar20 >> 0x18) ^
                 (int)local_94 * 0x2df45158 +
                 uVar8 * 0x2d7f954c + (int)((ulonglong)uVar8 * 0x2df45158 >> 0x20);
        uVar24 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
        lVar4 = (ulonglong)~(uint)local_90 * (ulonglong)uVar24;
        uVar33 = (uint)lVar4;
        uVar21 = (int)local_8c << 0x18 | ((uint)local_8c >> 8 & 0xff) << 0x10 |
                 ((uint)local_8c >> 0x10 & 0xff) << 8 | (uint)local_8c >> 0x18;
        uVar20 = (uVar8 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
                 local_98 >> 0x18) * -0x4c957f2e +
                 uVar29 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
        iVar32 = 0;
        uVar29 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
                 uVar20 >> 0x18) ^ (uint)((ulonglong)uVar8 * 0x2df45158);
        uVar8 = (uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 | (uVar29 >> 0x10 & 0xff) << 8 |
                uVar29 >> 0x18) * ~(uint)local_90 +
                uVar24 * ~(uint)local_8c + (int)((ulonglong)lVar4 >> 0x20);
        lVar3 = (ulonglong)uVar21 * (ulonglong)uVar29;
        uVar8 = (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                uVar8 >> 0x18) ^ (uint)lVar3;
        uVar12 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                 uVar33 >> 0x18) ^
                 uVar12 * uVar21 +
                 uVar29 * ((int)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                           ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                 (int)((ulonglong)lVar3 >> 0x20);
        uVar20 = uVar12;
        if ((uVar29 & 0x20) != 0) {
          uVar20 = uVar8;
          uVar8 = uVar12;
        }
        uVar20 = uVar8 << (uVar29 & 0x1f) | (uVar20 >> 1) >> (~uVar29 & 0x1f);
        uVar8 = uVar20 >> 0x19;
        while( true ) {
          uVar20 = uVar5 & uVar20;
          uVar12 = *(uint *)(iVar26 + uVar20);
          uVar29 = uVar12 ^ uVar8 * 0x1010101;
          for (uVar29 = ~uVar29 & 0x80808080 & uVar29 + 0xfefefeff; uVar29 != 0;
              uVar29 = uVar29 - 1 & uVar29) {
            uVar21 = uVar20 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                             (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                     uVar5;
            iVar9 = iVar26 + -0x20 + uVar21 * -0x20;
            if ((iVar31 == *(int *)(iVar9 + 8)) &&
               (iVar9 = thunk_FUN_016dd50a(uVar22,*(undefined4 *)(iVar9 + 4),iVar31), iVar9 == 0)) {
              local_c8 = 0x80000000;
              local_c4 = uVar22;
              local_c0 = (int *)iVar31;
              local_bc = param_4;
              FUN_011c9534(&local_a8,iVar26 + -0x14 + uVar21 * -0x20,
                           (int)((ulonglong)uVar34 >> 0x20),&local_c8,param_5,param_6);
              if (uVar30 == local_fc) {
                FUN_011ca644(&local_fc);
                local_11c = local_f8;
              }
              puVar7 = (uint *)(local_11c + uVar30 * 0x10);
              uVar30 = uVar30 + 1;
              *puVar7 = local_a8;
              puVar7[1] = local_a4;
              puVar7[2] = (uint)local_a0;
              puVar7[3] = (uint)piStack_9c;
              puVar7[4] = local_98;
              puVar7[5] = (uint)local_94;
              puVar7[6] = (uint)local_90;
              puVar7[7] = (uint)local_8c;
              puVar7[8] = (uint)local_88;
              puVar7[9] = local_84;
              puVar7[10] = local_80;
              puVar7[0xb] = local_7c;
              puVar7[0xc] = local_78;
              puVar7[0xd] = local_74;
              puVar7[0xe] = uStack_70;
              puVar7[0xf] = uStack_6c;
              local_f4 = uVar30;
              if (*(int *)(iVar10 + 8) == iVar28) {
                iVar10 = thunk_FUN_016dd50a(*(undefined4 *)(iVar10 + 4),iVar23,iVar28);
                bVar11 = (bool)(iVar10 == 0 | bVar11);
              }
              goto LAB_0118aa24;
            }
          }
          if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
          iVar32 = iVar32 + 4;
          uVar20 = uVar20 + iVar32;
        }
        if (iVar31 == 0) {
          iVar10 = 1;
        }
        else {
          iVar10 = thunk_FUN_016d4a50(iVar31);
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar31);
          }
        }
        FUN_016dd1aa(iVar10,uVar22,iVar31);
        if (local_10c == local_108) {
          FUN_015f37b0(&local_108);
          local_12c = local_104;
        }
        local_100 = local_10c + 1;
        piVar13 = (int *)(local_12c + local_10c * 0xc);
        *piVar13 = iVar31;
        piVar13[1] = iVar10;
        piVar13[2] = iVar31;
        local_10c = local_100;
        goto LAB_0118aa24;
      }
    }
    iVar23 = local_f4 << 6;
    piVar6 = local_f8;
    do {
      if (iVar23 == 0) {
        piVar6 = (int *)0x0;
        local_c4 = local_fc;
        local_b8 = (int *)0x0;
        local_c8 = 0x80000000;
        local_bc = local_f4;
        local_c0 = local_f8;
        goto LAB_0118ae64;
      }
      piVar14 = piVar6 + 0xf;
      iVar23 = iVar23 + -0x40;
      piVar6 = piVar6 + 0x10;
    } while ((char)*piVar14 != '\0');
    local_bc = local_fc;
    local_c8 = 0;
    piVar6 = (int *)&DAT_00000004;
    local_b4 = local_f4;
    local_b8 = local_f8;
    local_b0 = 0;
    local_c0 = (int *)0x0;
    local_c4 = 4;
LAB_0118ae64:
    piVar14 = local_f8;
    if (local_10c != 0) {
      piVar15 = (int *)param_2[0xc];
      uVar5 = param_2[0xd];
      if (param_5 == 0) {
        uVar17 = 0;
        piVar14 = param_2;
        uVar25 = param_5;
        piVar16 = local_f8;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
        }
        piVar6 = *(int **)(param_5 + 0xc);
        do {
          iVar23 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar23 + 1;
        if (iVar23 < 0) goto LAB_0118b2b8;
        uVar25 = *(uint *)(param_5 + 0xc);
        piVar16 = *(int **)(param_5 + 0x10);
        uVar17 = 0;
        uVar18 = (*(int **)(param_5 + 4))[1];
        if (uVar18 <= uVar5) {
          iVar23 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar15 + 2,uVar18);
          uVar17 = uVar18;
          if (iVar23 != 0) {
            uVar17 = 0;
          }
        }
        uVar34 = FUN_011e1508((int)(piVar15 + 2) + uVar17,uVar5 - uVar17);
        piVar6 = (int *)((ulonglong)uVar34 >> 0x20);
        uVar17 = 2;
        piVar14 = (int *)uVar34;
      }
      do {
        iVar23 = *piVar15;
        bVar2 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar2);
      *piVar15 = iVar23 + 1;
      if (iVar23 < 0) goto LAB_0118b2b8;
      local_e4 = (int *)0x3;
      local_f0 = uVar17;
      local_e0 = uVar25;
      local_dc = piVar16;
      local_d8 = piVar14;
      local_d4 = piVar6;
      local_38 = FUN_01238114(param_4);
      piVar14 = local_d4;
      local_88 = &DAT_8000000b;
      local_84 = local_108;
      local_80 = local_104;
      local_7c = local_100;
      local_50 = 6;
      local_a8 = local_f0;
      local_a4 = local_ec;
      local_a0 = local_e8;
      piStack_9c = local_e4;
      local_98 = local_e0;
      local_94 = local_dc;
      local_90 = local_d8;
      local_8c = local_d4;
      local_4c = param_3;
      local_30 = piVar15;
      local_2c = uVar5;
      iVar23 = thunk_FUN_016d4a50(0x80);
      if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar23,&local_a8,0x80);
      local_ac = iVar23;
      FUN_011720bc(&local_a8,&local_ac);
      FUN_012128e0(&local_c8,&local_a8);
      FUN_01164df4(iVar23);
      thunk_FUN_016d3fb4(iVar23);
    }
    if (!bVar11) {
      piVar15 = (int *)param_2[0xe];
      uVar5 = param_2[0xf];
      piVar6 = (int *)LZCOUNT(local_10c);
      if (param_5 == 0) {
        uVar25 = 0;
        piVar16 = param_2;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_5 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
        }
        piVar6 = *(int **)(param_5 + 0xc);
        do {
          iVar23 = *piVar6;
          bVar11 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar11);
        *piVar6 = iVar23 + 1;
        if (iVar23 < 0) goto LAB_0118b2b8;
        uVar18 = *(uint *)(param_5 + 0xc);
        piVar14 = *(int **)(param_5 + 0x10);
        uVar25 = 0;
        uVar17 = (*(int **)(param_5 + 4))[1];
        if (uVar17 <= uVar5) {
          iVar23 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar15 + 2,uVar17);
          uVar25 = uVar17;
          if (iVar23 != 0) {
            uVar25 = 0;
          }
        }
        uVar34 = FUN_011e1508((int)(piVar15 + 2) + uVar25,uVar5 - uVar25);
        piVar6 = (int *)uVar34;
        uVar25 = 2;
        piVar16 = (int *)((ulonglong)uVar34 >> 0x20);
        param_5 = uVar18;
      }
      do {
        iVar23 = *piVar15;
        bVar11 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar11);
      *piVar15 = iVar23 + 1;
      if (iVar23 < 0) {
LAB_0118b2b8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x118b2b8);
        (*pcVar1)();
      }
      local_e4 = (int *)0x3;
      local_f0 = uVar25;
      local_e0 = param_5;
      local_dc = piVar14;
      local_d8 = piVar6;
      local_d4 = piVar16;
      uVar34 = FUN_01238114(param_4);
      local_74 = param_2[0x12];
      iVar23 = param_2[0x11];
      if (local_74 == 0) {
        uVar25 = 1;
      }
      else {
        uVar25 = thunk_FUN_016d4a50(local_74);
        if (uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_74);
        }
      }
      FUN_016dd1aa(uVar25,iVar23,local_74);
      local_50 = 6;
      local_80 = CONCAT31(local_80._1_3_,3);
      local_88 = (undefined1 *)0x80000027;
      local_a8 = local_f0;
      local_a4 = local_ec;
      local_a0 = local_e8;
      piStack_9c = local_e4;
      local_98 = local_e0;
      local_94 = local_dc;
      local_90 = local_d8;
      local_8c = local_d4;
      local_7c = local_74;
      local_78 = uVar25;
      local_4c = param_3;
      local_30 = piVar15;
      local_2c = uVar5;
      local_38 = uVar34;
      iVar23 = thunk_FUN_016d4a50(0x80);
      if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar23,&local_a8,0x80);
      local_ac = iVar23;
      FUN_011720bc(&local_a8,&local_ac);
      FUN_012128e0(&local_c8,&local_a8);
      FUN_01164df4(iVar23);
      thunk_FUN_016d3fb4(iVar23);
    }
    uVar5 = local_104;
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    if (local_10c == 0) {
      puVar27 = (undefined4 *)(local_104 + 4);
      for (uVar25 = local_100; uVar25 != 0; uVar25 = uVar25 - 1) {
        if (puVar27[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar27);
        }
        puVar27 = puVar27 + 3;
      }
      if (local_108 != 0) {
        thunk_FUN_016d3fb4(uVar5);
        return;
      }
    }
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

