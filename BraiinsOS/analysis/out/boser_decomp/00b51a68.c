// FUN_00b51a68 @ 00b51a68 size=2952 calls_out=16 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b51a68(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  uint extraout_r2;
  uint extraout_r3;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 *puVar32;
  int iVar33;
  uint *puVar34;
  uint **ppuVar35;
  uint *puVar36;
  uint *puVar37;
  uint *puVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint **ppuVar42;
  uint unaff_r11;
  uint **ppuVar43;
  uint *puVar44;
  uint *puVar45;
  uint *puVar46;
  uint *puVar47;
  bool bVar48;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined1 local_1d0;
  undefined1 local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint *local_1ac;
  uint *local_150;
  uint *local_14c;
  uint local_148;
  uint *local_140;
  uint *local_13c;
  uint local_138;
  uint *puStack_134;
  uint *local_130;
  uint *local_12c;
  uint local_128;
  uint uStack_124;
  uint local_120;
  uint *local_11c;
  uint local_118;
  uint uStack_114;
  uint *local_110;
  uint *local_10c;
  uint local_108;
  uint *puStack_104;
  uint *local_100;
  uint local_fc;
  uint local_f8;
  uint *local_f4;
  uint *local_f0;
  uint uStack_ec;
  undefined4 local_e8;
  uint *local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint *local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint *local_c4;
  uint *local_c0;
  uint *local_bc;
  uint local_b8;
  uint *local_b4;
  uint *local_b0;
  uint uStack_ac;
  uint local_a8;
  uint *puStack_a4;
  uint *local_a0;
  uint *local_90;
  uint *local_8c;
  uint local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint local_78;
  uint *local_74;
  uint *local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 local_60;
  uint *local_58;
  uint *puStack_54;
  uint uStack_50;
  
  FUN_00b51960(&local_90,param_2 + 0x54);
  uVar17 = local_60;
  uVar16 = uStack_64;
  uVar15 = uStack_68;
  uVar14 = local_6c;
  puVar12 = local_70;
  puVar11 = local_74;
  uVar10 = local_78;
  puVar9 = local_7c;
  puVar8 = local_80;
  puVar7 = local_84;
  uVar6 = local_88;
  puVar5 = local_8c;
  puVar4 = local_90;
  uVar41 = 0;
  local_1ac = param_2 + 4;
  uVar28 = param_2[0x12];
  uVar39 = param_2[0x13];
  if (uVar28 == 2 && uVar39 == 0) {
    unaff_r11 = 0;
    uVar28 = 0;
    local_1c0 = (uint)(byte)param_2[0x20];
    local_1bc = param_2[0x1c];
    local_1b8 = param_2[0x1d];
    local_1b4 = param_2[0x1e];
    local_1b0 = param_2[0x1f];
LAB_00b51b14:
    uVar39 = 0;
  }
  else {
    if (uVar28 == 3 && uVar39 == 0) {
      uVar28 = 2;
      goto LAB_00b51b14;
    }
    uVar41 = param_2[0x16];
    unaff_r11 = param_2[0x17];
    unaff_d9 = *(undefined8 *)(param_2 + 0x14);
    unaff_d8 = *(double *)(param_2 + 0x18);
    local_1c0 = (uint)(byte)param_2[0x20];
    local_1bc = param_2[0x1c];
    local_1b8 = param_2[0x1d];
    local_1b4 = param_2[0x1e];
    local_1b0 = param_2[0x1f];
  }
  puVar18 = (undefined4 *)thunk_FUN_01be5118(0x58);
  if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x58);
  }
  uVar26 = param_2[0x22];
  *puVar18 = 1;
  puVar18[1] = 1;
  bVar48 = (uVar26 & 1) == 0;
  *(char *)(puVar18 + 0x14) = (char)local_1c0;
  local_f8 = param_2[0x23];
  local_f4 = (uint *)param_2[0x24];
  if (bVar48) {
    local_f8 = 0;
  }
  puVar34 = (uint *)param_2[0x25];
  puVar18[0x10] = local_1bc;
  if (bVar48) {
    puVar34 = (uint *)0x0;
  }
  puVar18[0x11] = local_1b8;
  if (local_f8 == 0) {
    puVar34 = (uint *)0x0;
  }
  puVar18[8] = uVar28;
  uVar29 = 0;
  puVar18[7] = 0x3ffffffe;
  puVar18[0x12] = local_1b4;
  *(undefined1 *)(puVar18 + 6) = 0;
  puVar18[4] = 0;
  puVar18[5] = 0;
  *(undefined1 *)(puVar18 + 3) = 0;
  puVar18[2] = 0x1fffffff;
  *(undefined8 *)(puVar18 + 10) = unaff_d9;
  puVar18[0x13] = local_1b0;
  *(double *)(puVar18 + 0xe) = unaff_d8;
  puVar18[0xc] = uVar41;
  ppuVar42 = &local_90;
  iVar1 = (int)puVar34 * 0x30;
  local_110 = (uint *)(uint)(local_f8 != 0);
  puVar18[9] = uVar39;
  puVar18[0xd] = unaff_r11;
  local_fc = 0;
  local_10c = (uint *)0x0;
  local_100 = local_110;
  local_f0 = puVar34;
  local_108 = local_f8;
  puStack_104 = local_f4;
  if ((uint *)0x2aaaaaa < puVar34) {
LAB_00b51c30:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar29,iVar1);
  }
  if (iVar1 == 0) {
    local_14c = (uint *)0x8;
    local_150 = (uint *)0x0;
  }
  else {
    uVar29 = 8;
    local_14c = (uint *)FUN_01298504(iVar1,8);
    local_150 = puVar34;
    if (local_14c == (uint *)0x0) goto LAB_00b51c30;
  }
  local_148 = 0;
  local_c0 = local_110;
  local_bc = local_10c;
  local_b8 = local_108;
  local_b4 = puStack_104;
  local_b0 = local_100;
  uStack_ac = local_fc;
  local_a8 = local_f8;
  puStack_a4 = local_f4;
  local_a0 = local_f0;
  if (local_150 < local_f0) {
    FUN_0132b898(&local_150,0,local_f0,8,0x30);
  }
  ppuVar35 = &local_d0;
  ppuVar43 = &local_140;
  local_90 = local_110;
  local_8c = local_10c;
  local_88 = local_108;
  local_84 = puStack_104;
  local_80 = local_100;
  local_7c = (uint *)local_fc;
  local_78 = local_f8;
  local_74 = local_f4;
  local_70 = local_f0;
  puVar32 = (undefined1 *)((int)local_14c + local_148 * 0x30 + 0x2c);
  uVar28 = local_148;
  while( true ) {
    FUN_0124e9bc(ppuVar35,ppuVar42);
    bVar48 = local_d0 == (uint *)0x0;
    uVar39 = extraout_r3;
    puVar34 = local_d0;
    uVar41 = extraout_r2;
    if (!bVar48) {
      local_140 = (uint *)local_d0[local_c8 * 3 + 0x6f];
      local_13c = (uint *)local_d0[local_c8 * 3 + 0x70];
      local_138 = local_d0[local_c8 * 3 + 0x71];
      puVar34 = local_d0 + local_c8 * 10;
      uVar41 = *puVar34;
      uVar39 = puVar34[1];
      bVar48 = uVar41 == 2 && uVar39 == 0;
    }
    if (bVar48) break;
    uVar49 = *(undefined8 *)(puVar34 + 6);
    uVar28 = uVar28 + 1;
    uVar50 = *(undefined8 *)(puVar34 + 2);
    uVar30 = puVar34[4];
    uVar31 = puVar34[5];
    uVar26 = puVar34[8];
    *(uint *)(puVar32 + -0x2c) = uVar41;
    *(uint *)(puVar32 + -0x28) = uVar39;
    *(undefined8 *)(puVar32 + -0x14) = uVar49;
    *(undefined8 *)(puVar32 + -0x24) = uVar50;
    *(uint *)(puVar32 + -0x1c) = uVar30;
    *(uint *)(puVar32 + -0x18) = uVar31;
    *(uint **)(puVar32 + -0xc) = local_140;
    *(uint **)(puVar32 + -8) = local_13c;
    *(uint *)(puVar32 + -4) = local_138;
    *puVar32 = (char)uVar26;
    puVar32 = puVar32 + 0x30;
  }
  local_148 = uVar28;
  FUN_0124f380(&local_90);
  local_70 = local_150;
  local_6c = (uint)local_14c;
  uStack_68 = local_148;
  local_74 = (uint *)0x3ffffffe;
  local_78 = local_78 & 0xffffff00;
  local_7c = (uint *)0x0;
  local_80 = (uint *)0x0;
  local_84 = (uint *)((uint)local_84 & 0xffffff00);
  local_88 = 0x1fffffff;
  local_8c = (uint *)0x1;
  local_90 = (uint *)&DAT_00000001;
  puVar19 = (undefined4 *)thunk_FUN_01be5118(0x2c);
  if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *puVar19 = local_90;
  puVar19[1] = local_8c;
  puVar19[2] = local_88;
  puVar19[3] = local_84;
  puVar19[4] = local_80;
  puVar19[5] = local_7c;
  puVar19[6] = local_78;
  puVar19[7] = local_74;
  puVar19[8] = local_70;
  puVar19[9] = local_6c;
  puVar19[10] = uStack_68;
  uVar26 = *param_2;
  uVar41 = param_2[1];
  puVar34 = local_74;
  uVar39 = uStack_68;
  if (uVar26 != 2 || uVar41 != 0) {
    unaff_d11 = *(undefined8 *)(param_2 + 2);
    ppuVar42 = (uint **)*local_1ac;
    ppuVar43 = (uint **)param_2[5];
    ppuVar35 = (uint **)param_2[0xc];
    uVar28 = param_2[0xd];
    unaff_d10 = *(undefined8 *)(param_2 + 6);
    unaff_d9 = *(undefined8 *)(param_2 + 10);
    unaff_d8 = *(double *)(param_2 + 0xe);
    local_1b4 = param_2[9];
    puVar34 = (uint *)param_2[8];
    uVar39 = (uint)(byte)param_2[0x10];
  }
  puVar20 = (undefined4 *)thunk_FUN_01be5118(0x68);
  if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  puVar20[7] = 0x3ffffffe;
  *(undefined1 *)(puVar20 + 6) = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  *(undefined1 *)(puVar20 + 3) = 0;
  puVar20[2] = 0x1fffffff;
  puVar20[0x10] = puVar34;
  *puVar20 = 1;
  uVar30 = param_2[0x26];
  puVar20[1] = 1;
  *(undefined8 *)(puVar20 + 10) = unaff_d11;
  *(undefined8 *)(puVar20 + 0xe) = unaff_d10;
  *(undefined8 *)(puVar20 + 0x12) = unaff_d9;
  *(char *)(puVar20 + 0x18) = (char)uVar39;
  *(double *)(puVar20 + 0x16) = unaff_d8;
  puVar20[8] = uVar26;
  puVar20[0xc] = ppuVar42;
  puVar20[0x14] = ppuVar35;
  puVar20[9] = uVar41;
  puVar20[0xd] = ppuVar43;
  puVar20[0x11] = local_1b4;
  puVar20[0x15] = uVar28;
  if (uVar30 != 2) {
    local_1c4 = param_2[0x28];
    local_1c0 = param_2[0x29];
    local_1bc = param_2[0x2a];
    uVar39 = param_2[0x27];
    ppuVar43 = (uint **)param_2[0x2d];
    ppuVar42 = (uint **)param_2[0x2e];
    uVar28 = param_2[0x2f];
    ppuVar35 = (uint **)param_2[0x30];
    uVar41 = param_2[0x31];
    uVar26 = (uint)(byte)param_2[0x32];
    local_1b8 = param_2[0x2b];
    local_1b4 = param_2[0x2c];
  }
  puVar21 = (undefined4 *)thunk_FUN_01be5118(0x54);
  if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  puVar21[7] = 0x3ffffffe;
  puVar21[8] = uVar30;
  puVar21[9] = uVar39;
  puVar21[10] = local_1c4;
  puVar21[0xb] = local_1c0;
  puVar21[0xc] = local_1bc;
  puVar21[0xd] = local_1b8;
  puVar21[0xe] = local_1b4;
  *(undefined1 *)(puVar21 + 6) = 0;
  puVar21[4] = 0;
  puVar21[5] = 0;
  *(undefined1 *)(puVar21 + 3) = 0;
  *(char *)(puVar21 + 0x14) = (char)uVar26;
  puVar21[0xf] = ppuVar43;
  puVar21[0x10] = ppuVar42;
  puVar21[0x11] = uVar28;
  puVar21[0x12] = ppuVar35;
  puVar21[0x13] = uVar41;
  *puVar21 = 1;
  puVar21[1] = 1;
  puVar21[2] = 0x1fffffff;
  uVar28 = param_2[0x36];
  uVar39 = param_2[0x37];
  if (uVar28 != 2 || uVar39 != 0) {
    ppuVar42 = (uint **)param_2[0x3a];
    ppuVar43 = (uint **)param_2[0x3b];
    ppuVar35 = (uint **)(uint)(byte)param_2[0x3c];
    uVar26 = (uint)*(byte *)((int)param_2 + 0xf1);
    unaff_d8 = *(double *)(param_2 + 0x38);
  }
  puVar22 = (undefined4 *)thunk_FUN_01be5118(0x40);
  if (puVar22 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x40);
  }
  puVar22[8] = uVar28;
  *(char *)((int)puVar22 + 0x39) = (char)uVar26;
  uVar41 = param_2[0x3e];
  uVar28 = param_2[0x3f];
  *(char *)(puVar22 + 0xe) = (char)ppuVar35;
  puVar22[0xc] = ppuVar42;
  puVar22[0xd] = ppuVar43;
  *(double *)(puVar22 + 10) = unaff_d8;
  puVar22[7] = 0x3ffffffe;
  puVar22[2] = 0x1fffffff;
  *(undefined1 *)(puVar22 + 6) = 0;
  puVar22[4] = 0;
  puVar22[5] = 0;
  *(undefined1 *)(puVar22 + 3) = 0;
  *puVar22 = 1;
  puVar22[1] = 1;
  puVar22[9] = uVar39;
  if (!(uVar41 == 2 && uVar28 == 0)) {
    local_1b4 = param_2[0x43];
    local_1c8 = param_2[0x46];
    local_1c4 = param_2[0x47];
    local_1bc = param_2[0x48];
    unaff_d8 = (double)(float)param_2[0x4b];
    local_1ac = (uint *)param_2[0x49];
    local_1c0 = param_2[0x4c];
    local_1b8 = param_2[0x4d];
    uVar26 = param_2[0x42];
    ppuVar43 = (uint **)param_2[0x4a];
    uVar39 = (uint)*(byte *)((int)param_2 + 0x13a);
    local_1cc = (undefined1)param_2[0x4e];
    unaff_d10 = *(undefined8 *)(param_2 + 0x40);
    unaff_d9 = *(undefined8 *)(param_2 + 0x44);
    local_1d0 = *(undefined1 *)((int)param_2 + 0x139);
  }
  puVar23 = (undefined4 *)thunk_FUN_01be5118(0x70);
  if (puVar23 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x70);
  }
  puVar23[2] = 0x1fffffff;
  *(undefined1 *)((int)puVar23 + 0x69) = local_1d0;
  *(undefined1 *)(puVar23 + 0x1a) = local_1cc;
  puVar23[0x14] = local_1c8;
  puVar23[0x15] = local_1c4;
  puVar23[0x16] = local_1bc;
  puVar23[0x17] = local_1ac;
  puVar23[0xc] = uVar26;
  puVar23[0x10] = ppuVar43;
  puVar23[0x18] = local_1c0;
  *(char *)((int)puVar23 + 0x6a) = (char)uVar39;
  puVar23[7] = 0x3ffffffe;
  *(undefined1 *)(puVar23 + 6) = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  *(undefined1 *)(puVar23 + 3) = 0;
  *puVar23 = 1;
  puVar23[1] = 1;
  *(undefined8 *)(puVar23 + 10) = unaff_d10;
  *(undefined8 *)(puVar23 + 0xe) = unaff_d9;
  puVar23[0x19] = local_1b8;
  *(double *)(puVar23 + 0x12) = unaff_d8;
  puVar23[0xd] = local_1b4;
  puVar23[8] = uVar41;
  puVar23[0x11] = 0;
  puVar23[9] = uVar28;
  uVar41 = param_2[0x50];
  uVar39 = param_2[0x51];
  uVar28 = param_2[0x52];
  puVar24 = (undefined4 *)thunk_FUN_01be5118(0x2c);
  if (puVar24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *(char *)(puVar24 + 10) = (char)uVar28;
  puVar24[7] = 0x3ffffffe;
  puVar24[8] = uVar41;
  puVar24[9] = uVar39;
  *(undefined1 *)(puVar24 + 6) = 0;
  puVar24[4] = 0;
  puVar24[5] = 0;
  *(undefined1 *)(puVar24 + 3) = 0;
  *puVar24 = 1;
  puVar24[1] = 1;
  puVar24[2] = 0x1fffffff;
  uVar28 = param_2[0x33];
  puVar27 = (uint *)param_2[0x34];
  puVar34 = (uint *)param_2[0x35];
  if (uVar28 == 0x80000000) {
    puVar27 = (uint *)&DAT_00000008;
    puVar34 = (uint *)0x0;
    uVar28 = 0;
  }
  iVar1 = (int)puVar34 * 0xc;
  if (puVar34 == (uint *)0x0) {
    iVar25 = 4;
    puVar34 = (uint *)0x0;
  }
  else {
    iVar25 = FUN_01298504((int)puVar34 << 2,4);
    if (iVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,(int)puVar34 << 2);
    }
  }
  iVar33 = 0;
  local_150 = puVar27;
  local_14c = puVar27;
  local_148 = uVar28;
  if (puVar27 != puVar27 + iVar1) {
    puVar44 = puVar27;
    do {
      local_140 = (uint *)*puVar44;
      local_13c = (uint *)puVar44[1];
      local_138 = puVar44[2];
      puStack_134 = (uint *)puVar44[3];
      local_130 = (uint *)puVar44[4];
      local_12c = (uint *)puVar44[5];
      puVar45 = puVar44 + 0xc;
      local_128 = puVar44[6];
      uStack_124 = puVar44[7];
      local_120 = puVar44[8];
      local_11c = (uint *)puVar44[9];
      local_118 = puVar44[10];
      uStack_114 = puVar44[0xb];
      FUN_00b5a49c(&local_e0);
      puVar3 = puStack_134;
      uVar28 = local_138;
      puVar2 = local_13c;
      puVar44 = local_140;
      puVar36 = local_11c;
      if (local_120 == 0x80000000) {
        puVar36 = (uint *)&SUB_00000004;
      }
      uVar39 = local_118;
      if (local_120 == 0x80000000) {
        uVar39 = 0;
      }
      uVar41 = 0;
      if (local_120 != 0x80000000) {
        uVar41 = local_120;
      }
      puVar38 = puVar36;
      puVar47 = puVar36;
      if (uVar39 != 0) {
        iVar40 = uVar39 * 0x28;
        puVar37 = puVar36;
        puVar46 = puVar36;
        local_d0 = puVar36;
        local_c8 = uVar41;
        local_c4 = puVar36 + uVar39 * 10;
        do {
          local_90 = (uint *)*puVar46;
          local_8c = (uint *)puVar46[1];
          local_88 = puVar46[2];
          local_84 = (uint *)puVar46[3];
          local_80 = (uint *)puVar46[4];
          puVar47 = puVar46 + 10;
          local_7c = (uint *)puVar46[5];
          local_78 = puVar46[6];
          local_74 = (uint *)puVar46[7];
          local_70 = (uint *)puVar46[8];
          local_6c = puVar46[9];
          FUN_00b5a49c(&local_58);
          uStack_64 = (uint)local_70;
          uStack_68 = (uint)local_74;
          uVar30 = local_78;
          local_70 = local_7c;
          local_74 = local_80;
          local_78 = (uint)local_84;
          uVar26 = local_88;
          puVar46 = local_8c;
          puVar38 = local_90;
          uVar13 = (undefined1)local_6c;
          local_b4 = local_90;
          local_b0 = local_8c;
          uStack_ac = local_88;
          local_a8 = (uint)local_84;
          puStack_a4 = local_80;
          local_a0 = local_7c;
          local_c0 = local_58;
          local_bc = puStack_54;
          local_b8 = uStack_50;
          local_90 = local_58;
          local_8c = puStack_54;
          local_88 = uStack_50;
          local_84 = puVar38;
          local_80 = puVar46;
          local_7c = (uint *)uVar26;
          local_6c = uVar30;
          local_60 = CONCAT31(local_60._1_3_,uVar13);
          uVar26 = FUN_00b56a78(&local_90);
          puVar38 = puVar37 + 1;
          *puVar37 = uVar26;
          iVar40 = iVar40 + -0x28;
          puVar37 = puVar38;
          puVar46 = puVar47;
        } while (iVar40 != 0);
      }
      local_c8 = 0;
      local_c4 = (uint *)0x4;
      local_cc = 4;
      local_d0 = (uint *)&SUB_00000004;
      uVar26 = (uint)((int)puVar38 - (int)puVar36) >> 2;
      local_90 = puVar36;
      local_8c = (uint *)uVar26;
      local_88 = uVar41;
      FUN_00b59b78(puVar47,((uint)((int)(puVar36 + uVar39 * 10) - (int)puVar47) >> 3) * -0x33333333)
      ;
      local_c0 = (uint *)(uVar41 * 10);
      local_bc = puVar36;
      local_b8 = uVar26;
      FUN_00b59ba4(&local_d0);
      local_e8 = FUN_00b5699c(&local_c0);
      local_100 = local_e0;
      local_fc = uStack_dc;
      local_f8 = uStack_d8;
      local_f4 = local_130;
      local_f0 = local_12c;
      uStack_ec = local_128;
      local_10c = puVar2;
      local_108 = uVar28;
      puStack_104 = puVar3;
      local_110 = puVar44;
      uVar29 = FUN_00b568ac(&local_110);
      *(undefined4 *)(iVar25 + iVar33 * 4) = uVar29;
      iVar33 = iVar33 + 1;
      puVar44 = puVar45;
    } while (puVar45 != puVar27 + iVar1);
    local_14c = puVar45;
  }
  FUN_00b59584(&local_150);
  local_90 = puVar34;
  local_8c = (uint *)iVar25;
  local_88 = iVar33;
  uVar29 = FUN_00b56814();
  *param_1 = puVar4;
  param_1[1] = puVar5;
  param_1[2] = uVar6;
  param_1[3] = puVar7;
  param_1[4] = puVar8;
  param_1[5] = puVar9;
  param_1[6] = uVar10;
  param_1[7] = puVar11;
  param_1[8] = puVar12;
  param_1[9] = uVar14;
  param_1[10] = uVar15;
  param_1[0xb] = uVar16;
  param_1[0xc] = uVar17;
  param_1[0x14] = uVar29;
  param_1[0xd] = puVar18;
  param_1[0xe] = puVar19;
  param_1[0xf] = puVar20;
  param_1[0x10] = puVar21;
  param_1[0x11] = puVar22;
  param_1[0x12] = puVar23;
  param_1[0x13] = puVar24;
  return;
}

