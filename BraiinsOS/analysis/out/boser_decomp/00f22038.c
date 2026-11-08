// FUN_00f22038 @ 00f22038 size=13648 calls_out=28 calls_in=0
// strings: hot_temperature | hot_temperature | target_temperature | pause_mode | hot_temperature | min_fan_speed

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff00 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f22038(undefined8 *******param_1,undefined4 *param_2)

{
  char cVar1;
  undefined3 uVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  int iVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******extraout_r1;
  undefined8 *******extraout_r2;
  undefined8 *******extraout_r2_00;
  undefined8 *******extraout_r2_01;
  undefined8 *******extraout_r2_02;
  undefined8 *******extraout_r2_03;
  undefined8 *******extraout_r3;
  undefined8 *******extraout_r3_00;
  undefined8 *******pppppppuVar8;
  undefined4 uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  uint uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******extraout_r12;
  undefined8 unaff_d8;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 unaff_d9;
  undefined8 uVar21;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 *******local_224;
  undefined8 *******local_21c;
  undefined8 *******local_218;
  undefined8 *******local_214;
  undefined8 *******local_210;
  undefined8 *******local_20c;
  undefined8 *******local_208;
  undefined8 *******local_204;
  undefined8 *******local_200;
  undefined8 *******local_1f8;
  undefined8 *******local_1f4;
  undefined8 *******local_1f0;
  undefined8 *******local_1ec;
  undefined8 *******local_1e8;
  undefined8 *******local_1e4;
  undefined8 *******local_1e0;
  undefined8 *******local_1dc;
  undefined8 *******local_1d8;
  undefined8 *******local_1d4;
  undefined8 *******local_1d0;
  undefined8 *******local_1cc;
  undefined8 *******local_1c8;
  undefined8 *******local_1c4;
  undefined8 *******local_1c0;
  undefined8 *******local_1bc;
  undefined8 *******local_1b4;
  undefined8 *******local_1b0;
  undefined8 *******local_1a0;
  undefined8 *******local_19c;
  undefined8 *******local_198;
  undefined8 *******local_194;
  undefined8 *******pppppppuStack_190;
  undefined8 local_188;
  undefined8 *******pppppppuStack_180;
  undefined8 local_178;
  undefined8 *******local_170;
  undefined8 *******local_16c;
  undefined8 local_168;
  undefined8 *******local_160;
  undefined8 *******local_15c;
  undefined8 *******local_158;
  undefined4 uStack_154;
  undefined8 *******local_150;
  undefined8 *******local_14c;
  undefined8 *******local_140;
  undefined8 *******local_13c;
  undefined8 *******local_138;
  undefined8 *******pppppppuStack_134;
  undefined8 *******local_130;
  undefined8 *******local_12c;
  undefined8 *******local_128;
  undefined8 *******local_124;
  undefined8 *******local_120;
  undefined8 *******local_11c;
  undefined8 *******local_118;
  undefined8 *******local_114;
  undefined8 *******local_110 [2];
  undefined4 local_108;
  undefined8 *******local_104;
  undefined8 local_100;
  undefined8 *******local_f8;
  undefined8 *******local_f4;
  undefined8 *******local_e8;
  undefined8 *******local_e4;
  undefined8 *******local_d8;
  undefined8 *******local_d4;
  undefined8 *******local_d0;
  undefined8 ******ppppppuStack_cc;
  undefined4 local_c8;
  undefined8 *******local_c4;
  undefined8 *******local_c0;
  undefined8 *******local_bc;
  undefined8 *******local_b8;
  undefined8 *******local_b4;
  undefined8 *******local_b0;
  undefined8 *******local_ac;
  undefined4 local_a8;
  undefined8 *******local_a4;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******local_98;
  undefined8 *******local_94;
  undefined8 ******local_8c;
  undefined8 *******local_88;
  undefined8 *******local_84;
  undefined8 *******local_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined8 *******local_74;
  undefined8 *******local_70;
  undefined8 *******local_6c;
  undefined8 *******pppppppuStack_68;
  undefined8 *******local_64;
  undefined8 ******local_60;
  undefined8 *******pppppppuStack_5c;
  undefined8 *******local_58;
  undefined8 *******local_54;
  undefined8 *******pppppppuStack_50;
  
  pppppppuVar15 = (undefined8 *******)*param_2;
  pppppppuVar17 = (undefined8 *******)param_2[1];
  pppppppuVar4 = (undefined8 *******)param_2[2];
  local_108 = (undefined8 *******)&DAT_80000000;
  ppppppuVar7 = pppppppuVar15[5];
  if (ppppppuVar7 < pppppppuVar15[4]) {
    local_1b0 = (undefined8 *******)&local_108;
    local_1b4 = (undefined8 *******)&local_f8;
    pppppppuVar11 = param_1 + 2;
    pppppppuVar16 = (undefined8 *******)&DAT_00800013;
    do {
      uVar12 = (uint)*(byte *)((int)pppppppuVar15[3] + (int)ppppppuVar7);
      if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar12 != 0x22) {
          if (uVar12 == 0x7d) {
            local_170 = (undefined8 *******)0xa;
            ppppppuVar7 = (undefined8 ******)FUN_012c6b30(pppppppuVar15,&local_170);
          }
          else {
            local_170 = (undefined8 *******)0x11;
            ppppppuVar7 = (undefined8 ******)FUN_012c6b30(pppppppuVar15,&local_170);
          }
          goto LAB_00f220d0;
        }
        pppppppuVar15[2] = (undefined8 ******)0x0;
        pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
        FUN_01968828(&local_170,pppppppuVar15 + 3,pppppppuVar15);
        if (local_170 == (undefined8 *******)0x2) {
          local_74 = local_16c;
          local_78 = CONCAT31(local_78._1_3_,1);
        }
        else {
          FUN_00e61130(&local_78,&local_108,local_16c,(undefined8 *******)local_168);
        }
        if ((char)local_78 != '\0') {
          ppppppuVar7 = (undefined8 ******)FUN_0127dee8(local_74,pppppppuVar15);
          goto LAB_00f220d0;
        }
        ppppppuVar14 = (undefined8 ******)(local_78 >> 8 & 0xff);
        ppppppuVar7 = (undefined8 ******)FUN_0167459c(pppppppuVar15);
        if (ppppppuVar7 != (undefined8 ******)0x0) goto LAB_00f220d4;
        local_8c = (undefined8 ******)0x4;
        if (local_108 == (undefined8 *******)&DAT_80000000) {
          local_8c = (undefined8 ******)0x8;
        }
        if (local_8c == (undefined8 ******)0x9) goto LAB_00f220f8;
        local_160._1_3_ = (undefined3)((uint)pppppppuStack_68 >> 8);
        uVar2 = local_160._1_3_;
        uVar20 = unaff_d8;
        pppppppuVar8 = local_70;
        local_19c = pppppppuVar4;
        local_88 = pppppppuVar17;
        local_64 = pppppppuVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(ppppppuVar14) {
        case (undefined8 ******)0x0:
          local_16c = &local_8c;
          local_78 = 7;
          local_84 = local_108;
          local_80 = local_104;
          uStack_7c = (undefined8 *******)local_100;
          pppppppuVar8 = &local_60;
          local_170 = (undefined8 *******)&DAT_00000007;
          local_168 = CONCAT44(local_6c,local_70);
          local_160 = pppppppuStack_68;
          local_60 = (undefined8 ******)0x7;
          local_58 = local_70;
          local_54 = local_6c;
          pppppppuStack_50 = pppppppuStack_68;
          ppppppuVar7 = pppppppuVar15[5];
          pppppppuVar17 = local_6c;
          uVar20 = unaff_d9;
          uVar18 = unaff_d8;
          local_1a0 = pppppppuVar8;
          local_74 = local_16c;
          pppppppuStack_5c = local_16c;
          if (pppppppuVar15[4] <= ppppppuVar7) goto LAB_00f2227c;
          goto LAB_00f22254;
        case (undefined8 ******)0x1:
          local_16c = &local_8c;
          local_78 = 7;
          local_84 = local_108;
          local_80 = local_104;
          uStack_7c = (undefined8 *******)local_100;
          local_1a0 = &local_60;
          local_170 = (undefined8 *******)&DAT_00000007;
          local_168 = CONCAT44(local_6c,local_70);
          local_160 = pppppppuStack_68;
          local_60 = (undefined8 ******)0x7;
          local_58 = local_70;
          local_54 = local_6c;
          pppppppuStack_50 = pppppppuStack_68;
          ppppppuVar7 = pppppppuVar15[5];
          pppppppuVar8 = local_6c;
          uVar20 = unaff_d10;
          uVar18 = unaff_d9;
          uVar19 = unaff_d8;
          pppppppuVar17 = pppppppuVar4;
          local_74 = local_16c;
          pppppppuStack_5c = local_16c;
          if (pppppppuVar15[4] <= ppppppuVar7) goto LAB_00f22688;
          goto LAB_00f22660;
        case (undefined8 ******)0x2:
          local_16c = &local_8c;
          local_78 = 7;
          local_84 = local_108;
          local_80 = local_104;
          uStack_7c = (undefined8 *******)local_100;
          local_198 = &local_60;
          local_170 = (undefined8 *******)&DAT_00000007;
          local_168 = CONCAT44(local_6c,local_70);
          local_160 = pppppppuStack_68;
          local_60 = (undefined8 ******)0x7;
          local_58 = local_70;
          local_54 = local_6c;
          pppppppuStack_50 = pppppppuStack_68;
          ppppppuVar7 = pppppppuVar15[5];
          pppppppuVar5 = pppppppuVar16;
          local_74 = local_16c;
          pppppppuStack_5c = local_16c;
          if (pppppppuVar15[4] <= ppppppuVar7) goto LAB_00f22384;
          goto LAB_00f2235c;
        case (undefined8 ******)0x3:
          local_16c = &local_8c;
          local_78 = 7;
          local_84 = local_108;
          local_80 = local_104;
          uStack_7c = (undefined8 *******)local_100;
          local_198 = &local_60;
          local_170 = (undefined8 *******)&DAT_00000007;
          local_168 = CONCAT44(local_6c,local_70);
          local_160 = pppppppuStack_68;
          local_60 = (undefined8 ******)0x7;
          local_58 = local_70;
          local_54 = local_6c;
          pppppppuStack_50 = pppppppuStack_68;
          ppppppuVar7 = pppppppuVar15[5];
          pppppppuVar5 = pppppppuVar16;
          local_74 = local_16c;
          pppppppuStack_5c = local_16c;
          if (pppppppuVar15[4] <= ppppppuVar7) goto LAB_00f22518;
        }
        goto LAB_00f224f0;
      }
      ppppppuVar7 = (undefined8 ******)((int)ppppppuVar7 + 1);
      pppppppuVar15[5] = ppppppuVar7;
    } while (pppppppuVar15[4] != ppppppuVar7);
  }
  local_170 = (undefined8 *******)0x3;
  ppppppuVar7 = (undefined8 ******)FUN_012c6b30(pppppppuVar15,&local_170);
LAB_00f220d0:
LAB_00f220d4:
  ppppppuVar14 = ppppppuVar7;
  local_170 = (undefined8 *******)ppppppuVar14;
  FUN_0196bf0c(pppppppuVar4,pppppppuVar17);
  if (local_108 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_108,local_104);
  }
LAB_00f220f8:
  param_1[1] = (undefined8 ******)0x0;
  param_1[2] = ppppppuVar14;
  *param_1 = (undefined8 ******)0x4;
  return;
  while( true ) {
    ppppppuVar7 = (undefined8 ******)((int)ppppppuVar7 + 1);
    pppppppuVar15[5] = ppppppuVar7;
    if (pppppppuVar15[4] == ppppppuVar7) break;
LAB_00f224f0:
    uVar12 = (uint)*(byte *)((int)pppppppuVar15[3] + (int)ppppppuVar7);
    pppppppuVar8 = (undefined8 *******)(uVar12 - 9);
    if ((&DAT_00000017 < pppppppuVar8) || ((1 << ((uint)pppppppuVar8 & 0xff) & 0x800013U) == 0)) {
      if (uVar12 != 0x5b) {
        if (uVar12 != 0x7b) {
          local_194 = pppppppuVar4;
          pppppppuVar16 = (undefined8 *******)FUN_012c7788(pppppppuVar15,&local_198,&DAT_01c1cf78);
          local_1d4 = pppppppuVar17;
          goto LAB_00f251c4;
        }
        cVar1 = *(char *)(pppppppuVar15 + 7);
        pppppppuVar16 = (undefined8 *******)&local_170;
        *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          local_170 = (undefined8 *******)&DAT_00000018;
          local_194 = pppppppuVar4;
          pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
          local_1d4 = pppppppuVar17;
          goto LAB_00f2252c;
        }
        pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
        local_160 = (undefined8 *******)CONCAT31(uVar2,1);
        _local_158 = CONCAT44(uStack_154,pppppppuVar4);
        local_170 = (undefined8 *******)&DAT_80000000;
        local_168 = CONCAT44(pppppppuVar15,local_70);
        local_1bc = (undefined8 *******)0x0;
        local_1d0 = (undefined8 *******)0x2;
        local_1b0 = (undefined8 *******)0x0;
        pppppppuVar10 = (undefined8 *******)0x0;
        local_1e8 = (undefined8 *******)0x49e319;
        local_1dc = (undefined8 *******)0x0;
        local_1e0 = (undefined8 *******)0x2;
        local_1e4 = (undefined8 *******)0x0;
        local_1d4 = (undefined8 *******)0x2;
        local_1d8 = (undefined8 *******)0x2;
        local_194 = pppppppuVar4;
        local_15c = local_198;
        goto LAB_00f22d7c;
      }
      cVar1 = *(char *)(pppppppuVar15 + 7);
      *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_170 = (undefined8 *******)&DAT_00000018;
        local_194 = pppppppuVar4;
        pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
        local_1d4 = pppppppuVar17;
        goto LAB_00f2252c;
      }
      pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
      local_160 = (undefined8 *******)CONCAT31(uVar2,1);
      local_168 = CONCAT44(pppppppuVar15,pppppppuVar4);
      local_170 = (undefined8 *******)0x0;
      local_194 = pppppppuVar4;
      local_16c = local_198;
      pppppppuStack_5c = local_74;
      FUN_00e6331c(&local_108,&local_170);
      pppppppuVar10 = local_104;
      pppppppuVar13 = local_108;
      pppppppuVar5 = (undefined8 *******)&DAT_00000052;
      pppppppuVar8 = param_1;
      if (local_108 == (undefined8 *******)&DAT_00000003 && local_104 == (undefined8 *******)0x0) {
LAB_00f23cd8:
        local_1b0 = pppppppuVar5;
        local_a8 = (undefined8 *******)local_100;
        pppppppuVar5 = pppppppuVar8;
        uVar20 = unaff_d8;
LAB_00f23cdc:
        local_170 = local_a8;
        FUN_0196bf0c(pppppppuVar4,&local_60);
        pppppppuVar10 = (undefined8 *******)0x0;
        pppppppuVar13 = (undefined8 *******)0x2;
        local_1bc = pppppppuVar16;
        local_1d4 = pppppppuVar17;
      }
      else {
        if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0) {
          uVar9 = 0;
          pppppppuVar5 = (undefined8 *******)&DAT_00000052;
LAB_00f25358:
          local_a8 = (undefined8 *******)FUN_012cc2c0(uVar9,&DAT_01c167b4,&DAT_01d064b8);
          local_1b0 = pppppppuVar5;
          pppppppuVar5 = pppppppuVar8;
          uVar20 = unaff_d8;
          goto LAB_00f23cdc;
        }
        pppppppuVar3 = (undefined8 *******)local_100;
        pppppppuVar16 = local_100._4_4_;
        FUN_00e6331c(&local_108,&local_170);
        uVar20 = local_100;
        local_1b0 = local_104;
        pppppppuVar5 = local_108;
        if (local_108 == (undefined8 *******)&DAT_00000003 && local_104 == (undefined8 *******)0x0)
        goto LAB_00f23cd8;
        if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0) {
          uVar9 = 1;
          goto LAB_00f25358;
        }
        FUN_00e6331c(&local_108,&local_170);
        pppppppuVar8 = local_1b0;
        unaff_d8 = uVar20;
        if (local_108 == (undefined8 *******)&DAT_00000003 && local_104 == (undefined8 *******)0x0)
        goto LAB_00f23cd8;
        if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0) {
          uVar9 = 2;
          pppppppuVar17 = local_108;
          goto LAB_00f25358;
        }
        local_a8 = pppppppuVar3;
        local_a4 = pppppppuVar16;
        local_1bc = local_104;
        local_1d4 = local_108;
        unaff_d9 = local_100;
      }
      pppppppuVar8 = local_a4;
      pppppppuVar16 = local_a8;
      *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
      local_100 = CONCAT44(local_a4,local_a8);
      local_108 = pppppppuVar13;
      local_104 = pppppppuVar10;
      local_f4 = local_1b0;
      local_e8 = local_1d4;
      local_e4 = local_1bc;
      local_140 = (undefined8 *******)FUN_014d9568(pppppppuVar15);
      local_168 = CONCAT44(pppppppuVar8,pppppppuVar16);
      local_170 = pppppppuVar13;
      local_16c = pppppppuVar10;
      local_160 = pppppppuVar5;
      local_15c = local_1b0;
      local_150 = local_1d4;
      local_14c = local_1bc;
      if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
        pppppppuVar10 = (undefined8 *******)0x0;
        pppppppuVar13 = (undefined8 *******)0x2;
        if (local_140 != (undefined8 *******)0x0) {
          FUN_00f80260(&local_140);
        }
      }
      else if (local_140 != (undefined8 *******)0x0) {
        pppppppuVar10 = (undefined8 *******)0x0;
        pppppppuVar13 = (undefined8 *******)0x2;
        pppppppuVar16 = local_140;
      }
      goto LAB_00f24bc4;
    }
  }
LAB_00f22518:
  local_170 = (undefined8 *******)&DAT_00000005;
  local_194 = pppppppuVar4;
  pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
  local_1d4 = pppppppuVar17;
LAB_00f2252c:
  FUN_0196bf0c(pppppppuVar4,&local_60);
  pppppppuVar10 = (undefined8 *******)0x0;
  pppppppuVar13 = (undefined8 *******)0x2;
  goto LAB_00f22544;
LAB_00f22d7c:
  pppppppuVar17 = pppppppuVar16;
LAB_00f22d80:
  pppppppuVar8 = local_15c;
  pppppppuVar5 = local_158;
  FUN_01278730(&local_108,(undefined8 *******)((int)&local_168 + 4));
  if ((char)local_108 == '\x01') {
    pppppppuVar16 = pppppppuVar17;
    pppppppuVar13 = local_104;
LAB_00f24a58:
    pppppppuVar17 = local_170;
    local_170 = (undefined8 *******)&DAT_80000000;
    local_108 = (undefined8 *******)&DAT_00000008;
    if (pppppppuVar17 != (undefined8 *******)&DAT_80000000) {
      local_108 = (undefined8 *******)0x2;
      local_100 = CONCAT44(local_16c,pppppppuVar17);
      local_f8 = (undefined8 *******)local_168;
    }
    local_104 = pppppppuVar8;
    FUN_0196bf0c(pppppppuVar5,&local_108);
    if (pppppppuVar17 != (undefined8 *******)&DAT_80000000) {
      FUN_019bb7e0(pppppppuVar17,local_100._4_4_);
    }
    goto LAB_00f24ab0;
  }
  if (local_108._1_1_ != '\x01') {
    if (local_1d4 == (undefined8 *******)0x2 && local_1bc == (undefined8 *******)0x0) {
      local_1d4 = (undefined8 *******)0x0;
      local_1bc = (undefined8 *******)0x0;
    }
    if (local_1d0 == (undefined8 *******)0x2 && local_1b0 == (undefined8 *******)0x0) {
      local_1d0 = (undefined8 *******)0x0;
      local_1b0 = (undefined8 *******)0x0;
    }
    if (local_1d8 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
      local_1d8 = (undefined8 *******)0x0;
      pppppppuVar10 = (undefined8 *******)0x0;
    }
    if (local_170 != (undefined8 *******)&DAT_80000000) {
      FUN_019bb7e0(local_170,local_16c);
    }
    local_188 = unaff_d10;
    goto LAB_00f24ae0;
  }
  *(undefined4 *)((int)local_168._4_4_ + 8) = 0;
  *(int *)((int)local_168._4_4_ + 0x14) = *(int *)((int)local_168._4_4_ + 0x14) + 1;
  FUN_01968828(&local_108,(int)local_168._4_4_ + 0xc);
  pppppppuVar16 = local_104;
  if (local_108 == (undefined8 *******)0x2) {
    local_a4 = local_104;
LAB_00f24a54:
    pppppppuVar16 = pppppppuVar17;
    pppppppuVar13 = local_a4;
    goto LAB_00f24a58;
  }
  pppppppuVar17 = (undefined8 *******)local_100;
  uVar9 = 0;
  if (((uint)local_108 & 1) == 0) {
    pppppppuVar13 = local_1c8;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f25610;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar13 = (undefined8 *******)&DAT_00000001;
      local_1c0 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar13 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar13 == (undefined8 *******)0x0) goto LAB_00f2560c;
      local_1c0 = pppppppuVar17;
    }
    FUN_01bed4e2(pppppppuVar13,pppppppuVar16,pppppppuVar17);
    local_1c8 = pppppppuVar13;
  }
  else {
    pppppppuVar13 = local_1c4;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f25610;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar13 = (undefined8 *******)&DAT_00000001;
      local_1c0 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar13 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar13 == (undefined8 *******)0x0) {
LAB_00f2560c:
        uVar9 = 1;
        pppppppuVar13 = pppppppuVar17;
LAB_00f25610:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,pppppppuVar13);
      }
      local_1c0 = pppppppuVar17;
    }
    FUN_01bed4e2(pppppppuVar13,pppppppuVar16,pppppppuVar17);
    local_1c4 = pppppppuVar13;
  }
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_170 = local_1c0;
  local_168 = CONCAT44(local_168._4_4_,pppppppuVar17);
  local_16c = pppppppuVar13;
  FUN_00ef0b28(&local_a8,pppppppuVar16,pppppppuVar17);
  pppppppuVar17 = pppppppuVar16;
  if ((char)local_a8 == '\x01') goto LAB_00f24a54;
  if (local_a8._1_1_ == '\x03') {
    pppppppuVar13 = (undefined8 *******)FUN_00e620c0(&local_170);
    if (pppppppuVar13 != (undefined8 *******)0x0) goto LAB_00f24ab0;
    goto LAB_00f22d80;
  }
  if (local_a8._1_1_ == '\0') {
    if (local_1e0 != (undefined8 *******)0x2 || local_1e4 != (undefined8 *******)0x0) {
      local_a4 = (undefined8 *******)&DAT_0000000f;
      goto LAB_00f254d0;
    }
    FUN_00e61fbc(&local_108,&local_170);
    local_1e0 = local_108;
    local_1e4 = local_104;
    if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
    goto LAB_00f25144;
    local_1d8 = local_108;
    pppppppuVar10 = local_104;
    unaff_d10 = local_100;
    goto LAB_00f22d80;
  }
  if (local_a8._1_1_ != '\x01') {
    if (local_1d4 != (undefined8 *******)0x2 || local_1bc != (undefined8 *******)0x0) {
      local_a4 = (undefined8 *******)&DAT_00000012;
      local_1e8 = (undefined8 *******)0x49e33d;
LAB_00f254d0:
      local_a8 = local_1e8;
      local_108 = (undefined8 *******)&local_a8;
      local_104 = (undefined8 *******)&DAT_0132b6a0;
      pppppppuVar13 = (undefined8 *******)FUN_019676ac(&DAT_005ab34f,&local_108);
      goto LAB_00f24ab0;
    }
    FUN_00e61fbc(&local_108,&local_170);
    local_1d4 = local_108;
    if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
    goto LAB_00f25144;
    local_1bc = local_104;
    unaff_d9 = local_100;
    goto LAB_00f22d7c;
  }
  if (local_1d0 != (undefined8 *******)0x2 || local_1dc != (undefined8 *******)0x0) {
    local_a4 = (undefined8 *******)&DAT_00000015;
    local_1e8 = (undefined8 *******)0x49e328;
    goto LAB_00f254d0;
  }
  FUN_00e61fbc(&local_108,&local_170);
  local_1d0 = local_108;
  local_1dc = local_104;
  if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
  goto LAB_00f25144;
  local_1b0 = local_104;
  unaff_d8 = local_100;
  goto LAB_00f22d7c;
LAB_00f25144:
  pppppppuVar13 = (undefined8 *******)local_100;
LAB_00f24ab0:
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_170 = pppppppuVar13;
  FUN_0196bf0c(pppppppuVar4,&local_60);
  local_188 = CONCAT44(local_188._4_4_,pppppppuVar13);
  pppppppuVar10 = (undefined8 *******)0x0;
  local_1d8 = (undefined8 *******)0x2;
  local_1d4 = pppppppuVar16;
  local_1d0 = pppppppuVar5;
  local_1bc = (undefined8 *******)((int)&local_168 + 4);
LAB_00f24ae0:
  uVar20 = local_188;
  *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
  local_f4 = local_1b0;
  local_e4 = local_1bc;
  local_108 = local_1d8;
  local_104 = pppppppuVar10;
  local_100 = local_188;
  local_f8 = local_1d0;
  local_e8 = local_1d4;
  local_140 = (undefined8 *******)FUN_012c7b64(pppppppuVar15);
  pppppppuVar8 = (undefined8 *******)((ulonglong)uVar20 >> 0x20);
  pppppppuVar16 = (undefined8 *******)uVar20;
  local_15c = local_1b0;
  local_14c = local_1bc;
  local_170 = local_1d8;
  local_16c = pppppppuVar10;
  local_168 = uVar20;
  local_160 = local_1d0;
  local_150 = local_1d4;
  if (local_1d8 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
    pppppppuVar10 = (undefined8 *******)0x0;
    pppppppuVar13 = (undefined8 *******)0x2;
    pppppppuVar5 = local_1bc;
    if (local_140 != (undefined8 *******)0x0) {
      FUN_00f80260(&local_140);
      pppppppuVar8 = extraout_r2_03;
    }
  }
  else {
    pppppppuVar13 = local_1d8;
    pppppppuVar5 = local_1d0;
    if (local_140 != (undefined8 *******)0x0) {
      pppppppuVar10 = (undefined8 *******)0x0;
      pppppppuVar13 = (undefined8 *******)0x2;
      pppppppuVar16 = local_140;
    }
  }
  uVar20 = unaff_d8;
LAB_00f24bc4:
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
LAB_00f251c4:
    pppppppuVar16 = (undefined8 *******)FUN_0127dee8(pppppppuVar16,pppppppuVar15);
    goto LAB_00f2252c;
  }
LAB_00f22544:
  if (local_60 == (undefined8 ******)0x4 || local_60 == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_58,local_54);
  }
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
    FUN_0196bf0c(pppppppuVar4,&local_78);
    pppppppuVar10 = (undefined8 *******)0x0;
    pppppppuVar13 = (undefined8 *******)0x2;
  }
  if (local_78 == 4 || local_78 == 2) {
    FUN_019bb7e0(local_70,local_6c);
  }
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
    local_170 = pppppppuVar16;
    FUN_0196bf0c(pppppppuVar4,&local_8c);
    pppppppuVar10 = (undefined8 *******)0x0;
    pppppppuVar13 = (undefined8 *******)0x2;
  }
  if (local_8c == (undefined8 ******)0x4 || local_8c == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_84,local_80);
  }
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0)
  goto LAB_00f225dc;
  param_1[4] = (undefined8 ******)pppppppuVar16;
  param_1[6] = (undefined8 ******)pppppppuVar5;
  param_1[7] = (undefined8 ******)local_1b0;
  *pppppppuVar11 = (undefined8 ******)pppppppuVar13;
  param_1[10] = (undefined8 ******)local_1d4;
  param_1[0xb] = (undefined8 ******)local_1bc;
  param_1[3] = (undefined8 ******)pppppppuVar10;
  ppppppuVar7 = (undefined8 ******)0x3;
  goto LAB_00f22724;
  while( true ) {
    ppppppuVar7 = (undefined8 ******)((int)ppppppuVar7 + 1);
    pppppppuVar15[5] = ppppppuVar7;
    if (pppppppuVar15[4] == ppppppuVar7) break;
LAB_00f2235c:
    uVar12 = (uint)*(byte *)((int)pppppppuVar15[3] + (int)ppppppuVar7);
    pppppppuVar8 = (undefined8 *******)(uVar12 - 9);
    if ((&DAT_00000017 < pppppppuVar8) || ((1 << ((uint)pppppppuVar8 & 0xff) & 0x800013U) == 0)) {
      if (uVar12 != 0x5b) {
        if (uVar12 != 0x7b) {
          local_194 = pppppppuVar4;
          pppppppuVar16 = (undefined8 *******)FUN_012c7788(pppppppuVar15,&local_198,&DAT_01c1cef8);
          local_1d4 = pppppppuVar17;
          goto LAB_00f25198;
        }
        cVar1 = *(char *)(pppppppuVar15 + 7);
        pppppppuVar16 = (undefined8 *******)&local_170;
        *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          local_170 = (undefined8 *******)&DAT_00000018;
          local_194 = pppppppuVar4;
          pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
          local_1d4 = pppppppuVar17;
          goto LAB_00f22398;
        }
        pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
        local_160 = (undefined8 *******)CONCAT31(uVar2,1);
        _local_158 = CONCAT44(uStack_154,pppppppuVar4);
        local_170 = (undefined8 *******)&DAT_80000000;
        local_168 = CONCAT44(pppppppuVar15,local_70);
        local_1bc = (undefined8 *******)0x0;
        local_1d0 = (undefined8 *******)0x2;
        local_1b0 = (undefined8 *******)0x0;
        pppppppuVar10 = (undefined8 *******)0x0;
        local_1e8 = (undefined8 *******)0x49e319;
        local_1dc = (undefined8 *******)0x0;
        local_1e0 = (undefined8 *******)0x2;
        local_1e4 = (undefined8 *******)0x0;
        local_1d4 = (undefined8 *******)0x2;
        local_1d8 = (undefined8 *******)0x2;
        local_194 = pppppppuVar4;
        local_15c = local_198;
        goto LAB_00f22a3c;
      }
      cVar1 = *(char *)(pppppppuVar15 + 7);
      *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_170 = (undefined8 *******)&DAT_00000018;
        local_194 = pppppppuVar4;
        pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
        local_1d4 = pppppppuVar17;
        goto LAB_00f22398;
      }
      pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
      local_160 = (undefined8 *******)CONCAT31(uVar2,1);
      local_168 = CONCAT44(pppppppuVar15,pppppppuVar4);
      local_170 = (undefined8 *******)0x0;
      local_194 = pppppppuVar4;
      local_16c = local_198;
      pppppppuStack_5c = local_74;
      FUN_00e6331c(&local_108,&local_170);
      pppppppuVar10 = local_104;
      pppppppuVar13 = local_108;
      pppppppuVar5 = (undefined8 *******)&DAT_00000052;
      pppppppuVar8 = param_1;
      if (local_108 == (undefined8 *******)&DAT_00000003 && local_104 == (undefined8 *******)0x0) {
LAB_00f23b28:
        local_1b0 = pppppppuVar5;
        local_a8 = (undefined8 *******)local_100;
        pppppppuVar5 = pppppppuVar8;
        uVar20 = unaff_d8;
LAB_00f23b2c:
        local_170 = local_a8;
        FUN_0196bf0c(pppppppuVar4,&local_60);
        pppppppuVar10 = (undefined8 *******)0x0;
        pppppppuVar13 = (undefined8 *******)0x2;
        local_1bc = pppppppuVar16;
        local_1d4 = pppppppuVar17;
      }
      else {
        if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0) {
          uVar9 = 0;
          pppppppuVar5 = (undefined8 *******)&DAT_00000052;
LAB_00f25338:
          local_a8 = (undefined8 *******)FUN_012cc2c0(uVar9,&DAT_01c167ec,&DAT_01d064b8);
          local_1b0 = pppppppuVar5;
          pppppppuVar5 = pppppppuVar8;
          uVar20 = unaff_d8;
          goto LAB_00f23b2c;
        }
        pppppppuVar3 = (undefined8 *******)local_100;
        pppppppuVar16 = local_100._4_4_;
        FUN_00e6331c(&local_108,&local_170);
        uVar20 = local_100;
        local_1b0 = local_104;
        pppppppuVar5 = local_108;
        if (local_108 == (undefined8 *******)&DAT_00000003 && local_104 == (undefined8 *******)0x0)
        goto LAB_00f23b28;
        if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0) {
          uVar9 = 1;
          goto LAB_00f25338;
        }
        FUN_00e6331c(&local_108,&local_170);
        pppppppuVar8 = local_1b0;
        unaff_d8 = uVar20;
        if (local_108 == (undefined8 *******)&DAT_00000003 && local_104 == (undefined8 *******)0x0)
        goto LAB_00f23b28;
        if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0) {
          uVar9 = 2;
          pppppppuVar17 = local_108;
          goto LAB_00f25338;
        }
        local_a8 = pppppppuVar3;
        local_a4 = pppppppuVar16;
        local_1bc = local_104;
        local_1d4 = local_108;
        unaff_d9 = local_100;
      }
      pppppppuVar8 = local_a4;
      pppppppuVar16 = local_a8;
      *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
      local_100 = CONCAT44(local_a4,local_a8);
      local_108 = pppppppuVar13;
      local_104 = pppppppuVar10;
      local_f4 = local_1b0;
      local_e8 = local_1d4;
      local_e4 = local_1bc;
      local_140 = (undefined8 *******)FUN_014d9568(pppppppuVar15);
      local_168 = CONCAT44(pppppppuVar8,pppppppuVar16);
      local_170 = pppppppuVar13;
      local_16c = pppppppuVar10;
      local_160 = pppppppuVar5;
      local_15c = local_1b0;
      local_150 = local_1d4;
      local_14c = local_1bc;
      if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
        pppppppuVar10 = (undefined8 *******)0x0;
        pppppppuVar13 = (undefined8 *******)0x2;
        if (local_140 != (undefined8 *******)0x0) {
          FUN_00f80260(&local_140);
        }
      }
      else if (local_140 != (undefined8 *******)0x0) {
        pppppppuVar10 = (undefined8 *******)0x0;
        pppppppuVar13 = (undefined8 *******)0x2;
        pppppppuVar16 = local_140;
      }
      goto LAB_00f24bac;
    }
  }
LAB_00f22384:
  local_170 = (undefined8 *******)&DAT_00000005;
  local_194 = pppppppuVar4;
  pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
  local_1d4 = pppppppuVar17;
LAB_00f22398:
  FUN_0196bf0c(pppppppuVar4,&local_60);
  pppppppuVar10 = (undefined8 *******)0x0;
  pppppppuVar13 = (undefined8 *******)0x2;
  goto LAB_00f223b0;
LAB_00f22a3c:
  pppppppuVar17 = pppppppuVar16;
LAB_00f22a40:
  pppppppuVar8 = local_15c;
  pppppppuVar5 = local_158;
  FUN_01278730(&local_108,(undefined8 *******)((int)&local_168 + 4));
  if ((char)local_108 == '\x01') {
    pppppppuVar16 = pppppppuVar17;
    pppppppuVar13 = local_104;
LAB_00f24904:
    pppppppuVar17 = local_170;
    local_170 = (undefined8 *******)&DAT_80000000;
    local_108 = (undefined8 *******)&DAT_00000008;
    if (pppppppuVar17 != (undefined8 *******)&DAT_80000000) {
      local_108 = (undefined8 *******)0x2;
      local_100 = CONCAT44(local_16c,pppppppuVar17);
      local_f8 = (undefined8 *******)local_168;
    }
    local_104 = pppppppuVar8;
    FUN_0196bf0c(pppppppuVar5,&local_108);
    if (pppppppuVar17 != (undefined8 *******)&DAT_80000000) {
      FUN_019bb7e0(pppppppuVar17,local_100._4_4_);
    }
    goto LAB_00f2495c;
  }
  if (local_108._1_1_ != '\x01') {
    if (local_1d4 == (undefined8 *******)0x2 && local_1bc == (undefined8 *******)0x0) {
      local_1d4 = (undefined8 *******)0x0;
      local_1bc = (undefined8 *******)0x0;
    }
    if (local_1d0 == (undefined8 *******)0x2 && local_1b0 == (undefined8 *******)0x0) {
      local_1d0 = (undefined8 *******)0x0;
      local_1b0 = (undefined8 *******)0x0;
    }
    if (local_1d8 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
      local_1d8 = (undefined8 *******)0x0;
      pppppppuVar10 = (undefined8 *******)0x0;
    }
    if (local_170 != (undefined8 *******)&DAT_80000000) {
      FUN_019bb7e0(local_170,local_16c);
    }
    local_188 = unaff_d10;
    goto LAB_00f2498c;
  }
  *(undefined4 *)((int)local_168._4_4_ + 8) = 0;
  *(int *)((int)local_168._4_4_ + 0x14) = *(int *)((int)local_168._4_4_ + 0x14) + 1;
  FUN_01968828(&local_108,(int)local_168._4_4_ + 0xc);
  pppppppuVar16 = local_104;
  if (local_108 == (undefined8 *******)0x2) {
    local_a4 = local_104;
LAB_00f24900:
    pppppppuVar16 = pppppppuVar17;
    pppppppuVar13 = local_a4;
    goto LAB_00f24904;
  }
  pppppppuVar17 = (undefined8 *******)local_100;
  uVar9 = 0;
  if (((uint)local_108 & 1) == 0) {
    pppppppuVar13 = local_1c8;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f25600;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar13 = (undefined8 *******)&DAT_00000001;
      local_1c0 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar13 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar13 == (undefined8 *******)0x0) goto LAB_00f255fc;
      local_1c0 = pppppppuVar17;
    }
    FUN_01bed4e2(pppppppuVar13,pppppppuVar16,pppppppuVar17);
    local_1c8 = pppppppuVar13;
  }
  else {
    pppppppuVar13 = local_1c4;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f25600;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar13 = (undefined8 *******)&DAT_00000001;
      local_1c0 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar13 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar13 == (undefined8 *******)0x0) {
LAB_00f255fc:
        uVar9 = 1;
        pppppppuVar13 = pppppppuVar17;
LAB_00f25600:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,pppppppuVar13);
      }
      local_1c0 = pppppppuVar17;
    }
    FUN_01bed4e2(pppppppuVar13,pppppppuVar16,pppppppuVar17);
    local_1c4 = pppppppuVar13;
  }
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_170 = local_1c0;
  local_168 = CONCAT44(local_168._4_4_,pppppppuVar17);
  local_16c = pppppppuVar13;
  FUN_00ef0b28(&local_a8,pppppppuVar16,pppppppuVar17);
  pppppppuVar17 = pppppppuVar16;
  if ((char)local_a8 == '\x01') goto LAB_00f24900;
  if (local_a8._1_1_ == '\x03') {
    pppppppuVar13 = (undefined8 *******)FUN_00e620c0(&local_170);
    if (pppppppuVar13 != (undefined8 *******)0x0) goto LAB_00f2495c;
    goto LAB_00f22a40;
  }
  if (local_a8._1_1_ == '\0') {
    if (local_1e0 != (undefined8 *******)0x2 || local_1e4 != (undefined8 *******)0x0) {
      local_a4 = (undefined8 *******)&DAT_0000000f;
      goto LAB_00f25494;
    }
    FUN_00e61fbc(&local_108,&local_170);
    local_1e0 = local_108;
    local_1e4 = local_104;
    if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
    goto LAB_00f2513c;
    local_1d8 = local_108;
    pppppppuVar10 = local_104;
    unaff_d10 = local_100;
    goto LAB_00f22a40;
  }
  if (local_a8._1_1_ != '\x01') {
    if (local_1d4 != (undefined8 *******)0x2 || local_1bc != (undefined8 *******)0x0) {
      local_a4 = (undefined8 *******)&DAT_00000012;
      local_1e8 = (undefined8 *******)0x49e33d;
LAB_00f25494:
      local_a8 = local_1e8;
      local_108 = (undefined8 *******)&local_a8;
      local_104 = (undefined8 *******)&DAT_0132b6a0;
      pppppppuVar13 = (undefined8 *******)FUN_019676ac(&DAT_005ab34f,&local_108);
      goto LAB_00f2495c;
    }
    FUN_00e61fbc(&local_108,&local_170);
    local_1d4 = local_108;
    if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
    goto LAB_00f2513c;
    local_1bc = local_104;
    unaff_d9 = local_100;
    goto LAB_00f22a3c;
  }
  if (local_1d0 != (undefined8 *******)0x2 || local_1dc != (undefined8 *******)0x0) {
    local_a4 = (undefined8 *******)&DAT_00000015;
    local_1e8 = (undefined8 *******)0x49e328;
    goto LAB_00f25494;
  }
  FUN_00e61fbc(&local_108,&local_170);
  local_1d0 = local_108;
  local_1dc = local_104;
  if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
  goto LAB_00f2513c;
  local_1b0 = local_104;
  unaff_d8 = local_100;
  goto LAB_00f22a3c;
  while( true ) {
    ppppppuVar7 = (undefined8 ******)((int)ppppppuVar7 + 1);
    pppppppuVar15[5] = ppppppuVar7;
    if (pppppppuVar15[4] == ppppppuVar7) break;
LAB_00f22660:
    pppppppuVar8 = (undefined8 *******)(uint)*(byte *)((int)pppppppuVar15[3] + (int)ppppppuVar7);
    if (((char *)0x17 < (char *)((int)pppppppuVar8 + -9)) ||
       ((1 << ((uint)((int)pppppppuVar8 + -9) & 0xff) & 0x800013U) == 0)) {
      if (pppppppuVar8 != (undefined8 *******)0x5b) {
        pppppppuVar17 = (undefined8 *******)&local_170;
        if (pppppppuVar8 != (undefined8 *******)0x7b) {
          pppppppuVar5 = (undefined8 *******)FUN_012c7788(pppppppuVar15,&local_1a0,&DAT_01c1cf88);
          goto LAB_00f25214;
        }
        cVar1 = *(char *)(pppppppuVar15 + 7);
        *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          local_170 = (undefined8 *******)&DAT_00000018;
          pppppppuVar5 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
          local_1e4 = pppppppuVar8;
          local_1e0 = pppppppuVar16;
          goto LAB_00f2269c;
        }
        pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
        local_160 = (undefined8 *******)CONCAT31(uVar2,1);
        pppppppuVar17 = (undefined8 *******)((int)&local_168 + 4);
        _local_158 = CONCAT44(uStack_154,pppppppuVar4);
        local_170 = (undefined8 *******)&DAT_80000000;
        local_1d8 = (undefined8 *******)&local_16c;
        local_1e8 = (undefined8 *******)0x2;
        local_1c4 = (undefined8 *******)&DAT_00000005;
        local_168._0_4_ = local_70;
        local_200 = (undefined8 *******)0x2;
        local_204 = (undefined8 *******)0x0;
        local_208 = (undefined8 *******)0x2;
        local_20c = (undefined8 *******)0x0;
        local_218 = (undefined8 *******)0x2;
        local_21c = (undefined8 *******)0x0;
        local_210 = (undefined8 *******)0x2;
        local_214 = (undefined8 *******)0x0;
        local_224 = (undefined8 *******)0x49e153;
        local_1f4 = (undefined8 *******)0x2;
        local_1c0 = (undefined8 *******)0x0;
        local_1f0 = (undefined8 *******)0x2;
        local_1e4 = (undefined8 *******)0x0;
        local_1f8 = (undefined8 *******)0x2;
        local_1e0 = (undefined8 *******)0x0;
        local_1c8 = (undefined8 *******)0x0;
        local_1ec = (undefined8 *******)0x2;
        local_1dc = (undefined8 *******)0x0;
        local_15c = local_1a0;
        local_168._4_4_ = pppppppuVar15;
        goto LAB_00f2362c;
      }
      cVar1 = *(char *)(pppppppuVar15 + 7);
      *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_170 = (undefined8 *******)&DAT_00000018;
        pppppppuVar5 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
        local_1e4 = pppppppuVar8;
        local_1e0 = pppppppuVar16;
        goto LAB_00f2269c;
      }
      pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
      local_f8 = (undefined8 *******)CONCAT31(local_f8._1_3_,1);
      local_100 = CONCAT44(pppppppuVar15,pppppppuVar4);
      local_108 = (undefined8 *******)0x0;
      local_104 = local_1a0;
      FUN_00e6375c(&local_170,&local_108);
      pppppppuVar13 = local_16c;
      local_1ec = local_170;
      local_1c8 = (undefined8 *******)0x5b;
      local_1cc = (undefined8 *******)&DAT_00000052;
      if (local_170 == (undefined8 *******)&DAT_00000003 && local_16c == (undefined8 *******)0x0) {
LAB_00f24158:
        local_1dc = pppppppuVar13;
        local_98 = (undefined8 *******)local_168;
        uVar20 = unaff_d10;
LAB_00f2415c:
        local_170 = local_98;
        FUN_0196bf0c(pppppppuVar4,&local_60);
        pppppppuVar13 = (undefined8 *******)0x0;
        local_1ec = (undefined8 *******)0x2;
        local_1d8 = extraout_r2_00;
        local_1d4 = extraout_r3_00;
        uVar19 = unaff_d8;
        uVar18 = unaff_d9;
      }
      else {
        if (local_170 == (undefined8 *******)0x2 && local_16c == (undefined8 *******)0x0) {
          uVar9 = 0;
          local_1c8 = (undefined8 *******)0x5b;
LAB_00f25514:
          local_98 = (undefined8 *******)FUN_012cc2c0(uVar9,&DAT_01c167bc,&DAT_01d064b8);
          local_1dc = pppppppuVar13;
          goto LAB_00f2415c;
        }
        pppppppuVar17 = (undefined8 *******)local_168;
        pppppppuVar16 = local_168._4_4_;
        FUN_00e6331c(&local_170,&local_108);
        uVar20 = local_168;
        local_1c8 = local_16c;
        local_1dc = local_170;
        if (local_170 == (undefined8 *******)&DAT_00000003 && local_16c == (undefined8 *******)0x0)
        goto LAB_00f24158;
        if (local_170 == (undefined8 *******)0x2 && local_16c == (undefined8 *******)0x0) {
          uVar9 = 1;
          uVar20 = unaff_d10;
          goto LAB_00f25514;
        }
        FUN_00e6331c(&local_170,&local_108);
        uVar18 = local_168;
        local_1cc = local_16c;
        local_1d4 = local_170;
        unaff_d10 = uVar20;
        if (local_170 == (undefined8 *******)&DAT_00000003 && local_16c == (undefined8 *******)0x0)
        goto LAB_00f24158;
        if (local_170 == (undefined8 *******)0x2 && local_16c == (undefined8 *******)0x0) {
          uVar9 = 2;
          goto LAB_00f25514;
        }
        FUN_00e6331c(&local_170,&local_108);
        uVar19 = local_168;
        local_1d8 = local_170;
        unaff_d9 = uVar18;
        if (local_170 == (undefined8 *******)&DAT_00000003 && local_16c == (undefined8 *******)0x0)
        goto LAB_00f24158;
        local_1c0 = local_16c;
        if (local_170 == (undefined8 *******)0x2 && local_16c == (undefined8 *******)0x0) {
          uVar9 = 3;
          goto LAB_00f25514;
        }
        FUN_00e633f4(&local_170,&local_108);
        pppppppuVar8 = local_16c;
        local_1e4 = local_1cc;
        local_1e0 = local_1c8;
        local_1bc = local_170;
        unaff_d8 = uVar19;
        if (local_170 == (undefined8 *******)&DAT_00000003) {
          local_1dc = pppppppuVar8;
          local_98 = local_16c;
          goto LAB_00f2415c;
        }
        if (local_170 == (undefined8 *******)0x2) {
          uVar9 = 4;
          pppppppuVar13 = pppppppuVar8;
          goto LAB_00f25514;
        }
        local_1cc = (undefined8 *******)&local_170;
        FUN_00e63664(local_1cc,&local_108);
        if (local_170 == (undefined8 *******)&DAT_00000006 && local_16c == (undefined8 *******)0x0)
        {
          local_1dc = pppppppuVar8;
          local_98 = (undefined8 *******)local_168;
          goto LAB_00f2415c;
        }
        local_a8 = local_168._4_4_;
        local_a4 = local_160;
        pppppppuStack_a0 = local_15c;
        local_1c8 = local_16c;
        if (local_170 == (undefined8 *******)&DAT_00000005 && local_16c == (undefined8 *******)0x0)
        {
          uVar9 = 5;
          local_1cc = local_15c;
          pppppppuVar13 = pppppppuVar8;
          goto LAB_00f25514;
        }
        local_188 = CONCAT44(local_160,local_168._4_4_);
        pppppppuStack_180 = local_15c;
        local_1c4 = local_170;
        local_98 = pppppppuVar17;
        local_1d0 = pppppppuVar8;
        local_94 = pppppppuVar16;
        local_1cc = (undefined8 *******)local_168;
      }
      local_1b4 = local_94;
      pppppppuVar17 = local_98;
      *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
      local_f4 = local_1e0;
      local_e4 = local_1e4;
      local_d4 = local_1c0;
      local_100 = CONCAT44(local_94,local_98);
      local_bc = (undefined8 *******)local_188;
      local_b8 = local_188._4_4_;
      local_b4 = pppppppuStack_180;
      local_ac = local_1d0;
      local_b0 = local_1bc;
      local_108 = local_1ec;
      local_104 = pppppppuVar13;
      local_c0 = local_1cc;
      local_e8 = local_1d4;
      local_d8 = local_1d8;
      local_110[0] = (undefined8 *******)FUN_014d9568(pppppppuVar15);
      local_15c = local_1e0;
      local_14c = local_1e4;
      local_13c = local_1c0;
      pppppppuVar16 = (undefined8 *******)&local_124;
      local_168 = CONCAT44(local_1b4,pppppppuVar17);
      local_124 = (undefined8 *******)local_188;
      local_120 = local_188._4_4_;
      local_11c = pppppppuStack_180;
      local_114 = local_1d0;
      local_118 = local_1bc;
      pppppppuVar5 = pppppppuVar17;
      local_170 = local_1ec;
      local_16c = pppppppuVar13;
      local_160 = local_1dc;
      local_128 = local_1cc;
      local_150 = local_1d4;
      if (local_1ec == (undefined8 *******)0x2 && pppppppuVar13 == (undefined8 *******)0x0) {
        pppppppuVar13 = (undefined8 *******)0x0;
        local_1ec = (undefined8 *******)0x2;
        if (local_110[0] != (undefined8 *******)0x0) {
          FUN_00f80260(local_110);
          goto LAB_00f24e20;
        }
LAB_00f243b8:
      }
      else {
        if (local_110[0] == (undefined8 *******)0x0) {
          local_198 = (undefined8 *******)local_188;
          local_194 = local_188._4_4_;
          pppppppuStack_190 = pppppppuStack_180;
          pppppppuVar16 = (undefined8 *******)&local_188;
          goto LAB_00f243b8;
        }
        pppppppuVar13 = (undefined8 *******)0x0;
        local_1ec = (undefined8 *******)0x2;
        pppppppuVar5 = local_110[0];
      }
      pppppppuVar17 = pppppppuVar16;
      goto LAB_00f24e1c;
    }
  }
LAB_00f22688:
  local_170 = (undefined8 *******)&DAT_00000005;
  pppppppuVar5 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
  local_1e4 = pppppppuVar8;
  local_1e0 = pppppppuVar16;
LAB_00f2269c:
  FUN_0196bf0c(pppppppuVar4,&local_60);
  pppppppuVar13 = (undefined8 *******)0x0;
  local_1ec = (undefined8 *******)0x2;
  goto LAB_00f226b8;
LAB_00f2362c:
  pppppppuVar8 = local_15c;
  pppppppuVar16 = local_158;
  FUN_01278730(&local_108,pppppppuVar17);
  if ((char)local_108 == '\x01') {
LAB_00f247b8:
    pppppppuVar10 = local_104;
    pppppppuVar17 = local_170;
    local_170 = (undefined8 *******)&DAT_80000000;
    local_108 = (undefined8 *******)&DAT_00000008;
    if (pppppppuVar17 != (undefined8 *******)&DAT_80000000) {
      local_108 = (undefined8 *******)0x2;
      local_100 = CONCAT44(local_16c,pppppppuVar17);
      local_f8 = (undefined8 *******)local_168;
    }
    local_104 = pppppppuVar8;
    FUN_0196bf0c(pppppppuVar16,&local_108);
    if (pppppppuVar17 != (undefined8 *******)&DAT_80000000) {
      FUN_019bb7e0(pppppppuVar17,local_100._4_4_);
    }
LAB_00f24810:
    local_1f8 = pppppppuVar17;
    goto LAB_00f24814;
  }
  if (local_108._1_1_ != '\x01') {
    local_1bc = (undefined8 *******)0x0;
    if (local_1e8 != (undefined8 *******)0x2) {
      local_1bc = local_1e8;
    }
    if (local_1f4 == (undefined8 *******)0x2 && local_1c0 == (undefined8 *******)0x0) {
      local_1f4 = (undefined8 *******)0x0;
      local_1c0 = (undefined8 *******)0x0;
    }
    if (local_1f0 == (undefined8 *******)0x2 && local_1e4 == (undefined8 *******)0x0) {
      local_1f0 = (undefined8 *******)0x0;
      pppppppuVar10 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar10 = local_1e4;
    }
    if (local_1f8 == (undefined8 *******)0x2 && local_1e0 == (undefined8 *******)0x0) {
      local_1f8 = (undefined8 *******)0x0;
      pppppppuVar16 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar16 = local_1e0;
    }
    if (local_1ec == (undefined8 *******)0x2 && local_1dc == (undefined8 *******)0x0) {
      local_1ec = (undefined8 *******)0x0;
      local_1dc = (undefined8 *******)0x0;
    }
    if (local_1c4 == (undefined8 *******)&DAT_00000005 && local_1c8 == (undefined8 *******)0x0) {
      local_1c8 = (undefined8 *******)0x0;
      local_1c4 = (undefined8 *******)&SUB_00000004;
    }
    else {
      local_108 = local_a8;
      local_104 = local_a4;
      local_100 = CONCAT44(local_100._4_4_,pppppppuStack_a0);
    }
    if (local_170 != (undefined8 *******)&DAT_80000000) {
      FUN_019bb7e0(local_170,local_16c);
    }
    local_188 = CONCAT44(local_104,local_108);
    pppppppuStack_180 = (undefined8 *******)local_100;
    local_1d8 = local_1f4;
    local_1d4 = local_1f0;
    local_178 = unaff_d11;
    goto LAB_00f24c90;
  }
  local_168._4_4_[2] = (undefined8 ******)0x0;
  local_168._4_4_[5] = (undefined8 ******)((int)local_168._4_4_[5] + 1);
  FUN_01968828(&local_108,local_168._4_4_ + 3);
  pppppppuVar5 = local_104;
  if (local_108 == (undefined8 *******)0x2) goto LAB_00f247b8;
  pppppppuVar8 = (undefined8 *******)local_100;
  uVar9 = 0;
  pppppppuVar10 = pppppppuVar8;
  if (((uint)local_108 & 1) == 0) {
    pppppppuVar16 = local_1bc;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f255f0;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar10 = (undefined8 *******)0x0;
      pppppppuVar16 = (undefined8 *******)&DAT_00000001;
    }
    else {
      pppppppuVar16 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar16 == (undefined8 *******)0x0) goto LAB_00f255ec;
    }
    FUN_01bed4e2(pppppppuVar16,pppppppuVar5,pppppppuVar8);
    local_1bc = pppppppuVar16;
  }
  else {
    pppppppuVar16 = local_1d4;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f255f0;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar10 = (undefined8 *******)0x0;
      pppppppuVar16 = (undefined8 *******)&DAT_00000001;
    }
    else {
      pppppppuVar16 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar16 == (undefined8 *******)0x0) {
LAB_00f255ec:
        uVar9 = 1;
        pppppppuVar16 = pppppppuVar8;
LAB_00f255f0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,pppppppuVar16);
      }
    }
    FUN_01bed4e2(pppppppuVar16,pppppppuVar5,pppppppuVar8);
    local_1d4 = pppppppuVar16;
  }
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_168._0_4_ = pppppppuVar8;
  local_170 = pppppppuVar10;
  local_16c = pppppppuVar16;
  if ((int)pppppppuVar8 < 0x12) {
    if (pppppppuVar8 == (undefined8 *******)&DAT_0000000a) {
      iVar6 = thunk_FUN_01bed842(pppppppuVar5,"pause_mode",10);
      if (iVar6 == 0) {
        if (local_1c4 != (undefined8 *******)&DAT_00000005 || local_1c8 != (undefined8 *******)0x0)
        {
          local_94 = (undefined8 *******)&DAT_0000000a;
          local_224 = (undefined8 *******)0x49fb50;
          goto LAB_00f255a4;
        }
        FUN_00e61ea8(&local_108,&local_170);
        local_1cc = (undefined8 *******)local_100;
        if (local_108 == (undefined8 *******)&DAT_00000005 && local_104 == (undefined8 *******)0x0)
        {
          pppppppuVar10 = (undefined8 *******)local_100;
          goto LAB_00f24810;
        }
        local_a8 = local_100._4_4_;
        local_a4 = local_f8;
        pppppppuStack_a0 = local_f4;
        local_1c8 = local_104;
        local_1c4 = local_108;
        goto LAB_00f2362c;
      }
    }
    else if (pppppppuVar8 == (undefined8 *******)&DAT_0000000f) {
      iVar6 = thunk_FUN_01bed842(pppppppuVar5,"fan_speed_ratio",0xf);
      if (iVar6 != 0) {
        iVar6 = thunk_FUN_01bed842(pppppppuVar5,"hot_temperature",0xf);
        if (iVar6 != 0) goto LAB_00f238dc;
        if (local_218 != (undefined8 *******)0x2 || local_21c != (undefined8 *******)0x0) {
          local_94 = (undefined8 *******)&DAT_0000000f;
          local_224 = (undefined8 *******)0x49e319;
          goto LAB_00f255a4;
        }
        FUN_00e61fbc(&local_108,&local_170);
        local_218 = local_108;
        local_21c = local_104;
        if (!(local_108 != (undefined8 *******)0x2 || local_104 != (undefined8 *******)0x0))
        goto LAB_00f25170;
        local_1f8 = local_108;
        local_1e0 = local_104;
        unaff_d10 = local_100;
        goto LAB_00f2362c;
      }
      if (!(local_210 != (undefined8 *******)0x2 || local_214 != (undefined8 *******)0x0)) {
        FUN_00e61bc4(&local_108,&local_170);
        local_210 = local_108;
        local_214 = local_104;
        if (!(local_108 != (undefined8 *******)0x2 || local_104 != (undefined8 *******)0x0)) {
LAB_00f25170:
          pppppppuVar10 = (undefined8 *******)local_100;
          goto LAB_00f24810;
        }
        local_1ec = local_108;
        local_1dc = local_104;
        unaff_d11 = local_100;
        goto LAB_00f2362c;
      }
      local_94 = (undefined8 *******)&DAT_0000000f;
      goto LAB_00f255a4;
    }
  }
  else if (pppppppuVar8 == (undefined8 *******)&DAT_00000012) {
    iVar6 = thunk_FUN_01bed842(pppppppuVar5,"target_temperature",0x12);
    if (iVar6 == 0) {
      if (local_200 != (undefined8 *******)0x2 || local_204 != (undefined8 *******)0x0) {
        local_94 = (undefined8 *******)&DAT_00000012;
        local_224 = (undefined8 *******)0x49e33d;
        goto LAB_00f255a4;
      }
      FUN_00e61fbc(&local_108,&local_170);
      local_200 = local_108;
      local_204 = local_104;
      if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
      goto LAB_00f25170;
      local_1f4 = local_108;
      local_1c0 = local_104;
      unaff_d8 = local_100;
      goto LAB_00f2362c;
    }
  }
  else if (pppppppuVar8 == (undefined8 *******)&DAT_00000015) {
    iVar6 = thunk_FUN_01bed842(pppppppuVar5,"dangerous_temperature",0x15);
    if (iVar6 == 0) {
      if (!(local_208 != (undefined8 *******)0x2 || local_20c != (undefined8 *******)0x0)) {
        FUN_00e61fbc(&local_108,&local_170);
        local_208 = local_108;
        local_20c = local_104;
        if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
        goto LAB_00f25170;
        local_1f0 = local_108;
        local_1e4 = local_104;
        unaff_d9 = local_100;
        goto LAB_00f2362c;
      }
      local_94 = (undefined8 *******)&DAT_00000015;
      local_224 = (undefined8 *******)0x49e328;
    }
    else {
      iVar6 = thunk_FUN_01bed842(pppppppuVar5,"minimum_required_fans",0x15);
      if (iVar6 != 0) goto LAB_00f238dc;
      if (local_1e8 == (undefined8 *******)0x2) {
        FUN_00e61db0(&local_108,&local_170);
        local_1d0 = local_104;
        local_1e8 = local_108;
        if (local_108 == (undefined8 *******)0x2) {
          pppppppuVar10 = local_104;
          goto LAB_00f24810;
        }
        goto LAB_00f2362c;
      }
      local_94 = (undefined8 *******)&DAT_00000015;
      local_224 = (undefined8 *******)0x49e304;
    }
LAB_00f255a4:
    local_98 = local_224;
    local_108 = (undefined8 *******)&local_98;
    local_104 = (undefined8 *******)&DAT_0132b6a0;
    pppppppuVar10 = (undefined8 *******)FUN_019676ac(&DAT_005ab34f,&local_108);
    goto LAB_00f24810;
  }
LAB_00f238dc:
  pppppppuVar10 = (undefined8 *******)FUN_00e620c0(&local_170);
  if (pppppppuVar10 != (undefined8 *******)0x0) goto LAB_00f25030;
  goto LAB_00f2362c;
LAB_00f25030:
  local_1f8 = pppppppuVar17;
LAB_00f24814:
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_170 = pppppppuVar10;
  FUN_0196bf0c(pppppppuVar4,&local_60);
  local_178 = CONCAT44(local_178._4_4_,pppppppuVar10);
  local_1dc = (undefined8 *******)0x0;
  local_1ec = (undefined8 *******)0x2;
LAB_00f24c90:
  uVar20 = local_178;
  *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
  local_e8 = local_1d4;
  local_d8 = local_1d8;
  local_d4 = local_1c0;
  local_c0 = local_1cc;
  local_bc = (undefined8 *******)local_188;
  local_b8 = local_188._4_4_;
  local_b4 = pppppppuStack_180;
  local_ac = local_1d0;
  local_b0 = local_1bc;
  local_108 = local_1ec;
  local_104 = local_1dc;
  local_100 = local_178;
  local_f4 = pppppppuVar16;
  local_e4 = pppppppuVar10;
  local_110[0] = (undefined8 *******)FUN_012c7b64(pppppppuVar15);
  local_1b4 = (undefined8 *******)((ulonglong)uVar20 >> 0x20);
  pppppppuVar5 = (undefined8 *******)uVar20;
  local_150 = local_1d4;
  pppppppuVar17 = (undefined8 *******)&local_188;
  local_13c = local_1c0;
  local_128 = local_1cc;
  local_124 = (undefined8 *******)local_188;
  local_120 = local_188._4_4_;
  local_11c = pppppppuStack_180;
  local_114 = local_1d0;
  local_118 = local_1bc;
  local_170 = local_1ec;
  local_16c = local_1dc;
  local_168 = uVar20;
  local_160 = local_1f8;
  local_15c = pppppppuVar16;
  local_14c = pppppppuVar10;
  if (local_1ec == (undefined8 *******)0x2 && local_1dc == (undefined8 *******)0x0) {
    pppppppuVar13 = (undefined8 *******)0x0;
    local_1ec = (undefined8 *******)0x2;
    local_1bc = pppppppuVar17;
    if (local_110[0] != (undefined8 *******)0x0) {
      FUN_00f80260(local_110);
      local_1bc = extraout_r1;
    }
  }
  else if (local_110[0] == (undefined8 *******)0x0) {
    local_198 = (undefined8 *******)local_188;
    local_194 = local_188._4_4_;
    pppppppuStack_190 = pppppppuStack_180;
    pppppppuVar13 = local_1dc;
  }
  else {
    local_1ec = (undefined8 *******)0x2;
    pppppppuVar13 = (undefined8 *******)0x0;
    pppppppuVar5 = local_110[0];
  }
  local_1e4 = pppppppuVar10;
  uVar19 = unaff_d8;
  uVar18 = unaff_d9;
  uVar20 = unaff_d10;
  local_1e0 = pppppppuVar16;
  local_1dc = local_1f8;
LAB_00f24e1c:
LAB_00f24e20:
  pppppppuVar8 = local_1e4;
  pppppppuVar16 = local_1e0;
  unaff_d8 = uVar19;
  unaff_d9 = uVar18;
  unaff_d10 = uVar20;
  if (local_1ec == (undefined8 *******)0x2 && pppppppuVar13 == (undefined8 *******)0x0) {
LAB_00f25214:
    pppppppuVar5 = (undefined8 *******)FUN_0127dee8(pppppppuVar5,pppppppuVar15);
    local_1e4 = pppppppuVar8;
    local_1e0 = pppppppuVar16;
    uVar19 = unaff_d8;
    uVar18 = unaff_d9;
    uVar20 = unaff_d10;
    goto LAB_00f2269c;
  }
  local_170 = local_198;
  local_16c = local_194;
  local_168 = CONCAT44(local_168._4_4_,pppppppuStack_190);
  pppppppuVar17 = pppppppuStack_190;
LAB_00f226b8:
  if (local_60 == (undefined8 ******)0x4 || local_60 == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_58,local_54);
  }
  if (local_1ec == (undefined8 *******)0x2 && pppppppuVar13 == (undefined8 *******)0x0) {
    FUN_0196bf0c(pppppppuVar4,&local_78);
    pppppppuVar13 = (undefined8 *******)0x0;
    local_1ec = (undefined8 *******)0x2;
  }
  else {
    local_108 = local_170;
    local_104 = local_16c;
    local_100 = CONCAT44(local_100._4_4_,(undefined8 *******)local_168);
    pppppppuVar17 = (undefined8 *******)local_168;
  }
  if (local_78 == 4 || local_78 == 2) {
    FUN_019bb7e0(local_70,local_6c);
  }
  if (local_1ec == (undefined8 *******)0x2 && pppppppuVar13 == (undefined8 *******)0x0) {
    local_170 = pppppppuVar5;
    FUN_0196bf0c(pppppppuVar4,&local_8c);
    pppppppuVar13 = (undefined8 *******)0x0;
    local_1ec = (undefined8 *******)0x2;
    local_1dc = pppppppuVar17;
  }
  else {
    local_170 = local_108;
    local_16c = local_104;
    local_168 = CONCAT44(local_168._4_4_,(undefined8 *******)local_100);
  }
  if (local_8c == (undefined8 ******)0x4 || local_8c == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_84,local_80);
  }
  if (local_1ec != (undefined8 *******)0x2 || pppppppuVar13 != (undefined8 *******)0x0) {
    *pppppppuVar11 = (undefined8 ******)local_1ec;
    param_1[10] = (undefined8 ******)local_1d4;
    param_1[0xe] = (undefined8 ******)local_1d8;
    param_1[0x12] = (undefined8 ******)local_1c4;
    param_1[4] = (undefined8 ******)pppppppuVar5;
    param_1[5] = (undefined8 ******)local_1b4;
    param_1[0x14] = (undefined8 ******)local_1cc;
    param_1[0xf] = (undefined8 ******)local_1c0;
    param_1[6] = (undefined8 ******)local_1dc;
    *(undefined8 *)(param_1 + 8) = uVar20;
    *(undefined8 *)(param_1 + 0xc) = uVar18;
    *(undefined8 *)(param_1 + 0x10) = uVar19;
    param_1[3] = (undefined8 ******)pppppppuVar13;
    param_1[7] = (undefined8 ******)local_1e0;
    param_1[0xb] = (undefined8 ******)local_1e4;
    param_1[0x13] = (undefined8 ******)local_1c8;
    param_1[0x15] = (undefined8 ******)local_170;
    param_1[0x16] = (undefined8 ******)local_16c;
    param_1[0x17] = (undefined8 ******)(undefined8 *******)local_168;
    param_1[0x18] = (undefined8 ******)local_1bc;
    param_1[0x19] = (undefined8 ******)local_1d0;
    ppppppuVar7 = (undefined8 ******)0x1;
    goto LAB_00f2298c;
  }
  param_1[2] = (undefined8 ******)pppppppuVar5;
  goto LAB_00f228f8;
  while( true ) {
    ppppppuVar7 = (undefined8 ******)((int)ppppppuVar7 + 1);
    pppppppuVar15[5] = ppppppuVar7;
    if (pppppppuVar15[4] == ppppppuVar7) break;
LAB_00f22254:
    pppppppuVar17 = (undefined8 *******)(uint)*(byte *)((int)pppppppuVar15[3] + (int)ppppppuVar7);
    if (((char *)0x17 < (char *)((int)pppppppuVar17 + -9)) ||
       ((1 << ((uint)((int)pppppppuVar17 + -9) & 0xff) & 0x800013U) == 0)) {
      if (pppppppuVar17 != (undefined8 *******)0x5b) {
        if (pppppppuVar17 != (undefined8 *******)0x7b) {
          pppppppuVar16 = (undefined8 *******)FUN_012c7788(pppppppuVar15,&local_1a0,&DAT_01c1cd88);
          goto LAB_00f251ec;
        }
        cVar1 = *(char *)(pppppppuVar15 + 7);
        *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          local_170 = (undefined8 *******)&DAT_00000018;
          pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
          local_1e8 = pppppppuVar8;
          goto LAB_00f22294;
        }
        pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
        local_160 = (undefined8 *******)CONCAT31(uVar2,1);
        local_170 = (undefined8 *******)&DAT_80000000;
        local_1f0 = (undefined8 *******)0x2;
        local_168._0_4_ = local_70;
        local_1bc = (undefined8 *******)((int)&local_168 + 4);
        _local_158 = CONCAT44(uStack_154,pppppppuVar4);
        local_1b4 = (undefined8 *******)&DAT_00000005;
        pppppppuVar10 = (undefined8 *******)0x0;
        local_204 = (undefined8 *******)0x49e33d;
        local_1dc = (undefined8 *******)0x0;
        local_1f4 = (undefined8 *******)0x2;
        local_1ec = (undefined8 *******)0x2;
        local_1e8 = (undefined8 *******)0x2;
        local_1e4 = (undefined8 *******)0x2;
        local_1d8 = (undefined8 *******)0x0;
        local_1e0 = (undefined8 *******)0x2;
        pppppppuVar16 = pppppppuVar4;
        pppppppuVar5 = (undefined8 *******)0x0;
        local_15c = pppppppuVar8;
        goto LAB_00f230d8;
      }
      cVar1 = *(char *)(pppppppuVar15 + 7);
      pppppppuVar5 = (undefined8 *******)&local_170;
      *(char *)(pppppppuVar15 + 7) = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        local_170 = (undefined8 *******)&DAT_00000018;
        pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
        local_1e8 = pppppppuVar8;
        goto LAB_00f22294;
      }
      pppppppuVar15[5] = (undefined8 ******)((int)ppppppuVar7 + 1);
      local_f8 = (undefined8 *******)CONCAT31(local_f8._1_3_,1);
      local_104 = &local_60;
      local_100 = CONCAT44(pppppppuVar15,pppppppuVar4);
      local_108 = (undefined8 *******)0x0;
      FUN_00e6331c(&local_170);
      pppppppuVar8 = local_16c;
      pppppppuVar10 = local_170;
      if (local_170 == (undefined8 *******)&DAT_00000003 && local_16c == (undefined8 *******)0x0) {
LAB_00f23e94:
        local_98 = (undefined8 *******)local_168;
        uVar18 = unaff_d8;
LAB_00f23e98:
        local_170 = local_98;
        FUN_0196bf0c(pppppppuVar4,&local_60);
        pppppppuVar8 = (undefined8 *******)0x0;
        pppppppuVar10 = (undefined8 *******)0x2;
        local_1b4 = extraout_r2;
        local_1dc = extraout_r3;
        local_1d8 = local_98;
        local_1d0 = pppppppuVar5;
        pppppppuVar17 = pppppppuVar16;
        uVar20 = unaff_d9;
      }
      else {
        if (local_170 == (undefined8 *******)0x2 && local_16c == (undefined8 *******)0x0) {
          uVar9 = 0;
LAB_00f25534:
          local_98 = (undefined8 *******)FUN_012cc2c0(uVar9,&DAT_01c1678c,&DAT_01d064b8);
          goto LAB_00f23e98;
        }
        pppppppuVar17 = (undefined8 *******)local_168;
        pppppppuVar13 = local_168._4_4_;
        FUN_00e6331c(&local_170,&local_108);
        uVar20 = local_168;
        local_1d8 = local_16c;
        if (local_170 == (undefined8 *******)&DAT_00000003 && local_16c == (undefined8 *******)0x0)
        goto LAB_00f23e94;
        local_1e4 = local_170;
        if (local_170 == (undefined8 *******)0x2 && local_16c == (undefined8 *******)0x0) {
          uVar9 = 1;
          goto LAB_00f25534;
        }
        FUN_00e6331c(&local_170,&local_108);
        uVar18 = local_168;
        pppppppuVar16 = local_16c;
        pppppppuVar5 = local_1d8;
        unaff_d9 = uVar20;
        if (local_170 == (undefined8 *******)&DAT_00000003 && local_16c == (undefined8 *******)0x0)
        goto LAB_00f23e94;
        local_1e8 = local_170;
        if (local_170 == (undefined8 *******)0x2 && local_16c == (undefined8 *******)0x0) {
          uVar9 = 2;
          uVar18 = unaff_d8;
          goto LAB_00f25534;
        }
        FUN_00e633f4(&local_170,&local_108);
        local_98 = local_16c;
        if (local_170 == (undefined8 *******)&DAT_00000003) goto LAB_00f23e98;
        local_1c8 = local_16c;
        local_1c4 = local_170;
        if (local_170 == (undefined8 *******)0x2) {
          uVar9 = 3;
          goto LAB_00f25534;
        }
        FUN_00e633f4(&local_170,&local_108);
        local_1c0 = local_16c;
        local_1bc = local_170;
        if (local_170 == (undefined8 *******)&DAT_00000003) {
          local_98 = local_16c;
          goto LAB_00f23e98;
        }
        if (local_170 == (undefined8 *******)0x2) {
          uVar9 = 4;
          goto LAB_00f25534;
        }
        FUN_00e633f4(&local_170,&local_108);
        local_1d4 = local_16c;
        local_1cc = local_170;
        if (local_170 == (undefined8 *******)&DAT_00000003) {
          local_98 = local_16c;
          goto LAB_00f23e98;
        }
        if (local_170 == (undefined8 *******)0x2) {
          uVar9 = 5;
          goto LAB_00f25534;
        }
        FUN_00e63664(&local_170,&local_108);
        if (local_170 == (undefined8 *******)&DAT_00000006 && local_16c == (undefined8 *******)0x0)
        {
          local_98 = (undefined8 *******)local_168;
          goto LAB_00f23e98;
        }
        local_a8 = local_168._4_4_;
        local_a4 = local_160;
        pppppppuStack_a0 = local_15c;
        if (local_170 == (undefined8 *******)&DAT_00000005 && local_16c == (undefined8 *******)0x0)
        {
          uVar9 = 6;
          goto LAB_00f25534;
        }
        local_188 = CONCAT44(local_160,local_168._4_4_);
        pppppppuStack_180 = local_15c;
        local_98 = pppppppuVar17;
        local_94 = pppppppuVar13;
        local_1b4 = local_170;
        local_1dc = local_16c;
        local_1d0 = (undefined8 *******)local_168;
        pppppppuVar17 = pppppppuVar16;
      }
      local_1e0 = local_94;
      pppppppuVar16 = local_98;
      *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
      local_e8 = local_1e8;
      local_100 = CONCAT44(local_94,local_98);
      _local_d0 = CONCAT44((undefined8 *******)local_188,local_1d0);
      local_c8 = local_188._4_4_;
      local_c4 = pppppppuStack_180;
      local_ac = local_1d4;
      local_b0 = local_1cc;
      local_b4 = local_1c0;
      local_b8 = local_1bc;
      local_bc = local_1c8;
      local_c0 = local_1c4;
      local_108 = pppppppuVar10;
      local_104 = pppppppuVar8;
      local_f4 = local_1d8;
      local_e4 = pppppppuVar17;
      local_d8 = local_1b4;
      local_d4 = local_1dc;
      local_110[0] = (undefined8 *******)FUN_014d9568(pppppppuVar15);
      local_160 = local_1e4;
      local_150 = local_1e8;
      local_168 = CONCAT44(local_1e0,pppppppuVar16);
      _local_138 = CONCAT44((undefined8 *******)local_188,local_1d0);
      local_130 = local_188._4_4_;
      local_12c = pppppppuStack_180;
      local_114 = local_1d4;
      local_118 = local_1cc;
      local_11c = local_1c0;
      local_120 = local_1bc;
      local_124 = local_1c8;
      local_128 = local_1c4;
      local_170 = pppppppuVar10;
      local_16c = pppppppuVar8;
      local_15c = local_1d8;
      local_14c = pppppppuVar17;
      local_13c = local_1dc;
      if (pppppppuVar10 == (undefined8 *******)0x2 && pppppppuVar8 == (undefined8 *******)0x0) {
        pppppppuVar10 = (undefined8 *******)0x2;
        pppppppuVar5 = (undefined8 *******)0x0;
        if (local_110[0] == (undefined8 *******)0x0) {
        }
        else {
          FUN_00f80260(local_110);
        }
      }
      else if (local_110[0] == (undefined8 *******)0x0) {
        local_198 = (undefined8 *******)local_188;
        local_194 = local_188._4_4_;
        pppppppuStack_190 = pppppppuStack_180;
        pppppppuVar5 = pppppppuVar8;
      }
      else {
        pppppppuVar10 = (undefined8 *******)0x2;
        pppppppuVar16 = local_110[0];
        pppppppuVar5 = (undefined8 *******)0x0;
      }
      goto LAB_00f243d0;
    }
  }
LAB_00f2227c:
  local_170 = (undefined8 *******)&DAT_00000005;
  pppppppuVar16 = (undefined8 *******)FUN_012c6b30(pppppppuVar15,&local_170);
  local_1e8 = pppppppuVar8;
LAB_00f22294:
  FUN_0196bf0c(pppppppuVar4,&local_60);
  pppppppuVar5 = (undefined8 *******)0x0;
  pppppppuVar10 = (undefined8 *******)0x2;
  local_1e4 = pppppppuVar15;
  goto LAB_00f222ac;
LAB_00f230d8:
  pppppppuVar8 = local_15c;
  FUN_01278730(&local_108,local_1bc);
  if ((char)local_108 == '\x01') goto LAB_00f24854;
  if (local_108._1_1_ != '\x01') {
    local_1cc = (undefined8 *******)0x0;
    if (local_1f0 != (undefined8 *******)0x2) {
      local_1cc = local_1f0;
    }
    local_1bc = (undefined8 *******)0x0;
    if (local_1f4 != (undefined8 *******)0x2) {
      local_1bc = local_1f4;
    }
    local_1c4 = (undefined8 *******)0x0;
    if (local_1ec != (undefined8 *******)0x2) {
      local_1c4 = local_1ec;
    }
    if (local_1e8 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
      local_1e8 = (undefined8 *******)0x0;
      pppppppuVar17 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar17 = pppppppuVar10;
    }
    if (local_1e4 == (undefined8 *******)0x2 && local_1d8 == (undefined8 *******)0x0) {
      local_1e4 = (undefined8 *******)0x0;
      pppppppuVar8 = (undefined8 *******)0x0;
    }
    else {
      pppppppuVar8 = local_1d8;
    }
    if (local_1e0 == (undefined8 *******)0x2 && pppppppuVar5 == (undefined8 *******)0x0) {
      local_1e0 = (undefined8 *******)0x0;
      pppppppuVar5 = (undefined8 *******)0x0;
    }
    if (local_1b4 == (undefined8 *******)&DAT_00000005 && local_1dc == (undefined8 *******)0x0) {
      local_1b4 = (undefined8 *******)&SUB_00000004;
      local_1dc = (undefined8 *******)0x0;
    }
    else {
      local_108 = local_a8;
      local_104 = local_a4;
      local_100 = CONCAT44(local_100._4_4_,pppppppuStack_a0);
    }
    if (local_170 != (undefined8 *******)&DAT_80000000) {
      FUN_019bb7e0(local_170,local_16c);
    }
    local_188 = CONCAT44(local_104,local_108);
    pppppppuStack_180 = (undefined8 *******)local_100;
    local_178 = unaff_d10;
    goto LAB_00f24e94;
  }
  pppppppuVar15[2] = (undefined8 ******)0x0;
  pppppppuVar15[5] = (undefined8 ******)((int)pppppppuVar15[5] + 1);
  FUN_01968828(&local_108,pppppppuVar15 + 3);
  pppppppuVar17 = local_104;
  if (local_108 == (undefined8 *******)0x2) goto LAB_00f24854;
  pppppppuVar16 = (undefined8 *******)local_100;
  uVar9 = 0;
  pppppppuVar8 = pppppppuVar16;
  if (((uint)local_108 & 1) == 0) {
    pppppppuVar13 = local_1c4;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f255e0;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar8 = (undefined8 *******)0x0;
      pppppppuVar13 = (undefined8 *******)&DAT_00000001;
    }
    else {
      pppppppuVar13 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar13 == (undefined8 *******)0x0) goto LAB_00f255dc;
    }
    FUN_01bed4e2(pppppppuVar13,pppppppuVar17,pppppppuVar16);
    local_1c4 = pppppppuVar13;
  }
  else {
    pppppppuVar13 = local_1cc;
    if ((int)(undefined8 *******)local_100 < 0) goto LAB_00f255e0;
    if ((undefined8 *******)local_100 == (undefined8 *******)0x0) {
      pppppppuVar8 = (undefined8 *******)0x0;
      pppppppuVar13 = (undefined8 *******)&DAT_00000001;
    }
    else {
      pppppppuVar13 = (undefined8 *******)FUN_01298504((undefined8 *******)local_100,1);
      if (pppppppuVar13 == (undefined8 *******)0x0) {
LAB_00f255dc:
        uVar9 = 1;
        pppppppuVar13 = pppppppuVar16;
LAB_00f255e0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,pppppppuVar13);
      }
    }
    FUN_01bed4e2(pppppppuVar13,pppppppuVar17,pppppppuVar16);
    local_1cc = pppppppuVar13;
  }
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_168._0_4_ = pppppppuVar16;
  local_170 = pppppppuVar8;
  local_16c = pppppppuVar13;
  pppppppuVar8 = pppppppuVar5;
  uVar19 = uVar18;
  uVar21 = uVar20;
  switch(pppppppuVar16) {
  case (undefined8 *******)0xa:
    iVar6 = thunk_FUN_01bed842(pppppppuVar17,"pause_mode",10);
    if (iVar6 != 0) goto switchD_00f23218_caseD_b;
    if (local_1b4 != (undefined8 *******)&DAT_00000005 || local_1dc != (undefined8 *******)0x0) {
      local_94 = (undefined8 *******)&DAT_0000000a;
      local_204 = (undefined8 *******)0x49fb50;
      goto LAB_00f253fc;
    }
    FUN_00e61ea8(&local_108,&local_170);
    local_1d0 = (undefined8 *******)local_100;
    local_1dc = local_104;
    if (local_108 == (undefined8 *******)&DAT_00000005 && local_104 == (undefined8 *******)0x0) {
      local_1b4 = local_108;
      pppppppuVar17 = (undefined8 *******)local_100;
      goto LAB_00f25168;
    }
    local_a8 = local_100._4_4_;
    local_a4 = local_f8;
    pppppppuStack_a0 = local_f4;
    local_1b4 = local_108;
    break;
  default:
switchD_00f23218_caseD_b:
    pppppppuVar17 = (undefined8 *******)FUN_00e620c0(&local_170);
    if (pppppppuVar17 != (undefined8 *******)0x0) goto LAB_00f25168;
    break;
  case (undefined8 *******)0xd:
    iVar6 = thunk_FUN_01bed842(pppppppuVar17,"min_fan_speed",0xd);
    if (iVar6 == 0) {
      if (local_1ec != (undefined8 *******)0x2) {
        local_94 = (undefined8 *******)&DAT_0000000d;
        local_204 = (undefined8 *******)0x49fa5d;
        goto LAB_00f253fc;
      }
      FUN_00e61db0(&local_108,&local_170);
      local_1c8 = local_104;
      local_1ec = local_108;
      if (local_108 != (undefined8 *******)0x2) break;
      pppppppuVar17 = local_104;
LAB_00f25168:
      pppppppuVar8 = local_1b4;
      local_1b4 = pppppppuVar5;
    }
    else {
      iVar6 = thunk_FUN_01bed842(pppppppuVar17,"max_fan_speed",0xd);
      if (iVar6 != 0) goto switchD_00f23218_caseD_b;
      if (local_1f4 == (undefined8 *******)0x2) {
        FUN_00e61db0(&local_108,&local_170);
        local_1c0 = local_104;
        local_1f4 = local_108;
        if (local_108 == (undefined8 *******)0x2) {
          pppppppuVar17 = local_104;
          goto LAB_00f25168;
        }
        break;
      }
      local_94 = (undefined8 *******)&DAT_0000000d;
      local_204 = (undefined8 *******)0x49fad5;
LAB_00f253fc:
      local_98 = local_204;
      local_108 = (undefined8 *******)&local_98;
      local_104 = (undefined8 *******)&DAT_0132b6a0;
      pppppppuVar17 = (undefined8 *******)FUN_019676ac(&DAT_005ab34f,&local_108);
      pppppppuVar8 = local_1b4;
      local_1b4 = pppppppuVar5;
    }
    goto LAB_00f248c4;
  case (undefined8 *******)0xf:
    iVar6 = thunk_FUN_01bed842(pppppppuVar17,"hot_temperature",0xf);
    if (iVar6 != 0) goto switchD_00f23218_caseD_b;
    if (local_1e4 != (undefined8 *******)0x2 || local_1d8 != (undefined8 *******)0x0) {
      local_94 = (undefined8 *******)&DAT_0000000f;
      local_204 = (undefined8 *******)0x49e319;
      goto LAB_00f253fc;
    }
    FUN_00e61fbc(&local_108,&local_170);
    local_1e4 = local_108;
    local_1d8 = local_104;
    uVar21 = local_100;
    if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0) {
LAB_00f25134:
      pppppppuVar17 = (undefined8 *******)local_100;
      goto LAB_00f25168;
    }
    break;
  case (undefined8 *******)0x12:
    iVar6 = thunk_FUN_01bed842(pppppppuVar17,"target_temperature",0x12);
    if (iVar6 != 0) goto switchD_00f23218_caseD_b;
    if (!(local_1e0 == (undefined8 *******)0x2 && pppppppuVar5 == (undefined8 *******)0x0)) {
      local_94 = (undefined8 *******)&DAT_00000012;
      goto LAB_00f253fc;
    }
    FUN_00e61fbc(&local_108,&local_170);
    local_1e0 = local_108;
    pppppppuVar8 = local_104;
    unaff_d10 = local_100;
    if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
    goto LAB_00f25134;
    break;
  case (undefined8 *******)0x15:
    iVar6 = thunk_FUN_01bed842(pppppppuVar17,"dangerous_temperature",0x15);
    if (iVar6 == 0) {
      if (local_1e8 != (undefined8 *******)0x2 || pppppppuVar10 != (undefined8 *******)0x0) {
        local_94 = (undefined8 *******)&DAT_00000015;
        local_204 = (undefined8 *******)0x49e328;
        goto LAB_00f253fc;
      }
      FUN_00e61fbc(&local_108,&local_170);
      local_1e8 = local_108;
      pppppppuVar10 = local_104;
      uVar19 = local_100;
      if (local_108 == (undefined8 *******)0x2 && local_104 == (undefined8 *******)0x0)
      goto LAB_00f25134;
    }
    else {
      iVar6 = thunk_FUN_01bed842(pppppppuVar17,"minimum_required_fans",0x15);
      if (iVar6 != 0) goto switchD_00f23218_caseD_b;
      if (local_1f0 != (undefined8 *******)0x2) {
        local_94 = (undefined8 *******)&DAT_00000015;
        local_204 = (undefined8 *******)0x49e304;
        goto LAB_00f253fc;
      }
      FUN_00e61db0(&local_108,&local_170);
      local_1d4 = local_104;
      local_1f0 = local_108;
      if (local_108 == (undefined8 *******)0x2) {
        pppppppuVar17 = local_104;
        goto LAB_00f25168;
      }
    }
  }
  pppppppuVar16 = local_158;
  pppppppuVar5 = pppppppuVar8;
  uVar18 = uVar19;
  uVar20 = uVar21;
  goto LAB_00f230d8;
LAB_00f2513c:
  pppppppuVar13 = (undefined8 *******)local_100;
LAB_00f2495c:
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_170 = pppppppuVar13;
  FUN_0196bf0c(pppppppuVar4,&local_60);
  local_188 = CONCAT44(local_188._4_4_,pppppppuVar13);
  pppppppuVar10 = (undefined8 *******)0x0;
  local_1d8 = (undefined8 *******)0x2;
  local_1d4 = pppppppuVar16;
  local_1d0 = pppppppuVar5;
  local_1bc = (undefined8 *******)((int)&local_168 + 4);
LAB_00f2498c:
  uVar20 = local_188;
  *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
  local_f4 = local_1b0;
  local_e4 = local_1bc;
  local_108 = local_1d8;
  local_104 = pppppppuVar10;
  local_100 = local_188;
  local_f8 = local_1d0;
  local_e8 = local_1d4;
  local_140 = (undefined8 *******)FUN_012c7b64(pppppppuVar15);
  pppppppuVar8 = (undefined8 *******)((ulonglong)uVar20 >> 0x20);
  pppppppuVar16 = (undefined8 *******)uVar20;
  local_15c = local_1b0;
  local_14c = local_1bc;
  local_170 = local_1d8;
  local_16c = pppppppuVar10;
  local_168 = uVar20;
  local_160 = local_1d0;
  local_150 = local_1d4;
  if (local_1d8 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
    pppppppuVar10 = (undefined8 *******)0x0;
    pppppppuVar13 = (undefined8 *******)0x2;
    pppppppuVar5 = local_1bc;
    if (local_140 != (undefined8 *******)0x0) {
      FUN_00f80260(&local_140);
      pppppppuVar8 = extraout_r2_02;
    }
  }
  else {
    pppppppuVar13 = local_1d8;
    pppppppuVar5 = local_1d0;
    if (local_140 != (undefined8 *******)0x0) {
      pppppppuVar10 = (undefined8 *******)0x0;
      pppppppuVar13 = (undefined8 *******)0x2;
      pppppppuVar16 = local_140;
    }
  }
  uVar20 = unaff_d8;
LAB_00f24bac:
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
LAB_00f25198:
    pppppppuVar16 = (undefined8 *******)FUN_0127dee8(pppppppuVar16,pppppppuVar15);
    goto LAB_00f22398;
  }
LAB_00f223b0:
  if (local_60 == (undefined8 ******)0x4 || local_60 == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_58,local_54);
  }
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
    FUN_0196bf0c(pppppppuVar4,&local_78);
    pppppppuVar10 = (undefined8 *******)0x0;
    pppppppuVar13 = (undefined8 *******)0x2;
  }
  if (local_78 == 4 || local_78 == 2) {
    FUN_019bb7e0(local_70,local_6c);
  }
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
    local_170 = pppppppuVar16;
    FUN_0196bf0c(pppppppuVar4,&local_8c);
    pppppppuVar10 = (undefined8 *******)0x0;
    pppppppuVar13 = (undefined8 *******)0x2;
  }
  if (local_8c == (undefined8 ******)0x4 || local_8c == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_84,local_80);
  }
  if (pppppppuVar13 == (undefined8 *******)0x2 && pppppppuVar10 == (undefined8 *******)0x0) {
LAB_00f225dc:
    param_1[2] = (undefined8 ******)pppppppuVar16;
    ppppppuVar7 = (undefined8 ******)0x4;
  }
  else {
    param_1[4] = (undefined8 ******)pppppppuVar16;
    param_1[6] = (undefined8 ******)pppppppuVar5;
    param_1[7] = (undefined8 ******)local_1b0;
    *pppppppuVar11 = (undefined8 ******)pppppppuVar13;
    param_1[10] = (undefined8 ******)local_1d4;
    param_1[0xb] = (undefined8 ******)local_1bc;
    param_1[3] = (undefined8 ******)pppppppuVar10;
    ppppppuVar7 = (undefined8 ******)0x2;
LAB_00f22724:
    param_1[5] = (undefined8 ******)pppppppuVar8;
    *(undefined8 *)(param_1 + 8) = uVar20;
    *(undefined8 *)(param_1 + 0xc) = unaff_d9;
  }
  *param_1 = ppppppuVar7;
  param_1[1] = (undefined8 ******)0x0;
  return;
LAB_00f24854:
  pppppppuVar17 = local_104;
  local_1b4 = local_16c;
  pppppppuVar5 = local_170;
  local_170 = (undefined8 *******)&DAT_80000000;
  if (pppppppuVar5 == (undefined8 *******)&DAT_80000000) {
    local_108 = (undefined8 *******)&DAT_00000008;
  }
  else {
    local_108 = (undefined8 *******)0x2;
    local_100 = CONCAT44(local_16c,pppppppuVar5);
    local_f8 = (undefined8 *******)local_168;
  }
  local_104 = pppppppuVar8;
  FUN_0196bf0c(pppppppuVar16,&local_108);
  if (pppppppuVar5 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(pppppppuVar5,local_1b4);
  }
  pppppppuVar8 = pppppppuVar17;
LAB_00f248c4:
  if (local_170 != (undefined8 *******)&DAT_80000000) {
    FUN_019bb7e0(local_170,local_16c);
  }
  local_170 = pppppppuVar17;
  FUN_0196bf0c(pppppppuVar4,&local_60);
  local_178 = CONCAT44(local_178._4_4_,pppppppuVar17);
  pppppppuVar5 = (undefined8 *******)0x0;
  local_1e0 = (undefined8 *******)0x2;
  local_1dc = extraout_r2_01;
LAB_00f24e94:
  uVar19 = local_178;
  *(char *)(pppppppuVar15 + 7) = *(char *)(pppppppuVar15 + 7) + '\x01';
  local_e8 = local_1e8;
  _local_d0 = CONCAT44((undefined8 *******)local_188,local_1d0);
  local_c8 = local_188._4_4_;
  local_c4 = pppppppuStack_180;
  local_ac = local_1d4;
  local_b0 = local_1cc;
  local_b4 = local_1c0;
  local_b8 = local_1bc;
  local_bc = local_1c8;
  local_c0 = local_1c4;
  local_108 = local_1e0;
  local_104 = pppppppuVar5;
  local_100 = local_178;
  local_f4 = pppppppuVar8;
  local_e4 = pppppppuVar17;
  local_d8 = local_1b4;
  local_d4 = local_1dc;
  pppppppuVar16 = (undefined8 *******)FUN_012c7b64(pppppppuVar15);
  local_160 = local_1e4;
  local_150 = local_1e8;
  _local_138 = CONCAT44((undefined8 *******)local_188,local_1d0);
  local_130 = local_188._4_4_;
  local_12c = pppppppuStack_180;
  local_114 = local_1d4;
  local_118 = local_1cc;
  local_11c = local_1c0;
  local_120 = local_1bc;
  local_124 = local_1c8;
  local_128 = local_1c4;
  local_170 = local_1e0;
  local_16c = pppppppuVar5;
  local_168 = uVar19;
  local_15c = pppppppuVar8;
  local_110[0] = pppppppuVar16;
  local_14c = pppppppuVar17;
  local_13c = local_1dc;
  if (local_1e0 == (undefined8 *******)0x2 && pppppppuVar5 == (undefined8 *******)0x0) {
    pppppppuVar5 = (undefined8 *******)0x0;
    pppppppuVar10 = (undefined8 *******)0x2;
    if (pppppppuVar16 != (undefined8 *******)0x0) {
      FUN_00f80260(local_110);
      pppppppuVar17 = extraout_r12;
    }
LAB_00f25024:
    pppppppuVar16 = (undefined8 *******)uVar19;
  }
  else {
    if (pppppppuVar16 == (undefined8 *******)0x0) {
      local_198 = (undefined8 *******)local_188;
      local_194 = local_188._4_4_;
      pppppppuStack_190 = pppppppuStack_180;
      pppppppuVar10 = local_1e0;
      goto LAB_00f25024;
    }
    pppppppuVar5 = (undefined8 *******)0x0;
    pppppppuVar10 = (undefined8 *******)0x2;
  }
  local_1e0 = (undefined8 *******)((ulonglong)uVar19 >> 0x20);
  local_1d8 = pppppppuVar8;
LAB_00f243d0:
  if (pppppppuVar10 == (undefined8 *******)0x2 && pppppppuVar5 == (undefined8 *******)0x0) {
    unaff_d8 = uVar18;
    unaff_d9 = uVar20;
LAB_00f251ec:
    pppppppuVar16 = (undefined8 *******)FUN_0127dee8(pppppppuVar16,pppppppuVar15);
    local_1e8 = pppppppuVar8;
    uVar18 = unaff_d8;
    uVar20 = unaff_d9;
    goto LAB_00f22294;
  }
  local_170 = local_198;
  local_16c = local_194;
  local_168 = CONCAT44(local_168._4_4_,pppppppuStack_190);
LAB_00f222ac:
  if (local_60 == (undefined8 ******)0x4 || local_60 == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_58,local_54);
  }
  if (pppppppuVar10 == (undefined8 *******)0x2 && pppppppuVar5 == (undefined8 *******)0x0) {
    FUN_0196bf0c(pppppppuVar4,&local_78);
    pppppppuVar5 = (undefined8 *******)0x0;
    pppppppuVar10 = (undefined8 *******)0x2;
  }
  else {
    local_108 = local_170;
    local_104 = local_16c;
    local_100 = CONCAT44(local_100._4_4_,(undefined8 *******)local_168);
  }
  if (local_78 == 4 || local_78 == 2) {
    FUN_019bb7e0(local_70,local_6c);
  }
  if (pppppppuVar10 == (undefined8 *******)0x2 && pppppppuVar5 == (undefined8 *******)0x0) {
    local_170 = pppppppuVar16;
    FUN_0196bf0c(pppppppuVar4,&local_8c);
    pppppppuVar5 = (undefined8 *******)0x0;
    pppppppuVar10 = (undefined8 *******)0x2;
  }
  else {
    local_170 = local_108;
    local_16c = local_104;
    local_168 = CONCAT44(local_168._4_4_,(undefined8 *******)local_100);
  }
  if (local_8c == (undefined8 ******)0x4 || local_8c == (undefined8 ******)0x2) {
    FUN_019bb7e0(local_84,local_80);
  }
  if (pppppppuVar10 == (undefined8 *******)0x2 && pppppppuVar5 == (undefined8 *******)0x0) {
    param_1[2] = (undefined8 ******)pppppppuVar16;
LAB_00f228f8:
    ppppppuVar7 = (undefined8 ******)0x4;
  }
  else {
    *pppppppuVar11 = (undefined8 ******)pppppppuVar10;
    param_1[0xe] = (undefined8 ******)local_1b4;
    param_1[4] = (undefined8 ******)pppppppuVar16;
    param_1[5] = (undefined8 ******)local_1e0;
    param_1[0x10] = (undefined8 ******)local_1d0;
    param_1[7] = (undefined8 ******)local_1d8;
    param_1[6] = (undefined8 ******)local_1e4;
    param_1[10] = (undefined8 ******)local_1e8;
    *(undefined8 *)(param_1 + 8) = uVar20;
    *(undefined8 *)(param_1 + 0xc) = uVar18;
    param_1[3] = (undefined8 ******)pppppppuVar5;
    param_1[0xb] = (undefined8 ******)pppppppuVar17;
    param_1[0xf] = (undefined8 ******)local_1dc;
    param_1[0x11] = (undefined8 ******)local_170;
    param_1[0x12] = (undefined8 ******)local_16c;
    param_1[0x13] = (undefined8 ******)(undefined8 *******)local_168;
    param_1[0x14] = (undefined8 ******)local_1c4;
    param_1[0x15] = (undefined8 ******)local_1c8;
    param_1[0x16] = (undefined8 ******)local_1bc;
    param_1[0x17] = (undefined8 ******)local_1c0;
    param_1[0x18] = (undefined8 ******)local_1cc;
    param_1[0x19] = (undefined8 ******)local_1d4;
    ppppppuVar7 = (undefined8 ******)0x0;
  }
LAB_00f2298c:
  *param_1 = ppppppuVar7;
  param_1[1] = (undefined8 ******)0x0;
  return;
}

