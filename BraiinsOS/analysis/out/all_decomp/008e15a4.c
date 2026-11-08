// FUN_008e15a4 @ 008e15a4 size=1848 calls_out=11 calls_in=2
// strings: 

undefined1 FUN_008e15a4(int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint *puVar27;
  uint *puVar28;
  int *piVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int *piVar32;
  undefined4 uVar33;
  int iVar34;
  int iVar35;
  uint *puVar36;
  int iVar37;
  undefined4 uVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  int local_20c;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  uint *local_198;
  int local_194;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_153;
  undefined3 uStack_14f;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  uint *local_118;
  int local_114;
  undefined4 uStack_110;
  int local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint *local_f8;
  int local_f4;
  undefined4 uStack_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_cc;
  int local_c8;
  uint local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  uint *local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint *local_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined3 uStack_64;
  
  iVar35 = *(int *)(param_1 + 0xc);
  puVar36 = (uint *)(iVar35 + 0x98);
  uVar10 = *(uint *)(iVar35 + 0x98);
  if ((uVar10 < 0xfffffff0) && ((uVar10 & 8) == 0)) {
    if (*puVar36 != uVar10) {
      ClearExclusiveLocal();
      goto LAB_008e15f8;
    }
    bVar39 = (bool)hasExclusiveAccess(puVar36);
    if (!bVar39) goto LAB_008e15f8;
    *puVar36 = uVar10 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_008e15f8:
    FUN_0127d66c(puVar36);
  }
  FUN_0128236c(puVar36);
  FUN_0128236c((uint)puVar36 | 1);
  DataMemoryBarrier(0xb);
  puVar19 = *(uint **)(iVar35 + 0xa0);
  uVar22 = 0;
  if (puVar19 == (uint *)&SUB_00000002) {
LAB_008e1c8c:
    FUN_01282570(puVar36);
    FUN_01282570((uint)puVar36 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar10 = *puVar36;
      bVar39 = (bool)hasExclusiveAccess(puVar36);
    } while (!bVar39);
    *puVar36 = uVar10 - 0x10;
    if ((uVar10 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar36);
    }
    return uVar22;
  }
  bVar39 = *(char *)(iVar35 + 0xe4) != '\0';
  if (!bVar39) {
    uStack_64 = (undefined3)((uint)*(undefined4 *)(iVar35 + 0xe8) >> 8);
    uStack_68 = *(undefined4 *)(iVar35 + 0xe5);
  }
  uVar20 = *(uint *)(iVar35 + 0x174);
  uVar11 = 0;
  bVar41 = 0x3ffffffe < uVar20;
  bVar40 = uVar20 == 0x3fffffff;
  uVar10 = uVar20 * 4;
  if (uVar20 < 0x40000000) {
    bVar41 = 0x7ffffffb < uVar10;
    bVar40 = uVar10 == 0x7ffffffc;
  }
  if (bVar41 && !bVar40) {
LAB_008e1668:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar11,uVar10);
  }
  uVar11 = *(undefined4 *)(iVar35 + 0xec);
  uVar12 = *(undefined4 *)(iVar35 + 0xb4);
  uVar21 = *(undefined4 *)(iVar35 + 0xb8);
  uVar23 = *(undefined4 *)(iVar35 + 0xbc);
  uVar24 = *(undefined4 *)(iVar35 + 0xc0);
  uVar2 = *(undefined1 *)(iVar35 + 0xc4);
  uVar25 = *(undefined4 *)(iVar35 + 0x170);
  uVar3 = *(undefined1 *)(iVar35 + 0xf4);
  uVar26 = *(undefined4 *)(iVar35 + 0xf0);
  uVar42 = *(undefined4 *)(iVar35 + 0xcc);
  uVar43 = *(undefined4 *)(iVar35 + 0xd0);
  uVar44 = *(undefined4 *)(iVar35 + 0xd4);
  uVar45 = *(undefined4 *)(iVar35 + 0xd8);
  uVar46 = *(undefined4 *)(iVar35 + 0xdc);
  uVar47 = *(undefined4 *)(iVar35 + 0xe0);
  uVar38 = *(undefined4 *)(iVar35 + 200);
  iVar37 = *(int *)(iVar35 + 0xa4);
  uVar33 = *(undefined4 *)(iVar35 + 0xa8);
  iVar34 = *(int *)(iVar35 + 0xac);
  uVar30 = *(undefined4 *)(iVar35 + 0xb0);
  if (uVar10 == 0) {
    iVar13 = 4;
    local_1b4 = 0;
  }
  else {
    iVar13 = thunk_FUN_016d4a50(uVar10);
    local_1b4 = uVar20;
    if (iVar13 == 0) {
      uVar11 = 4;
      goto LAB_008e1668;
    }
  }
  FUN_016dd1aa(iVar13,uVar25,uVar10);
  uVar10 = *(uint *)(iVar35 + 0x100);
  uVar25 = 0xb;
  uVar14 = *(undefined4 *)(iVar35 + 0xf8);
  uVar15 = *(undefined4 *)(iVar35 + 0x184);
  bVar40 = (1 << (uVar10 & 0xff) & 0xbU) == 0;
  uVar22 = *(undefined1 *)(iVar35 + 0x18c);
  uVar31 = *(undefined4 *)(iVar35 + 0x180);
  if (bVar40) {
    local_22c = *(undefined4 *)(iVar35 + 0x104);
    uVar25 = *(undefined4 *)(iVar35 + 0x108);
  }
  iVar16 = *(int *)(iVar35 + 0x10c);
  uVar48 = *(undefined4 *)(iVar35 + 0xfc);
  if (bVar40) {
    local_230 = uVar25;
  }
  if (iVar16 == 4) {
    local_20c = *(int *)(iVar35 + 0x118);
    uVar25 = *(undefined4 *)(iVar35 + 0x114);
    if (local_20c == 0) {
      local_1b0 = 1;
    }
    else {
      local_1b0 = thunk_FUN_016d4a50();
      if (local_1b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_20c);
      }
    }
    FUN_016dd1aa(local_1b0,uVar25,local_20c);
    local_1ac = local_20c;
  }
  else {
    local_1ac = *(int *)(iVar35 + 0x110);
    local_1b0 = *(int *)(iVar35 + 0x114);
    local_20c = *(int *)(iVar35 + 0x118);
    local_228 = *(undefined4 *)(iVar35 + 0x11c);
  }
  iVar17 = *(int *)(iVar35 + 0x160);
  if (iVar17 != 0) {
    local_220 = *(undefined4 *)(iVar35 + 0x164);
    local_224 = *(undefined4 *)(iVar35 + 0x168);
  }
  piVar32 = *(int **)(iVar35 + 0x178);
  uVar4 = *(undefined1 *)(iVar35 + 399);
  uVar5 = *(undefined1 *)(iVar35 + 0x18e);
  uVar6 = *(undefined1 *)(iVar35 + 0x18d);
  do {
    iVar18 = *piVar32;
    bVar40 = (bool)hasExclusiveAccess(piVar32);
  } while (!bVar40);
  *piVar32 = iVar18 + 1;
  if (-1 < iVar18) {
    piVar29 = *(int **)(iVar35 + 0x17c);
    do {
      iVar18 = *piVar29;
      bVar40 = (bool)hasExclusiveAccess(piVar29);
    } while (!bVar40);
    *piVar29 = iVar18 + 1;
    if (-1 < iVar18) {
      FUN_008e7060(&local_198,iVar35 + 0x120);
      local_a8 = local_198;
      iStack_a4 = local_194;
      uStack_a0 = local_190;
      iStack_9c = local_18c;
      local_98 = local_188;
      uStack_94 = local_184;
      uStack_90 = local_180;
      uStack_8c = local_17c;
      FUN_008e7060(&local_88,iVar35 + 0x140);
      local_f8 = local_88;
      local_f4 = iStack_84;
      uStack_f0 = uStack_80;
      local_ec = iStack_7c;
      local_e8 = local_78;
      uStack_e4 = uStack_74;
      uStack_e0 = uStack_70;
      uStack_dc = uStack_6c;
      local_134 = local_22c;
      uStack_130 = local_230;
      local_11c = local_228;
      local_120 = local_20c;
      local_124 = local_1b0;
      local_153 = uStack_68;
      uStack_14f = uStack_64;
      local_cc = local_1b4;
      local_128 = local_1ac;
      local_b0 = *(undefined4 *)(iVar35 + 0x188);
      local_118 = local_a8;
      local_114 = iStack_a4;
      uStack_110 = uStack_a0;
      local_10c = iStack_9c;
      local_108 = local_98;
      uStack_104 = uStack_94;
      uStack_100 = uStack_90;
      uStack_fc = uStack_8c;
      local_d4 = local_220;
      local_d0 = local_224;
      local_198 = puVar19;
      local_194 = iVar37;
      local_190 = uVar33;
      local_18c = iVar34;
      local_188 = uVar30;
      local_184 = uVar12;
      local_180 = uVar21;
      local_17c = uVar23;
      local_178 = uVar24;
      local_174 = uVar2;
      local_170 = uVar38;
      local_16c = uVar42;
      local_168 = uVar43;
      local_164 = uVar44;
      local_160 = uVar45;
      local_15c = uVar46;
      local_158 = uVar47;
      local_154 = bVar39;
      local_14c = uVar11;
      local_148 = uVar26;
      local_144 = uVar3;
      local_140 = uVar14;
      local_13c = uVar48;
      local_138 = uVar10;
      local_12c = iVar16;
      local_d8 = iVar17;
      local_c8 = iVar13;
      local_c4 = uVar20;
      local_c0 = piVar32;
      local_bc = piVar29;
      local_b8 = uVar31;
      local_b4 = uVar15;
      local_ac = uVar22;
      local_ab = uVar6;
      local_aa = uVar5;
      local_a9 = uVar4;
      if (local_1b4 != 0) {
        thunk_FUN_016d3fb4(iVar13);
      }
      if ((iVar16 == 4) && (local_1ac != 0)) {
        thunk_FUN_016d3fb4(local_1b0);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar35 = *piVar32;
        bVar39 = (bool)hasExclusiveAccess(piVar32);
      } while (!bVar39);
      *piVar32 = iVar35 + -1;
      if (iVar35 == 1) {
        DataMemoryBarrier(0xb);
        FUN_009ba06c(piVar32);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar35 = *piVar29;
        bVar39 = (bool)hasExclusiveAccess(piVar29);
      } while (!bVar39);
      *piVar29 = iVar35 + -1;
      if (iVar35 == 1) {
        DataMemoryBarrier(0xb);
        FUN_009ba06c(piVar29);
      }
      iVar35 = local_114;
      if (local_114 != 0) {
        if (local_10c != 0) {
          puVar28 = local_118 + 1;
          uVar10 = ~*local_118 & 0x80808080;
          puVar19 = local_118;
          iVar34 = local_10c;
          do {
            puVar27 = puVar28;
            if (uVar10 == 0) {
              do {
                puVar28 = puVar27 + 1;
                uVar10 = *puVar27;
                puVar19 = puVar19 + -8;
                puVar27 = puVar28;
              } while ((uVar10 & 0x80808080) == 0x80808080);
              uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
            }
            uVar20 = uVar10 >> 8;
            uVar7 = uVar10 >> 0x10;
            uVar8 = uVar10 >> 0x18;
            uVar9 = uVar10 << 0x18;
            uVar10 = uVar10 - 1 & uVar10;
            uVar20 = LZCOUNT(uVar9 | (uVar20 & 0xff) << 0x10 | (uVar7 & 0xff) << 8 | uVar8) & 0x38;
            iVar34 = iVar34 + -1;
            piVar32 = *(int **)((int)puVar19 + (-4 - uVar20));
            DataMemoryBarrier(0xb);
            do {
              iVar37 = *piVar32;
              bVar39 = (bool)hasExclusiveAccess(piVar32);
            } while (!bVar39);
            *piVar32 = iVar37 + -1;
            if (iVar37 == 1) {
              DataMemoryBarrier(0xb);
              FUN_009ba06c(*(undefined4 *)((int)puVar19 + (-4 - uVar20)));
            }
          } while (iVar34 != 0);
        }
        if (iVar35 * 9 != -0xd) {
          thunk_FUN_016d3fb4(local_118 + iVar35 * -2 + -2);
        }
      }
      iVar35 = local_f4;
      if (local_f4 != 0) {
        if (local_ec != 0) {
          puVar28 = local_f8 + 1;
          uVar10 = ~*local_f8 & 0x80808080;
          puVar19 = local_f8;
          iVar34 = local_ec;
          do {
            puVar27 = puVar28;
            if (uVar10 == 0) {
              do {
                puVar28 = puVar27 + 1;
                uVar10 = *puVar27;
                puVar19 = puVar19 + -8;
                puVar27 = puVar28;
              } while ((uVar10 & 0x80808080) == 0x80808080);
              uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
            }
            uVar20 = uVar10 >> 8;
            uVar7 = uVar10 >> 0x10;
            uVar8 = uVar10 >> 0x18;
            uVar9 = uVar10 << 0x18;
            uVar10 = uVar10 - 1 & uVar10;
            uVar20 = LZCOUNT(uVar9 | (uVar20 & 0xff) << 0x10 | (uVar7 & 0xff) << 8 | uVar8) & 0x38;
            iVar34 = iVar34 + -1;
            piVar32 = *(int **)((int)puVar19 + (-4 - uVar20));
            DataMemoryBarrier(0xb);
            do {
              iVar37 = *piVar32;
              bVar39 = (bool)hasExclusiveAccess(piVar32);
            } while (!bVar39);
            *piVar32 = iVar37 + -1;
            if (iVar37 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00784894(*(undefined4 *)((int)puVar19 + (-4 - uVar20)));
            }
          } while (iVar34 != 0);
        }
        if (iVar35 * 9 != -0xd) {
          thunk_FUN_016d3fb4(local_f8 + iVar35 * -2 + -2);
        }
      }
      goto LAB_008e1c8c;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x8e1ce0);
  (*pcVar1)();
}

