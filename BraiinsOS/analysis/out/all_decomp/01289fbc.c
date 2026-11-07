// FUN_01289fbc @ 01289fbc size=7020 calls_out=5 calls_in=12
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01289fbc(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  ulonglong uVar58;
  uint local_218;
  uint local_214;
  uint local_200;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1d8 [4];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8 [7];
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168 [7];
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  uint local_128 [7];
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8 [40];
  undefined8 local_48;
  uint local_40 [5];
  uint uStack_2c;
  
  uVar49 = param_2[6];
  uVar38 = param_2[7];
  iVar20 = 0x100;
  uVar42 = uVar49;
  uVar44 = uVar38;
  if (uVar49 == 0 && uVar38 == 0) {
    uVar42 = param_2[4];
    uVar44 = param_2[5];
    iVar20 = 0xc0;
    if (uVar42 != 0 || uVar44 != 0) goto LAB_0128a008;
    uVar42 = param_2[2];
    uVar44 = param_2[3];
    iVar20 = 0x80;
    if (uVar42 != 0 || uVar44 != 0) goto LAB_0128a008;
    iVar24 = LZCOUNT(*param_2) + 0x20;
    if (param_2[1] != 0) {
      iVar24 = LZCOUNT(param_2[1]);
    }
    iVar20 = 0x40;
    uVar42 = param_3[6];
    uVar44 = param_3[7];
    iVar35 = 0x100;
    if (uVar42 == 0 && uVar44 == 0) goto LAB_0128a028;
  }
  else {
LAB_0128a008:
    iVar24 = LZCOUNT(uVar42) + 0x20;
    if (uVar44 != 0) {
      iVar24 = LZCOUNT(uVar44);
    }
    uVar42 = param_3[6];
    uVar44 = param_3[7];
    iVar35 = 0x100;
    if (!(uVar42 != 0 || uVar44 != 0)) {
LAB_0128a028:
      uVar42 = param_3[4];
      uVar44 = param_3[5];
      iVar35 = 0xc0;
      if (!(uVar42 != 0 || uVar44 != 0)) {
        uVar42 = param_3[2];
        uVar44 = param_3[3];
        iVar35 = 0x80;
        if (!(uVar42 != 0 || uVar44 != 0)) {
          iVar35 = LZCOUNT(*param_3) + 0x20;
          if (param_3[1] != 0) {
            iVar35 = LZCOUNT(param_3[1]);
          }
          if (iVar35 == 0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00564610,0x21,&DAT_0188bbd0);
          }
          uVar42 = 0x40 - iVar35;
          uVar44 = iVar20 - iVar24;
          if (uVar44 < uVar42) goto LAB_0128ba44;
          goto LAB_0128a078;
        }
      }
    }
  }
  iVar36 = LZCOUNT(uVar42) + 0x20;
  if (uVar44 != 0) {
    iVar36 = LZCOUNT(uVar44);
  }
  uVar42 = iVar35 - iVar36;
  uVar44 = iVar20 - iVar24;
  if (uVar44 < uVar42) {
LAB_0128ba44:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar42 = param_2[1];
    uVar44 = param_2[2];
    uVar38 = param_2[3];
    param_1[8] = *param_2;
    param_1[9] = uVar42;
    param_1[10] = uVar44;
    param_1[0xb] = uVar38;
    uVar42 = param_2[5];
    uVar44 = param_2[6];
    uVar38 = param_2[7];
    param_1[0xc] = param_2[4];
    param_1[0xd] = uVar42;
    param_1[0xe] = uVar44;
    param_1[0xf] = uVar38;
    return;
  }
LAB_0128a078:
  if (uVar42 < 0x41) {
    uVar42 = *param_3;
    uVar44 = param_3[1];
    if (uVar42 == 0 && uVar44 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0188bbd0);
    }
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    uVar10 = param_2[1];
    uVar12 = *param_2;
    uVar25 = param_2[4];
    uVar30 = param_2[5];
    uVar58 = FUN_01846088(uVar49,uVar38,uVar42,uVar44);
    uVar21 = (uint)(uVar58 >> 0x20);
    lVar4 = (ulonglong)uVar42 * (uVar58 & 0xffffffff);
    uVar15 = (uint)lVar4;
    local_128[2] = uVar49 - uVar15;
    uVar11 = LZCOUNT(local_128[2]) + 0x20;
    local_128[3] = uVar38 - (uVar21 * uVar42 +
                             (uint)uVar58 * uVar44 + (int)((ulonglong)lVar4 >> 0x20) +
                            (uint)(uVar49 < uVar15));
    if (local_128[3] != 0) {
      uVar11 = LZCOUNT(local_128[3]);
    }
    iVar20 = LZCOUNT(uVar25) + 0x20;
    if (uVar30 != 0) {
      iVar20 = LZCOUNT(uVar30);
    }
    if (local_128[2] == 0 && local_128[3] == 0) {
      uVar11 = iVar20 + 0x40;
    }
    iVar35 = LZCOUNT(uVar44);
    iVar24 = LZCOUNT(uVar42) + 0x20;
    iVar20 = iVar24;
    if (uVar44 != 0) {
      iVar20 = iVar35;
    }
    bVar54 = iVar20 + 0x40U < uVar11;
    uVar11 = (iVar20 + 0x40U) - uVar11;
    uVar49 = -(uint)bVar54;
    uVar15 = -(uint)bVar54;
    uVar14 = -(uint)bVar54;
    bVar55 = uVar42 == 0;
    bVar57 = uVar44 == 0;
    bVar1 = uVar25 == 0;
    bVar56 = local_128[2] == 0;
    bVar2 = uVar30 == 0;
    bVar3 = local_128[3] == 0;
    bVar54 = (uint)((uint)bVar54 < (uint)((uint)bVar54 < (uint)(uVar11 < 0x80))) <= (uint)bVar54;
    uVar38 = uVar25;
    if ((bVar55 && bVar57 || (bVar1 && bVar56) && (bVar2 && bVar3)) || bVar54) {
      uVar38 = 0;
    }
    uVar31 = uVar30;
    if ((bVar55 && bVar57 || (bVar1 && bVar56) && (bVar2 && bVar3)) || bVar54) {
      uVar31 = 0;
    }
    if ((!((bVar55 && bVar57 || (bVar1 && bVar56) && (bVar2 && bVar3)) || bVar54)) &&
       ((uVar11 != 0x7f || uVar15 != 0) || (uVar49 != 0 || uVar14 != 0))) {
      local_128[0] = uVar25;
      local_12c = 0;
      local_130 = 0;
      local_134 = 0;
      local_138 = 0;
      local_128[1] = uVar30;
      uVar31 = 0x7f - uVar11 & 0x1f;
      uVar45 = uVar31 ^ 0x1f;
      iVar20 = -(0x7f - uVar11 >> 3 & 0xc);
      local_1e4 = *(uint *)((int)local_1d8 + iVar20 + 0xb0);
      uVar38 = *(uint *)((int)local_1d8 + iVar20 + 0xb4);
      local_1e8 = uVar38 << uVar31 | (local_1e4 >> 1) >> uVar45;
      uVar52 = uVar11 + 1;
      bVar54 = CARRY4(uVar49,(uint)(0xfffffffe < uVar11));
      uVar49 = uVar49 + (0xfffffffe < uVar11);
      local_1e4 = local_1e4 << uVar31;
      bVar1 = CARRY4(uVar15,(uint)bVar54);
      uVar15 = uVar15 + bVar54;
      iVar36 = uVar14 + bVar1;
      if (CARRY4(uVar14,(uint)bVar1)) {
        uVar38 = 0;
      }
      else {
        uVar19 = *(uint *)((int)local_1d8 + iVar20 + 0xb8);
        uVar29 = uVar52 & 0x1f;
        uVar48 = *(int *)((int)local_1d8 + iVar20 + 0xbc) << uVar31 | (uVar19 >> 1) >> uVar45;
        uVar14 = uVar29 ^ 0x1f;
        local_13c = 0;
        local_140 = 0;
        local_144 = 0;
        local_148 = 0;
        local_168[4] = uVar25;
        local_168[6] = local_128[2];
        local_168[5] = uVar30;
        local_14c = local_128[3];
        uVar11 = (uVar52 & 0x7f) >> 5;
        uVar34 = local_1d8[uVar11 + 0x22] >> uVar29 | (local_1d8[uVar11 + 0x23] << 1) << uVar14;
        uVar28 = local_1d8[uVar11 + 0x21] >> uVar29 | (local_1d8[uVar11 + 0x22] << 1) << uVar14;
        uVar47 = local_1d8[uVar11 + 0x20] >> uVar29 | (local_1d8[uVar11 + 0x21] << 1) << uVar14;
        uVar11 = local_1d8[uVar11 + 0x23] >> uVar29;
        local_1f0 = 0;
        bVar54 = (uVar42 != 0) <= uVar44;
        uVar29 = uVar44 - (uVar42 == 0);
        uVar14 = -(uint)(uVar44 == 0 && bVar54);
        local_1f4 = uVar19 << uVar31 | (uVar38 >> 1) >> uVar45;
        do {
          uVar11 = uVar11 << 1 | uVar34 >> 0x1f;
          uVar23 = uVar47 << 1 | uVar48 >> 0x1f;
          uVar45 = uVar28 << 1 | uVar47 >> 0x1f;
          uVar27 = uVar34 << 1 | uVar28 >> 0x1f;
          uVar38 = (int)(-(uVar11 + (uVar14 <= uVar27 &&
                                    (uint)(uVar45 < uVar29 ||
                                          uVar29 - uVar45 < (uint)(uVar23 <= uVar42 - 1)) <=
                                    uVar14 - uVar27)) - (uint)(uVar44 == 0 && bVar54)) >> 0x1f;
          uVar19 = uVar42 & uVar38;
          uVar31 = uVar44 & uVar38;
          uVar47 = uVar23 - uVar19;
          bVar1 = uVar45 - uVar31 < (uint)(uVar19 <= uVar23);
          uVar28 = uVar45 - (uVar31 + (uVar19 > uVar23));
          uVar34 = uVar27 - (uVar31 >= uVar45 && !bVar1);
          uVar11 = uVar11 - (uVar27 == 0 && (uVar31 < uVar45 || bVar1) <= uVar27);
          bVar56 = uVar52 != 0;
          uVar52 = uVar52 - 1;
          bVar1 = uVar49 != 0;
          bVar2 = uVar49 < bVar56;
          uVar49 = uVar49 - !bVar56;
          bVar56 = uVar15 == 0;
          bVar3 = (bVar1 || bVar2) <= uVar15;
          uVar15 = uVar15 - (!bVar1 && !bVar2);
          iVar36 = iVar36 - (uint)(bVar56 && bVar3);
          uVar38 = uVar38 & 1;
          uVar31 = local_1f0 | local_1e4 << 1;
          uVar45 = local_1e8 << 1 | local_1e4 >> 0x1f;
          uVar48 = uVar48 << 1 | local_1f4 >> 0x1f;
          local_1f4 = local_1f4 << 1 | local_1e8 >> 0x1f;
          local_1f0 = uVar38;
          local_1e8 = uVar45;
          local_1e4 = uVar31;
        } while ((uVar52 != 0 || uVar15 != 0) || (uVar49 != 0 || iVar36 != 0));
      }
      uVar38 = uVar38 | local_1e4 << 1;
      uVar31 = local_1e8 << 1 | local_1e4 >> 0x1f;
    }
    uVar49 = (uint)((ulonglong)uVar42 * (ulonglong)uVar38);
    local_168[2] = uVar25 - uVar49;
    local_168[3] = uVar30 - (uVar38 * uVar44 +
                             uVar31 * uVar42 + (int)((ulonglong)uVar42 * (ulonglong)uVar38 >> 0x20)
                            + (uint)(uVar25 < uVar49));
    uVar49 = LZCOUNT(local_168[2]) + 0x20;
    if (local_168[3] != 0) {
      uVar49 = LZCOUNT(local_168[3]);
    }
    iVar20 = LZCOUNT(uVar8) + 0x20;
    if (uVar9 != 0) {
      iVar20 = LZCOUNT(uVar9);
    }
    if (local_168[2] == 0 && local_168[3] == 0) {
      uVar49 = iVar20 + 0x40;
    }
    iVar20 = iVar24;
    if (uVar44 != 0) {
      iVar20 = iVar35;
    }
    bVar54 = iVar20 + 0x40U < uVar49;
    uVar49 = (iVar20 + 0x40U) - uVar49;
    uVar11 = -(uint)bVar54;
    bVar2 = uVar8 != 0;
    bVar3 = local_168[2] != 0;
    bVar1 = uVar9 != 0;
    bVar56 = local_168[3] != 0;
    uVar15 = -(uint)bVar54;
    uVar25 = -(uint)bVar54;
    bVar54 = (uint)((uint)bVar54 < (uint)((uint)bVar54 < (uint)(uVar49 < 0x80))) <= (uint)bVar54;
    local_214 = uVar8;
    if ((bVar55 && bVar57 || (!bVar2 && !bVar3) && (!bVar1 && !bVar56)) || bVar54) {
      local_214 = 0;
    }
    local_218 = uVar9;
    if ((bVar55 && bVar57 || (!bVar2 && !bVar3) && (!bVar1 && !bVar56)) || bVar54) {
      local_218 = 0;
    }
    if ((((!bVar55 || !bVar57) && ((bVar2 || bVar3) || (bVar1 || bVar56))) && !bVar54) &&
       ((uVar49 != 0x7f || uVar15 != 0) || (uVar11 != 0 || uVar25 != 0))) {
      local_168[0] = uVar8;
      local_16c = 0;
      local_170 = 0;
      local_174 = 0;
      local_178 = 0;
      local_168[1] = uVar9;
      uVar45 = 0x7f - uVar49 & 0x1f;
      uVar52 = uVar45 ^ 0x1f;
      local_1f8 = uVar49 + 1;
      iVar20 = -(0x7f - uVar49 >> 3 & 0xc);
      uVar30 = *(uint *)((int)local_1d8 + iVar20 + 0x70);
      uVar14 = *(uint *)((int)local_1d8 + iVar20 + 0x74);
      local_1e4 = uVar14 << uVar45 | (uVar30 >> 1) >> uVar52;
      uVar30 = uVar30 << uVar45;
      bVar54 = CARRY4(uVar11,(uint)(0xfffffffe < uVar49));
      uVar11 = uVar11 + (0xfffffffe < uVar49);
      bVar1 = CARRY4(uVar15,(uint)bVar54);
      uVar15 = uVar15 + bVar54;
      iVar36 = uVar25 + bVar1;
      if (CARRY4(uVar25,(uint)bVar1)) {
        local_214 = 0;
      }
      else {
        uVar19 = *(uint *)((int)local_1d8 + iVar20 + 0x78);
        uVar28 = local_1f8 & 0x1f;
        local_1ec = *(int *)((int)local_1d8 + iVar20 + 0x7c) << uVar45 | (uVar19 >> 1) >> uVar52;
        local_1a8[5] = uVar9;
        local_17c = 0;
        local_180 = 0;
        uVar34 = uVar28 ^ 0x1f;
        local_184 = 0;
        local_188 = 0;
        local_1a8[4] = uVar8;
        local_1a8[6] = local_168[2];
        local_18c = local_168[3];
        uVar25 = (local_1f8 & 0x7f) >> 5;
        uVar48 = local_1d8[uVar25 + 0x12] >> uVar28 | (local_1d8[uVar25 + 0x13] << 1) << uVar34;
        uVar49 = local_1d8[uVar25 + 0x13] >> uVar28;
        uVar29 = local_1d8[uVar25 + 0x11] >> uVar28 | (local_1d8[uVar25 + 0x12] << 1) << uVar34;
        uVar28 = local_1d8[uVar25 + 0x10] >> uVar28 | (local_1d8[uVar25 + 0x11] << 1) << uVar34;
        bVar54 = (uVar42 != 0) <= uVar44;
        uVar34 = uVar44 - (uVar42 == 0);
        uVar25 = -(uint)(uVar44 == 0 && bVar54);
        local_1e8 = 0;
        local_1f4 = uVar19 << uVar45 | (uVar14 >> 1) >> uVar52;
        local_1f0 = uVar30;
        do {
          uVar49 = uVar49 << 1 | uVar48 >> 0x1f;
          uVar19 = uVar28 << 1 | local_1ec >> 0x1f;
          uVar30 = uVar29 << 1 | uVar28 >> 0x1f;
          uVar52 = uVar48 << 1 | uVar29 >> 0x1f;
          local_214 = (int)(-(uVar49 + (uVar25 <= uVar52 &&
                                       (uint)(uVar30 < uVar34 ||
                                             uVar34 - uVar30 < (uint)(uVar19 <= uVar42 - 1)) <=
                                       uVar25 - uVar52)) - (uint)(uVar44 == 0 && bVar54)) >> 0x1f;
          uVar45 = uVar42 & local_214;
          uVar14 = uVar44 & local_214;
          uVar28 = uVar19 - uVar45;
          bVar1 = uVar30 - uVar14 < (uint)(uVar45 <= uVar19);
          uVar29 = uVar30 - (uVar14 + (uVar45 > uVar19));
          local_214 = local_214 & 1;
          uVar48 = uVar52 - (uVar14 >= uVar30 && !bVar1);
          uVar49 = uVar49 - (uVar52 == 0 && (uVar14 < uVar30 || bVar1) <= uVar52);
          bVar56 = local_1f8 != 0;
          local_1f8 = local_1f8 - 1;
          bVar1 = uVar11 != 0;
          bVar2 = uVar11 < bVar56;
          uVar11 = uVar11 - !bVar56;
          bVar56 = uVar15 == 0;
          bVar3 = (bVar1 || bVar2) <= uVar15;
          uVar15 = uVar15 - (!bVar1 && !bVar2);
          iVar36 = iVar36 - (uint)(bVar56 && bVar3);
          uVar30 = local_1e8 | local_1f0 << 1;
          uVar14 = local_1e4 << 1 | local_1f0 >> 0x1f;
          local_1ec = local_1ec << 1 | local_1f4 >> 0x1f;
          local_1f4 = local_1f4 << 1 | local_1e4 >> 0x1f;
          local_1f0 = uVar30;
          local_1e8 = local_214;
          local_1e4 = uVar14;
        } while ((local_1f8 != 0 || uVar15 != 0) || (uVar11 != 0 || iVar36 != 0));
      }
      local_214 = local_214 | uVar30 << 1;
      local_218 = local_1e4 << 1 | uVar30 >> 0x1f;
    }
    uVar49 = (uint)((ulonglong)uVar42 * (ulonglong)local_214);
    local_1a8[2] = uVar8 - uVar49;
    uVar11 = LZCOUNT(local_1a8[2]) + 0x20;
    local_1a8[3] = uVar9 - (local_214 * uVar44 +
                            local_218 * uVar42 +
                            (int)((ulonglong)uVar42 * (ulonglong)local_214 >> 0x20) +
                           (uint)(uVar8 < uVar49));
    if (local_1a8[3] != 0) {
      uVar11 = LZCOUNT(local_1a8[3]);
    }
    iVar20 = LZCOUNT(uVar12) + 0x20;
    if (uVar10 != 0) {
      iVar20 = LZCOUNT(uVar10);
    }
    if (local_1a8[2] == 0 && local_1a8[3] == 0) {
      uVar11 = iVar20 + 0x40;
    }
    if (uVar44 != 0) {
      iVar24 = iVar35;
    }
    bVar54 = iVar24 + 0x40U < uVar11;
    uVar11 = (iVar24 + 0x40U) - uVar11;
    uVar8 = -(uint)bVar54;
    uVar9 = -(uint)bVar54;
    uVar49 = (uint)bVar54;
    uVar15 = -uVar49;
    bVar54 = ((uint)bVar54 < (uint)((uint)bVar54 < (uint)(uVar11 < 0x80))) <= uVar49;
    uVar25 = uVar10;
    uVar49 = uVar12;
    if ((bVar55 && bVar57 ||
        (uVar12 == 0 && local_1a8[2] == 0) && (uVar10 == 0 && local_1a8[3] == 0)) || bVar54) {
      uVar49 = 0;
      uVar25 = 0;
    }
    if ((((!bVar55 || !bVar57) &&
         ((uVar12 != 0 || local_1a8[2] != 0) || (uVar10 != 0 || local_1a8[3] != 0))) && !bVar54) &&
       ((uVar11 != 0x7f || uVar9 != 0) || (uVar8 != 0 || uVar15 != 0))) {
      local_1a8[0] = uVar12;
      local_1ac = 0;
      local_1b0 = 0;
      local_1b4 = 0;
      local_1b8 = 0;
      local_1f8 = uVar11 + 1;
      local_1a8[1] = uVar10;
      uVar30 = 0x7f - uVar11 & 0x1f;
      bVar54 = CARRY4(uVar8,(uint)(0xfffffffe < uVar11));
      uVar8 = uVar8 + (0xfffffffe < uVar11);
      bVar55 = CARRY4(uVar9,(uint)bVar54);
      uVar9 = uVar9 + bVar54;
      uVar25 = uVar30 ^ 0x1f;
      iVar20 = -(0x7f - uVar11 >> 3 & 0xc);
      local_1e8 = *(uint *)((int)local_1d8 + iVar20 + 0x30);
      uVar49 = *(uint *)((int)local_1d8 + iVar20 + 0x34);
      local_1e4 = uVar49 << uVar30 | (local_1e8 >> 1) >> uVar25;
      iVar24 = uVar15 + bVar55;
      local_1e8 = local_1e8 << uVar30;
      if (CARRY4(uVar15,(uint)bVar55)) {
        uVar49 = 0;
      }
      else {
        uVar52 = *(uint *)((int)local_1d8 + iVar20 + 0x38);
        uVar14 = *(int *)((int)local_1d8 + iVar20 + 0x3c) << uVar30 | (uVar52 >> 1) >> uVar25;
        uVar34 = local_1f8 & 0x1f;
        local_1bc = 0;
        uVar45 = uVar34 ^ 0x1f;
        local_1c0 = 0;
        local_1c4 = 0;
        local_1c8 = 0;
        local_1d8[0] = uVar12;
        local_1d8[1] = uVar10;
        local_1d8[2] = local_1a8[2];
        local_1d8[3] = local_1a8[3];
        uVar15 = (local_1f8 & 0x7f) >> 5;
        uVar19 = local_1d8[uVar15 + 2] >> uVar34 | (local_1d8[uVar15 + 3] << 1) << uVar45;
        uVar11 = local_1d8[uVar15 + 3] >> uVar34;
        uVar48 = local_1d8[uVar15 + 1] >> uVar34 | (local_1d8[uVar15 + 2] << 1) << uVar45;
        uVar34 = local_1d8[uVar15] >> uVar34 | (local_1d8[uVar15 + 1] << 1) << uVar45;
        local_1f0 = 0;
        bVar54 = (uVar42 != 0) <= uVar44;
        uVar45 = uVar44 - (uVar42 == 0);
        uVar15 = -(uint)(uVar44 == 0 && bVar54);
        local_1f4 = uVar52 << uVar30 | (uVar49 >> 1) >> uVar25;
        do {
          uVar11 = uVar11 << 1 | uVar19 >> 0x1f;
          uVar52 = uVar34 << 1 | uVar14 >> 0x1f;
          uVar25 = uVar48 << 1 | uVar34 >> 0x1f;
          uVar29 = uVar19 << 1 | uVar48 >> 0x1f;
          uVar49 = (int)(-(uVar11 + (uVar15 <= uVar29 &&
                                    (uint)(uVar25 < uVar45 ||
                                          uVar45 - uVar25 < (uint)(uVar52 <= uVar42 - 1)) <=
                                    uVar15 - uVar29)) - (uint)(uVar44 == 0 && bVar54)) >> 0x1f;
          uVar19 = uVar42 & uVar49;
          uVar30 = uVar44 & uVar49;
          uVar34 = uVar52 - uVar19;
          bVar55 = uVar25 - uVar30 < (uint)(uVar19 <= uVar52);
          uVar48 = uVar25 - (uVar30 + (uVar19 > uVar52));
          uVar19 = uVar29 - (uVar30 >= uVar25 && !bVar55);
          uVar11 = uVar11 - (uVar29 == 0 && (uVar30 < uVar25 || bVar55) <= uVar29);
          uVar49 = uVar49 & 1;
          bVar57 = local_1f8 != 0;
          local_1f8 = local_1f8 - 1;
          bVar55 = uVar8 != 0;
          bVar1 = uVar8 < bVar57;
          uVar8 = uVar8 - !bVar57;
          bVar57 = uVar9 == 0;
          bVar56 = (bVar55 || bVar1) <= uVar9;
          uVar9 = uVar9 - (!bVar55 && !bVar1);
          iVar24 = iVar24 - (uint)(bVar57 && bVar56);
          uVar25 = local_1f0 | local_1e8 << 1;
          uVar30 = local_1e4 << 1 | local_1e8 >> 0x1f;
          uVar14 = uVar14 << 1 | local_1f4 >> 0x1f;
          local_1f4 = local_1f4 << 1 | local_1e4 >> 0x1f;
          local_1f0 = uVar49;
          local_1e8 = uVar25;
          local_1e4 = uVar30;
        } while ((local_1f8 != 0 || uVar9 != 0) || (uVar8 != 0 || iVar24 != 0));
      }
      uVar49 = uVar49 | local_1e8 << 1;
      uVar25 = local_1e4 << 1 | local_1e8 >> 0x1f;
    }
    uVar8 = (uint)((ulonglong)uVar42 * (ulonglong)uVar49);
    param_1[1] = uVar25;
    *param_1 = uVar49;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[2] = local_214;
    param_1[0xc] = 0;
    param_1[3] = local_218;
    param_1[4] = uVar38;
    param_1[5] = uVar31;
    param_1[6] = (uint)uVar58;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[7] = uVar21;
    param_1[8] = uVar12 - uVar8;
    param_1[9] = uVar10 - (uVar49 * uVar44 +
                           uVar25 * uVar42 + (int)((ulonglong)uVar42 * (ulonglong)uVar49 >> 0x20) +
                          (uint)(uVar12 < uVar8));
    return;
  }
  local_e8[4] = *param_3;
  local_e8[5] = param_3[1];
  local_e8[6] = param_3[2];
  local_e8[7] = param_3[3];
  local_e8[8] = param_3[4];
  local_e8[9] = param_3[5];
  local_e8[10] = param_3[6];
  local_e8[0xb] = param_3[7];
  uVar42 = uVar42 - 1;
  uVar8 = (uVar42 >> 6) + 1;
  uVar9 = LZCOUNT(local_1d8[uVar8 * 2 + 0x3e]) + 0x20;
  if (local_1d8[uVar8 * 2 + 0x3f] != 0) {
    uVar9 = LZCOUNT(local_1d8[uVar8 * 2 + 0x3f]);
  }
  uVar12 = uVar9 & 0x3f;
  uVar11 = uVar12 - 0x20;
  bVar54 = -1 < (int)uVar11;
  uVar10 = local_e8[4] << uVar12;
  if (bVar54) {
    uVar10 = 0;
  }
  uVar21 = uVar9 >> 6;
  uVar25 = 0x20 - uVar12;
  local_40[2] = 0;
  local_40[0] = 0;
  local_48._0_4_ = 0;
  local_48._0_4_ = 0;
  local_e8[0x26] = 0;
  local_e8[uVar21 * 2 + 0x26] = uVar10;
  uVar15 = local_e8[0x26];
  uVar10 = local_e8[4] >> (uVar25 & 0xff) | local_e8[5] << uVar12;
  local_40[3] = 0;
  local_40[1] = 0;
  if (bVar54) {
    uVar10 = local_e8[4] << (uVar11 & 0xff);
  }
  local_48._4_4_ = 0;
  local_48 = (ulonglong)(uint)local_48;
  local_e8[0x27] = 0;
  uVar30 = local_e8[6] >> (uVar25 & 0xff) | local_e8[7] << uVar12;
  if (bVar54) {
    uVar30 = local_e8[6] << (uVar11 & 0xff);
  }
  uVar14 = local_e8[8] << uVar12;
  uVar31 = local_e8[8] >> (uVar25 & 0xff) | local_e8[9] << uVar12;
  local_e8[uVar21 * 2 + 0x27] = uVar10;
  uVar45 = local_e8[0x27];
  uVar10 = local_e8[6] << uVar12;
  if (bVar54) {
    uVar14 = 0;
    uVar10 = 0;
    uVar31 = local_e8[8] << (uVar11 & 0xff);
  }
  local_40[uVar21 * 2] = uVar14;
  local_e8[uVar21 * 2 + 0x28] = uVar10;
  local_40[uVar21 * 2 + 1] = uVar31;
  local_40[uVar21 * 2 + -1] = uVar30;
  if (uVar21 == 0) {
    local_40[2] = local_e8[10] << uVar12;
    if (-1 < (int)uVar11) {
      local_40[2] = 0;
    }
    local_40[3] = local_e8[10] >> (uVar25 & 0xff) | local_e8[0xb] << uVar12;
    if (-1 < (int)uVar11) {
      local_40[3] = local_e8[10] << (uVar11 & 0xff);
    }
  }
  if (uVar12 != 0) {
    uVar48 = -uVar12 + 0x40;
    uVar34 = 0x20 - uVar48;
    uVar52 = local_e8[5] >> (uVar48 & 0xff);
    uVar19 = local_e8[4] >> (uVar48 & 0xff) | local_e8[5] << (uVar34 & 0xff);
    if (-1 < (int)uVar25) {
      uVar19 = local_e8[5] >> (uVar25 & 0xff);
      uVar52 = 0;
    }
    uVar28 = local_e8[6] >> (uVar48 & 0xff) | local_e8[7] << (uVar34 & 0xff);
    uVar29 = local_e8[7] >> (uVar48 & 0xff);
    if (-1 < (int)uVar25) {
      uVar28 = local_e8[7] >> (uVar25 & 0xff);
      uVar29 = 0;
    }
    local_40[uVar21 * 2] = uVar28 + uVar14;
    local_40[uVar21 * 2 + 1] = uVar29 + uVar31 + (uint)CARRY4(uVar28,uVar14);
    local_e8[uVar21 * 2 + 0x28] = uVar19 + uVar10;
    local_40[uVar21 * 2 + -1] = uVar52 + uVar30 + (uint)CARRY4(uVar19,uVar10);
    if (uVar9 < 0x40) {
      uVar31 = -uVar12 + 0x20;
      uVar10 = local_e8[9] >> (uVar48 & 0xff);
      uVar14 = local_40[uVar21 * 2 + 2];
      uVar30 = local_e8[8] >> (uVar48 & 0xff) | local_e8[9] << (uVar34 & 0xff);
      if (-1 < (int)uVar31) {
        uVar10 = 0;
        uVar30 = local_e8[9] >> (uVar31 & 0xff);
      }
      local_40[uVar21 * 2 + 2] = uVar14 + uVar30;
      local_40[uVar21 * 2 + 3] = local_40[uVar21 * 2 + 3] + uVar10 + (uint)CARRY4(uVar14,uVar30);
    }
  }
  uVar19 = local_40[3];
  uVar52 = local_40[2];
  uVar31 = local_40[1];
  uVar14 = local_40[0];
  uVar58 = local_48;
  uVar30 = local_48._4_4_;
  uVar44 = uVar44 - 1 >> 6;
  uVar10 = uVar42 >> 6;
  local_e8[4] = local_e8[0x26];
  local_e8[5] = local_e8[0x27];
  local_e8[6] = (uint)local_48;
  local_e8[7] = local_48._4_4_;
  local_e8[8] = local_40[0];
  local_e8[9] = local_40[1];
  local_e8[10] = local_40[2];
  local_e8[0xb] = local_40[3];
  uVar28 = -uVar9 + 0x40;
  puVar16 = (uint *)((int)param_2 + (uVar28 >> 3 & 8));
  uVar34 = puVar16[2];
  uVar21 = puVar16[4];
  uVar47 = puVar16[1];
  uVar29 = puVar16[3];
  uVar53 = puVar16[5];
  uVar48 = uVar28 & 0x3f;
  uVar27 = 0x20 - uVar48;
  local_e8[0xe] = *puVar16 >> uVar48 | uVar47 << (uVar27 & 0xff);
  uVar23 = uVar48 - 0x20;
  bVar54 = -1 < (int)uVar23;
  local_200 = uVar34 >> uVar48 | uVar29 << (uVar27 & 0xff);
  local_e8[0xf] = uVar47 >> uVar48;
  if (bVar54) {
    local_e8[0xe] = uVar47 >> (uVar23 & 0xff);
  }
  local_e8[0x12] = uVar21 >> uVar48 | uVar53 << (uVar27 & 0xff);
  if (bVar54) {
    local_e8[0x12] = uVar53 >> (uVar23 & 0xff);
  }
  local_e8[0x13] = uVar53 >> uVar48;
  if (bVar54) {
    local_e8[0x13] = 0;
  }
  local_e8[0x14] = uVar49 >> uVar48 | uVar38 << (uVar27 & 0xff);
  local_218 = uVar29 >> uVar48;
  if (bVar54) {
    local_e8[0x14] = uVar38 >> (uVar23 & 0xff);
  }
  local_e8[0x15] = uVar38 >> uVar48;
  if (bVar54) {
    local_200 = uVar29 >> (uVar23 & 0xff);
    local_218 = 0;
    local_e8[0xf] = 0;
    local_e8[0x15] = 0;
  }
  if (uVar9 == 0) {
    local_e8[0x14] = 0;
    local_e8[0x15] = 0;
  }
  uVar47 = *param_2;
  if (uVar48 != 0) {
    uVar17 = -uVar48 + 0x40;
    uVar32 = 0x20 - uVar17;
    bVar54 = -1 < (int)uVar27;
    uVar23 = uVar34 >> (uVar32 & 0xff) | uVar29 << (uVar17 & 0xff);
    uVar29 = uVar34 << (uVar17 & 0xff);
    if (bVar54) {
      uVar23 = uVar34 << (uVar27 & 0xff);
    }
    if (bVar54) {
      uVar29 = 0;
    }
    uVar34 = uVar21 >> (uVar32 & 0xff) | uVar53 << (uVar17 & 0xff);
    if (bVar54) {
      uVar34 = uVar21 << (uVar27 & 0xff);
    }
    uVar21 = uVar21 << (uVar17 & 0xff);
    if (bVar54) {
      uVar21 = 0;
    }
    bVar54 = CARRY4(uVar21,local_200);
    local_200 = uVar21 + local_200;
    local_218 = uVar34 + local_218 + (uint)bVar54;
    bVar54 = CARRY4(uVar29,local_e8[0xe]);
    local_e8[0xe] = uVar29 + local_e8[0xe];
    local_e8[0xf] = uVar23 + local_e8[0xf] + (uint)bVar54;
    if (uVar9 != 0) {
      uVar21 = uVar49 >> (uVar32 & 0xff) | uVar38 << (uVar17 & 0xff);
      uVar34 = -uVar48 + 0x20;
      uVar38 = uVar49 << (uVar17 & 0xff);
      if (-1 < (int)uVar34) {
        uVar38 = 0;
        uVar21 = uVar49 << (uVar34 & 0xff);
      }
      bVar54 = CARRY4(uVar38,local_e8[0x12]);
      local_e8[0x12] = uVar38 + local_e8[0x12];
      local_e8[0x13] = uVar21 + local_e8[0x13] + (uint)bVar54;
    }
  }
  local_214 = uVar44 - (uVar42 >> 6);
  local_e8[0x10] = local_200;
  local_e8[0x11] = local_218;
  local_e8[0xc] = uVar47 << uVar12;
  if (-1 < (int)uVar11) {
    local_e8[0xc] = 0;
  }
  local_e8[0xd] = uVar47 >> (uVar25 & 0xff) | param_2[1] << uVar12;
  if (-1 < (int)uVar11) {
    local_e8[0xd] = uVar47 << (uVar11 & 0xff);
  }
  puVar16 = local_e8 + uVar10 * -2 + uVar44 * 2 + 0xc;
  uVar38 = (uVar10 - uVar44) + 5;
  local_e8[0x16] = 0;
  local_e8[0x17] = 0;
  local_e8[0x18] = 0;
  uVar49 = local_1d8[uVar8 * 2 + 0x3d];
  uVar44 = local_1d8[uVar8 * 2 + 0x3c];
  local_e8[0x19] = 0;
  local_e8[0x1a] = 0;
  uVar34 = local_1d8[uVar8 * 2 + 0x3e];
  uVar21 = local_1d8[uVar8 * 2 + 0x3f];
  local_e8[0x1b] = 0;
  local_e8[0x1c] = 0;
  local_e8[0x1d] = 0;
  uVar42 = local_214;
  do {
    uVar48 = uVar10 + 2;
    if (uVar38 < uVar10 + 2) {
      uVar48 = uVar38;
    }
    uVar47 = uVar42 + uVar8;
    uVar29 = uVar8;
    if (uVar38 < uVar8) {
      uVar29 = uVar38;
    }
    if (4 < uVar47) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar47,5,&DAT_0188bbd0);
    }
    uVar27 = 0xffffffff;
    uVar53 = local_e8[uVar47 * 2 + 0xc];
    uVar17 = local_e8[uVar47 * 2 + 0xd];
    uVar23 = 0xffffffff;
    if (uVar17 <= uVar21 && (uint)(uVar34 <= uVar53) <= uVar17 - uVar21) {
      uVar23 = uVar42 + uVar10;
      if (4 < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0xffffffff,5,&DAT_0188bbd0);
      }
      uVar32 = uVar47 - 2;
      if (4 < uVar32) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar32,5,&DAT_0188bbd0);
      }
      uVar51 = local_e8[uVar23 * 2 + 0xc];
      uVar46 = local_e8[uVar23 * 2 + 0xd];
      uVar13 = LZCOUNT(uVar53) + 0x20;
      iVar20 = LZCOUNT(uVar51) + 0x20;
      if (uVar46 != 0) {
        iVar20 = LZCOUNT(uVar46);
      }
      if (uVar17 != 0) {
        uVar13 = LZCOUNT(uVar17);
      }
      if (uVar53 == 0 && uVar17 == 0) {
        uVar13 = iVar20 + 0x40;
      }
      iVar20 = LZCOUNT(uVar34) + 0x20;
      if (uVar21 != 0) {
        iVar20 = LZCOUNT(uVar21);
      }
      bVar54 = iVar20 + 0x40U < uVar13;
      uVar13 = (iVar20 + 0x40U) - uVar13;
      local_1f8 = -(uint)bVar54;
      uVar50 = -(uint)bVar54;
      uVar18 = -(uint)bVar54;
      bVar1 = uVar51 == 0;
      bVar56 = uVar53 == 0;
      bVar2 = uVar46 == 0;
      bVar3 = uVar17 == 0;
      bVar55 = uVar34 == 0;
      bVar57 = uVar21 == 0;
      bVar54 = (uint)((uint)bVar54 < (uint)((uint)bVar54 < (uint)(uVar13 < 0x80))) <= (uint)bVar54;
      uVar27 = uVar46;
      if ((bVar55 && bVar57 || (bVar1 && bVar56) && (bVar2 && bVar3)) || bVar54) {
        uVar27 = 0;
      }
      uVar23 = uVar51;
      if ((bVar55 && bVar57 || (bVar1 && bVar56) && (bVar2 && bVar3)) || bVar54) {
        uVar23 = 0;
      }
      if ((((!bVar55 || !bVar57) && ((!bVar1 || !bVar56) || (!bVar2 || !bVar3))) && !bVar54) &&
         ((uVar13 != 0x7f || uVar50 != 0) || (local_1f8 != 0 || uVar18 != 0))) {
        local_e8[0] = uVar51;
        local_ec = 0;
        local_1ec = uVar13 + 1;
        local_f0 = 0;
        bVar54 = CARRY4(local_1f8,(uint)(0xfffffffe < uVar13));
        local_1f8 = local_1f8 + (0xfffffffe < uVar13);
        local_f4 = 0;
        bVar55 = CARRY4(uVar50,(uint)bVar54);
        uVar50 = uVar50 + bVar54;
        local_f8 = 0;
        local_e8[1] = uVar46;
        local_e8[2] = uVar53;
        iVar24 = uVar18 + bVar55;
        local_e8[3] = uVar17;
        iVar20 = -(0x7f - uVar13 >> 3 & 0xc);
        uVar22 = *(uint *)((int)local_1d8 + iVar20 + 0xf0);
        uVar23 = 0x7f - uVar13 & 0x1f;
        uVar43 = uVar23 ^ 0x1f;
        uVar33 = *(uint *)((int)local_1d8 + iVar20 + 0xf4);
        uVar27 = uVar22 << uVar23;
        uVar13 = uVar33 << uVar23 | (uVar22 >> 1) >> uVar43;
        if (CARRY4(uVar18,(uint)bVar55)) {
          uVar23 = 0;
        }
        else {
          uVar18 = *(uint *)((int)local_1d8 + iVar20 + 0xf8);
          local_1e8 = *(int *)((int)local_1d8 + iVar20 + 0xfc) << uVar23 | (uVar18 >> 1) >> uVar43;
          uVar22 = local_1ec & 0x1f;
          uVar39 = uVar22 ^ 0x1f;
          local_1f4 = uVar18 << uVar23 | (uVar33 >> 1) >> uVar43;
          local_fc = 0;
          local_100 = 0;
          local_104 = 0;
          local_108 = 0;
          local_128[4] = uVar51;
          local_128[5] = uVar46;
          local_10c = uVar17;
          local_128[6] = uVar53;
          uVar23 = (local_1ec & 0x7f) >> 5;
          uVar43 = local_1d8[uVar23 + 0x32] >> uVar22 | (local_1d8[uVar23 + 0x33] << 1) << uVar39;
          uVar33 = local_1d8[uVar23 + 0x30] >> uVar22 | (local_1d8[uVar23 + 0x31] << 1) << uVar39;
          uVar39 = local_1d8[uVar23 + 0x31] >> uVar22 | (local_1d8[uVar23 + 0x32] << 1) << uVar39;
          uVar53 = local_1d8[uVar23 + 0x33] >> uVar22;
          bVar54 = (uVar34 != 0) <= uVar21;
          uVar22 = uVar21 - (uVar34 == 0);
          uVar17 = -(uint)(uVar21 == 0 && bVar54);
          local_1e4 = 0;
          uVar18 = uVar13;
          local_1f0 = uVar27;
          do {
            uVar37 = uVar33 << 1 | local_1e8 >> 0x1f;
            uVar40 = uVar39 << 1 | uVar33 >> 0x1f;
            uVar27 = uVar43 << 1 | uVar39 >> 0x1f;
            uVar53 = uVar53 << 1 | uVar43 >> 0x1f;
            uVar23 = (int)(-(uVar53 + (uVar17 <= uVar27 &&
                                      (uint)(uVar40 < uVar22 ||
                                            uVar22 - uVar40 < (uint)(uVar37 <= uVar34 - 1)) <=
                                      uVar17 - uVar27)) - (uint)(uVar21 == 0 && bVar54)) >> 0x1f;
            uVar26 = uVar21 & uVar23;
            uVar13 = uVar34 & uVar23;
            uVar33 = uVar37 - uVar13;
            bVar55 = uVar40 - uVar26 < (uint)(uVar13 <= uVar37);
            uVar39 = uVar40 - (uVar26 + (uVar13 > uVar37));
            uVar43 = uVar27 - (uVar26 >= uVar40 && !bVar55);
            uVar53 = uVar53 - (uVar27 == 0 && (uVar26 < uVar40 || bVar55) <= uVar27);
            uVar23 = uVar23 & 1;
            bVar57 = local_1ec != 0;
            local_1ec = local_1ec - 1;
            bVar55 = local_1f8 != 0;
            bVar1 = local_1f8 < bVar57;
            local_1f8 = local_1f8 - !bVar57;
            bVar57 = uVar50 == 0;
            bVar56 = (bVar55 || bVar1) <= uVar50;
            uVar50 = uVar50 - (!bVar55 && !bVar1);
            iVar24 = iVar24 - (uint)(bVar57 && bVar56);
            local_1e8 = local_1e8 << 1 | local_1f4 >> 0x1f;
            uVar27 = local_1e4 | local_1f0 << 1;
            uVar13 = uVar18 << 1 | local_1f0 >> 0x1f;
            local_1f4 = local_1f4 << 1 | uVar18 >> 0x1f;
            uVar18 = uVar13;
            local_1f0 = uVar27;
            local_1e4 = uVar23;
          } while ((local_1ec != 0 || uVar50 != 0) || (local_1f8 != 0 || iVar24 != 0));
        }
        uVar23 = uVar23 | uVar27 << 1;
        uVar27 = uVar13 << 1 | uVar27 >> 0x1f;
      }
      uVar53 = (uint)((ulonglong)uVar34 * (ulonglong)uVar23);
      uVar17 = uVar51 - uVar53;
      uVar46 = uVar46 - (uVar23 * uVar21 +
                         uVar27 * uVar34 + (int)((ulonglong)uVar34 * (ulonglong)uVar23 >> 0x20) +
                        (uint)(uVar51 < uVar53));
      do {
        uVar5 = (ulonglong)uVar44 * (ulonglong)uVar23;
        lVar4 = (ulonglong)uVar44 * (ulonglong)uVar27 + (uVar5 >> 0x20);
        uVar13 = (uint)((ulonglong)lVar4 >> 0x20);
        lVar6 = (ulonglong)uVar49 * (ulonglong)uVar23;
        uVar53 = (uint)((ulonglong)lVar6 >> 0x20);
        uVar51 = (uint)(lVar4 + lVar6);
        lVar4 = (ulonglong)uVar49 * (ulonglong)uVar27 +
                (ulonglong)
                CONCAT14(CARRY4(uVar13,uVar53) ||
                         CARRY4(uVar13 + uVar53,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                         (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
        uVar53 = (uint)((ulonglong)lVar4 >> 0x20);
        if (lVar4 == CONCAT44(uVar46,uVar17)) {
          if (uVar51 < local_e8[uVar32 * 2 + 0xd] ||
              local_e8[uVar32 * 2 + 0xd] - uVar51 <
              (uint)((uint)uVar5 <= local_e8[uVar32 * 2 + 0xc])) break;
        }
        else if (uVar53 < uVar46 || uVar46 - uVar53 < (uint)((uint)lVar4 <= uVar17)) break;
        bVar54 = uVar23 == 0;
        uVar23 = uVar23 - 1;
        uVar27 = uVar27 - bVar54;
        bVar55 = CARRY4(uVar17,uVar34);
        uVar17 = uVar17 + uVar34;
        uVar53 = uVar46 + uVar21;
        bVar54 = CARRY4(uVar46,uVar21);
        uVar46 = uVar46 + uVar21 + (uint)bVar55;
      } while (!bVar54 && !CARRY4(uVar53,(uint)bVar55));
    }
    uVar5 = (ulonglong)uVar15 * (ulonglong)uVar23;
    lVar4 = (ulonglong)uVar15 * (ulonglong)uVar27 + (uVar5 >> 0x20);
    uVar53 = (uint)((ulonglong)lVar4 >> 0x20);
    local_e8[0x26] = (uint)uVar5;
    lVar6 = (ulonglong)uVar45 * (ulonglong)uVar23;
    uVar17 = (uint)((ulonglong)lVar6 >> 0x20);
    local_e8[0x27] = (uint)(lVar4 + lVar6);
    lVar4 = (ulonglong)uVar45 * (ulonglong)uVar27 +
            (ulonglong)
            CONCAT14(CARRY4(uVar53,uVar17) ||
                     CARRY4(uVar53 + uVar17,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                     (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
    uVar32 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar5 = (uVar58 & 0xffffffff) * (ulonglong)uVar23;
    uVar46 = (uint)uVar5;
    lVar6 = (uVar58 & 0xffffffff) * (ulonglong)uVar27 + (uVar5 >> 0x20);
    uVar13 = (uint)((ulonglong)lVar6 >> 0x20);
    lVar7 = (ulonglong)uVar30 * (ulonglong)uVar23;
    uVar17 = (uint)((ulonglong)lVar7 >> 0x20);
    uVar53 = (uint)(lVar6 + lVar7);
    lVar6 = (ulonglong)uVar30 * (ulonglong)uVar27 +
            (ulonglong)
            CONCAT14(CARRY4(uVar13,uVar17) ||
                     CARRY4(uVar13 + uVar17,(uint)CARRY4((uint)lVar7,(uint)lVar6)),
                     (int)((ulonglong)(lVar6 + lVar7) >> 0x20));
    uVar17 = (uint)lVar6;
    bVar54 = CARRY4(uVar32,uVar53) || CARRY4(uVar32 + uVar53,(uint)CARRY4((uint)lVar4,uVar46));
    local_48 = lVar4 + CONCAT44(uVar53,uVar46);
    uVar5 = (ulonglong)uVar14 * (ulonglong)uVar23;
    uVar32 = (uint)uVar5;
    uVar51 = uVar17 + bVar54;
    uVar17 = (int)((ulonglong)lVar6 >> 0x20) + (uint)CARRY4(uVar17,(uint)bVar54);
    lVar4 = (ulonglong)uVar14 * (ulonglong)uVar27 + (uVar5 >> 0x20);
    uVar46 = (uint)((ulonglong)lVar4 >> 0x20);
    lVar6 = (ulonglong)uVar31 * (ulonglong)uVar23;
    uVar53 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar13 = (uint)(lVar4 + lVar6);
    local_40[0] = uVar51 + uVar32;
    lVar4 = (ulonglong)uVar31 * (ulonglong)uVar27 +
            (ulonglong)
            CONCAT14(CARRY4(uVar46,uVar53) ||
                     CARRY4(uVar46 + uVar53,(uint)CARRY4((uint)lVar6,(uint)lVar4)),
                     (int)((ulonglong)(lVar4 + lVar6) >> 0x20));
    uVar46 = (uint)lVar4;
    bVar54 = CARRY4(uVar17,uVar13) || CARRY4(uVar17 + uVar13,(uint)CARRY4(uVar51,uVar32));
    local_40[1] = uVar17 + uVar13 + (uint)CARRY4(uVar51,uVar32);
    uVar53 = uVar46 + bVar54;
    uVar5 = (ulonglong)uVar52 * (ulonglong)uVar23;
    uVar17 = (uint)uVar5;
    local_40[2] = uVar53 + uVar17;
    local_40[3] = (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar46,(uint)bVar54) +
                  (int)((ulonglong)uVar52 * (ulonglong)uVar27 + (uVar5 >> 0x20) +
                       (ulonglong)uVar19 * (ulonglong)uVar23) + (uint)CARRY4(uVar53,uVar17);
    if (5 < local_214) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(local_214,5,5,&DAT_0188bbd0);
    }
    if (uVar42 == 5) {
      local_214 = 5;
LAB_0128bacc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_214,4,&DAT_0188bbd0);
    }
    iVar35 = 0;
    uVar53 = 0;
    iVar20 = -uVar48;
    iVar24 = -uVar29;
    do {
      uVar48 = *(uint *)((int)local_e8 + iVar35 + 0x98);
      puVar41 = (uint *)((int)puVar16 + iVar35);
      uVar46 = *puVar41;
      uVar32 = *(uint *)((int)local_e8 + iVar35 + 0x9c);
      uVar29 = uVar48 + uVar53;
      uVar17 = puVar41[1];
      iVar35 = iVar35 + 8;
      uVar13 = uVar32 + CARRY4(uVar48,uVar53);
      *puVar41 = uVar46 - uVar29;
      puVar41[1] = uVar17 - (uVar13 + (uVar29 > uVar46));
      uVar53 = (uint)(CARRY4(uVar32,(uint)CARRY4(uVar48,uVar53)) ||
                     uVar17 <= uVar13 && (uint)(uVar29 <= uVar46) <= uVar17 - uVar13);
      bVar54 = iVar20 != -1;
      iVar20 = iVar20 + 1;
    } while (bVar54);
    if (uVar53 != 0) {
      iVar20 = 0;
      uVar48 = 0;
      do {
        uVar13 = *(uint *)((int)local_1d8 + iVar20 + 0x100);
        puVar41 = (uint *)((int)puVar16 + iVar20);
        uVar29 = *puVar41;
        uVar17 = *(uint *)((int)local_1d8 + iVar20 + 0x104);
        uVar53 = uVar13 + uVar48;
        uVar46 = puVar41[1];
        iVar20 = iVar20 + 8;
        uVar32 = uVar17 + CARRY4(uVar13,uVar48);
        *puVar41 = uVar53 + uVar29;
        puVar41[1] = uVar32 + uVar46 + (uint)CARRY4(uVar53,uVar29);
        uVar48 = (uint)(CARRY4(uVar17,(uint)CARRY4(uVar13,uVar48)) ||
                       (CARRY4(uVar32,uVar46) || CARRY4(uVar32 + uVar46,(uint)CARRY4(uVar53,uVar29))
                       ));
        bVar54 = iVar24 != -1;
        iVar24 = iVar24 + 1;
      } while (bVar54);
      uVar29 = local_e8[uVar47 * 2 + 0xc];
      local_e8[uVar47 * 2 + 0xc] = uVar29 + uVar48;
      local_e8[uVar47 * 2 + 0xd] = local_e8[uVar47 * 2 + 0xd] + (uint)CARRY4(uVar29,uVar48);
      bVar54 = uVar23 == 0;
      uVar23 = uVar23 - 1;
      uVar27 = uVar27 - bVar54;
    }
    if (3 < local_214) goto LAB_0128bacc;
    uVar38 = uVar38 + 1;
    puVar16 = puVar16 + -2;
    local_e8[uVar42 * 2 + 0x16] = uVar23;
    bVar54 = uVar42 == 0;
    local_e8[uVar42 * 2 + 0x17] = uVar27;
    uVar42 = uVar42 - 1;
    if (bVar54) {
      local_e8[0x26] = local_e8[0xc];
      local_e8[0x27] = local_e8[0xd];
      local_48._0_4_ = local_e8[0xe];
      local_48._4_4_ = local_e8[0xf];
      local_48 = CONCAT44(local_e8[0xf],local_e8[0xe]);
      local_40[0] = local_e8[0x10];
      local_40[1] = local_e8[0x11];
      local_40[2] = local_e8[0x12];
      local_40[3] = local_e8[0x13];
      local_40[4] = local_e8[0x14];
      uStack_2c = local_e8[0x15];
      local_e8[0x21] = local_e8[0xf] >> uVar12;
      bVar54 = -1 < (int)uVar11;
      if (bVar54) {
        local_e8[0x21] = 0;
      }
      local_e8[0x20] = local_e8[0xe] >> uVar12 | local_e8[0xf] << (uVar25 & 0xff);
      if (bVar54) {
        local_e8[0x20] = local_e8[0xf] >> (uVar11 & 0xff);
      }
      local_e8[0x23] = local_e8[0x11] >> uVar12;
      if (bVar54) {
        local_e8[0x23] = 0;
      }
      local_e8[0x22] = local_e8[0x10] >> uVar12 | local_e8[0x11] << (uVar25 & 0xff);
      if (bVar54) {
        local_e8[0x22] = local_e8[0x11] >> (uVar11 & 0xff);
      }
      local_e8[0x25] = local_e8[0x13] >> uVar12;
      if (bVar54) {
        local_e8[0x25] = 0;
      }
      local_e8[0x24] = local_e8[0x12] >> uVar12 | local_e8[0x13] << (uVar25 & 0xff);
      if (bVar54) {
        local_e8[0x24] = local_e8[0x13] >> (uVar11 & 0xff);
      }
      local_e8[0x1f] = local_e8[0xd] >> uVar12;
      if (bVar54) {
        local_e8[0x1f] = 0;
      }
      local_e8[0x1e] = local_e8[0xc] >> uVar12 | local_e8[0xd] << (uVar25 & 0xff);
      if (bVar54) {
        local_e8[0x1e] = local_e8[0xd] >> (uVar11 & 0xff);
      }
      if (uVar9 != 0) {
        iVar20 = 1;
        do {
          if (iVar20 == 4) {
            iVar24 = 4;
            uVar42 = 3;
          }
          else {
            uVar42 = iVar20 - 1;
            if (3 < uVar42) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(0xffffffff,4,&DAT_0188bbd0);
            }
            iVar24 = iVar20 + 1;
          }
          uVar38 = local_e8[iVar20 * 2 + 0x26];
          uVar49 = -uVar9 + 0x20;
          uVar44 = uVar38 << (uVar28 & 0xff);
          if (-1 < (int)uVar49) {
            uVar44 = 0;
          }
          local_e8[uVar42 * 2 + 0x1e] = local_e8[uVar42 * 2 + 0x1e] | uVar44;
          uVar44 = uVar38 >> (0x20 - uVar28 & 0xff) | local_e8[iVar20 * 2 + 0x27] << (uVar28 & 0xff)
          ;
          if (-1 < (int)uVar49) {
            uVar44 = uVar38 << (uVar49 & 0xff);
          }
          bVar54 = iVar20 != 4;
          local_e8[uVar42 * 2 + 0x1f] = local_e8[uVar42 * 2 + 0x1f] | uVar44;
          iVar20 = iVar24;
        } while (bVar54);
      }
      *param_1 = local_e8[0x16];
      param_1[1] = local_e8[0x17];
      param_1[2] = local_e8[0x18];
      param_1[3] = local_e8[0x19];
      param_1[4] = local_e8[0x1a];
      param_1[5] = local_e8[0x1b];
      param_1[6] = local_e8[0x1c];
      param_1[7] = local_e8[0x1d];
      param_1[8] = local_e8[0x1e];
      param_1[9] = local_e8[0x1f];
      param_1[10] = local_e8[0x20];
      param_1[0xb] = local_e8[0x21];
      param_1[0xc] = local_e8[0x22];
      param_1[0xd] = local_e8[0x23];
      param_1[0xe] = local_e8[0x24];
      param_1[0xf] = local_e8[0x25];
      return;
    }
  } while( true );
}

