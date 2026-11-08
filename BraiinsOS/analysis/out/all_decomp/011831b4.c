// FUN_011831b4 @ 011831b4 size=2124 calls_out=17 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011831b4(undefined4 *param_1,uint *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  undefined8 uVar31;
  int local_128;
  int local_11c;
  uint local_118;
  uint local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 *local_dc;
  uint *local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 *local_94;
  uint *local_90;
  uint local_8c;
  undefined1 *local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar20 = *(uint *)(param_3 + 0xc);
  iVar22 = uVar20 * 0xc;
  if (0xaaaaaaa < uVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar23 = 0;
  if (iVar22 == 0) {
    local_128 = 4;
    local_108 = 0;
  }
  else {
    local_128 = thunk_FUN_016d4a50(iVar22);
    local_108 = uVar20;
    if (local_128 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar22);
    }
  }
  local_100 = 0;
  puVar27 = param_1;
  local_104 = local_128;
  if ((0x3ffffff < uVar20) ||
     (puVar27 = (undefined4 *)(uVar20 * 0x40), (undefined4 *)0x7ffffffc < puVar27)) {
LAB_011832b0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar23,puVar27);
  }
  if (puVar27 == (undefined4 *)0x0) {
    local_11c = 4;
    local_fc = 0;
  }
  else {
    local_11c = thunk_FUN_016d4a50(puVar27);
    if (local_11c == 0) {
      uVar23 = 4;
      goto LAB_011832b0;
    }
    local_fc = uVar20;
  }
  local_e8 = *(int *)(param_3 + 4);
  uVar24 = *param_2;
  uVar25 = param_2[1];
  local_e4 = *(undefined4 *)(param_3 + 8);
  if (local_e8 == 0) {
    uVar20 = 0;
  }
  local_f0 = (uint)(local_e8 != 0);
  local_f4 = 0;
  local_dc = (undefined4 *)0x0;
  local_ec = 0;
  local_f8 = local_11c;
  local_e0 = local_f0;
  local_d8 = (uint *)local_e8;
  local_d4 = local_e4;
  local_d0 = uVar20;
  if (param_2[3] == 0) {
    iVar22 = 0;
    local_118 = 0;
    while( true ) {
      iVar29 = FUN_00f45584(&local_f0);
      uVar20 = uVar24;
      if (iVar29 == 0) break;
      uVar23 = *(undefined4 *)(iVar29 + 4);
      iVar29 = *(int *)(iVar29 + 8);
      if (iVar29 == 0) {
        uVar24 = 1;
      }
      else {
        uVar24 = thunk_FUN_016d4a50(iVar29);
        if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar29);
        }
      }
      FUN_016dd1aa(uVar24,uVar23,iVar29);
      if (local_118 == local_108) {
        FUN_015f37b0(&local_108);
        local_128 = local_104;
      }
      piVar10 = (int *)(local_128 + iVar22);
      *piVar10 = iVar29;
      iVar22 = iVar22 + 0xc;
      piVar10[1] = uVar24;
      piVar10[2] = iVar29;
      local_118 = local_118 + 1;
      local_100 = local_118;
    }
  }
  else {
    uVar11 = param_2[4];
    uVar28 = 0;
    uVar12 = param_2[5];
    uVar13 = param_2[6];
    uVar14 = param_2[7];
    uVar15 = param_2[8];
    uVar16 = param_2[9];
    uVar17 = param_2[10];
    uVar5 = param_2[0xb];
    local_118 = 0;
    uVar20 = uVar24;
LAB_011833e4:
    uVar31 = FUN_00f45584(&local_f0);
    iVar22 = (int)uVar31;
    if (iVar22 != 0) {
      uVar23 = *(undefined4 *)(iVar22 + 4);
      iVar29 = *(int *)(iVar22 + 8);
      local_a8 = uVar15;
      local_a4 = uVar16;
      local_a0 = uVar17;
      uStack_9c = uVar5;
      local_98 = uVar13;
      local_94 = (undefined4 *)uVar14;
      local_90 = (uint *)uVar11;
      local_8c = uVar12;
      FUN_011df94c(&local_a8,uVar23,iVar29);
      uVar20 = local_98 ^ 0xff;
      uVar26 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
               ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
      lVar3 = (ulonglong)uVar26 * 0xb36a80d2;
      uVar18 = (uint)lVar3;
      uVar9 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
              uVar18 >> 0x18) ^
              (int)local_94 * 0x2df45158 +
              uVar20 * 0x2d7f954c + (int)((ulonglong)uVar20 * 0x2df45158 >> 0x20);
      uVar21 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18;
      lVar4 = (ulonglong)~(uint)local_90 * (ulonglong)uVar21;
      uVar30 = (uint)lVar4;
      uVar19 = local_8c << 0x18 | (local_8c >> 8 & 0xff) << 0x10 | (local_8c >> 0x10 & 0xff) << 8 |
               local_8c >> 0x18;
      uVar18 = (uVar20 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
               local_98 >> 0x18) * -0x4c957f2e +
               uVar26 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar26 = (uVar18 * 0x1000000 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
               uVar18 >> 0x18) ^ (uint)((ulonglong)uVar20 * 0x2df45158);
      uVar20 = (uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
               uVar26 >> 0x18) * ~(uint)local_90 +
               uVar21 * ~local_8c + (int)((ulonglong)lVar4 >> 0x20);
      lVar3 = (ulonglong)uVar19 * (ulonglong)uVar26;
      iVar22 = 0;
      uVar20 = (uVar20 * 0x1000000 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^ (uint)lVar3;
      uVar9 = (uVar30 << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 | (uVar30 >> 0x10 & 0xff) << 8 |
              uVar30 >> 0x18) ^
              uVar9 * uVar19 +
              uVar26 * ((int)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                        ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
              (int)((ulonglong)lVar3 >> 0x20);
      uVar18 = uVar9;
      if ((uVar26 & 0x20) != 0) {
        uVar18 = uVar20;
        uVar20 = uVar9;
      }
      uVar18 = uVar20 << (uVar26 & 0x1f) | (uVar18 >> 1) >> (~uVar26 & 0x1f);
      uVar20 = uVar18 >> 0x19;
      while( true ) {
        uVar18 = uVar25 & uVar18;
        uVar9 = *(uint *)(uVar24 + uVar18);
        uVar26 = uVar9 ^ uVar20 * 0x1010101;
        for (uVar26 = ~uVar26 & 0x80808080 & uVar26 + 0xfefefeff; uVar26 != 0;
            uVar26 = uVar26 - 1 & uVar26) {
          uVar19 = uVar18 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                           (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                   uVar25;
          iVar7 = (uVar24 - 0x20) + uVar19 * -0x20;
          if ((iVar29 == *(int *)(iVar7 + 8)) &&
             (iVar7 = thunk_FUN_016dd50a(uVar23,*(undefined4 *)(iVar7 + 4),iVar29), iVar7 == 0)) {
            local_c8 = 0x80000000;
            local_c4 = uVar23;
            local_c0 = iVar29;
            local_bc = param_4;
            FUN_011c9534(&local_a8,(uVar24 - 0x14) + uVar19 * -0x20,(int)((ulonglong)uVar31 >> 0x20)
                         ,&local_c8,param_5,param_6);
            if (uVar28 == local_fc) {
              FUN_011ca644(&local_fc);
              local_11c = local_f8;
            }
            puVar6 = (uint *)(local_11c + uVar28 * 0x40);
            uVar28 = uVar28 + 1;
            *puVar6 = local_a8;
            puVar6[1] = local_a4;
            puVar6[2] = local_a0;
            puVar6[3] = uStack_9c;
            puVar6[4] = local_98;
            puVar6[5] = (uint)local_94;
            puVar6[6] = (uint)local_90;
            puVar6[7] = local_8c;
            puVar6[8] = (uint)local_88;
            puVar6[9] = local_84;
            puVar6[10] = local_80;
            puVar6[0xb] = uStack_7c;
            puVar6[0xc] = uStack_78;
            puVar6[0xd] = uStack_74;
            puVar6[0xe] = uStack_70;
            puVar6[0xf] = uStack_6c;
            uVar20 = uStack_70;
            local_f4 = uVar28;
            goto LAB_011833e4;
          }
        }
        if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
        iVar22 = iVar22 + 4;
        uVar18 = uVar18 + iVar22;
      }
      if (iVar29 == 0) {
        uVar20 = 1;
      }
      else {
        uVar20 = thunk_FUN_016d4a50(iVar29);
        if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar29);
        }
      }
      FUN_016dd1aa(uVar20,uVar23,iVar29);
      if (local_118 == local_108) {
        FUN_015f37b0(&local_108);
        local_128 = local_104;
      }
      local_100 = local_118 + 1;
      piVar10 = (int *)(local_128 + local_118 * 0xc);
      *piVar10 = iVar29;
      piVar10[1] = uVar20;
      piVar10[2] = iVar29;
      local_118 = local_100;
      goto LAB_011833e4;
    }
  }
  iVar22 = local_f4 << 6;
  iVar29 = local_f8;
  do {
    if (iVar22 == 0) {
      uVar23 = 0;
      local_c4 = local_fc;
      local_b8 = 0;
      local_c8 = 0x80000000;
      local_bc = local_f4;
      local_c0 = local_f8;
      goto LAB_011837ec;
    }
    uVar20 = (uint)*(byte *)(iVar29 + 0x3c);
    iVar22 = iVar22 + -0x40;
    iVar29 = iVar29 + 0x40;
  } while (uVar20 != 0);
  local_bc = local_fc;
  local_c8 = 0;
  uVar23 = 4;
  local_b4 = local_f4;
  local_b8 = local_f8;
  local_b0 = 0;
  local_c0 = 0;
  local_c4 = 4;
LAB_011837ec:
  if (local_118 == 0) {
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    if (local_108 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_104);
    return;
  }
  piVar10 = (int *)param_2[0xc];
  uVar24 = param_2[0xd];
  if (param_5 == 0) {
    uVar25 = 0;
    puVar27 = param_1;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar8 = *(int **)(param_5 + 0xc);
    do {
      iVar22 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar22 + 1;
    if (iVar22 < 0) goto LAB_01183a08;
    uVar20 = *(uint *)(param_5 + 0xc);
    puVar27 = *(undefined4 **)(param_5 + 0x10);
    uVar25 = 0;
    uVar5 = (*(int **)(param_5 + 4))[1];
    if (uVar5 <= uVar24) {
      iVar22 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar10 + 2,uVar5);
      uVar25 = uVar5;
      if (iVar22 != 0) {
        uVar25 = 0;
      }
    }
    uVar31 = FUN_011e1508((int)(piVar10 + 2) + uVar25,uVar24 - uVar25);
    uVar23 = (undefined4)((ulonglong)uVar31 >> 0x20);
    param_2 = (uint *)uVar31;
    uVar25 = 2;
  }
  do {
    iVar22 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar22 + 1;
  if (-1 < iVar22) {
    local_e4 = 3;
    local_f0 = uVar25;
    local_e0 = uVar20;
    local_dc = puVar27;
    local_d8 = param_2;
    local_d4 = uVar23;
    local_38 = FUN_01238114(param_4);
    local_88 = &DAT_8000000b;
    local_84 = local_108;
    local_80 = local_104;
    uStack_7c = local_100;
    local_50 = 6;
    local_a8 = local_f0;
    local_a4 = local_ec;
    local_a0 = local_e8;
    uStack_9c = local_e4;
    local_98 = local_e0;
    local_94 = local_dc;
    local_90 = local_d8;
    local_8c = local_d4;
    local_4c = param_3;
    local_30 = piVar10;
    local_2c = uVar24;
    iVar22 = thunk_FUN_016d4a50(0x80);
    if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar22,&local_a8,0x80);
    local_ac = iVar22;
    FUN_011720bc(&local_a8,&local_ac);
    FUN_012128e0(&local_c8,&local_a8);
    FUN_01164df4(iVar22);
    thunk_FUN_016d3fb4(iVar22);
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    return;
  }
LAB_01183a08:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1183a08);
  (*pcVar1)();
}

