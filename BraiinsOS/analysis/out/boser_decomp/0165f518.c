// FUN_0165f518 @ 0165f518 size=3964 calls_out=14 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0165f518(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint local_300;
  uint local_2fc;
  undefined *local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  uint local_2c0;
  int local_2bc;
  undefined1 auStack_2b8 [64];
  char local_278;
  undefined **local_270 [4];
  undefined4 local_260;
  undefined4 uStack_25c;
  uint *puStack_258;
  undefined1 *puStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  uint local_230;
  int local_22c;
  undefined1 auStack_228 [64];
  undefined1 local_1e8;
  uint local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint local_1a0;
  int local_19c;
  undefined1 auStack_198 [64];
  undefined1 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint local_130;
  int local_12c;
  undefined1 auStack_128 [64];
  undefined1 local_e8;
  uint local_e0;
  int local_dc;
  uint local_d8;
  undefined4 local_d4;
  int local_d0;
  uint local_cc;
  undefined **local_c8;
  undefined1 *local_c4;
  uint *local_c0;
  code *local_bc;
  uint *local_b8;
  undefined1 *local_b4;
  uint *local_b0;
  undefined1 *local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_2f8 = &DAT_004c1a35;
  local_2f4 = 3;
  local_2fc = param_5;
  local_2e8 = 0;
  local_2ec = 0;
  local_2f0 = 0;
  local_300 = param_4;
  FUN_016633f0(&local_c8,param_4,param_5,&local_2f0,0xc);
  if (local_c8 == (undefined **)&DAT_80000004) {
    FUN_01bed93e(auStack_2b8,0,0x40);
    local_2e0 = 0x6a09e667;
    uStack_2dc = 0xbb67ae85;
    uStack_2d8 = 0x3c6ef372;
    uStack_2d4 = 0xa54ff53a;
    local_2d0 = 0x510e527f;
    uStack_2cc = 0x9b05688c;
    uStack_2c8 = 0x1f83d9ab;
    uStack_2c4 = 0x5be0cd19;
    uVar10 = param_3 >> 6;
    local_2bc = 0;
    local_2c0 = 0;
    local_278 = 0;
    if (uVar10 == 0) {
      FUN_01bed4e2(auStack_2b8,param_2,param_3);
      uVar14 = param_3;
    }
    else {
      local_2bc = 0;
      local_2c0 = uVar10;
      FUN_0196e0f8(&local_2e0,param_2);
      FUN_01bed4e2(auStack_2b8,param_2 + (param_3 & 0x7fffffc0),param_3 & 0x3f);
      uVar14 = param_3 & 0x3f;
    }
    uVar13 = 0x40 - uVar14;
    local_278 = (char)uVar14;
    if (param_5 < uVar13) {
      FUN_01bed4e2(auStack_2b8 + uVar14,param_4,param_5);
      uVar14 = uVar14 + param_5;
    }
    else {
      uVar11 = param_5;
      uVar5 = param_4;
      if (uVar14 != 0) {
        FUN_01bed4e2(auStack_2b8 + uVar14,param_4,uVar13);
        bVar18 = 0xfffffffe < local_2c0;
        local_2c0 = local_2c0 + 1;
        local_2bc = local_2bc + (uint)bVar18;
        FUN_0196e0f8(&local_2e0,auStack_2b8,1);
        uVar11 = param_5 - uVar13;
        uVar5 = param_4 + uVar13;
      }
      uVar14 = uVar11 & 0x3f;
      uVar13 = uVar11 >> 6;
      if (uVar13 != 0) {
        bVar18 = CARRY4(local_2c0,uVar13);
        local_2c0 = local_2c0 + uVar13;
        local_2bc = local_2bc + (uint)bVar18;
        FUN_0196e0f8(&local_2e0);
      }
      FUN_01bed4e2(auStack_2b8,uVar5 + (uVar11 & 0x7fffffc0),uVar14);
    }
    uVar13 = 0x40 - uVar14;
    cVar1 = (char)uVar14;
    local_278 = cVar1;
    if (param_3 < uVar13) {
      FUN_01bed4e2(auStack_2b8 + uVar14,param_2,param_3);
      local_278 = cVar1 + (char)param_3;
    }
    else {
      uVar11 = param_3;
      iVar6 = param_2;
      if (uVar14 != 0) {
        FUN_01bed4e2(auStack_2b8 + uVar14,param_2,uVar13);
        bVar18 = 0xfffffffe < local_2c0;
        local_2c0 = local_2c0 + 1;
        local_2bc = local_2bc + (uint)bVar18;
        FUN_0196e0f8(&local_2e0,auStack_2b8,1);
        uVar11 = param_3 - uVar13;
        iVar6 = param_2 + uVar13;
      }
      uVar14 = uVar11 >> 6;
      if (uVar14 != 0) {
        bVar18 = CARRY4(local_2c0,uVar14);
        local_2c0 = local_2c0 + uVar14;
        local_2bc = local_2bc + (uint)bVar18;
        FUN_0196e0f8(&local_2e0);
      }
      FUN_01bed4e2(auStack_2b8,iVar6 + (uVar11 & 0x7fffffc0),uVar11 & 0x3f);
      local_278 = (char)(uVar11 & 0x3f);
    }
    FUN_0165d6e4(local_270,&local_2e0);
    FUN_01bed93e(auStack_228,0,0x40);
    local_250 = 0x6a09e667;
    uStack_24c = 0xbb67ae85;
    uStack_248 = 0x3c6ef372;
    uStack_244 = 0xa54ff53a;
    local_240 = 0x510e527f;
    uStack_23c = 0x9b05688c;
    uStack_238 = 0x1f83d9ab;
    uStack_234 = 0x5be0cd19;
    local_22c = 0;
    local_230 = 0;
    local_1e8 = 0;
    if (uVar10 == 0) {
      iVar6 = param_2;
      uVar10 = param_3;
    }
    else {
      local_22c = 0;
      local_230 = uVar10;
      FUN_0196e0f8(&local_250,param_2);
      iVar6 = param_2 + (param_3 & 0x7fffffc0);
      uVar10 = param_3 & 0x3f;
    }
    FUN_01bed4e2(auStack_228,iVar6,uVar10);
    uVar14 = 0x40 - uVar10;
    local_1e8 = (undefined1)uVar10;
    if (param_5 < uVar14) {
      FUN_01bed4e2(auStack_228 + uVar10,param_4,param_5);
      uVar10 = uVar10 + param_5;
    }
    else {
      uVar13 = param_5;
      uVar11 = param_4;
      if (uVar10 != 0) {
        FUN_01bed4e2(auStack_228 + uVar10,param_4,uVar14);
        bVar18 = 0xfffffffe < local_230;
        local_230 = local_230 + 1;
        local_22c = local_22c + (uint)bVar18;
        FUN_0196e0f8(&local_250,auStack_228,1);
        uVar13 = param_5 - uVar14;
        uVar11 = param_4 + uVar14;
      }
      uVar10 = uVar13 & 0x3f;
      uVar14 = uVar13 >> 6;
      if (uVar14 != 0) {
        bVar18 = CARRY4(local_230,uVar14);
        local_230 = local_230 + uVar14;
        local_22c = local_22c + (uint)bVar18;
        FUN_0196e0f8(&local_250);
      }
      FUN_01bed4e2(auStack_228,uVar11 + (uVar13 & 0x7fffffc0),uVar10);
    }
    local_1e8 = (undefined1)uVar10;
    if (param_3 == 0) {
      FUN_0165d6e4(&local_1e0,&local_250);
      FUN_01bed93e(auStack_198,0,0x40);
      local_1c0 = 0x6a09e667;
      uStack_1bc = 0xbb67ae85;
      uStack_1b8 = 0x3c6ef372;
      uStack_1b4 = 0xa54ff53a;
      local_1b0 = 0x510e527f;
      uStack_1ac = 0x9b05688c;
      uStack_1a8 = 0x1f83d9ab;
      uStack_1a4 = 0x5be0cd19;
      local_19c = 0;
      local_1a0 = 0;
      local_158 = 0;
    }
    else {
      uVar14 = param_3;
      do {
        uVar10 = uVar10 & 0xff;
        uVar11 = 0x40 - uVar10;
        puVar3 = auStack_228 + uVar10;
        uVar13 = uVar14;
        if (0x1f < uVar14) {
          uVar13 = 0x20;
        }
        if (uVar13 < uVar11) {
          FUN_01bed4e2(puVar3,local_270,uVar13);
          uVar10 = uVar13 + uVar10;
        }
        else {
          FUN_01bed4e2(puVar3,local_270,uVar11);
          FUN_0196e0f8(&local_250,auStack_228,1);
          uVar10 = uVar13 - uVar11;
          FUN_01bed4e2(auStack_228,(int)local_270 + uVar11,uVar10);
        }
        bVar18 = 0x1f < uVar14;
        uVar14 = uVar14 - 0x20;
        local_1e8 = (undefined1)uVar10;
      } while (bVar18 && uVar14 != 0);
      uVar14 = param_3;
      do {
        if ((uVar14 & 1) == 0) {
          uVar13 = 0x40 - uVar10;
          if (param_3 < uVar13) {
            FUN_01bed4e2(auStack_228 + uVar10,param_2,param_3);
            uVar13 = param_3 + uVar10;
          }
          else {
            uVar11 = param_3;
            iVar6 = param_2;
            if (uVar10 != 0) {
              FUN_01bed4e2(auStack_228 + uVar10,param_2,uVar13);
              bVar18 = 0xfffffffe < local_230;
              local_230 = local_230 + 1;
              local_22c = local_22c + (uint)bVar18;
              FUN_0196e0f8(&local_250,auStack_228,1);
              uVar11 = param_3 - uVar13;
              iVar6 = param_2 + uVar13;
            }
            uVar10 = uVar11 >> 6;
            if (uVar10 != 0) {
              bVar18 = CARRY4(local_230,uVar10);
              local_230 = local_230 + uVar10;
              local_22c = local_22c + (uint)bVar18;
              FUN_0196e0f8(&local_250,iVar6);
            }
            uVar13 = uVar11 & 0x3f;
            FUN_01bed4e2(auStack_228,iVar6 + (uVar11 & 0x7fffffc0),uVar13);
          }
        }
        else {
          puVar3 = auStack_228 + uVar10;
          if (uVar10 < 0x20) {
            FUN_01bed4e2(puVar3,local_270,0x20);
            uVar13 = uVar10 | 0x20;
          }
          else {
            FUN_01bed4e2(puVar3,local_270,0x40 - uVar10);
            bVar18 = 0xfffffffe < local_230;
            local_230 = local_230 + 1;
            local_22c = local_22c + (uint)bVar18;
            FUN_0196e0f8(&local_250,auStack_228,1);
            uVar13 = uVar10 - 0x20;
            FUN_01bed4e2(auStack_228,(int)local_270 + (uVar13 & 0x7fffffc0) + (0x40 - uVar10),uVar13
                        );
          }
        }
        uVar10 = uVar13 & 0xff;
        uVar14 = uVar14 >> 1;
        local_1e8 = (undefined1)uVar13;
      } while (uVar14 != 0);
      FUN_0165d6e4(&local_1e0,&local_250);
      uVar14 = 0;
      FUN_01bed93e(auStack_198,0,0x40);
      local_1c0 = 0x6a09e667;
      uStack_1bc = 0xbb67ae85;
      uStack_1b8 = 0x3c6ef372;
      uStack_1b4 = 0xa54ff53a;
      local_1b0 = 0x510e527f;
      uStack_1ac = 0x9b05688c;
      uStack_1a8 = 0x1f83d9ab;
      uStack_1a4 = 0x5be0cd19;
      local_19c = 0;
      local_1a0 = 0;
      local_158 = 0;
      uVar10 = param_3;
      do {
        uVar13 = 0x40 - uVar14;
        if (param_3 < uVar13) {
          FUN_01bed4e2(auStack_198 + uVar14,param_2,param_3);
          uVar14 = param_3 + uVar14;
        }
        else {
          uVar11 = param_3;
          iVar6 = param_2;
          if (uVar14 != 0) {
            FUN_01bed4e2(auStack_198 + uVar14,param_2,uVar13);
            bVar18 = 0xfffffffe < local_1a0;
            local_1a0 = local_1a0 + 1;
            local_19c = local_19c + (uint)bVar18;
            FUN_0196e0f8(&local_1c0,auStack_198,1);
            uVar11 = param_3 - uVar13;
            iVar6 = param_2 + uVar13;
          }
          uVar14 = uVar11 >> 6;
          if (uVar14 != 0) {
            bVar18 = CARRY4(local_1a0,uVar14);
            local_1a0 = local_1a0 + uVar14;
            local_19c = local_19c + (uint)bVar18;
            FUN_0196e0f8(&local_1c0,iVar6);
          }
          uVar14 = uVar11 & 0x3f;
          FUN_01bed4e2(auStack_198,iVar6 + (uVar11 & 0x7fffffc0),uVar14);
        }
        uVar10 = uVar10 - 1;
        local_158 = (undefined1)uVar14;
      } while (uVar10 != 0);
    }
    FUN_0165d6e4(local_270,&local_1c0);
    uVar12 = 0;
    FUN_01bed93e(auStack_128,0,0x40);
    local_150 = 0x6a09e667;
    uStack_14c = 0xbb67ae85;
    uStack_148 = 0x3c6ef372;
    uStack_144 = 0xa54ff53a;
    local_140 = 0x510e527f;
    uStack_13c = 0x9b05688c;
    uStack_138 = 0x1f83d9ab;
    uStack_134 = 0x5be0cd19;
    local_e0 = param_3 + 0x1f & 0xffffffe0;
    local_12c = 0;
    local_130 = 0;
    local_e8 = 0;
    if ((int)(param_3 + 0x1f) < 0) {
LAB_0165fccc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,local_e0);
    }
    if (local_e0 == 0) {
      local_dc = 1;
      local_e0 = 0;
    }
    else {
      uVar12 = 1;
      local_dc = FUN_01298504(local_e0,1);
      if (local_dc == 0) goto LAB_0165fccc;
    }
    local_d8 = 0;
    if (param_3 != 0) {
      do {
        uVar10 = param_3;
        if (0x1f < param_3) {
          uVar10 = 0x20;
        }
        FUN_016620a0(&local_e0,local_270,uVar10);
        bVar18 = 0x1f < param_3;
        param_3 = param_3 - 0x20;
      } while (bVar18 && param_3 != 0);
    }
    uVar10 = 0;
    iVar6 = (local_1e0 & 0xff) + 0x10;
    do {
      uVar14 = 0x40 - uVar10;
      if (param_5 < uVar14) {
        FUN_01bed4e2(auStack_128 + uVar10,param_4,param_5);
        uVar10 = param_5 + uVar10;
      }
      else {
        uVar13 = param_4;
        uVar11 = param_5;
        if (uVar10 != 0) {
          FUN_01bed4e2(auStack_128 + uVar10,param_4,uVar14);
          bVar18 = 0xfffffffe < local_130;
          local_130 = local_130 + 1;
          local_12c = local_12c + (uint)bVar18;
          FUN_0196e0f8(&local_150,auStack_128,1);
          uVar13 = param_4 + uVar14;
          uVar11 = param_5 - uVar14;
        }
        uVar10 = uVar11 >> 6;
        if (uVar10 != 0) {
          bVar18 = CARRY4(local_130,uVar10);
          local_130 = local_130 + uVar10;
          local_12c = local_12c + (uint)bVar18;
          FUN_0196e0f8(&local_150,uVar13);
        }
        uVar10 = uVar11 & 0x3f;
        FUN_01bed4e2(auStack_128,uVar13 + (uVar11 & 0x7fffffc0),uVar10);
      }
      iVar6 = iVar6 + -1;
      local_e8 = (undefined1)uVar10;
    } while (iVar6 != 0);
    FUN_0165d6e4(&local_c8,&local_150);
    local_270[0] = local_c8;
    local_270[1] = (undefined **)local_c4;
    local_270[2] = (undefined **)local_c0;
    local_270[3] = (undefined **)local_bc;
    local_260 = local_b8;
    uStack_25c = local_b4;
    puStack_258 = local_b0;
    puStack_254 = local_ac;
    local_d0 = thunk_FUN_01be5118(0x10);
    if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    local_cc = 0;
    local_d4 = 0x10;
    if (0x20 < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_5,0x20,&DAT_01d06d5c);
    }
    FUN_016620a0(&local_d4,local_270,param_5);
    uVar14 = local_cc;
    iVar2 = local_d0;
    uVar10 = local_d8;
    iVar6 = local_dc;
    uVar13 = param_7;
    if ((param_6 & 1) == 0) {
      uVar13 = 5000;
    }
    if (uVar13 != 0) {
      iVar17 = 0;
      uVar16 = 0;
      iVar4 = local_dc + (local_d8 & 0x7fffffc0);
      uVar5 = local_d8 & 0x3f;
      uVar11 = local_d8 >> 6;
      do {
        FUN_01bed93e(local_a0,0,0x40);
        local_c8 = (undefined **)0x6a09e667;
        local_c4 = (undefined1 *)0xbb67ae85;
        local_c0 = (uint *)0x3c6ef372;
        local_bc = (code *)0xa54ff53a;
        local_b8 = (uint *)0x510e527f;
        local_b4 = (undefined1 *)0x9b05688c;
        local_b0 = (uint *)0x1f83d9ab;
        local_ac = (undefined1 *)0x5be0cd19;
        local_60 = 0;
        local_a8 = 0;
        local_a4 = 0;
        if ((uVar16 & 1) == 0) {
          local_a0[0] = local_1e0;
          local_a0[1] = uStack_1dc;
          local_a0[2] = uStack_1d8;
          local_a0[3] = uStack_1d4;
          local_90 = local_1d0;
          uStack_8c = uStack_1cc;
          uStack_88 = uStack_1c8;
          uStack_84 = uStack_1c4;
          uVar15 = 0x20;
LAB_0165ffc4:
        }
        else {
          if (0x3f < uVar10) {
            local_a4 = 0;
            local_a8 = uVar11;
            FUN_0196e0f8(&local_c8,iVar6);
            FUN_01bed4e2(local_a0,iVar4,uVar5);
            uVar15 = uVar5;
            goto LAB_0165ffc4;
          }
          FUN_01bed4e2(local_a0,iVar6,uVar10);
          uVar15 = uVar10;
        }
        local_60 = (undefined1)uVar15;
        if (iVar17 + ((uint)((ulonglong)uVar16 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar16 / 3 != 0
           ) {
          uVar7 = 0x40 - uVar15;
          if (uVar14 < uVar7) {
            FUN_01bed4e2((int)local_a0 + uVar15,iVar2,uVar14);
            uVar15 = uVar14 + uVar15;
          }
          else {
            iVar9 = iVar2;
            uVar8 = uVar14;
            if (uVar15 != 0) {
              FUN_01bed4e2((int)local_a0 + uVar15,iVar2,uVar7);
              bVar18 = 0xfffffffe < local_a8;
              local_a8 = local_a8 + 1;
              local_a4 = local_a4 + (uint)bVar18;
              FUN_0196e0f8(&local_c8,local_a0,1);
              iVar9 = iVar2 + uVar7;
              uVar8 = uVar14 - uVar7;
            }
            uVar15 = uVar8 >> 6;
            if (uVar15 != 0) {
              bVar18 = CARRY4(local_a8,uVar15);
              local_a8 = local_a8 + uVar15;
              local_a4 = local_a4 + (uint)bVar18;
              FUN_0196e0f8(&local_c8,iVar9);
            }
            uVar15 = uVar8 & 0x3f;
            FUN_01bed4e2(local_a0,iVar9 + (uVar8 & 0x7fffffc0),uVar15);
          }
          local_60 = (undefined1)uVar15;
        }
        if (iVar17 + ((uVar16 / 7) * 8 - uVar16 / 7) != 0) {
          uVar7 = 0x40 - uVar15;
          if (uVar10 < uVar7) {
            FUN_01bed4e2((int)local_a0 + uVar15,iVar6,uVar10);
            uVar15 = uVar10 + uVar15;
          }
          else {
            iVar9 = iVar6;
            uVar8 = uVar10;
            if (uVar15 != 0) {
              FUN_01bed4e2((int)local_a0 + uVar15,iVar6,uVar7);
              bVar18 = 0xfffffffe < local_a8;
              local_a8 = local_a8 + 1;
              local_a4 = local_a4 + (uint)bVar18;
              FUN_0196e0f8(&local_c8,local_a0,1);
              iVar9 = iVar6 + uVar7;
              uVar8 = uVar10 - uVar7;
            }
            uVar15 = uVar8 >> 6;
            if (uVar15 != 0) {
              bVar18 = CARRY4(local_a8,uVar15);
              local_a8 = local_a8 + uVar15;
              local_a4 = local_a4 + (uint)bVar18;
              FUN_0196e0f8(&local_c8,iVar9);
            }
            uVar15 = uVar8 & 0x3f;
            FUN_01bed4e2(local_a0,iVar9 + (uVar8 & 0x7fffffc0),uVar15);
          }
          local_60 = (undefined1)uVar15;
        }
        uVar7 = -uVar15 + 0x40;
        if ((uVar16 & 1) == 0) {
          if (uVar10 < uVar7) {
            FUN_01bed4e2((int)local_a0 + uVar15,iVar6,uVar10);
            uVar8 = uVar10 + uVar15;
          }
          else {
            iVar9 = iVar6;
            uVar8 = uVar10;
            if (uVar15 != 0) {
              FUN_01bed4e2((int)local_a0 + uVar15,iVar6,uVar7);
              bVar18 = 0xfffffffe < local_a8;
              local_a8 = local_a8 + 1;
              local_a4 = local_a4 + (uint)bVar18;
              FUN_0196e0f8(&local_c8,local_a0,1);
              iVar9 = iVar6 + uVar7;
              uVar8 = uVar10 - uVar7;
            }
            uVar15 = uVar8 >> 6;
            if (uVar15 != 0) {
              bVar18 = CARRY4(local_a8,uVar15);
              local_a8 = local_a8 + uVar15;
              local_a4 = local_a4 + (uint)bVar18;
              FUN_0196e0f8(&local_c8,iVar9);
            }
            puVar3 = (undefined1 *)(iVar9 + (uVar8 & 0x7fffffc0));
            uVar8 = uVar8 & 0x3f;
LAB_01660290:
            FUN_01bed4e2(local_a0,puVar3,uVar8);
          }
        }
        else {
          iVar9 = (int)local_a0 + uVar15;
          if (0x1f < uVar15) {
            FUN_01bed4e2(iVar9,&local_1e0,uVar7);
            bVar18 = 0xfffffffe < local_a8;
            local_a8 = local_a8 + 1;
            local_a4 = local_a4 + (uint)bVar18;
            FUN_0196e0f8(&local_c8,local_a0,1);
            uVar8 = uVar15 - 0x20;
            puVar3 = auStack_198 + (uVar8 & 0x7fffffc0) + -uVar15 + -8;
            goto LAB_01660290;
          }
          FUN_01bed4e2(iVar9,&local_1e0,0x20);
          uVar8 = uVar15 | 0x20;
        }
        local_60 = (undefined1)uVar8;
        FUN_0165d6e4(&local_58,&local_c8);
        uVar16 = uVar16 + 1;
        iVar17 = iVar17 + -1;
        local_1e0 = local_58;
        uStack_1dc = local_54;
        uStack_1d8 = uStack_50;
        uStack_1d4 = uStack_4c;
        local_1d0 = local_48;
        uStack_1cc = uStack_44;
        uStack_1c8 = uStack_40;
        uStack_1c4 = uStack_3c;
      } while (uVar13 != uVar16);
    }
    iVar6 = 0;
    do {
      uVar10 = (uint)(byte)(&DAT_0056c7c8)[iVar6];
      if (0x1f < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,0x20,&DAT_01d06d6c);
      }
      *(undefined1 *)((int)local_270 + iVar6) = auStack_198[uVar10 - 0x48];
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x20);
    if ((param_6 & 1) == 0) {
      FUN_01663550(&local_58,local_270,0x20);
      local_c0 = &local_300;
      local_c8 = &local_2f8;
      local_b4 = &LAB_00632348;
      local_bc = (code *)&LAB_018a13b8;
      local_c4 = &LAB_018a13b8;
      local_b8 = &local_58;
      FUN_00664898(&local_30,&DAT_00584984,&local_c8);
      FUN_0134bd64(local_58,local_54);
      param_1[1] = local_30;
      param_1[2] = uStack_2c;
      param_1[3] = uStack_28;
      *param_1 = 0;
    }
    else {
      local_34 = param_7;
      FUN_01663550(&local_58,local_270,0x20);
      local_b8 = &local_300;
      local_c0 = &local_34;
      local_c8 = &local_2f8;
      local_ac = &LAB_00632348;
      local_b4 = &LAB_018a13b8;
      local_bc = FUN_012fd02c;
      local_c4 = &LAB_018a13b8;
      local_b0 = &local_58;
      FUN_00664898(&local_30,&DAT_00586696,&local_c8);
      FUN_0134bd64(local_58,local_54);
      param_1[1] = local_30;
      param_1[2] = uStack_2c;
      param_1[3] = uStack_28;
      *param_1 = 0;
    }
    FUN_0134bd64(local_d4,local_d0);
    FUN_0134bd64(local_e0,local_dc);
  }
  else {
    *param_1 = 1;
    param_1[1] = local_c8;
    param_1[2] = local_c4;
    param_1[3] = local_c0;
  }
  return;
}

