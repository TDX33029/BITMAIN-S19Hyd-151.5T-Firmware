// FUN_016c4644 @ 016c4644 size=6012 calls_out=23 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016c4644(undefined4 *param_1,uint *param_2,uint *param_3,undefined4 param_4,uint *param_5,
                 uint *param_6,uint *param_7,int param_8)

{
  char cVar1;
  undefined1 uVar2;
  uint3 *puVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint **ppuVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  uint *unaff_r8;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  bool bVar35;
  uint *local_2fc;
  uint local_2e4;
  uint *local_2cc;
  uint *local_2c8;
  uint *local_2c0;
  uint *local_2b8;
  uint *local_2b4;
  uint *local_2b0;
  uint *local_2ac;
  uint *puStack_2a8;
  uint *local_2a4;
  uint *local_2a0;
  uint *puStack_29c;
  uint *puStack_298;
  uint *puStack_294;
  uint *local_290;
  uint *puStack_28c;
  uint *puStack_288;
  uint *puStack_284;
  uint *local_280;
  uint *puStack_27c;
  uint *puStack_278;
  uint *puStack_274;
  undefined1 auStack_270 [32];
  uint *local_250;
  uint *puStack_24c;
  uint *puStack_248;
  uint *puStack_244;
  uint *puStack_240;
  undefined4 local_238 [3];
  uint *local_22c;
  uint *puStack_228;
  uint *puStack_224;
  uint *puStack_220;
  uint *puStack_21c;
  uint *local_218;
  uint *puStack_214;
  uint *puStack_210;
  uint *puStack_20c;
  uint *puStack_208;
  uint *local_200;
  uint *puStack_1fc;
  uint *puStack_1f8;
  uint *puStack_1f4;
  uint *local_1f0;
  uint *puStack_1ec;
  uint *puStack_1e8;
  uint *puStack_1e4;
  uint *local_1e0;
  uint *local_1dc;
  uint *local_1d8;
  uint *local_1d4;
  uint *local_1d0;
  uint *local_1cc;
  uint *local_1c8;
  uint *puStack_1c4;
  uint *puStack_1c0;
  uint *puStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint *local_170;
  uint *puStack_16c;
  uint *puStack_168;
  uint *local_164;
  uint *puStack_160;
  uint *puStack_15c;
  uint *puStack_158;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  undefined4 local_144;
  uint *local_140;
  uint *local_13c;
  uint *local_138;
  uint *local_134;
  uint *puStack_130;
  uint *puStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  char *local_cc;
  uint local_c8;
  uint local_c4;
  uint *local_c0;
  uint *puStack_bc;
  uint *puStack_b8;
  uint *puStack_b4;
  uint *puStack_b0;
  uint *local_a8;
  uint *puStack_a4;
  uint *puStack_a0;
  uint *puStack_9c;
  uint *puStack_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *puStack_78;
  uint *puStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *puStack_3c;
  uint *local_38;
  uint *puStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  uVar11 = param_3[0xbb];
  if (uVar11 == 0) {
    puVar25 = (uint *)param_3[0xba];
  }
  else {
    if (6 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11 - 1,6,&DAT_018af2d8);
    }
    if (param_3[(uVar11 - 1) * 0x1f] == 0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af2e8);
    }
    puVar25 = param_3 + uVar11 * 0x1f + -0x1f;
  }
  local_2b8 = (uint *)puVar25[0xd];
  local_2b4 = (uint *)puVar25[0xe];
  local_1e0 = (uint *)&DAT_80000000;
  local_2b0 = (uint *)0x0;
  FUN_016d0414(&local_150,&local_2b8);
  puVar6 = local_144;
  puVar30 = local_148;
  if ((local_150 != (uint *)0x8000002d) ||
     (FUN_016d0414(&local_150,&local_2b8), local_150 != (uint *)0x8000002d)) {
    local_2c0 = local_134;
    puVar25 = local_138;
    puVar30 = local_140;
    puVar22 = local_14c;
    unaff_r8 = local_148;
    puVar29 = local_150;
    puVar32 = local_144;
    puVar6 = local_13c;
    goto LAB_016c4728;
  }
  puVar22 = param_2;
  puVar32 = param_3;
  if (local_144 <= puVar6 && (uint)(puVar30 <= local_148) <= (uint)((int)local_144 - (int)puVar6)) {
    puVar29 = (uint *)0x8000000a;
    goto LAB_016c4728;
  }
  unaff_r8 = param_5;
  if (param_6 <= puVar6 && (uint)(puVar30 <= param_5) <= (uint)((int)param_6 - (int)puVar6)) {
    puVar29 = (uint *)0x80000005;
    puVar32 = param_6;
    goto LAB_016c4728;
  }
  if (local_144 <= param_6 && (uint)(param_5 <= local_148) <= (uint)((int)local_144 - (int)param_6))
  {
    puVar30 = local_148;
    puVar29 = (uint *)0x80000003;
    puVar32 = param_6;
    puVar6 = local_144;
    goto LAB_016c4728;
  }
  puVar29 = (uint *)&DAT_80000000;
  if (local_2b0 == local_2b4) {
    FUN_016c3a1c(&local_1e0,local_2b0,
                 (int)local_144 - (int)((int)param_6 + (uint)(param_5 > local_148)));
    if ((uint *)puVar25[0x13] != (uint *)0x0) {
      local_2b4 = (uint *)puVar25[0x14];
      local_2b0 = (uint *)0x0;
      local_2b8 = (uint *)puVar25[0x13];
      FUN_016c624c(&local_150,&local_2b8);
      puVar22 = local_14c;
      puVar29 = (uint *)((uint)local_14c & 0xff);
      if (local_150 == (uint *)0x8000002d) {
        if (local_2b0 == local_2b4) {
          puVar18 = local_2b4;
          puVar27 = puVar30;
          if (uVar11 == 0) {
LAB_016c4994:
            if (((uint)puVar22 & 1) == 0) {
LAB_016c49b0:
              puVar29 = (uint *)&DAT_80000000;
              if (local_2b0 == local_2b4) goto LAB_016c49c0;
              goto LAB_016c4c04;
            }
            puVar15 = puVar29;
            local_138 = puVar25;
            puVar30 = puVar27;
            puVar29 = (uint *)0x80000002;
          }
          else {
            if (((uint)local_14c & 1) != 0) goto LAB_016c49b0;
LAB_016c485c:
            puVar15 = puVar29;
            local_138 = puVar25;
            puVar30 = puVar27;
            puVar29 = (uint *)&DAT_80000008;
          }
        }
        else {
          FUN_016c607c(&local_150,&local_2b8,2);
          unaff_r8 = local_148;
          puVar27 = local_14c;
          puVar15 = local_14c;
          if (local_150 == (uint *)0x8000002d) {
            puVar6 = puVar29;
            if (local_148 != (uint *)0x0) {
              local_150 = (uint *)&DAT_80000000;
              FUN_016c3a1c(&local_150);
              puVar18 = (uint *)(int)(char)*puVar27;
              puVar30 = puVar27;
              if (puVar18 == (uint *)0x0) {
                unaff_r8 = (uint *)((int)unaff_r8 + -1);
                if (unaff_r8 == (uint *)0x0) {
                  puVar18 = (uint *)0x0;
LAB_016c4968:
                  if (uVar11 == 0) goto LAB_016c4994;
                  if (((uint)puVar22 & 1) == 0) goto LAB_016c485c;
                  puVar18 = (uint *)((uint)puVar18 & 0xff);
                  if (param_7 <= puVar18) goto LAB_016c49b0;
                  puVar15 = puVar29;
                  local_138 = puVar25;
                  puVar29 = (uint *)&DAT_80000019;
                  goto LAB_016c49a4;
                }
                puVar18 = (uint *)(int)*(char *)((int)puVar27 + 1);
                puVar15 = puVar29;
                if ((int)puVar18 < 0) goto LAB_016c490c;
              }
              else {
                puVar15 = puVar29;
                if (-1 < (int)puVar18) {
LAB_016c490c:
                  puVar15 = puVar29;
                  if (unaff_r8 == (uint *)&DAT_00000001) goto LAB_016c4968;
                }
              }
            }
            puVar18 = (uint *)((uint)puVar15 >> 8);
            local_138 = puVar25;
            puVar29 = (uint *)&DAT_80000000;
          }
          else {
            local_2c0 = local_134;
            puVar18 = (uint *)((uint)local_14c >> 8);
            puVar30 = local_140;
            puVar29 = local_150;
            puVar32 = local_144;
            puVar6 = local_13c;
          }
        }
      }
      else {
        puVar3 = (uint3 *)((uint)&local_150 | 5);
        unaff_r8 = *(uint **)((int)puVar3 + 3);
        puVar32 = *(uint **)((int)puVar3 + 7);
        local_2c0 = local_134;
        puVar18 = (uint *)(uint)*puVar3;
        puVar15 = puVar29;
        puVar30 = local_140;
        puVar29 = local_150;
        puVar6 = local_13c;
      }
LAB_016c49a4:
      puVar22 = (uint *)((uint)puVar15 & 0xff | (int)puVar18 << 8);
      puVar25 = local_138;
      goto LAB_016c4728;
    }
    if (uVar11 == 0) {
LAB_016c49c0:
      FUN_016c3a1c();
      if ((uint *)puVar25[0x17] != (uint *)0x0) {
        local_44 = (uint *)puVar25[0x18];
        local_40 = (uint *)0x0;
        local_2cc = param_2 + 1;
        local_2c0 = (uint *)*local_2cc;
        puVar18 = (uint *)param_2[2];
        local_2b0 = (uint *)0x0;
        local_2b4 = (uint *)&DAT_00000004;
        local_2b8 = (uint *)0x0;
        local_48 = (uint *)puVar25[0x17];
LAB_016c4a54:
        puVar27 = local_2b0;
        puVar15 = local_2b4;
        FUN_016c607c(&local_150,&local_48,6);
        puVar25 = local_138;
        puVar6 = local_13c;
        puVar30 = local_140;
        puVar32 = local_144;
        unaff_r8 = local_148;
        puVar22 = local_14c;
        puVar29 = local_150;
        if (local_150 != (uint *)0x8000002d) {
          local_2c0 = local_134;
          puVar18 = puVar15 + 1;
          for (; puVar27 != (uint *)0x0; puVar27 = (uint *)((int)puVar27 + -1)) {
            if (puVar18[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar18);
            }
            puVar18 = puVar18 + 3;
          }
          if (local_2b8 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar15);
          }
          if (puVar29 == (uint *)0x8000002d) goto LAB_016c4d70;
          goto LAB_016c4728;
        }
        if ((puVar18 != local_148) ||
           (iVar4 = thunk_FUN_016dd50a(local_2c0,local_14c,puVar18), iVar4 != 0)) goto LAB_016c4aa4;
        if (local_44 < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_150,&DAT_018af2c8,&DAT_018af308);
        }
        local_40 = local_44;
        puVar25 = puVar15 + 1;
        for (; puVar27 != (uint *)0x0; puVar27 = (uint *)((int)puVar27 + -1)) {
          if (puVar25[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar25);
          }
          puVar25 = puVar25 + 3;
        }
        if (local_2b8 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar15);
        }
LAB_016c4d70:
        if (local_40 == local_44) goto LAB_016c4d88;
        puVar29 = (uint *)&DAT_80000000;
        goto LAB_016c4c04;
      }
      if (*param_2 != 0) {
LAB_016c4d88:
        ppuVar17 = &local_1e0;
        FUN_016c3a1c(ppuVar17);
        puVar25 = (uint *)param_2[8];
        puVar14 = (undefined4 *)((uint)&local_290 | 4);
        local_290 = (uint *)0x8000001e;
        if (param_2[9] != 0) {
          uVar19 = param_2[6];
          puVar30 = puVar25 + param_2[9] * 9;
          uVar26 = param_2[7];
          puVar8 = (undefined4 *)((uint)&local_48 | 4);
          puVar9 = (undefined4 *)((uint)ppuVar17 | 4);
          uVar16 = (uint)ppuVar17 | 5;
          cVar1 = *(char *)((int)param_2 + 0x16);
LAB_016c4ea4:
          uVar7 = param_3[0xbb];
          uVar28 = puVar25[1];
          uVar31 = puVar25[2];
          if (uVar7 == 0) {
            puVar6 = (uint *)param_3[0xba];
          }
          else {
            local_2e4 = uVar7 - 1;
            if (6 < uVar7) {
LAB_016c5dd0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(local_2e4,6,&DAT_018af2d8);
            }
            puVar6 = param_3 + local_2e4 * 0x1f;
            if (*puVar6 == 0x80000001) goto LAB_016c5d10;
          }
          if ((puVar6[0xc] == uVar31) &&
             (iVar4 = thunk_FUN_016dd50a(puVar6[0xb],uVar28,uVar31), iVar4 == 0)) {
            if ((uVar7 == 0) || (param_3[uVar7 * 0x1f + -0x1f] != 0x80000001)) {
              uVar33 = puVar25[4];
              uVar34 = puVar25[5];
              if (cVar1 == '\x02') {
                uVar28 = uVar7;
                do {
                  if (uVar28 == 0) {
                    local_2e4 = 0;
                    puVar6 = (uint *)param_3[0xba];
                  }
                  else {
                    local_2e4 = uVar28 - 1;
                    if (6 < uVar28) goto LAB_016c5dd0;
                    puVar6 = param_3 + local_2e4 * 0x1f;
                    if (*puVar6 == 0x80000001) goto LAB_016c5d10;
                  }
                  FUN_016cb9b4(&local_1e0,uVar19,uVar26,uVar33,uVar34,puVar6 + 5,param_8);
                  if (local_1e0 != (uint *)0x8000002d) goto LAB_016c5414;
                  bVar35 = uVar28 != 0;
                  uVar33 = puVar6[0x11];
                  uVar34 = puVar6[0x12];
                  uVar28 = local_2e4;
                } while (bVar35);
              }
              else {
                uVar10 = 0;
                uVar20 = uVar7;
                do {
                  if (uVar20 == 0) {
                    puVar6 = (uint *)param_3[0xba];
                    local_2e4 = 0;
                  }
                  else {
                    local_2e4 = uVar20 - 1;
                    if (6 < uVar20) goto LAB_016c5dd0;
                    puVar6 = param_3 + local_2e4 * 0x1f;
                    if (*puVar6 == 0x80000001) goto LAB_016c5d10;
                  }
                  FUN_016cb9b4(&local_1e0,uVar19,uVar26,uVar33,uVar34,puVar6 + 5,param_8);
                  if ((local_1e0 != (uint *)0x8000002d) ||
                     (FUN_016cbbe0(&local_1e0,param_2 + 3,puVar6,uVar20,uVar28,uVar31,uVar33,uVar34,
                                   uVar10,ppuVar17,uVar19,uVar26,param_8),
                     local_1e0 != (uint *)0x8000002d)) goto LAB_016c5414;
                  bVar35 = uVar20 != 0;
                  uVar10 = puVar6[0x15];
                  ppuVar17 = (uint **)puVar6[0x16];
                  uVar28 = puVar6[0xf];
                  uVar31 = puVar6[0x10];
                  uVar33 = puVar6[0x11];
                  uVar34 = puVar6[0x12];
                  uVar20 = local_2e4;
                } while (bVar35);
              }
              uVar28 = puVar25[8];
              pcVar5 = (char *)0x0;
              if (puVar25[6] != 0x80000001) {
                pcVar5 = (char *)puVar25[7];
              }
              do {
                if (uVar7 == 0) {
                  puVar6 = (uint *)param_3[0xba];
                  local_2e4 = 0;
                }
                else {
                  local_2e4 = uVar7 - 1;
                  if (6 < uVar7) goto LAB_016c5dd0;
                  puVar6 = param_3 + local_2e4 * 0x1f;
                  if (*puVar6 == 0x80000001) break;
                }
                local_238[0] = 0x80000000;
                if (pcVar5 != (char *)0x0) {
                  local_c4 = 0;
                  local_cc = pcVar5;
                  local_c8 = uVar28;
                  if (uVar28 != 0) {
                    local_2c8 = (uint *)0x0;
                    if (*pcVar5 != -0x60) goto LAB_016c51cc;
                    FUN_016c607c(&local_1e0,&local_cc,0xa0);
                    local_2c8 = local_1dc;
                    local_2cc = local_1d8;
                    if (local_1e0 == (uint *)0x8000002d) goto LAB_016c51cc;
                    local_c0 = local_1d4;
                    puStack_bc = local_1d0;
                    puStack_b8 = local_1cc;
                    puStack_b4 = local_1c8;
                    puStack_b0 = puStack_1c4;
                    puVar6 = local_1e0;
LAB_016c547c:
                    local_250 = local_c0;
                    puStack_24c = puStack_bc;
                    puStack_248 = puStack_b8;
                    puStack_244 = puStack_b4;
                    puStack_240 = puStack_b0;
                    FUN_016c3a1c(local_238);
                    local_218 = local_250;
                    puStack_214 = puStack_24c;
                    puStack_210 = puStack_248;
                    puStack_20c = puStack_244;
                    puStack_208 = puStack_240;
                    if (((-1 < (int)puVar6) || (0x17 < ((uint)puVar6 ^ 0x80000000))) ||
                       ((1 << (((uint)puVar6 ^ 0x80000000) & 0xff) & 0xb00000U) == 0))
                    goto LAB_016c5508;
                    local_14c = (uint *)0x0;
                    local_150 = (uint *)&DAT_00000001;
                    local_140 = local_2cc;
                    local_144 = local_2c8;
                    local_13c = local_250;
                    local_138 = puStack_24c;
                    local_134 = puStack_248;
                    puStack_130 = puStack_244;
                    puStack_12c = puStack_240;
                    local_148 = puVar6;
                    goto LAB_016c5c30;
                  }
                  local_2c8 = (uint *)0x0;
LAB_016c51cc:
                  puVar22 = (uint *)0x0;
                  puVar29 = param_3;
                  if ((local_c4 < local_c8) && (local_cc[local_c4] == -0x5f)) {
                    FUN_016c607c(&local_1e0,&local_cc,0xa1);
                    puVar22 = local_1dc;
                    puVar29 = local_1d8;
                    if (local_1e0 != (uint *)0x8000002d) {
                      local_c0 = local_1d4;
                      puStack_bc = local_1d0;
                      puStack_b8 = local_1cc;
                      puStack_b4 = local_1c8;
                      puStack_b0 = puStack_1c4;
                      local_2cc = local_1d8;
                      local_2c8 = local_1dc;
                      puVar6 = local_1e0;
LAB_016c5478:
                      goto LAB_016c547c;
                    }
                  }
                  uVar28 = uVar7;
                  do {
                    if (uVar28 == 0) {
                      uVar28 = 0;
                      puVar32 = (uint *)param_3[0xba];
                      bVar35 = false;
                    }
                    else {
                      bVar35 = true;
                      uVar31 = uVar28 - 1;
                      if (6 < uVar28) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar31,6,&DAT_018af2d8);
                      }
                      puVar32 = param_3 + uVar31 * 0x1f;
                      uVar28 = uVar31;
                      if (*puVar32 == 0x80000001) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa444(&DAT_018af2e8);
                      }
                    }
                    if (puVar32[0x1b] != 0) {
                      local_90 = puVar32[0x1c];
                      local_8c = 0;
                      local_94 = puVar32[0x1b];
                      do {
                        if (local_8c == local_90) break;
                        FUN_016cd97c(&local_1e0,&local_94);
                        if (local_1e0 == (uint *)0x8000002d) {
                          local_68 = *puVar9;
                          uStack_64 = puVar9[1];
                          uStack_60 = puVar9[2];
                          local_5c = puVar9[3];
                          uStack_58 = puVar9[4];
                          uStack_54 = puVar9[5];
                          uStack_50 = puVar9[6];
                          local_48 = (uint *)0x8000002d;
                          *puVar8 = local_68;
                          puVar8[1] = uStack_64;
                          puVar8[2] = uStack_60;
                          puVar8[3] = local_5c;
                          puVar8[4] = uStack_58;
                          puVar8[5] = uStack_54;
                          puVar8[6] = uStack_50;
                          FUN_016cdc2c(&local_1e0,puVar8,local_2c8,local_2cc,puVar22,puVar29,param_8
                                      );
                        }
                        else {
                          local_94 = 0;
                          local_68 = *puVar9;
                          uStack_64 = puVar9[1];
                          uStack_60 = puVar9[2];
                          local_5c = puVar9[3];
                          uStack_58 = puVar9[4];
                          uStack_54 = puVar9[5];
                          uStack_50 = puVar9[6];
                          local_48 = local_1e0;
                          *puVar8 = local_68;
                          puVar8[1] = uStack_64;
                          puVar8[2] = uStack_60;
                          puVar8[3] = local_5c;
                          puVar8[4] = uStack_58;
                          puVar8[5] = uStack_54;
                          puVar8[6] = uStack_50;
                          local_1dc = local_44;
                          local_1d8 = local_40;
                          local_1d4 = puStack_3c;
                          local_1d0 = local_38;
                          local_1cc = puStack_34;
                          local_1c8 = puStack_30;
                          puStack_1c4 = puStack_2c;
                        }
                        if (local_1e0 != (uint *)0x8000002e) {
                          local_a8 = local_1d4;
                          puStack_a4 = local_1d0;
                          puStack_a0 = local_1cc;
                          puStack_9c = local_1c8;
                          puStack_98 = puStack_1c4;
                          if (&DAT_00000001 < (char *)((int)local_1e0 + 0x7fffffd3)) {
                            local_2cc = local_1d8;
                            local_2c8 = local_1dc;
                            puVar6 = local_1e0;
                            local_c0 = local_a8;
                            puStack_bc = puStack_a4;
                            puStack_b8 = puStack_a0;
                            puStack_b4 = puStack_9c;
                            puStack_b0 = puStack_98;
                            goto LAB_016c5478;
                          }
                          break;
                        }
                      } while (local_94 != 0);
                    }
                    local_1e0 = (uint *)CONCAT31(local_1e0._1_3_,1);
                    FUN_016cdc2c(&local_88,&local_1e0,local_2c8,local_2cc,puVar22,puVar29,param_8);
                    if ((char *)0x1 < (char *)((int)local_88 + 0x7fffffd3)) {
                      local_2c8 = local_84;
                      local_2cc = local_80;
                      puVar6 = local_88;
                      local_c0 = local_7c;
                      puStack_bc = puStack_78;
                      puStack_b8 = puStack_74;
                      puStack_b4 = puStack_70;
                      puStack_b0 = puStack_6c;
                      goto LAB_016c5478;
                    }
                  } while (bVar35);
                  if (local_c4 != local_c8) goto LAB_016c5564;
                }
                FUN_016c3a1c(local_238);
                uVar28 = puVar6[0x1a];
                bVar35 = uVar7 == 0;
                pcVar5 = (char *)puVar6[0x19];
                uVar7 = local_2e4;
                if (bVar35) {
                  FUN_016c3a1c(&local_290);
                  local_2b0 = puVar25;
                  goto LAB_016c5ca0;
                }
              } while( true );
            }
LAB_016c5d10:
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af2e8);
          }
          local_14c = (uint *)0x0;
          local_150 = (uint *)0x0;
          local_148 = (uint *)0x8000001e;
          goto LAB_016c4e6c;
        }
LAB_016c55d8:
        local_2ac = (uint *)*puVar14;
        puStack_2a8 = (uint *)puVar14[1];
        local_2a4 = (uint *)puVar14[2];
        local_2a0 = (uint *)puVar14[3];
        puStack_29c = (uint *)puVar14[4];
        puStack_298 = (uint *)puVar14[5];
        puStack_294 = (uint *)puVar14[6];
        local_2b4 = (uint *)0x0;
        local_2fc = (uint *)0x0;
        local_2b8 = (uint *)0x0;
        local_2b0 = local_290;
LAB_016c560c:
        local_200 = local_2b0;
        puStack_1fc = local_2ac;
        puStack_1f8 = puStack_2a8;
        puStack_1f4 = local_2a4;
        local_1f0 = local_2a0;
        puStack_1ec = puStack_29c;
        puStack_1e8 = puStack_298;
        puStack_1e4 = puStack_294;
        if (param_2[0xb] != 0) {
          uVar19 = param_2[10];
          uVar16 = uVar19 + param_2[0xb] * 0xc;
          if (uVar11 != 0) {
            param_7 = (uint *)((int)param_7 + 1);
          }
          do {
            FUN_016cce5c(&local_150,*(undefined4 *)(uVar19 + 4),*(undefined4 *)(uVar19 + 8));
            uVar28 = local_104;
            uVar7 = local_108;
            uVar26 = local_10c;
            uVar11 = local_110;
            puVar30 = local_148;
            puVar25 = local_14c;
            if (local_150 == (uint *)&DAT_00000001) {
              local_170 = local_144;
              puStack_16c = local_140;
              puStack_168 = local_13c;
              local_164 = local_138;
              puStack_160 = local_134;
              puStack_15c = puStack_130;
              puStack_158 = puStack_12c;
              uVar11 = 4;
              if ((int)local_148 < 0) {
                uVar11 = (uint)local_148 ^ 0x80000000;
              }
              if ((uVar11 < 0x18) && ((1 << (uVar11 & 0xff) & 0xb00000U) != 0)) {
                local_1d4 = local_144;
                local_1d0 = local_140;
                local_1cc = local_13c;
                local_1c8 = local_138;
                puStack_1c4 = local_134;
                puStack_1c0 = puStack_130;
                puStack_1bc = puStack_12c;
                local_1dc = (uint *)0x0;
                local_1e0 = (uint *)&DAT_00000001;
                local_1d8 = local_148;
LAB_016c5bcc:
                *param_1 = local_1e0;
                param_1[1] = local_1dc;
                param_1[2] = local_1d8;
                param_1[3] = local_1d4;
                param_1[4] = local_1d0;
                param_1[5] = local_1cc;
                param_1[6] = local_1c8;
                param_1[7] = puStack_1c4;
                param_1[8] = puStack_1c0;
                param_1[9] = puStack_1bc;
                goto LAB_016c5be4;
              }
              local_1d4 = local_144;
              local_1d0 = local_140;
              local_1cc = local_13c;
              local_1c8 = local_138;
              puStack_1c4 = local_134;
              puStack_1c0 = puStack_130;
              puStack_1bc = puStack_12c;
              puVar6 = local_148;
LAB_016c57d4:
              local_1dc = (uint *)0x0;
              local_1e0 = (uint *)0x0;
              local_1d8 = puVar6;
            }
            else {
              local_170 = local_144;
              puStack_16c = local_140;
              puStack_168 = local_13c;
              local_164 = local_138;
              puStack_160 = local_134;
              puStack_15c = puStack_130;
              puStack_158 = puStack_12c;
              local_188 = local_128;
              uStack_184 = uStack_124;
              uStack_180 = uStack_120;
              uStack_17c = uStack_11c;
              uStack_178 = uStack_118;
              uStack_174 = uStack_114;
              local_1b8 = local_100;
              uStack_1b4 = uStack_fc;
              uStack_1b0 = uStack_f8;
              uStack_1ac = uStack_f4;
              uStack_1a8 = uStack_f0;
              uStack_1a4 = uStack_ec;
              local_1a0 = local_e8;
              uStack_19c = uStack_e4;
              uStack_198 = uStack_e0;
              uStack_194 = uStack_dc;
              uStack_190 = uStack_d8;
              uStack_18c = uStack_d4;
              uVar31 = param_3[0xbb];
              if (uVar31 == 0) {
                puVar6 = (uint *)param_3[0xba];
              }
              else {
                if (6 < uVar31) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar31 - 1,6,&DAT_018af2d8);
                }
                puVar6 = param_3 + (uVar31 - 1) * 0x1f;
                if (*puVar6 == 0x80000001) goto LAB_016c5d84;
              }
              puVar22 = (uint *)0x8000001e;
              if ((local_10c == puVar6[0xc]) &&
                 (iVar4 = thunk_FUN_016dd50a(local_110,puVar6[0xb],local_10c), iVar4 == 0)) {
                if ((uVar31 != 0) && (param_3[uVar31 * 0x1f + -0x1f] == 0x80000001)) {
LAB_016c5d84:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_018af2e8);
                }
                puVar6 = (uint *)param_3[0xba];
                do {
                  while( true ) {
                    if (uVar31 == 0) {
                      uVar33 = 0;
                      puVar22 = puVar6;
                    }
                    else {
                      uVar33 = uVar31 - 1;
                      puVar22 = param_3 + uVar33 * 0x1f;
                      if (param_3[uVar33 * 0x1f] == 0x80000001) goto LAB_016c5d84;
                    }
                    if (uVar28 == puVar22[0x12]) break;
LAB_016c5904:
                    bVar35 = uVar31 == 0;
                    uVar31 = uVar33;
                    if (bVar35) goto LAB_016c59a8;
                  }
                  uVar34 = thunk_FUN_016dd50a(uVar7,puVar22[0x11]);
                  bVar35 = uVar34 == 0;
                  if (bVar35) {
                    uVar34 = puVar22[0x10];
                  }
                  if (!bVar35 || uVar26 != uVar34) goto LAB_016c5904;
                  iVar4 = thunk_FUN_016dd50a(uVar11,puVar22[0xf],uVar26);
                } while ((uVar31 != 0) && (uVar31 = uVar33, iVar4 != 0));
                if (iVar4 == 0) {
                  puVar6 = (uint *)0x0;
                  puVar22 = (uint *)0x8000001e;
                  goto LAB_016c5a10;
                }
LAB_016c59a8:
                iVar4 = *(int *)(param_8 + 4);
                if (iVar4 == 0) {
                  puVar6 = (uint *)&DAT_00000001;
                  puVar22 = (uint *)0x80000015;
                  goto LAB_016c5a10;
                }
                local_150 = (uint *)0x80000015;
                FUN_016c3a1c(&local_150);
                uVar31 = param_3[0xbb];
                *(int *)(param_8 + 4) = iVar4 + -1;
                if (5 < uVar31) {
                  puVar6 = (uint *)0x80000016;
                  if (((uint)puVar25 & 0x7fffffff) != 0) {
                    thunk_FUN_016d3fb4(puVar30);
                  }
                  goto LAB_016c57d4;
                }
                puVar6 = param_3 + uVar31 * 0x1f;
                if ((-0x7fffffff < (int)*puVar6) && (*puVar6 != 0)) {
                  thunk_FUN_016d3fb4(puVar6[1]);
                }
                *puVar6 = (uint)puVar25;
                puVar6[1] = (uint)puVar30;
                puVar6[2] = (uint)local_170;
                puVar6[3] = (uint)puStack_16c;
                puVar6[4] = (uint)puStack_168;
                puVar6[5] = (uint)local_164;
                puVar6[6] = (uint)puStack_160;
                puVar6[7] = (uint)puStack_15c;
                puVar6[8] = (uint)puStack_158;
                puVar6[9] = local_188;
                puVar6[10] = uStack_184;
                puVar6[0xb] = uStack_180;
                puVar6[0xc] = uStack_17c;
                puVar6[0xd] = uStack_178;
                puVar6[0xe] = uStack_174;
                puVar6[0xf] = uVar11;
                puVar6[0x10] = uVar26;
                puVar6[0x11] = uVar7;
                puVar6[0x12] = uVar28;
                puVar6[0x13] = local_1b8;
                puVar6[0x14] = uStack_1b4;
                puVar6[0x15] = uStack_1b0;
                puVar6[0x16] = uStack_1ac;
                puVar6[0x17] = uStack_1a8;
                puVar6[0x18] = uStack_1a4;
                puVar6[0x19] = local_1a0;
                puVar6[0x1a] = uStack_19c;
                puVar6[0x1b] = uStack_198;
                puVar6[0x1c] = uStack_194;
                puVar6[0x1d] = uStack_190;
                puVar6[0x1e] = uStack_18c;
                param_3[0xbb] = param_3[0xbb] + 1;
                FUN_016c4644(&local_150,param_2,param_3,uStack_19c,param_5,param_6,param_7,param_8);
                if (local_150 != (uint *)&SUB_00000002 || local_14c != (uint *)0x0) {
                  FUN_016c600c(param_3);
                }
                local_1e0 = local_150;
                local_1dc = local_14c;
                local_1d8 = local_148;
                local_1d4 = local_144;
                local_1d0 = local_140;
                local_1cc = local_13c;
                local_1c8 = local_138;
                puStack_1c4 = local_134;
                puStack_1c0 = puStack_130;
                puStack_1bc = puStack_12c;
                puVar6 = local_150;
                if (local_150 != (uint *)&SUB_00000002 || local_14c != (uint *)0x0)
                goto LAB_016c571c;
                *param_1 = 2;
                param_1[1] = 0;
                param_1[2] = local_148;
LAB_016c5be4:
                FUN_016c3a1c(&local_200);
                goto LAB_016c5bf0;
              }
              puVar6 = (uint *)0x0;
LAB_016c5a10:
              local_1dc = (uint *)0x0;
              local_1e0 = puVar6;
              local_1d8 = puVar22;
              if (puVar25 != (uint *)&DAT_80000000 && puVar25 != (uint *)0x0) {
                thunk_FUN_016d3fb4(puVar30);
              }
LAB_016c571c:
              if (((uint)puVar6 & 1) != 0) goto LAB_016c5bcc;
            }
            uVar19 = uVar19 + 0xc;
            FUN_016d0aec(&local_150,&local_200,&local_1d8);
            local_200 = local_150;
            puStack_1fc = local_14c;
            puStack_1f8 = local_148;
            puStack_1f4 = local_144;
            local_1f0 = local_140;
            puStack_1ec = local_13c;
            puStack_1e8 = local_138;
            puStack_1e4 = local_134;
          } while (uVar19 != uVar16);
        }
        uVar11 = 4;
        puVar14 = (undefined4 *)((uint)&local_200 | 4);
        if ((int)local_200 < 0) {
          uVar11 = (uint)local_200 ^ 0x80000000;
        }
        if (uVar11 < 0x18) {
          uVar12 = 1;
          if ((1 << (uVar11 & 0xff) & 0xb00000U) == 0) {
            uVar12 = 0;
          }
        }
        else {
          uVar12 = 0;
        }
        uVar21 = puVar14[1];
        uVar23 = puVar14[2];
        param_1[3] = *puVar14;
        param_1[4] = uVar21;
        param_1[5] = uVar23;
        uVar21 = puVar14[4];
        uVar23 = puVar14[5];
        uVar24 = puVar14[6];
        param_1[6] = puVar14[3];
        param_1[7] = uVar21;
        param_1[8] = uVar23;
        param_1[9] = uVar24;
        *param_1 = uVar12;
        param_1[1] = 0;
        param_1[2] = local_200;
LAB_016c5bf0:
        if (((uint)local_2fc & 1) == 0) {
          return;
        }
        FUN_016c3a1c(&local_2b0);
        return;
      }
      puVar29 = (uint *)0x8000001b;
      param_3 = (uint *)param_2[2];
      unaff_r8 = (uint *)param_2[1];
    }
    else {
      puVar29 = (uint *)&DAT_80000008;
    }
    FUN_016c3a1c(&local_1e0);
  }
LAB_016c4c04:
  puVar6 = (uint *)&DAT_00000004;
  puVar30 = (uint *)0x0;
  puVar25 = (uint *)0x0;
  puVar22 = (uint *)0x0;
  puVar32 = param_3;
joined_r0x016c4758:
  if (&DAT_00000017 < puVar29) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
    if ((1 << ((uint)puVar29 & 0xff) & 0xb00000U) == 0) {
      uVar12 = 0;
    }
  }
LAB_016c476c:
  param_1[1] = 0;
  param_1[2] = puVar29;
  param_1[8] = puVar25;
  param_1[9] = local_2c0;
  *param_1 = uVar12;
  param_1[3] = puVar22;
  param_1[4] = unaff_r8;
  param_1[5] = puVar32;
  param_1[6] = puVar30;
  param_1[7] = puVar6;
  return;
LAB_016c4aa4:
  puVar30 = (uint *)0x0;
  puVar25 = (uint *)0x0;
  uVar16 = 0;
  while (unaff_r8 != puVar25) {
    pcVar5 = (char *)((int)puVar22 + (int)puVar25);
    puVar25 = (uint *)((int)puVar25 + 1);
    uVar16 = (int)*pcVar5 & 0x7fU | uVar16 << 8;
    if (-1 < *pcVar5) {
      uVar19 = 0;
      if (0x27 < uVar16) {
        if (uVar16 < 0x50) {
          uVar16 = uVar16 - 0x28;
          uVar19 = 1;
        }
        else {
          uVar16 = uVar16 - 0x50;
          uVar19 = 2;
        }
      }
      if (unaff_r8 < puVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(puVar25,unaff_r8,unaff_r8,&DAT_018af328);
      }
      puVar6 = (uint *)thunk_FUN_016d4a50(0x10);
      if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x10);
      }
      *puVar6 = uVar19;
      local_150 = (uint *)&DAT_00000004;
      pcVar5 = (char *)((int)puVar22 + (int)puVar25);
      puVar30 = (uint *)&DAT_00000001;
      uVar19 = (int)unaff_r8 - (int)puVar25;
      bVar35 = true;
      local_14c = puVar6;
      do {
        local_148 = puVar30;
        if (bVar35) {
          uVar26 = uVar16;
        }
        else {
          uVar7 = 0;
          uVar26 = 0;
          do {
            if (uVar19 == uVar7) {
              puVar25 = local_150;
              puVar27 = local_2b0;
              goto LAB_016c4be8;
            }
            pcVar13 = pcVar5 + uVar7;
            uVar7 = uVar7 + 1;
            uVar26 = (int)*pcVar13 & 0x7fU | uVar26 << 8;
          } while (*pcVar13 < 0);
          if (uVar19 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar7,uVar19,uVar19,&DAT_018af318);
          }
          pcVar5 = pcVar5 + uVar7;
          uVar19 = uVar19 - uVar7;
        }
        if (puVar30 == local_150) {
          FUN_016ca96c(&local_150,puVar30,1,4,4);
          puVar6 = local_14c;
        }
        puVar6[(int)puVar30] = uVar26;
        puVar30 = (uint *)((int)puVar30 + 1);
        bVar35 = false;
      } while( true );
    }
  }
  puVar6 = (uint *)&DAT_00000004;
  puVar25 = (uint *)0x0;
LAB_016c4be8:
  if (puVar27 == local_2b8) {
    FUN_016ca7ac(&local_2b8);
  }
  local_2b0 = (uint *)((int)puVar27 + 1);
  puVar22 = local_2b4 + (int)puVar27 * 3;
  *puVar22 = (uint)puVar25;
  puVar22[1] = (uint)puVar6;
  puVar22[2] = (uint)puVar30;
  if (local_40 == local_44) goto LAB_016c4cc8;
  goto LAB_016c4a54;
LAB_016c4cc8:
  puVar22 = (uint *)*param_2;
  unaff_r8 = (uint *)*local_2cc;
  puVar32 = (uint *)param_2[2];
  puVar25 = local_2b0;
  puVar30 = local_2b8;
  puVar29 = (uint *)0x8000001b;
  puVar6 = local_2b4;
LAB_016c4728:
  FUN_016c3a1c(&local_1e0);
  uVar12 = 0;
  if (-1 < (int)puVar29) goto LAB_016c476c;
  goto joined_r0x016c4758;
LAB_016c5414:
  puVar6 = local_1e0;
  uVar2 = local_1dc._0_1_;
  FUN_016dd1aa(auStack_270,uVar16,0x1b);
  uVar7 = 4;
  if ((int)puVar6 < 0) {
    uVar7 = (uint)puVar6 ^ 0x80000000;
  }
  local_148 = puVar6;
  if ((uVar7 < 0x18) && ((1 << (uVar7 & 0xff) & 0xb00000U) != 0)) {
    local_14c = (uint *)0x0;
    local_150 = (uint *)&DAT_00000001;
    local_144 = (uint *)CONCAT31(local_144._1_3_,uVar2);
    FUN_016dd1aa((int)&local_144 + 1,auStack_270,0x1b);
LAB_016c5c30:
    puVar25 = local_14c;
    local_2fc = local_150;
    local_2b8 = local_150;
    local_2b4 = local_14c;
    local_2b0 = local_148;
    local_2ac = local_144;
    puStack_2a8 = local_140;
    local_2a4 = local_13c;
    local_2a0 = local_138;
    puStack_29c = local_134;
    puStack_298 = puStack_130;
    puStack_294 = puStack_12c;
    FUN_016c3a1c(&local_290);
    if (local_2fc == (uint *)&SUB_00000002 && puVar25 == (uint *)0x0) {
LAB_016c5ca0:
      param_1[1] = 0;
      param_1[2] = local_2b0;
      *param_1 = 2;
      return;
    }
    if (((uint)local_2fc & 1) != 0) goto LAB_016c5c7c;
    goto LAB_016c560c;
  }
  local_14c = (uint *)0x0;
  local_150 = (uint *)0x0;
  local_144 = (uint *)CONCAT31(local_144._1_3_,uVar2);
  FUN_016dd1aa((int)&local_144 + 1,auStack_270,0x1b);
LAB_016c4e6c:
  puVar25 = puVar25 + 9;
  FUN_016d0aec(&local_1e0,&local_290,&local_148);
  local_290 = local_1e0;
  puStack_28c = local_1dc;
  puStack_288 = local_1d8;
  puStack_284 = local_1d4;
  ppuVar17 = &local_280;
  local_280 = local_1d0;
  puStack_27c = local_1cc;
  puStack_278 = local_1c8;
  puStack_274 = puStack_1c4;
  if (puVar25 == puVar30) goto LAB_016c55cc;
  goto LAB_016c4ea4;
LAB_016c5564:
  local_218 = local_22c;
  puStack_214 = puStack_228;
  puStack_210 = puStack_224;
  puStack_20c = puStack_220;
  puStack_208 = puStack_21c;
  puVar6 = (uint *)&DAT_80000000;
LAB_016c5508:
  local_14c = (uint *)0x0;
  local_150 = (uint *)0x0;
  local_140 = local_2cc;
  local_144 = local_2c8;
  local_13c = local_218;
  local_138 = puStack_214;
  local_134 = puStack_210;
  puStack_130 = puStack_20c;
  puStack_12c = puStack_208;
  local_250 = local_218;
  puStack_24c = puStack_214;
  puStack_248 = puStack_210;
  puStack_244 = puStack_20c;
  puStack_240 = puStack_208;
  local_148 = puVar6;
  goto LAB_016c4e6c;
LAB_016c55cc:
  if ((((int)local_1e0 < 0) && (((uint)local_1e0 & 0x7fffffff) < 0x18)) &&
     ((1 << ((uint)local_1e0 & 0xff) & 0xb00000U) != 0)) {
    local_2ac = (uint *)*puVar14;
    puStack_2a8 = (uint *)puVar14[1];
    local_2a4 = (uint *)puVar14[2];
    local_2a0 = (uint *)puVar14[3];
    puStack_29c = (uint *)puVar14[4];
    puStack_298 = (uint *)puVar14[5];
    puStack_294 = (uint *)puVar14[6];
    local_2b4 = (uint *)0x0;
    local_2b8 = (uint *)&DAT_00000001;
    local_2b0 = local_1e0;
LAB_016c5c7c:
    *param_1 = local_2b8;
    param_1[1] = local_2b4;
    param_1[2] = local_2b0;
    param_1[3] = local_2ac;
    param_1[4] = puStack_2a8;
    param_1[5] = local_2a4;
    param_1[6] = local_2a0;
    param_1[7] = puStack_29c;
    param_1[8] = puStack_298;
    param_1[9] = puStack_294;
    return;
  }
  goto LAB_016c55d8;
}

