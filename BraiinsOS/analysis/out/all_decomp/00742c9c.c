// FUN_00742c9c @ 00742c9c size=8008 calls_out=25 calls_in=2
// strings: in-addr127

void FUN_00742c9c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  byte *pbVar10;
  char cVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  code *pcVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined2 uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 uVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 *puVar30;
  uint uVar31;
  short sVar32;
  int iVar33;
  undefined4 *puVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  int iVar38;
  uint *puVar39;
  uint *puVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  bool bVar43;
  bool bVar44;
  undefined8 uVar45;
  int local_708;
  undefined *local_704;
  uint local_700;
  int local_6fc;
  int local_6f8;
  int local_6f0;
  int local_6ec;
  uint local_6e8;
  uint local_6e4;
  uint local_6e0;
  uint local_6dc;
  uint local_6b8 [4];
  undefined1 local_6a8;
  undefined1 uStack_6a7;
  undefined2 uStack_6a6;
  undefined1 local_6a4;
  undefined1 uStack_6a3;
  undefined2 uStack_6a2;
  undefined4 local_6a0;
  undefined1 uStack_69c;
  undefined4 local_69b;
  undefined1 auStack_658 [104];
  undefined1 local_5f0;
  undefined1 uStack_5ef;
  undefined1 uStack_5ee;
  undefined1 uStack_5ed;
  byte *local_5ec;
  uint local_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined2 local_5ac;
  undefined2 local_5a8;
  undefined1 auStack_5a6 [154];
  undefined4 local_50c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined1 auStack_44c [76];
  int local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined2 uStack_31c;
  ushort local_280;
  undefined2 uStack_27e;
  undefined2 uStack_27c;
  undefined2 local_27a;
  undefined2 uStack_278;
  ushort local_276;
  ushort uStack_274;
  undefined1 local_230;
  undefined1 uStack_22f;
  undefined2 uStack_22e;
  undefined2 local_22c;
  undefined1 uStack_22a;
  undefined1 uStack_229;
  ushort uStack_228;
  ushort local_226;
  ushort uStack_224;
  ushort local_222;
  ushort uStack_220;
  char local_21e;
  undefined1 uStack_21d;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  ushort local_20c;
  undefined4 local_20a;
  undefined4 local_206;
  undefined4 local_202;
  ushort local_1fe;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0;
  undefined4 local_1ec;
  undefined2 local_1e8;
  undefined2 local_1e6;
  short local_168;
  undefined2 local_166;
  int local_164;
  int local_160;
  int local_15c;
  undefined4 local_158;
  byte *pbStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  short local_144;
  ushort local_142;
  uint local_140;
  uint local_13c;
  uint local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined1 auStack_f8 [68];
  short local_b4 [34];
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x10d)) {
  case 0:
    *(undefined1 *)(param_2 + 0x43) = 1;
    puVar34 = param_2 + 0x1c;
    iVar33 = param_2[0x2f];
    FUN_016dd1aa(puVar34,param_2 + 0x30,0x4c);
    iVar28 = *(int *)(iVar33 + 0xd4);
    iVar21 = *(int *)(iVar28 + 0x14);
    if (iVar21 == 0) {
      param_2[2] = &DAT_3b9aca00;
      if ((undefined1 *)param_2[2] == &DAT_3b9aca00) goto LAB_00743190;
      goto LAB_00742d60;
    }
    sVar2 = *(short *)(param_2 + 0x1c);
    uVar1 = *(undefined1 *)(param_2 + 0x2c);
    if (sVar2 == 1) {
      iVar38 = param_2[0x1f];
      uVar23 = 0;
      if (iVar38 < 0) {
LAB_00742d38:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar23,iVar38);
      }
      sVar32 = 1;
      uVar23 = param_2[0x1e];
      if (iVar38 == 0) {
        local_6dc = 0;
        local_6e0 = 1;
      }
      else {
        local_6e0 = thunk_FUN_016d4a50(iVar38);
        local_6dc = iVar38;
        if (local_6e0 == 0) {
          uVar23 = 1;
          goto LAB_00742d38;
        }
      }
      FUN_016dd1aa(local_6e0,uVar23,iVar38);
    }
    else {
      local_6dc = param_2[0x1d];
      local_6e0 = param_2[0x1e];
      local_6a8 = (undefined1)*(undefined2 *)((int)param_2 + 0xc2);
      uStack_6a7 = (undefined1)((ushort)*(undefined2 *)((int)param_2 + 0xc2) >> 8);
      iVar38 = param_2[0x1f];
      uVar23 = param_2[0x34];
      local_5ec = (byte *)param_2[0x35];
      local_5e8 = param_2[0x36];
      uStack_5e4 = param_2[0x37];
      local_5e0 = param_2[0x38];
      local_5f0 = (undefined1)uVar23;
      uStack_5ef = (undefined1)((uint)uVar23 >> 8);
      uStack_5ee = (undefined1)((uint)uVar23 >> 0x10);
      uStack_5ed = (undefined1)((uint)uVar23 >> 0x18);
      sVar32 = 0;
    }
    sVar3 = *(short *)(param_2 + 0x25);
    if (sVar3 == 1) {
      uVar36 = param_2[0x28];
      uVar23 = 0;
      if ((int)uVar36 < 0) {
LAB_00742e3c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar23,uVar36);
      }
      uVar23 = param_2[0x27];
      if (uVar36 == 0) {
        uVar19 = 0;
        local_6e4 = 1;
      }
      else {
        local_6e4 = thunk_FUN_016d4a50(uVar36);
        uVar19 = uVar36;
        if (local_6e4 == 0) {
          uVar23 = 1;
          goto LAB_00742e3c;
        }
      }
      FUN_016dd1aa(local_6e4,uVar23,uVar36);
      local_144 = 1;
    }
    else {
      local_6e4 = param_2[0x27];
      local_280 = *(ushort *)((int)param_2 + 0x96);
      uVar19 = param_2[0x26];
      uVar36 = param_2[0x28];
      uVar23 = param_2[0x29];
      uVar29 = param_2[0x2a];
      local_144 = 0;
      local_230 = (undefined1)uVar23;
      uStack_22f = (undefined1)((uint)uVar23 >> 8);
      uStack_22e = (undefined2)((uint)uVar23 >> 0x10);
      local_22c = (undefined2)uVar29;
      uStack_22a = (undefined1)((uint)uVar29 >> 0x10);
      uStack_229 = (undefined1)((uint)uVar29 >> 0x18);
      uStack_228 = (ushort)param_2[0x2b];
      local_226 = (ushort)((uint)param_2[0x2b] >> 0x10);
    }
    local_160 = local_6e0;
    local_166 = CONCAT11(uStack_6a7,local_6a8);
    local_164 = local_6dc;
    local_158 = CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0)));
    pbStack_154 = local_5ec;
    uStack_150 = local_5e8;
    uStack_14c = uStack_5e4;
    uStack_148 = local_5e0;
    uVar4 = *(ushort *)(param_2 + 0x2e);
    local_134 = CONCAT22(uStack_22e,CONCAT11(uStack_22f,local_230));
    local_130 = CONCAT13(uStack_229,CONCAT12(uStack_22a,local_22c));
    local_12c = CONCAT22(local_226,uStack_228);
    local_13c = local_6e4;
    local_142 = local_280;
    local_128 = 1;
    local_168 = sVar32;
    local_15c = iVar38;
    local_140 = uVar19;
    local_138 = uVar36;
    if (uVar4 < 2) {
      uVar36 = FUN_01090fd0(*(undefined4 *)(iVar28 + 0x18),*(undefined4 *)(iVar28 + 0x1c),
                            *(undefined4 *)(iVar28 + 0x20),*(undefined4 *)(iVar28 + 0x24),&local_168
                           );
      uVar19 = uVar36 >> 0x19;
      uVar35 = *(uint *)(iVar28 + 0xc);
      iVar28 = *(int *)(iVar28 + 8);
      local_6e0 = 0;
      do {
        uVar36 = uVar35 & uVar36;
        uVar25 = *(uint *)(iVar28 + uVar36);
        uVar26 = uVar25 ^ uVar19 * 0x1010101;
        uVar26 = ~uVar26 & 0x80808080 & uVar26 + 0xfefefeff;
        while (uVar26 != 0) {
          uVar17 = uVar36 + ((uint)LZCOUNT(uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 |
                                           (uVar26 >> 0x10 & 0xff) << 8 | uVar26 >> 0x18) >> 3) &
                   uVar35;
          iVar38 = FUN_0103cf5c(&local_168,uVar17 * -0x118 + iVar28 + -0x118);
          uVar26 = uVar26 - 1 & uVar26;
          if (iVar38 != 0) {
            iVar28 = uVar17 * -0x118 + iVar28;
            if (uVar4 == 0) {
              if (*(undefined1 **)(iVar28 + -200) == &DAT_3b9aca00) goto LAB_00743144;
              uVar1 = *(undefined1 *)(iVar28 + -0x78);
              if (*(short *)(iVar28 + -0xb8) == 1) {
                local_6e8 = *(uint *)(iVar28 + -0xac);
                pbVar15 = (byte *)0x0;
                if ((int)local_6e8 < 0) goto LAB_00743434;
                uVar23 = *(undefined4 *)(iVar28 + -0xb0);
                uVar24 = 1;
                if (local_6e8 == 0) {
                  local_6dc = 0;
                  local_6e0 = 1;
                }
                else {
                  local_6e0 = thunk_FUN_016d4a50(local_6e8);
                  local_6dc = local_6e8;
                  if (local_6e0 == 0) {
LAB_00743678:
                    pbVar15 = &DAT_00000001;
                    goto LAB_00743434;
                  }
                }
                FUN_016dd1aa(local_6e0,uVar23,local_6e8);
              }
              else {
                local_6dc = *(uint *)(iVar28 + -0xb4);
                local_6e0 = *(int *)(iVar28 + -0xb0);
                local_70 = CONCAT22(local_70._2_2_,*(undefined2 *)(iVar28 + -0xb6));
                local_6e8 = *(uint *)(iVar28 + -0xac);
                uVar23 = *(undefined4 *)(iVar28 + -0xa8);
                local_5ec = *(byte **)(iVar28 + -0xa4);
                local_5e8 = *(uint *)(iVar28 + -0xa0);
                uStack_5e4 = *(undefined4 *)(iVar28 + -0x9c);
                local_5e0 = *(undefined4 *)(iVar28 + -0x98);
                local_5f0 = (undefined1)uVar23;
                uStack_5ef = (undefined1)((uint)uVar23 >> 8);
                uStack_5ee = (undefined1)((uint)uVar23 >> 0x10);
                uStack_5ed = (undefined1)((uint)uVar23 >> 0x18);
                uVar24 = 0;
              }
              if (*(short *)(iVar28 + -0x94) == 1) {
                local_6ec = *(int *)(iVar28 + -0x88);
                local_6fc = 0;
                if (local_6ec < 0) {
LAB_00743784:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_6fc,local_6ec);
                }
                uVar23 = *(undefined4 *)(iVar28 + -0x8c);
                if (local_6ec == 0) {
                  local_6f8 = 1;
                }
                else {
                  local_6f8 = thunk_FUN_016d4a50(local_6ec);
                  local_6fc = local_6ec;
                  if (local_6f8 == 0) {
                    local_6fc = 1;
                    goto LAB_00743784;
                  }
                }
                local_6f0._0_2_ = 1;
                FUN_016dd1aa(local_6f8,uVar23,local_6ec);
              }
              else {
                local_6fc = *(int *)(iVar28 + -0x90);
                local_6f8 = *(int *)(iVar28 + -0x8c);
                local_6ec = *(int *)(iVar28 + -0x88);
                local_6a8 = (undefined1)*(undefined2 *)(iVar28 + -0x92);
                uStack_6a7 = (undefined1)((ushort)*(undefined2 *)(iVar28 + -0x92) >> 8);
                local_280 = (ushort)*(undefined4 *)(iVar28 + -0x84);
                uStack_27e = (undefined2)((uint)*(undefined4 *)(iVar28 + -0x84) >> 0x10);
                uStack_27c = (undefined2)*(undefined4 *)(iVar28 + -0x80);
                local_27a = (undefined2)((uint)*(undefined4 *)(iVar28 + -0x80) >> 0x10);
                uStack_278 = (undefined2)*(undefined4 *)(iVar28 + -0x7c);
                local_276 = (ushort)((uint)*(undefined4 *)(iVar28 + -0x7c) >> 0x10);
                local_6f0._0_2_ = 0;
              }
              local_b4[0] = (short)local_70;
              uStack_22e = (undefined2)
                           (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0)))
                           >> 0x10);
              local_22c = SUB42(local_5ec,0);
              uStack_22a = (undefined1)((uint)local_5ec >> 0x10);
              uStack_229 = (undefined1)((uint)local_5ec >> 0x18);
              uStack_228 = (ushort)local_5e8;
              local_226 = (ushort)(local_5e8 >> 0x10);
              uStack_224 = (ushort)uStack_5e4;
              local_222 = (ushort)((uint)uStack_5e4 >> 0x10);
              uStack_220 = (ushort)local_5e0;
              local_21e = (char)((uint)local_5e0 >> 0x10);
              uStack_21d = (undefined1)((uint)local_5e0 >> 0x18);
              uVar5 = *(undefined2 *)(iVar28 + -0x72);
              piVar12 = *(int **)(iVar28 + -0xc0);
              uVar6 = *(undefined2 *)(iVar28 + -0x70);
              uVar7 = *(undefined2 *)(iVar28 + -0x74);
              uVar8 = *(undefined2 *)(iVar28 + -0x6e);
              do {
                iVar38 = *piVar12;
                bVar43 = (bool)hasExclusiveAccess(piVar12);
              } while (!bVar43);
              *piVar12 = iVar38 + 1;
              if (iVar38 < 0) goto LAB_00744c34;
              uVar29 = *(undefined4 *)(iVar28 + -0xd0);
              uVar41 = *(undefined4 *)(iVar28 + -0xcc);
              uVar42 = *(undefined4 *)(iVar28 + -200);
              uVar23 = *(undefined4 *)(iVar28 + -0xbc);
              *(undefined2 *)(param_2 + 6) = uVar24;
              param_2[7] = local_6dc;
              *(short *)((int)param_2 + 0x1a) = (short)local_70;
              param_2[8] = local_6e0;
              param_2[9] = local_6e8;
              param_2[10] = CONCAT22(uStack_22e,CONCAT11(uStack_5ef,local_5f0));
              param_2[0xb] = local_5ec;
              param_2[0xc] = local_5e8;
              param_2[0xd] = uStack_5e4;
              param_2[0xe] = local_5e0;
              *(ushort *)((int)param_2 + 0x3e) = CONCAT11(uStack_6a7,local_6a8);
              param_2[0x10] = local_6fc;
              param_2[0x11] = local_6f8;
              param_2[0x12] = local_6ec;
              param_2[0x13] = CONCAT22(uStack_27e,local_280);
              param_2[0x14] = CONCAT22(local_27a,uStack_27c);
              param_2[0x15] = CONCAT22(local_276,uStack_278);
              *(undefined2 *)((int)param_2 + 0x62) = uVar8;
              *(undefined2 *)(param_2 + 0x18) = uVar6;
            }
            else {
              if (uVar4 != 1) goto LAB_00743144;
              if (*(undefined1 **)(iVar28 + -0x60) == &DAT_3b9aca00) {
                param_2[2] = &DAT_3b9aca00;
                goto LAB_0074314c;
              }
              uVar1 = *(undefined1 *)(iVar28 + -0x10);
              if (*(short *)(iVar28 + -0x50) == 1) {
                local_6e8 = *(uint *)(iVar28 + -0x44);
                pbVar15 = (byte *)0x0;
                if ((int)local_6e8 < 0) goto LAB_00743434;
                uVar23 = *(undefined4 *)(iVar28 + -0x48);
                uVar24 = 1;
                if (local_6e8 == 0) {
                  local_6dc = 0;
                  local_6e0 = 1;
                }
                else {
                  local_6e0 = thunk_FUN_016d4a50(local_6e8);
                  local_6dc = local_6e8;
                  if (local_6e0 == 0) goto LAB_00743678;
                }
                FUN_016dd1aa(local_6e0,uVar23,local_6e8);
              }
              else {
                local_6dc = *(uint *)(iVar28 + -0x4c);
                local_6e0 = *(int *)(iVar28 + -0x48);
                local_6e8 = *(uint *)(iVar28 + -0x44);
                local_70 = CONCAT22(local_70._2_2_,*(undefined2 *)(iVar28 + -0x4e));
                uVar23 = *(undefined4 *)(iVar28 + -0x40);
                local_5ec = *(byte **)(iVar28 + -0x3c);
                local_5e8 = *(uint *)(iVar28 + -0x38);
                uStack_5e4 = *(undefined4 *)(iVar28 + -0x34);
                local_5e0 = *(undefined4 *)(iVar28 + -0x30);
                local_5f0 = (undefined1)uVar23;
                uStack_5ef = (undefined1)((uint)uVar23 >> 8);
                uStack_5ee = (undefined1)((uint)uVar23 >> 0x10);
                uStack_5ed = (undefined1)((uint)uVar23 >> 0x18);
                uVar24 = 0;
              }
              if (*(short *)(iVar28 + -0x2c) == 1) {
                local_6ec = *(int *)(iVar28 + -0x20);
                local_6fc = 0;
                if (local_6ec < 0) {
LAB_007436cc:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(local_6fc,local_6ec);
                }
                uVar23 = *(undefined4 *)(iVar28 + -0x24);
                if (local_6ec == 0) {
                  local_6f8 = 1;
                }
                else {
                  local_6f8 = thunk_FUN_016d4a50(local_6ec);
                  local_6fc = local_6ec;
                  if (local_6f8 == 0) {
                    local_6fc = 1;
                    goto LAB_007436cc;
                  }
                }
                local_6f0._0_2_ = 1;
                FUN_016dd1aa(local_6f8,uVar23,local_6ec);
              }
              else {
                local_6fc = *(int *)(iVar28 + -0x28);
                local_6f8 = *(int *)(iVar28 + -0x24);
                local_6ec = *(int *)(iVar28 + -0x20);
                local_6a8 = (undefined1)*(undefined2 *)(iVar28 + -0x2a);
                uStack_6a7 = (undefined1)((ushort)*(undefined2 *)(iVar28 + -0x2a) >> 8);
                local_280 = (ushort)*(undefined4 *)(iVar28 + -0x1c);
                uStack_27e = (undefined2)((uint)*(undefined4 *)(iVar28 + -0x1c) >> 0x10);
                uStack_27c = (undefined2)*(undefined4 *)(iVar28 + -0x18);
                local_27a = (undefined2)((uint)*(undefined4 *)(iVar28 + -0x18) >> 0x10);
                uStack_278 = (undefined2)*(undefined4 *)(iVar28 + -0x14);
                local_276 = (ushort)((uint)*(undefined4 *)(iVar28 + -0x14) >> 0x10);
                local_6f0._0_2_ = 0;
              }
              local_b4[0] = (short)local_70;
              uStack_22e = (undefined2)
                           (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0)))
                           >> 0x10);
              local_22c = SUB42(local_5ec,0);
              uStack_22a = (undefined1)((uint)local_5ec >> 0x10);
              uStack_229 = (undefined1)((uint)local_5ec >> 0x18);
              uStack_228 = (ushort)local_5e8;
              local_226 = (ushort)(local_5e8 >> 0x10);
              uStack_224 = (ushort)uStack_5e4;
              local_222 = (ushort)((uint)uStack_5e4 >> 0x10);
              uStack_220 = (ushort)local_5e0;
              local_21e = (char)((uint)local_5e0 >> 0x10);
              uStack_21d = (undefined1)((uint)local_5e0 >> 0x18);
              uVar5 = *(undefined2 *)(iVar28 + -10);
              piVar12 = *(int **)(iVar28 + -0x58);
              uVar6 = *(undefined2 *)(iVar28 + -8);
              uVar7 = *(undefined2 *)(iVar28 + -0xc);
              uVar8 = *(undefined2 *)(iVar28 + -6);
              do {
                iVar38 = *piVar12;
                bVar43 = (bool)hasExclusiveAccess(piVar12);
              } while (!bVar43);
              *piVar12 = iVar38 + 1;
              if (iVar38 < 0) {
LAB_00744c34:
                    /* WARNING: Does not return */
                pcVar18 = (code *)software_udf(0xfdee,0x744c34);
                local_230 = local_5f0;
                uStack_22f = uStack_5ef;
                (*pcVar18)();
              }
              uVar42 = *(undefined4 *)(iVar28 + -0x60);
              uVar23 = *(undefined4 *)(iVar28 + -0x54);
              uVar29 = *(undefined4 *)(iVar28 + -0x68);
              uVar41 = *(undefined4 *)(iVar28 + -100);
              param_2[7] = local_6dc;
              param_2[8] = local_6e0;
              *(short *)((int)param_2 + 0x1a) = (short)local_70;
              *(undefined2 *)(param_2 + 6) = uVar24;
              param_2[9] = local_6e8;
              param_2[10] = CONCAT22(uStack_22e,CONCAT11(uStack_5ef,local_5f0));
              param_2[0xb] = local_5ec;
              param_2[0xc] = local_5e8;
              param_2[0xd] = uStack_5e4;
              param_2[0xe] = local_5e0;
              *(ushort *)((int)param_2 + 0x3e) = CONCAT11(uStack_6a7,local_6a8);
              param_2[0x10] = local_6fc;
              param_2[0x11] = local_6f8;
              param_2[0x12] = local_6ec;
              param_2[0x13] = CONCAT22(uStack_27e,local_280);
              param_2[0x14] = CONCAT22(local_27a,uStack_27c);
              param_2[0x15] = CONCAT22(local_276,uStack_278);
              *(undefined2 *)(param_2 + 0x18) = uVar6;
              *(undefined2 *)((int)param_2 + 0x62) = uVar8;
            }
            *(undefined2 *)((int)param_2 + 0x5e) = uVar5;
            param_2[2] = uVar42;
            *(undefined2 *)(param_2 + 0x17) = uVar7;
            param_2[4] = piVar12;
            param_2[5] = uVar23;
            *(undefined1 *)(param_2 + 0x16) = uVar1;
            *(undefined2 *)(param_2 + 0xf) = (undefined2)local_6f0;
            *param_2 = uVar29;
            param_2[1] = uVar41;
            local_230 = local_5f0;
            uStack_22f = uStack_5ef;
            goto LAB_0074314c;
          }
        }
        if ((uVar25 & 0x80808080 & uVar25 << 1) != 0) goto LAB_00743568;
        local_6e0 = local_6e0 + 4;
        uVar36 = uVar36 + local_6e0;
      } while( true );
    }
    if (uVar4 != 0x1a) {
LAB_00743144:
      param_2[2] = &DAT_3b9aca00;
      goto LAB_0074314c;
    }
    if (local_144 == 0) {
      uVar36 = (uint)local_280;
    }
    local_6a8 = SUB41(&local_168,0);
    uStack_6a7 = (undefined1)((uint)&local_168 >> 8);
    uStack_6a6 = (undefined2)((uint)&local_168 >> 0x10);
    uStack_6a3 = (undefined1)uVar36;
    local_6a4 = 0;
    uVar45 = FUN_0103a344(&local_6a8);
    if ((int)uVar45 != 0) {
      FUN_00fab1e0(&local_5f0,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
      if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) != 0) {
        local_5f0 = 0x25;
        uStack_5ef = 0;
        iVar28 = thunk_FUN_016d4a50(0x44);
        if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x44);
        }
        goto LAB_00743540;
      }
      if (local_5e8 != 4) {
LAB_00743514:
        local_5e8 = 0x13;
        local_5ec = &DAT_00383951;
        local_5f0 = 0x10;
        uStack_5ef = 0;
        iVar28 = thunk_FUN_016d4a50(0x44);
        if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x44);
        }
        goto LAB_00743540;
      }
      uVar19 = (uint)*local_5ec;
      if (uVar19 - 0x41 < 0x1a) {
        uVar19 = uVar19 | 0x20;
      }
      if (uVar19 != 0x61) goto LAB_00743514;
      uVar19 = (uint)local_5ec[1];
      if (uVar19 - 0x41 < 0x1a) {
        uVar19 = uVar19 | 0x20;
      }
      if (uVar19 != 0x72) goto LAB_00743514;
      uVar19 = (uint)local_5ec[2];
      if (uVar19 - 0x41 < 0x1a) {
        uVar19 = uVar19 | 0x20;
      }
      if (uVar19 != 0x70) goto LAB_00743514;
      uVar19 = (uint)local_5ec[3];
      if (uVar19 - 0x41 < 0x1a) {
        uVar19 = uVar19 | 0x20;
      }
      if (uVar19 != 0x61) goto LAB_00743514;
      uVar45 = FUN_0103a344(&local_6a8);
      if ((int)uVar45 == 0) {
        iVar28 = FUN_01054334(&DAT_00383964,0x14);
        goto LAB_00743550;
      }
      FUN_00fab1e0(&local_5f0,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
      uVar19 = local_5e8;
      pbVar15 = local_5ec;
      if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) != 0) {
        local_5f0 = 0x25;
        uStack_5ef = 0;
        iVar28 = thunk_FUN_016d4a50(0x44);
        if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x44);
        }
        goto LAB_00743540;
      }
      FUN_0104e890(&local_5f0,local_5e8,1,1);
      uVar36 = local_5e8;
      pbVar10 = local_5ec;
      if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) == 1) {
        pbVar15 = local_5ec;
        local_6e8 = local_5e8;
LAB_00743434:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(pbVar15,local_6e8);
      }
      FUN_016dd1aa(local_5e8,pbVar15,uVar19);
      if (uVar19 == 0) {
LAB_00743b9c:
        uVar23 = FUN_01054334(&DAT_00383978,0x19);
        bVar43 = true;
        local_22c = (undefined2)uVar23;
        uStack_22a = (undefined1)((uint)uVar23 >> 0x10);
        uStack_229 = (undefined1)((uint)uVar23 >> 0x18);
        local_230 = 1;
joined_r0x00743bc0:
        if (pbVar10 != (byte *)0x0) {
          thunk_FUN_016d3fb4(uVar36);
        }
        uVar6 = local_22c;
        uVar24 = uStack_22e;
        if (!bVar43) {
          iVar38 = CONCAT22(local_22c,uStack_22e);
          local_120 = CONCAT22(uStack_228,CONCAT11(uStack_229,uStack_22a));
          uStack_11c = CONCAT22(uStack_224,local_226);
          uStack_118 = CONCAT22(uStack_220,local_222);
          if ((local_6e4 & 1) != 0) {
            local_110 = local_120;
            uStack_10c = uStack_11c;
            uStack_108 = uStack_118;
          }
          puVar37 = *(uint **)(iVar28 + 8);
          puVar40 = puVar37 + 1;
          local_6dc = ~*puVar37 & 0x80808080;
          while (iVar21 != 0) {
            puVar39 = puVar40;
            if (local_6dc == 0) {
              do {
                puVar40 = puVar39 + 1;
                uVar19 = *puVar39;
                puVar37 = puVar37 + -0x118;
                puVar39 = puVar40;
              } while ((uVar19 & 0x80808080) == 0x80808080);
              local_6dc = uVar19 & 0x80808080 ^ 0x80808080;
            }
            iVar21 = iVar21 + -1;
            sVar32 = (short)((uint)LZCOUNT(local_6dc << 0x18 | (local_6dc >> 8 & 0xff) << 0x10 |
                                           (local_6dc >> 0x10 & 0xff) << 8 | local_6dc >> 0x18) >> 3
                            );
            local_6dc = local_6dc - 1 & local_6dc;
            if ((local_6e4 & 1) == 0) {
              if ((undefined1 *)puVar37[-sVar32 * 0x46 + -0x32] != &DAT_3b9aca00) {
                iVar13 = puVar37[-sVar32 * 0x46 + -0x2f] * 0xe8;
                iVar28 = puVar37[-sVar32 * 0x46 + -0x30] + 8;
                while (iVar13 != 0) {
                  iVar13 = iVar13 + -0xe8;
                  iVar20 = iVar28 + 0xe8;
                  bVar43 = *(short *)(iVar28 + 0x48) == 2;
                  if (bVar43) {
                    iVar28 = *(int *)(iVar28 + 0x4a);
                  }
                  bVar44 = iVar28 == iVar38;
                  iVar28 = iVar20;
                  if (bVar43 && bVar44) goto LAB_00743da8;
                }
              }
            }
            else {
              local_22c = (undefined2)local_110;
              uStack_22a = (undefined1)((uint)local_110 >> 0x10);
              uStack_229 = (undefined1)((uint)local_110 >> 0x18);
              uStack_228 = (ushort)uStack_10c;
              local_226 = (ushort)((uint)uStack_10c >> 0x10);
              uStack_224 = (ushort)uStack_108;
              local_222 = (ushort)((uint)uStack_108 >> 0x10);
              local_230 = (undefined1)uVar24;
              uStack_22f = (undefined1)((ushort)uVar24 >> 8);
              uStack_22e = uVar6;
              puVar14 = (undefined1 *)puVar37[-sVar32 * 0x46 + -0x18];
              bVar43 = puVar14 != &DAT_3b9aca00;
              if (bVar43) {
                puVar14 = (undefined1 *)puVar37[-sVar32 * 0x46 + -0x15];
              }
              if (!(!bVar43 || puVar14 == (undefined1 *)0x0)) {
                iVar28 = (int)puVar14 * 0xe8;
                puVar30 = (undefined4 *)(puVar37[-sVar32 * 0x46 + -0x16] + 0x56);
                do {
                  if (*(short *)((int)puVar30 + -6) == 3) {
                    uVar23 = puVar30[-1];
                    uStack_5ef = (undefined1)uVar23;
                    uStack_5ee = (undefined1)((uint)uVar23 >> 8);
                    uStack_5ed = (undefined1)((uint)uVar23 >> 0x10);
                    local_5ec._1_3_ = (undefined3)*puVar30;
                    local_5ec = (byte *)CONCAT31(local_5ec._1_3_,(char)((uint)uVar23 >> 0x18));
                    local_5e8._1_3_ = (undefined3)puVar30[1];
                    local_5e8 = CONCAT31(local_5e8._1_3_,(char)((uint)*puVar30 >> 0x18));
                    uStack_5e4._1_3_ = (undefined3)puVar30[2];
                    uStack_5e4 = CONCAT31(uStack_5e4._1_3_,(char)((uint)puVar30[1] >> 0x18));
                    local_5e0._0_1_ = (undefined1)((uint)puVar30[2] >> 0x18);
                    iVar13 = thunk_FUN_016dd50a(&uStack_5ef,&local_230,0x10);
                    if (iVar13 == 0) goto LAB_00743da8;
                  }
                  puVar30 = puVar30 + 0x3a;
                  iVar28 = iVar28 + -0xe8;
                } while (iVar28 != 0);
              }
            }
          }
          goto LAB_00743e14;
        }
        goto LAB_0074355c;
      }
      uVar35 = 0;
      do {
        bVar16 = *(byte *)(uVar36 + uVar35);
        if (bVar16 - 0x41 < 0x1a) {
          bVar16 = bVar16 | 0x20;
        }
        *(byte *)(uVar36 + uVar35) = bVar16;
        uVar35 = uVar35 + 1;
      } while (uVar19 != uVar35);
      if (uVar19 == 3) {
        iVar38 = thunk_FUN_016dd50a(uVar36,"ip6",3);
        if (iVar38 != 0) goto LAB_00743b9c;
        uVar35 = 0;
        uVar25 = 0;
        local_704 = &DAT_003839a7;
        local_700 = 0;
        local_6e0 = 0;
        uVar19 = 0;
        do {
          cVar11 = (char)uVar19;
          uVar45 = FUN_0103a344(&local_6a8);
          if ((int)uVar45 == 0) goto LAB_007445b8;
          if ((int)((ulonglong)uVar45 >> 0x20) != 1) {
            uVar23 = 0x21;
            goto LAB_00744700;
          }
          FUN_00fab1e0(&local_5f0,(int)uVar45,1);
          if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) == 1) {
            local_5f0 = 0x25;
            uStack_5ef = 0;
            uVar23 = FUN_0103b924();
            goto LAB_00744bd4;
          }
          if (local_5e8 == 1) {
            bVar16 = *local_5ec;
            uVar27 = 1;
            if ((bVar16 != 0x2b) && (bVar16 != 0x2d)) goto LAB_00744460;
LAB_007445f0:
            uStack_5ee = uVar27;
            local_5f0 = 0x27;
            uStack_5ef = 0;
            uVar23 = FUN_0103b924();
            goto LAB_00744bd4;
          }
          if (local_5e8 == 0) {
            uVar27 = 0;
            goto LAB_007445f0;
          }
          bVar16 = *local_5ec;
LAB_00744460:
          uVar26 = local_5e8;
          pbVar15 = local_5ec;
          if (bVar16 == 0x2b) {
            pbVar15 = local_5ec + 1;
            uVar26 = local_5e8 - 1;
          }
          if (uVar26 < 3) {
            if (uVar26 == 0) {
              uVar17 = 0;
            }
            else {
              uVar22 = (uint)*pbVar15;
              uVar17 = uVar22 - 0x30;
              if (0x39 < uVar22) {
                uVar17 = (uVar22 - 0x41 & 0xffffffdf) + 10;
              }
              uVar27 = 1;
              if (0xf < uVar17) goto LAB_007445f0;
              if (uVar26 != 1) {
                uVar22 = (uint)pbVar15[1];
                uVar26 = uVar22 - 0x30;
                if (0x39 < uVar22) {
                  uVar26 = (uVar22 - 0x41 & 0xffffffdf) + 10;
                }
                if (0xf < uVar26) goto LAB_007445f0;
                uVar17 = uVar26 | uVar17 << 4;
              }
            }
          }
          else {
            uVar17 = 0;
            do {
              uVar22 = (uint)*pbVar15;
              uVar31 = uVar22 - 0x30;
              if (0xf < uVar17) {
                if (0x39 < uVar22) {
                  uVar31 = (uVar22 - 0x41 & 0xffffffde) + 10;
                }
                uVar27 = 1;
                if (uVar31 < 0x10) {
                  uVar27 = 2;
                }
                goto LAB_007445f0;
              }
              if (0x39 < uVar22) {
                uVar31 = (uVar22 - 0x41 & 0xffffffdf) + 10;
              }
              if (0xf < uVar31) {
                uVar27 = 1;
                goto LAB_007445f0;
              }
              uVar26 = uVar26 - 1;
              uVar17 = uVar31 | uVar17 << 4;
              pbVar15 = pbVar15 + 1;
            } while (uVar26 != 0);
          }
          local_6b8[3] = 0;
          local_6b8[2] = 0;
          local_6b8[1] = 0;
          uVar26 = 0x7c - uVar19 & 0x1f;
          iVar38 = -(0x7c - uVar19 >> 3 & 0xc);
          uVar19 = uVar26 ^ 0x1f;
          uVar31 = *(uint *)((int)local_6b8 + iVar38 + 4);
          uVar22 = *(uint *)((int)local_6b8 + iVar38 + 8);
          uVar35 = uVar35 | *(uint *)((int)local_6b8 + iVar38) << uVar26;
          uVar25 = uVar31 << uVar26 | (*(uint *)((int)local_6b8 + iVar38) >> 1) >> uVar19 | uVar25;
          local_6e0 = *(int *)((int)local_6b8 + iVar38 + 0xc) << uVar26 | (uVar22 >> 1) >> uVar19 |
                      local_6e0;
          local_700 = uVar22 << uVar26 | (uVar31 >> 1) >> uVar19 | local_700;
          uVar19 = (int)(char)(cVar11 + '\x04');
          local_6b8[0] = uVar17;
        } while ((uint)(int)(char)(cVar11 + '\x04') < 0x80000000);
        cVar11 = -0x80;
LAB_007445b8:
        iVar38 = FUN_0103a344(&local_6a8);
        if (iVar38 != 0) {
          uVar23 = 0x16;
          local_704 = &DAT_00383991;
          goto LAB_00744700;
        }
        uStack_220 = (ushort)((uVar35 << 0x18) >> 0x10) | (ushort)(uVar35 >> 8) & 0xff;
        local_222 = (ushort)((uVar35 >> 0x10 & 0xff) << 8) | (ushort)(byte)(uVar35 >> 0x18);
        local_6e4 = 1;
        uStack_224 = (ushort)((uVar25 << 0x18) >> 0x10) | (ushort)(uVar25 >> 8) & 0xff;
        local_226 = (ushort)((uVar25 >> 0x10 & 0xff) << 8) | (ushort)(byte)(uVar25 >> 0x18);
        uStack_228 = (ushort)((local_700 << 0x18) >> 0x10) | (ushort)(local_700 >> 8) & 0xff;
        uStack_22a = (undefined1)(local_700 >> 0x18);
        uStack_229 = (undefined1)(local_700 >> 0x10);
        uStack_22f = 1;
        uVar19 = local_6e0 << 0x18 | (local_6e0 >> 8 & 0xff) << 0x10 |
                 (local_6e0 >> 0x10 & 0xff) << 8 | local_6e0 >> 0x18;
        local_21e = cVar11;
LAB_007447bc:
        uStack_22e = (undefined2)uVar19;
        local_22c = (undefined2)(uVar19 >> 0x10);
        bVar43 = false;
        local_230 = 0;
        goto joined_r0x00743bc0;
      }
      if ((uVar19 != 7) || (iVar38 = thunk_FUN_016dd50a(uVar36,"in-addr127",7), iVar38 != 0))
      goto LAB_00743b9c;
      uVar45 = FUN_0103a344(&local_6a8);
      if ((int)uVar45 != 0) {
        FUN_00fab1e0(&local_5f0,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
        if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) == 0) {
          if (local_5e8 == 0) {
LAB_00744aec:
            uVar27 = 0;
            goto LAB_00744bc0;
          }
          if (local_5e8 == 1) {
            bVar16 = *local_5ec;
            uVar27 = 1;
            if ((bVar16 == 0x2b) || (bVar16 == 0x2d)) goto LAB_00744bc0;
          }
          else {
            bVar16 = *local_5ec;
          }
          uVar19 = local_5e8;
          pbVar15 = local_5ec;
          if (bVar16 == 0x2b) {
            pbVar15 = local_5ec + 1;
            uVar19 = local_5e8 - 1;
          }
          if (2 < uVar19) {
            uVar35 = 0;
            do {
              if (uVar19 == 0) goto LAB_007447fc;
              uVar35 = (uVar35 & 0xff) * 4 + (uVar35 & 0xff);
              if (uVar35 >> 7 != 0) goto LAB_00744c00;
              if (9 < *pbVar15 - 0x30) goto LAB_00744bbc;
              uVar35 = (uVar35 * 2 & 0xff) + (*pbVar15 - 0x30 & 0xff);
              pbVar15 = pbVar15 + 1;
              uVar19 = uVar19 - 1;
            } while ((uVar35 & 0xffffff00) == 0);
            uVar27 = 2;
            goto LAB_00744bc0;
          }
          if (uVar19 == 0) {
            uVar35 = 0;
          }
          else {
            uVar35 = *pbVar15 - 0x30;
            uVar27 = 1;
            if (9 < uVar35) goto LAB_00744bc0;
            if (uVar19 != 1) {
              if (9 < pbVar15[1] - 0x30) goto LAB_00744bc0;
              uVar35 = (pbVar15[1] - 0x30) + uVar35 * 10;
            }
          }
LAB_007447fc:
          uVar45 = FUN_0103a344(&local_6a8);
          if ((int)uVar45 == 0) {
            uVar27 = 8;
            uVar19 = 0;
            uVar26 = 0;
            uVar25 = 0;
            goto LAB_0074461c;
          }
          FUN_00fab1e0(&local_5f0,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
          if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) != 0)
          goto LAB_00743b5c;
          if (local_5e8 == 0) goto LAB_00744aec;
          if (local_5e8 == 1) {
            bVar16 = *local_5ec;
            uVar27 = 1;
            if ((bVar16 == 0x2b) || (bVar16 == 0x2d)) goto LAB_00744bc0;
          }
          else {
            bVar16 = *local_5ec;
          }
          uVar19 = local_5e8;
          pbVar15 = local_5ec;
          if (bVar16 == 0x2b) {
            pbVar15 = local_5ec + 1;
            uVar19 = local_5e8 - 1;
          }
          if (uVar19 < 3) {
            if (uVar19 == 0) {
              uVar25 = 0;
            }
            else {
              uVar25 = *pbVar15 - 0x30;
              uVar27 = 1;
              if (9 < uVar25) goto LAB_00744bc0;
              if (uVar19 != 1) {
                if (9 < pbVar15[1] - 0x30) goto LAB_00744bc0;
                uVar25 = (pbVar15[1] - 0x30) + uVar25 * 10;
              }
            }
LAB_00744954:
            uVar45 = FUN_0103a344(&local_6a8);
            if ((int)uVar45 == 0) {
              uVar27 = 0x10;
              uVar19 = 0;
              uVar26 = 0;
              goto LAB_0074461c;
            }
            FUN_00fab1e0(&local_5f0,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
            if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) != 0)
            goto LAB_00743b5c;
            if (local_5e8 == 0) goto LAB_00744aec;
            if (local_5e8 == 1) {
              bVar16 = *local_5ec;
              uVar27 = 1;
              if ((bVar16 == 0x2b) || (bVar16 == 0x2d)) goto LAB_00744bc0;
            }
            else {
              bVar16 = *local_5ec;
            }
            uVar19 = local_5e8;
            pbVar15 = local_5ec;
            if (bVar16 == 0x2b) {
              pbVar15 = local_5ec + 1;
              uVar19 = local_5e8 - 1;
            }
            if (uVar19 < 3) {
              if (uVar19 == 0) {
                uVar26 = 0;
              }
              else {
                uVar26 = *pbVar15 - 0x30;
                uVar27 = 1;
                if (9 < uVar26) goto LAB_00744bc0;
                if (uVar19 != 1) {
                  if (9 < pbVar15[1] - 0x30) goto LAB_00744bc0;
                  uVar26 = (pbVar15[1] - 0x30) + uVar26 * 10;
                }
              }
LAB_00744a84:
              uVar45 = FUN_0103a344(&local_6a8);
              if ((int)uVar45 == 0) {
                uVar27 = 0x18;
                uVar19 = 0;
                goto LAB_0074461c;
              }
              FUN_00fab1e0(&local_5f0,(int)uVar45,(int)((ulonglong)uVar45 >> 0x20));
              if (CONCAT13(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,local_5f0))) != 0)
              goto LAB_00743b5c;
              if (local_5e8 == 0) goto LAB_00744aec;
              if (local_5e8 == 1) {
                bVar16 = *local_5ec;
                uVar27 = 1;
                if ((bVar16 == 0x2b) || (bVar16 == 0x2d)) goto LAB_00744bc0;
              }
              else {
                bVar16 = *local_5ec;
              }
              uVar17 = local_5e8;
              pbVar15 = local_5ec;
              if (bVar16 == 0x2b) {
                pbVar15 = local_5ec + 1;
                uVar17 = local_5e8 - 1;
              }
              if (uVar17 < 3) {
                if (uVar17 == 0) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = *pbVar15 - 0x30;
                  uVar27 = 1;
                  if (9 < uVar19) goto LAB_00744bc0;
                  if (uVar17 != 1) {
                    if (9 < pbVar15[1] - 0x30) goto LAB_00744bc0;
                    uVar19 = (pbVar15[1] - 0x30) + uVar19 * 10;
                  }
                }
LAB_00744c1c:
                uVar19 = uVar19 << 0x18;
                uVar27 = 0x20;
                goto LAB_0074461c;
              }
              uVar19 = 0;
              do {
                if (uVar17 == 0) goto LAB_00744c1c;
                uVar19 = (uVar19 & 0xff) * 4 + (uVar19 & 0xff);
                if (uVar19 >> 7 != 0) goto LAB_00744c00;
                if (9 < *pbVar15 - 0x30) goto LAB_00744bbc;
                uVar19 = (uVar19 * 2 & 0xff) + (*pbVar15 - 0x30 & 0xff);
                pbVar15 = pbVar15 + 1;
                uVar17 = uVar17 - 1;
                uVar27 = 2;
              } while ((uVar19 & 0xffffff00) == 0);
            }
            else {
              uVar26 = 0;
              do {
                if (uVar19 == 0) goto LAB_00744a84;
                uVar26 = (uVar26 & 0xff) * 4 + (uVar26 & 0xff);
                if (uVar26 >> 7 != 0) goto LAB_00744c00;
                if (9 < *pbVar15 - 0x30) goto LAB_00744bbc;
                uVar26 = (uVar26 * 2 & 0xff) + (*pbVar15 - 0x30 & 0xff);
                pbVar15 = pbVar15 + 1;
                uVar19 = uVar19 - 1;
                uVar27 = 2;
              } while ((uVar26 & 0xffffff00) == 0);
            }
          }
          else {
            uVar25 = 0;
            do {
              if (uVar19 == 0) goto LAB_00744954;
              uVar25 = (uVar25 & 0xff) * 4 + (uVar25 & 0xff);
              if (uVar25 >> 7 != 0) goto LAB_00744c00;
              if (9 < *pbVar15 - 0x30) goto LAB_00744bbc;
              uVar25 = (uVar25 * 2 & 0xff) + (*pbVar15 - 0x30 & 0xff);
              pbVar15 = pbVar15 + 1;
              uVar19 = uVar19 - 1;
              uVar27 = 2;
            } while ((uVar25 & 0xffffff00) == 0);
          }
          goto LAB_00744bc0;
        }
LAB_00743b5c:
        local_5f0 = 0x25;
        uStack_5ef = 0;
        uVar23 = FUN_0103b924();
        goto LAB_00744bd4;
      }
      uVar19 = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar35 = 0;
      uVar27 = 0;
LAB_0074461c:
      iVar38 = FUN_0103a344(&local_6a8);
      if (iVar38 == 0) {
        local_6e4 = 0;
        uStack_22f = 0;
        uVar19 = uVar19 | (uVar26 & 0xff) << 0x10 | (uVar25 & 0xff) << 8 | uVar35 & 0xff;
        uStack_22a = uVar27;
        goto LAB_007447bc;
      }
      uVar23 = 0x1a;
      local_704 = &DAT_003839c8;
LAB_00744700:
      uVar23 = FUN_01054334(local_704,uVar23);
      goto LAB_00744be4;
    }
    local_5e8 = 0x13;
    local_5ec = &DAT_00383951;
    local_5f0 = 0x10;
    uStack_5ef = 0;
    iVar28 = thunk_FUN_016d4a50(0x44);
    if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
LAB_00743540:
    FUN_016dd1aa(iVar28,&local_5f0,0x44);
LAB_00743550:
    local_22c = (undefined2)iVar28;
    uStack_22a = (undefined1)((uint)iVar28 >> 0x10);
    uStack_229 = (undefined1)((uint)iVar28 >> 0x18);
    local_230 = 1;
    goto LAB_0074355c;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185a418);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185a418);
  case 3:
    iVar28 = param_2[0x1a];
    puVar34 = (undefined4 *)param_2[0x1b];
  }
  goto LAB_00743264;
LAB_00744bbc:
  uVar27 = 1;
  goto LAB_00744bc0;
LAB_00743da8:
  FUN_007b5860(&local_6a8,&local_168);
  FUN_007b5860(&local_5f0,puVar37 + -sVar32 * 0x46 + -0x46);
  FUN_016dd1aa(&local_230,&local_5f0,0x44);
  FUN_016dd1aa((uint)&local_280 | 2,&local_230,0x44);
  uVar9 = uStack_6a7;
  uVar27 = local_6a8;
  sVar32 = CONCAT11(uStack_6a7,local_6a8);
  FUN_016dd1aa(&local_70,(uint)&local_6a8 | 2,0x42);
  if (sVar32 == 2) {
LAB_00743e14:
    bVar43 = true;
    local_708 = 4;
    local_6e8 = 0;
  }
  else {
    local_5f0 = uVar27;
    uStack_5ef = uVar9;
    FUN_016dd1aa((uint)&local_5f0 | 2,&local_70,0x42);
    local_5a8 = 0x11;
    local_5ac = 0;
    FUN_016dd1aa(auStack_5a6,&local_280,0x46);
    local_50c = 0x15180;
    local_708 = thunk_FUN_016d4a50(0x3a0);
    if (local_708 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x3a0);
    }
    FUN_016dd1aa(local_708,&local_5f0,0xe8);
    local_104 = 4;
    uVar19 = (uint)&local_5f0 | 2;
    local_fc = 1;
    local_100 = local_708;
    local_6e8 = local_fc;
LAB_00743f30:
    if (iVar21 != 0) {
      puVar39 = puVar40;
      if (local_6dc == 0) {
        do {
          puVar40 = puVar39 + 1;
          uVar36 = *puVar39;
          puVar37 = puVar37 + -0x118;
          puVar39 = puVar40;
        } while ((uVar36 & 0x80808080) == 0x80808080);
        local_6dc = uVar36 & 0x80808080 ^ 0x80808080;
      }
      iVar21 = iVar21 + -1;
      sVar32 = (short)((uint)LZCOUNT(local_6dc << 0x18 | (local_6dc >> 8 & 0xff) << 0x10 |
                                     (local_6dc >> 0x10 & 0xff) << 8 | local_6dc >> 0x18) >> 3);
      local_6dc = local_6dc - 1 & local_6dc;
      if ((local_6e4 & 1) == 0) {
        if ((undefined1 *)puVar37[-sVar32 * 0x46 + -0x32] != &DAT_3b9aca00) {
          iVar13 = puVar37[-sVar32 * 0x46 + -0x2f] * 0xe8;
          iVar28 = puVar37[-sVar32 * 0x46 + -0x30] + 8;
          do {
            if (iVar13 == 0) goto LAB_00743f30;
            iVar13 = iVar13 + -0xe8;
            iVar20 = iVar28 + 0xe8;
            bVar43 = *(short *)(iVar28 + 0x48) == 2;
            if (bVar43) {
              iVar28 = *(int *)(iVar28 + 0x4a);
            }
            bVar44 = iVar28 == iVar38;
            iVar28 = iVar20;
          } while (!(bVar43 && bVar44));
LAB_00744084:
          FUN_007b5860(local_b4,&local_168);
          FUN_007b5860(&local_6a8,puVar37 + -sVar32 * 0x46 + -0x46);
          FUN_016dd1aa(&local_70,&local_6a8,0x44);
          FUN_016dd1aa(uVar19,&local_70,0x44);
          sVar32 = local_b4[0];
          FUN_016dd1aa(auStack_f8,(uint)local_b4 | 2,0x42);
          FUN_016dd1aa(&local_230,&local_5f0,0x46);
          if (sVar32 == 2) goto LAB_0074418c;
          local_5f0 = (undefined1)sVar32;
          uStack_5ef = (undefined1)((ushort)sVar32 >> 8);
          FUN_016dd1aa(uVar19,auStack_f8,0x42);
          local_5a8 = 0x11;
          local_5ac = 0;
          FUN_016dd1aa(auStack_5a6,&local_230,0x46);
          local_50c = 0x15180;
          if (local_6e8 == local_104) {
            FUN_01098228(&local_104,local_6e8,1,4,0xe8);
            local_708 = local_100;
          }
          FUN_016dd1aa(local_6e8 * 0xe8 + local_708,&local_5f0,0xe8);
          local_fc = local_6e8 + 1;
          local_6e8 = local_fc;
        }
      }
      else {
        local_6c = local_110;
        uStack_68 = uStack_10c;
        uStack_64 = uStack_108;
        puVar14 = (undefined1 *)puVar37[-sVar32 * 0x46 + -0x18];
        bVar43 = puVar14 != &DAT_3b9aca00;
        if (bVar43) {
          puVar14 = (undefined1 *)puVar37[-sVar32 * 0x46 + -0x15];
        }
        local_70 = iVar38;
        if (bVar43 && puVar14 != (undefined1 *)0x0) {
          iVar28 = (int)puVar14 * 0xe8;
          puVar30 = (undefined4 *)(puVar37[-sVar32 * 0x46 + -0x16] + 0x56);
          do {
            if (*(short *)((int)puVar30 + -6) == 3) {
              uVar23 = puVar30[-1];
              uVar29 = *puVar30;
              uStack_6a7 = (undefined1)uVar23;
              uStack_6a6 = (undefined2)((uint)uVar23 >> 8);
              local_6a4 = (undefined1)((uint)uVar23 >> 0x18);
              uStack_6a3 = (undefined1)uVar29;
              uStack_6a2 = (undefined2)((uint)uVar29 >> 8);
              local_69b = puVar30[2];
              local_6a0._1_3_ = (undefined3)puVar30[1];
              local_6a0 = CONCAT31(local_6a0._1_3_,(char)((uint)uVar29 >> 0x18));
              uStack_69c = (undefined1)((uint)puVar30[1] >> 0x18);
              iVar13 = thunk_FUN_016dd50a(&uStack_6a7,&local_70,0x10);
              if (iVar13 == 0) goto LAB_00744084;
            }
            puVar30 = puVar30 + 0x3a;
            iVar28 = iVar28 + -0xe8;
          } while (iVar28 != 0);
        }
      }
      goto LAB_00743f30;
    }
LAB_0074418c:
    bVar43 = local_104 == 0;
  }
  uVar45 = FUN_0105acec(local_6e8 * 0xe8);
  iVar28 = (int)((ulonglong)uVar45 >> 0x20);
  piVar12 = (int *)uVar45;
  FUN_016dd1aa(piVar12 + 2,local_708,local_6e8 * 0xe8);
  if (!bVar43) {
    thunk_FUN_016d3fb4(local_708);
  }
  if (iVar28 == 0) {
    param_2[2] = &DAT_3b9aca00;
    DataMemoryBarrier(0xb);
    do {
      iVar28 = *piVar12;
      bVar43 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar43);
    *piVar12 = iVar28 + -1;
    if (iVar28 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01059b88(piVar12,0);
    }
    goto LAB_00743574;
  }
  if (sVar2 == 0) {
    uVar23 = *puVar34;
    local_5ec = (byte *)param_2[0x1d];
    local_5e8 = param_2[0x1e];
    uStack_5e4 = param_2[0x1f];
    local_5f0 = (undefined1)uVar23;
    uStack_5ef = (undefined1)((uint)uVar23 >> 8);
    uStack_5ee = (undefined1)((uint)uVar23 >> 0x10);
    uStack_5ed = (undefined1)((uint)uVar23 >> 0x18);
    local_5e0 = param_2[0x20];
    uStack_5dc = param_2[0x21];
    uStack_5d8 = param_2[0x22];
    uStack_5d4 = param_2[0x23];
    uStack_5d0 = param_2[0x24];
  }
  else {
    FUN_015049b0((uint)&local_5f0 | 4,param_2[0x1e],param_2[0x1f]);
    local_5f0 = 1;
    uStack_5ef = 0;
  }
  if (sVar3 == 0) {
    uStack_274 = *(ushort *)((int)param_2 + 0xa2);
    uVar29 = param_2[0x29];
    uVar23 = param_2[0x2a];
    local_6a0 = param_2[0x2b];
    local_280 = (ushort)*(undefined4 *)((int)param_2 + 0x96);
    uStack_27e = (undefined2)((uint)*(undefined4 *)((int)param_2 + 0x96) >> 0x10);
    uStack_27c = (undefined2)*(undefined4 *)((int)param_2 + 0x9a);
    local_27a = (undefined2)((uint)*(undefined4 *)((int)param_2 + 0x9a) >> 0x10);
    uStack_278 = (undefined2)*(undefined4 *)((int)param_2 + 0x9e);
    local_276 = (ushort)((uint)*(undefined4 *)((int)param_2 + 0x9e) >> 0x10);
    local_6a8 = (undefined1)uVar29;
    uStack_6a7 = (undefined1)((uint)uVar29 >> 8);
    uStack_6a6 = (undefined2)((uint)uVar29 >> 0x10);
    local_6a4 = (undefined1)uVar23;
    uStack_6a3 = (undefined1)((uint)uVar23 >> 8);
    uStack_6a2 = (undefined2)((uint)uVar23 >> 0x10);
  }
  else {
    FUN_015049b0(&local_230,param_2[0x27],param_2[0x28]);
    uStack_27e = CONCAT11(uStack_22f,local_230);
    local_276 = uStack_228;
    uStack_274 = local_226;
    local_27a = local_22c;
    uStack_278 = (undefined2)(CONCAT13(uStack_229,CONCAT12(uStack_22a,local_22c)) >> 0x10);
    uStack_27c = uStack_22e;
  }
  uStack_22e = CONCAT11(uStack_5ed,uStack_5ee);
  local_230 = local_5f0;
  uStack_22f = uStack_5ef;
  local_22c = SUB42(local_5ec,0);
  uStack_22a = (undefined1)((uint)local_5ec >> 0x10);
  uStack_229 = (undefined1)((uint)local_5ec >> 0x18);
  uStack_228 = (ushort)local_5e8;
  local_226 = (ushort)(local_5e8 >> 0x10);
  uStack_224 = (ushort)uStack_5e4;
  local_222 = (ushort)((uint)uStack_5e4 >> 0x10);
  uStack_220 = (ushort)local_5e0;
  local_21e = (char)((uint)local_5e0 >> 0x10);
  uStack_21d = (undefined1)((uint)local_5e0 >> 0x18);
  uStack_21c = uStack_5dc;
  uStack_218 = uStack_5d8;
  uStack_214 = uStack_5d4;
  uStack_210 = uStack_5d0;
  local_20a = CONCAT22(uStack_27e,local_280);
  local_206 = CONCAT22(local_27a,uStack_27c);
  local_202 = CONCAT22(local_276,uStack_278);
  local_1fc = CONCAT22(uStack_6a6,CONCAT11(uStack_6a7,local_6a8));
  local_1e8 = 0x1a;
  local_1ec = param_2[0x2d];
  local_1e6 = *(undefined2 *)((int)param_2 + 0xba);
  local_1f8 = CONCAT22(uStack_6a2,CONCAT11(uStack_6a3,local_6a4));
  local_20c = (ushort)(sVar3 != 0);
  local_1fe = uStack_274;
  local_1f4 = local_6a0;
  local_1f0 = uVar1;
  FUN_01093a0c(&local_5f0,&local_230,piVar12,iVar28);
  FUN_016dd1aa(param_2,&local_5f0,0x68);
LAB_0074314c:
  iVar28 = 0;
  if (local_168 != 0) {
    iVar28 = local_164;
  }
  if (local_168 != 0 && iVar28 != 0) {
    thunk_FUN_016d3fb4(local_160);
  }
  uVar19 = 0;
  if (local_144 != 0) {
    uVar19 = local_140;
  }
  if (!(local_144 != 0 && uVar19 != 0)) {
    if ((undefined1 *)param_2[2] != &DAT_3b9aca00) goto LAB_00742d60;
    goto LAB_00743190;
  }
  thunk_FUN_016d3fb4(local_13c);
  if ((undefined1 *)param_2[2] == &DAT_3b9aca00) goto LAB_00743190;
  goto LAB_00742d60;
LAB_00744c00:
  uVar27 = 1;
  if (*pbVar15 - 0x30 < 10) {
    uVar27 = 2;
  }
LAB_00744bc0:
  uStack_5ee = uVar27;
  local_5f0 = 0x27;
  uStack_5ef = 0;
  uVar23 = FUN_0103b924();
LAB_00744bd4:
  FUN_016dd1aa(uVar23,&local_5f0,0x44);
LAB_00744be4:
  local_22c = (undefined2)uVar23;
  uStack_22a = (undefined1)((uint)uVar23 >> 0x10);
  uStack_229 = (undefined1)((uint)uVar23 >> 0x18);
  local_230 = 1;
  thunk_FUN_016d3fb4(uVar36);
LAB_0074355c:
  FUN_006495dc(&local_22c);
LAB_00743568:
  param_2[2] = &DAT_3b9aca00;
LAB_00743574:
  iVar28 = 0;
  if (local_168 != 0) {
    iVar28 = local_164;
  }
  if (local_168 != 0 && iVar28 != 0) {
    thunk_FUN_016d3fb4(local_160);
  }
  uVar19 = 0;
  if (local_144 != 0) {
    uVar19 = local_140;
  }
  if (local_144 != 0 && uVar19 != 0) {
    thunk_FUN_016d3fb4(local_13c);
    if ((undefined1 *)param_2[2] == &DAT_3b9aca00) goto LAB_00743190;
  }
  else if ((undefined1 *)param_2[2] == &DAT_3b9aca00) {
LAB_00743190:
    *(undefined1 *)(param_2 + 0x43) = 0;
    FUN_016dd1aa(&local_6a8,puVar34,0x4c);
    local_70 = *(int *)(iVar33 + 200);
    local_6c = *(undefined4 *)(iVar33 + 0xcc);
    uStack_68 = *(undefined4 *)(iVar33 + 0xd0);
    FUN_016dd1aa(&local_280,puVar34,0x4c);
    FUN_0071ddc8(&local_230,iVar33);
    FUN_016dd1aa(auStack_44c,&local_6a8,0x4c);
    local_400 = local_70;
    uStack_3fc = local_6c;
    uStack_3f8 = uStack_68;
    FUN_016dd1aa(&local_5e8,&local_230,200);
    local_5ec = (byte *)0x0;
    uStack_31c = 0;
    local_454 = 4;
    local_5f0 = 0;
    uStack_5ef = 0;
    uStack_5ee = 0;
    uStack_5ed = 0;
    local_450 = 0;
    local_458 = 0;
    iVar28 = thunk_FUN_016d4a50(0x370);
    if (iVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x370);
    }
    FUN_016dd1aa(iVar28,&local_5f0,0x370);
    puVar34 = &DAT_0185a3f8;
    param_2[0x1a] = iVar28;
    param_2[0x1b] = &DAT_0185a3f8;
LAB_00743264:
    (*(code *)puVar34[3])(&local_5f0,iVar28,param_3);
    if (local_5e8 == 0x3b9aca01) {
      *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
      *(undefined1 *)((int)param_2 + 0x10d) = 3;
      return;
    }
    FUN_016dd1aa(auStack_658,&local_5f0,0x68);
    puVar34 = (undefined4 *)param_2[0x1b];
    uVar23 = param_2[0x1a];
    pcVar18 = (code *)*puVar34;
    if (pcVar18 != (code *)0x0) {
      (*pcVar18)(uVar23);
    }
    if (puVar34[1] != 0) {
      thunk_FUN_016d3fb4(uVar23);
    }
    cVar11 = *(char *)(param_2 + 0x43);
    goto joined_r0x007432f4;
  }
LAB_00742d60:
  FUN_016dd1aa(auStack_658,param_2,0x68);
  cVar11 = *(char *)(param_2 + 0x43);
joined_r0x007432f4:
  if (cVar11 != '\0') {
    iVar28 = 0;
    if (*(short *)(param_2 + 0x1c) != 0) {
      iVar28 = param_2[0x1d];
    }
    if (*(short *)(param_2 + 0x1c) != 0 && iVar28 != 0) {
      thunk_FUN_016d3fb4(param_2[0x1e]);
    }
    iVar28 = 0;
    if (*(short *)(param_2 + 0x25) != 0) {
      iVar28 = param_2[0x26];
    }
    if (*(short *)(param_2 + 0x25) != 0 && iVar28 != 0) {
      thunk_FUN_016d3fb4(param_2[0x27]);
    }
  }
  *(undefined1 *)(param_2 + 0x43) = 0;
  FUN_016dd1aa(param_1,auStack_658,0x68);
  *(undefined1 *)((int)param_2 + 0x10d) = 1;
  return;
}

