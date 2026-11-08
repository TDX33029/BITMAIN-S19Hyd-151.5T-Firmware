// FUN_00917a9c @ 00917a9c size=4020 calls_out=24 calls_in=2
// strings: idlast_updatedlast_ticknext_tickran | Groupold_flagsConcatAlternationAlternationBranch | Groupold_flagsConcatAlternationAlternationBranch | quota | Groupold_flagsConcatAlternationAlternationBranch | fixedShareRatio

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00917a9c(undefined4 *param_1,uint *param_2)

{
  uint *******pppppppuVar1;
  uint *******pppppppuVar2;
  undefined4 uVar3;
  uint *******pppppppuVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint ******ppppppuVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  uint *******pppppppuVar11;
  uint *******unaff_r10;
  uint *******pppppppuVar12;
  uint *******local_2b0;
  uint *******local_2ac;
  undefined4 local_2a4;
  uint *******local_298;
  uint *******local_28c;
  uint *******local_288;
  uint *******local_27c;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint *******local_248;
  uint *******local_244;
  uint *******local_240;
  uint *******pppppppuStack_23c;
  uint *******pppppppuStack_238;
  uint *******local_230;
  uint *******local_22c;
  uint *******local_228;
  uint *******local_224;
  uint *******local_220;
  uint *******pppppppuStack_21c;
  uint *******pppppppuStack_218;
  uint *******local_210;
  uint *******local_20c;
  uint *******local_208;
  uint *******pppppppuStack_204;
  uint *******local_200;
  uint *******pppppppuStack_1fc;
  uint *******local_1f8;
  uint *******pppppppuStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  uint *******local_1e0;
  uint *******local_1dc;
  uint *******local_1d8;
  uint *******local_1d4;
  uint *******local_1d0;
  uint *******pppppppuStack_1cc;
  uint *******local_1c8;
  uint *******pppppppuStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint *******local_1b0;
  uint *******pppppppuStack_1ac;
  uint *******pppppppuStack_1a8;
  uint *******local_1a0;
  uint *******local_19c;
  uint *******local_198;
  uint *******local_194;
  uint *******local_190;
  uint *******local_18c;
  uint *******local_188;
  uint *******pppppppuStack_184;
  uint *******pppppppuStack_180;
  uint *******local_178;
  uint *******local_174;
  uint *******local_170;
  uint *******local_16c;
  uint *******local_168;
  uint *******local_164;
  uint *******local_160;
  uint *******local_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint *******local_148;
  uint *******local_144;
  uint *******local_140;
  uint *******local_13c;
  uint *******local_138;
  uint *******pppppppuStack_134;
  uint *******local_130;
  uint *******pppppppuStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint *******local_118;
  uint *******local_114;
  uint *******local_110;
  uint *******local_10c;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_104;
  uint *******pppppppuStack_100;
  uint *******local_f8;
  uint *******local_f4;
  uint *******local_f0;
  uint *******pppppppuStack_ec;
  uint *******pppppppuStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint ******local_d8;
  uint ******local_d4;
  uint *******local_d0;
  uint *******local_cc;
  uint *******local_c8;
  uint *******local_c4;
  uint *******local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint ******ppppppuStack_b0;
  uint ******ppppppuStack_ac;
  uint *******local_a8;
  uint *******local_a4;
  uint *******local_a0;
  uint *******local_9c;
  uint *******local_98;
  uint *******local_94;
  uint *******local_90;
  uint *******pppppppuStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint ******local_78;
  uint ******ppppppuStack_74;
  uint ******ppppppuStack_70;
  uint ******ppppppuStack_6c;
  uint ******ppppppuStack_68;
  uint ******local_64;
  uint ******ppppppuStack_60;
  uint ******ppppppuStack_5c;
  uint ******ppppppuStack_58;
  uint ******ppppppuStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  ppppppuVar8 = (uint ******)param_2[4];
  if ((int)ppppppuVar8 < 0) {
    local_98 = (uint *******)(uint ******)0x80000000;
    if (ppppppuVar8 != (uint ******)0x80000007) {
      local_a8 = (uint *******)*param_2;
      local_a4 = (uint *******)param_2[1];
      local_a0 = (uint *******)param_2[2];
      local_9c = (uint *******)param_2[3];
      local_94 = (uint *******)param_2[5];
      local_90 = (uint *******)param_2[6];
      pppppppuStack_8c = (uint *******)param_2[7];
      local_88 = param_2[8];
      uStack_84 = param_2[9];
      uStack_80 = param_2[10];
      uStack_7c = param_2[0xb];
      local_98 = (uint *******)ppppppuVar8;
    }
    local_170 = (uint *******)0x5;
    local_174 = (uint *******)0x4d07f7;
    local_178 = (uint *******)0x80000000;
    local_13c = (uint *******)FUN_00700f8c;
    local_144 = (uint *******)&LAB_012b97d8;
    local_148 = (uint *******)&local_178;
    local_140 = (uint *******)&local_a8;
    FUN_00664898(&local_1e0,&DAT_0059054b,&local_148);
    if (local_178 != (uint *******)0x80000000) {
      FUN_019bb7e0(local_178,local_174);
    }
    param_1[6] = local_1e0;
    param_1[7] = local_1dc;
    param_1[8] = local_1d8;
    param_1[2] = 0;
    FUN_00ba8128(&local_a8);
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  local_278 = *param_2;
  uStack_274 = param_2[1];
  uStack_270 = param_2[2];
  uStack_26c = param_2[3];
  uStack_268 = param_2[4];
  uStack_264 = param_2[5];
  local_260 = param_2[6];
  uStack_25c = param_2[7];
  uStack_258 = param_2[8];
  uStack_254 = param_2[9];
  uStack_250 = param_2[10];
  uStack_24c = param_2[0xb];
  uVar3 = FUN_007017a8(&local_278,"idlast_updatedlast_ticknext_tickran",2);
  FUN_006c1c88(&local_148,uVar3);
  if (local_138 == (uint *******)0x80000007) {
    local_98 = (uint *******)&DAT_80000000;
LAB_00917c00:
    FUN_00abbec8(&local_a8);
    local_27c = (uint *******)&DAT_80000000;
LAB_00917c10:
    uVar3 = FUN_007017a8(&local_278,&DAT_0056ee18,4);
    FUN_006c1c88(&local_a8,uVar3);
    FUN_00abd194(&local_148,&local_a8);
    if (local_148 == (uint *******)0x2) {
      local_288 = local_144;
      local_28c = local_140;
      pppppppuVar12 = local_13c;
LAB_00917d34:
      uVar3 = FUN_007017a8(&local_278,"quota",5);
      FUN_006c1c88(&local_a8,uVar3);
      FUN_00abd098(&local_148,&local_a8);
      if (local_148 == (uint *******)0x2) {
        pppppppuVar9 = local_144;
        pppppppuVar11 = local_140;
LAB_00917e44:
        uVar3 = FUN_007017a8(&local_278,"fixedShareRatio",0xf);
        FUN_006c1c88(&local_148,uVar3);
        if (local_138 == (uint *******)0x80000007) {
          local_98 = (uint *******)&DAT_80000000;
LAB_00917ebc:
          local_cc = (uint *******)0x0;
          local_2a4 = 0;
          local_d0 = (uint *******)0x0;
          FUN_00abbec8(&local_a8);
        }
        else {
          local_a8 = local_148;
          local_a4 = local_144;
          local_a0 = local_140;
          local_9c = local_13c;
          local_98 = local_138;
          local_94 = pppppppuStack_134;
          local_90 = local_130;
          pppppppuStack_8c = pppppppuStack_12c;
          local_88 = uStack_128;
          uStack_84 = uStack_124;
          uStack_80 = uStack_120;
          uStack_7c = uStack_11c;
          if (local_138 == (uint *******)&DAT_80000000) goto LAB_00917ebc;
          FUN_006bde48(&local_178,&local_148);
          if (local_178 != (uint *******)0x0) {
            puVar6 = (undefined4 *)((uint)&local_178 | 4);
            local_1e0 = (uint *******)*puVar6;
            local_1dc = (uint *******)puVar6[1];
            local_1d8 = (uint *******)puVar6[2];
            local_1d4 = (uint *******)puVar6[3];
            local_1d0 = (uint *******)puVar6[4];
            pppppppuStack_1cc = (uint *******)puVar6[5];
            local_1c8 = (uint *******)puVar6[6];
            local_20c = local_15c;
            local_210 = local_160;
            local_f4 = local_15c;
            local_f8 = local_160;
            local_94 = local_160;
            local_170 = (uint *******)&DAT_00000005;
            local_178 = (uint *******)&DAT_80000000;
            local_148 = (uint *******)&local_98;
            local_90 = local_15c;
            local_174 = (uint *******)0x4d07f7;
            local_13c = (uint *******)&LAB_012b97d8;
            local_144 = (uint *******)&LAB_00632348;
            local_140 = (uint *******)&local_178;
            local_d0 = local_1dc;
            local_cc = local_1d8;
            local_a8 = local_1e0;
            local_a4 = local_1dc;
            local_a0 = local_1d8;
            local_9c = local_1d4;
            local_98 = local_1d0;
            FUN_00664898(&local_1e0,&DAT_005bd155,&local_148);
            if (local_178 != (uint *******)&DAT_80000000) {
              FUN_019bb7e0(local_178,local_174);
            }
            pppppppuVar2 = local_9c;
            pppppppuVar1 = local_a0;
            pppppppuVar10 = local_a4;
            pppppppuVar11 = local_a8;
            pppppppuVar9 = local_1d8;
            pppppppuVar12 = local_1dc;
            pppppppuVar4 = local_1e0;
            FUN_019bb7e0(local_98,local_94);
            param_1[3] = pppppppuVar10;
            param_1[4] = pppppppuVar1;
            param_1[5] = pppppppuVar2;
            param_1[6] = pppppppuVar4;
            param_1[7] = pppppppuVar12;
            param_1[8] = pppppppuVar9;
            *param_1 = 2;
            param_1[1] = 0;
            param_1[2] = pppppppuVar11;
            goto LAB_00918130;
          }
          local_2ac = local_170;
          local_2b0 = local_16c;
          local_cc = (uint *******)0x0;
          local_2a4 = 1;
          local_d0 = (uint *******)&DAT_00000001;
        }
        uVar3 = FUN_007017a8(&local_278,"pools",5);
        FUN_006c1c88(&local_210,uVar3);
        if (local_200 == (uint *******)0x80000007) {
          local_1d0 = (uint *******)&DAT_80000000;
LAB_00917fb0:
          pppppppuVar10 = (uint *******)&DAT_80000000;
          FUN_00abbec8(&local_1e0);
LAB_009188c0:
          local_22c = local_224;
          local_230 = local_228;
        }
        else {
          local_1e0 = local_210;
          local_1dc = local_20c;
          local_1d8 = local_208;
          local_1d4 = pppppppuStack_204;
          local_1d0 = local_200;
          pppppppuStack_1cc = pppppppuStack_1fc;
          local_1c8 = local_1f8;
          pppppppuStack_1c4 = pppppppuStack_1f4;
          uStack_1c0 = uStack_1f0;
          uStack_1bc = uStack_1ec;
          uStack_1b8 = uStack_1e8;
          uStack_1b4 = uStack_1e4;
          if (local_200 == (uint *******)&DAT_80000000) goto LAB_00917fb0;
          local_178 = local_210;
          local_174 = local_20c;
          local_170 = local_208;
          local_16c = pppppppuStack_204;
          local_168 = local_200;
          local_164 = pppppppuStack_1fc;
          local_160 = local_1f8;
          local_15c = pppppppuStack_1f4;
          uStack_158 = uStack_1f0;
          uStack_154 = uStack_1ec;
          uStack_150 = uStack_1e8;
          uStack_14c = uStack_1e4;
          if (local_200 != (uint *******)0x80000006) {
            local_148 = local_210;
            local_144 = local_20c;
            local_140 = local_208;
            local_13c = pppppppuStack_204;
            local_138 = local_200;
            pppppppuStack_134 = pppppppuStack_1fc;
            local_130 = local_1f8;
            pppppppuStack_12c = pppppppuStack_1f4;
            uStack_128 = uStack_1f0;
            uStack_124 = uStack_1ec;
            uStack_120 = uStack_1e8;
            uStack_11c = uStack_1e4;
            pppppppuVar4 = (uint *******)thunk_FUN_01be5118(0x28);
            if (pppppppuVar4 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x28);
            }
            local_a8 = local_178;
            local_a4 = local_174;
            local_a0 = local_170;
            local_9c = local_16c;
            local_98 = local_168;
            local_94 = local_164;
            local_90 = local_160;
            pppppppuStack_8c = local_15c;
            local_88 = uStack_158;
            uStack_84 = uStack_154;
            uStack_80 = uStack_150;
            uStack_7c = uStack_14c;
            FUN_00920c54(&local_d0);
            if (local_d0 == (uint *******)&DAT_80000000) {
              puVar6 = (undefined4 *)((uint)&local_d0 | 4);
              local_a8 = (uint *******)*puVar6;
              local_a4 = (uint *******)puVar6[1];
              local_a0 = (uint *******)puVar6[2];
              local_9c = (uint *******)puVar6[3];
              local_98 = (uint *******)puVar6[4];
              local_94 = (uint *******)puVar6[5];
              local_90 = (uint *******)puVar6[6];
              FUN_00a1f1d8((uint)&local_f8 | 4);
LAB_009185b4:
              puVar6 = (undefined4 *)((uint)&local_f8 | 4);
              local_198 = (uint *******)*puVar6;
              local_194 = (uint *******)puVar6[1];
              local_190 = (uint *******)puVar6[2];
              local_18c = (uint *******)puVar6[3];
              local_188 = (uint *******)puVar6[4];
              pppppppuStack_184 = (uint *******)puVar6[5];
              pppppppuStack_180 = (uint *******)puVar6[6];
              local_118 = local_198;
              local_114 = local_194;
              local_110 = local_190;
              local_10c = local_18c;
              pppppppuStack_108 = local_188;
              pppppppuStack_104 = pppppppuStack_184;
              pppppppuStack_100 = pppppppuStack_180;
              thunk_FUN_01be4678(pppppppuVar4);
              goto LAB_009185f4;
            }
            local_f8 = local_d0;
            local_f4 = local_cc;
            local_f0 = local_c8;
            pppppppuStack_ec = local_c4;
            pppppppuStack_e8 = local_c0;
            local_e4 = local_bc;
            uStack_e0 = uStack_b8;
            uStack_dc = uStack_b4;
            local_d8 = ppppppuStack_b0;
            local_d4 = ppppppuStack_ac;
            if (local_d0 == (uint *******)&DAT_80000000) goto LAB_009185b4;
            puVar6 = (undefined4 *)((uint)&local_f8 | 4);
            local_118 = (uint *******)*puVar6;
            local_114 = (uint *******)puVar6[1];
            local_110 = (uint *******)puVar6[2];
            local_10c = (uint *******)puVar6[3];
            pppppppuStack_108 = (uint *******)puVar6[4];
            pppppppuStack_104 = (uint *******)puVar6[5];
            pppppppuStack_100 = (uint *******)puVar6[6];
            pppppppuVar4[1] = (uint ******)local_118;
            pppppppuVar4[2] = (uint ******)local_114;
            pppppppuVar4[3] = (uint ******)local_110;
            pppppppuVar4[4] = (uint ******)local_10c;
            pppppppuVar4[5] = (uint ******)pppppppuStack_108;
            pppppppuVar4[6] = (uint ******)pppppppuStack_104;
            pppppppuVar4[7] = (uint ******)pppppppuStack_100;
            pppppppuVar10 = (uint *******)&DAT_00000001;
            pppppppuVar4[8] = ppppppuStack_b0;
            pppppppuVar4[9] = ppppppuStack_ac;
            *pppppppuVar4 = (uint ******)local_d0;
            local_18c = (uint *******)&DAT_00000001;
            local_190 = pppppppuVar4;
LAB_009188a0:
            local_19c = local_18c;
            local_1a0 = local_190;
LAB_009188b0:
            local_224 = local_19c;
            local_228 = local_1a0;
            goto LAB_009188c0;
          }
          local_a8 = (uint *******)0x2;
          local_c0 = (uint *******)&local_a8;
          local_c4 = local_20c + (int)local_208 * 0xc;
          local_c8 = local_210;
          local_cc = local_20c;
          local_d0 = local_20c;
          FUN_00b154bc(&local_78,&local_d0);
          if (local_78 == (uint ******)0x80000000) {
            local_110 = (uint *******)0x0;
            local_114 = (uint *******)&SUB_00000004;
            local_118 = (uint *******)0x0;
            FUN_00703614(&local_d0);
          }
          else {
            pppppppuVar4 = (uint *******)thunk_FUN_01be5118(0xa0);
            if (pppppppuVar4 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(4,0xa0);
            }
            *pppppppuVar4 = local_78;
            pppppppuVar4[1] = ppppppuStack_74;
            pppppppuVar4[2] = ppppppuStack_70;
            pppppppuVar4[3] = ppppppuStack_6c;
            pppppppuVar4[4] = ppppppuStack_68;
            pppppppuVar4[5] = local_64;
            pppppppuVar4[6] = ppppppuStack_60;
            pppppppuVar4[7] = ppppppuStack_5c;
            pppppppuVar4[8] = ppppppuStack_58;
            pppppppuVar4[9] = ppppppuStack_54;
            local_f8 = (uint *******)&SUB_00000004;
            local_f0 = (uint *******)&DAT_00000001;
            local_148 = local_d0;
            local_144 = local_cc;
            local_140 = local_c8;
            local_13c = local_c4;
            local_138 = local_c0;
            iVar7 = 0x28;
            local_f4 = pppppppuVar4;
            while( true ) {
              pppppppuVar10 = local_f0;
              FUN_00b154bc(&local_50,&local_148);
              if (local_50 == -0x80000000) break;
              if (pppppppuVar10 == local_f8) {
                FUN_0132b898(&local_f8,pppppppuVar10,1,4,0x28);
                pppppppuVar4 = local_f4;
              }
              piVar5 = (int *)((int)pppppppuVar4 + iVar7);
              local_f0 = (uint *******)((int)pppppppuVar10 + 1);
              iVar7 = iVar7 + 0x28;
              *piVar5 = local_50;
              piVar5[1] = iStack_4c;
              piVar5[2] = iStack_48;
              piVar5[3] = iStack_44;
              piVar5[4] = iStack_40;
              piVar5[5] = local_3c;
              piVar5[6] = iStack_38;
              piVar5[7] = iStack_34;
              piVar5[8] = iStack_30;
              piVar5[9] = iStack_2c;
            }
            FUN_00703614(&local_148);
            local_118 = local_f8;
            local_114 = local_f4;
            local_110 = local_f0;
          }
          pppppppuVar4 = local_a8;
          if (local_a8 == (uint *******)0x2) {
            puVar6 = (undefined4 *)((uint)&local_198 | 4);
            local_148 = local_118;
            local_144 = local_114;
            local_140 = local_110;
            *puVar6 = local_118;
            puVar6[1] = local_114;
            puVar6[2] = local_110;
            local_198 = (uint *******)0x2;
          }
          else {
            puVar6 = (undefined4 *)((uint)&local_a8 | 4);
            local_148 = (uint *******)*puVar6;
            local_144 = (uint *******)puVar6[1];
            local_140 = (uint *******)puVar6[2];
            local_d0 = local_98;
            local_cc = local_94;
            local_c8 = local_90;
            FUN_00b1641c(&local_118);
            *puVar6 = local_148;
            puVar6[1] = local_144;
            puVar6[2] = local_140;
            local_98 = local_d0;
            local_94 = local_cc;
            local_90 = local_c8;
            local_a8 = pppppppuVar4;
            FUN_00a1f1d8(&local_198,&local_a8);
          }
          if (local_168 != (uint *******)0x80000006) {
            FUN_00db19c4(&local_178);
          }
LAB_009185f4:
          if (local_198 == (uint *******)0x2) {
            pppppppuVar10 = local_194;
            goto LAB_009188a0;
          }
          local_a8 = local_198;
          local_a4 = local_194;
          local_a0 = local_190;
          local_9c = local_18c;
          local_98 = local_188;
          local_94 = pppppppuStack_184;
          local_90 = pppppppuStack_180;
          FUN_00b199d8(&local_178);
          FUN_00b199d8(&local_148);
          pppppppuVar10 = local_144;
          pppppppuVar4 = local_174;
          if ((local_170 == local_140) &&
             (iVar7 = thunk_FUN_01bed842(local_174,local_144), iVar7 == 0)) {
            if (local_148 != (uint *******)&DAT_80000000) {
              FUN_019bb7e0(local_148,pppppppuVar10);
            }
            if (local_178 != (uint *******)&DAT_80000000) {
              FUN_019bb7e0(local_178,pppppppuVar4);
            }
            local_1b0 = local_188;
            pppppppuStack_1ac = pppppppuStack_184;
            pppppppuStack_1a8 = pppppppuStack_180;
            local_19c = local_18c;
            local_1a0 = local_190;
            pppppppuVar10 = local_a4;
            pppppppuVar4 = local_a8;
          }
          else {
            if (local_148 != (uint *******)&DAT_80000000) {
              FUN_019bb7e0(local_148,local_144);
            }
            if (local_178 != (uint *******)&DAT_80000000) {
              FUN_019bb7e0(local_178,local_174);
            }
            FUN_00b199d8(&local_178);
            local_148 = (uint *******)&local_98;
            local_13c = (uint *******)&LAB_012b97d8;
            local_144 = (uint *******)&LAB_00632348;
            local_140 = (uint *******)&local_178;
            FUN_00664898(&local_d0,&DAT_005bd155,&local_148);
            if (local_178 != (uint *******)&DAT_80000000) {
              FUN_019bb7e0(local_178,local_174);
            }
            pppppppuVar10 = local_a4;
            pppppppuVar4 = local_a8;
            local_1b0 = local_d0;
            pppppppuStack_1ac = local_cc;
            pppppppuStack_1a8 = local_c8;
            local_19c = local_9c;
            local_1a0 = local_a0;
            FUN_019bb7e0(local_98,local_94);
          }
          if (pppppppuVar4 == (uint *******)0x2) goto LAB_009188b0;
          local_220 = local_1b0;
          pppppppuStack_21c = pppppppuStack_1ac;
          pppppppuStack_218 = pppppppuStack_1a8;
          local_224 = local_19c;
          local_228 = local_1a0;
          local_a0 = local_1a0;
          local_9c = local_19c;
          local_98 = local_1b0;
          local_94 = pppppppuStack_1ac;
          local_90 = pppppppuStack_1a8;
          local_a8 = pppppppuVar4;
          local_a4 = pppppppuVar10;
          FUN_00b199d8(&local_148);
          pppppppuVar1 = local_144;
          if ((local_140 == (uint *******)&DAT_00000005) &&
             (iVar7 = thunk_FUN_01bed842(local_144,
                                         "Groupold_flagsConcatAlternationAlternationBranch",5),
             iVar7 == 0)) {
            if (local_148 != (uint *******)&DAT_80000000) {
              FUN_019bb7e0(local_148,pppppppuVar1);
            }
            local_240 = local_220;
            pppppppuStack_23c = pppppppuStack_21c;
            pppppppuStack_238 = pppppppuStack_218;
            local_22c = local_224;
            local_230 = local_228;
LAB_009189f0:
            local_244 = local_22c;
            local_248 = local_230;
            param_1[6] = local_240;
            param_1[7] = pppppppuStack_23c;
            param_1[8] = pppppppuStack_238;
            param_1[3] = pppppppuVar10;
            param_1[4] = local_230;
            param_1[5] = local_22c;
            param_1[1] = 0;
            param_1[2] = pppppppuVar4;
            *param_1 = 2;
            goto LAB_00918130;
          }
          if (local_148 != (uint *******)&DAT_80000000) {
            FUN_019bb7e0(local_148,local_144);
          }
          local_13c = (uint *******)&LAB_012b97d8;
          local_148 = (uint *******)&local_98;
          local_174 = (uint *******)0x4d07f7;
          local_170 = (uint *******)&DAT_00000005;
          local_178 = (uint *******)&DAT_80000000;
          local_144 = (uint *******)&LAB_00632348;
          local_140 = (uint *******)&local_178;
          FUN_00664898(&local_1e0,&DAT_005bd155,&local_148);
          if (local_178 != (uint *******)&DAT_80000000) {
            FUN_019bb7e0(local_178,local_174);
          }
          pppppppuVar10 = local_a4;
          pppppppuVar4 = local_a8;
          local_240 = local_1e0;
          pppppppuStack_23c = local_1dc;
          pppppppuStack_238 = local_1d8;
          local_22c = local_9c;
          local_230 = local_a0;
          FUN_019bb7e0(local_98,local_94);
          if (pppppppuVar4 != (uint *******)0x2) goto LAB_009189f0;
        }
        local_244 = local_22c;
        param_1[0xd] = local_230;
        param_1[0xe] = local_22c;
        local_248 = local_230;
        *param_1 = local_2a4;
        param_1[1] = 0;
        param_1[0xc] = pppppppuVar10;
        param_1[2] = local_2ac;
        param_1[3] = local_2b0;
        param_1[4] = pppppppuVar9;
        param_1[6] = local_27c;
        param_1[7] = local_298;
        param_1[8] = unaff_r10;
        param_1[9] = local_288;
        param_1[5] = pppppppuVar11;
        param_1[10] = local_28c;
        param_1[0xb] = pppppppuVar12;
        FUN_006c1408(&local_278);
        if (param_2[4] == 0x80000007) {
          return;
        }
        if (-1 < (int)param_2[4]) {
          return;
        }
        goto LAB_00918964;
      }
      local_a8 = local_148;
      local_a4 = local_144;
      local_a0 = local_140;
      local_9c = local_13c;
      local_98 = local_138;
      local_94 = pppppppuStack_134;
      local_90 = local_130;
      local_20c = (uint *******)0x4d07f7;
      local_210 = (uint *******)&DAT_80000000;
      local_170 = (uint *******)&local_210;
      local_178 = (uint *******)&local_98;
      local_208 = (uint *******)&DAT_00000005;
      local_16c = (uint *******)&LAB_012b97d8;
      local_174 = (uint *******)&LAB_00632348;
      FUN_00664898(&local_d0,&DAT_005bd155,&local_178);
      if (local_210 != (uint *******)&DAT_80000000) {
        FUN_019bb7e0(local_210,local_20c);
      }
      pppppppuVar11 = local_a0;
      pppppppuVar9 = local_a4;
      pppppppuVar4 = local_a8;
      puVar6 = (undefined4 *)((uint)&local_1e0 | 4);
      *puVar6 = local_d0;
      puVar6[1] = local_cc;
      puVar6[2] = local_c8;
      local_1e0 = local_9c;
      FUN_019bb7e0(local_98,local_94);
      if (pppppppuVar4 == (uint *******)0x2) goto LAB_00917e44;
      param_1[5] = local_1e0;
      param_1[6] = local_1dc;
      param_1[7] = local_1d8;
      param_1[8] = local_1d4;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = pppppppuVar4;
      param_1[3] = pppppppuVar9;
      param_1[4] = pppppppuVar11;
LAB_00918130:
      if (local_288 != (uint *******)&DAT_80000000) {
        FUN_019bb7e0(local_288,local_28c);
      }
    }
    else {
      local_a8 = local_148;
      local_a4 = local_144;
      local_a0 = local_140;
      local_9c = local_13c;
      local_98 = local_138;
      local_94 = pppppppuStack_134;
      local_90 = local_130;
      local_1d8 = (uint *******)&DAT_00000005;
      local_1e0 = (uint *******)&DAT_80000000;
      local_170 = (uint *******)&local_1e0;
      local_178 = (uint *******)&local_98;
      local_1dc = (uint *******)0x4d07f7;
      local_16c = (uint *******)&LAB_012b97d8;
      local_174 = (uint *******)&LAB_00632348;
      FUN_00664898(&local_210,&DAT_005bd155,&local_178);
      if (local_1e0 != (uint *******)&DAT_80000000) {
        FUN_019bb7e0(local_1e0,local_1dc);
      }
      pppppppuVar12 = local_9c;
      local_28c = local_a0;
      local_288 = local_a4;
      pppppppuVar4 = local_a8;
      local_d0 = local_210;
      local_cc = local_20c;
      local_c8 = local_208;
      FUN_019bb7e0(local_98,local_94);
      if (pppppppuVar4 == (uint *******)0x2) {
        goto LAB_00917d34;
      }
      param_1[6] = local_d0;
      param_1[7] = local_cc;
      param_1[8] = local_c8;
      param_1[5] = pppppppuVar12;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = pppppppuVar4;
      param_1[3] = local_288;
      param_1[4] = local_28c;
    }
    if (local_27c != (uint *******)&DAT_80000000) {
      FUN_019bb7e0(local_27c,local_298);
    }
  }
  else {
    local_a8 = local_148;
    local_a4 = local_144;
    local_a0 = local_140;
    local_9c = local_13c;
    local_98 = local_138;
    local_94 = pppppppuStack_134;
    local_90 = local_130;
    pppppppuStack_8c = pppppppuStack_12c;
    local_88 = uStack_128;
    uStack_84 = uStack_124;
    uStack_80 = uStack_120;
    uStack_7c = uStack_11c;
    if (local_138 == (uint *******)&DAT_80000000) goto LAB_00917c00;
    FUN_006c92d4(&local_178,&local_148);
    if (local_178 == (uint *******)0x2) {
      local_27c = local_174;
      local_298 = local_170;
      unaff_r10 = local_16c;
      goto LAB_00917c10;
    }
    local_a8 = (uint *******)&local_168;
    local_1d0 = local_168;
    pppppppuStack_1cc = local_164;
    local_1c8 = local_160;
    local_1d4 = local_16c;
    local_1d8 = local_170;
    local_1dc = local_174;
    local_1e0 = local_178;
    local_210 = local_168;
    local_20c = local_164;
    local_208 = local_160;
    local_140 = (uint *******)&DAT_00000005;
    local_148 = (uint *******)&DAT_80000000;
    local_a0 = (uint *******)&local_148;
    local_144 = (uint *******)0x4d07f7;
    local_9c = (uint *******)&LAB_012b97d8;
    local_a4 = (uint *******)&LAB_00632348;
    FUN_00664898(&local_1e0,&DAT_005bd155,&local_a8);
    if (local_148 != (uint *******)&DAT_80000000) {
      FUN_019bb7e0(local_148,local_144);
    }
    unaff_r10 = local_16c;
    local_298 = local_170;
    pppppppuVar12 = local_174;
    pppppppuVar4 = local_178;
    local_d0 = local_1e0;
    local_cc = local_1dc;
    local_c8 = local_1d8;
    local_27c = local_174;
    FUN_019bb7e0(local_168,local_164);
    if (pppppppuVar4 == (uint *******)0x2) {
      goto LAB_00917c10;
    }
    param_1[6] = local_d0;
    param_1[7] = local_cc;
    param_1[8] = local_c8;
    param_1[1] = 0;
    param_1[2] = pppppppuVar4;
    *param_1 = 2;
    param_1[3] = pppppppuVar12;
    param_1[4] = local_298;
    param_1[5] = unaff_r10;
  }
  FUN_006c1408(&local_278);
  if (param_2[4] == 0x80000007) {
    return;
  }
  if (param_2[4] < 0x80000000) {
    return;
  }
LAB_00918964:
  FUN_00db19c4(param_2);
  return;
}

