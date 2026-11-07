// FUN_00b0afb0 @ 00b0afb0 size=1852 calls_out=22 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b0afb0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  int *extraout_r2;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  undefined8 uVar23;
  uint local_238;
  int *local_234;
  undefined1 auStack_220 [48];
  int *local_1f0;
  uint local_1ec;
  int *local_1e8;
  undefined4 *local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint *local_1c4;
  undefined4 *local_1c0;
  int iStack_1bc;
  undefined4 uStack_1b8;
  int local_1b4;
  uint local_1b0;
  uint uStack_1ac;
  uint local_1a8;
  uint *local_1a4;
  uint local_19c;
  int *local_198;
  int *local_194;
  int *local_190;
  uint uStack_18c;
  int *piStack_188;
  int *piStack_184;
  uint local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 *puStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint *puStack_154;
  int *local_150;
  int *local_14c;
  uint local_148;
  int *local_140;
  uint uStack_13c;
  int *piStack_138;
  int *piStack_134;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *local_120;
  int *piStack_11c;
  int *piStack_118;
  int *piStack_114;
  int *local_110;
  uint uStack_10c;
  int *piStack_108;
  int *piStack_104;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int local_ec;
  int *local_e8;
  int local_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  uint local_d8;
  uint *puStack_d4;
  int iStack_d0;
  int iStack_cc;
  int *local_c8;
  int *local_c4;
  uint local_c0;
  int *piStack_bc;
  int *local_b8;
  uint uStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  uint local_a8 [8];
  int *local_88;
  int *local_84;
  int *piStack_80;
  int *local_7c;
  int *local_78;
  uint uStack_74;
  int *local_70;
  int *piStack_6c;
  int *local_68;
  uint uStack_64;
  int *piStack_60;
  int *piStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *local_48;
  uint local_44;
  uint *puStack_40;
  uint *local_3c;
  int *local_38;
  uint *local_34;
  int *local_30;
  int *local_2c;
  
  uVar1 = FUN_00b09be0(auStack_220);
  local_1e8 = (int *)0x0;
  uVar23 = thunk_FUN_01bee35a(uVar1,0x2c0);
  puVar13 = (uint *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  local_1ec = 4;
  local_1f0 = extraout_r2;
  if ((char)puVar13[4] == '\0') {
    FUN_019ae6ac(&local_88);
    *puVar13 = (uint)local_88;
    puVar13[1] = (uint)local_84;
    puVar13[2] = (uint)piStack_80;
    puVar13[3] = (uint)local_7c;
    *(undefined1 *)(puVar13 + 4) = 1;
  }
  local_1d0 = *puVar13;
  uStack_1cc = puVar13[1];
  local_1c4 = (uint *)puVar13[3];
  local_1b0 = local_1d0 + 1;
  uStack_1ac = uStack_1cc + (0xfffffffe < local_1d0);
  puVar11 = puVar13 + 2;
  local_1c8 = *puVar11;
  *puVar13 = local_1b0;
  puVar13[1] = uStack_1ac;
  local_1e0 = &DAT_0056d238;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  *puVar13 = local_1d0 + 2;
  puVar13[1] = uStack_1cc + (0xfffffffd < local_1d0);
  local_1c0 = &DAT_0056d238;
  iStack_1bc = 0;
  uStack_1b8 = 0;
  local_1b4 = 0;
  puVar17 = (uint *)*param_4;
  iVar8 = param_4[1];
  local_2c = (int *)param_4[3];
  if (iVar8 == 0) {
    local_48 = (int *)0x0;
    local_44 = iStack_1bc;
    puStack_40 = local_1c4;
  }
  else {
    local_48 = (int *)0x8;
    local_44 = iVar8 * 0x29 + 0x2d;
    puStack_40 = puVar17 + iVar8 * -10 + -10;
  }
  local_30 = (int *)((int)puVar17 + iVar8 + 1);
  puVar18 = puVar17 + 1;
  uVar2 = ~*puVar17 & 0x80808080;
  local_238 = 4;
  local_234 = (int *)0x0;
  iVar8 = (int)local_2c;
  local_1a8 = local_1c8;
  local_1a4 = local_1c4;
  local_3c = puVar17;
  local_38 = (int *)uVar2;
  local_34 = puVar18;
  while( true ) {
    iVar21 = 0;
    if (iVar8 == 0) break;
    uVar3 = uVar2;
    puVar9 = puVar18;
    if (uVar2 == 0) {
      do {
        puVar18 = puVar9 + 1;
        uVar2 = *puVar9;
        puVar17 = puVar17 + -0x28;
        puVar9 = puVar18;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar3 = uVar2 & 0x80808080 ^ 0x80808080;
      local_3c = puVar17;
      local_34 = puVar18;
    }
    iVar21 = iVar8 + -1;
    uVar2 = uVar3 - 1 & uVar3;
    uVar3 = (uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                          | uVar3 >> 0x18) >> 3;
    uVar20 = puVar17[uVar3 * -10 + -10];
    local_198 = (int *)puVar17[uVar3 * -10 + -9];
    local_194 = (int *)puVar17[uVar3 * -10 + -8];
    piStack_80 = (int *)puVar17[uVar3 * -10 + -7];
    local_7c = (int *)puVar17[uVar3 * -10 + -6];
    local_78 = (int *)puVar17[uVar3 * -10 + -5];
    uStack_74 = puVar17[uVar3 * -10 + -4];
    local_70 = (int *)puVar17[uVar3 * -10 + -3];
    piStack_6c = (int *)puVar17[uVar3 * -10 + -2];
    local_68 = (int *)puVar17[uVar3 * -10 + -1];
    local_88 = local_198;
    local_84 = local_194;
    local_38 = (int *)uVar2;
    if (uVar20 == 0x80000000) break;
    local_19c = uVar20;
    local_120 = local_7c;
    piStack_11c = local_78;
    piStack_118 = (int *)uStack_74;
    piStack_114 = local_70;
    local_110 = piStack_6c;
    uStack_10c = (uint)local_68;
    iVar8 = FUN_012771b8(auStack_220,&local_19c);
    if (iVar8 == 0) {
      piVar4 = (int *)thunk_FUN_01be5118(0x10);
      if (piVar4 == (int *)0x0) {
        local_2c = (int *)iVar21;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x10);
      }
      FUN_01bed4e2(piVar4,&DAT_0056ad08,0x10);
      local_c0 = 0x10;
      local_c8 = (int *)&DAT_00000010;
      local_c4 = piVar4;
      FUN_01aa42f8(&local_e8,&local_1c0,&local_19c,&local_c8);
      if (local_e8 != (int *)0x80000000) {
        FUN_019bb7e0(local_e8,local_e4);
      }
LAB_00b0b35c:
      FUN_00e0febc(&local_120);
    }
    else {
      if ((char)local_120 == '\0') {
        if (local_234 == local_1f0) {
          FUN_019abd3c(&local_1f0);
          local_238 = local_1ec;
        }
        local_1e8 = (int *)((int)local_234 + 1);
        puVar9 = (uint *)(local_238 + (int)local_234 * 0xc);
        *puVar9 = uVar20;
        puVar9[1] = (uint)local_198;
        puVar9[2] = (uint)local_194;
        local_234 = local_1e8;
        goto LAB_00b0b35c;
      }
      local_c8 = local_7c;
      local_c4 = local_78;
      local_c0 = uStack_74;
      piStack_bc = local_70;
      local_b8 = piStack_6c;
      uStack_b4 = (uint)local_68;
      FUN_01274ad8(&local_e8,&local_1e0,&local_19c);
      if ((char)local_e8 != '\x06') {
        FUN_00e0febc(&local_e8);
      }
    }
    iVar8 = iVar21;
  }
  local_2c = (int *)iVar21;
  FUN_01ada55c(&local_48);
  puStack_170 = local_1e0;
  uStack_16c = uStack_1dc;
  uStack_168 = uStack_1d8;
  uStack_164 = uStack_1d4;
  local_160 = local_1d0;
  uStack_15c = uStack_1cc;
  uStack_158 = local_1c8;
  puStack_154 = local_1c4;
  FUN_00b0a930(&local_88,param_2,param_3);
  local_150 = local_88;
  local_14c = local_84;
  local_148 = (uint)piStack_80;
  local_140 = local_78;
  uStack_13c = uStack_74;
  piStack_138 = local_70;
  piStack_134 = piStack_6c;
  local_130 = (uint)local_68;
  uStack_12c = uStack_64;
  uStack_128 = piStack_60;
  uStack_124 = piStack_5c;
  if ((char)puVar13[4] == '\0') {
    FUN_019ae6ac(&local_88);
    *puVar13 = (uint)local_88;
    puVar13[1] = (uint)local_84;
    *puVar11 = (uint)piStack_80;
    puVar13[3] = (uint)local_7c;
    *(undefined1 *)(puVar13 + 4) = 1;
  }
  piVar4 = local_14c;
  local_110 = (int *)*puVar13;
  uStack_10c = puVar13[1];
  piStack_108 = (int *)*puVar11;
  piStack_104 = (int *)puVar13[3];
  *puVar13 = (uint)((int)local_110 + 1);
  puVar13[1] = uStack_10c + ((int *)0xfffffffe < local_110);
  local_120 = &DAT_0056d238;
  piStack_11c = (int *)0x0;
  piStack_118 = (int *)0x0;
  piStack_114 = (int *)0x0;
  piVar5 = local_14c + local_148 * 8;
  local_ec = 0;
  local_f4 = local_150;
  local_f8 = local_14c;
  local_fc = local_14c;
  local_f0 = piVar5;
  if (local_148 != 0) {
    piVar22 = (int *)(param_2 + 4);
    iVar21 = 0x20;
    piVar6 = (int *)((uint)&local_e8 | 4);
    iVar8 = 0;
    do {
      piVar7 = (int *)((int)piVar4 + iVar21);
      piVar16 = piVar4 + iVar8 * 8;
      piVar10 = (int *)*piVar16;
      iVar19 = iVar8;
      if (piVar10 == (int *)0x0) goto LAB_00b0b55c;
      iVar19 = iVar8 + 1;
      iVar12 = piVar16[2];
      iVar14 = piVar16[3];
      *piVar6 = piVar16[1];
      piVar6[1] = iVar12;
      piVar6[2] = iVar14;
      iVar12 = piVar16[5];
      iVar14 = piVar16[6];
      iVar15 = piVar16[7];
      piVar6[3] = piVar16[4];
      piVar6[4] = iVar12;
      piVar6[5] = iVar14;
      piVar6[6] = iVar15;
      local_e8 = piVar10;
      if (param_3 == iVar8) {
        local_f8 = piVar7;
        local_ec = iVar19;
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(param_3,param_3,&DAT_01c11008);
      }
      local_44 = local_e4;
      puStack_40 = puStack_e0;
      local_3c = puStack_dc;
      local_38 = (int *)local_d8;
      local_34 = puStack_d4;
      local_30 = (int *)iStack_d0;
      local_2c = (int *)iStack_cc;
      local_48 = piVar10;
      (**(code **)(*piVar22 + 0x18))(&local_88,piVar22[-1]);
      local_c8 = local_88;
      local_c4 = local_84;
      local_c0 = (uint)piStack_80;
      piStack_bc = local_7c;
      local_b8 = local_78;
      uStack_b4 = uStack_74;
      piStack_b0 = local_70;
      piStack_ac = piStack_6c;
      local_a8[0] = (uint)local_68;
      FUN_01ae0840(&local_120);
      FUN_00a9d304(&local_140,local_a8);
      iVar21 = iVar21 + 0x20;
      piVar22 = piVar22 + 2;
      iVar8 = iVar19;
    } while (piVar16 + 8 != piVar5);
    piVar7 = piVar5;
LAB_00b0b55c:
    local_f8 = piVar7;
    local_ec = iVar19;
  }
  FUN_00963320(&local_fc);
  local_88 = local_120;
  local_84 = piStack_11c;
  piStack_80 = piStack_118;
  local_7c = piStack_114;
  local_78 = local_110;
  uStack_74 = uStack_10c;
  local_70 = piStack_108;
  piStack_6c = piStack_104;
  local_68 = local_140;
  uStack_64 = uStack_13c;
  piStack_60 = piStack_138;
  piStack_5c = piStack_134;
  local_58 = local_130;
  uStack_54 = uStack_12c;
  uStack_50 = uStack_128;
  uStack_4c = uStack_124;
  local_48 = local_120;
  local_44 = (uint)piStack_11c;
  puStack_40 = (uint *)piStack_118;
  local_3c = (uint *)piStack_114;
  local_38 = local_110;
  local_34 = (uint *)uStack_10c;
  local_30 = piStack_108;
  local_2c = piStack_104;
  local_190 = local_140;
  uStack_18c = uStack_13c;
  piStack_188 = piStack_138;
  piStack_184 = piStack_134;
  local_180 = local_130;
  uStack_17c = uStack_12c;
  uStack_178 = uStack_128;
  uStack_174 = uStack_124;
  FUN_00a9d304(&local_1c0);
  if (local_1b4 == 0) {
    local_88 = local_1f0;
    local_84 = (int *)local_1ec;
    piStack_80 = local_1e8;
    local_78 = local_48;
    uStack_74 = local_44;
    local_70 = (int *)puStack_40;
    piStack_6c = (int *)local_3c;
    local_68 = local_38;
    uStack_64 = (uint)local_34;
    piStack_60 = local_30;
    piStack_5c = local_2c;
    *param_1 = local_1f0;
    param_1[1] = local_1ec;
    param_1[2] = local_1e8;
    param_1[3] = local_7c;
    param_1[4] = local_48;
    param_1[5] = local_44;
    param_1[6] = puStack_40;
    param_1[7] = local_3c;
    param_1[8] = local_38;
    param_1[9] = local_34;
    param_1[10] = local_30;
    param_1[0xb] = local_2c;
    FUN_0126f23c(&local_1c0);
  }
  else {
    param_1[2] = local_1c0;
    param_1[3] = iStack_1bc;
    param_1[4] = uStack_1b8;
    param_1[5] = local_1b4;
    param_1[6] = local_1b0;
    param_1[7] = uStack_1ac;
    param_1[8] = local_1a8;
    param_1[9] = local_1a4;
    *param_1 = 0x80000000;
    FUN_01ada488(&local_48);
    FUN_006a41c0(&local_1f0);
  }
  FUN_01270b08(auStack_220);
  return;
}

