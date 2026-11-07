// FUN_00920d7c @ 00920d7c size=1588 calls_out=14 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00920d7c(int *param_1,int param_2)

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
  int local_35c;
  int local_358;
  undefined1 auStack_350 [72];
  int local_308 [28];
  int local_298;
  int local_294;
  undefined4 local_290;
  int local_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  uint local_278;
  uint uStack_274;
  uint local_270;
  uint local_26c;
  uint uStack_268;
  uint local_264;
  uint local_260;
  uint uStack_25c;
  uint local_258;
  uint local_254;
  uint uStack_250;
  int local_24c;
  int local_248;
  int local_244;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  uint local_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint local_1b4;
  uint uStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  int iStack_17c;
  int local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  int iStack_144;
  undefined1 auStack_140 [284];
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar10 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar6 = iVar2 * 4 + 4, iVar2 + iVar6 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar6);
  }
  local_288 = *(undefined4 *)(param_2 + 0x30);
  uStack_284 = *(undefined4 *)(param_2 + 0x34);
  uStack_280 = *(undefined4 *)(param_2 + 0x38);
  local_308[0] = 4;
  local_28c = iVar9 + iVar10 * 0xc0;
  local_278 = 2;
  puVar3 = (uint *)((uint)&local_1f0 | 4);
  local_244 = 0;
  puVar4 = (uint *)((uint)&local_200 | 4);
  local_24c = 0;
  local_358 = 0;
  local_35c = 8;
  local_248 = 8;
  local_298 = iVar9;
  local_294 = iVar9;
  local_290 = uVar8;
LAB_00920e78:
  do {
    FUN_0091dd40(&local_178,auStack_350);
    if (local_178 != 2) {
      local_240 = local_16c;
      uStack_23c = uStack_168;
      uStack_238 = uStack_164;
      param_1[8] = local_160;
      param_1[9] = uStack_15c;
      param_1[10] = local_158;
      param_1[0xb] = uStack_154;
      param_1[0xc] = uStack_150;
      param_1[0xd] = uStack_14c;
      param_1[2] = local_178;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[3] = local_174;
      param_1[4] = local_170;
      param_1[5] = local_16c;
      param_1[6] = uStack_168;
      param_1[7] = uStack_164;
LAB_009210c4:
      bVar1 = true;
LAB_009210cc:
      FUN_00953170(local_35c,local_358);
      if (local_24c != 0) {
        thunk_FUN_016d3fb4(local_35c);
      }
      if ((bool)(bVar1 & local_278 != 2)) {
        if ((local_270 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_26c);
        }
        if ((local_264 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_260);
        }
        if ((local_258 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_254);
        }
      }
      FUN_009248d4(&local_298);
LAB_00921134:
      if (local_308[0] != 4) {
        FUN_00919614(auStack_350);
        FUN_008f91a8(local_308);
      }
      return;
    }
    local_240 = local_16c;
    uStack_23c = uStack_168;
    uStack_238 = uStack_164;
    if (local_170 != 0x80000015) {
      if (local_170 == 0x80000016) {
        bVar1 = local_278 == 2;
        if (local_278 == 2) {
          FUN_009243d8(&local_178,&DAT_003e8611,6);
          local_1a8 = local_174;
          uStack_1a4 = local_170;
          uStack_1a0 = local_16c;
          uStack_19c = uStack_168;
          local_198 = uStack_164;
          local_194 = local_160;
          local_190 = uStack_15c;
          uStack_18c = local_158;
          uStack_188 = uStack_154;
          uStack_184 = uStack_150;
          uStack_180 = uStack_14c;
          if (local_178 != 2) {
            param_1[3] = local_174;
            param_1[4] = local_170;
            param_1[5] = local_16c;
            param_1[6] = uStack_168;
            param_1[7] = uStack_164;
            param_1[8] = local_160;
            param_1[9] = uStack_15c;
            param_1[10] = local_158;
            param_1[0xb] = uStack_154;
            param_1[0xc] = uStack_150;
            param_1[0xd] = uStack_14c;
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_178;
            goto LAB_009210cc;
          }
          local_1d8 = local_174;
          uStack_1d4 = local_170;
          local_1d0 = local_16c;
          local_1cc = uStack_168;
          local_1c8 = uStack_164;
          local_1c4 = local_160;
          local_1c0 = uStack_15c;
          uStack_1bc = local_158;
          local_1b8 = uStack_154;
          local_1b4 = uStack_150;
          uStack_1b0 = uStack_14c;
        }
        else {
          local_1d8 = local_278;
          uStack_1d4 = uStack_274;
          local_1d0 = local_270;
          local_1cc = local_26c;
          local_1c8 = uStack_268;
          local_1c4 = local_264;
          local_1c0 = local_260;
          uStack_1bc = uStack_25c;
          local_1b8 = local_258;
          local_1b4 = local_254;
          uStack_1b0 = uStack_250;
        }
        FUN_00913620(&local_178,local_35c,local_358);
        local_1a8 = local_170;
        uStack_1a4 = local_16c;
        uStack_1a0 = uStack_168;
        uStack_19c = uStack_164;
        local_198 = local_160;
        local_194 = uStack_15c;
        local_190 = local_158;
        uStack_18c = uStack_154;
        uStack_188 = uStack_150;
        uStack_184 = uStack_14c;
        uStack_180 = uStack_148;
        iStack_17c = iStack_144;
        if (local_178 != 3 || local_174 != 0) {
          FUN_016dd1aa(param_1 + 0xe,auStack_140,0x118);
          param_1[2] = local_1a8;
          param_1[3] = uStack_1a4;
          param_1[4] = uStack_1a0;
          param_1[5] = uStack_19c;
          param_1[6] = local_198;
          param_1[7] = local_194;
          param_1[8] = local_190;
          param_1[9] = uStack_18c;
          param_1[10] = uStack_188;
          param_1[0xb] = uStack_184;
          param_1[0xc] = uStack_180;
          param_1[0xd] = iStack_17c;
          param_1[0x54] = local_1d8;
          param_1[0x55] = uStack_1d4;
          param_1[0x56] = local_1d0;
          param_1[0x57] = local_1cc;
          param_1[0x58] = local_1c8;
          param_1[0x59] = local_1c4;
          param_1[0x5a] = local_1c0;
          param_1[0x5b] = uStack_1bc;
          param_1[0x5c] = local_1b8;
          param_1[0x5d] = local_1b4;
          param_1[0x5e] = uStack_1b0;
          *param_1 = local_178;
          param_1[1] = local_174;
          FUN_00953170(local_35c,local_358);
          if (local_24c != 0) {
            thunk_FUN_016d3fb4(local_35c);
          }
          FUN_009248d4(&local_298);
          goto LAB_00921134;
        }
        param_1[2] = local_170;
        param_1[3] = local_16c;
        param_1[4] = uStack_168;
        param_1[5] = uStack_164;
        param_1[6] = local_160;
        param_1[7] = uStack_15c;
        param_1[8] = local_158;
        param_1[9] = uStack_154;
        param_1[10] = uStack_150;
        param_1[0xb] = uStack_14c;
        param_1[0xc] = uStack_148;
        param_1[0xd] = iStack_144;
        *param_1 = 3;
        param_1[1] = 0;
        if ((local_1d0 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1cc);
        }
        if ((local_1c4 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1c0);
        }
        if ((local_1b8 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1b4);
        }
        goto LAB_009210cc;
      }
      local_200 = local_170;
      *puVar4 = local_16c;
      puVar4[1] = uStack_168;
      puVar4[2] = uStack_164;
      FUN_0091976c(&local_178,auStack_350);
      if (local_178 != 2) {
        piVar7 = (int *)((uint)&local_178 | 4);
        local_1f0 = *piVar7;
        iStack_1ec = piVar7[1];
        iStack_1e8 = piVar7[2];
        iStack_1e4 = piVar7[3];
        iStack_1e0 = piVar7[4];
        param_1[8] = local_160;
        param_1[9] = uStack_15c;
        param_1[10] = local_158;
        param_1[0xb] = uStack_154;
        param_1[0xc] = uStack_150;
        param_1[0xd] = uStack_14c;
        param_1[3] = local_1f0;
        param_1[4] = iStack_1ec;
        param_1[5] = iStack_1e8;
        param_1[6] = iStack_1e4;
        param_1[7] = iStack_1e0;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_178;
        FUN_008f7448(&local_200);
        goto LAB_009210c4;
      }
      *puVar3 = local_170;
      puVar3[1] = local_16c;
      puVar3[2] = uStack_168;
      puVar3[3] = uStack_164;
      local_1c8 = *puVar3;
      local_1c4 = puVar3[1];
      local_1c0 = puVar3[2];
      uStack_1bc = puVar3[3];
      local_1a8 = local_200;
      uStack_1a4 = uStack_1fc;
      uStack_1a0 = uStack_1f8;
      uStack_19c = uStack_1f4;
      local_1d8 = local_200;
      uStack_1d4 = uStack_1fc;
      local_1d0 = uStack_1f8;
      local_1cc = uStack_1f4;
      local_198 = local_1c8;
      local_194 = local_1c4;
      local_190 = local_1c0;
      uStack_18c = uStack_1bc;
      if (local_358 == local_24c) {
        FUN_009f4b90(&local_24c);
        local_35c = local_248;
      }
      puVar5 = (uint *)(local_35c + local_358 * 0x20);
      local_358 = local_358 + 1;
      *puVar5 = local_1d8;
      puVar5[1] = uStack_1d4;
      puVar5[2] = local_1d0;
      puVar5[3] = local_1cc;
      puVar5[4] = local_1c8;
      puVar5[5] = local_1c4;
      puVar5[6] = local_1c0;
      puVar5[7] = uStack_1bc;
      local_244 = local_358;
      goto LAB_00920e78;
    }
    if (local_278 != 2) {
      FUN_009244cc(&local_178,&DAT_003e8611,6);
      param_1[2] = local_178;
      param_1[3] = local_174;
      param_1[4] = local_170;
      param_1[5] = local_16c;
      param_1[6] = uStack_168;
      param_1[7] = uStack_164;
      param_1[8] = local_160;
      param_1[9] = uStack_15c;
      param_1[10] = local_158;
      param_1[0xb] = uStack_154;
      param_1[0xc] = uStack_150;
      param_1[0xd] = uStack_14c;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_009210c4;
    }
    FUN_0091dfac(&local_178,auStack_350);
    uStack_274 = local_170;
    uStack_268 = uStack_164;
    uStack_25c = local_158;
    uStack_250 = uStack_14c;
    if (local_178 != 2) {
      param_1[3] = local_174;
      param_1[4] = local_170;
      param_1[5] = local_16c;
      param_1[6] = uStack_168;
      param_1[7] = uStack_164;
      param_1[8] = local_160;
      param_1[9] = uStack_15c;
      param_1[10] = local_158;
      param_1[0xb] = uStack_154;
      param_1[0xc] = uStack_150;
      param_1[0xd] = uStack_14c;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_178;
      goto LAB_009210c4;
    }
    local_278 = local_174;
    local_270 = local_16c;
    local_26c = uStack_168;
    local_264 = local_160;
    local_260 = uStack_15c;
    local_258 = uStack_154;
    local_254 = uStack_150;
  } while( true );
}

