// FUN_007568bc @ 007568bc size=2792 calls_out=8 calls_in=2
// strings: assertion failed: cnt <= self.limit

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007568bc(undefined1 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int ***pppiVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  int ***pppiVar9;
  int ****ppppiVar10;
  int ***extraout_r3;
  int ***extraout_r3_00;
  int ***extraout_r3_01;
  int ***extraout_r3_02;
  uint uVar11;
  int iVar12;
  int ***pppiVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  int ***local_278;
  int ***local_274;
  int ***local_270;
  int local_26c;
  uint local_268;
  int ***pppiStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  int ***local_258;
  int local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 local_240;
  int ***local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  uint uStack_230;
  int ****local_228;
  int ***local_224;
  int ***local_220;
  code *local_21c;
  uint local_218;
  int ***local_214;
  uint local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_210 = DAT_018d8a84;
  local_220 = (int ***)0x2;
  if (DAT_018dd947 == '\0') {
    local_270 = (int ***)(DAT_018d8a84 + 0x1c);
    local_274 = (int ***)0x0;
    local_278 = (int ***)0x4;
    FUN_01694880(&local_228,&local_278);
  }
  uVar11 = local_210;
  local_278 = (int ***)local_228;
  local_274 = local_224;
  local_270 = local_220;
  local_26c = (int)local_21c;
  local_268 = local_218;
  pppiStack_264 = local_214;
  uStack_260 = local_210;
  uStack_25c = local_20c;
  pppiVar9 = local_214;
  if (local_220 != (int ***)0x2) {
    pcVar1 = local_21c;
    if (((uint)local_220 & 1) != 0) {
      pcVar1 = (code *)((int)local_21c + (*(int *)(local_218 + 8) - 1U & 0xfffffff8) + 8);
    }
    (**(code **)(local_218 + 0x30))(pcVar1,&local_278);
    pppiVar9 = extraout_r3;
  }
  puVar2 = (uint *)(param_2 + 0x94);
  puVar3 = (uint *)(param_2 + 0xa8);
  puVar14 = (uint *)(param_2 + 0xa0);
  puVar15 = (uint *)(param_2 + 0xd8);
LAB_00756a00:
  do {
    while( true ) {
      iVar12 = *(int *)(param_2 + 0x90);
      uVar4 = iVar12 - 3;
      if (1 < uVar4) break;
      if (*(int *)(param_2 + 0xdc) == 0) {
        uVar11 = *puVar15;
        uVar4 = *(uint *)(param_2 + 0xcc);
        if (uVar4 <= uVar11) goto LAB_00756d4c;
        local_224 = (int ***)(uVar4 - uVar11);
        local_228 = (int ****)(*(int *)(param_2 + 200) + uVar11);
        local_2c = 0;
        local_30 = 1;
        local_34 = 0;
        local_38 = 1;
        local_3c = 0;
        local_40 = 1;
        local_44 = 0;
        local_48 = 1;
        local_4c = 0;
        local_50 = 1;
        local_54 = 0;
        local_58 = 1;
        local_5c = 0;
        local_60 = 1;
        local_64 = 0;
        local_68 = 1;
        local_6c = 0;
        local_70 = 1;
        local_74 = 0;
        local_78 = 1;
        local_7c = 0;
        local_80 = 1;
        local_84 = 0;
        local_88 = 1;
        local_8c = 0;
        local_90 = 1;
        local_94 = 0;
        local_98 = 1;
        local_9c = 0;
        local_a0 = 1;
        local_a4 = 0;
        local_a8 = 1;
        local_ac = 0;
        local_b0 = 1;
        local_b4 = 0;
        local_b8 = 1;
        local_bc = 0;
        local_c0 = 1;
        local_c4 = 0;
        local_c8 = 1;
        local_cc = 0;
        local_d0 = 1;
        local_d4 = 0;
        local_d8 = 1;
        local_dc = 0;
        local_e0 = 1;
        local_e4 = 0;
        local_e8 = 1;
        local_ec = 0;
        local_f0 = 1;
        local_f4 = 0;
        local_f8 = 1;
        local_fc = 0;
        local_100 = 1;
        local_104 = 0;
        local_108 = 1;
        local_10c = 0;
        local_110 = 1;
        local_114 = 0;
        local_118 = 1;
        local_11c = 0;
        local_120 = 1;
        local_124 = 0;
        local_128 = 1;
        local_12c = 0;
        local_130 = 1;
        local_134 = 0;
        local_138 = 1;
        local_13c = 0;
        local_140 = 1;
        local_144 = 0;
        local_148 = 1;
        local_14c = 0;
        local_150 = 1;
        local_154 = 0;
        local_158 = 1;
        local_15c = 0;
        local_160 = 1;
        local_164 = 0;
        local_168 = 1;
        local_16c = 0;
        local_170 = 1;
        local_174 = 0;
        local_178 = 1;
        local_17c = 0;
        local_180 = 1;
        local_184 = 0;
        local_188 = 1;
        local_18c = 0;
        local_190 = 1;
        local_194 = 0;
        local_198 = 1;
        local_19c = 0;
        local_1a0 = 1;
        local_1a4 = 0;
        local_1a8 = 1;
        local_1ac = 0;
        local_1b0 = 1;
        local_1b4 = 0;
        local_1b8 = 1;
        local_1bc = 0;
        local_1c0 = 1;
        local_1c4 = 0;
        local_1c8 = 1;
        local_1cc = 0;
        local_1d0 = 1;
        local_1d4 = 0;
        local_1d8 = 1;
        local_1dc = 0;
        local_1e0 = 1;
        local_1e4 = 0;
        local_1e8 = 1;
        local_1ec = 0;
        local_1f0 = 1;
        local_1f4 = 0;
        local_1f8 = 1;
        local_1fc = 0;
        local_200 = 1;
        local_204 = 0;
        local_208 = 1;
        local_20c = 0;
        local_210 = 1;
        local_214 = (int ***)0x0;
        local_218 = 1;
        local_21c = (code *)0x0;
        local_220 = (int ***)0x1;
        FUN_01642dd8(&local_240,param_2,param_3,&local_228,1);
        if (((uint)local_240 & 0xff) == 5) goto LAB_00757260;
        uVar7 = (undefined1)local_240;
        if (((uint)local_240 & 0xff) != 4) goto LAB_0075726c;
        pppiVar9 = (int ***)(uVar4 - uVar11);
        if (uVar4 < uVar11) {
          pppiVar9 = (int ***)0x0;
        }
        pppiVar13 = local_23c;
        if (pppiVar9 < local_23c) goto LAB_00757340;
        *puVar15 = uVar11 + (int)local_23c;
        *(uint *)(param_2 + 0xdc) = (uint)CARRY4(uVar11,(uint)local_23c);
        pppiVar9 = extraout_r3_00;
      }
      else {
LAB_00756d4c:
        *puVar15 = 0;
        *(undefined4 *)(param_2 + 0xdc) = 0;
        *(undefined4 *)(param_2 + 0xcc) = 0;
        *(undefined4 *)(param_2 + 0x90) = 4;
        if (iVar12 != 3) {
          if (iVar12 != 4) {
            local_258 = (int ***)*puVar2;
            local_254 = *(int *)(param_2 + 0x98);
            uStack_250 = *(undefined4 *)(param_2 + 0x9c);
            uStack_24c = *(undefined4 *)(param_2 + 0xa0);
            uStack_248 = *(undefined4 *)(param_2 + 0xa4);
            local_228 = (int ****)*puVar3;
            local_224 = *(int ****)(param_2 + 0xac);
            local_220 = *(int ****)(param_2 + 0xb0);
            local_21c = *(code **)(param_2 + 0xb4);
            local_218 = *(uint *)(param_2 + 0xb8);
            local_214 = *(int ****)(param_2 + 0xbc);
            local_210 = *(uint *)(param_2 + 0xc0);
            local_20c = *(undefined4 *)(param_2 + 0xc4);
            iVar6 = *(int *)(param_2 + 0x58);
            if (iVar6 != 3) {
              if (iVar6 == 1) {
                if (*(int *)(param_2 + 100) != 0) {
                  thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x60));
                }
              }
              else if (iVar6 == 0) {
                (**(code **)(*(int *)(param_2 + 0x5c) + 0x10))
                          (param_2 + 0x68,*(undefined4 *)(param_2 + 0x60),
                           *(undefined4 *)(param_2 + 100));
              }
            }
            *(int *)(param_2 + 0x58) = iVar12;
            *(int ****)(param_2 + 0x5c) = local_258;
            *(int *)(param_2 + 0x60) = local_254;
            *(undefined4 *)(param_2 + 100) = uStack_250;
            *(undefined4 *)(param_2 + 0x68) = uStack_24c;
            *(undefined4 *)(param_2 + 0x6c) = uStack_248;
            *(int *****)(param_2 + 0x70) = local_228;
            *(int ****)(param_2 + 0x74) = local_224;
            *(int ****)(param_2 + 0x78) = local_220;
            *(code **)(param_2 + 0x7c) = local_21c;
            *(uint *)(param_2 + 0x80) = local_218;
            *(int ****)(param_2 + 0x84) = local_214;
            *(uint *)(param_2 + 0x88) = local_210;
            *(undefined4 *)(param_2 + 0x8c) = local_20c;
          }
          *param_1 = 4;
joined_r0x007572f0:
          if (local_270 != (int ***)0x2) {
            iVar12 = local_26c;
            if (((uint)local_270 & 1) != 0) {
              iVar12 = local_26c + (*(int *)(local_268 + 8) - 1U & 0xfffffff8) + 8;
            }
            (**(code **)(local_268 + 0x34))(iVar12,&local_278);
          }
          FUN_005c3320(&local_278);
          return;
        }
        local_240 = (int ***)*puVar2;
        local_23c = *(int ****)(param_2 + 0x98);
        uStack_238 = *(undefined4 *)(param_2 + 0x9c);
        uStack_234 = *(undefined4 *)(param_2 + 0xa0);
        uVar11 = *(uint *)(param_2 + 0xa4);
        local_254 = *(int *)(param_2 + 0xe0) + 9;
        local_258 = (int ***)(param_2 + 200U);
        uStack_230 = uVar11;
        FUN_01025ae8(&local_228,&local_240,&local_258);
        pppiVar9 = extraout_r3_01;
        if (local_228 != (int ****)0x0) {
          iVar12 = *(int *)(param_2 + 0x90);
          if (iVar12 != 4) {
            if (iVar12 == 0 || iVar12 == 3) {
              (**(code **)(*(int *)(param_2 + 0x94) + 0x10))
                        (puVar14,*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c));
            }
            else if ((iVar12 == 1) && (*(int *)(param_2 + 0x9c) != 0)) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x98));
            }
          }
          *(undefined4 *)(param_2 + 0x90) = 3;
          *puVar2 = (uint)local_228;
          *(int ****)(param_2 + 0x98) = local_224;
          *(int ****)(param_2 + 0x9c) = local_220;
          *(code **)(param_2 + 0xa0) = local_21c;
          *(uint *)(param_2 + 0xa4) = local_218;
          pppiVar9 = local_224;
          uVar11 = local_218;
        }
      }
    }
    if (iVar12 == 0) {
      uVar8 = *(uint *)(param_2 + 0x9c);
    }
    else {
      uVar8 = 0;
      if (iVar12 == 1) {
        uVar4 = *(uint *)(param_2 + 0xa4);
      }
      if ((iVar12 == 1 && uVar4 == 0) &&
         (uVar8 = *(uint *)(param_2 + 0x9c) - *puVar14, *(uint *)(param_2 + 0x9c) < *puVar14)) {
        uVar8 = 0;
      }
    }
    uVar4 = *puVar3;
    if (uVar4 < uVar8) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) goto LAB_00756d4c;
    uVar8 = 0;
    iVar6 = 0;
    if (*(int *)(param_2 + 0xdc) == 0) {
      pppiVar9 = *(int ****)(param_2 + 0xcc);
      iVar6 = (int)pppiVar9 - (int)*puVar15;
      if (pppiVar9 < (int ***)*puVar15) {
        iVar6 = 0;
      }
    }
    if (iVar12 == 0) {
      uVar8 = *(uint *)(param_2 + 0x9c);
    }
    else {
      if (iVar12 == 1) {
        pppiVar9 = *(int ****)(param_2 + 0xa4);
      }
      if (iVar12 == 1 && pppiVar9 == (int ***)0x0) {
        pppiVar9 = *(int ****)(param_2 + 0x9c);
        uVar8 = (int)pppiVar9 - (int)*puVar14;
        if (pppiVar9 < (int ***)*puVar14) {
          uVar8 = 0;
        }
      }
    }
    if (uVar4 < uVar8) {
      uVar8 = uVar4;
    }
  } while (uVar8 == 0 && iVar6 == 0);
  iVar12 = 0;
  local_2c = 0;
  iVar6 = 0;
  local_30 = 1;
  local_34 = 0;
  local_38 = 1;
  local_3c = 0;
  local_40 = 1;
  local_44 = 0;
  local_48 = 1;
  local_4c = 0;
  local_50 = 1;
  local_54 = 0;
  local_58 = 1;
  local_5c = 0;
  local_60 = 1;
  local_64 = 0;
  local_68 = 1;
  local_6c = 0;
  local_70 = 1;
  local_74 = 0;
  local_78 = 1;
  local_7c = 0;
  local_80 = 1;
  local_84 = 0;
  local_88 = 1;
  local_8c = 0;
  local_90 = 1;
  local_94 = 0;
  local_98 = 1;
  local_9c = 0;
  local_a0 = 1;
  local_a4 = 0;
  local_a8 = 1;
  local_ac = 0;
  local_b0 = 1;
  local_b4 = 0;
  local_b8 = 1;
  local_bc = 0;
  local_c0 = 1;
  local_c4 = 0;
  local_c8 = 1;
  local_cc = 0;
  local_d0 = 1;
  local_d4 = 0;
  local_d8 = 1;
  local_dc = 0;
  local_e0 = 1;
  local_e4 = 0;
  local_e8 = 1;
  local_ec = 0;
  local_f0 = 1;
  local_f4 = 0;
  local_f8 = 1;
  local_fc = 0;
  local_100 = 1;
  local_104 = 0;
  local_108 = 1;
  local_10c = 0;
  local_110 = 1;
  local_114 = 0;
  local_118 = 1;
  local_11c = 0;
  local_120 = 1;
  local_124 = 0;
  local_128 = 1;
  local_12c = 0;
  local_130 = 1;
  local_134 = 0;
  local_138 = 1;
  local_13c = 0;
  local_140 = 1;
  local_144 = 0;
  local_148 = 1;
  local_14c = 0;
  local_150 = 1;
  local_154 = 0;
  local_158 = 1;
  local_15c = 0;
  local_160 = 1;
  local_164 = 0;
  local_168 = 1;
  local_16c = 0;
  local_170 = 1;
  local_174 = 0;
  local_178 = 1;
  local_17c = 0;
  local_180 = 1;
  local_184 = 0;
  local_188 = 1;
  local_18c = 0;
  local_190 = 1;
  local_194 = 0;
  local_198 = 1;
  local_19c = 0;
  local_1a0 = 1;
  local_1a4 = 0;
  local_1a8 = 1;
  local_1ac = 0;
  local_1b0 = 1;
  local_1b4 = 0;
  local_1b8 = 1;
  local_1bc = 0;
  local_1c0 = 1;
  local_1c4 = 0;
  local_1c8 = 1;
  local_1cc = 0;
  local_1d0 = 1;
  local_1d4 = 0;
  local_1d8 = 1;
  local_1dc = 0;
  local_1e0 = 1;
  local_1e4 = 0;
  local_1e8 = 1;
  local_1ec = 0;
  local_1f0 = 1;
  local_1f4 = 0;
  local_1f8 = 1;
  local_1fc = 0;
  local_200 = 1;
  local_204 = 0;
  local_208 = 1;
  local_20c = 0;
  local_210 = 1;
  local_214 = (int ***)0x0;
  local_218 = 1;
  local_21c = (code *)0x0;
  local_220 = (int ***)0x1;
  local_224 = (int ***)0x0;
  local_228 = (int ****)0x1;
  ppppiVar10 = (int ****)&local_228;
  if (*(int *)(param_2 + 0xdc) == 0) {
    uVar4 = *puVar15;
    uVar11 = *(uint *)(param_2 + 0xcc);
    if (uVar4 < uVar11) {
      local_224 = (int ***)(uVar11 - uVar4);
      local_228 = (int ****)((int)*(int ***)(param_2 + 200U) + uVar4);
      iVar6 = 1;
      ppppiVar10 = &local_220;
    }
  }
  pppiVar9 = (int ***)*puVar3;
  if (pppiVar9 != (int ***)0x0) {
    uVar11 = *(uint *)(param_2 + 0x90);
  }
  if (pppiVar9 == (int ***)0x0 || uVar11 == 2) goto LAB_00757074;
  if (uVar11 == 1) {
    uVar11 = *(uint *)(param_2 + 0xa4);
    if (uVar11 != 0) goto LAB_00757074;
    uVar11 = *puVar14;
    if (*(uint *)(param_2 + 0x9c) <= uVar11) goto LAB_00757074;
    pppiVar13 = (int ***)(*(uint *)(param_2 + 0x9c) - uVar11);
    pppiVar5 = (int ***)(*(int *)(param_2 + 0x98) + uVar11);
  }
  else {
    pppiVar13 = *(int ****)(param_2 + 0x9c);
    if (pppiVar13 == (int ***)0x0) goto LAB_00757074;
    pppiVar5 = *(int ****)(param_2 + 0x98);
  }
  if (pppiVar9 < pppiVar13) {
    pppiVar13 = pppiVar9;
  }
  *ppppiVar10 = pppiVar5;
  ppppiVar10[1] = pppiVar13;
  iVar12 = 1;
LAB_00757074:
  FUN_01642dd8(&local_240,param_2,param_3,&local_228,iVar12 + iVar6);
  if (((uint)local_240 & 0xff) == 5) {
LAB_00757260:
    uVar7 = 5;
  }
  else {
    uVar7 = (undefined1)local_240;
    if (((uint)local_240 & 0xff) == 4) {
      pppiVar13 = local_23c;
      pppiVar9 = extraout_r3_02;
      if (*(int *)(param_2 + 0xdc) == 0) {
        uVar4 = *puVar15;
        uVar8 = *(uint *)(param_2 + 0xcc);
        pppiVar9 = (int ***)(uVar8 - uVar4);
        bVar16 = pppiVar9 != (int ***)0x0;
        if (uVar8 < uVar4) {
          pppiVar9 = (int ***)0x0;
        }
        if (uVar8 >= uVar4 && bVar16) {
          if (local_23c <= pppiVar9) {
            *puVar15 = uVar4 + (int)local_23c;
            *(uint *)(param_2 + 0xdc) = (uint)CARRY4(uVar4,(uint)local_23c);
            goto LAB_00756a00;
          }
          *puVar15 = uVar4 + (int)pppiVar9;
          *(uint *)(param_2 + 0xdc) = (uint)CARRY4(uVar4,(uint)pppiVar9);
          pppiVar13 = (int ***)((int)local_23c - (int)pppiVar9);
        }
      }
      if ((int ***)*puVar3 < pppiVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: cnt <= self.limit",0x23,&DAT_018a49b8);
      }
      if (*(int *)(param_2 + 0x90) != 2) {
        if (*(int *)(param_2 + 0x90) == 1) {
          pppiVar9 = (int ***)0x0;
          uVar4 = *puVar14;
          if ((*(int *)(param_2 + 0xa4) == 0) &&
             (pppiVar9 = (int ***)(*(uint *)(param_2 + 0x9c) - uVar4),
             *(uint *)(param_2 + 0x9c) < uVar4)) {
            pppiVar9 = (int ***)0x0;
          }
          if (pppiVar9 < pppiVar13) {
LAB_00757340:
            local_228 = (int ****)pppiVar13;
            local_224 = pppiVar9;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0();
          }
          pppiVar9 = (int ***)(*(int *)(param_2 + 0xa4) + (uint)CARRY4(uVar4,(uint)pppiVar13));
          *puVar14 = uVar4 + (int)pppiVar13;
          *(int ****)(param_2 + 0xa4) = pppiVar9;
        }
        else {
          pppiVar9 = *(int ****)(param_2 + 0x9c);
          local_258 = pppiVar13;
          if (pppiVar9 < pppiVar13) {
            local_220 = (int ***)&local_240;
            local_21c = FUN_007883b8;
            local_224 = (int ***)FUN_007883b8;
            local_228 = &local_258;
            local_240 = pppiVar9;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_228,&DAT_018a6700);
          }
          pppiVar9 = (int ***)((int)pppiVar9 - (int)pppiVar13);
          *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + (int)pppiVar13;
          *(int ****)(param_2 + 0x9c) = pppiVar9;
        }
      }
      *puVar3 = (int)*puVar3 - (int)pppiVar13;
      goto LAB_00756a00;
    }
LAB_0075726c:
    param_1[3] = local_240._3_1_;
    *(undefined2 *)(param_1 + 1) = local_240._1_2_;
    *(int ****)(param_1 + 4) = local_23c;
  }
  *param_1 = uVar7;
  goto joined_r0x007572f0;
}

