// FUN_00a12820 @ 00a12820 size=1848 calls_out=16 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a12820(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint extraout_r1;
  undefined4 *puVar5;
  uint extraout_r3;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint **ppuVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 extraout_r12_03;
  undefined4 extraout_r12_04;
  undefined4 uVar17;
  undefined8 uVar18;
  uint local_228;
  uint *local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint **local_214;
  uint *local_20c;
  uint local_200;
  uint *local_1fc;
  uint **local_1f8;
  undefined1 auStack_1f0 [80];
  uint *local_1a0;
  uint *local_19c;
  uint local_198;
  uint *local_194;
  uint **local_190;
  uint *local_18c;
  uint *local_188;
  uint local_184;
  uint local_180;
  uint *puStack_17c;
  uint local_178;
  uint local_174;
  uint uStack_170;
  uint **local_16c;
  undefined4 local_168;
  undefined4 local_164;
  uint *puStack_160;
  int local_15c;
  uint *local_158;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint local_144;
  uint local_140;
  uint **local_13c;
  uint *local_138;
  uint *local_134;
  uint local_130;
  uint local_12c;
  uint *puStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint **local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  uint *puStack_10c;
  int iStack_108;
  uint *puStack_104;
  uint local_100;
  uint uStack_fc;
  uint *puStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint **local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint *puStack_dc;
  int iStack_d8;
  uint *puStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *puStack_98;
  uint *local_94;
  uint *puStack_90;
  uint *puStack_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint local_78;
  uint uStack_74;
  uint **ppuStack_70;
  uint *local_6c [3];
  uint local_60 [4];
  uint local_50;
  uint uStack_4c;
  uint **ppuStack_48;
  uint *local_40;
  uint *puStack_3c;
  uint uStack_38;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[8]) {
  case '\0':
    *(undefined1 *)((int)param_2 + 0x21) = 1;
    *(undefined2 *)((int)param_2 + 0x22) = 0;
    local_218 = param_2[4];
    local_228 = param_2[5];
    local_200 = *param_2;
    puVar9 = (uint *)param_2[1];
    ppuVar10 = (uint **)param_2[2];
    puVar4 = puVar9 + (int)ppuVar10 * 3;
    iVar14 = (int)ppuVar10 * 0xc;
    puVar11 = puVar9;
    do {
      local_20c = puVar9;
      local_1fc = puVar9;
      local_1f8 = ppuVar10;
      if (iVar14 == 0) {
        uVar18 = thunk_FUN_01bee35a(0,0x2c0);
        puVar11 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
        if ((char)puVar11[4] == '\0') {
          FUN_019ae6ac(&local_1a0);
          *puVar11 = (uint)local_1a0;
          puVar11[1] = (uint)local_19c;
          puVar11[2] = local_198;
          puVar11[3] = (uint)local_194;
          *(undefined1 *)(puVar11 + 4) = 1;
        }
        uVar1 = local_200;
        local_140 = *puVar11;
        local_13c = (uint **)puVar11[1];
        local_138 = (uint *)puVar11[2];
        local_134 = (uint *)puVar11[3];
        *puVar11 = local_140 + 1;
        puVar11[1] = (int)local_13c + (uint)(0xfffffffe < local_140);
        local_150 = &DAT_0056d238;
        local_14c = (uint *)0x0;
        local_148 = (uint *)0x0;
        local_144 = 0;
        local_198 = local_200;
        local_21c = local_200;
        puVar11 = puVar9;
        puVar15 = puVar9;
        local_190 = &local_150;
        if (ppuVar10 != (uint **)0x0) {
          puVar8 = puVar9;
          local_1a0 = puVar9;
          local_194 = puVar4;
          do {
            puVar11 = puVar8;
            uVar7 = *puVar11;
            uVar6 = puVar11[1];
            uVar12 = puVar11[2];
            FUN_006666fc(&local_78,uVar6,uVar12);
            iVar14 = FUN_015dcc90(&local_150,&local_78);
            if (iVar14 == 0) {
              *puVar15 = uVar7;
              puVar15[1] = uVar6;
              puVar15[2] = uVar12;
              puVar15 = puVar15 + 3;
            }
            else {
              FUN_019bb7e0(uVar7,uVar6);
            }
            puVar8 = puVar11 + 3;
          } while (puVar11 + 3 != puVar4);
          puVar11 = puVar11 + 3;
        }
        puVar8 = puVar11 + 1;
        local_194 = (uint *)0x4;
        local_19c = (uint *)&SUB_00000004;
        local_1a0 = (uint *)&SUB_00000004;
        local_198 = 0;
        for (iVar14 = ((uint)((int)puVar4 - (int)puVar11) >> 2) * -0x55555555; iVar14 != 0;
            iVar14 = iVar14 + -1) {
          FUN_019bb7e0(puVar8[-1],*puVar8);
          puVar8 = puVar8 + 3;
        }
        FUN_01323e8c(&local_1a0);
        FUN_015d1344(&local_150);
        local_30 = uVar1;
        local_28 = ((uint)((int)puVar15 - (int)puVar9) >> 2) * -0x55555555;
        local_2c = puVar9;
        FUN_006a41c0(&local_30);
        if (puVar15 == puVar9) {
          param_2[6] = local_218;
          param_2[7] = local_228;
          *(undefined1 *)((int)param_2 + 0x21) = 0;
          goto LAB_00a128e0;
        }
        puVar15 = (uint *)&DAT_00000001;
        puStack_10c = puVar8;
        uVar17 = extraout_r12_01;
        local_220 = param_3;
        local_214 = ppuVar10;
        goto LAB_00a12b34;
      }
      puVar15 = puVar11 + 2;
      iVar14 = iVar14 + -0xc;
      puVar11 = puVar11 + 3;
    } while (*puVar15 != 0);
    FUN_006a41c0(&local_200);
    puVar15 = (uint *)0x0;
    uVar17 = extraout_r12;
LAB_00a12b38:
    if (*(char *)((int)param_2 + 0x21) != '\0') {
      FUN_01139b38(local_218,local_228);
      uVar17 = extraout_r12_02;
    }
    *(undefined1 *)((int)param_2 + 0x21) = 0;
    if (*(char *)((int)param_2 + 0x23) != '\0') {
      FUN_01139b38(param_2[4],param_2[5]);
      uVar17 = extraout_r12_03;
    }
    uVar16 = 5;
    if (*(char *)((int)param_2 + 0x22) != '\0') {
      FUN_006a41c0(param_2);
      uVar17 = extraout_r12_04;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0d470);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0d470);
  case '\x03':
    local_218 = param_2[6];
    local_228 = param_2[7];
LAB_00a128e0:
    (**(code **)(local_228 + 0xc))(&local_150,local_218,param_3);
    puVar2 = local_134;
    puVar8 = local_138;
    ppuVar10 = local_13c;
    uVar6 = local_140;
    uVar1 = local_144;
    puVar15 = local_148;
    puVar11 = local_14c;
    puVar4 = local_150;
    if (local_150 == (uint *)0x2) {
      *param_1 = 6;
      param_1[1] = 0;
      uVar3 = 3;
      goto LAB_00a12be4;
    }
    local_21c = local_144;
    local_220 = local_140;
    local_224 = local_134;
    local_20c = local_138;
    local_214 = local_13c;
    local_100 = local_130;
    uStack_fc = local_12c;
    puStack_f8 = puStack_128;
    uStack_f4 = uStack_124;
    uStack_f0 = local_120;
    uStack_ec = uStack_11c;
    local_e8 = local_118;
    uStack_e4 = local_114;
    uStack_e0 = uStack_110;
    puStack_dc = puStack_10c;
    iStack_d8 = iStack_108;
    puStack_d4 = puStack_104;
    FUN_01139b38(param_2[6],param_2[7]);
    uVar17 = extraout_r12_00;
    if (((uint)puVar4 & 1) != 0) {
LAB_00a12b34:
      puVar9 = puStack_10c;
      goto LAB_00a12b38;
    }
    local_184 = local_100;
    local_180 = uStack_fc;
    puStack_17c = puStack_f8;
    local_178 = uStack_f4;
    local_174 = uStack_f0;
    uStack_170 = uStack_ec;
    local_16c = local_e8;
    local_168 = uStack_e4;
    local_164 = uStack_e0;
    puStack_160 = puStack_dc;
    local_15c = iStack_d8;
    local_158 = puStack_d4;
    puVar9 = (uint *)&SUB_00000004;
    local_188 = puVar2;
    local_18c = puVar8;
    local_190 = ppuVar10;
    local_194 = (uint *)uVar6;
    local_198 = uVar1;
    local_19c = puVar15;
    local_1a0 = puVar11;
    local_224 = puStack_d4;
    if (puVar11 != (uint *)&DAT_80000000) {
      FUN_006666fc(&local_88,puVar15);
      FUN_006666fc(&local_50,ppuVar10,puVar8);
      FUN_006666fc(&local_40,local_184,local_180);
      FUN_006666fc(&local_30,local_178,local_174);
      FUN_006666fc(&local_78,local_16c,local_168);
      puVar4 = local_158;
      iVar13 = local_15c;
      local_150 = local_88;
      local_14c = local_84;
      local_148 = local_80;
      local_144 = local_50;
      local_140 = uStack_4c;
      local_13c = ppuStack_48;
      local_138 = local_40;
      local_134 = puStack_3c;
      local_130 = uStack_38;
      local_12c = local_30;
      puStack_128 = local_2c;
      uStack_124 = local_28;
      uVar17 = 0;
      local_120 = local_78;
      uStack_11c = uStack_74;
      local_118 = ppuStack_70;
      local_114 = local_164;
      iVar14 = (int)local_158 * 0x24;
      if ((uint *)0x38e38e3 < local_158) {
LAB_00a12d6c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar17,iVar14);
      }
      if (iVar14 == 0) {
        local_84 = (uint *)&SUB_00000004;
        local_88 = (uint *)0x0;
      }
      else {
        uVar17 = 4;
        local_84 = (uint *)FUN_01298504(iVar14,4);
        if (local_84 == (uint *)0x0) goto LAB_00a12d6c;
        local_88 = puVar4;
        if (puVar4 != (uint *)0x0) {
          puVar15 = (uint *)0x0;
          local_20c = local_60;
          local_214 = local_6c;
          puVar11 = local_84;
          do {
            if (iVar14 == 0) break;
            FUN_006666fc(&local_50,*(undefined4 *)(iVar13 + 4),*(undefined4 *)(iVar13 + 8));
            FUN_006666fc(&local_40,*(undefined4 *)(iVar13 + 0x10),*(undefined4 *)(iVar13 + 0x14));
            FUN_006666fc(&local_30,*(undefined4 *)(iVar13 + 0x1c),*(undefined4 *)(iVar13 + 0x20));
            puVar15 = (uint *)((int)puVar15 + 1);
            iVar13 = iVar13 + 0x24;
            iVar14 = iVar14 + -0x24;
            local_78 = local_50;
            uStack_74 = uStack_4c;
            ppuStack_70 = ppuStack_48;
            *puVar11 = local_50;
            puVar11[1] = uStack_4c;
            puVar11[2] = (uint)ppuStack_48;
            puVar11[3] = (uint)local_40;
            puVar11[4] = (uint)puStack_3c;
            puVar11[5] = uStack_38;
            puVar11[6] = local_30;
            puVar11[7] = (uint)local_2c;
            puVar11[8] = local_28;
            puVar11 = puVar11 + 9;
          } while (puVar4 != puVar15);
        }
      }
      puVar11 = local_150;
      local_80 = puVar4;
      local_94 = local_88;
      puStack_90 = local_84;
      puStack_8c = puVar4;
      puVar5 = (undefined4 *)((uint)&local_150 | 4);
      local_d0 = *puVar5;
      uStack_cc = puVar5[1];
      uStack_c8 = puVar5[2];
      uStack_c4 = puVar5[3];
      uStack_c0 = puVar5[4];
      local_bc = puVar5[5];
      uStack_b8 = puVar5[6];
      uStack_b4 = puVar5[7];
      uStack_b0 = puVar5[8];
      uStack_ac = puVar5[9];
      local_a8 = puVar5[10];
      uStack_a4 = puVar5[0xb];
      uStack_a0 = puVar5[0xc];
      uStack_9c = puVar5[0xd];
      local_224 = (uint *)puVar5[0xe];
      puStack_98 = local_224;
      if (local_150 == (uint *)&DAT_80000000) {
        puVar9 = (uint *)&SUB_00000004;
      }
      else {
        FUN_01bed4e2(&local_14c,&local_d0,0x48);
        puVar4 = (uint *)thunk_FUN_01be5118(0x4c);
        if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x4c);
        }
        *puVar4 = (uint)puVar11;
        FUN_01bed4e2(puVar4 + 1,&local_d0,0x48);
        puVar9 = (uint *)0x2;
      }
    }
    FUN_01bed4e2(auStack_1f0,&local_1a0,0x4c);
    uVar17 = 0;
    uVar16 = 4;
    *(undefined1 *)((int)param_2 + 0x21) = 0;
    local_21c = extraout_r1;
    local_220 = extraout_r3;
  }
  param_1[0x12] = puVar9;
  param_1[3] = local_21c;
  param_1[6] = local_20c;
  param_1[5] = local_214;
  param_1[0x13] = uVar17;
  param_1[7] = local_224;
  param_1[0x27] = puVar4;
  param_1[0x24] = 0x80000000;
  *param_1 = uVar16;
  param_1[1] = 0;
  param_1[2] = puVar15;
  param_1[4] = local_220;
  FUN_01bed4e2(param_1 + 0x28,auStack_1f0,0x4c);
  uVar3 = 1;
  param_1[0x3b] = 0x80000000;
LAB_00a12be4:
  *(undefined1 *)(param_2 + 8) = uVar3;
  return;
}

