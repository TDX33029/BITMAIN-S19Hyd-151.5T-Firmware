// FUN_0178ac08 @ 0178ac08 size=2560 calls_out=25 calls_in=1
// strings: unknown proxy scheme

bool FUN_0178ac08(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  int *******pppppppiVar2;
  int *******pppppppiVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  bool bVar10;
  uint *puVar11;
  char *pcVar12;
  int *******pppppppiVar13;
  uint uVar14;
  int ******ppppppiVar15;
  int *****pppppiVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint local_190;
  int local_178;
  int local_160;
  int local_15c;
  int *******local_158;
  int *******local_154;
  int *******local_150;
  int *******local_14c;
  int *******pppppppiStack_148;
  int *******pppppppiStack_144;
  int *******pppppppiStack_140;
  int *******local_13c;
  int *******pppppppiStack_138;
  int *******pppppppiStack_134;
  int *******pppppppiStack_130;
  int *******pppppppiStack_12c;
  int *******local_128;
  int *******local_124;
  int *******pppppppiStack_120;
  int *******pppppppiStack_11c;
  int *******local_118;
  int *******local_114;
  int *******pppppppiStack_110;
  int *******pppppppiStack_10c;
  int *******pppppppiStack_108;
  int *******local_104;
  int *******local_e0;
  int *******local_dc;
  int *******local_d8;
  int *******local_d4;
  int *******local_d0;
  int *******local_cc;
  int *******pppppppiStack_c8;
  int *******pppppppiStack_c4;
  int *******pppppppiStack_c0;
  int *******pppppppiStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *******local_a0;
  int *******local_9c;
  int *******local_98;
  int *******pppppppiStack_94;
  int *******local_90;
  int *******local_8c;
  int *******local_88;
  int *******local_84;
  int *******local_80;
  int *******pppppppiStack_7c;
  int *******pppppppiStack_78;
  int *******pppppppiStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_019abc84(&local_160,param_4,param_5);
  ppppppiVar15 = (int ******)0x0;
  if (local_160 != 0) {
    if (local_15c == -0x80000000) {
      return false;
    }
    FUN_019bb7e0(local_15c,local_158);
    return false;
  }
  FUN_013245a0(local_158,local_154);
  if (extraout_r1 == 0) {
    FUN_019bb7e0(local_15c,local_158);
    return false;
  }
  FUN_017d3d2c(&local_128,local_158,local_154);
  pppppppiVar3 = local_124;
  if (local_128 == (int *******)0x2) {
    uVar19 = CONCAT44(extraout_r1_00,local_124[0x13]);
    if (local_124[0x13] != (int ******)0x0) {
      ppppppiVar15 = local_124[0x14];
    }
    while( true ) {
      pcVar12 = (char *)uVar19;
      if (pcVar12 == (char *)0x0) break;
      pppppiVar16 = ppppppiVar15[7];
      (*(code *)pppppiVar16)(&local_a0,pcVar12);
      if ((local_a0 == (int *******)0x7ea7c456 && local_98 == (int *******)0xc17d8d15) &&
          (local_9c == (int *******)0xbd71f5ad && pppppppiStack_94 == (int *******)0x510e6183)) {
        if (*pcVar12 == '\x06') {
LAB_0178aebc:
          local_dc = (int *******)&DAT_0132b6a0;
          local_e0 = (int *******)&local_150;
          local_14c = local_154;
          local_150 = local_158;
          FUN_00664898(&local_a0,&DAT_005b4978,&local_e0);
          pppppppiVar2 = local_9c;
          pppppppiVar13 = local_a0;
          FUN_017d3d2c(&local_a0,local_9c,local_98);
          FUN_019bb7e0(pppppppiVar13,pppppppiVar2);
          pppppppiVar13 = local_9c;
          if (local_a0 != (int *******)0x2) {
            local_e0 = local_98;
            local_dc = pppppppiStack_94;
            local_d8 = local_90;
            local_d4 = local_8c;
            local_d0 = local_88;
            local_cc = local_84;
            pppppppiStack_c8 = local_80;
            pppppppiStack_c4 = pppppppiStack_7c;
            pppppppiStack_c0 = pppppppiStack_78;
            pppppppiStack_bc = pppppppiStack_74;
            local_b8 = local_70;
            uStack_b4 = uStack_6c;
            uStack_b0 = uStack_68;
            uStack_ac = uStack_64;
            uStack_a8 = uStack_60;
            uStack_a4 = uStack_5c;
            FUN_017e2dac(pppppppiVar3);
            local_98 = local_e0;
            pppppppiStack_94 = local_dc;
            local_90 = local_d8;
            local_8c = local_d4;
            local_88 = local_d0;
            local_84 = local_cc;
            local_80 = pppppppiStack_c8;
            pppppppiStack_7c = pppppppiStack_c4;
            pppppppiStack_78 = pppppppiStack_c0;
            pppppppiStack_74 = pppppppiStack_bc;
            local_70 = local_b8;
            uStack_6c = uStack_b4;
            uStack_68 = uStack_b0;
            uStack_64 = uStack_ac;
            uStack_60 = uStack_a8;
            uStack_5c = uStack_a4;
            goto LAB_0178acd4;
          }
          pppppppiVar3 = (int *******)FUN_017e2d0c(0,extraout_r1_01,pppppppiVar3);
          FUN_017e2dac(pppppppiVar13);
          goto LAB_0178af4c;
        }
      }
      else {
        (*(code *)pppppiVar16)(&local_a0,pcVar12);
        if ((local_a0 == (int *******)0x6a7ca478 && local_98 == (int *******)0x4c649c3f) &&
            (local_9c == (int *******)0x60bbd5c8 && pppppppiStack_94 == (int *******)0x11a707e1))
        goto LAB_0178aebc;
      }
      uVar19 = (*(code *)ppppppiVar15[6])(pcVar12);
      ppppppiVar15 = (int ******)((ulonglong)uVar19 >> 0x20);
    }
    pppppppiVar3 = (int *******)FUN_017e2d0c(0,(int)((ulonglong)uVar19 >> 0x20),pppppppiVar3);
LAB_0178af4c:
    local_150 = (int *******)0x2;
    local_14c = pppppppiVar3;
  }
  else {
    FUN_01bed4e2(&local_a0,&local_128,0x48);
LAB_0178acd4:
    pppppppiVar3 = local_8c;
    if (local_80 == (int *******)0x0) {
LAB_0178af84:
      local_14c = (int *******)FUN_017f07c0("unknown proxy scheme",0x14);
      local_150 = (int *******)0x2;
    }
    else {
      if (local_80 < local_88) {
        if (*(char *)((int)local_8c + (int)local_80) < -0x40) {
LAB_0178ad00:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_8c,local_88,0,local_80,&DAT_01d2fde8);
        }
      }
      else if (local_80 != local_88) goto LAB_0178ad00;
      if (local_80 == (int *******)&DAT_00000005) {
        iVar9 = thunk_FUN_01bed842(local_8c,&DAT_0053278b,5);
        if (iVar9 != 0) goto LAB_0178af84;
        uVar19 = FUN_01ac9e3c(&local_a0,&DAT_01d1b66c);
        local_118 = (int *******)CONCAT31(local_118._1_3_,2);
        FUN_0140d954(&local_e0,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
        if (local_e0 != (int *******)0x0) {
          pppppppiVar13 = (int *******)&DAT_00000001;
          goto LAB_0178b304;
        }
        pppppppiVar13 = (int *******)FUN_017f0a80((uint)local_dc & 0xff);
        if ((char)local_118 != '\x02') {
          (*(code *)local_128[4])(&pppppppiStack_11c,local_124,pppppppiStack_120);
        }
LAB_0178b550:
        local_150 = (int *******)0x2;
        local_14c = pppppppiVar13;
      }
      else {
        if ((local_80 != (int *******)&SUB_00000004) || (*local_8c != (int ******)0x70747468))
        goto LAB_0178af84;
        uVar19 = FUN_01ac9e3c(&local_a0,&DAT_01d1b67c);
        local_118 = (int *******)CONCAT31(local_118._1_3_,2);
        FUN_0140d954(&local_e0,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
        if (local_e0 == (int *******)0x0) {
          pppppppiVar13 = (int *******)FUN_017f0a80((uint)local_dc & 0xff);
          if ((char)local_118 != '\x02') {
            (*(code *)local_128[4])(&pppppppiStack_11c,local_124,pppppppiStack_120);
          }
          goto LAB_0178b550;
        }
        pppppppiVar13 = (int *******)0x0;
LAB_0178b304:
        pppppppiVar2 = local_e0;
        local_e0 = pppppppiVar13;
        pppppppiVar13 = local_dc;
        local_dc = pppppppiVar2;
        pppppppiVar2 = local_d8;
        local_d8 = pppppppiVar13;
        local_d0 = local_d4;
        local_d4 = pppppppiVar2;
        local_cc = local_128;
        pppppppiStack_c8 = local_124;
        pppppppiStack_c4 = pppppppiStack_120;
        pppppppiStack_c0 = pppppppiStack_11c;
        pppppppiStack_bc = local_118;
        uVar19 = FUN_01ac9c00(&local_a0);
        iVar9 = (int)uVar19;
        if (iVar9 != 0) {
          uVar20 = FUN_01ac9d2c(&local_a0);
          FUN_01655be8(auStack_54,(int)uVar20,(int)uVar20 + (int)((ulonglong)uVar20 >> 0x20));
          FUN_01655be8(auStack_48,iVar9,iVar9 + (int)((ulonglong)uVar19 >> 0x20));
          local_128 = local_e0;
          local_124 = local_dc;
          pppppppiStack_120 = local_d8;
          pppppppiStack_11c = local_d4;
          local_118 = local_d0;
          local_114 = local_cc;
          pppppppiStack_110 = pppppppiStack_c8;
          pppppppiStack_10c = pppppppiStack_c4;
          pppppppiStack_108 = pppppppiStack_c0;
          local_104 = pppppppiStack_bc;
          if (((uint)local_e0 & 1) == 0) {
            FUN_00666914(&local_3c,auStack_54);
            FUN_00666914(&local_30,auStack_48);
            FUN_017c18e8(&local_150,local_38,local_34,local_2c,local_28);
            FUN_019bb7e0(local_30,local_2c);
            FUN_019bb7e0(local_3c,local_38);
            if ((char)local_104 != '\x02') {
              (*(code *)local_114[4])(&pppppppiStack_108,pppppppiStack_110,pppppppiStack_10c);
            }
          }
          else {
            FUN_00666914(&local_3c,auStack_54);
            FUN_00666914(&local_30,auStack_48);
            FUN_017c18e8(&local_150,local_38,local_34,local_2c,local_28);
            FUN_019bb7e0(local_30,local_2c);
            FUN_019bb7e0(local_3c,local_38);
            if ((char)local_104 != '\x02') {
              (*(code *)local_114[4])(&pppppppiStack_108,pppppppiStack_110,pppppppiStack_10c);
            }
          }
          local_114 = local_150;
          pppppppiStack_110 = local_14c;
          pppppppiStack_10c = pppppppiStack_148;
          pppppppiStack_108 = pppppppiStack_144;
          local_104 = pppppppiStack_140;
          local_e0 = local_128;
          local_dc = local_124;
          local_d8 = pppppppiStack_120;
          local_d4 = pppppppiStack_11c;
          local_d0 = local_118;
          local_cc = local_150;
          pppppppiStack_c8 = local_14c;
          pppppppiStack_c4 = pppppppiStack_148;
          pppppppiStack_c0 = pppppppiStack_144;
          pppppppiStack_bc = pppppppiStack_140;
        }
        local_150 = local_e0;
        local_14c = local_dc;
        pppppppiStack_148 = local_d8;
        pppppppiStack_144 = local_d4;
        pppppppiStack_140 = local_d0;
        local_13c = local_cc;
        pppppppiStack_138 = pppppppiStack_c8;
        pppppppiStack_134 = pppppppiStack_c4;
        pppppppiStack_130 = pppppppiStack_c0;
        pppppppiStack_12c = pppppppiStack_bc;
      }
    }
    FUN_019bb7e0(local_90,pppppppiVar3);
  }
  FUN_019bb7e0(local_15c,local_158);
  bVar18 = local_150 != (int *******)0x2;
  if (bVar18) {
    local_e0 = local_150;
    local_dc = local_14c;
    local_d8 = pppppppiStack_148;
    local_d4 = pppppppiStack_144;
    local_d0 = pppppppiStack_140;
    local_cc = local_13c;
    pppppppiStack_c8 = pppppppiStack_138;
    pppppppiStack_c4 = pppppppiStack_134;
    pppppppiStack_c0 = pppppppiStack_130;
    pppppppiStack_bc = pppppppiStack_12c;
    uVar4 = FUN_01298504(param_3,1);
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    FUN_01bed4e2(uVar4,param_2,param_3);
    local_a0 = local_e0;
    local_9c = local_dc;
    local_98 = local_d8;
    pppppppiStack_94 = local_d4;
    local_90 = local_d0;
    local_8c = local_cc;
    local_88 = pppppppiStack_c8;
    local_84 = pppppppiStack_c4;
    local_80 = pppppppiStack_c0;
    pppppppiStack_7c = pppppppiStack_bc;
    uVar5 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],uVar4,param_3);
    if (param_1[2] == 0) {
      FUN_0177f244(param_1,param_1 + 4);
    }
    puVar11 = (uint *)*param_1;
    uVar17 = param_1[1];
    bVar10 = false;
    local_178 = 0;
    uVar14 = uVar5;
    do {
      uVar14 = uVar17 & uVar14;
      uVar6 = *(uint *)((int)puVar11 + uVar14);
      uVar7 = uVar6 ^ (uVar5 >> 0x19) * 0x1010101;
      for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7)
      {
        uVar8 = uVar14 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                        (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar17;
        if ((param_3 == puVar11[uVar8 * -0xd + -0xb]) &&
           (iVar9 = thunk_FUN_01bed842(uVar4,puVar11[uVar8 * -0xd + -0xc]), iVar9 == 0)) {
          local_128 = (int *******)puVar11[uVar8 * -0xd + -10];
          local_124 = (int *******)puVar11[uVar8 * -0xd + -9];
          pppppppiStack_120 = (int *******)puVar11[uVar8 * -0xd + -8];
          pppppppiStack_11c = (int *******)puVar11[uVar8 * -0xd + -7];
          local_118 = (int *******)puVar11[uVar8 * -0xd + -6];
          local_114 = (int *******)puVar11[uVar8 * -0xd + -5];
          pppppppiStack_110 = (int *******)puVar11[uVar8 * -0xd + -4];
          pppppppiStack_10c = (int *******)puVar11[uVar8 * -0xd + -3];
          pppppppiStack_108 = (int *******)puVar11[uVar8 * -0xd + -2];
          local_104 = (int *******)puVar11[uVar8 * -0xd + -1];
          puVar11[uVar8 * -0xd + -10] = (uint)local_e0;
          puVar11[uVar8 * -0xd + -9] = (uint)local_dc;
          puVar11[uVar8 * -0xd + -8] = (uint)local_d8;
          puVar11[uVar8 * -0xd + -7] = (uint)local_d4;
          puVar11[uVar8 * -0xd + -6] = (uint)local_d0;
          puVar11[uVar8 * -0xd + -5] = (uint)local_cc;
          puVar11[uVar8 * -0xd + -4] = (uint)pppppppiStack_c8;
          puVar11[uVar8 * -0xd + -3] = (uint)pppppppiStack_c4;
          puVar11[uVar8 * -0xd + -2] = (uint)pppppppiStack_c0;
          puVar11[uVar8 * -0xd + -1] = (uint)pppppppiStack_bc;
          FUN_019bb7e0(param_3,uVar4);
          if (local_128 != (int *******)0x2) {
            FUN_0177a594(&local_128);
          }
          goto LAB_0178b204;
        }
      }
      uVar7 = uVar6 & 0x80808080;
      if (bVar10) {
LAB_0178b174:
        if ((uVar7 & uVar6 << 1) != 0) goto LAB_0178b560;
        bVar10 = true;
      }
      else {
        if (uVar7 != 0) {
          local_190 = uVar14 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                              (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                      uVar17;
          goto LAB_0178b174;
        }
        bVar10 = false;
      }
      local_178 = local_178 + 4;
      uVar14 = local_178 + uVar14;
    } while( true );
  }
LAB_0178b214:
  FUN_01783e28(&local_150);
  return bVar18;
LAB_0178b560:
  uVar14 = (uint)*(char *)((int)puVar11 + local_190);
  if (-1 < (int)uVar14) {
    uVar14 = *puVar11 & 0x80808080;
    uVar6 = LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                    uVar14 >> 0x18);
    uVar14 = (uint)*(byte *)((int)puVar11 + (uVar6 >> 3));
    local_190 = uVar6 >> 3;
  }
  bVar1 = (byte)(uVar5 >> 0x19);
  *(byte *)((int)puVar11 + local_190) = bVar1;
  param_1[2] = param_1[2] - (uVar14 & 1);
  param_1[3] = param_1[3] + 1;
  *(byte *)((int)puVar11 + (uVar17 & local_190 - 4) + 4) = bVar1;
  puVar11[local_190 * -0xd + -0xd] = param_3;
  puVar11[local_190 * -0xd + -0xb] = param_3;
  puVar11[local_190 * -0xd + -0xc] = uVar4;
  puVar11[local_190 * -0xd + -10] = (uint)local_e0;
  puVar11[local_190 * -0xd + -9] = (uint)local_dc;
  puVar11[local_190 * -0xd + -8] = (uint)local_d8;
  puVar11[local_190 * -0xd + -7] = (uint)local_d4;
  puVar11[local_190 * -0xd + -6] = (uint)local_d0;
  puVar11[local_190 * -0xd + -5] = (uint)local_cc;
  puVar11[local_190 * -0xd + -4] = (uint)pppppppiStack_c8;
  puVar11[local_190 * -0xd + -3] = (uint)pppppppiStack_c4;
  puVar11[local_190 * -0xd + -2] = (uint)pppppppiStack_c0;
  puVar11[local_190 * -0xd + -1] = (uint)pppppppiStack_bc;
LAB_0178b204:
  if (local_150 != (int *******)0x2) {
    return true;
  }
  goto LAB_0178b214;
}

