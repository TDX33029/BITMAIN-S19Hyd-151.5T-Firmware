// FUN_011cda5c @ 011cda5c size=1528 calls_out=17 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_011cda5c(undefined4 *param_1,int *******param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *****pppppiVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *****pppppiVar6;
  int *******pppppppiVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *****pppppiVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  int *******local_278;
  int *******local_274;
  int *******local_270;
  int *******local_26c;
  undefined1 auStack_268 [16];
  undefined1 *local_258;
  int *******local_238;
  int *******pppppppiStack_234;
  int *******pppppppiStack_230;
  int *******local_22c;
  int *******pppppppiStack_228;
  undefined4 uStack_224;
  int *******pppppppiStack_220;
  int *******local_218;
  int *******pppppppiStack_214;
  int *******pppppppiStack_210;
  int *******pppppppiStack_20c;
  undefined4 local_208;
  int *******pppppppiStack_204;
  int *******pppppppiStack_200;
  int *******local_1f8;
  int *******local_1f4;
  int *******local_1f0;
  undefined4 local_1ec;
  int *******pppppppiStack_1e8;
  int *******pppppppiStack_1e4;
  int *******local_1e0;
  int *******local_1d8;
  int *******local_1d4;
  int *******pppppppiStack_1d0;
  int *******pppppppiStack_1cc;
  int *******local_1c8;
  int *******local_1c4;
  int *******local_1c0;
  int *******pppppppiStack_1bc;
  int *******local_1b8;
  int *******pppppppiStack_1b4;
  undefined4 uStack_1b0;
  int *******pppppppiStack_1ac;
  int *******local_1a8;
  int *******local_1a4;
  int *******local_1a0;
  int *******pppppppiStack_19c;
  int *******pppppppiStack_198;
  int *******pppppppiStack_194;
  int *******local_190;
  int *******pppppppiStack_18c;
  int *******pppppppiStack_188;
  int *******pppppppiStack_184;
  undefined4 uStack_180;
  int *******pppppppiStack_17c;
  int *******local_178;
  int *******pppppppiStack_174;
  int *******pppppppiStack_170;
  undefined4 local_16c;
  int *******pppppppiStack_168;
  int *******pppppppiStack_164;
  int *******pppppppiStack_160;
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  int *******pppppppiStack_148;
  undefined4 local_144;
  int *******pppppppiStack_140;
  int *******pppppppiStack_13c;
  int *******pppppppiStack_138;
  int *******local_134;
  int *******local_130;
  int *******pppppppiStack_12c;
  undefined4 local_128;
  int *******pppppppiStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int *******local_118;
  int *******local_114;
  int *******local_110;
  int *******local_10c;
  int *******pppppppiStack_108;
  int *******local_104;
  int *******local_100;
  int *******local_fc;
  int *******pppppppiStack_f8;
  int *******pppppppiStack_f4;
  int *******local_f0;
  int *******pppppppiStack_ec;
  undefined4 uStack_e8;
  int *******pppppppiStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int *******local_d8;
  int *******local_d4;
  int *******local_d0;
  int *******local_cc;
  int *******local_c8;
  int *******pppppppiStack_c4;
  int *******local_c0;
  int *******pppppppiStack_bc;
  int *******pppppppiStack_b8;
  int *******pppppppiStack_b4;
  undefined4 uStack_b0;
  int *******pppppppiStack_ac;
  int ******local_a8;
  int ******local_a4;
  int ******ppppppiStack_a0;
  int ******ppppppiStack_9c;
  int ******ppppppiStack_98;
  int ******local_94;
  int ******ppppppiStack_90;
  int ******ppppppiStack_8c;
  int ******ppppppiStack_88;
  int ******ppppppiStack_84;
  int ******local_80;
  int ******ppppppiStack_7c;
  int ******ppppppiStack_78;
  int ******ppppppiStack_74;
  int ******ppppppiStack_70;
  int ******ppppppiStack_6c;
  int ******local_68;
  int ******local_64;
  int ******ppppppiStack_60;
  int ******ppppppiStack_5c;
  int ******ppppppiStack_58;
  int ******local_54;
  int ******ppppppiStack_50;
  int ******ppppppiStack_4c;
  int ******ppppppiStack_48;
  int ******ppppppiStack_44;
  int ******local_40;
  int ******ppppppiStack_3c;
  int ******ppppppiStack_38;
  int ******ppppppiStack_34;
  int ******ppppppiStack_30;
  int ******ppppppiStack_2c;
  
  pppppiVar6 = (int *****)0x0;
  pppppiVar3 = param_2[4][4];
  if (pppppiVar3 != (int *****)0x0) {
    pppppiVar11 = param_2[4][3];
    iVar8 = (int)pppppiVar3 * 0x48;
    do {
      if ((pppppiVar11[3] == (int ****)0x6) &&
         (iVar1 = thunk_FUN_01bed842(pppppiVar11[2] + 2,param_3,6), iVar1 == 0)) {
        pppppiVar6 = pppppiVar11;
        break;
      }
      pppppiVar11 = pppppiVar11 + 0x12;
      iVar8 = iVar8 + -0x48;
    } while (iVar8 != 0);
  }
  if (pppppiVar6 != (int *****)0x0) {
    pppppiVar6 = pppppiVar6 + 4;
  }
  FUN_00ad9f18(&local_270,pppppiVar6);
  if (local_258 == &DAT_80000008) {
    local_274 = (int *******)0x0;
    local_278 = (int *******)0x0;
LAB_011cdafc:
    local_1c8 = (int *******)&DAT_80000000;
LAB_011cdb04:
    local_1a8 = local_1d8;
    local_1a4 = local_1d4;
    local_1a0 = pppppppiStack_1d0;
    pppppppiStack_19c = pppppppiStack_1cc;
    pppppppiStack_198 = local_1c8;
    pppppppiStack_194 = local_1c4;
    local_190 = local_1c0;
    pppppppiStack_18c = pppppppiStack_1bc;
    pppppppiStack_188 = local_1b8;
    pppppppiStack_184 = pppppppiStack_1b4;
    uStack_180 = uStack_1b0;
    pppppppiStack_17c = pppppppiStack_1ac;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x40);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x40);
    }
    local_d8 = local_1d8;
    local_d4 = local_1d4;
    local_d0 = pppppppiStack_1d0;
    local_cc = pppppppiStack_1cc;
    local_c8 = local_1c8;
    pppppppiStack_c4 = local_1c4;
    local_c0 = local_1c0;
    pppppppiStack_bc = pppppppiStack_1bc;
    pppppppiStack_b8 = local_1b8;
    pppppppiStack_b4 = pppppppiStack_1b4;
    uStack_b0 = uStack_1b0;
    pppppppiStack_ac = pppppppiStack_1ac;
    FUN_00917a9c(&local_118);
    if (local_118 == (int *******)0x2 && local_114 == (int *******)0x0) {
      FUN_00ddb5f8(&local_150,&local_110);
    }
    else {
      local_158 = local_118;
      local_154 = local_114;
      local_150 = local_110;
      local_14c = local_10c;
      pppppppiStack_148 = pppppppiStack_108;
      local_144 = local_104;
      pppppppiStack_140 = local_100;
      pppppppiStack_13c = local_fc;
      pppppppiStack_138 = pppppppiStack_f8;
      local_134 = pppppppiStack_f4;
      local_130 = local_f0;
      pppppppiStack_12c = pppppppiStack_ec;
      local_128 = uStack_e8;
      pppppppiStack_124 = pppppppiStack_e4;
      uStack_120 = local_e0;
      uStack_11c = local_dc;
      if (local_118 != (int *******)0x2 || local_114 != (int *******)0x0) {
        puVar2[9] = pppppppiStack_f4;
        puVar2[10] = local_f0;
        puVar2[0xb] = pppppppiStack_ec;
        puVar2[0xc] = uStack_e8;
        puVar2[0xd] = pppppppiStack_e4;
        puVar2[0xe] = local_e0;
        puVar2[0xf] = local_dc;
        puVar2[2] = local_110;
        puVar2[3] = local_10c;
        puVar2[4] = pppppppiStack_108;
        puVar2[5] = local_104;
        puVar2[6] = local_100;
        puVar2[7] = local_fc;
        puVar2[8] = pppppppiStack_f8;
        *puVar2 = local_118;
        puVar2[1] = local_114;
        goto LAB_011cde78;
      }
    }
    local_178 = local_150;
    pppppppiStack_174 = local_14c;
    pppppppiStack_170 = pppppppiStack_148;
    local_16c = local_144;
    pppppppiStack_168 = pppppppiStack_140;
    pppppppiStack_164 = pppppppiStack_13c;
    pppppppiStack_160 = pppppppiStack_138;
    local_1f8 = local_150;
    local_1f4 = local_14c;
    local_1f0 = pppppppiStack_148;
    local_1ec = local_144;
    pppppppiStack_1e8 = pppppppiStack_140;
    pppppppiStack_1e4 = pppppppiStack_13c;
    local_1e0 = pppppppiStack_138;
    thunk_FUN_01be4678(puVar2);
  }
  else {
    local_1a4 = (int *******)&local_1d8;
    local_278 = local_270;
    local_1d8 = local_270;
    local_274 = local_26c;
    local_1d4 = local_26c;
    local_1a8 = param_2;
    FUN_00ab0d6c(&local_118,auStack_268,&local_1a8);
    if (local_118 != (int *******)0x0) {
      puVar2 = (undefined4 *)((uint)&local_118 | 4);
      uVar5 = *puVar2;
      uVar10 = puVar2[1];
      uVar13 = puVar2[2];
      uVar9 = puVar2[3];
      uVar12 = puVar2[4];
      param_1[0xd] = local_e0;
      param_1[0xe] = local_dc;
      *param_1 = uVar5;
      param_1[1] = uVar10;
      param_1[2] = uVar13;
      param_1[3] = uVar9;
      param_1[4] = uVar12;
      param_1[5] = local_100;
      param_1[6] = local_fc;
      param_1[7] = pppppppiStack_f8;
      param_1[8] = pppppppiStack_f4;
      param_1[9] = local_f0;
      param_1[10] = pppppppiStack_ec;
      param_1[0xb] = uStack_e8;
      param_1[0xc] = pppppppiStack_e4;
      return;
    }
    puVar2 = (undefined4 *)((uint)&local_d8 | 4);
    *puVar2 = local_110;
    puVar2[1] = local_10c;
    puVar2[2] = pppppppiStack_108;
    puVar2[3] = local_104;
    local_158 = local_fc;
    local_154 = pppppppiStack_f8;
    local_150 = pppppppiStack_f4;
    local_14c = local_f0;
    pppppppiStack_148 = pppppppiStack_ec;
    local_144 = uStack_e8;
    pppppppiStack_140 = pppppppiStack_e4;
    local_218 = (int *******)*puVar2;
    pppppppiStack_214 = (int *******)puVar2[1];
    pppppppiStack_210 = (int *******)puVar2[2];
    pppppppiStack_20c = (int *******)puVar2[3];
    local_238 = local_fc;
    pppppppiStack_234 = pppppppiStack_f8;
    pppppppiStack_230 = pppppppiStack_f4;
    local_22c = local_f0;
    pppppppiStack_228 = pppppppiStack_ec;
    uStack_224 = uStack_e8;
    pppppppiStack_220 = pppppppiStack_e4;
    if (local_100 == (int *******)0x80000007) goto LAB_011cdafc;
    local_1c8 = local_100;
    local_1c4 = local_fc;
    local_1c0 = pppppppiStack_f8;
    pppppppiStack_1bc = pppppppiStack_f4;
    local_1b8 = local_f0;
    pppppppiStack_1b4 = pppppppiStack_ec;
    uStack_1b0 = uStack_e8;
    pppppppiStack_1ac = pppppppiStack_e4;
    local_1d8 = local_218;
    local_1d4 = pppppppiStack_214;
    pppppppiStack_1d0 = pppppppiStack_210;
    pppppppiStack_1cc = pppppppiStack_20c;
    if (local_100 != (int *******)0x80000006) goto LAB_011cdb04;
    local_118 = (int *******)0x2;
    local_cc = pppppppiStack_214 + (int)pppppppiStack_210 * 0xc;
    local_d8 = pppppppiStack_214;
    local_d4 = pppppppiStack_214;
    local_d0 = local_218;
    local_c8 = (int *******)&local_118;
    FUN_0116bf20(&local_a8,&local_d8);
    if (local_a8 == (int ******)0x2 && local_a4 == (int ******)0x0) {
      FUN_00703614(&local_d8);
      pppppppiVar14 = (int *******)&DAT_00000008;
      pppppppiVar15 = (int *******)0x0;
      pppppppiVar7 = (int *******)0x0;
    }
    else {
      pppppppiVar14 = (int *******)FUN_01298504(0x100,8);
      if (pppppppiVar14 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0x100);
      }
      *pppppppiVar14 = local_a8;
      pppppppiVar14[1] = local_a4;
      pppppppiVar14[2] = ppppppiStack_a0;
      pppppppiVar14[3] = ppppppiStack_9c;
      pppppppiVar14[4] = ppppppiStack_98;
      pppppppiVar14[5] = local_94;
      pppppppiVar14[6] = ppppppiStack_90;
      pppppppiVar14[7] = ppppppiStack_8c;
      pppppppiVar14[8] = ppppppiStack_88;
      pppppppiVar14[9] = ppppppiStack_84;
      pppppppiVar14[10] = local_80;
      pppppppiVar14[0xb] = ppppppiStack_7c;
      pppppppiVar14[0xc] = ppppppiStack_78;
      pppppppiVar14[0xd] = ppppppiStack_74;
      pppppppiVar14[0xe] = ppppppiStack_70;
      pppppppiVar14[0xf] = ppppppiStack_6c;
      local_1a8 = (int *******)&SUB_00000004;
      local_1a0 = (int *******)&DAT_00000001;
      local_158 = local_d8;
      local_154 = local_d4;
      local_150 = local_d0;
      local_14c = local_cc;
      pppppppiStack_148 = local_c8;
      local_1a4 = pppppppiVar14;
      while (pppppppiVar15 = local_1a0, FUN_0116bf20(&local_68,&local_158),
            local_68 != (int ******)0x2 || local_64 != (int ******)0x0) {
        if (pppppppiVar15 == local_1a8) {
          FUN_0132b898(&local_1a8,pppppppiVar15,1,8,0x40);
          pppppppiVar14 = local_1a4;
        }
        pppppppiVar7 = pppppppiVar14 + (int)pppppppiVar15 * 0x10;
        local_1a0 = (int *******)((int)pppppppiVar15 + 1);
        *pppppppiVar7 = local_68;
        pppppppiVar7[1] = local_64;
        pppppppiVar7[2] = ppppppiStack_60;
        pppppppiVar7[3] = ppppppiStack_5c;
        pppppppiVar7[4] = ppppppiStack_58;
        pppppppiVar7[5] = local_54;
        pppppppiVar7[6] = ppppppiStack_50;
        pppppppiVar7[7] = ppppppiStack_4c;
        pppppppiVar7[8] = ppppppiStack_48;
        pppppppiVar7[9] = ppppppiStack_44;
        pppppppiVar7[10] = local_40;
        pppppppiVar7[0xb] = ppppppiStack_3c;
        pppppppiVar7[0xc] = ppppppiStack_38;
        pppppppiVar7[0xd] = ppppppiStack_34;
        pppppppiVar7[0xe] = ppppppiStack_30;
        pppppppiVar7[0xf] = ppppppiStack_2c;
      }
      FUN_00703614(&local_158);
      pppppppiVar7 = local_1a8;
    }
    if (local_118 == (int *******)0x2) {
      local_154 = pppppppiVar7;
      local_150 = pppppppiVar14;
      local_14c = pppppppiVar15;
LAB_011cdff4:
      puVar2 = (undefined4 *)((uint)&local_158 | 4);
      puVar4 = (undefined4 *)((uint)&local_1f8 | 4);
      uVar5 = puVar2[1];
      uVar10 = puVar2[2];
      *puVar4 = *puVar2;
      puVar4[1] = uVar5;
      puVar4[2] = uVar10;
      local_1f8 = (int *******)0x2;
    }
    else {
      local_158 = local_118;
      local_154 = local_114;
      local_150 = local_110;
      local_14c = local_10c;
      pppppppiStack_148 = pppppppiStack_108;
      local_144 = local_104;
      pppppppiStack_140 = local_100;
      FUN_00dedf58(pppppppiVar14,pppppppiVar15);
      FUN_0132b958(pppppppiVar7,pppppppiVar14,8,0x40);
      if (local_158 == (int *******)0x2) goto LAB_011cdff4;
      FUN_00ddb5f8(&local_1f8,&local_158);
    }
    if (local_1c8 != (int *******)0x80000006) {
      FUN_00db19c4(&local_1d8);
    }
  }
  if (local_1f8 != (int *******)0x2) {
    local_208 = local_1ec;
    pppppppiStack_204 = pppppppiStack_1e8;
    pppppppiStack_200 = pppppppiStack_1e4;
    local_118 = local_1f8;
    local_110 = local_1f0;
    local_114 = local_1f4;
    local_10c = (int *******)local_1ec;
    pppppppiStack_108 = pppppppiStack_1e8;
    local_104 = pppppppiStack_1e4;
    local_100 = local_1e0;
    FUN_00ddb4b4(param_1,&local_118,local_278,local_274);
    return;
  }
LAB_011cde78:
  puVar2 = (undefined4 *)((uint)&local_1f8 | 4);
  uVar5 = *puVar2;
  uVar10 = puVar2[1];
  uVar13 = puVar2[2];
  param_1[2] = local_274;
  param_1[1] = local_278;
  param_1[3] = uVar5;
  param_1[4] = uVar10;
  param_1[5] = uVar13;
  *param_1 = 2;
  return;
}

