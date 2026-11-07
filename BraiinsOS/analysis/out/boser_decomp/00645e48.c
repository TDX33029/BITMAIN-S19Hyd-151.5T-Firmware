// FUN_00645e48 @ 00645e48 size=2244 calls_out=8 calls_in=4
// strings: 

void FUN_00645e48(uint *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
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
  uint uVar22;
  byte bVar23;
  uint *puVar24;
  bool bVar25;
  bool bVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 uVar27;
  undefined8 unaff_d15;
  undefined8 uVar28;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  undefined1 local_1dc;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1a8;
  undefined2 *puStack_1a4;
  uint uStack_1a0;
  uint local_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint local_168;
  uint local_164;
  undefined8 local_160;
  uint local_158;
  uint uStack_154;
  undefined8 local_150;
  uint *local_148;
  uint local_144;
  undefined8 local_140;
  uint local_138;
  uint local_134;
  undefined8 local_130;
  byte local_128;
  uint local_120;
  uint local_11c;
  undefined8 local_118;
  uint local_110;
  uint local_10c;
  undefined8 local_108;
  undefined1 local_100;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  undefined1 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [24];
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  puStack_1a4 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puStack_1a4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined1 *)(puStack_1a4 + 1) = 0x30;
  *puStack_1a4 = 0x2e32;
  local_19c = param_2[0x57];
  uStack_198 = param_2[0x58];
  uStack_194 = param_2[0x59];
  puVar24 = &local_1a8;
  local_190 = param_2[0x5a];
  uStack_18c = param_2[0x5b];
  uStack_188 = param_2[0x5c];
  uVar17 = param_2[0x53];
  uVar20 = param_2[0x12];
  uVar18 = param_2[0x13];
  uVar14 = param_2[0x52];
  local_1a8 = 3;
  uStack_1a0 = 3;
  if (uVar20 == 3 && uVar18 == 0) {
    local_1d0 = param_2[0x26];
    uVar22 = param_2[0x28];
    uVar21 = param_2[0x29];
    local_1c8 = 0;
    local_1cc = 2;
    cVar2 = '\0';
    cVar1 = '\x02';
  }
  else {
    cVar1 = (char)param_2[0x20];
    if (uVar20 == 2 && uVar18 == 0) {
      local_1d0 = param_2[0x26];
      local_1c8 = 0;
      bVar23 = (byte)param_2[0x20];
      uVar22 = param_2[0x28];
      local_1cc = 2;
      uVar21 = param_2[0x29];
      cVar2 = '\0';
    }
    else {
      uVar22 = param_2[0x28];
      uVar21 = param_2[0x29];
      local_23c = param_2[0x17];
      local_238 = param_2[0x16];
      cVar2 = (char)param_2[0x1a];
      local_244 = param_2[0x17];
      local_240 = param_2[0x16];
      local_1dc = (undefined1)param_2[0x1a];
      local_1d0 = param_2[0x26];
      bVar23 = (byte)param_2[0x20];
      unaff_d8 = *(undefined8 *)(param_2 + 0x14);
      unaff_d9 = *(undefined8 *)(param_2 + 0x18);
      unaff_d11 = *(undefined8 *)(param_2 + 0x14);
      unaff_d10 = *(undefined8 *)(param_2 + 0x18);
      local_1cc = uVar20;
      local_1c8 = uVar18;
    }
    local_1e8 = (uint)bVar23;
    local_1ec = param_2[0x1c];
    local_1f0 = param_2[0x1d];
    local_1f4 = param_2[0x1e];
    local_1f8 = param_2[0x1f];
  }
  bVar26 = local_1d0 == 2;
  bVar25 = param_2[0x22] == 1;
  if (bVar25) {
    puVar24 = (uint *)0x64604c;
    FUN_0124f3cc((uint)&local_180 | 4,param_2 + 0x23);
  }
  bVar23 = 0;
  local_180 = (uint)bVar25;
  uVar3 = *param_2;
  uVar10 = param_2[1];
  uVar4 = uVar3 ^ 2;
  if (uVar4 != 0 || uVar10 != 0) {
    bVar23 = (byte)param_2[0x10];
    unaff_d15 = *(undefined8 *)(param_2 + 2);
    local_208 = param_2[4];
    local_20c = param_2[5];
    local_200 = param_2[9];
    puVar24 = (uint *)param_2[8];
    local_1fc = param_2[0xc];
    local_204 = param_2[0xd];
    unaff_d14 = *(undefined8 *)(param_2 + 6);
    unaff_d13 = *(undefined8 *)(param_2 + 10);
    unaff_d12 = *(undefined8 *)(param_2 + 0xe);
  }
  if (!bVar26) {
    local_210 = param_2[0x27];
    local_214 = param_2[0x2a];
    local_218 = param_2[0x2b];
    local_21c = param_2[0x2c];
    local_220 = param_2[0x2d];
    local_224 = param_2[0x2e];
    local_228 = param_2[0x2f];
    local_234 = param_2[0x30];
    local_22c = param_2[0x31];
    local_230 = param_2[0x32];
  }
  if (param_2[0x33] == 0x80000000) {
    local_78 = -0x80000000;
  }
  else {
    FUN_0124f414(&local_78,param_2[0x34],param_2[0x35]);
  }
  local_110 = local_240;
  local_10c = local_244;
  local_ec = local_1f8;
  local_f0 = local_1f4;
  local_f4 = local_1f0;
  local_f8 = local_1ec;
  local_e0 = local_180;
  uStack_dc = uStack_17c;
  uStack_d8 = uStack_178;
  uStack_d4 = uStack_174;
  local_158 = local_208;
  uStack_154 = local_20c;
  local_144 = local_200;
  local_138 = local_1fc;
  local_a8 = local_234;
  local_ac = local_228;
  local_b0 = local_224;
  local_b4 = local_220;
  local_b8 = local_21c;
  local_bc = local_218;
  local_c0 = local_214;
  local_cc = local_210;
  local_134 = local_204;
  local_d0 = local_1d0;
  local_a4 = local_22c;
  local_a0 = local_230;
  local_9c = local_78;
  uStack_98 = uStack_74;
  uStack_94 = uStack_70;
  uVar11 = 0;
  if ((bVar23 & 6) != 2) {
    uVar11 = uVar21;
  }
  uVar19 = uVar22;
  if (bVar26) {
    uVar19 = 0;
  }
  uVar15 = uVar19;
  if ((bVar23 & 6) == 2) {
    uVar15 = 1;
  }
  if (uVar4 == 0 && uVar10 == 0) {
    uVar11 = uVar21;
    uVar15 = uVar19;
  }
  local_168 = uVar3;
  local_164 = uVar10;
  local_160 = unaff_d15;
  local_150 = unaff_d14;
  local_148 = puVar24;
  local_140 = unaff_d13;
  local_130 = unaff_d12;
  local_128 = bVar23;
  local_120 = uVar20;
  local_11c = uVar18;
  local_118 = unaff_d11;
  local_108 = unaff_d10;
  local_100 = local_1dc;
  local_e8 = (char)local_1e8;
  local_c8 = uVar22;
  local_c4 = uVar21;
  if (local_180 != 0) {
    FUN_0124f320(&uStack_dc);
  }
  if (local_9c != -0x80000000) {
    FUN_01222e90(&local_9c);
  }
  uVar20 = 0;
  uVar18 = 0;
  if (!bVar26) {
    local_22c = param_2[0x27];
    local_230 = param_2[0x2b];
    uVar20 = param_2[0x2a];
    uVar18 = local_1d0;
  }
  if (uVar4 == 0 && uVar10 == 0) {
    bVar26 = false;
    local_1d0._0_1_ = 0;
  }
  else {
    local_1d0._0_1_ = (byte)param_2[0x10];
    unaff_d10 = *(undefined8 *)(param_2 + 2);
    local_1e8 = param_2[4];
    local_1ec = param_2[5];
    local_1f4 = param_2[9];
    local_1f0 = param_2[8];
    bVar26 = (byte)local_1d0 - 2 < 3;
    if (bVar26) {
      local_1d0._0_1_ = 3;
    }
    unaff_d11 = *(undefined8 *)(param_2 + 6);
    local_224 = param_2[0xc];
    local_228 = param_2[0xd];
    unaff_d12 = *(undefined8 *)(param_2 + 10);
    unaff_d13 = *(undefined8 *)(param_2 + 0xe);
  }
  uVar21 = 0;
  bVar25 = false;
  if (cVar1 == '\x02') {
    if (local_1cc == 2 && local_1c8 == 0) {
      bVar25 = true;
    }
    else {
      bVar25 = false;
      if ((cVar2 == '\x02') &&
         (bVar25 = false, (local_238 == 0 && local_1cc == 0) && (local_23c == 0 && local_1c8 == 0)))
      {
        bVar25 = true;
      }
    }
  }
  uVar22 = 2;
  if (uVar4 != 0 || uVar10 != 0) {
    if ((bool)(~bVar26 & 1) ||
        ((local_1f0 != 0 || (local_1e8 != 0 || uVar3 != 0)) ||
        (local_1f4 != 0 || (local_1ec != 0 || uVar10 != 0)))) {
      uVar22 = uVar3;
      uVar21 = uVar10;
    }
    else if (local_224 == 0 && local_228 == 0) {
      uVar22 = 2;
    }
    else {
      uVar22 = 0;
    }
  }
  uVar3 = 2;
  if ((uVar20 != 0 || uVar18 != 0) || uVar15 != 0) {
    uVar3 = uVar18;
  }
  uVar18 = param_2[0x34];
  uVar4 = param_2[0x35];
  param_1[0x2c] = param_2[0x33];
  param_1[0x2d] = uVar18;
  param_1[0x2e] = uVar4;
  FUN_01bed4e2((uint)auStack_90 | 7,param_2 + 0x22,0x10);
  uVar18 = param_2[0x51];
  puVar24 = (uint *)((uint)&local_168 | 4);
  uVar4 = param_2[0x37];
  uVar10 = param_2[0x38];
  uVar19 = param_2[0x39];
  *puVar24 = param_2[0x36];
  puVar24[1] = uVar4;
  puVar24[2] = uVar10;
  puVar24[3] = uVar19;
  uVar4 = param_2[0x3b];
  uVar10 = param_2[0x3c];
  uVar19 = param_2[0x3d];
  puVar24[4] = param_2[0x3a];
  puVar24[5] = uVar4;
  puVar24[6] = uVar10;
  puVar24[7] = uVar19;
  uVar4 = param_2[0x4c];
  uVar28 = *(undefined8 *)(param_2 + 0x40);
  uVar27 = *(undefined8 *)(param_2 + 0x44);
  uVar16 = param_2[0x3f];
  uVar12 = param_2[0x3e];
  uVar10 = param_2[0x42];
  uVar13 = param_2[0x43];
  uVar19 = param_2[0x46];
  uVar5 = param_2[0x47];
  uVar6 = param_2[0x48];
  uVar7 = param_2[0x49];
  uVar8 = param_2[0x4a];
  uVar9 = param_2[0x4b];
  FUN_01bed4e2((uint)&local_180 | 6,param_2 + 0x4e,0xc);
  param_1[0x4c] = uVar14;
  param_1[0x4d] = uVar17;
  param_1[0x4e] = local_1a8;
  param_1[0x4f] = (uint)puStack_1a4;
  param_1[0x50] = uStack_1a0;
  param_1[0x51] = local_19c;
  param_1[0x52] = uStack_198;
  param_1[0x53] = uStack_194;
  param_1[0x54] = local_190;
  param_1[0x55] = uStack_18c;
  param_1[0x56] = uStack_188;
  *param_1 = uVar22;
  param_1[1] = uVar21;
  param_1[4] = local_1e8;
  param_1[5] = local_1ec;
  *(undefined8 *)(param_1 + 2) = unaff_d10;
  param_1[8] = local_1f0;
  param_1[9] = local_1f4;
  *(undefined8 *)(param_1 + 6) = unaff_d11;
  param_1[0xc] = local_224;
  param_1[0xd] = local_228;
  if (bVar25) {
    local_1cc = 3;
    local_1c8 = 0;
  }
  param_1[0x12] = local_1cc;
  param_1[0x13] = local_1c8;
  param_1[0x16] = local_238;
  param_1[0x17] = local_23c;
  *(byte *)(param_1 + 0x10) = (byte)local_1d0;
  *(char *)(param_1 + 0x20) = cVar1;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  *(char *)(param_1 + 0x1a) = cVar2;
  *(undefined8 *)(param_1 + 10) = unaff_d12;
  *(undefined8 *)(param_1 + 0xe) = unaff_d13;
  *(undefined8 *)(param_1 + 0x14) = unaff_d8;
  *(undefined8 *)(param_1 + 0x18) = unaff_d9;
  FUN_01bed4e2((int)param_1 + 0x81,auStack_90,0x17);
  param_1[0x26] = uVar3;
  param_1[0x27] = local_22c;
  param_1[0x28] = uVar15;
  param_1[0x29] = uVar11;
  param_1[0x2a] = uVar20;
  param_1[0x2b] = local_230;
  param_1[0x2f] = local_168;
  param_1[0x30] = local_164;
  param_1[0x31] = (uint)local_160;
  param_1[0x32] = local_160._4_4_;
  param_1[0x33] = local_158;
  param_1[0x34] = uStack_154;
  param_1[0x35] = (uint)local_150;
  param_1[0x36] = local_150._4_4_;
  param_1[0x37] = (uint)local_148;
  *(short *)(param_1 + 0x46) = (short)uVar4;
  *(undefined8 *)(param_1 + 0x3a) = uVar28;
  param_1[0x38] = uVar12;
  param_1[0x39] = uVar16;
  *(undefined8 *)(param_1 + 0x3e) = uVar27;
  param_1[0x3c] = uVar10;
  param_1[0x3d] = uVar13;
  param_1[0x40] = uVar19;
  param_1[0x41] = uVar5;
  param_1[0x42] = uVar6;
  param_1[0x43] = uVar7;
  param_1[0x44] = uVar8;
  param_1[0x45] = uVar9;
  FUN_01bed4e2((int)param_1 + 0x11a,&local_180,0x12);
  *(char *)(param_1 + 0x4b) = (char)uVar18;
  if (param_2[0x54] == 0x80000000) {
    return;
  }
  FUN_019bb7e0(param_2[0x54],param_2[0x55]);
  return;
}

