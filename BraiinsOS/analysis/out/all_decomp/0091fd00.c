// FUN_0091fd00 @ 0091fd00 size=1588 calls_out=14 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0091fd00(int *param_1,int param_2)

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
  int local_33c;
  int local_338;
  undefined1 auStack_330 [72];
  int local_2e8 [28];
  int local_278;
  int local_274;
  undefined4 local_270;
  int local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  uint local_258;
  uint uStack_254;
  uint local_250;
  uint local_24c;
  uint uStack_248;
  uint local_244;
  uint local_240;
  uint uStack_23c;
  uint local_238;
  uint local_234;
  uint uStack_230;
  int local_22c;
  int local_228;
  int local_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint local_198;
  uint local_194;
  uint uStack_190;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  int iStack_15c;
  int local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  int iStack_124;
  undefined1 auStack_120 [252];
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar10 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar6 = iVar2 * 4 + 4, iVar2 + iVar6 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar6);
  }
  local_268 = *(undefined4 *)(param_2 + 0x30);
  uStack_264 = *(undefined4 *)(param_2 + 0x34);
  uStack_260 = *(undefined4 *)(param_2 + 0x38);
  local_2e8[0] = 4;
  local_26c = iVar9 + iVar10 * 0xc0;
  local_258 = 2;
  puVar3 = (uint *)((uint)&local_1d0 | 4);
  local_224 = 0;
  puVar4 = (uint *)((uint)&local_1e0 | 4);
  local_22c = 0;
  local_338 = 0;
  local_33c = 8;
  local_228 = 8;
  local_278 = iVar9;
  local_274 = iVar9;
  local_270 = uVar8;
LAB_0091fdfc:
  do {
    FUN_0091dd40(&local_158,auStack_330);
    if (local_158 != 2) {
      local_220 = local_14c;
      uStack_21c = uStack_148;
      uStack_218 = uStack_144;
      param_1[8] = local_140;
      param_1[9] = uStack_13c;
      param_1[10] = local_138;
      param_1[0xb] = uStack_134;
      param_1[0xc] = uStack_130;
      param_1[0xd] = uStack_12c;
      param_1[2] = local_158;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[3] = local_154;
      param_1[4] = local_150;
      param_1[5] = local_14c;
      param_1[6] = uStack_148;
      param_1[7] = uStack_144;
LAB_00920048:
      bVar1 = true;
LAB_00920050:
      FUN_00953170(local_33c,local_338);
      if (local_22c != 0) {
        thunk_FUN_016d3fb4(local_33c);
      }
      if ((bool)(bVar1 & local_258 != 2)) {
        if ((local_250 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_24c);
        }
        if ((local_244 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_240);
        }
        if ((local_238 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_234);
        }
      }
      FUN_009248d4(&local_278);
LAB_009200b8:
      if (local_2e8[0] != 4) {
        FUN_00919614(auStack_330);
        FUN_008f91a8(local_2e8);
      }
      return;
    }
    local_220 = local_14c;
    uStack_21c = uStack_148;
    uStack_218 = uStack_144;
    if (local_150 != 0x80000015) {
      if (local_150 == 0x80000016) {
        bVar1 = local_258 == 2;
        if (local_258 == 2) {
          FUN_009243d8(&local_158,&DAT_003e8611,6);
          local_188 = local_154;
          uStack_184 = local_150;
          uStack_180 = local_14c;
          uStack_17c = uStack_148;
          local_178 = uStack_144;
          local_174 = local_140;
          local_170 = uStack_13c;
          uStack_16c = local_138;
          uStack_168 = uStack_134;
          uStack_164 = uStack_130;
          uStack_160 = uStack_12c;
          if (local_158 != 2) {
            param_1[3] = local_154;
            param_1[4] = local_150;
            param_1[5] = local_14c;
            param_1[6] = uStack_148;
            param_1[7] = uStack_144;
            param_1[8] = local_140;
            param_1[9] = uStack_13c;
            param_1[10] = local_138;
            param_1[0xb] = uStack_134;
            param_1[0xc] = uStack_130;
            param_1[0xd] = uStack_12c;
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_158;
            goto LAB_00920050;
          }
          local_1b8 = local_154;
          uStack_1b4 = local_150;
          local_1b0 = local_14c;
          local_1ac = uStack_148;
          local_1a8 = uStack_144;
          local_1a4 = local_140;
          local_1a0 = uStack_13c;
          uStack_19c = local_138;
          local_198 = uStack_134;
          local_194 = uStack_130;
          uStack_190 = uStack_12c;
        }
        else {
          local_1b8 = local_258;
          uStack_1b4 = uStack_254;
          local_1b0 = local_250;
          local_1ac = local_24c;
          local_1a8 = uStack_248;
          local_1a4 = local_244;
          local_1a0 = local_240;
          uStack_19c = uStack_23c;
          local_198 = local_238;
          local_194 = local_234;
          uStack_190 = uStack_230;
        }
        FUN_0095048c(&local_158,local_33c,local_338);
        local_188 = local_150;
        uStack_184 = local_14c;
        uStack_180 = uStack_148;
        uStack_17c = uStack_144;
        local_178 = local_140;
        local_174 = uStack_13c;
        local_170 = local_138;
        uStack_16c = uStack_134;
        uStack_168 = uStack_130;
        uStack_164 = uStack_12c;
        uStack_160 = uStack_128;
        iStack_15c = iStack_124;
        if (local_158 != 3 || local_154 != 0) {
          FUN_016dd1aa(param_1 + 0xe,auStack_120,0xf8);
          param_1[2] = local_188;
          param_1[3] = uStack_184;
          param_1[4] = uStack_180;
          param_1[5] = uStack_17c;
          param_1[6] = local_178;
          param_1[7] = local_174;
          param_1[8] = local_170;
          param_1[9] = uStack_16c;
          param_1[10] = uStack_168;
          param_1[0xb] = uStack_164;
          param_1[0xc] = uStack_160;
          param_1[0xd] = iStack_15c;
          param_1[0x4c] = local_1b8;
          param_1[0x4d] = uStack_1b4;
          param_1[0x4e] = local_1b0;
          param_1[0x4f] = local_1ac;
          param_1[0x50] = local_1a8;
          param_1[0x51] = local_1a4;
          param_1[0x52] = local_1a0;
          param_1[0x53] = uStack_19c;
          param_1[0x54] = local_198;
          param_1[0x55] = local_194;
          param_1[0x56] = uStack_190;
          *param_1 = local_158;
          param_1[1] = local_154;
          FUN_00953170(local_33c,local_338);
          if (local_22c != 0) {
            thunk_FUN_016d3fb4(local_33c);
          }
          FUN_009248d4(&local_278);
          goto LAB_009200b8;
        }
        param_1[2] = local_150;
        param_1[3] = local_14c;
        param_1[4] = uStack_148;
        param_1[5] = uStack_144;
        param_1[6] = local_140;
        param_1[7] = uStack_13c;
        param_1[8] = local_138;
        param_1[9] = uStack_134;
        param_1[10] = uStack_130;
        param_1[0xb] = uStack_12c;
        param_1[0xc] = uStack_128;
        param_1[0xd] = iStack_124;
        *param_1 = 3;
        param_1[1] = 0;
        if ((local_1b0 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1ac);
        }
        if ((local_1a4 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1a0);
        }
        if ((local_198 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_194);
        }
        goto LAB_00920050;
      }
      local_1e0 = local_150;
      *puVar4 = local_14c;
      puVar4[1] = uStack_148;
      puVar4[2] = uStack_144;
      FUN_0091976c(&local_158,auStack_330);
      if (local_158 != 2) {
        piVar7 = (int *)((uint)&local_158 | 4);
        local_1d0 = *piVar7;
        iStack_1cc = piVar7[1];
        iStack_1c8 = piVar7[2];
        iStack_1c4 = piVar7[3];
        iStack_1c0 = piVar7[4];
        param_1[8] = local_140;
        param_1[9] = uStack_13c;
        param_1[10] = local_138;
        param_1[0xb] = uStack_134;
        param_1[0xc] = uStack_130;
        param_1[0xd] = uStack_12c;
        param_1[3] = local_1d0;
        param_1[4] = iStack_1cc;
        param_1[5] = iStack_1c8;
        param_1[6] = iStack_1c4;
        param_1[7] = iStack_1c0;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_158;
        FUN_008f7448(&local_1e0);
        goto LAB_00920048;
      }
      *puVar3 = local_150;
      puVar3[1] = local_14c;
      puVar3[2] = uStack_148;
      puVar3[3] = uStack_144;
      local_1a8 = *puVar3;
      local_1a4 = puVar3[1];
      local_1a0 = puVar3[2];
      uStack_19c = puVar3[3];
      local_188 = local_1e0;
      uStack_184 = uStack_1dc;
      uStack_180 = uStack_1d8;
      uStack_17c = uStack_1d4;
      local_1b8 = local_1e0;
      uStack_1b4 = uStack_1dc;
      local_1b0 = uStack_1d8;
      local_1ac = uStack_1d4;
      local_178 = local_1a8;
      local_174 = local_1a4;
      local_170 = local_1a0;
      uStack_16c = uStack_19c;
      if (local_338 == local_22c) {
        FUN_009f4b90(&local_22c);
        local_33c = local_228;
      }
      puVar5 = (uint *)(local_33c + local_338 * 0x20);
      local_338 = local_338 + 1;
      *puVar5 = local_1b8;
      puVar5[1] = uStack_1b4;
      puVar5[2] = local_1b0;
      puVar5[3] = local_1ac;
      puVar5[4] = local_1a8;
      puVar5[5] = local_1a4;
      puVar5[6] = local_1a0;
      puVar5[7] = uStack_19c;
      local_224 = local_338;
      goto LAB_0091fdfc;
    }
    if (local_258 != 2) {
      FUN_009244cc(&local_158,&DAT_003e8611,6);
      param_1[2] = local_158;
      param_1[3] = local_154;
      param_1[4] = local_150;
      param_1[5] = local_14c;
      param_1[6] = uStack_148;
      param_1[7] = uStack_144;
      param_1[8] = local_140;
      param_1[9] = uStack_13c;
      param_1[10] = local_138;
      param_1[0xb] = uStack_134;
      param_1[0xc] = uStack_130;
      param_1[0xd] = uStack_12c;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_00920048;
    }
    FUN_0091dfac(&local_158,auStack_330);
    uStack_254 = local_150;
    uStack_248 = uStack_144;
    uStack_23c = local_138;
    uStack_230 = uStack_12c;
    if (local_158 != 2) {
      param_1[3] = local_154;
      param_1[4] = local_150;
      param_1[5] = local_14c;
      param_1[6] = uStack_148;
      param_1[7] = uStack_144;
      param_1[8] = local_140;
      param_1[9] = uStack_13c;
      param_1[10] = local_138;
      param_1[0xb] = uStack_134;
      param_1[0xc] = uStack_130;
      param_1[0xd] = uStack_12c;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_158;
      goto LAB_00920048;
    }
    local_258 = local_154;
    local_250 = local_14c;
    local_24c = uStack_148;
    local_244 = local_140;
    local_240 = uStack_13c;
    local_238 = uStack_134;
    local_234 = uStack_130;
  } while( true );
}

