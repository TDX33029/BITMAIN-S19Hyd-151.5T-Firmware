// FUN_009b0c18 @ 009b0c18 size=2436 calls_out=19 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_009b0c18(undefined4 param_1,byte *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  double *pdVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  uint *puVar25;
  uint uVar26;
  uint in_fpscr;
  double dVar27;
  double dVar28;
  byte *local_148;
  uint local_144;
  int local_140;
  byte *local_128;
  int local_124;
  byte *local_120;
  int *local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  byte *local_e0;
  int *local_dc;
  uint local_d8;
  byte *local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte *local_88;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  uint local_78;
  byte *local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_e0 = (byte *)&local_118;
  local_80 = (byte *)0x0;
  local_84 = &DAT_00000001;
  local_88 = (byte *)0x0;
  local_dc = (int *)&LAB_00fac484;
  local_118 = param_1;
  iVar8 = FUN_00fa948c(&local_88,&DAT_01869a8c,&DAT_00590e71,&local_e0);
  pbVar24 = local_80;
  pbVar7 = local_84;
  pbVar6 = local_88;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_e0,
                 &DAT_01869ab4,&DAT_018af130);
  }
  local_88 = local_84;
  local_84 = local_80;
  local_80 = param_2;
  local_7c = (byte *)param_3;
  piVar9 = (int *)FUN_009b4588(DAT_018d8018,&local_88,2);
  puVar25 = (uint *)(piVar9 + 2);
  do {
    uVar17 = *puVar25;
    bVar3 = (bool)hasExclusiveAccess(puVar25);
  } while (!bVar3);
  *puVar25 = uVar17 + 1;
  piVar9[3] = piVar9[3] + (uint)(0xfffffffe < uVar17);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar9;
    bVar3 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar3);
  *piVar9 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  iVar8 = DAT_018d801c;
  piVar9 = *(int **)(DAT_018d801c + 0xcc);
  local_124 = (int)pbVar24;
  local_128 = pbVar7;
  local_120 = param_2;
  local_11c = param_3;
  if (piVar9 != (int *)&SUB_00000002) {
    pbVar24 = &DAT_00000001;
    local_148 = (byte *)0x0;
    local_144 = 2;
    goto LAB_009b1560;
  }
  uVar17 = 0xcbf29ce4;
  uVar23 = 0x84222325;
  pbVar5 = pbVar7;
  for (; pbVar24 != (byte *)0x0; pbVar24 = (byte *)((int)pbVar24 + -1)) {
    uVar20 = uVar23 ^ *pbVar5;
    lVar4 = (ulonglong)uVar20 * 0x1b3;
    uVar23 = (uint)lVar4;
    uVar17 = uVar17 * 0x1b3 + uVar20 * 0x100 + (int)((ulonglong)lVar4 >> 0x20);
    pbVar5 = pbVar5 + 1;
  }
  puVar25 = (uint *)(DAT_018d801c + 8);
  puVar18 = (undefined4 *)(DAT_018d801c + 0x20);
  do {
    param_3 = (int *)((int)param_3 + -1);
    uVar20 = uVar23 ^ *param_2;
    lVar4 = (ulonglong)uVar20 * 0x1b3;
    uVar23 = (uint)lVar4;
    uVar17 = uVar17 * 0x1b3 + uVar20 * 0x100 + (int)((ulonglong)lVar4 >> 0x20);
    param_2 = param_2 + 1;
  } while (param_3 != (int *)0x0);
  uVar20 = *puVar25;
  if ((uVar20 < 0xfffffff0) && ((uVar20 & 8) == 0)) {
    if (*puVar25 != uVar20) {
      ClearExclusiveLocal();
      goto LAB_009b0dc4;
    }
    bVar3 = (bool)hasExclusiveAccess(puVar25);
    if (!bVar3) goto LAB_009b0dc4;
    *puVar25 = uVar20 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_009b0dc4:
    FUN_0127d66c(puVar25);
  }
  FUN_0128236c(puVar25);
  uVar20 = (uint)puVar25 | 1;
  FUN_0128236c(uVar20);
  if (*(int *)(iVar8 + 0x1c) != 0) {
    uVar10 = FUN_009bd658(*puVar18,*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar8 + 0x28),
                          *(undefined4 *)(iVar8 + 0x2c),uVar23,uVar17);
    uVar11 = uVar10 >> 0x19;
    iVar19 = *(int *)(iVar8 + 0x10);
    local_140 = 0;
    while( true ) {
      uVar10 = *(uint *)(iVar8 + 0x14) & uVar10;
      uVar21 = *(uint *)(iVar19 + uVar10);
      uVar22 = uVar21 ^ uVar11 * 0x1010101;
      uVar22 = ~uVar22 & 0x80808080 & uVar22 + 0xfefefeff;
      while (uVar22 != 0) {
        uVar26 = uVar10 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                         (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                 *(uint *)(iVar8 + 0x14);
        puVar14 = (uint *)(iVar19 + -0x10 + uVar26 * -0x10);
        uVar22 = uVar22 - 1 & uVar22;
        if (uVar23 == *puVar14 && uVar17 == puVar14[1]) {
          piVar9 = *(int **)(iVar19 + uVar26 * -0x10 + -8);
          do {
            iVar8 = *piVar9;
            bVar3 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar3);
          *piVar9 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_009b15a0;
          FUN_01282570(puVar25);
          FUN_01282570(uVar20);
          DataMemoryBarrier(0xb);
          do {
            uVar17 = *puVar25;
            bVar3 = (bool)hasExclusiveAccess(puVar25);
          } while (!bVar3);
          *puVar25 = uVar17 - 0x10;
          if ((uVar17 & 0xfffffff2) == 0x12) {
            FUN_0127d34c(puVar25);
          }
          goto LAB_009b13b8;
        }
      }
      if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
      local_140 = local_140 + 4;
      uVar10 = uVar10 + local_140;
    }
  }
  FUN_01282570(puVar25);
  FUN_01282570(uVar20);
  DataMemoryBarrier(0xb);
  do {
    uVar11 = *puVar25;
    bVar3 = (bool)hasExclusiveAccess(puVar25);
  } while (!bVar3);
  *puVar25 = uVar11 - 0x10;
  if ((uVar11 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar25);
  }
  if (*puVar25 == 0) {
    bVar3 = (bool)hasExclusiveAccess(puVar25);
    if (!bVar3) goto LAB_009b0f88;
    *puVar25 = 8;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_009b0f88:
    FUN_0127e06c(puVar25);
  }
  FUN_0128236c(puVar25);
  FUN_0128236c(uVar20);
  if (*(int *)(iVar8 + 0x1c) != 0) {
    uVar10 = FUN_009bd658(*puVar18,*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar8 + 0x28),
                          *(undefined4 *)(iVar8 + 0x2c),uVar23,uVar17);
    iVar19 = *(int *)(iVar8 + 0x10);
    uVar11 = uVar10 >> 0x19;
    local_144 = 0;
    while( true ) {
      uVar10 = *(uint *)(iVar8 + 0x14) & uVar10;
      uVar21 = *(uint *)(iVar19 + uVar10);
      uVar22 = uVar21 ^ uVar11 * 0x1010101;
      uVar22 = ~uVar22 & 0x80808080 & uVar22 + 0xfefefeff;
      while (uVar22 != 0) {
        uVar26 = uVar10 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                         (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                 *(uint *)(iVar8 + 0x14);
        puVar14 = (uint *)(iVar19 + -0x10 + uVar26 * -0x10);
        uVar22 = uVar22 - 1 & uVar22;
        if (uVar23 == *puVar14 && uVar17 == puVar14[1]) {
          piVar9 = *(int **)(iVar19 + uVar26 * -0x10 + -8);
          do {
            iVar8 = *piVar9;
            bVar3 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar3);
          *piVar9 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_009b15a0;
          pbVar24 = &DAT_00000005;
          goto LAB_009b10b0;
        }
      }
      if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
      local_144 = local_144 + 4;
      uVar10 = uVar10 + local_144;
    }
  }
  FUN_009d3c58(&local_e0,iVar8 + 0x30,0,&local_128,2);
  local_144 = local_d8;
  if (local_98 != -0x80000000) {
    local_148 = local_e0;
    local_118 = local_d0;
    uStack_114 = uStack_cc;
    uStack_110 = uStack_c8;
    uStack_10c = uStack_c4;
    local_108 = local_c0;
    uStack_104 = uStack_bc;
    uStack_100 = uStack_b8;
    uStack_fc = uStack_b4;
    uStack_f8 = uStack_b0;
    local_f4 = local_ac;
    uStack_f0 = uStack_a8;
    uStack_ec = uStack_a4;
    uStack_e8 = uStack_a0;
    uStack_e4 = uStack_9c;
    local_74 = local_d4;
    local_34 = local_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    local_78 = local_d8;
    local_80 = local_e0;
    local_7c = (byte *)local_dc;
    local_70 = local_d0;
    uStack_6c = uStack_cc;
    uStack_68 = uStack_c8;
    uStack_64 = uStack_c4;
    local_60 = local_c0;
    uStack_5c = uStack_bc;
    uStack_58 = uStack_b8;
    uStack_54 = uStack_b4;
    uStack_50 = uStack_b0;
    local_4c = local_ac;
    uStack_48 = uStack_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    local_84 = (byte *)0x1;
    local_88 = &DAT_00000001;
    local_38 = local_98;
    piVar9 = (int *)thunk_FUN_016d4a50(0x60);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x60);
    }
    FUN_016dd1aa(piVar9,&local_88,0x60);
LAB_009b11e4:
    do {
      iVar19 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar19 + 1;
    if (iVar19 < 0) {
LAB_009b15a0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x9b15a0);
      (*pcVar1)();
    }
    uVar11 = FUN_009bd658(*puVar18,*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar8 + 0x28),
                          *(undefined4 *)(iVar8 + 0x2c),uVar23,uVar17);
    if (*(int *)(iVar8 + 0x18) == 0) {
      FUN_0074a98c(iVar8 + 0x10,puVar18);
    }
    local_144 = uVar11 >> 0x19;
    uVar21 = *(uint *)(iVar8 + 0x14);
    puVar14 = *(uint **)(iVar8 + 0x10);
    bVar3 = false;
    iVar19 = 0;
    uVar10 = uVar11;
    do {
      uVar10 = uVar21 & uVar10;
      uVar22 = *(uint *)((int)puVar14 + uVar10);
      uVar26 = uVar22 ^ local_144 * 0x1010101;
      uVar26 = ~uVar26 & 0x80808080 & uVar26 + 0xfefefeff;
      while (uVar26 != 0) {
        uVar15 = uVar10 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                         (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                 uVar21;
        uVar26 = uVar26 - 1 & uVar26;
        if (uVar23 == puVar14[uVar15 * -4 + -4] && uVar17 == puVar14[uVar15 * -4 + -3]) {
          piVar12 = (int *)puVar14[uVar15 * -4 + -2];
          puVar14[uVar15 * -4 + -2] = (uint)piVar9;
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar12;
            bVar3 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar3);
          *piVar12 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0078fa50();
          }
          goto LAB_009b1364;
        }
      }
      uVar26 = uVar22 & 0x80808080;
      pbVar24 = local_148;
      if (bVar3) {
LAB_009b12ec:
        if ((uVar26 & uVar22 << 1) != 0) goto LAB_009b1478;
        bVar3 = true;
        local_148 = pbVar24;
      }
      else {
        if (uVar26 != 0) {
          pbVar24 = (byte *)(uVar10 + ((uint)LZCOUNT((uVar22 & 0x80) << 0x18 |
                                                     (uVar26 >> 8 & 0xff) << 0x10 |
                                                     (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18)
                                      >> 3) & uVar21);
          goto LAB_009b12ec;
        }
        bVar3 = false;
      }
      iVar19 = iVar19 + 4;
      uVar10 = iVar19 + uVar10;
    } while( true );
  }
  local_148 = local_d4;
  pbVar24 = local_e0;
  piVar9 = local_dc;
  if (local_e0 == &DAT_00000005) goto LAB_009b11e4;
LAB_009b10b0:
  FUN_01282570(puVar25);
  FUN_01282570(uVar20);
  if (*puVar25 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar25);
      if (bVar3) {
        *puVar25 = 0;
        goto LAB_009b13b0;
      }
    } while (*puVar25 == 8);
  }
  goto LAB_009b13a4;
LAB_009b1478:
  uVar10 = (uint)(char)*(byte *)((int)puVar14 + (int)pbVar24);
  if (-1 < (int)uVar10) {
    uVar10 = *puVar14 & 0x80808080;
    uVar22 = LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
    uVar10 = (uint)*(byte *)((int)puVar14 + (uVar22 >> 3));
    pbVar24 = (byte *)(uVar22 >> 3);
  }
  iVar19 = *(int *)(iVar8 + 0x18);
  iVar16 = *(int *)(iVar8 + 0x1c);
  bVar2 = (byte)(uVar11 >> 0x19);
  *(byte *)((int)puVar14 + (int)pbVar24) = bVar2;
  *(uint *)(iVar8 + 0x18) = iVar19 - (uVar10 & 1);
  *(int *)(iVar8 + 0x1c) = iVar16 + 1;
  *(byte *)((int)puVar14 + (uVar21 & (uint)(pbVar24 + -4)) + 4) = bVar2;
  puVar14[(int)pbVar24 * -4 + -4] = uVar23;
  puVar14[(int)pbVar24 * -4 + -3] = uVar17;
  puVar14[(int)pbVar24 * -4 + -2] = (uint)piVar9;
LAB_009b1364:
  FUN_01282570(puVar25);
  FUN_01282570(uVar20);
  pbVar24 = &DAT_00000005;
  if (*puVar25 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar25);
      if (bVar3) {
        *puVar25 = 0;
        goto LAB_009b13b8;
      }
    } while (*puVar25 == 8);
  }
LAB_009b13a4:
  ClearExclusiveLocal();
  FUN_0127db4c(puVar25);
LAB_009b13b0:
  if (pbVar24 == &DAT_00000005) {
LAB_009b13b8:
    dVar28 = (double)FUN_01845f30(param_5,param_6);
    dVar27 = (double)VectorUnsignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
    pdVar13 = (double *)(piVar9 + 2);
    do {
      while( true ) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if (*(int *)pdVar13 == *(int *)pdVar13 && piVar9[3] == piVar9[3]) break;
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(pdVar13);
    } while (!bVar3);
    *pdVar13 = dVar27 / 1000000000.0 + dVar28 + *pdVar13;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fa50(piVar9);
    }
    if (pbVar6 != (byte *)0x0) {
      thunk_FUN_016d3fb4(pbVar7);
    }
    return;
  }
LAB_009b1560:
  local_80 = (byte *)local_144;
  local_7c = local_148;
  local_88 = pbVar24;
  local_84 = (byte *)piVar9;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_88,&DAT_01869dec,&DAT_01886b2c);
}

