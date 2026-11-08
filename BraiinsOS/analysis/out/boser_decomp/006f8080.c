// FUN_006f8080 @ 006f8080 size=3780 calls_out=27 calls_in=1
// strings: subscription | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f8080(undefined4 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint3 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  uint extraout_r2;
  int iVar17;
  uint extraout_r2_00;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined8 uVar24;
  uint *local_2f4;
  uint *local_2f0;
  uint *local_2ec;
  uint *local_2e4;
  uint *local_2d8;
  uint *local_2d4;
  uint *local_2d0;
  uint *local_2cc;
  uint *local_2c0;
  uint *local_2bc;
  uint *local_2b8;
  uint *local_2b0;
  uint *local_2ac;
  uint *local_2a8;
  int local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  int iStack_290;
  int local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  int local_27c;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  int local_268;
  undefined4 local_264 [3];
  undefined4 local_258;
  uint *local_248;
  uint *local_244;
  uint *local_240;
  int local_238 [5];
  int local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  int local_214;
  uint *local_210;
  uint *puStack_20c;
  uint *puStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  uint *local_1f0;
  uint *local_1ec;
  uint *puStack_1e8;
  byte local_1e4;
  uint3 local_1e3;
  uint *local_1e0;
  uint *local_1dc;
  uint *local_1d8;
  uint *puStack_1d4;
  uint *local_1d0;
  uint *local_1cc;
  undefined1 local_1c8 [4];
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint **local_1b0;
  uint *local_1ac;
  uint *local_1a8;
  uint *local_1a4;
  uint *local_1a0;
  uint *local_19c;
  uint *local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int local_13c;
  uint *local_130;
  uint *local_12c;
  uint *local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint **ppuStack_110;
  uint *local_108;
  uint *local_104;
  uint *local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  int local_a4;
  uint *local_98;
  uint *local_94;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  
  local_2c0 = (uint *)(local_1c8 + 1);
  local_2ac = *(uint **)(param_2 + 0x20);
  puVar15 = (undefined4 *)((uint)&local_130 | 4);
  while( true ) {
    FUN_006fb748(&local_2a0,param_2);
    iVar6 = iStack_290;
    uVar5 = uStack_294;
    uVar4 = local_298;
    uVar12 = local_29c;
    iVar17 = local_2a0;
    if (local_2a0 == 0) goto LAB_006f8d60;
    uVar9 = FUN_006fb3b4(local_2a0,iStack_290);
    if (*(uint *)(iVar17 + 0x10) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,*(uint *)(iVar17 + 0x10),&DAT_01c06500);
    }
    pcVar16 = (char *)(*(int *)(iVar17 + 0xc) + uVar9 * 0x14);
    if (*pcVar16 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06510);
    }
    if (pcVar16[1] != '\0') break;
    FUN_006f6e98(iVar17,uVar5);
  }
  uVar10 = *(undefined4 *)(param_2 + 0x1c);
  uVar11 = FUN_006fb3b4(iVar17,iVar6);
  FUN_006fb414(&local_98,iVar17,uVar12,uVar4,uVar5,iVar6 + 1,uVar11);
  FUN_006fa500(&local_28c,&local_98);
  uVar9 = FUN_006fb3b4(local_28c,local_27c);
  if (*(uint *)(local_28c + 0x10) <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,*(uint *)(local_28c + 0x10),&DAT_01c06500);
  }
  pcVar16 = (char *)(*(int *)(local_28c + 0xc) + uVar9 * 0x14);
  if (*pcVar16 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06510);
  }
  cVar1 = pcVar16[1];
  if (cVar1 == '\x06') {
    uVar24 = FUN_0070093c(uVar10,local_28c,local_27c);
    uVar12 = FUN_006fb3b4(local_28c,local_27c);
    FUN_006fb414(&local_98,local_28c,local_288,local_284,local_280,local_27c + 1,uVar12);
    FUN_006fa500(&local_278,&local_98);
    uVar9 = FUN_006fb3b4(local_278,local_268);
    if (*(uint *)(local_278 + 0x10) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar9,*(uint *)(local_278 + 0x10),&DAT_01c06500);
    }
    pcVar16 = (char *)(*(int *)(local_278 + 0xc) + uVar9 * 0x14);
    if (*pcVar16 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06510);
    }
    cVar1 = pcVar16[1];
    if (cVar1 != '\a') {
      if (cVar1 != '\n') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c06450);
      }
      local_19c = (uint *)&DAT_00000008;
      local_198 = (uint *)0x0;
      local_1a0 = (uint *)0x0;
      local_100 = (uint *)0x0;
      local_104 = (uint *)&SUB_00000004;
      local_108 = (uint *)0x0;
      FUN_006fc544(&local_98,&local_278,uVar10,0x40);
      if (local_98 != (uint *)&DAT_00000009) {
        local_2d4 = local_7c;
        FUN_00b96a8c(&local_108);
        FUN_006f6418(&local_1a0);
        puVar22 = local_8c;
        local_2a8 = local_88;
        puVar21 = local_98;
        local_2b8 = local_84;
        puVar20 = local_94;
        puVar23 = local_90;
        local_2f0 = local_80;
        goto LAB_006f8d40;
      }
      local_2b8 = local_90;
      puVar22 = (uint *)0x0;
      local_2a8 = local_94;
      puVar21 = (uint *)&SUB_00000004;
      local_2d8 = local_84;
      puVar18 = (uint *)&DAT_00000008;
      uVar12 = 0;
      local_2b0 = local_88;
      local_2f4 = (uint *)0x0;
      local_2e4._0_1_ = 0;
      local_2bc = (uint *)0x0;
      puVar23 = (uint *)0x0;
      puVar20 = (uint *)0x0;
      local_2d0 = (uint *)0x0;
      uVar9 = extraout_r2;
      goto LAB_006f8dc8;
    }
    uVar12 = FUN_006fb3b4(local_278,local_268);
    FUN_006fb414(local_264,local_278,local_274,local_270,local_26c,local_268 + 1,uVar12);
    FUN_006fb748(&local_98,local_264);
    puVar23 = local_88;
    local_2cc = local_8c;
    puVar19 = local_90;
    puVar21 = local_94;
    puVar20 = local_98;
    if (local_98 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c06460);
    }
    FUN_0070093c(uVar10,local_98,local_88);
    puVar22 = (uint *)puVar20[4];
    if (puVar22 <= puVar23) {
LAB_006f8f64:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(puVar23,puVar22,&DAT_01c062d0);
    }
    iVar17 = 8;
    pcVar16 = (char *)(puVar20[3] + (int)puVar23 * 0x14);
    if (*pcVar16 != '\0') {
      iVar17 = 0x10;
    }
    puVar18 = *(uint **)(pcVar16 + iVar17);
    puVar23 = (uint *)FUN_006fb3b4(puVar20,puVar23);
    puVar22 = (uint *)puVar20[4];
    if (puVar22 <= puVar23) goto LAB_006f8f64;
    iVar17 = 8;
    pcVar16 = (char *)(puVar20[3] + (int)puVar23 * 0x14);
    if (*pcVar16 != '\0') {
      iVar17 = 0x10;
    }
    puVar23 = *(uint **)(pcVar16 + iVar17);
    if (puVar23 < puVar18) goto LAB_006f86c8;
    if (puVar18 != (uint *)0x0) {
      if (puVar18 < puVar19) {
        if (*(char *)((int)puVar21 + (int)puVar18) < -0x40) goto LAB_006f86c8;
      }
      else if (puVar18 != puVar19) goto LAB_006f86c8;
    }
    if (puVar23 != (uint *)0x0) {
      if (puVar23 < puVar19) {
        if (*(char *)((int)puVar21 + (int)puVar23) < -0x40) goto LAB_006f86c8;
      }
      else if (puVar23 != puVar19) {
LAB_006f86c8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(puVar21,puVar19,puVar18,puVar23,&DAT_01c064f0);
      }
    }
    iVar17 = (int)puVar23 - (int)puVar18;
    puVar13 = (undefined1 *)((int)puVar21 + (int)puVar18);
    if (iVar17 == 5) {
      iVar17 = thunk_FUN_01bed842(puVar13,&DAT_0050c2f4,5);
      local_2e4 = (uint *)0x0;
    }
    else if (iVar17 == 8) {
      iVar17 = thunk_FUN_01bed842(puVar13,&DAT_005707f8,8);
      local_2e4 = (uint *)&DAT_00000001;
    }
    else {
      if (iVar17 != 0xc) goto LAB_006f8ef8;
      iVar17 = thunk_FUN_01bed842(puVar13,"subscription",0xc);
      local_2e4 = (uint *)0x2;
    }
    if (iVar17 != 0) {
LAB_006f8ef8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c064e0);
    }
    FUN_006f6e98(puVar20,local_2cc);
    FUN_006fa58c(local_238,local_264,0x4e);
    puVar22 = (uint *)0x0;
    if ((local_238[0] != 0) &&
       (FUN_006fc9e8(&local_98,local_238,uVar10), local_98 != (uint *)&DAT_0000000a)) {
      if (local_98 != (uint *)&DAT_00000009) {
        local_2d4 = local_7c;
        uVar9 = (uint)local_8c >> 8;
        local_2cc = local_8c;
        local_2a8 = local_88;
        puVar21 = local_98;
        local_2b8 = local_84;
        puVar20 = local_94;
        puVar23 = local_90;
        local_2f0 = local_80;
        goto LAB_006f8d28;
      }
      local_2f4 = local_88;
      local_2ec = local_90;
      puVar19 = local_94;
      puVar22 = local_8c;
    }
    FUN_006fa58c(&local_224,local_264,8);
    if (local_224 == 0) {
      puVar23 = (uint *)&DAT_80000000;
      puVar18 = local_2e4;
      goto LAB_006f8a48;
    }
    uVar12 = FUN_006fb3b4(local_224,local_214);
    FUN_006fb414(&local_210,local_224,local_220,local_21c,local_218,local_214 + 1,uVar12);
    local_1f0 = (uint *)&DAT_00000009;
    local_1d0 = local_210;
    local_1cc = puStack_20c;
    local_1c8 = (undefined1  [4])puStack_208;
    local_1c4 = uStack_204;
    local_1c0 = local_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    local_1b0 = &local_1f0;
    local_1f4 = uVar10;
    uStack_1b4 = uVar10;
    FUN_006f76f4(&local_1a0);
    if (local_13c == -0x80000000) {
      FUN_006f6e98(local_1d0,local_1c4);
      puVar18 = (uint *)&DAT_00000008;
      puVar20 = (uint *)0x0;
      puVar23 = (uint *)0x0;
    }
    else {
      FUN_01bed4e2(&local_98,&local_1a0,0x70);
      puVar18 = (uint *)FUN_01298504(0x1c0,8);
      if (puVar18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0x1c0);
      }
      FUN_01bed4e2(puVar18,&local_1a0,0x70);
      local_1ac = (uint *)&SUB_00000004;
      local_1a4 = (uint *)&DAT_00000001;
      iVar17 = 0x70;
      local_130 = local_1d0;
      local_12c = local_1cc;
      local_128 = (uint *)local_1c8;
      local_124 = local_1c4;
      local_120 = local_1c0;
      uStack_11c = uStack_1bc;
      uStack_118 = uStack_1b8;
      uStack_114 = uStack_1b4;
      ppuStack_110 = local_1b0;
      local_1a8 = puVar18;
      while( true ) {
        puVar20 = local_1a4;
        FUN_006f76f4(&local_108,&local_130);
        if (local_a4 == -0x80000000) break;
        FUN_01bed4e2(&local_98,&local_108,0x70);
        if (puVar20 == local_1ac) {
          FUN_006520b4(&local_1ac,puVar20,1,8,0x70);
          puVar18 = local_1a8;
        }
        FUN_01bed4e2((int)puVar18 + iVar17,&local_108,0x70);
        local_1a4 = (uint *)((int)puVar20 + 1);
        iVar17 = iVar17 + 0x70;
      }
      FUN_006f6e98(local_130,local_124);
      puVar23 = local_1ac;
    }
    puVar21 = local_1f0;
    if (local_1f0 == (uint *)&DAT_00000009) {
      local_2cc = puVar20;
LAB_006f8a48:
      local_240 = (uint *)CONCAT31(local_240._1_3_,(char)local_2cc);
      local_248 = puVar23;
      local_244 = puVar18;
      FUN_00700408(&local_98,local_264,uVar10);
      puVar21 = local_90;
      local_2d0 = local_94;
      if (local_98 == (uint *)&DAT_00000009) {
        local_1c8[0] = local_8c._0_1_;
        local_1d0 = local_2d0;
        local_1cc = local_90;
        FUN_006fb748(&local_108,local_264);
        if (local_108 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c06470);
        }
        local_1a0 = local_108;
        local_19c = local_104;
        local_198 = local_100;
        uStack_194 = local_fc;
        uStack_190 = uStack_f8;
        FUN_006fc544(&local_98,&local_1a0,uVar10,0x40);
        puVar20 = local_240;
        local_130 = local_94;
        local_12c = local_90;
        local_128 = local_8c;
        local_2d8 = local_84;
        if (local_98 == (uint *)&DAT_00000009) {
          local_2a8 = local_94;
          local_2b0 = local_88;
          local_2b8 = (uint *)*puVar15;
          local_2d4 = (uint *)puVar15[1];
          local_2bc = (uint *)local_1c8;
          FUN_006f6e98(local_264[0],local_258);
          if (puVar23 == (uint *)&DAT_80000000) {
            puVar23 = (uint *)0x0;
            puVar20 = (uint *)0x0;
            puVar18 = (uint *)&DAT_00000008;
          }
          uVar12 = 0;
          uVar9 = extraout_r2_00;
LAB_006f8dc4:
          local_8c = local_2d4;
          local_84 = puVar19;
LAB_006f8dc8:
          param_1[3] = puVar23;
          *(short *)((int)param_1 + 0x39) = (short)uVar9;
          param_1[7] = puVar21;
          param_1[8] = local_2bc;
          param_1[0x10] = local_2ec;
          param_1[0x13] = local_2ac;
          param_1[0x14] = local_2c0;
          *(undefined8 *)(param_1 + 1) = uVar24;
          param_1[4] = puVar18;
          param_1[5] = puVar20;
          param_1[6] = local_2d0;
          *(char *)((int)param_1 + 0x3b) = (char)(uVar9 >> 0x10);
          param_1[9] = local_2a8;
          param_1[10] = local_2b8;
          *(undefined1 *)(param_1 + 0xe) = local_2e4._0_1_;
          param_1[0xb] = local_8c;
          param_1[0xf] = local_84;
          param_1[0x11] = puVar22;
          param_1[0x12] = local_2f4;
          param_1[0xc] = local_2b0;
          param_1[0xd] = local_2d8;
          goto LAB_006f8d68;
        }
        local_2f0 = local_80;
        local_2d4 = local_7c;
        uVar3 = *(uint3 *)((int)puVar15 + 5);
        FUN_00b96a8c(&local_1d0);
        puVar21 = local_98;
      }
      else {
        local_2f0 = local_80;
        local_2d4 = local_7c;
        puVar21 = local_98;
        uVar3 = local_8c._1_3_;
      }
      local_2cc = (uint *)((uint)local_8c & 0xff);
      uVar9 = (uint)uVar3;
      local_1e0 = local_88;
      local_1dc = local_84;
      local_1ec = local_94;
      puStack_1e8 = local_90;
      if (puVar23 != (uint *)&DAT_80000000) {
        FUN_006f6418(&local_248);
      }
    }
    else {
      local_2f0 = local_1d8;
      local_2d4 = puStack_1d4;
      local_2cc = (uint *)(uint)local_1e4;
      FUN_006f6468(puVar18,puVar20);
      uVar9 = (uint)local_1e3;
      FUN_0134aee0(puVar23,puVar18,8,0x70);
      if (puVar21 == (uint *)&DAT_00000009) {
        puVar23 = local_1ec;
        puVar18 = puStack_1e8;
        goto LAB_006f8a48;
      }
    }
    if (puVar22 != (uint *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        uVar14 = *puVar22;
        bVar2 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar2);
      *puVar22 = uVar14 - 1;
      if (uVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(puVar22,local_2f4);
      }
    }
    local_2a8 = local_1e0;
    local_2b8 = local_1dc;
    puVar20 = local_1ec;
    puVar23 = puStack_1e8;
LAB_006f8d28:
    FUN_006f6e98(local_264[0],local_258);
    puVar22 = (uint *)((uint)local_2cc & 0xff | uVar9 << 8);
  }
  else {
    if (cVar1 != '\x10') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c063d0);
    }
    uVar24 = FUN_0070093c(uVar10,local_28c,local_27c);
    uVar12 = FUN_006fb3b4(local_28c,local_27c);
    FUN_006fb414(&local_108,local_28c,local_288,local_284,local_280,local_27c + 1,uVar12);
    FUN_006fb748(&local_1a0,&local_108);
    if (local_1a0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c06420);
    }
    local_130 = local_1a0;
    local_12c = local_19c;
    local_128 = local_198;
    local_124 = uStack_194;
    local_120 = uStack_190;
    FUN_006fc9e8(&local_98,&local_130,uVar10);
    local_2c0 = local_88;
    puVar21 = local_8c;
    local_2f4 = local_90;
    puVar22 = local_94;
    if (local_98 != (uint *)&DAT_00000009) {
      local_2d4 = local_7c;
      puVar22 = local_8c;
      local_2a8 = local_88;
      local_2b8 = local_84;
      puVar23 = local_90;
      local_2f0 = local_80;
      goto LAB_006f8ccc;
    }
    FUN_006fb748(&local_1a0,&local_108);
    if (local_1a0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c06430);
    }
    local_130 = local_1a0;
    local_12c = local_19c;
    local_128 = local_198;
    local_124 = uStack_194;
    local_120 = uStack_190;
    FUN_006fc8a0(&local_98,&local_130,uVar10);
    puVar8 = local_80;
    puVar19 = local_84;
    puVar7 = local_88;
    local_2b0 = local_90;
    local_2d4 = local_94;
    if (local_98 != (uint *)&DAT_00000009) {
      puVar23 = local_90;
      local_2a8 = local_88;
      local_2b8 = local_84;
      local_2d4 = local_7c;
      local_2f0 = local_80;
      puVar22 = local_8c;
      goto LAB_006f8c84;
    }
    local_2d8 = local_8c;
    local_2ec = local_80;
    local_2e4 = local_88;
    FUN_00700408(&local_98,&local_108,uVar10);
    puVar20 = local_8c;
    puVar18 = local_90;
    puVar23 = local_94;
    if (local_98 == (uint *)&DAT_00000009) {
      local_1d0 = local_94;
      local_1cc = local_90;
      local_1c8 = (undefined1  [4])local_8c;
      FUN_006fb748(&local_1a0,&local_108);
      if (local_1a0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c06440);
      }
      local_130 = local_1a0;
      local_12c = local_19c;
      local_128 = local_198;
      local_124 = uStack_194;
      local_120 = uStack_190;
      FUN_006fc544(&local_98,&local_130,uVar10,0x40);
      local_2d0 = local_94;
      local_2bc = local_8c;
      local_2a8 = local_88;
      local_2b8 = local_84;
      if (local_98 == (uint *)&DAT_00000009) {
        FUN_006f6e98(local_108,local_fc);
        if (puVar23 != (uint *)&DAT_80000000) {
          local_2ac = puVar21;
          uVar9 = (uint)puVar7 >> 8;
          uVar12 = 1;
          puVar21 = local_90;
          goto LAB_006f8dc4;
        }
        puVar22 = local_90;
        local_2a8 = local_8c;
        puVar21 = puVar18;
        local_2b8 = local_88;
        puVar23 = local_94;
        local_2f0 = local_84;
        goto LAB_006f8d40;
      }
      FUN_00b96a8c(&local_1d0);
    }
    else {
      local_2a8 = local_88;
      local_2b8 = local_84;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar19;
      bVar2 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar2);
    *puVar19 = uVar9 - 1;
    if (uVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(puVar19,puVar8);
    }
    puVar23 = local_90;
    local_2d4 = local_7c;
    local_2f0 = local_80;
    puVar22 = local_8c;
LAB_006f8c84:
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar21;
      bVar2 = (bool)hasExclusiveAccess(puVar21);
    } while (!bVar2);
    *puVar21 = uVar9 - 1;
    if (uVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(puVar21,local_2c0);
    }
    else {
    }
LAB_006f8ccc:
    FUN_006f6e98(local_108,local_fc);
    puVar21 = local_98;
    puVar20 = local_94;
  }
LAB_006f8d40:
  FUN_006f6e10(local_2ac);
  *local_2ac = (uint)puVar21;
  local_2ac[1] = (uint)puVar20;
  local_2ac[2] = (uint)puVar23;
  local_2ac[3] = (uint)puVar22;
  local_2ac[4] = (uint)local_2a8;
  local_2ac[5] = (uint)local_2b8;
  local_2ac[6] = (uint)local_2f0;
  local_2ac[7] = (uint)local_2d4;
LAB_006f8d60:
  uVar12 = 2;
LAB_006f8d68:
  *param_1 = uVar12;
  return;
}

