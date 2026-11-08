// FUN_0091d63c @ 0091d63c size=1588 calls_out=14 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0091d63c(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int local_304;
  int local_300;
  undefined1 auStack_2f8 [72];
  int local_2b0 [28];
  int local_240;
  int local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  uint local_220;
  uint uStack_21c;
  uint local_218;
  uint local_214;
  uint uStack_210;
  uint local_20c;
  uint local_208;
  uint uStack_204;
  uint local_200;
  uint local_1fc;
  uint uStack_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  uint local_180;
  uint uStack_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint uStack_164;
  uint local_160;
  uint local_15c;
  uint uStack_158;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  int iStack_124;
  int local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  int iStack_ec;
  undefined1 auStack_e8 [196];
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar10 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar6 = iVar2 * 4 + 4, iVar2 + iVar6 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar6);
  }
  local_230 = *(undefined4 *)(param_2 + 0x30);
  uStack_22c = *(undefined4 *)(param_2 + 0x34);
  uStack_228 = *(undefined4 *)(param_2 + 0x38);
  local_2b0[0] = 4;
  local_234 = iVar9 + iVar10 * 0xc0;
  local_220 = 2;
  puVar3 = (uint *)((uint)&local_198 | 4);
  local_1ec = 0;
  puVar4 = (uint *)((uint)&local_1a8 | 4);
  local_1f4 = 0;
  local_300 = 0;
  local_304 = 8;
  local_1f0 = 8;
  local_240 = iVar9;
  local_23c = iVar9;
  local_238 = uVar8;
LAB_0091d738:
  do {
    FUN_0091dd40(&local_120,auStack_2f8);
    if (local_120 != 2) {
      local_1e8 = local_114;
      uStack_1e4 = uStack_110;
      uStack_1e0 = uStack_10c;
      param_1[8] = local_108;
      param_1[9] = uStack_104;
      param_1[10] = local_100;
      param_1[0xb] = uStack_fc;
      param_1[0xc] = uStack_f8;
      param_1[0xd] = uStack_f4;
      param_1[2] = local_120;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[3] = local_11c;
      param_1[4] = local_118;
      param_1[5] = local_114;
      param_1[6] = uStack_110;
      param_1[7] = uStack_10c;
LAB_0091d984:
      bVar1 = true;
LAB_0091d98c:
      FUN_00953170(local_304,local_300);
      if (local_1f4 != 0) {
        thunk_FUN_016d3fb4(local_304);
      }
      if ((bool)(bVar1 & local_220 != 2)) {
        if ((local_218 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_214);
        }
        if ((local_20c & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_208);
        }
        if ((local_200 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1fc);
        }
      }
      FUN_009248d4(&local_240);
LAB_0091d9f4:
      if (local_2b0[0] != 4) {
        FUN_00919614(auStack_2f8);
        FUN_008f91a8(local_2b0);
      }
      return;
    }
    local_1e8 = local_114;
    uStack_1e4 = uStack_110;
    uStack_1e0 = uStack_10c;
    if (local_118 != 0x80000015) {
      if (local_118 == 0x80000016) {
        bVar1 = local_220 == 2;
        if (local_220 == 2) {
          FUN_009243d8(&local_120,&DAT_003e8611,6);
          local_150 = local_11c;
          uStack_14c = local_118;
          uStack_148 = local_114;
          uStack_144 = uStack_110;
          local_140 = uStack_10c;
          local_13c = local_108;
          local_138 = uStack_104;
          uStack_134 = local_100;
          uStack_130 = uStack_fc;
          uStack_12c = uStack_f8;
          uStack_128 = uStack_f4;
          if (local_120 != 2) {
            param_1[3] = local_11c;
            param_1[4] = local_118;
            param_1[5] = local_114;
            param_1[6] = uStack_110;
            param_1[7] = uStack_10c;
            param_1[8] = local_108;
            param_1[9] = uStack_104;
            param_1[10] = local_100;
            param_1[0xb] = uStack_fc;
            param_1[0xc] = uStack_f8;
            param_1[0xd] = uStack_f4;
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_120;
            goto LAB_0091d98c;
          }
          local_180 = local_11c;
          uStack_17c = local_118;
          local_178 = local_114;
          local_174 = uStack_110;
          local_170 = uStack_10c;
          local_16c = local_108;
          local_168 = uStack_104;
          uStack_164 = local_100;
          local_160 = uStack_fc;
          local_15c = uStack_f8;
          uStack_158 = uStack_f4;
        }
        else {
          local_180 = local_220;
          uStack_17c = uStack_21c;
          local_178 = local_218;
          local_174 = local_214;
          local_170 = uStack_210;
          local_16c = local_20c;
          local_168 = local_208;
          uStack_164 = uStack_204;
          local_160 = local_200;
          local_15c = local_1fc;
          uStack_158 = uStack_1f8;
        }
        FUN_009314ac(&local_120,local_304,local_300);
        local_150 = local_118;
        uStack_14c = local_114;
        uStack_148 = uStack_110;
        uStack_144 = uStack_10c;
        local_140 = local_108;
        local_13c = uStack_104;
        local_138 = local_100;
        uStack_134 = uStack_fc;
        uStack_130 = uStack_f8;
        uStack_12c = uStack_f4;
        uStack_128 = uStack_f0;
        iStack_124 = iStack_ec;
        if (local_120 != 3 || local_11c != 0) {
          FUN_016dd1aa(param_1 + 0xe,auStack_e8,0xc0);
          param_1[2] = local_150;
          param_1[3] = uStack_14c;
          param_1[4] = uStack_148;
          param_1[5] = uStack_144;
          param_1[6] = local_140;
          param_1[7] = local_13c;
          param_1[8] = local_138;
          param_1[9] = uStack_134;
          param_1[10] = uStack_130;
          param_1[0xb] = uStack_12c;
          param_1[0xc] = uStack_128;
          param_1[0xd] = iStack_124;
          param_1[0x3e] = local_180;
          param_1[0x3f] = uStack_17c;
          param_1[0x40] = local_178;
          param_1[0x41] = local_174;
          param_1[0x42] = local_170;
          param_1[0x43] = local_16c;
          param_1[0x44] = local_168;
          param_1[0x45] = uStack_164;
          param_1[0x46] = local_160;
          param_1[0x47] = local_15c;
          param_1[0x48] = uStack_158;
          *param_1 = local_120;
          param_1[1] = local_11c;
          FUN_00953170(local_304,local_300);
          if (local_1f4 != 0) {
            thunk_FUN_016d3fb4(local_304);
          }
          FUN_009248d4(&local_240);
          goto LAB_0091d9f4;
        }
        param_1[2] = local_118;
        param_1[3] = local_114;
        param_1[4] = uStack_110;
        param_1[5] = uStack_10c;
        param_1[6] = local_108;
        param_1[7] = uStack_104;
        param_1[8] = local_100;
        param_1[9] = uStack_fc;
        param_1[10] = uStack_f8;
        param_1[0xb] = uStack_f4;
        param_1[0xc] = uStack_f0;
        param_1[0xd] = iStack_ec;
        *param_1 = 3;
        param_1[1] = 0;
        if ((local_178 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_174);
        }
        if ((local_16c & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_168);
        }
        if ((local_160 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_15c);
        }
        goto LAB_0091d98c;
      }
      local_1a8 = local_118;
      *puVar4 = local_114;
      puVar4[1] = uStack_110;
      puVar4[2] = uStack_10c;
      FUN_0091976c(&local_120,auStack_2f8);
      if (local_120 != 2) {
        piVar7 = (int *)((uint)&local_120 | 4);
        local_198 = *piVar7;
        iStack_194 = piVar7[1];
        iStack_190 = piVar7[2];
        iStack_18c = piVar7[3];
        iStack_188 = piVar7[4];
        param_1[8] = local_108;
        param_1[9] = uStack_104;
        param_1[10] = local_100;
        param_1[0xb] = uStack_fc;
        param_1[0xc] = uStack_f8;
        param_1[0xd] = uStack_f4;
        param_1[3] = local_198;
        param_1[4] = iStack_194;
        param_1[5] = iStack_190;
        param_1[6] = iStack_18c;
        param_1[7] = iStack_188;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_120;
        FUN_008f7448(&local_1a8);
        goto LAB_0091d984;
      }
      *puVar3 = local_118;
      puVar3[1] = local_114;
      puVar3[2] = uStack_110;
      puVar3[3] = uStack_10c;
      local_170 = *puVar3;
      local_16c = puVar3[1];
      local_168 = puVar3[2];
      uStack_164 = puVar3[3];
      local_150 = local_1a8;
      uStack_14c = uStack_1a4;
      uStack_148 = uStack_1a0;
      uStack_144 = uStack_19c;
      local_180 = local_1a8;
      uStack_17c = uStack_1a4;
      local_178 = uStack_1a0;
      local_174 = uStack_19c;
      local_140 = local_170;
      local_13c = local_16c;
      local_138 = local_168;
      uStack_134 = uStack_164;
      if (local_300 == local_1f4) {
        FUN_009f4b90(&local_1f4);
        local_304 = local_1f0;
      }
      puVar5 = (uint *)(local_304 + local_300 * 0x20);
      local_300 = local_300 + 1;
      *puVar5 = local_180;
      puVar5[1] = uStack_17c;
      puVar5[2] = local_178;
      puVar5[3] = local_174;
      puVar5[4] = local_170;
      puVar5[5] = local_16c;
      puVar5[6] = local_168;
      puVar5[7] = uStack_164;
      local_1ec = local_300;
      goto LAB_0091d738;
    }
    if (local_220 != 2) {
      FUN_009244cc(&local_120,&DAT_003e8611,6);
      param_1[2] = local_120;
      param_1[3] = local_11c;
      param_1[4] = local_118;
      param_1[5] = local_114;
      param_1[6] = uStack_110;
      param_1[7] = uStack_10c;
      param_1[8] = local_108;
      param_1[9] = uStack_104;
      param_1[10] = local_100;
      param_1[0xb] = uStack_fc;
      param_1[0xc] = uStack_f8;
      param_1[0xd] = uStack_f4;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_0091d984;
    }
    FUN_0091dfac(&local_120,auStack_2f8);
    uStack_21c = local_118;
    uStack_210 = uStack_10c;
    uStack_204 = local_100;
    uStack_1f8 = uStack_f4;
    if (local_120 != 2) {
      param_1[3] = local_11c;
      param_1[4] = local_118;
      param_1[5] = local_114;
      param_1[6] = uStack_110;
      param_1[7] = uStack_10c;
      param_1[8] = local_108;
      param_1[9] = uStack_104;
      param_1[10] = local_100;
      param_1[0xb] = uStack_fc;
      param_1[0xc] = uStack_f8;
      param_1[0xd] = uStack_f4;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_120;
      goto LAB_0091d984;
    }
    local_220 = local_11c;
    local_218 = local_114;
    local_214 = uStack_110;
    local_20c = local_108;
    local_208 = uStack_104;
    local_200 = uStack_fc;
    local_1fc = uStack_f8;
  } while( true );
}

