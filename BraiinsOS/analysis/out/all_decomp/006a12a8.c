// FUN_006a12a8 @ 006a12a8 size=1916 calls_out=10 calls_in=1
// strings: Out of bounds access

/* WARNING: Removing unreachable block (ram,0x006a1dac) */

longlong FUN_006a12a8(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  longlong lVar15;
  uint local_2a8;
  uint local_2a4;
  int local_2a0;
  int local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
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
  byte local_a4 [4];
  uint local_a0;
  
  if ((*(char *)(param_1 + 0x16c) != '\x01') || (*(int *)(param_1 + 0x160) == 0)) {
    uVar7 = *(uint *)(param_1 + 0x130);
    iVar3 = 0;
    uVar11 = *(uint *)(param_1 + 0x134);
    uVar6 = *(uint *)(param_1 + 0x144);
    if (uVar6 == 0) {
      uVar10 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x138);
      uVar9 = *(uint *)(param_1 + 0x140);
      uVar10 = uVar9 - uVar4;
      if (uVar9 < uVar4) {
        uVar10 = uVar9;
      }
      if (uVar4 - uVar10 < uVar6) {
        iVar3 = uVar6 - (uVar4 - uVar10);
      }
      else {
        uVar4 = uVar10 + uVar6;
      }
    }
    local_2a0 = *(int *)(param_1 + 0x13c);
    local_29c = local_2a0 + iVar3 * 0x28;
    local_2a8 = local_2a0 + uVar10 * 0x28;
    local_2a4 = local_2a0 + uVar4 * 0x28;
    iVar3 = FUN_0142bc4c(&local_2a8);
    if ((uVar7 - uVar11) + iVar3 != 0) {
      if (*(char *)(param_1 + 0x14c) == '\x01') {
        do {
          local_ac = 0;
          local_b0 = 1;
          uVar11 = 0;
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
          local_214 = 0;
          local_218 = 1;
          local_21c = 0;
          local_220 = 1;
          local_224 = 0;
          local_228 = 1;
          local_22c = 0;
          local_230 = 1;
          local_234 = 0;
          local_238 = 1;
          local_23c = 0;
          local_240 = 1;
          local_244 = 0;
          local_248 = 1;
          local_24c = 0;
          local_250 = 1;
          local_254 = 0;
          local_258 = 1;
          local_25c = 0;
          local_260 = 1;
          local_264 = 0;
          local_268 = 1;
          local_26c = 0;
          local_270 = 1;
          local_274 = 0;
          local_278 = 1;
          local_27c = 0;
          local_280 = 1;
          local_284 = 0;
          local_288 = 1;
          local_28c = 0;
          local_290 = 1;
          local_294 = 0;
          local_298 = 1;
          local_29c = 0;
          local_2a4 = 0;
          local_2a0 = 1;
          local_2a8 = 1;
          uVar7 = *(uint *)(param_1 + 0x130);
          uVar6 = *(uint *)(param_1 + 0x134);
          if (uVar7 != uVar6) {
            if (uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(uVar6,uVar7,uVar7,&DAT_018a6750);
            }
            uVar11 = 1;
            local_2a4 = uVar7 - uVar6;
            local_2a8 = *(int *)(param_1 + 300) + uVar6;
          }
          uVar7 = *(uint *)(param_1 + 0x144);
          uVar6 = 0;
          uVar10 = 0;
          iVar3 = 0;
          if (uVar7 != 0) {
            uVar10 = *(uint *)(param_1 + 0x138);
            uVar4 = *(uint *)(param_1 + 0x140);
            uVar6 = uVar4 - uVar10;
            if (uVar4 < uVar10) {
              uVar6 = uVar4;
            }
            if (uVar10 - uVar6 < uVar7) {
              iVar3 = uVar7 - (uVar10 - uVar6);
            }
            else {
              iVar3 = 0;
              uVar10 = uVar6 + uVar7;
            }
          }
          piVar12 = *(int **)(param_1 + 0x13c);
          piVar13 = piVar12 + uVar6 * 10;
          if (piVar12 + uVar10 * 10 != piVar13) {
LAB_006a16e0:
                    /* WARNING: Could not recover jumptable at 0x006a1700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar15 = (*(code *)(&DAT_006a1704 + *(int *)(&DAT_006a1704 + *piVar13 * 4)))
                               (0,0x40 - uVar11,0x40 - uVar11);
            return lVar15;
          }
          if (piVar12 != piVar12 + iVar3 * 10 && piVar12 != (int *)0x0) {
            piVar13 = piVar12;
            goto LAB_006a16e0;
          }
          if (0x40 < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar11,0x40,&DAT_018a66e0);
          }
          FUN_01642dd8(local_a4,param_1 + 0x100,param_2,&local_2a8,uVar11);
          uVar7 = local_a0;
          uVar6 = (uint)local_a4[0];
          uVar10 = extraout_r1;
          if (uVar6 == 5) goto LAB_006a1d54;
          if (uVar6 != 4) {
            uVar10 = (uint)*(uint3 *)((uint)local_a4 | 1) | local_a0 << 0x18;
            goto joined_r0x006a1d50;
          }
          iVar3 = *(int *)(param_1 + 0x130);
          uVar6 = iVar3 - *(int *)(param_1 + 0x134);
          bVar14 = uVar6 < local_a0;
          bVar1 = !bVar14 && uVar6 != local_a0;
          if (bVar1 == bVar14) {
            iVar8 = 0;
            iVar3 = 0;
            *(undefined4 *)(param_1 + 0x130) = 0;
LAB_006a1a28:
            *(int *)(param_1 + 0x134) = iVar8;
            uVar6 = *(uint *)(param_1 + 0x144);
            if (uVar6 != 0) goto LAB_006a1a3c;
LAB_006a1c04:
            iVar5 = 0;
            uVar11 = 0;
            uVar10 = 0;
          }
          else {
            if ((char)(bVar1 - bVar14) == '\x01') {
              iVar8 = *(int *)(param_1 + 0x134) + local_a0;
              goto LAB_006a1a28;
            }
            iVar3 = 0;
            *(undefined4 *)(param_1 + 0x130) = 0;
            *(undefined4 *)(param_1 + 0x134) = 0;
            if (local_a0 != uVar6) {
              if (*(int *)(param_1 + 0x144) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("Out of bounds access",0x14,&DAT_018a6730);
              }
              uVar7 = *(uint *)(param_1 + 0x140);
              uVar6 = uVar7 - *(uint *)(param_1 + 0x138);
              if (uVar7 < *(uint *)(param_1 + 0x138)) {
                uVar6 = uVar7;
              }
                    /* WARNING: Could not recover jumptable at 0x006a1ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar15 = (*(code *)(&DAT_006a1aec +
                                 *(int *)(&DAT_006a1aec +
                                         *(int *)(*(int *)(param_1 + 0x13c) + uVar6 * 0x28) * 4)))()
              ;
              return lVar15;
            }
            iVar8 = 0;
            uVar6 = *(uint *)(param_1 + 0x144);
            if (uVar6 == 0) goto LAB_006a1c04;
LAB_006a1a3c:
            iVar5 = 0;
            uVar10 = *(uint *)(param_1 + 0x138);
            uVar4 = *(uint *)(param_1 + 0x140);
            uVar11 = uVar4 - uVar10;
            if (uVar4 < uVar10) {
              uVar11 = uVar4;
            }
            if (uVar10 - uVar11 < uVar6) {
              iVar5 = uVar6 - (uVar10 - uVar11);
            }
            else {
              uVar10 = uVar11 + uVar6;
            }
          }
          local_2a0 = *(int *)(param_1 + 0x13c);
          local_29c = local_2a0 + iVar5 * 0x28;
          local_2a4 = local_2a0 + uVar10 * 0x28;
          local_2a8 = local_2a0 + uVar11 * 0x28;
          iVar5 = FUN_0142bc4c(&local_2a8);
          if ((iVar3 - iVar8) + iVar5 == 0) goto LAB_006a1354;
        } while (uVar7 != 0);
      }
      else {
        do {
          if (uVar7 < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar11,uVar7,uVar7,&DAT_018a6750);
          }
          FUN_01642b4c(&local_2a8,param_1 + 0x100,param_2,*(int *)(param_1 + 300) + uVar11,
                       uVar7 - uVar11);
          uVar6 = local_2a8 & 0xff;
          uVar10 = extraout_r1_00;
          if (uVar6 == 5) goto LAB_006a1d54;
          if (uVar6 != 4) {
            uVar10 = (uint)*(uint3 *)((uint)&local_2a8 | 1) | local_2a4 << 0x18;
            local_a0 = local_2a4;
joined_r0x006a1d50:
            if (uVar6 != 5) {
              uVar7 = local_a0 >> 8;
              if (uVar6 != 4) goto LAB_006a1ce0;
              goto LAB_006a1354;
            }
LAB_006a1d54:
            return CONCAT44(uVar10,1);
          }
          uVar11 = uVar11 + local_2a4;
          *(uint *)(param_1 + 0x134) = uVar11;
          if (uVar7 == uVar11) {
            *(undefined4 *)(param_1 + 0x130) = 0;
            *(undefined4 *)(param_1 + 0x134) = 0;
            goto LAB_006a1354;
          }
        } while (local_2a4 != 0);
      }
      uVar7 = 0;
      uVar10 = 0x17;
      uVar6 = 1;
LAB_006a1ce0:
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *(undefined1 *)(puVar2 + 2) = 9;
      *puVar2 = 0;
      local_2a8 = uVar6 | uVar10 << 8;
      local_2a4 = uVar7 << 8 | uVar10 >> 0x18;
      FUN_006a1108(puVar2,&local_2a8);
      return ZEXT48(puVar2) << 0x20;
    }
  }
LAB_006a1354:
  FUN_006a2fc8(param_1);
  FUN_006a30fc(param_1,param_2);
  return 0;
}

