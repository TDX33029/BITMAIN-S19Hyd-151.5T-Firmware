// FUN_00922e3c @ 00922e3c size=1588 calls_out=14 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00922e3c(int *param_1,int param_2)

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
  int local_354;
  int local_350;
  undefined1 auStack_348 [72];
  int local_300 [28];
  int local_290;
  int local_28c;
  undefined4 local_288;
  int local_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  uint local_270;
  uint uStack_26c;
  uint local_268;
  uint local_264;
  uint uStack_260;
  uint local_25c;
  uint local_258;
  uint uStack_254;
  uint local_250;
  uint local_24c;
  uint uStack_248;
  int local_244;
  int local_240;
  int local_23c;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  uint local_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint local_1ac;
  uint uStack_1a8;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  int iStack_174;
  int local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint uStack_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  int iStack_13c;
  undefined1 auStack_138 [276];
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  iVar9 = *(int *)(param_2 + 0x14);
  iVar10 = *(int *)(param_2 + 0x18);
  if ((iVar2 != 0) && (iVar6 = iVar2 * 4 + 4, iVar2 + iVar6 != -5)) {
    thunk_FUN_016d3fb4(*(int *)(param_2 + 0x1c) - iVar6);
  }
  local_280 = *(undefined4 *)(param_2 + 0x30);
  uStack_27c = *(undefined4 *)(param_2 + 0x34);
  uStack_278 = *(undefined4 *)(param_2 + 0x38);
  local_300[0] = 4;
  local_284 = iVar9 + iVar10 * 0xc0;
  local_270 = 2;
  puVar3 = (uint *)((uint)&local_1e8 | 4);
  local_23c = 0;
  puVar4 = (uint *)((uint)&local_1f8 | 4);
  local_244 = 0;
  local_350 = 0;
  local_354 = 8;
  local_240 = 8;
  local_290 = iVar9;
  local_28c = iVar9;
  local_288 = uVar8;
LAB_00922f38:
  do {
    FUN_0091dd40(&local_170,auStack_348);
    if (local_170 != 2) {
      local_238 = local_164;
      uStack_234 = uStack_160;
      uStack_230 = uStack_15c;
      param_1[8] = local_158;
      param_1[9] = uStack_154;
      param_1[10] = local_150;
      param_1[0xb] = uStack_14c;
      param_1[0xc] = uStack_148;
      param_1[0xd] = uStack_144;
      param_1[2] = local_170;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[3] = local_16c;
      param_1[4] = local_168;
      param_1[5] = local_164;
      param_1[6] = uStack_160;
      param_1[7] = uStack_15c;
LAB_00923184:
      bVar1 = true;
LAB_0092318c:
      FUN_00953170(local_354,local_350);
      if (local_244 != 0) {
        thunk_FUN_016d3fb4(local_354);
      }
      if ((bool)(bVar1 & local_270 != 2)) {
        if ((local_268 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_264);
        }
        if ((local_25c & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_258);
        }
        if ((local_250 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_24c);
        }
      }
      FUN_009248d4(&local_290);
LAB_009231f4:
      if (local_300[0] != 4) {
        FUN_00919614(auStack_348);
        FUN_008f91a8(local_300);
      }
      return;
    }
    local_238 = local_164;
    uStack_234 = uStack_160;
    uStack_230 = uStack_15c;
    if (local_168 != 0x80000015) {
      if (local_168 == 0x80000016) {
        bVar1 = local_270 == 2;
        if (local_270 == 2) {
          FUN_009243d8(&local_170,&DAT_003e8611,6);
          local_1a0 = local_16c;
          uStack_19c = local_168;
          uStack_198 = local_164;
          uStack_194 = uStack_160;
          local_190 = uStack_15c;
          local_18c = local_158;
          local_188 = uStack_154;
          uStack_184 = local_150;
          uStack_180 = uStack_14c;
          uStack_17c = uStack_148;
          uStack_178 = uStack_144;
          if (local_170 != 2) {
            param_1[3] = local_16c;
            param_1[4] = local_168;
            param_1[5] = local_164;
            param_1[6] = uStack_160;
            param_1[7] = uStack_15c;
            param_1[8] = local_158;
            param_1[9] = uStack_154;
            param_1[10] = local_150;
            param_1[0xb] = uStack_14c;
            param_1[0xc] = uStack_148;
            param_1[0xd] = uStack_144;
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_170;
            goto LAB_0092318c;
          }
          local_1d0 = local_16c;
          uStack_1cc = local_168;
          local_1c8 = local_164;
          local_1c4 = uStack_160;
          local_1c0 = uStack_15c;
          local_1bc = local_158;
          local_1b8 = uStack_154;
          uStack_1b4 = local_150;
          local_1b0 = uStack_14c;
          local_1ac = uStack_148;
          uStack_1a8 = uStack_144;
        }
        else {
          local_1d0 = local_270;
          uStack_1cc = uStack_26c;
          local_1c8 = local_268;
          local_1c4 = local_264;
          local_1c0 = uStack_260;
          local_1bc = local_25c;
          local_1b8 = local_258;
          uStack_1b4 = uStack_254;
          local_1b0 = local_250;
          local_1ac = local_24c;
          uStack_1a8 = uStack_248;
        }
        FUN_00957fac(&local_170,local_354,local_350);
        local_1a0 = local_168;
        uStack_19c = local_164;
        uStack_198 = uStack_160;
        uStack_194 = uStack_15c;
        local_190 = local_158;
        local_18c = uStack_154;
        local_188 = local_150;
        uStack_184 = uStack_14c;
        uStack_180 = uStack_148;
        uStack_17c = uStack_144;
        uStack_178 = uStack_140;
        iStack_174 = iStack_13c;
        if (local_170 != 3 || local_16c != 0) {
          FUN_016dd1aa(param_1 + 0xe,auStack_138,0x110);
          param_1[2] = local_1a0;
          param_1[3] = uStack_19c;
          param_1[4] = uStack_198;
          param_1[5] = uStack_194;
          param_1[6] = local_190;
          param_1[7] = local_18c;
          param_1[8] = local_188;
          param_1[9] = uStack_184;
          param_1[10] = uStack_180;
          param_1[0xb] = uStack_17c;
          param_1[0xc] = uStack_178;
          param_1[0xd] = iStack_174;
          param_1[0x52] = local_1d0;
          param_1[0x53] = uStack_1cc;
          param_1[0x54] = local_1c8;
          param_1[0x55] = local_1c4;
          param_1[0x56] = local_1c0;
          param_1[0x57] = local_1bc;
          param_1[0x58] = local_1b8;
          param_1[0x59] = uStack_1b4;
          param_1[0x5a] = local_1b0;
          param_1[0x5b] = local_1ac;
          param_1[0x5c] = uStack_1a8;
          *param_1 = local_170;
          param_1[1] = local_16c;
          FUN_00953170(local_354,local_350);
          if (local_244 != 0) {
            thunk_FUN_016d3fb4(local_354);
          }
          FUN_009248d4(&local_290);
          goto LAB_009231f4;
        }
        param_1[2] = local_168;
        param_1[3] = local_164;
        param_1[4] = uStack_160;
        param_1[5] = uStack_15c;
        param_1[6] = local_158;
        param_1[7] = uStack_154;
        param_1[8] = local_150;
        param_1[9] = uStack_14c;
        param_1[10] = uStack_148;
        param_1[0xb] = uStack_144;
        param_1[0xc] = uStack_140;
        param_1[0xd] = iStack_13c;
        *param_1 = 3;
        param_1[1] = 0;
        if ((local_1c8 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1c4);
        }
        if ((local_1bc & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1b8);
        }
        if ((local_1b0 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_1ac);
        }
        goto LAB_0092318c;
      }
      local_1f8 = local_168;
      *puVar4 = local_164;
      puVar4[1] = uStack_160;
      puVar4[2] = uStack_15c;
      FUN_0091976c(&local_170,auStack_348);
      if (local_170 != 2) {
        piVar7 = (int *)((uint)&local_170 | 4);
        local_1e8 = *piVar7;
        iStack_1e4 = piVar7[1];
        iStack_1e0 = piVar7[2];
        iStack_1dc = piVar7[3];
        iStack_1d8 = piVar7[4];
        param_1[8] = local_158;
        param_1[9] = uStack_154;
        param_1[10] = local_150;
        param_1[0xb] = uStack_14c;
        param_1[0xc] = uStack_148;
        param_1[0xd] = uStack_144;
        param_1[3] = local_1e8;
        param_1[4] = iStack_1e4;
        param_1[5] = iStack_1e0;
        param_1[6] = iStack_1dc;
        param_1[7] = iStack_1d8;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_170;
        FUN_008f7448(&local_1f8);
        goto LAB_00923184;
      }
      *puVar3 = local_168;
      puVar3[1] = local_164;
      puVar3[2] = uStack_160;
      puVar3[3] = uStack_15c;
      local_1c0 = *puVar3;
      local_1bc = puVar3[1];
      local_1b8 = puVar3[2];
      uStack_1b4 = puVar3[3];
      local_1a0 = local_1f8;
      uStack_19c = uStack_1f4;
      uStack_198 = uStack_1f0;
      uStack_194 = uStack_1ec;
      local_1d0 = local_1f8;
      uStack_1cc = uStack_1f4;
      local_1c8 = uStack_1f0;
      local_1c4 = uStack_1ec;
      local_190 = local_1c0;
      local_18c = local_1bc;
      local_188 = local_1b8;
      uStack_184 = uStack_1b4;
      if (local_350 == local_244) {
        FUN_009f4b90(&local_244);
        local_354 = local_240;
      }
      puVar5 = (uint *)(local_354 + local_350 * 0x20);
      local_350 = local_350 + 1;
      *puVar5 = local_1d0;
      puVar5[1] = uStack_1cc;
      puVar5[2] = local_1c8;
      puVar5[3] = local_1c4;
      puVar5[4] = local_1c0;
      puVar5[5] = local_1bc;
      puVar5[6] = local_1b8;
      puVar5[7] = uStack_1b4;
      local_23c = local_350;
      goto LAB_00922f38;
    }
    if (local_270 != 2) {
      FUN_009244cc(&local_170,&DAT_003e8611,6);
      param_1[2] = local_170;
      param_1[3] = local_16c;
      param_1[4] = local_168;
      param_1[5] = local_164;
      param_1[6] = uStack_160;
      param_1[7] = uStack_15c;
      param_1[8] = local_158;
      param_1[9] = uStack_154;
      param_1[10] = local_150;
      param_1[0xb] = uStack_14c;
      param_1[0xc] = uStack_148;
      param_1[0xd] = uStack_144;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_00923184;
    }
    FUN_0091dfac(&local_170,auStack_348);
    uStack_26c = local_168;
    uStack_260 = uStack_15c;
    uStack_254 = local_150;
    uStack_248 = uStack_144;
    if (local_170 != 2) {
      param_1[3] = local_16c;
      param_1[4] = local_168;
      param_1[5] = local_164;
      param_1[6] = uStack_160;
      param_1[7] = uStack_15c;
      param_1[8] = local_158;
      param_1[9] = uStack_154;
      param_1[10] = local_150;
      param_1[0xb] = uStack_14c;
      param_1[0xc] = uStack_148;
      param_1[0xd] = uStack_144;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_170;
      goto LAB_00923184;
    }
    local_270 = local_16c;
    local_268 = local_164;
    local_264 = uStack_160;
    local_25c = local_158;
    local_258 = uStack_154;
    local_250 = uStack_14c;
    local_24c = uStack_148;
  } while( true );
}

