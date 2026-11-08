// FUN_0123a24c @ 0123a24c size=1212 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0123a24c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_358;
  int local_350;
  undefined1 auStack_348 [216];
  undefined1 *local_270;
  undefined1 *puStack_26c;
  undefined1 *puStack_268;
  undefined1 *puStack_264;
  undefined1 *puStack_260;
  undefined1 *local_25c;
  undefined1 *puStack_258;
  undefined1 *puStack_254;
  undefined1 *puStack_250;
  undefined1 *puStack_24c;
  undefined1 *puStack_248;
  int local_244;
  int local_240;
  int local_23c;
  undefined1 *local_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  undefined1 *local_1f8;
  undefined1 *puStack_1f4;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c4;
  undefined1 *local_1c0;
  undefined1 *local_1bc;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b4;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_19c;
  undefined1 *puStack_198;
  undefined1 *puStack_194;
  undefined1 *local_190;
  undefined1 *local_18c;
  undefined1 *local_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined1 *puStack_17c;
  undefined1 *puStack_178;
  int iStack_174;
  int local_170;
  undefined1 *local_16c;
  undefined1 *local_168;
  undefined1 *local_164;
  undefined1 *puStack_160;
  undefined1 *puStack_15c;
  undefined1 *local_158;
  undefined1 *puStack_154;
  undefined1 *local_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int iStack_13c;
  undefined1 auStack_138 [276];
  
  FUN_01a5c7c0(auStack_348);
  local_270 = (undefined1 *)0x2;
  puVar2 = (undefined4 *)((uint)&local_1e8 | 4);
  puVar3 = (undefined4 *)((uint)&local_1f8 | 4);
  local_23c = 0;
  local_358 = 8;
  local_240 = 8;
  local_350 = 0;
  local_244 = 0;
LAB_0123a2d4:
  do {
    FUN_01237d5c(&local_170,auStack_348);
    if (local_170 != 2) {
      local_238 = local_164;
      puStack_234 = puStack_160;
      puStack_230 = puStack_15c;
      param_1[8] = (int)local_158;
      param_1[9] = (int)puStack_154;
      param_1[10] = (int)local_150;
      param_1[0xb] = (int)puStack_14c;
      param_1[0xc] = (int)puStack_148;
      param_1[0xd] = (int)puStack_144;
      param_1[5] = (int)local_164;
      param_1[6] = (int)puStack_160;
      param_1[7] = (int)puStack_15c;
      param_1[1] = 0;
      *param_1 = 3;
      param_1[2] = local_170;
      param_1[3] = (int)local_16c;
      param_1[4] = (int)local_168;
LAB_0123a524:
      bVar1 = true;
LAB_0123a528:
      FUN_0126cce4(&local_244);
      if (bVar1 && local_270 != (undefined1 *)0x2) {
        FUN_005f87b4(&local_270);
      }
LAB_0123a550:
      FUN_01238f18(auStack_348);
      return;
    }
    local_238 = local_164;
    puStack_234 = puStack_160;
    puStack_230 = puStack_15c;
    if (local_168 != (undefined1 *)0x80000015) {
      if (local_168 == &DAT_80000016) {
        bVar1 = local_270 == (undefined1 *)0x2;
        if (local_270 == (undefined1 *)0x2) {
          FUN_0123bf6c(&local_170,&DAT_004e94a9,6);
          local_1a0 = local_16c;
          puStack_19c = local_168;
          puStack_198 = local_164;
          puStack_194 = puStack_160;
          local_190 = puStack_15c;
          local_18c = local_158;
          local_188 = puStack_154;
          puStack_184 = local_150;
          puStack_180 = puStack_14c;
          puStack_17c = puStack_148;
          puStack_178 = puStack_144;
          if (local_170 != 2) {
            param_1[3] = (int)local_16c;
            param_1[4] = (int)local_168;
            param_1[5] = (int)local_164;
            param_1[6] = (int)puStack_160;
            param_1[7] = (int)puStack_15c;
            param_1[8] = (int)local_158;
            param_1[9] = (int)puStack_154;
            param_1[10] = (int)local_150;
            param_1[0xb] = (int)puStack_14c;
            param_1[0xc] = (int)puStack_148;
            param_1[0xd] = (int)puStack_144;
            *param_1 = 3;
            param_1[1] = 0;
            param_1[2] = local_170;
            goto LAB_0123a528;
          }
          local_1d0 = local_16c;
          puStack_1cc = local_168;
          puStack_1c8 = local_164;
          puStack_1c4 = puStack_160;
          local_1c0 = puStack_15c;
          local_1bc = local_158;
          puStack_1b8 = puStack_154;
          puStack_1b4 = local_150;
          puStack_1b0 = puStack_14c;
          puStack_1ac = puStack_148;
          puStack_1a8 = puStack_144;
        }
        else {
          local_1d0 = local_270;
          puStack_1cc = puStack_26c;
          puStack_1c8 = puStack_268;
          puStack_1c4 = puStack_264;
          local_1c0 = puStack_260;
          local_1bc = local_25c;
          puStack_1b8 = puStack_258;
          puStack_1b4 = puStack_254;
          puStack_1b0 = puStack_250;
          puStack_1ac = puStack_24c;
          puStack_1a8 = puStack_248;
        }
        FUN_01256434(&local_170,local_358,local_350);
        local_1a0 = local_168;
        puStack_19c = local_164;
        puStack_198 = puStack_160;
        puStack_194 = puStack_15c;
        local_190 = local_158;
        local_18c = puStack_154;
        local_188 = local_150;
        puStack_184 = puStack_14c;
        puStack_180 = puStack_148;
        puStack_17c = puStack_144;
        puStack_178 = puStack_140;
        iStack_174 = iStack_13c;
        if (local_170 != 3 || local_16c != (undefined1 *)0x0) {
          FUN_01bed4e2(param_1 + 0xe,auStack_138,0x110);
          param_1[2] = (int)local_1a0;
          param_1[3] = (int)puStack_19c;
          param_1[4] = (int)puStack_198;
          param_1[5] = (int)puStack_194;
          param_1[6] = (int)local_190;
          param_1[7] = (int)local_18c;
          param_1[8] = (int)local_188;
          param_1[9] = (int)puStack_184;
          param_1[10] = (int)puStack_180;
          param_1[0xb] = (int)puStack_17c;
          param_1[0xc] = (int)puStack_178;
          param_1[0xd] = iStack_174;
          param_1[0x52] = (int)local_1d0;
          param_1[0x53] = (int)puStack_1cc;
          param_1[0x54] = (int)puStack_1c8;
          param_1[0x55] = (int)puStack_1c4;
          param_1[0x56] = (int)local_1c0;
          param_1[0x57] = (int)local_1bc;
          param_1[0x58] = (int)puStack_1b8;
          param_1[0x59] = (int)puStack_1b4;
          param_1[0x5a] = (int)puStack_1b0;
          param_1[0x5b] = (int)puStack_1ac;
          param_1[0x5c] = (int)puStack_1a8;
          *param_1 = local_170;
          param_1[1] = (int)local_16c;
          FUN_0126cce4(&local_244);
          goto LAB_0123a550;
        }
        param_1[2] = (int)local_168;
        param_1[3] = (int)local_164;
        param_1[4] = (int)puStack_160;
        param_1[5] = (int)puStack_15c;
        param_1[6] = (int)local_158;
        param_1[7] = (int)puStack_154;
        param_1[8] = (int)local_150;
        param_1[9] = (int)puStack_14c;
        param_1[10] = (int)puStack_148;
        param_1[0xb] = (int)puStack_144;
        param_1[0xc] = (int)puStack_140;
        param_1[0xd] = iStack_13c;
        *param_1 = 3;
        param_1[1] = 0;
        FUN_005f87b4(&local_1d0);
        goto LAB_0123a528;
      }
      *puVar3 = local_164;
      puVar3[1] = puStack_160;
      puVar3[2] = puStack_15c;
      local_1f8 = local_168;
      FUN_012381e8(&local_170,auStack_348);
      if (local_170 != 2) {
        piVar5 = (int *)((uint)&local_170 | 4);
        local_1e8 = *piVar5;
        iStack_1e4 = piVar5[1];
        iStack_1e0 = piVar5[2];
        iStack_1dc = piVar5[3];
        iStack_1d8 = piVar5[4];
        param_1[8] = (int)local_158;
        param_1[9] = (int)puStack_154;
        param_1[10] = (int)local_150;
        param_1[0xb] = (int)puStack_14c;
        param_1[0xc] = (int)puStack_148;
        param_1[0xd] = (int)puStack_144;
        param_1[3] = local_1e8;
        param_1[4] = iStack_1e4;
        param_1[5] = iStack_1e0;
        param_1[6] = iStack_1dc;
        param_1[7] = iStack_1d8;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_170;
        FUN_01237c0c(&local_1f8);
        goto LAB_0123a524;
      }
      *puVar2 = local_168;
      puVar2[1] = local_164;
      puVar2[2] = puStack_160;
      puVar2[3] = puStack_15c;
      local_1c0 = (undefined1 *)*puVar2;
      local_1bc = (undefined1 *)puVar2[1];
      puStack_1b8 = (undefined1 *)puVar2[2];
      puStack_1b4 = (undefined1 *)puVar2[3];
      local_1a0 = local_1f8;
      puStack_19c = puStack_1f4;
      puStack_198 = puStack_1f0;
      puStack_194 = puStack_1ec;
      local_1d0 = local_1f8;
      puStack_1cc = puStack_1f4;
      puStack_1c8 = puStack_1f0;
      puStack_1c4 = puStack_1ec;
      local_190 = local_1c0;
      local_18c = local_1bc;
      local_188 = puStack_1b8;
      puStack_184 = puStack_1b4;
      if (local_350 == local_244) {
        FUN_0126727c(&local_244);
        local_358 = local_240;
      }
      puVar4 = (undefined4 *)(local_358 + local_350 * 0x20);
      local_350 = local_350 + 1;
      *puVar4 = local_1d0;
      puVar4[1] = puStack_1cc;
      puVar4[2] = puStack_1c8;
      puVar4[3] = puStack_1c4;
      puVar4[4] = local_1c0;
      puVar4[5] = local_1bc;
      puVar4[6] = puStack_1b8;
      puVar4[7] = puStack_1b4;
      local_23c = local_350;
      goto LAB_0123a2d4;
    }
    if (local_270 != (undefined1 *)0x2) {
      FUN_0123c090(&local_170,&DAT_004e94a9,6);
      param_1[2] = local_170;
      param_1[3] = (int)local_16c;
      param_1[4] = (int)local_168;
      param_1[5] = (int)local_164;
      param_1[6] = (int)puStack_160;
      param_1[7] = (int)puStack_15c;
      param_1[8] = (int)local_158;
      param_1[9] = (int)puStack_154;
      param_1[10] = (int)local_150;
      param_1[0xb] = (int)puStack_14c;
      param_1[0xc] = (int)puStack_148;
      param_1[0xd] = (int)puStack_144;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_0123a524;
    }
    FUN_012385dc(&local_170,auStack_348);
    puStack_26c = local_168;
    puStack_268 = local_164;
    puStack_264 = puStack_160;
    puStack_260 = puStack_15c;
    local_25c = local_158;
    puStack_258 = puStack_154;
    puStack_254 = local_150;
    puStack_250 = puStack_14c;
    puStack_24c = puStack_148;
    puStack_248 = puStack_144;
    if (local_170 != 2) {
      param_1[3] = (int)local_16c;
      param_1[4] = (int)local_168;
      param_1[5] = (int)local_164;
      param_1[6] = (int)puStack_160;
      param_1[7] = (int)puStack_15c;
      param_1[8] = (int)local_158;
      param_1[9] = (int)puStack_154;
      param_1[10] = (int)local_150;
      param_1[0xb] = (int)puStack_14c;
      param_1[0xc] = (int)puStack_148;
      param_1[0xd] = (int)puStack_144;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_170;
      goto LAB_0123a524;
    }
    local_270 = local_16c;
  } while( true );
}

