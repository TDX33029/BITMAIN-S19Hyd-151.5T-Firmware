// FUN_00d80b58 @ 00d80b58 size=3168 calls_out=18 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00d80f70) */
/* WARNING: Removing unreachable block (ram,0x00d80fb0) */
/* WARNING: Removing unreachable block (ram,0x00d80fcc) */
/* WARNING: Removing unreachable block (ram,0x00d80fd8) */
/* WARNING: Removing unreachable block (ram,0x00d80fe8) */
/* WARNING: Removing unreachable block (ram,0x00d80fec) */
/* WARNING: Removing unreachable block (ram,0x00d81000) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d80b58(undefined4 *param_1,int *******param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int ******ppppppiVar5;
  int ******ppppppiVar6;
  int *******unaff_r4;
  int *******pppppppiVar7;
  int ******ppppppiVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  int *******unaff_r10;
  int *******pppppppiVar12;
  int *******pppppppiVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  int *******extraout_r12;
  int ******ppppppiVar16;
  int *******local_234;
  int *******local_22c;
  int *******local_228;
  int *******local_224;
  int *******local_220;
  int *******pppppppiStack_21c;
  int *******pppppppiStack_218;
  int *******pppppppiStack_214;
  int *******local_210;
  int *******local_20c;
  int *******pppppppiStack_208;
  int *******pppppppiStack_204;
  int *******pppppppiStack_200;
  int *******local_1fc;
  int ******local_1f8;
  int ******ppppppiStack_1f4;
  int ******ppppppiStack_1f0;
  int ******ppppppiStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [8];
  undefined1 auStack_1d0 [72];
  int *******local_188;
  int *******pppppppiStack_184;
  int *******pppppppiStack_180;
  int *******pppppppiStack_17c;
  int *******pppppppiStack_178;
  int *******pppppppiStack_174;
  int *******local_170;
  int *******local_16c;
  int *******local_168;
  int *******local_164;
  int *******local_160;
  int *******local_15c;
  int *******pppppppiStack_158;
  int *******pppppppiStack_154;
  int *******pppppppiStack_150;
  int *******pppppppiStack_14c;
  int *******local_148;
  int *******local_144;
  int local_140;
  int *******local_13c;
  int *******local_138;
  int *******local_134;
  int *******local_130;
  int *******local_12c;
  int *******local_128;
  int *******local_124;
  int *******local_120;
  int *******local_11c;
  int *******local_118;
  int *******pppppppiStack_114;
  int *******pppppppiStack_110;
  int *******pppppppiStack_10c;
  int *******local_108;
  int *******pppppppiStack_104;
  int *******pppppppiStack_100;
  int *******pppppppiStack_fc;
  int *******local_f8;
  int *******pppppppiStack_f4;
  int *******pppppppiStack_f0;
  int *******pppppppiStack_ec;
  int *******pppppppiStack_e8;
  int *******local_e4;
  int ******ppppppiStack_e0;
  int ******ppppppiStack_dc;
  int ******ppppppiStack_d8;
  int ******ppppppiStack_d4;
  int local_cc;
  int local_c8;
  undefined1 *local_c4;
  int *****local_c0;
  int *******local_bc;
  int ******local_b8;
  int ******ppppppiStack_b4;
  int ******ppppppiStack_b0;
  int ******ppppppiStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *******local_98;
  int *******local_94;
  int *******local_90;
  int *******local_8c;
  int *******local_88;
  int *******local_84;
  int *******local_80;
  int *******local_7c;
  int *******local_78;
  int *******pppppppiStack_74;
  int *******pppppppiStack_70;
  int *******pppppppiStack_6c;
  int *******pppppppiStack_68;
  int *******local_64;
  int *******pppppppiStack_60;
  int *******pppppppiStack_5c;
  int *******pppppppiStack_58;
  int *******pppppppiStack_54;
  int ******local_50;
  int ******ppppppiStack_4c;
  int ******ppppppiStack_48;
  int ******ppppppiStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pppppppiVar11 = (int *******)*param_2;
  pppppppiVar14 = (int *******)param_2[1];
  ppppppiVar5 = param_2[0x27];
  *param_2 = (int ******)0x3;
  param_2[1] = (int ******)0x0;
  if (pppppppiVar11 == (int *******)&DAT_00000003 && pppppppiVar14 == (int *******)0x0) {
    ppppppiVar6 = param_2[0x24];
    pppppppiVar9 = param_2 + 0x1c;
    if (ppppppiVar6 != (int ******)0x0) {
      pppppppiVar11 = (int *******)&local_188;
      do {
        (*(code *)param_2[0x25][3])(&local_98,ppppppiVar6,param_3);
        if (local_98 == (int *******)&DAT_00000005 && local_94 == (int *******)0x0) {
LAB_00d812b4:
          if (param_2[0x1d] == (int ******)0x0) goto LAB_00d81720;
          goto LAB_00d812f0;
        }
        FUN_01bed4e2(&local_138,&local_98,0x68);
        pppppppiVar10 = local_124;
        pppppppiVar12 = local_128;
        unaff_r4 = local_12c;
        pppppppiVar15 = local_130;
        pppppppiVar7 = local_134;
        pppppppiVar14 = local_138;
        if (local_138 == (int *******)&SUB_00000004 && local_134 == (int *******)0x0) {
          if (param_2[0x24] != (int ******)0x0) {
            FUN_01139b38(param_2[0x24],param_2[0x25]);
          }
          param_2[0x24] = (int ******)0x0;
          unaff_r4 = pppppppiVar11;
          break;
        }
        pppppppiVar11 = (int *******)&local_188;
        local_22c = local_130;
        local_224 = local_128;
        local_188 = local_120;
        pppppppiStack_184 = local_11c;
        pppppppiStack_180 = local_118;
        pppppppiStack_17c = pppppppiStack_114;
        pppppppiStack_178 = pppppppiStack_110;
        pppppppiStack_174 = pppppppiStack_10c;
        local_220 = local_108;
        pppppppiStack_21c = pppppppiStack_104;
        pppppppiStack_218 = pppppppiStack_100;
        pppppppiStack_214 = pppppppiStack_fc;
        local_210 = local_f8;
        local_20c = pppppppiStack_f4;
        pppppppiStack_208 = pppppppiStack_f0;
        pppppppiStack_204 = pppppppiStack_ec;
        pppppppiStack_200 = pppppppiStack_e8;
        local_1fc = local_e4;
        local_1f8 = ppppppiStack_e0;
        ppppppiStack_1f4 = ppppppiStack_dc;
        ppppppiStack_1f0 = ppppppiStack_d8;
        ppppppiStack_1ec = ppppppiStack_d4;
        if (local_138 != (int *******)&DAT_00000003 || local_134 != (int *******)0x0) {
          if (local_138 == (int *******)&DAT_00000005 && local_134 == (int *******)0x0)
          goto LAB_00d812b4;
          ppppppiVar5 = param_2[0x1d];
          local_16c = local_228;
          local_170 = local_234;
          if (ppppppiVar5 == (int ******)0x0) {
            pppppppiVar7 = local_12c;
            pppppppiVar11 = local_138;
            pppppppiVar14 = local_134;
            goto LAB_00d81290;
          }
          if (*param_2 != (int ******)0x3 || param_2[1] != (int ******)0x0) {
            FUN_005f6588(param_2);
            ppppppiVar5 = param_2[0x1d];
          }
          *param_2 = (int ******)pppppppiVar14;
          param_2[1] = (int ******)pppppppiVar7;
          param_2[5] = (int ******)pppppppiVar10;
          param_2[2] = (int ******)pppppppiVar15;
          param_2[3] = (int ******)unaff_r4;
          param_2[4] = (int ******)pppppppiVar12;
          param_2[6] = (int ******)local_188;
          param_2[7] = (int ******)pppppppiStack_184;
          param_2[8] = (int ******)pppppppiStack_180;
          param_2[9] = (int ******)pppppppiStack_17c;
          param_2[10] = (int ******)pppppppiStack_178;
          param_2[0xb] = (int ******)pppppppiStack_174;
          param_2[0xc] = (int ******)local_220;
          param_2[0xd] = (int ******)pppppppiStack_21c;
          param_2[0xe] = (int ******)pppppppiStack_218;
          param_2[0xf] = (int ******)pppppppiStack_214;
          param_2[0x10] = (int ******)local_210;
          param_2[0x11] = (int ******)local_20c;
          param_2[0x12] = (int ******)pppppppiStack_208;
          param_2[0x13] = (int ******)pppppppiStack_204;
          param_2[0x14] = (int ******)pppppppiStack_200;
          param_2[0x15] = (int ******)local_1fc;
          param_2[0x16] = local_1f8;
          param_2[0x17] = ppppppiStack_1f4;
          param_2[0x18] = ppppppiStack_1f0;
          param_2[0x19] = ppppppiStack_1ec;
          FUN_01283fd8(&local_148,pppppppiVar9,ppppppiVar5);
          if (((uint)local_13c & 1) == 0) {
            local_22c = (int *******)&DAT_01d2e520;
          }
          else {
            local_c4 = (undefined1 *)((int)local_144 + ((uint)local_13c >> 5));
            local_c8 = (int)local_148 - ((uint)local_13c >> 5);
            local_cc = local_140 + ((uint)local_13c >> 5);
            FUN_01283524(&local_138,&local_cc);
            local_c0 = (int *****)((uint)local_13c >> 5);
            if (local_130 < (int *******)((uint)local_13c >> 5)) {
              local_90 = (int *******)&local_bc;
              local_bc = local_130;
              local_8c = (int *******)&LAB_01a6a304;
              local_94 = (int *******)&LAB_01a6a304;
              local_98 = (int *******)&local_c0;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
            }
            local_144 = (int *******)((int)local_130 - (int)local_c0);
            local_22c = local_138;
            local_148 = (int *******)((int)local_134 + (int)local_c0);
            local_13c = local_12c;
          }
          goto LAB_00d81384;
        }
        local_160 = local_120;
        local_15c = local_11c;
        pppppppiStack_158 = local_118;
        pppppppiStack_154 = pppppppiStack_114;
        pppppppiStack_150 = pppppppiStack_110;
        pppppppiStack_14c = pppppppiStack_10c;
        ppppppiVar6 = param_2[0x1a];
        ppppppiVar8 = param_2[0x1b];
        pppppppiVar14 = (int *******)param_2[0x1d];
        unaff_r10 = pppppppiVar14;
        if ((uint)((int)param_2[0x1e] - (int)pppppppiVar14) < 5) {
          FUN_01283c9c(pppppppiVar9,5);
          unaff_r10 = (int *******)param_2[0x1d];
          local_134 = (int *******)((int)param_2[0x1e] - (int)unaff_r10);
          if (local_134 < 5) {
            local_168 = local_128;
            local_16c = unaff_r4;
            local_164 = local_124;
            local_170 = pppppppiVar15;
            local_138 = (int *******)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_138);
          }
        }
        param_2[0x1d] = (int ******)((int)unaff_r10 + 5);
        local_130 = local_128;
        ppppppiVar16 = (int ******)0x0;
        local_134 = unaff_r4;
        local_12c = local_124;
        local_138 = pppppppiVar15;
        local_128 = local_188;
        local_124 = pppppppiStack_184;
        local_120 = pppppppiStack_180;
        local_11c = pppppppiStack_17c;
        local_118 = pppppppiStack_178;
        pppppppiStack_114 = pppppppiStack_174;
        if (((uint)pppppppiVar15 & 1) != 0) {
          if (pppppppiVar12 == (int *******)0x0 && pppppppiVar10 == (int *******)0x0) {
            iVar2 = 2;
          }
          else {
            uVar1 = LZCOUNT((uint)pppppppiVar12 | 1) | 0x20;
            if (pppppppiVar10 != (int *******)0x0) {
              uVar1 = LZCOUNT(pppppppiVar10);
            }
            iVar2 = ((uVar1 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          if (local_188 == (int *******)0x0) {
            pppppppiVar11 = (int *******)0x0;
          }
          else {
            uVar1 = LZCOUNT((uint)local_188 | 1) | 0x20;
            if ((int)local_188 < 0) {
              uVar1 = LZCOUNT((int)local_188 >> 0x1f);
            }
            pppppppiVar11 = (int *******)(((uVar1 ^ 0x3f) * 9 + 0x49 >> 6) + 1);
          }
          ppppppiVar16 = (int ******)((int)pppppppiVar11 + iVar2);
        }
        local_224 = pppppppiStack_17c;
        if (pppppppiStack_178 != (int *******)0x0) {
          iVar2 = 0;
          if (pppppppiStack_17c[6] != (int ******)0x0) {
            iVar2 = ((LZCOUNT((uint)pppppppiStack_17c[6] | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
          }
          ppppppiVar5 = pppppppiStack_17c[7];
          iVar3 = 0;
          if (ppppppiVar5 != (int ******)0x0) {
            uVar1 = LZCOUNT((uint)ppppppiVar5 | 1) | 0x20;
            if ((int)ppppppiVar5 < 0) {
              uVar1 = LZCOUNT((int)ppppppiVar5 >> 0x1f);
            }
            iVar3 = ((uVar1 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
                    /* WARNING: Could not recover jumptable at 0x00d80e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00d80e58 + *(int *)(&DAT_00d80e58 + (int)*pppppppiStack_17c * 4)))
                    (iVar3,pppppppiStack_17c + 4,&DAT_00d80e58,iVar2);
          return;
        }
        if ((int ******)(0x7ffffffaU - (int)unaff_r10) < ppppppiVar16) {
          local_148 = (int *******)ppppppiVar16;
          local_144 = (int *******)(0x7ffffffaU - (int)unaff_r10);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_148,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (((uint)pppppppiVar15 & 1) != 0) {
          FUN_00efc900(1,pppppppiVar11,pppppppiVar12,pppppppiVar10,local_188,pppppppiVar9);
        }
        FUN_00d81c14(&local_138);
        pppppppiVar11 = (int *******)param_2[0x1d];
        if (pppppppiVar11 < pppppppiVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppppppiVar14,pppppppiVar11,pppppppiVar11,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_98,ppppppiVar6,ppppppiVar8,
                     (undefined1 *)((int)*pppppppiVar9 + (int)pppppppiVar14),
                     (int)pppppppiVar11 - (int)pppppppiVar14);
        pppppppiVar10 = local_84;
        pppppppiVar12 = local_88;
        pppppppiVar7 = local_8c;
        pppppppiVar14 = local_94;
        pppppppiVar11 = local_98;
        if (local_98 != (int *******)&DAT_00000003 || local_94 != (int *******)0x0) {
          local_22c = local_90;
          FUN_01bed4e2(local_1d8,&local_80,0x50);
          goto LAB_00d81490;
        }
        if (ppppppiVar5 <= param_2[0x1d]) {
          FUN_01283fd8(&local_148,pppppppiVar9);
          if (((uint)local_13c & 1) == 0) goto LAB_00d81314;
          local_c4 = (undefined1 *)((int)local_144 + ((uint)local_13c >> 5));
          local_c8 = (int)local_148 - ((uint)local_13c >> 5);
          local_cc = local_140 + ((uint)local_13c >> 5);
          FUN_01283524(&local_138,&local_cc);
          local_c0 = (int *****)((uint)local_13c >> 5);
          if (local_130 < (int *******)((uint)local_13c >> 5)) {
            local_90 = (int *******)&local_bc;
            local_bc = local_130;
            local_8c = (int *******)&LAB_01a6a304;
            local_94 = (int *******)&LAB_01a6a304;
            local_98 = (int *******)&local_c0;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
          }
          local_144 = (int *******)((int)local_130 - (int)local_c0);
          local_22c = local_138;
          local_148 = (int *******)((int)local_134 + (int)local_c0);
          local_13c = local_12c;
          goto LAB_00d81384;
        }
        ppppppiVar6 = param_2[0x24];
        local_228 = unaff_r4;
        local_234 = pppppppiVar15;
        pppppppiVar11 = unaff_r4;
        if (ppppppiVar6 == (int ******)0x0) break;
      } while( true );
    }
    if (param_2[0x1d] == (int ******)0x0) {
      pppppppiVar14 = (int *******)0x0;
      pppppppiVar11 = (int *******)&SUB_00000004;
      pppppppiVar7 = unaff_r4;
      pppppppiVar10 = param_2;
      pppppppiVar12 = unaff_r10;
    }
    else {
LAB_00d812f0:
      FUN_01283fd8(&local_148,pppppppiVar9);
      if (((uint)local_13c & 1) == 0) {
LAB_00d81314:
        local_22c = (int *******)&DAT_01d2e520;
      }
      else {
        local_c4 = (undefined1 *)((int)local_144 + ((uint)local_13c >> 5));
        local_c8 = (int)local_148 - ((uint)local_13c >> 5);
        local_cc = local_140 + ((uint)local_13c >> 5);
        FUN_01283524(&local_138,&local_cc);
        local_c0 = (int *****)((uint)local_13c >> 5);
        if (local_130 < (int *******)((uint)local_13c >> 5)) {
          local_90 = (int *******)&local_bc;
          local_bc = local_130;
          local_8c = (int *******)&LAB_01a6a304;
          local_94 = (int *******)&LAB_01a6a304;
          local_98 = (int *******)&local_c0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_98,&DAT_01d2e534);
        }
        local_144 = (int *******)((int)local_130 - (int)local_c0);
        local_22c = local_138;
        local_148 = (int *******)((int)local_134 + (int)local_c0);
        local_13c = local_12c;
      }
LAB_00d81384:
      pppppppiVar14 = (int *******)0x0;
      pppppppiVar11 = (int *******)&DAT_00000003;
      pppppppiVar7 = local_148;
      pppppppiVar10 = local_13c;
      pppppppiVar12 = local_144;
    }
LAB_00d81490:
    pppppppiVar9 = pppppppiVar12;
    if (pppppppiVar11 == (int *******)&SUB_00000004 && pppppppiVar14 == (int *******)0x0) {
      FUN_01a737fc(&local_98,param_2 + 0x28);
      if (local_98 == (int *******)&SUB_00000004 && local_94 == (int *******)0x0) {
        pppppppiVar15 = pppppppiVar14;
        pppppppiVar7 = extraout_r12;
      }
      else {
        if (local_98 != (int *******)&DAT_00000003 || local_94 != (int *******)0x0) {
          local_b8 = local_50;
          ppppppiStack_b4 = ppppppiStack_4c;
          ppppppiStack_b0 = ppppppiStack_48;
          ppppppiStack_ac = ppppppiStack_44;
          local_a8 = local_40;
          uStack_a4 = uStack_3c;
          uStack_a0 = uStack_38;
          uStack_9c = uStack_34;
        }
        local_224 = local_88;
        local_22c = local_90;
        local_228 = local_7c;
        local_138 = local_78;
        local_134 = pppppppiStack_74;
        local_130 = pppppppiStack_70;
        local_12c = pppppppiStack_6c;
        local_128 = pppppppiStack_68;
        local_124 = local_64;
        local_120 = pppppppiStack_60;
        local_11c = pppppppiStack_5c;
        local_118 = pppppppiStack_58;
        pppppppiStack_114 = pppppppiStack_54;
        pppppppiVar9 = local_80;
        pppppppiVar15 = local_8c;
        pppppppiVar7 = local_84;
      }
      local_220 = local_138;
      pppppppiStack_21c = local_134;
      pppppppiStack_218 = local_130;
      pppppppiStack_214 = local_12c;
      local_210 = local_128;
      local_20c = local_124;
      pppppppiStack_208 = local_120;
      pppppppiStack_204 = local_11c;
      pppppppiStack_200 = local_118;
      local_1fc = pppppppiStack_114;
      local_1f8 = local_b8;
      ppppppiStack_1f4 = ppppppiStack_b4;
      ppppppiStack_1f0 = ppppppiStack_b0;
      ppppppiStack_1ec = ppppppiStack_ac;
      local_1e8 = local_a8;
      uStack_1e4 = uStack_a4;
      uStack_1e0 = uStack_a0;
      uStack_1dc = uStack_9c;
      pppppppiVar11 = local_98;
      pppppppiVar13 = local_22c;
      pppppppiVar14 = local_94;
LAB_00d816fc:
      if (pppppppiVar11 != (int *******)&DAT_00000003 || pppppppiVar14 != (int *******)0x0) {
        if (pppppppiVar11 != (int *******)&SUB_00000004 || pppppppiVar14 != (int *******)0x0) {
          if (pppppppiVar11 != (int *******)&DAT_00000005 || pppppppiVar14 != (int *******)0x0) {
            FUN_01bed4e2(&local_78,&local_220,0x48);
            local_7c = local_228;
            local_88 = local_224;
            local_98 = pppppppiVar11;
            local_94 = pppppppiVar14;
            local_90 = pppppppiVar13;
            local_8c = pppppppiVar15;
            local_84 = pppppppiVar7;
            local_80 = pppppppiVar9;
            uVar4 = FUN_01a65494(&local_98);
            FUN_01a7467c(param_1,uVar4,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d81720;
        }
        uVar4 = 4;
        goto LAB_00d81734;
      }
      local_22c = local_224;
    }
    else {
      if (pppppppiVar11 != (int *******)&DAT_00000003 || pppppppiVar14 != (int *******)0x0) {
        local_130 = local_22c;
        local_138 = pppppppiVar11;
        local_134 = pppppppiVar14;
        local_12c = pppppppiVar7;
        local_128 = pppppppiVar12;
        local_124 = pppppppiVar10;
        FUN_01bed4e2(&local_120,local_1d8,0x50);
        pppppppiVar9 = local_120;
        pppppppiVar15 = local_12c;
        pppppppiVar13 = local_130;
        if (*(char *)(param_2 + 0x42) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x109) = 1;
          FUN_01a738c0(&local_98,&local_138);
          local_228 = local_7c;
          local_224 = local_88;
          local_170 = local_78;
          local_16c = pppppppiStack_74;
          local_168 = pppppppiStack_70;
          local_164 = pppppppiStack_6c;
          local_160 = pppppppiStack_68;
          local_15c = local_64;
          pppppppiStack_158 = pppppppiStack_60;
          pppppppiStack_154 = pppppppiStack_5c;
          pppppppiStack_150 = pppppppiStack_58;
          pppppppiStack_14c = pppppppiStack_54;
          if (local_98 == (int *******)&DAT_00000003 && local_94 == (int *******)0x0) {
            local_220 = local_78;
            pppppppiStack_21c = pppppppiStack_74;
            pppppppiStack_218 = pppppppiStack_70;
            pppppppiStack_214 = pppppppiStack_6c;
            local_210 = pppppppiStack_68;
            local_20c = local_64;
            pppppppiStack_208 = pppppppiStack_60;
            pppppppiStack_204 = pppppppiStack_5c;
            pppppppiStack_200 = pppppppiStack_58;
            local_1fc = pppppppiStack_54;
            FUN_005f6588(&local_138);
            local_94 = (int *******)0x0;
            local_98 = (int *******)&DAT_00000003;
          }
          else {
            local_1f8 = local_50;
            ppppppiStack_1f4 = ppppppiStack_4c;
            ppppppiStack_1f0 = ppppppiStack_48;
            ppppppiStack_1ec = ppppppiStack_44;
            local_1e8 = local_40;
            uStack_1e4 = uStack_3c;
            uStack_1e0 = uStack_38;
            uStack_1dc = uStack_34;
            local_220 = local_78;
            pppppppiStack_21c = pppppppiStack_74;
            pppppppiStack_218 = pppppppiStack_70;
            pppppppiStack_214 = pppppppiStack_6c;
            local_210 = pppppppiStack_68;
            local_20c = local_64;
            pppppppiStack_208 = pppppppiStack_60;
            pppppppiStack_204 = pppppppiStack_5c;
            pppppppiStack_200 = pppppppiStack_58;
            local_1fc = pppppppiStack_54;
            FUN_005f6588(&local_138);
          }
          pppppppiVar9 = local_80;
          pppppppiVar7 = local_84;
          pppppppiVar11 = local_98;
          pppppppiVar13 = local_90;
          pppppppiVar15 = local_8c;
          pppppppiVar14 = local_94;
        }
        else {
          local_228 = local_11c;
          FUN_01bed4e2(&local_220,auStack_1d0,0x48);
          pppppppiVar7 = pppppppiVar10;
          local_224 = pppppppiVar12;
        }
        goto LAB_00d816fc;
      }
      pppppppiVar15 = (int *******)0x0;
      pppppppiVar13 = (int *******)&DAT_00000003;
      local_228 = pppppppiVar10;
    }
    param_1[8] = local_220;
    param_1[9] = pppppppiStack_21c;
    param_1[10] = pppppppiStack_218;
    param_1[0xb] = pppppppiStack_214;
    param_1[0xc] = local_210;
    param_1[0xd] = local_20c;
    param_1[0xe] = pppppppiStack_208;
    param_1[0xf] = pppppppiStack_204;
    param_1[0x10] = pppppppiStack_200;
    param_1[0x11] = local_1fc;
    param_1[1] = 0;
    param_1[2] = pppppppiVar13;
    param_1[3] = pppppppiVar15;
    *param_1 = 3;
    param_1[4] = local_22c;
    param_1[5] = pppppppiVar7;
    param_1[6] = pppppppiVar9;
    param_1[7] = local_228;
  }
  else {
    local_22c = (int *******)param_2[2];
    pppppppiVar7 = (int *******)param_2[3];
    pppppppiVar12 = (int *******)param_2[4];
    pppppppiVar10 = (int *******)param_2[5];
    FUN_01bed4e2(local_1d8,param_2 + 6,0x50);
LAB_00d81290:
    if (pppppppiVar11 != (int *******)&DAT_00000005 || pppppppiVar14 != (int *******)0x0)
    goto LAB_00d81490;
LAB_00d81720:
    uVar4 = 5;
LAB_00d81734:
    *param_1 = uVar4;
    param_1[1] = 0;
  }
  return;
}

