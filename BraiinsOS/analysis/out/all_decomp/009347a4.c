// FUN_009347a4 @ 009347a4 size=6324 calls_out=21 calls_in=1
// strings: enabled | frequency | voltage | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009347a4(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 uVar19;
  int iVar20;
  int **ppiVar21;
  int **ppiVar22;
  int *piVar23;
  undefined4 *puVar24;
  undefined1 *puVar25;
  int *piVar26;
  uint uVar27;
  int iVar28;
  undefined1 *puVar29;
  int *piVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  int iVar33;
  uint uVar34;
  undefined4 *puVar35;
  undefined4 uVar36;
  undefined4 *puVar37;
  uint uVar38;
  uint uVar39;
  undefined4 *puVar40;
  undefined1 uVar41;
  ushort *puVar42;
  ushort *puVar43;
  int *piVar44;
  int iVar45;
  undefined4 *puVar46;
  bool bVar47;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined *local_27c;
  undefined *local_278;
  undefined4 *local_22c;
  int *local_228;
  undefined4 *local_224;
  int *local_220;
  uint local_21c;
  int *local_218;
  int local_20c;
  uint local_1fc;
  int local_1f4;
  undefined4 local_1f0 [4];
  undefined4 *local_1e0;
  undefined4 *local_1dc;
  int local_1d8;
  undefined4 *local_1d4;
  int local_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int *local_1b8;
  uint local_1b4;
  int local_1b0;
  undefined4 *local_1a8;
  int iStack_1a4;
  int *piStack_1a0;
  undefined4 *puStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int *piStack_180;
  undefined4 *puStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  uint local_168;
  int *local_164;
  undefined4 *puStack_160;
  int local_15c;
  undefined4 *local_158;
  undefined4 *local_154;
  int *local_150;
  undefined4 *local_14c;
  undefined8 local_148;
  int *local_140;
  undefined4 *local_13c;
  undefined8 local_138;
  int local_130;
  int iStack_12c;
  uint local_128;
  int *local_124;
  undefined4 *local_120;
  int local_11c;
  undefined4 *local_118;
  int local_114;
  int local_110;
  int local_10c;
  int *local_108;
  int *local_104;
  uint local_100;
  int *local_fc;
  int local_f8;
  int local_f0 [8];
  undefined4 *local_d0;
  undefined4 local_cc;
  int *local_c8;
  undefined4 *local_c4;
  int local_c0;
  int iStack_bc;
  int *local_b8;
  undefined4 *local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 *local_a0;
  undefined4 *puStack_9c;
  int *piStack_98;
  undefined4 *puStack_94;
  int local_90;
  int iStack_8c;
  int *piStack_88;
  undefined4 *puStack_84;
  undefined4 *local_80;
  undefined4 *puStack_7c;
  int *piStack_78;
  undefined4 *puStack_74;
  int local_70;
  int iStack_6c;
  int *piStack_68;
  undefined4 *puStack_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  int *local_58;
  undefined4 *local_54;
  int local_50;
  int iStack_4c;
  int *piStack_48;
  undefined4 *puStack_44;
  undefined1 uStack_39;
  
  local_1d8 = *param_2;
  if (local_1d8 < 0) {
    FUN_008f73e8(&local_d0,param_2,&uStack_39,&DAT_01867088);
    *param_1 = local_d0;
    param_1[1] = local_cc;
    param_1[2] = local_c8;
    param_1[3] = local_c4;
    param_1[4] = local_c0;
    param_1[5] = iStack_bc;
    param_1[6] = local_b8;
    param_1[7] = local_b4;
    param_1[8] = iStack_b0;
    param_1[9] = iStack_ac;
    param_1[10] = iStack_a8;
    param_1[0xb] = iStack_a4;
    return;
  }
  local_1e0 = (undefined4 *)param_2[1];
  iVar15 = param_2[2];
  local_1f0[0] = 0x80000015;
  puVar8 = local_1e0 + iVar15 * 8;
  local_1d0 = 0;
  local_1b0 = 0;
  local_1b8 = (int *)0x0;
  local_1dc = local_1e0;
  local_1d4 = puVar8;
  if (iVar15 != 0) {
    puVar9 = (undefined4 *)*local_1e0;
    puVar14 = local_1e0 + 8;
    iVar28 = 0;
    if (puVar9 != (undefined4 *)0x80000015) {
      puVar31 = (undefined4 *)((uint)&local_158 | 4);
      puVar32 = (undefined4 *)((uint)&local_80 | 4);
      iVar33 = (int)&local_cc + 1;
      puVar16 = (undefined4 *)((uint)&local_d0 | 4);
      puVar17 = (undefined4 *)((uint)&local_60 | 4);
      piVar18 = (int *)((uint)local_f0 | 4);
      uVar34 = (uint)&local_158 | 5;
      puVar35 = (undefined4 *)((uint)&local_118 | 4);
      iVar28 = 0;
      local_278 = &DAT_018ac46c;
      local_27c = &DAT_00413115;
      puVar2 = local_1e0;
      puVar12 = local_1e0 + 8;
      local_1dc = local_1e0;
LAB_00934984:
      uVar19 = puVar2[2];
      uVar36 = puVar2[3];
      iVar28 = iVar28 + 1;
      *puVar31 = puVar2[1];
      puVar31[1] = uVar19;
      puVar31[2] = uVar36;
      local_15c = puVar2[7];
      local_168 = puVar2[4];
      local_164 = (int *)puVar2[5];
      puStack_160 = (undefined4 *)puVar2[6];
      local_158 = puVar9;
      FUN_0094ad08(&local_d0,&local_158);
      piVar7 = local_b8;
      iVar6 = iStack_bc;
      iVar10 = local_c0;
      puVar46 = local_c4;
      piVar44 = local_c8;
      puVar2 = local_cc;
      puVar9 = local_d0;
      iVar45 = local_15c;
      puVar14 = puStack_160;
      piVar23 = local_164;
      uVar38 = local_168;
      if (local_d0 != (undefined4 *)&SUB_00000002) {
        local_1a8 = local_b4;
        iStack_1a4 = iStack_b0;
        piStack_1a0 = (int *)iStack_ac;
        puStack_19c = (undefined4 *)iStack_a8;
        local_198 = iStack_a4;
        local_1dc = puVar12;
        local_1d0 = iVar28;
        FUN_008f7448(&local_168);
        goto LAB_00935ecc;
      }
      local_124 = local_164;
      local_120 = puStack_160;
      local_11c = local_15c;
      uVar3 = 0x15;
      if ((int)local_168 < 0) {
        uVar3 = local_168 ^ 0x80000000;
      }
      local_128 = local_168;
      if (uVar3 == 0x14) {
        puVar24 = (undefined4 *)0x0;
        bVar47 = local_15c != 0;
        puVar9 = (undefined4 *)&DAT_00000014;
        puVar37 = puStack_160;
        if (bVar47) {
          puVar37 = puStack_160 + 4;
          puVar9 = (undefined4 *)*puStack_160;
        }
        puVar40 = puStack_160 + local_15c * 4;
        local_5c = puStack_160;
        if (bVar47) {
          local_5c = puVar37;
        }
        local_50 = 0;
        local_58 = local_164;
        local_60 = puStack_160;
        local_54 = puVar40;
        if (!bVar47 || puVar9 == (undefined4 *)0x80000015) goto LAB_00934cec;
        uVar19 = puStack_160[2];
        uVar36 = puStack_160[3];
        *puVar32 = puStack_160[1];
        puVar32[1] = uVar19;
        puVar32[2] = uVar36;
        local_50 = 1;
        local_80 = puVar9;
        FUN_0093ff14(&local_d0,&local_80);
        puVar9 = local_d0;
        uVar41 = (undefined1)local_cc;
        if (local_d0 == (undefined4 *)&SUB_00000002) {
          puVar24 = (undefined4 *)&DAT_00000001;
          if (iVar45 == 1) {
LAB_00934cec:
            FUN_00f3cf48(&local_158,puVar24,&DAT_01867328,&DAT_018ab990);
            if (local_158 != (undefined4 *)&SUB_00000002) goto LAB_00934f98;
          }
          else {
            puVar9 = (undefined4 *)puVar14[4];
            puVar37 = puVar14 + 8;
            local_5c = puVar37;
            if (puVar9 == (undefined4 *)0x80000015) goto LAB_00934cec;
            uVar19 = puVar14[6];
            uVar36 = puVar14[7];
            *puVar32 = puVar14[5];
            puVar32[1] = uVar19;
            puVar32[2] = uVar36;
            local_50 = 2;
            local_80 = puVar9;
            FUN_0093f4ec(&local_d0,&local_80);
            puVar9 = local_c4;
            piVar7 = local_c8;
            if (local_d0 != (undefined4 *)&SUB_00000002) {
              local_148 = CONCAT44(iStack_bc,local_c0);
              local_138 = CONCAT44(local_138._4_4_,iStack_b0);
LAB_00935370:
              local_150 = local_c8;
              local_14c = local_c4;
              local_154 = local_cc;
              local_158 = local_d0;
              local_140 = local_b8;
              local_13c = local_b4;
              local_130 = iStack_a8;
              iStack_12c = iStack_a4;
              goto LAB_00934f98;
            }
            puVar24 = (undefined4 *)&SUB_00000002;
            if (iVar45 == 2) goto LAB_00934cec;
            puVar37 = puVar14 + 0xc;
            unaff_d8 = CONCAT44(iStack_bc,local_c0);
            puVar4 = (undefined4 *)puVar14[8];
            local_5c = puVar37;
            if (puVar4 == (undefined4 *)0x80000015) goto LAB_00934cec;
            uVar19 = puVar14[10];
            uVar36 = puVar14[0xb];
            *puVar32 = puVar14[9];
            puVar32[1] = uVar19;
            puVar32[2] = uVar36;
            local_50 = 3;
            local_80 = puVar4;
            FUN_0093f4ec(&local_d0,&local_80);
            if (local_d0 != (undefined4 *)&SUB_00000002) {
              local_148 = CONCAT44(iStack_bc,local_c0);
              local_138 = CONCAT44(local_138._4_4_,iStack_b0);
              goto LAB_00935370;
            }
            puVar24 = (undefined4 *)0x3;
            local_150 = piVar7;
            local_14c = puVar9;
            local_138 = CONCAT44(iStack_bc,local_c0);
            local_140 = local_c8;
            local_13c = local_c4;
            local_130 = CONCAT31(local_130._1_3_,uVar41);
            local_148 = unaff_d8;
          }
          iVar45 = ((uint)((int)puVar40 - (int)puVar37) >> 4) + 1;
          puVar9 = puVar37;
          while (iVar45 = iVar45 + -1, iVar45 != 0) {
            FUN_008f7448(puVar9);
            puVar9 = puVar9 + 4;
          }
          if (piVar23 != (int *)0x0) {
            thunk_FUN_016d3fb4(puVar14);
          }
          if (puVar40 != puVar37) {
            local_80 = puVar24;
            FUN_00f3cf48(&local_d0,
                         (undefined1 *)(((uint)((int)puVar40 - (int)puVar37) >> 4) + (int)puVar24),
                         &local_80,&DAT_01887234);
            if (local_d0 != (undefined4 *)&SUB_00000002) {
              local_158 = local_d0;
              local_154 = local_cc;
              local_150 = local_c8;
              local_14c = local_c4;
              local_148 = CONCAT44(iStack_bc,local_c0);
              local_140 = local_b8;
              local_13c = local_b4;
              local_138 = CONCAT44(iStack_ac,iStack_b0);
              local_130 = iStack_a8;
              iStack_12c = iStack_a4;
              goto LAB_00934fd8;
            }
          }
          local_158 = (undefined4 *)&SUB_00000002;
        }
        else {
          FUN_016dd1aa(uVar34,iVar33,0x2b);
          local_154 = (undefined4 *)CONCAT31(local_154._1_3_,uVar41);
          local_158 = puVar9;
LAB_00934f98:
          iVar45 = ((uint)((int)puVar40 - (int)puVar37) >> 4) + 1;
          while (iVar45 = iVar45 + -1, iVar45 != 0) {
            FUN_008f7448(puVar37);
            puVar37 = puVar37 + 4;
          }
          if (piVar23 != (int *)0x0) {
            thunk_FUN_016d3fb4(puVar14);
          }
        }
LAB_00934fd8:
        if ((0x7fffffff < uVar38) && ((uVar38 & 0xfffffffe) != 0x80000014)) {
          FUN_008f7448(&local_128);
        }
      }
      else {
        if (uVar3 == 0x15) {
          local_224 = (undefined4 *)0x0;
          local_100 = local_168;
          local_118 = (undefined4 *)0x80000015;
          piVar23 = local_164 + (int)puStack_160 * 8;
          local_104 = local_164;
          local_108 = local_164;
          local_f8 = 0;
          local_fc = piVar23;
          if (puStack_160 == (undefined4 *)0x0) {
            local_220 = (int *)&SUB_00000002;
            local_228 = (int *)&SUB_00000002;
            local_22c = (undefined4 *)0x0;
            uVar41 = 2;
          }
          else {
            local_220 = (int *)&SUB_00000002;
            local_21c = 3;
            local_224 = (undefined4 *)0x0;
            local_228 = (int *)&SUB_00000002;
            iVar45 = 0;
            local_22c = (undefined4 *)0x0;
            iVar10 = 1;
            piVar7 = local_164;
            do {
              iVar6 = iVar10;
              piVar5 = piVar7 + 8;
              iVar10 = *piVar7;
              if (iVar10 == -0x7fffffeb) goto LAB_00934ed0;
              iVar13 = piVar7[2];
              iVar20 = piVar7[3];
              local_118 = (undefined4 *)piVar7[4];
              local_110 = piVar7[6];
              local_114 = piVar7[5];
              local_10c = piVar7[7];
              *piVar18 = piVar7[1];
              piVar18[1] = iVar13;
              piVar18[2] = iVar20;
              local_f0[0] = iVar10;
              FUN_008f7e10(&local_d0,local_f0);
              puVar9 = local_d0;
              puVar14 = local_118;
              uVar41 = (undefined1)local_cc;
              if (local_d0 != (undefined4 *)&SUB_00000002) {
                local_104 = piVar5;
                local_f8 = iVar6;
                FUN_016dd1aa(uVar34,iVar33,0x2b);
LAB_00934ec0:
                local_154 = (undefined4 *)CONCAT31(local_154._1_3_,uVar41);
                local_158 = puVar9;
LAB_009352dc:
                FUN_00927214(&local_108);
                if (local_118 != (undefined4 *)0x80000015) {
                  FUN_008f7448(&local_118);
                }
                goto LAB_00934fd8;
              }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((uint)local_cc & 0xff) {
              case 0:
                if (local_21c != 3) {
                  uVar19 = 7;
                  pcVar11 = "enabled";
LAB_00935d60:
                  local_104 = piVar5;
                  local_f8 = iVar6;
                  FUN_009244cc(&local_158,pcVar11,uVar19);
                  if (local_158 != (undefined4 *)&SUB_00000002) goto LAB_009352dc;
                  goto LAB_00934f40;
                }
                local_118 = (undefined4 *)0x80000015;
                if (puVar14 == (undefined4 *)0x80000015) goto LAB_00935f24;
                local_60 = puVar14;
                uVar19 = puVar35[1];
                uVar36 = puVar35[2];
                *puVar17 = *puVar35;
                puVar17[1] = uVar19;
                puVar17[2] = uVar36;
                FUN_0093ff14(&local_d0,&local_60);
                puVar9 = local_d0;
                uVar41 = (undefined1)local_cc;
                local_21c = (uint)local_cc & 0xff;
                if (local_d0 != (undefined4 *)&SUB_00000002) {
                  local_104 = piVar5;
                  local_f8 = iVar6;
                  FUN_016dd1aa(uVar34,iVar33,0x2b);
                  goto LAB_00934ec0;
                }
                break;
              case 1:
                if (local_220 != (int *)&SUB_00000002 || local_224 != (undefined4 *)0x0) {
                  uVar19 = 9;
                  pcVar11 = "frequency";
                  goto LAB_00935d60;
                }
                local_118 = (undefined4 *)0x80000015;
                if (puVar14 == (undefined4 *)0x80000015) goto LAB_00935f24;
                local_60 = puVar14;
                uVar19 = puVar35[1];
                uVar36 = puVar35[2];
                *puVar17 = *puVar35;
                puVar17[1] = uVar19;
                puVar17[2] = uVar36;
                FUN_0093f4ec(&local_d0,&local_60);
                if (local_d0 != (undefined4 *)&SUB_00000002) {
                  local_148 = CONCAT44(iStack_bc,local_c0);
                  local_138 = CONCAT44(local_138._4_4_,iStack_b0);
                  local_158 = local_d0;
                  local_154 = local_cc;
                  local_150 = local_c8;
                  local_14c = local_c4;
                  local_140 = local_b8;
                  local_13c = local_b4;
                  local_130 = iStack_a8;
                  iStack_12c = iStack_a4;
                  local_104 = piVar5;
                  local_f8 = iVar6;
                  goto LAB_009352dc;
                }
                unaff_d8 = CONCAT44(iStack_bc,local_c0);
                local_220 = local_c8;
                local_224 = local_c4;
                break;
              case 2:
                if (local_228 != (int *)&SUB_00000002 || local_22c != (undefined4 *)0x0) {
                  uVar19 = 7;
                  pcVar11 = "voltage";
                  goto LAB_00935d60;
                }
                local_118 = (undefined4 *)0x80000015;
                if (puVar14 == (undefined4 *)0x80000015) goto LAB_00935f24;
                local_60 = puVar14;
                uVar19 = puVar35[1];
                uVar36 = puVar35[2];
                *puVar17 = *puVar35;
                puVar17[1] = uVar19;
                puVar17[2] = uVar36;
                FUN_0093f4ec(&local_d0,&local_60);
                if (local_d0 != (undefined4 *)&SUB_00000002) {
                  local_148 = CONCAT44(iStack_bc,local_c0);
                  local_138 = CONCAT44(local_138._4_4_,iStack_b0);
                  local_158 = local_d0;
                  local_154 = local_cc;
                  local_150 = local_c8;
                  local_14c = local_c4;
                  local_140 = local_b8;
                  local_13c = local_b4;
                  local_130 = iStack_a8;
                  iStack_12c = iStack_a4;
                  local_104 = piVar5;
                  local_f8 = iVar6;
                  goto LAB_009352dc;
                }
                unaff_d9 = CONCAT44(iStack_bc,local_c0);
                local_228 = local_c8;
                local_22c = local_c4;
                break;
              case 3:
                local_118 = (undefined4 *)0x80000015;
                if (puVar14 == (undefined4 *)0x80000015) {
LAB_00935f24:
                  local_118 = (undefined4 *)0x80000015;
                  local_104 = piVar5;
                  local_f8 = iVar6;
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                               ,0x2c,&DAT_01887244);
                }
                local_d0 = puVar14;
                uVar19 = puVar35[1];
                uVar36 = puVar35[2];
                *puVar16 = *puVar35;
                puVar16[1] = uVar19;
                puVar16[2] = uVar36;
                FUN_008f7448(&local_d0);
              }
              iVar45 = iVar45 + 1;
              iVar10 = iVar6 + 1;
              piVar7 = piVar5;
            } while (piVar5 != piVar23);
            iVar45 = iVar6;
LAB_00934ed0:
            uVar41 = (undefined1)local_21c;
            local_104 = piVar5;
            local_f8 = iVar45;
            if (local_21c == 3) {
              uVar41 = 2;
            }
          }
          local_130 = CONCAT31(local_130._1_3_,uVar41);
          if (local_220 == (int *)&SUB_00000002 && local_224 == (undefined4 *)0x0) {
            local_220 = (int *)0x0;
            local_224 = (undefined4 *)0x0;
          }
          if (local_228 == (int *)&SUB_00000002 && local_22c == (undefined4 *)0x0) {
            local_228 = (int *)0x0;
            local_22c = (undefined4 *)0x0;
          }
          local_150 = local_220;
          local_14c = local_224;
          local_148 = unaff_d8;
          local_140 = local_228;
          local_13c = local_22c;
          local_138 = unaff_d9;
LAB_00934f40:
          FUN_008f78f0(&local_d0,&local_118);
          if (local_d0 == (undefined4 *)&SUB_00000002) {
            local_158 = (undefined4 *)&SUB_00000002;
          }
          else {
            local_158 = local_d0;
            local_154 = local_cc;
            local_150 = local_c8;
            local_14c = local_c4;
            local_148 = CONCAT44(iStack_bc,local_c0);
            local_140 = local_b8;
            local_13c = local_b4;
            local_138 = CONCAT44(iStack_ac,iStack_b0);
            local_130 = iStack_a8;
            iStack_12c = iStack_a4;
          }
          goto LAB_00934fd8;
        }
        FUN_008f73e8(&local_158,&local_168,&uStack_39,&DAT_01867098);
      }
      piVar7 = local_140;
      puVar37 = local_14c;
      piVar23 = local_150;
      puVar14 = local_154;
      puVar9 = local_158;
      iVar10 = (int)local_148;
      iVar6 = local_148._4_4_;
      if (local_158 != (undefined4 *)&SUB_00000002) {
        local_1a8 = local_13c;
        iStack_1a4 = (int)local_138;
        piStack_1a0 = (int *)local_138._4_4_;
        puStack_19c = (undefined4 *)local_130;
        local_198 = iStack_12c;
        local_1dc = puVar12;
        local_1d0 = iVar28;
        if (puVar2 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(piVar44);
        }
        piVar44 = piVar23;
        puVar2 = puVar14;
        puVar46 = puVar37;
LAB_00935ecc:
        param_1[4] = iVar10;
        param_1[3] = puVar46;
        param_1[2] = piVar44;
        *param_1 = puVar9;
        param_1[1] = puVar2;
        param_1[7] = local_1a8;
        param_1[8] = iStack_1a4;
        param_1[9] = piStack_1a0;
        param_1[10] = puStack_19c;
        param_1[0xb] = local_198;
        param_1[6] = piVar7;
        param_1[5] = iVar6;
        FUN_0093a2b4(&local_1b8);
        FUN_00927214(&local_1e0);
        return;
      }
      local_1a8 = (undefined4 *)(int)local_148;
      iStack_1a4 = local_148._4_4_;
      piStack_1a0 = local_140;
      puStack_19c = local_13c;
      local_198 = (int)local_138;
      iStack_194 = local_138._4_4_;
      iStack_190 = local_130;
      iStack_18c = iStack_12c;
      if (local_150 != (int *)&SUB_00000002 || local_14c != (undefined4 *)0x0) {
        local_188 = (int)local_1a8;
        iStack_184 = iStack_1a4;
        piStack_180 = piStack_1a0;
        puStack_17c = puStack_19c;
        local_178 = local_198;
        iStack_174 = iStack_194;
        iStack_170 = iStack_190;
        iStack_16c = iStack_18c;
        if (local_1b8 != (int *)0x0) {
          uVar38 = local_1b4;
          piVar7 = local_1b8;
          do {
            piVar5 = piVar7 + 0x6f;
            uVar1 = *(ushort *)((int)piVar7 + 0x242);
            ppiVar21 = (int **)0xffffffff;
            iVar45 = (int)(uint)uVar1 * 0xc;
            do {
              ppiVar22 = (int **)(uint)uVar1;
              if (iVar45 == 0) goto joined_r0x009350f4;
              puVar9 = (undefined4 *)piVar5[2];
              puVar14 = puVar9;
              if (puVar46 < puVar9) {
                puVar14 = puVar46;
              }
              iVar10 = FUN_016dd50a(piVar44,piVar5[1],puVar14);
              if (iVar10 == 0) {
                iVar10 = (int)puVar46 - (int)puVar9;
              }
              iVar45 = iVar45 + -0xc;
              ppiVar21 = (int **)((int)ppiVar21 + 1);
              piVar5 = piVar5 + 3;
            } while ((char)((0 < iVar10) - (iVar10 < 0)) == '\x01');
            ppiVar22 = ppiVar21;
            if (0 < iVar10 == iVar10 < 0) {
              if (puVar2 != (undefined4 *)0x0) {
                thunk_FUN_016d3fb4(piVar44);
              }
              goto LAB_00935140;
            }
joined_r0x009350f4:
            if (uVar38 == 0) goto LAB_0093521c;
            uVar38 = uVar38 - 1;
            piVar7 = (int *)piVar7[(int)((int)ppiVar22 + 0x92)];
          } while( true );
        }
        if (puVar2 != (undefined4 *)&DAT_80000000) {
          piVar7 = (int *)thunk_FUN_016d4a50(0x248);
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x248);
          }
          *(undefined2 *)((int)piVar7 + 0x242) = 1;
          piVar7[0x70] = (int)piVar44;
          piVar7[0x6e] = 0;
          *piVar7 = (int)piVar23;
          piVar7[1] = (int)puVar37;
          piVar7[0x6f] = (int)puVar2;
          piVar7[0x71] = (int)puVar46;
          local_1b4 = 0;
          piVar7[2] = (int)local_1a8;
          piVar7[3] = iStack_1a4;
          piVar7[4] = (int)piStack_1a0;
          piVar7[5] = (int)puStack_19c;
          piVar7[6] = local_198;
          piVar7[7] = iStack_194;
          piVar7[8] = iStack_190;
          piVar7[9] = iStack_18c;
          local_1b8 = piVar7;
          goto LAB_009351ec;
        }
        ppiVar21 = &local_1b8;
        piVar7 = piVar44;
        goto LAB_00935140;
      }
      puVar14 = puVar12;
    }
LAB_00934820:
    local_1dc = puVar14;
    local_1d0 = iVar28;
  }
  param_1[1] = local_1b8;
  param_1[2] = local_1b4;
  param_1[3] = local_1b0;
  local_1c8 = param_1[1];
  *param_1 = 2;
  uStack_1c4 = param_1[2];
  uStack_1c0 = param_1[3];
  FUN_008f78f0(&local_d0,local_1f0);
  if (local_d0 == (undefined4 *)&SUB_00000002) {
    *param_1 = 2;
    return;
  }
  *param_1 = local_d0;
  param_1[1] = local_cc;
  param_1[2] = local_c8;
  param_1[3] = local_c4;
  param_1[4] = local_c0;
  param_1[5] = iStack_bc;
  param_1[6] = local_b8;
  param_1[7] = local_b4;
  param_1[8] = iStack_b0;
  param_1[9] = iStack_ac;
  param_1[10] = iStack_a8;
  param_1[0xb] = iStack_a4;
  FUN_0093a2b4(&local_1c8);
  return;
LAB_0093521c:
  if (puVar2 == (undefined4 *)&DAT_80000000) {
    ppiVar21 = &local_1b8;
    piVar7 = piVar44;
LAB_00935140:
    piVar7 = piVar7 + (int)ppiVar21 * 10;
    *piVar7 = (int)piVar23;
    piVar7[1] = (int)puVar37;
    piVar7[2] = local_188;
    piVar7[3] = iStack_184;
    piVar7[4] = (int)piStack_180;
    piVar7[5] = (int)puStack_17c;
    piVar7[6] = local_178;
    piVar7[7] = iStack_174;
    piVar7[8] = iStack_170;
    piVar7[9] = iStack_16c;
    goto joined_r0x00935200;
  }
  puVar42 = (ushort *)((int)piVar7 + 0x242);
  uVar1 = *puVar42;
  puVar29 = (undefined1 *)(uint)uVar1;
  if (puVar29 < (undefined1 *)0xb) {
    puVar25 = (undefined1 *)((int)ppiVar22 + 1);
    piVar5 = piVar7 + (int)ppiVar22 * 3 + 0x6f;
    if (puVar29 < puVar25) {
      *piVar5 = (int)puVar2;
      piVar5[1] = (int)piVar44;
      piVar5[2] = (int)puVar46;
    }
    else {
      FUN_016dd52c(piVar7 + (int)puVar25 * 3 + 0x6f,piVar5,((int)puVar29 - (int)ppiVar22) * 0xc);
      *piVar5 = (int)puVar2;
      piVar5[1] = (int)piVar44;
      piVar5[2] = (int)puVar46;
      FUN_016dd52c(piVar7 + (int)puVar25 * 10,piVar7 + (int)ppiVar22 * 10,
                   ((int)puVar29 - (int)ppiVar22) * 0x28);
    }
    piVar7 = piVar7 + (int)ppiVar22 * 10;
    *piVar7 = (int)piVar23;
    piVar7[1] = (int)puVar37;
    piVar7[2] = local_188;
    piVar7[3] = iStack_184;
    piVar7[4] = (int)piStack_180;
    piVar7[5] = (int)puStack_17c;
    piVar7[6] = local_178;
    piVar7[7] = iStack_174;
    piVar7[8] = iStack_170;
    piVar7[9] = iStack_16c;
    *puVar42 = uVar1 + 1;
LAB_0093564c:
  }
  else {
    uVar38 = 4;
    if (&DAT_00000004 < ppiVar22) {
      if (ppiVar22 == (int **)&DAT_00000005) {
        bVar47 = false;
        uVar38 = 5;
      }
      else {
        if (ppiVar22 == (int **)&DAT_00000006) {
          uVar38 = 5;
          ppiVar22 = (int **)0x0;
        }
        else {
          ppiVar22 = (int **)((int)ppiVar22 + -7);
          uVar38 = 6;
        }
        bVar47 = true;
      }
    }
    else {
      bVar47 = false;
    }
    piVar5 = (int *)thunk_FUN_016d4a50(0x248);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x248);
    }
    *(undefined2 *)((int)piVar5 + 0x242) = 0;
    piVar5[0x6e] = 0;
    piVar26 = piVar7 + uVar38 * 3 + 0x6f;
    local_220 = (int *)*piVar26;
    local_224 = (undefined4 *)piVar26[1];
    local_228 = (int *)piVar26[2];
    uVar3 = (uint)*puVar42 + ~uVar38;
    *(undefined2 *)((int)piVar5 + 0x242) = (short)uVar3;
    piVar26 = piVar7 + uVar38 * 10;
    local_20c = *piVar26;
    local_21c = piVar26[1];
    local_d0 = (undefined4 *)piVar26[2];
    local_cc = (undefined4 *)piVar26[3];
    local_c8 = (int *)piVar26[4];
    local_c4 = (undefined4 *)piVar26[5];
    local_c0 = piVar26[6];
    iStack_bc = piVar26[7];
    local_b8 = (int *)piVar26[8];
    local_b4 = (undefined4 *)piVar26[9];
    if (0xb < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,0xb,&DAT_018ac47c);
    }
    FUN_016dd1aa(piVar5 + 0x6f,piVar7 + (uVar38 + 1) * 3 + 0x6f,uVar3 * 0xc);
    FUN_016dd1aa(piVar5,piVar7 + (uVar38 + 1) * 10,uVar3 * 0x28);
    *puVar42 = (ushort)uVar38;
    local_158 = local_d0;
    local_154 = local_cc;
    local_150 = local_c8;
    local_14c = local_c4;
    local_148 = CONCAT44(iStack_bc,local_c0);
    local_140 = local_b8;
    local_13c = local_b4;
    piVar26 = piVar5;
    if (!bVar47) {
      piVar26 = piVar7;
    }
    uVar1 = *(ushort *)((int)piVar26 + 0x242);
    piVar30 = piVar26 + (int)ppiVar22 * 3 + 0x6f;
    if (ppiVar22 < (int **)(uint)uVar1) {
      iVar45 = (int)(uint)uVar1 - (int)ppiVar22;
      FUN_016dd52c(piVar30 + 3,piVar30,iVar45 * 0xc);
      *piVar30 = (int)puVar2;
      piVar30[1] = (int)piVar44;
      piVar30[2] = (int)puVar46;
      FUN_016dd52c(piVar26 + (int)ppiVar22 * 10 + 10,piVar26 + (int)ppiVar22 * 10,iVar45 * 0x28);
    }
    else {
      *piVar30 = (int)puVar2;
      piVar30[1] = (int)piVar44;
      piVar30[2] = (int)puVar46;
    }
    piVar44 = piVar26 + (int)ppiVar22 * 10;
    *piVar44 = (int)piVar23;
    piVar44[1] = (int)puVar37;
    piVar44[2] = local_188;
    piVar44[3] = iStack_184;
    piVar44[4] = (int)piStack_180;
    piVar44[5] = (int)puStack_17c;
    piVar44[6] = local_178;
    piVar44[7] = iStack_174;
    piVar44[8] = iStack_170;
    piVar44[9] = iStack_16c;
    *(ushort *)((int)piVar26 + 0x242) = uVar1 + 1;
    local_60 = local_158;
    local_5c = local_154;
    local_58 = local_150;
    local_54 = local_14c;
    local_50 = (int)local_148;
    iStack_4c = local_148._4_4_;
    piStack_48 = local_140;
    puStack_44 = local_13c;
    if (local_20c == 2 && local_21c == 0) goto LAB_0093564c;
    if ((int *)piVar7[0x6e] == (int *)0x0) {
      local_1fc = 0;
    }
    else {
      local_1fc = 0;
      piVar23 = (int *)piVar7[0x6e];
      local_218 = piVar5;
      local_1f4 = (int)local_224;
      do {
        piVar44 = piVar23;
        uVar38 = (uint)*(ushort *)(piVar7 + 0x90);
        puVar42 = (ushort *)((int)piVar44 + 0x242);
        uVar3 = (uint)*puVar42;
        local_a0 = local_60;
        puStack_9c = local_5c;
        piStack_98 = local_58;
        puStack_94 = local_54;
        local_90 = local_50;
        iStack_8c = iStack_4c;
        piStack_88 = piStack_48;
        puStack_84 = puStack_44;
        if (uVar3 < 0xb) {
          uVar39 = uVar38 + 1;
          piVar23 = piVar44 + uVar38 * 3 + 0x6f;
          if (uVar38 < uVar3) {
            iVar45 = uVar3 - uVar38;
            FUN_016dd52c(piVar44 + uVar39 * 3 + 0x6f,piVar23,iVar45 * 0xc);
            piVar23[1] = local_1f4;
            piVar23[2] = (int)local_228;
            *piVar23 = (int)local_220;
            piVar23 = piVar44 + uVar38 * 10;
            FUN_016dd52c(piVar44 + uVar39 * 10,piVar23,iVar45 * 0x28);
            piVar44[uVar38 * 10] = local_20c;
            piVar23[1] = local_21c;
            piVar23[2] = (int)local_a0;
            piVar23[3] = (int)puStack_9c;
            piVar23[4] = (int)piStack_98;
            piVar23[5] = (int)puStack_94;
            piVar23[6] = local_90;
            piVar23[7] = iStack_8c;
            piVar23[8] = (int)piStack_88;
            piVar23[9] = (int)puStack_84;
            FUN_016dd52c(piVar44 + uVar38 + 0x94,piVar44 + uVar38 + 0x93,iVar45 * 4);
          }
          else {
            piVar23[1] = local_1f4;
            piVar23[2] = (int)local_228;
            *piVar23 = (int)local_220;
            piVar23 = piVar44 + uVar38 * 10;
            *piVar23 = local_20c;
            piVar23[1] = local_21c;
            piVar23[2] = (int)local_60;
            piVar23[3] = (int)local_5c;
            piVar23[4] = (int)local_58;
            piVar23[5] = (int)local_54;
            piVar23[6] = local_50;
            piVar23[7] = iStack_4c;
            piVar23[8] = (int)piStack_48;
            piVar23[9] = (int)puStack_44;
          }
          *puVar42 = (ushort)(uVar3 + 1);
          piVar44[uVar38 + 0x93] = (int)local_218;
          if (uVar39 < uVar3 + 2) {
            do {
              iVar45 = piVar44[uVar38 + 0x93];
              uVar38 = uVar38 + 1;
              *(short *)(iVar45 + 0x240) = (short)uVar38;
              *(int **)(iVar45 + 0x1b8) = piVar44;
            } while (uVar3 + 1 != uVar38);
          }
          goto LAB_0093564c;
        }
        uVar39 = 4;
        if (uVar38 < 5) {
          bVar47 = false;
        }
        else if (uVar38 == 5) {
          bVar47 = false;
          uVar39 = 5;
        }
        else if (uVar38 == 6) {
          uVar38 = 0;
          uVar39 = 5;
          bVar47 = true;
        }
        else {
          uVar38 = uVar38 - 7;
          bVar47 = true;
          uVar39 = 6;
        }
        piVar5 = (int *)thunk_FUN_016d4a50(0x278);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x278);
        }
        puVar43 = (ushort *)((int)piVar5 + 0x242);
        *puVar43 = 0;
        piVar5[0x6e] = 0;
        piVar23 = piVar44 + uVar39 * 3 + 0x6f;
        iVar45 = *piVar23;
        local_224 = (undefined4 *)piVar23[1];
        uVar27 = (uint)*puVar42 + ~uVar39;
        iVar13 = piVar23[2];
        *puVar43 = (ushort)uVar27;
        piVar23 = piVar44 + uVar39 * 10;
        iVar10 = *piVar23;
        iVar6 = piVar23[1];
        local_d0 = (undefined4 *)piVar23[2];
        local_cc = (undefined4 *)piVar23[3];
        local_c8 = (int *)piVar23[4];
        local_c4 = (undefined4 *)piVar23[5];
        local_c0 = piVar23[6];
        iStack_bc = piVar23[7];
        local_b8 = (int *)piVar23[8];
        local_b4 = (undefined4 *)piVar23[9];
        if (0xb < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar27,0xb,&DAT_018ac47c);
        }
        FUN_016dd1aa(piVar5 + 0x6f,piVar44 + (uVar39 + 1) * 3 + 0x6f,uVar27 * 0xc);
        FUN_016dd1aa(piVar5,piVar44 + (uVar39 + 1) * 10,uVar27 * 0x28);
        *puVar42 = (ushort)uVar39;
        local_158 = local_d0;
        local_154 = local_cc;
        local_150 = local_c8;
        local_14c = local_c4;
        local_148 = CONCAT44(iStack_bc,local_c0);
        local_140 = local_b8;
        local_13c = local_b4;
        uVar27 = (uint)*puVar43;
        iVar20 = uVar27 + 1;
        if (0xb < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar20,0xc,&DAT_018ac48c);
        }
        if (uVar3 - uVar39 != iVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        local_1fc = local_1fc + 1;
        FUN_016dd1aa(piVar5 + 0x92,piVar44 + uVar39 + 0x93,iVar20 * 4);
        uVar3 = 0;
        do {
          iVar20 = (piVar5 + 0x92)[uVar3];
          *(short *)(iVar20 + 0x240) = (short)uVar3;
          *(int **)(iVar20 + 0x1b8) = piVar5;
          if (uVar27 <= uVar3) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 <= uVar27);
        local_60 = local_158;
        local_5c = local_154;
        local_58 = local_150;
        local_54 = local_14c;
        local_50 = (int)local_148;
        iStack_4c = local_148._4_4_;
        piStack_48 = local_140;
        puStack_44 = local_13c;
        uVar3 = uVar38 + 1;
        piVar23 = piVar5;
        if (!bVar47) {
          piVar23 = piVar44;
        }
        uVar39 = (uint)*(ushort *)((int)piVar23 + 0x242);
        piVar7 = piVar23 + uVar38 * 3 + 0x6f;
        if (uVar38 < uVar39) {
          iVar20 = uVar39 - uVar38;
          FUN_016dd52c(piVar23 + uVar3 * 3 + 0x6f,piVar7,iVar20 * 0xc);
          *piVar7 = (int)local_220;
          piVar7[1] = local_1f4;
          piVar7[2] = (int)local_228;
          piVar7 = piVar23 + uVar38 * 10;
          FUN_016dd52c(piVar23 + uVar3 * 10,piVar7,iVar20 * 0x28);
          piVar23[uVar38 * 10] = local_20c;
          piVar7[1] = local_21c;
          piVar7[2] = (int)local_a0;
          piVar7[3] = (int)puStack_9c;
          piVar7[4] = (int)piStack_98;
          piVar7[5] = (int)puStack_94;
          piVar7[6] = local_90;
          piVar7[7] = iStack_8c;
          piVar7[8] = (int)piStack_88;
          piVar7[9] = (int)puStack_84;
          FUN_016dd52c(piVar23 + uVar38 + 0x94,piVar23 + uVar38 + 0x93,iVar20 * 4);
        }
        else {
          *piVar7 = (int)local_220;
          piVar7[1] = local_1f4;
          piVar7[2] = (int)local_228;
          piVar7 = piVar23 + uVar38 * 10;
          *piVar7 = local_20c;
          piVar7[1] = local_21c;
          piVar7[2] = (int)local_a0;
          piVar7[3] = (int)puStack_9c;
          piVar7[4] = (int)piStack_98;
          piVar7[5] = (int)puStack_94;
          piVar7[6] = local_90;
          piVar7[7] = iStack_8c;
          piVar7[8] = (int)piStack_88;
          piVar7[9] = (int)puStack_84;
        }
        piVar23[uVar38 + 0x93] = (int)local_218;
        *(ushort *)((int)piVar23 + 0x242) = (ushort)(uVar39 + 1);
        if (uVar3 < uVar39 + 2) {
          do {
            uVar3 = uVar38 + 1;
            iVar20 = piVar23[uVar38 + 0x93];
            *(short *)(iVar20 + 0x240) = (short)uVar3;
            *(int **)(iVar20 + 0x1b8) = piVar23;
            uVar38 = uVar3;
          } while (uVar39 + 1 != uVar3);
        }
        local_80 = local_60;
        puStack_7c = local_5c;
        piStack_78 = local_58;
        puStack_74 = local_54;
        local_70 = local_50;
        iStack_6c = iStack_4c;
        piStack_68 = piStack_48;
        puStack_64 = puStack_44;
        if (iVar10 == 2 && iVar6 == 0) goto LAB_0093564c;
        piVar23 = (int *)piVar44[0x6e];
        piVar7 = piVar44;
        local_228 = (int *)iVar13;
        local_220 = (int *)iVar45;
        local_21c = iVar6;
        local_218 = piVar5;
        local_20c = iVar10;
        local_1f4 = (int)local_224;
      } while ((int *)piVar44[0x6e] != (int *)0x0);
    }
    uVar38 = local_1b4;
    piVar23 = local_1b8;
    local_a0 = local_60;
    puStack_9c = local_5c;
    piStack_98 = local_58;
    puStack_94 = local_54;
    local_90 = local_50;
    iStack_8c = iStack_4c;
    piStack_88 = piStack_48;
    puStack_84 = puStack_44;
    if (local_1b8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac44c);
    }
    piVar7 = (int *)thunk_FUN_016d4a50(0x278);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x278);
    }
    puVar42 = (ushort *)((int)piVar7 + 0x242);
    *puVar42 = 0;
    piVar7[0x6e] = 0;
    piVar7[0x92] = (int)piVar23;
    if (0xfffffffe < uVar38) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af438);
    }
    *(undefined2 *)(piVar23 + 0x90) = 0;
    piVar23[0x6e] = (int)piVar7;
    local_1b8 = piVar7;
    local_1b4 = uVar38 + 1;
    if (local_1fc != uVar38) {
      uVar19 = 0x30;
LAB_00936098:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(local_27c,uVar19,local_278);
    }
    uVar3 = (uint)*puVar42;
    if (10 < uVar3) {
      uVar19 = 0x20;
      local_27c = &DAT_00565dd0;
      local_278 = &DAT_018af428;
      goto LAB_00936098;
    }
    uVar1 = (ushort)(uVar3 + 1);
    *puVar42 = uVar1;
    piVar7[uVar3 * 3 + 0x6f] = (int)local_220;
    piVar7[uVar3 * 3 + 0x70] = (int)local_224;
    piVar7[uVar3 * 3 + 0x71] = (int)local_228;
    piVar23 = piVar7 + uVar3 * 10;
    *piVar23 = local_20c;
    piVar23[1] = local_21c;
    piVar23[2] = (int)local_a0;
    piVar23[3] = (int)puStack_9c;
    piVar23[4] = (int)piStack_98;
    piVar23[5] = (int)puStack_94;
    piVar23[6] = local_90;
    piVar23[7] = iStack_8c;
    piVar23[8] = (int)piStack_88;
    piVar23[9] = (int)puStack_84;
    (piVar7 + 0x92)[uVar3 + 1] = (int)piVar5;
    *(ushort *)(piVar5 + 0x90) = uVar1;
    piVar5[0x6e] = (int)piVar7;
  }
LAB_009351ec:
  local_1b0 = local_1b0 + 1;
joined_r0x00935200:
  if (puVar12 == puVar8) {
    puVar14 = puVar8;
    iVar28 = (iVar15 * 0x20 - 0x20U >> 5) + 1;
    goto LAB_00934820;
  }
  puVar14 = puVar12 + 8;
  puVar9 = (undefined4 *)*puVar12;
  puVar2 = puVar12;
  puVar12 = puVar14;
  if (puVar9 == (undefined4 *)0x80000015) goto LAB_00934820;
  goto LAB_00934984;
}

