// FUN_01075050 @ 01075050 size=1740 calls_out=18 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01075050(undefined4 *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  uint uVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuVar8;
  undefined4 **ppuVar9;
  undefined4 **ppuVar10;
  undefined4 **ppuVar11;
  undefined4 **ppuVar12;
  undefined4 **extraout_r12;
  undefined4 **extraout_r12_00;
  undefined4 **local_25c;
  undefined4 **local_250;
  undefined4 **local_24c;
  undefined4 **local_244;
  undefined4 **local_240;
  undefined4 **ppuStack_23c;
  undefined4 **ppuStack_238;
  undefined4 **ppuStack_234;
  undefined4 **local_230;
  undefined4 **ppuStack_22c;
  undefined4 **ppuStack_228;
  undefined4 **ppuStack_224;
  undefined4 **local_220;
  undefined4 **ppuStack_21c;
  undefined4 **ppuStack_218;
  undefined4 **ppuStack_214;
  undefined4 **local_200;
  undefined4 **ppuStack_1fc;
  undefined4 **ppuStack_1f8;
  undefined4 **ppuStack_1f4;
  undefined4 **local_1f0;
  undefined4 **local_1ec;
  undefined4 **ppuStack_1e8;
  undefined4 **ppuStack_1e4;
  undefined4 **local_1e0;
  undefined4 **ppuStack_1dc;
  undefined4 **ppuStack_1d8;
  undefined4 **ppuStack_1d4;
  undefined4 **ppuStack_1d0;
  undefined1 auStack_1c8 [28];
  undefined4 **local_1ac;
  undefined4 **ppuStack_1a8;
  undefined4 **ppuStack_1a4;
  undefined4 **local_180;
  undefined4 **local_17c;
  undefined4 **local_178;
  undefined4 **local_174;
  undefined4 **local_170;
  undefined4 **local_16c;
  undefined4 **local_168;
  undefined4 **local_164;
  undefined4 **ppuStack_160;
  undefined4 **ppuStack_15c;
  undefined4 **ppuStack_158;
  undefined4 **local_154;
  undefined4 **local_150;
  undefined4 **ppuStack_14c;
  undefined4 **ppuStack_148;
  undefined4 **ppuStack_144;
  undefined4 **local_140;
  undefined4 **local_13c;
  undefined4 **local_138;
  undefined4 **local_134;
  undefined4 **local_130;
  undefined4 **ppuStack_12c;
  undefined4 **ppuStack_128;
  undefined4 **ppuStack_124;
  undefined4 **local_120;
  undefined4 **ppuStack_11c;
  undefined4 **ppuStack_118;
  undefined4 **ppuStack_114;
  undefined4 **local_110;
  undefined4 **local_10c;
  undefined4 **ppuStack_108;
  undefined4 **ppuStack_104;
  undefined4 **ppuStack_100;
  undefined4 **local_f8;
  undefined4 **local_f4;
  undefined4 **local_f0;
  undefined4 **local_ec;
  undefined4 **local_e8;
  undefined4 **local_e4;
  undefined4 **local_e0;
  undefined4 **local_dc;
  undefined4 **local_d8;
  undefined4 **local_d4;
  undefined4 **ppuStack_d0;
  undefined4 **local_cc;
  undefined4 **local_c8;
  undefined4 **local_c4;
  undefined4 **ppuStack_c0;
  undefined4 **ppuStack_bc;
  undefined4 **local_b8;
  undefined4 **local_b4;
  undefined4 **local_b0;
  undefined4 **local_ac;
  undefined4 **local_a8;
  undefined4 **local_a4;
  undefined4 **local_a0;
  undefined4 **ppuStack_9c;
  undefined4 **ppuStack_98;
  undefined4 **ppuStack_94;
  undefined4 ***local_90;
  undefined4 **local_8c;
  undefined4 **local_88;
  undefined4 **local_84;
  undefined4 **local_80;
  undefined4 **local_7c;
  undefined4 **ppuStack_78;
  undefined4 **local_74;
  undefined4 **ppuStack_70;
  undefined4 **local_6c;
  undefined4 **ppuStack_68;
  undefined4 **local_64;
  undefined4 **local_60;
  undefined4 **ppuStack_5c;
  undefined4 **ppuStack_58;
  undefined4 **ppuStack_54;
  undefined4 **local_50;
  undefined4 **local_4c;
  undefined4 **local_48;
  undefined4 **local_44;
  undefined4 **local_40;
  undefined4 **local_3c;
  undefined4 **local_38;
  undefined4 **local_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  
  ppuVar10 = (undefined4 **)(param_1 + 2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x46c)) {
  case 0:
    iVar3 = *(int *)(param_2 + 0x468);
    *(undefined1 *)(param_2 + 0x46d) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    FUN_00a2b4fc(*(undefined4 *)(param_2 + 0x88));
    iVar3 = *(int *)(iVar3 + 4);
    *(undefined1 *)(param_2 + 0x9f) = 0;
    *(int *)(param_2 + 0x98) = iVar3 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d7cc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d7cc);
  }
  FUN_0102d48c(&local_f8,param_2 + 0x90,param_3);
  ppuVar8 = local_f4;
  ppuVar7 = local_f8;
  if (local_f8 == (undefined4 **)0x80000002) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_010756fc;
  }
  FUN_01bed4e2(auStack_1c8,&local_f0,0x44);
  FUN_0102d354(param_2 + 0x90);
  if (ppuVar7 == (undefined4 **)&DAT_80000001) {
    local_40 = ppuVar8;
    local_8c = (undefined4 **)FUN_00667a08;
    local_90 = &local_40;
    FUN_00664898(&local_f8,&DAT_00531476,&local_90);
    local_90 = (undefined4 ***)local_f8;
    local_8c = local_f4;
    local_88 = local_f0;
    FUN_01a70fd4(&local_f8,0xd,&local_90);
    (*(code *)**local_40)();
    local_200 = local_e4;
    ppuStack_1fc = local_e0;
    ppuStack_1f8 = local_dc;
    ppuStack_1f4 = local_d8;
    local_1f0 = local_d4;
    local_1ec = ppuStack_d0;
    ppuStack_1e8 = local_cc;
    ppuStack_1e4 = local_c8;
    local_1e0 = local_c4;
    ppuStack_1dc = ppuStack_c0;
    ppuStack_1d8 = ppuStack_bc;
    ppuStack_1d4 = local_b8;
    ppuStack_1d0 = local_b4;
    local_244 = local_ac;
    local_24c = local_a4;
    if (local_f8 == (undefined4 **)&DAT_00000003 && local_f4 == (undefined4 **)0x0) {
      ppuVar5 = local_f0;
      ppuVar9 = local_e8;
      ppuVar11 = local_a8;
      local_17c = local_ec;
      goto LAB_0107556c;
    }
    local_220 = local_a0;
    ppuStack_21c = ppuStack_9c;
    ppuStack_218 = ppuStack_98;
    ppuStack_214 = ppuStack_94;
    local_130 = local_e4;
    ppuStack_12c = local_e0;
    ppuStack_128 = local_dc;
    ppuStack_124 = local_d8;
    local_120 = local_d4;
    ppuStack_11c = ppuStack_d0;
    ppuStack_118 = local_cc;
    ppuStack_114 = local_c8;
    local_110 = local_c4;
    local_10c = ppuStack_c0;
    ppuStack_108 = ppuStack_bc;
    ppuStack_104 = local_b8;
    ppuStack_100 = local_b4;
    FUN_00f9604c(param_2 + 0x48);
    local_25c = local_a8;
    ppuVar8 = local_f8;
    ppuVar9 = local_f4;
    local_e4 = local_ec;
    local_e0 = local_e8;
    local_e8 = local_f0;
    if (*(char *)(param_2 + 0x46d) == '\x01') {
      FUN_00f9604c(param_2);
      local_f4 = (undefined4 **)0x0;
      local_f8 = (undefined4 **)&DAT_00000003;
    }
    else {
      local_f4 = (undefined4 **)0x0;
      local_f8 = (undefined4 **)&DAT_00000003;
    }
  }
  else {
    local_f8 = ppuVar7;
    local_f4 = ppuVar8;
    FUN_01bed4e2(&local_f0,auStack_1c8,0x44);
    ppuVar8 = local_dc;
    ppuVar9 = ppuVar10;
    if (ppuVar7 == (undefined4 **)&DAT_80000000) {
      ppuVar11 = (undefined4 **)0x0;
      local_244 = (undefined4 **)&SUB_00000004;
      ppuVar5 = (undefined4 **)0x2;
      local_250 = (undefined4 **)0x0;
      local_a4 = extraout_r12;
    }
    else {
      FUN_0128ee18(&local_90,local_dc,local_d8);
      if (local_90 != (undefined4 ***)0x0) {
        local_244 = local_88;
        iVar3 = FUN_012920c0();
        lVar1 = (longlong)iVar3 * 0x15180 + ZEXT48(local_8c);
        uVar6 = (uint)lVar1;
        ppuVar7 = (undefined4 **)((int)((ulonglong)lVar1 >> 0x20) - ((uVar6 < 0x77934880) + 0xe));
        ppuVar9 = (undefined4 **)(uVar6 + 0x886cb780);
      }
      ppuVar5 = (undefined4 **)(uint)(local_90 != (undefined4 ***)0x0);
      puVar4 = (undefined4 *)((uint)&local_40 | 4);
      *puVar4 = local_f8;
      puVar4[1] = local_f4;
      puVar4[2] = local_f0;
      FUN_019bb7e0(local_e0,ppuVar8);
      FUN_019bb7e0(local_c8,local_c4);
      local_8c = (undefined4 **)0x0;
      local_80 = local_244;
      local_7c = local_40;
      ppuStack_78 = local_3c;
      local_74 = local_38;
      ppuStack_70 = local_34;
      puVar4 = (undefined4 *)((uint)auStack_1c8 | 4);
      local_6c = (undefined4 **)*puVar4;
      ppuStack_68 = (undefined4 **)puVar4[1];
      local_64 = (undefined4 **)puVar4[2];
      local_60 = local_1ac;
      ppuStack_5c = ppuStack_1a8;
      ppuStack_58 = ppuStack_1a4;
      local_48 = local_b8;
      local_4c = local_b4;
      ppuVar11 = local_b4 + (int)local_b0 * 9;
      local_50 = local_b4;
      ppuVar8 = local_b4;
      local_90 = (undefined4 ***)ppuVar5;
      local_88 = ppuVar9;
      local_84 = ppuVar7;
      local_44 = ppuVar11;
      if (local_b0 != (undefined4 **)0x0) {
        ppuVar12 = local_b4 + 7;
        iVar3 = (int)local_b0 * 0x24;
        ppuVar7 = local_b4;
        do {
          local_40 = (undefined4 **)ppuVar12[-7];
          local_3c = (undefined4 **)ppuVar12[-6];
          local_38 = (undefined4 **)ppuVar12[-5];
          local_34 = (undefined4 **)ppuVar12[-4];
          puStack_30 = ppuVar12[-3];
          puStack_2c = ppuVar12[-2];
          FUN_019bb7e0(ppuVar12[-1],*ppuVar12);
          ppuVar12 = ppuVar12 + 9;
          ppuVar8 = ppuVar7 + 6;
          iVar3 = iVar3 + -0x24;
          *ppuVar7 = local_40;
          ppuVar7[1] = local_3c;
          ppuVar7[2] = local_38;
          ppuVar7[3] = local_34;
          ppuVar7[4] = puStack_30;
          ppuVar7[5] = puStack_2c;
          ppuVar7 = ppuVar8;
        } while (iVar3 != 0);
        local_4c = ppuVar11;
      }
      ppuVar11 = (undefined4 **)(((uint)((int)ppuVar8 - (int)local_b4) >> 3) * -0x55555555);
      local_40 = local_b4;
      local_3c = ppuVar11;
      FUN_00950940(&local_50);
      ppuVar7 = (undefined4 **)((int)local_b8 * 0x24);
      local_250 = (undefined4 **)((uint)ppuVar7 / 0x18);
      if (local_b8 != (undefined4 **)0x0) {
        ppuVar8 = (undefined4 **)((int)local_250 * 0x18);
      }
      if (local_b8 != (undefined4 **)0x0 && ppuVar7 != ppuVar8) {
        if (&DAT_00000017 < ppuVar7) {
          local_244 = (undefined4 **)FUN_01298554(local_b4,ppuVar7,4,ppuVar8);
          if (local_244 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,ppuVar8);
          }
        }
        else {
          local_244 = (undefined4 **)&SUB_00000004;
          if (ppuVar7 != (undefined4 **)0x0) {
            thunk_FUN_01be4678(local_b4);
          }
        }
      }
      else {
        local_244 = local_b4;
      }
      FUN_00963210(&local_50);
      local_200 = local_84;
      ppuStack_1fc = local_80;
      ppuStack_1f8 = local_7c;
      ppuStack_1f4 = ppuStack_78;
      local_1f0 = local_74;
      local_1ec = ppuStack_70;
      ppuStack_1e8 = local_6c;
      ppuStack_1e4 = ppuStack_68;
      local_1e0 = local_64;
      ppuStack_1dc = local_60;
      ppuStack_1d8 = ppuStack_5c;
      ppuStack_1d4 = ppuStack_58;
      ppuStack_1d0 = ppuStack_54;
      local_a4 = extraout_r12_00;
    }
    local_17c = (undefined4 **)0x0;
    local_b0 = local_250;
LAB_0107556c:
    local_174 = local_200;
    local_170 = ppuStack_1fc;
    local_16c = ppuStack_1f8;
    local_168 = ppuStack_1f4;
    local_164 = local_1f0;
    ppuStack_160 = local_1ec;
    ppuStack_15c = ppuStack_1e8;
    ppuStack_158 = ppuStack_1e4;
    local_154 = local_1e0;
    local_150 = ppuStack_1dc;
    ppuStack_14c = ppuStack_1d8;
    ppuStack_148 = ppuStack_1d4;
    ppuStack_144 = ppuStack_1d0;
    local_13c = local_244;
    local_180 = ppuVar5;
    local_178 = ppuVar9;
    local_140 = local_b0;
    local_138 = ppuVar11;
    local_134 = local_a4;
    FUN_0160aaa4(&local_f8,0);
    ppuVar7 = local_170;
    local_10c = local_180;
    ppuStack_108 = local_17c;
    ppuStack_104 = local_178;
    ppuStack_100 = local_174;
    local_244 = local_16c;
    local_25c = local_168;
    local_24c = local_164;
    local_220 = local_1ec;
    ppuStack_21c = ppuStack_1e8;
    ppuStack_218 = ppuStack_1e4;
    ppuStack_214 = local_1e0;
    local_240 = local_150;
    ppuStack_23c = ppuStack_14c;
    ppuStack_238 = ppuStack_148;
    ppuStack_234 = ppuStack_144;
    local_230 = local_140;
    ppuStack_22c = local_13c;
    ppuStack_228 = local_138;
    ppuStack_224 = local_134;
    local_130 = local_dc;
    ppuStack_12c = local_d8;
    ppuStack_128 = local_d4;
    ppuStack_124 = ppuStack_d0;
    local_120 = local_cc;
    ppuStack_11c = local_c8;
    ppuStack_118 = local_c4;
    ppuStack_114 = ppuStack_c0;
    local_110 = ppuStack_bc;
    FUN_00f9604c(param_2 + 0x48);
    ppuVar8 = local_f0;
    ppuVar9 = local_ec;
    local_b0 = ppuVar7;
  }
  *param_1 = local_f8;
  param_1[6] = local_e0;
  *ppuVar10 = ppuVar8;
  param_1[3] = ppuVar9;
  param_1[4] = local_e8;
  param_1[5] = local_e4;
  param_1[1] = local_f4;
  param_1[7] = local_130;
  param_1[8] = ppuStack_12c;
  param_1[9] = ppuStack_128;
  param_1[10] = ppuStack_124;
  param_1[0xb] = local_120;
  param_1[0xc] = ppuStack_11c;
  param_1[0xd] = ppuStack_118;
  param_1[0xe] = ppuStack_114;
  param_1[0xf] = local_110;
  param_1[0x10] = local_10c;
  param_1[0x11] = ppuStack_108;
  param_1[0x12] = ppuStack_104;
  param_1[0x13] = ppuStack_100;
  param_1[0x15] = local_244;
  param_1[0x17] = local_24c;
  param_1[0x14] = local_b0;
  param_1[0x16] = local_25c;
  param_1[0x18] = local_220;
  param_1[0x19] = ppuStack_21c;
  param_1[0x1a] = ppuStack_218;
  param_1[0x1b] = ppuStack_214;
  param_1[0x1c] = local_240;
  param_1[0x1d] = ppuStack_23c;
  param_1[0x1e] = ppuStack_238;
  param_1[0x1f] = ppuStack_234;
  param_1[0x20] = local_230;
  param_1[0x21] = ppuStack_22c;
  param_1[0x22] = ppuStack_228;
  param_1[0x23] = ppuStack_224;
  param_1[0x24] = 0;
  uVar2 = 1;
LAB_010756fc:
  *(undefined1 *)(param_2 + 0x46c) = uVar2;
  return;
}

