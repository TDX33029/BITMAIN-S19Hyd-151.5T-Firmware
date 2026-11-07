// FUN_01239474 @ 01239474 size=1212 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01239474(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_340;
  int local_338;
  undefined1 auStack_330 [216];
  undefined1 *local_258;
  undefined1 *puStack_254;
  undefined1 *puStack_250;
  undefined1 *puStack_24c;
  undefined1 *puStack_248;
  undefined1 *local_244;
  undefined1 *puStack_240;
  undefined1 *puStack_23c;
  undefined1 *puStack_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  int local_22c;
  int local_228;
  int local_224;
  undefined1 *local_220;
  undefined1 *puStack_21c;
  undefined1 *puStack_218;
  undefined1 *local_1e0;
  undefined1 *puStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b4;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 *local_1a8;
  undefined1 *local_1a4;
  undefined1 *puStack_1a0;
  undefined1 *puStack_19c;
  undefined1 *puStack_198;
  undefined1 *puStack_194;
  undefined1 *puStack_190;
  undefined1 *local_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined1 *puStack_17c;
  undefined1 *local_178;
  undefined1 *local_174;
  undefined1 *local_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  int iStack_15c;
  int local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 *local_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined1 *local_140;
  undefined1 *puStack_13c;
  undefined1 *local_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int iStack_124;
  undefined1 auStack_120 [252];
  
  FUN_01a5c7c0(auStack_330);
  local_258 = (undefined1 *)0x2;
  puVar2 = (undefined4 *)((uint)&local_1d0 | 4);
  puVar3 = (undefined4 *)((uint)&local_1e0 | 4);
  local_224 = 0;
  local_340 = 8;
  local_228 = 8;
  local_338 = 0;
  local_22c = 0;
LAB_012394fc:
  do {
    FUN_01237d5c(&local_158,auStack_330);
    if (local_158 != 2) {
      local_220 = local_14c;
      puStack_21c = puStack_148;
      puStack_218 = puStack_144;
      param_1[8] = (int)local_140;
      param_1[9] = (int)puStack_13c;
      param_1[10] = (int)local_138;
      param_1[0xb] = (int)puStack_134;
      param_1[0xc] = (int)puStack_130;
      param_1[0xd] = (int)puStack_12c;
      param_1[5] = (int)local_14c;
      param_1[6] = (int)puStack_148;
      param_1[7] = (int)puStack_144;
      param_1[1] = 0;
      *param_1 = 3;
      param_1[2] = local_158;
      param_1[3] = (int)local_154;
      param_1[4] = (int)local_150;
LAB_0123974c:
      bVar1 = true;
LAB_01239750:
      FUN_0126cce4(&local_22c);
      if (bVar1 && local_258 != (undefined1 *)0x2) {
        FUN_005f87b4(&local_258);
      }
LAB_01239778:
      FUN_01238f18(auStack_330);
      return;
    }
    local_220 = local_14c;
    puStack_21c = puStack_148;
    puStack_218 = puStack_144;
    if (local_150 != (undefined1 *)0x80000015) {
      if (local_150 == &DAT_80000016) {
        bVar1 = local_258 == (undefined1 *)0x2;
        if (local_258 == (undefined1 *)0x2) {
          FUN_0123bf6c(&local_158,&DAT_004e94a9,6);
          local_188 = local_154;
          puStack_184 = local_150;
          puStack_180 = local_14c;
          puStack_17c = puStack_148;
          local_178 = puStack_144;
          local_174 = local_140;
          local_170 = puStack_13c;
          puStack_16c = local_138;
          puStack_168 = puStack_134;
          puStack_164 = puStack_130;
          puStack_160 = puStack_12c;
          if (local_158 != 2) {
            param_1[3] = (int)local_154;
            param_1[4] = (int)local_150;
            param_1[5] = (int)local_14c;
            param_1[6] = (int)puStack_148;
            param_1[7] = (int)puStack_144;
            param_1[8] = (int)local_140;
            param_1[9] = (int)puStack_13c;
            param_1[10] = (int)local_138;
            param_1[0xb] = (int)puStack_134;
            param_1[0xc] = (int)puStack_130;
            param_1[0xd] = (int)puStack_12c;
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_158;
            goto LAB_01239750;
          }
          local_1b8 = local_154;
          puStack_1b4 = local_150;
          puStack_1b0 = local_14c;
          puStack_1ac = puStack_148;
          local_1a8 = puStack_144;
          local_1a4 = local_140;
          puStack_1a0 = puStack_13c;
          puStack_19c = local_138;
          puStack_198 = puStack_134;
          puStack_194 = puStack_130;
          puStack_190 = puStack_12c;
        }
        else {
          local_1b8 = local_258;
          puStack_1b4 = puStack_254;
          puStack_1b0 = puStack_250;
          puStack_1ac = puStack_24c;
          local_1a8 = puStack_248;
          local_1a4 = local_244;
          puStack_1a0 = puStack_240;
          puStack_19c = puStack_23c;
          puStack_198 = puStack_238;
          puStack_194 = puStack_234;
          puStack_190 = puStack_230;
        }
        FUN_01254250(&local_158,local_340,local_338);
        local_188 = local_150;
        puStack_184 = local_14c;
        puStack_180 = puStack_148;
        puStack_17c = puStack_144;
        local_178 = local_140;
        local_174 = puStack_13c;
        local_170 = local_138;
        puStack_16c = puStack_134;
        puStack_168 = puStack_130;
        puStack_164 = puStack_12c;
        puStack_160 = puStack_128;
        iStack_15c = iStack_124;
        if (local_158 != 3 || local_154 != (undefined1 *)0x0) {
          FUN_01bed4e2(param_1 + 0xe,auStack_120,0xf8);
          param_1[2] = (int)local_188;
          param_1[3] = (int)puStack_184;
          param_1[4] = (int)puStack_180;
          param_1[5] = (int)puStack_17c;
          param_1[6] = (int)local_178;
          param_1[7] = (int)local_174;
          param_1[8] = (int)local_170;
          param_1[9] = (int)puStack_16c;
          param_1[10] = (int)puStack_168;
          param_1[0xb] = (int)puStack_164;
          param_1[0xc] = (int)puStack_160;
          param_1[0xd] = iStack_15c;
          param_1[0x4c] = (int)local_1b8;
          param_1[0x4d] = (int)puStack_1b4;
          param_1[0x4e] = (int)puStack_1b0;
          param_1[0x4f] = (int)puStack_1ac;
          param_1[0x50] = (int)local_1a8;
          param_1[0x51] = (int)local_1a4;
          param_1[0x52] = (int)puStack_1a0;
          param_1[0x53] = (int)puStack_19c;
          param_1[0x54] = (int)puStack_198;
          param_1[0x55] = (int)puStack_194;
          param_1[0x56] = (int)puStack_190;
          *param_1 = local_158;
          param_1[1] = (int)local_154;
          FUN_0126cce4(&local_22c);
          goto LAB_01239778;
        }
        param_1[2] = (int)local_150;
        param_1[3] = (int)local_14c;
        param_1[4] = (int)puStack_148;
        param_1[5] = (int)puStack_144;
        param_1[6] = (int)local_140;
        param_1[7] = (int)puStack_13c;
        param_1[8] = (int)local_138;
        param_1[9] = (int)puStack_134;
        param_1[10] = (int)puStack_130;
        param_1[0xb] = (int)puStack_12c;
        param_1[0xc] = (int)puStack_128;
        param_1[0xd] = iStack_124;
        *param_1 = 3;
        param_1[1] = 0;
        FUN_005f87b4(&local_1b8);
        goto LAB_01239750;
      }
      *puVar3 = local_14c;
      puVar3[1] = puStack_148;
      puVar3[2] = puStack_144;
      local_1e0 = local_150;
      FUN_012381e8(&local_158,auStack_330);
      if (local_158 != 2) {
        piVar5 = (int *)((uint)&local_158 | 4);
        local_1d0 = *piVar5;
        iStack_1cc = piVar5[1];
        iStack_1c8 = piVar5[2];
        iStack_1c4 = piVar5[3];
        iStack_1c0 = piVar5[4];
        param_1[8] = (int)local_140;
        param_1[9] = (int)puStack_13c;
        param_1[10] = (int)local_138;
        param_1[0xb] = (int)puStack_134;
        param_1[0xc] = (int)puStack_130;
        param_1[0xd] = (int)puStack_12c;
        param_1[3] = local_1d0;
        param_1[4] = iStack_1cc;
        param_1[5] = iStack_1c8;
        param_1[6] = iStack_1c4;
        param_1[7] = iStack_1c0;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_158;
        FUN_01237c0c(&local_1e0);
        goto LAB_0123974c;
      }
      *puVar2 = local_150;
      puVar2[1] = local_14c;
      puVar2[2] = puStack_148;
      puVar2[3] = puStack_144;
      local_1a8 = (undefined1 *)*puVar2;
      local_1a4 = (undefined1 *)puVar2[1];
      puStack_1a0 = (undefined1 *)puVar2[2];
      puStack_19c = (undefined1 *)puVar2[3];
      local_188 = local_1e0;
      puStack_184 = puStack_1dc;
      puStack_180 = puStack_1d8;
      puStack_17c = puStack_1d4;
      local_1b8 = local_1e0;
      puStack_1b4 = puStack_1dc;
      puStack_1b0 = puStack_1d8;
      puStack_1ac = puStack_1d4;
      local_178 = local_1a8;
      local_174 = local_1a4;
      local_170 = puStack_1a0;
      puStack_16c = puStack_19c;
      if (local_338 == local_22c) {
        FUN_0126727c(&local_22c);
        local_340 = local_228;
      }
      puVar4 = (undefined4 *)(local_340 + local_338 * 0x20);
      local_338 = local_338 + 1;
      *puVar4 = local_1b8;
      puVar4[1] = puStack_1b4;
      puVar4[2] = puStack_1b0;
      puVar4[3] = puStack_1ac;
      puVar4[4] = local_1a8;
      puVar4[5] = local_1a4;
      puVar4[6] = puStack_1a0;
      puVar4[7] = puStack_19c;
      local_224 = local_338;
      goto LAB_012394fc;
    }
    if (local_258 != (undefined1 *)0x2) {
      FUN_0123c090(&local_158,&DAT_004e94a9,6);
      param_1[2] = local_158;
      param_1[3] = (int)local_154;
      param_1[4] = (int)local_150;
      param_1[5] = (int)local_14c;
      param_1[6] = (int)puStack_148;
      param_1[7] = (int)puStack_144;
      param_1[8] = (int)local_140;
      param_1[9] = (int)puStack_13c;
      param_1[10] = (int)local_138;
      param_1[0xb] = (int)puStack_134;
      param_1[0xc] = (int)puStack_130;
      param_1[0xd] = (int)puStack_12c;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_0123974c;
    }
    FUN_012385dc(&local_158,auStack_330);
    puStack_254 = local_150;
    puStack_250 = local_14c;
    puStack_24c = puStack_148;
    puStack_248 = puStack_144;
    local_244 = local_140;
    puStack_240 = puStack_13c;
    puStack_23c = local_138;
    puStack_238 = puStack_134;
    puStack_234 = puStack_130;
    puStack_230 = puStack_12c;
    if (local_158 != 2) {
      param_1[3] = (int)local_154;
      param_1[4] = (int)local_150;
      param_1[5] = (int)local_14c;
      param_1[6] = (int)puStack_148;
      param_1[7] = (int)puStack_144;
      param_1[8] = (int)local_140;
      param_1[9] = (int)puStack_13c;
      param_1[10] = (int)local_138;
      param_1[0xb] = (int)puStack_134;
      param_1[0xc] = (int)puStack_130;
      param_1[0xd] = (int)puStack_12c;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_158;
      goto LAB_0123974c;
    }
    local_258 = local_154;
  } while( true );
}

