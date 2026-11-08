// FUN_014ab194 @ 014ab194 size=1372 calls_out=15 calls_in=2
// strings: 

void FUN_014ab194(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 unaff_r9;
  uint uVar15;
  int unaff_r10;
  uint uVar16;
  int iVar17;
  undefined4 unaff_r11;
  uint *puVar18;
  undefined8 uVar19;
  int local_1ac;
  undefined4 local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int iStack_184;
  undefined8 uStack_180;
  undefined4 *local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint uStack_168;
  uint uStack_164;
  undefined2 local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  byte local_12c;
  undefined2 local_12b;
  undefined1 local_129;
  undefined8 local_128;
  code *local_120;
  int local_11c;
  undefined4 *local_118;
  undefined1 local_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  undefined4 *local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 *local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  
  uVar19 = CONCAT44(unaff_r11,unaff_r9);
  uVar10 = *(uint *)(param_2 + 0x14);
  puVar3 = param_1;
  if (uVar10 != 0) {
    puVar3 = *(undefined4 **)(param_2 + 0x18);
  }
  if ((((uVar10 != 0 && puVar3 != (undefined4 *)0x0) &&
       (iVar17 = (**(code **)(*(int *)(param_2 + 0x1c) + 0xc))
                           ((int)puVar3 +
                            (*(int *)(*(int *)(param_2 + 0x1c) + 8) - 1U & 0xfffffff8) + 8,param_3),
       iVar17 == 0)) || (*(uint *)(param_2 + 0x10) <= uVar10)) ||
     ((undefined4 *)param_3[0x22] == (undefined4 *)0x0)) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  pcVar11 = *(code **)param_3[0x22];
  (*pcVar11)(&local_194,param_3 + 0x25,param_3[0x23],param_3[0x24]);
  FUN_010a55c4(&local_e0);
  local_110 = local_194;
  uStack_10c = local_190;
  uStack_108 = local_18c;
  uStack_104 = local_188;
  FUN_016dd1aa(&local_198,&local_e0,0x88);
  bVar2 = *(byte *)(param_3 + 0x1b);
  if (8 < bVar2) {
    if (bVar2 == 9) {
      uVar19 = *(undefined8 *)(param_3 + 0x1c);
      pcVar11 = (code *)param_3[0x1e];
      unaff_r10 = param_3[0x1f];
      local_e0 = CONCAT22(CONCAT11(local_e0._3_1_,*(undefined1 *)((int)param_3 + 0x6f)),
                          *(undefined2 *)((int)param_3 + 0x6d));
    }
    else {
      uVar19 = FUN_0102a5b4(param_3[0x1c],param_3[0x1d]);
    }
  }
  local_38 = (undefined4 *)CONCAT22(CONCAT11(local_38._3_1_,local_e0._2_1_),(undefined2)local_e0);
  if ((9 < local_12c) && (local_128._4_4_ != 0)) {
    thunk_FUN_016d3fb4((undefined4)local_128);
  }
  local_12b = (undefined2)local_38;
  local_129 = local_38._2_1_;
  local_12c = bVar2;
  local_120 = pcVar11;
  local_11c = unaff_r10;
  local_128 = uVar19;
  FUN_01430fb4(&local_e0,param_3 + 0x10);
  FUN_0145d5e0(&local_158);
  local_158 = local_e0;
  uStack_154 = local_dc;
  uStack_150 = local_d8;
  uStack_14c = local_d4;
  uStack_148 = uStack_d0;
  local_144 = local_cc;
  uStack_140 = uStack_c8;
  uStack_13c = uStack_c4;
  uStack_138 = uStack_c0;
  uStack_134 = uStack_bc;
  uStack_130 = uStack_b8;
  local_114 = (undefined1)param_3[0x21];
  iVar17 = param_3[0xe];
  uVar19 = FUN_014994d0(param_3[6],param_3[7]);
  FUN_01497e8c(&local_38,param_3[9],param_3[10]);
  FUN_01497d1c(&local_e0,param_3[0xc],param_3[0xd]);
  if (*param_3 == 0) {
    uVar8 = 0;
LAB_014ab380:
    local_1ac = 0;
  }
  else {
    if (*param_3 != 2) {
      uVar8 = 1;
      goto LAB_014ab380;
    }
    local_1ac = param_3[1];
    local_58 = param_3[2];
    iStack_54 = param_3[3];
    iStack_50 = param_3[4];
    iStack_4c = param_3[5];
    uVar8 = 2;
  }
  local_f0 = local_38;
  local_ec = local_34;
  local_e8 = local_30;
  local_100 = local_e0;
  uStack_fc = local_dc;
  uStack_f8 = local_d8;
  FUN_01015c1c(&local_198);
  local_190 = local_58;
  local_18c = iStack_54;
  local_188 = iStack_50;
  iStack_184 = iStack_4c;
  local_16c = local_100;
  uStack_168 = uStack_fc;
  uStack_164 = uStack_f8;
  puVar3 = (undefined4 *)param_3[0x20];
  local_178 = local_f0;
  local_174 = local_ec;
  local_170 = local_e8;
  local_194 = local_1ac;
  local_198 = uVar8;
  local_160 = (short)iVar17;
  uStack_180 = uVar19;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
    puVar3 = local_118;
  }
  else {
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    uVar10 = puVar3[1];
    if (uVar10 == 0) {
      local_48 = &DAT_005674cc;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
    }
    else {
      uVar16 = uVar10 + 1;
      uVar15 = (uint)((ulonglong)uVar16 * 0x18);
      if ((int)((ulonglong)uVar16 * 0x18 >> 0x20) != 0) {
LAB_014ab4b8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
      }
      uVar14 = uVar10 + 5;
      uVar9 = uVar15 + uVar14;
      if ((CARRY4(uVar15,uVar14)) || (0x7ffffffc < uVar9)) goto LAB_014ab4b8;
      if (uVar9 == 0) {
        uVar5 = 4;
      }
      else {
        if (uVar9 < 4) {
          local_e0 = 0;
          iVar17 = FUN_016d51b0(&local_e0,4,uVar9);
          if (iVar17 != 0) goto LAB_014ab6e8;
          uVar5 = local_e0;
        }
        else {
          uVar5 = thunk_FUN_016d4a50(uVar9);
        }
        if (uVar5 == 0) {
LAB_014ab6e8:
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,uVar9);
        }
      }
      local_2c = 0;
      puVar6 = (undefined4 *)(uVar5 + uVar15);
      puVar7 = (uint *)*puVar3;
      local_30 = uVar10;
      if (7 < uVar10) {
        local_30 = (uVar16 & 0xfffffff8) - (uVar16 >> 3);
      }
      local_38 = puVar6;
      local_34 = uVar10;
      FUN_016dd1aa(puVar6,puVar7,uVar14);
      local_3c = puVar3[3];
      if (local_3c != 0) {
        puVar13 = puVar7 + 1;
        uVar10 = ~*puVar7 & 0x80808080;
        iVar17 = local_3c;
        puVar18 = puVar7;
        do {
          puVar12 = puVar13;
          if (uVar10 == 0) {
            do {
              puVar13 = puVar12 + 1;
              uVar10 = *puVar12;
              puVar18 = puVar18 + -0x18;
              puVar12 = puVar13;
            } while ((uVar10 & 0x80808080) == 0x80808080);
            uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
          }
          puVar12 = puVar18 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) *
                              -6;
          local_e0 = puVar12[-6];
          local_dc = puVar12[-5];
          local_d8 = puVar12[-4];
          local_d4 = puVar12[-3];
          uVar19 = (**(code **)(puVar12[-1] + 0x10))(puVar12[-2]);
          iVar17 = iVar17 + -1;
          iVar1 = (int)puVar7 - (int)puVar12 >> 3;
          *(undefined8 *)(puVar6 + iVar1 * -2 + -2) = uVar19;
          uVar10 = uVar10 - 1 & uVar10;
          puVar6[iVar1 * -2 + -6] = local_e0;
          puVar6[iVar1 * -2 + -5] = local_dc;
          puVar6[iVar1 * -2 + -4] = local_d8;
          puVar6[iVar1 * -2 + -3] = local_d4;
        } while (iVar17 != 0);
      }
      local_48 = local_38;
      local_44 = local_34;
      local_40 = puVar3[2];
    }
    *puVar4 = local_48;
    puVar4[1] = local_44;
    puVar4[2] = local_40;
    puVar4[3] = local_3c;
    puVar3 = local_118;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0148eea4(puVar3);
    thunk_FUN_016d3fb4(puVar3);
  }
  local_118 = puVar4;
  FUN_016dd1aa(param_1,&local_198,0x98);
  return;
}

