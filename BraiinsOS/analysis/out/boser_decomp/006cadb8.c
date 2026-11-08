// FUN_006cadb8 @ 006cadb8 size=1580 calls_out=12 calls_in=2
// strings: 

void FUN_006cadb8(undefined4 *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int local_198;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 *local_124;
  undefined4 *local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  uint local_114;
  undefined4 local_110;
  undefined4 *puStack_10c;
  undefined4 uStack_108;
  undefined4 *puStack_104;
  uint uStack_100;
  undefined4 local_f8;
  undefined4 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [4];
  undefined4 *local_c4;
  undefined4 *local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 uStack_50;
  undefined4 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar15 = param_1[6];
  if (uVar15 == 0) {
LAB_006cae18:
    local_58 = *param_4;
    local_54 = (undefined4 *)param_4[1];
    uStack_50 = param_4[2];
    local_4c = (undefined4 *)param_4[3];
    local_48 = param_4[4];
    local_44 = param_4[5];
    local_40 = param_4[6];
    uStack_3c = param_4[7];
    local_38 = param_4[8];
    uStack_34 = param_4[9];
    uStack_30 = param_4[10];
    uStack_2c = param_4[0xb];
    FUN_007017f4(&local_88,param_1,param_2,param_3,&local_58);
    if (local_78 != -0x7ffffff9) {
      FUN_00db19c4(&local_88);
    }
    return;
  }
  if (uVar15 != 1) {
    uVar14 = FUN_00701e18(*param_1,param_1[1],param_1[2],param_1[3],param_2,param_3);
    uVar11 = param_1[8];
    uVar6 = uVar14 >> 0x19;
    local_198 = 0;
    iVar2 = param_1[7];
    iVar13 = param_1[5];
    while( true ) {
      uVar14 = uVar11 & uVar14;
      uVar3 = *(uint *)(iVar2 + uVar14);
      uVar4 = uVar3 ^ uVar6 * 0x1010101;
      for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4)
      {
        uVar18 = *(uint *)(iVar2 + -4 +
                          (uVar14 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                   (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3
                                    ) & uVar11) * -4);
        if (uVar15 <= uVar18) {
          puVar12 = &DAT_01d307c8;
          goto LAB_006cb3cc;
        }
        iVar5 = iVar13 + uVar18 * 0x40;
        if ((param_3 == *(int *)(iVar5 + 0x34)) &&
           (iVar5 = thunk_FUN_01bed842(param_2 + 2,*(int *)(iVar5 + 0x30) + 8,param_3), iVar5 == 0))
        goto LAB_006cafc8;
      }
      if ((uVar3 & 0x80808080 & uVar3 << 1) != 0) break;
      local_198 = local_198 + 4;
      uVar14 = local_198 + uVar14;
    }
    goto LAB_006cae18;
  }
  iVar13 = param_1[5];
  if ((param_3 != *(int *)(iVar13 + 0x34)) ||
     (iVar2 = thunk_FUN_01bed842(param_2 + 2,*(int *)(iVar13 + 0x30) + 8,param_3), iVar2 != 0))
  goto LAB_006cae18;
  uVar18 = 0;
LAB_006cafc8:
  if (uVar15 <= uVar18) {
    puVar12 = &DAT_01d2c094;
LAB_006cb3cc:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar18,uVar15,puVar12);
  }
  iVar13 = iVar13 + uVar18 * 0x40;
  uVar15 = *(uint *)(iVar13 + 0x10);
  if ((int)uVar15 < 0) {
    uVar6 = param_4[4];
    if (!(uVar15 == 0x80000006 && uVar6 == 0x80000006)) goto LAB_006cb0ac;
    local_11c = *param_4;
    local_124 = (undefined4 *)param_4[1];
    local_114 = 0;
    puVar7 = local_124 + param_4[2] * 0xc;
    local_120 = local_124;
    local_118 = puVar7;
    if (param_4[2] != 0) {
      puVar8 = (undefined4 *)((uint)&local_58 | 4);
      puVar10 = (undefined4 *)((uint)&local_110 | 4);
      uVar6 = 0;
      puVar20 = local_124;
      local_120 = local_124;
      do {
        uVar11 = puVar20[4];
        puVar21 = puVar20 + 0xc;
        uVar14 = uVar6;
        if (uVar11 == 0x80000007) goto LAB_006cb310;
        local_88 = puVar20[5];
        uStack_84 = puVar20[6];
        uStack_80 = puVar20[7];
        local_7c = puVar20[8];
        local_78 = puVar20[9];
        uStack_74 = puVar20[10];
        uStack_70 = puVar20[0xb];
        uVar16 = puVar20[1];
        uVar17 = puVar20[2];
        uVar19 = puVar20[3];
        *puVar8 = *puVar20;
        puVar8[1] = uVar16;
        puVar8[2] = uVar17;
        puVar8[3] = uVar19;
        local_110 = local_58;
        puStack_10c = local_54;
        uStack_108 = uStack_50;
        puStack_104 = local_4c;
        uStack_100 = local_48;
        uVar14 = uVar6 + 1;
        local_58 = *puVar10;
        local_54 = (undefined4 *)puVar10[1];
        uStack_50 = puVar10[2];
        local_4c = (undefined4 *)puVar10[3];
        local_48 = uVar11;
        if ((uVar6 < *(uint *)(iVar13 + 8)) &&
           (iVar2 = *(int *)(iVar13 + 4) + uVar6 * 0x30, -1 < *(int *)(iVar2 + 0x10))) {
          if (-1 < (int)uVar11) {
            local_f8 = local_58;
            puStack_f4 = local_54;
            uStack_f0 = uStack_50;
            puStack_ec = local_4c;
            uStack_e8 = uVar11;
            uStack_e4 = local_88;
            local_e0 = uStack_84;
            uStack_dc = uStack_80;
            uStack_d8 = local_7c;
            iStack_d4 = local_78;
            uStack_d0 = uStack_74;
            uStack_cc = uStack_70;
            FUN_00701dc0(auStack_c8);
            puVar20 = local_bc;
            for (puVar9 = local_c4; puVar9 != puVar20; puVar9 = puVar9 + 0x10) {
              if (puVar9[4] == -0x7ffffff9) {
                puVar9 = puVar9 + 0x10;
                break;
              }
              local_b8 = *puVar9;
              uStack_b4 = puVar9[1];
              uStack_b0 = puVar9[2];
              uStack_ac = puVar9[3];
              local_a4 = puVar9[5];
              uStack_a0 = puVar9[6];
              uStack_9c = puVar9[7];
              local_98 = puVar9[8];
              uStack_94 = puVar9[9];
              uStack_90 = puVar9[10];
              uStack_8c = puVar9[0xb];
              local_a8 = puVar9[4];
              FUN_006cadb8(iVar2,puVar9[0xc],puVar9[0xd],&local_b8);
            }
            local_c4 = puVar9;
            FUN_00703700(auStack_c8);
            if (local_48 < 0x80000000) goto LAB_006cb2f8;
          }
LAB_006cb2f0:
          FUN_00db19c4(&local_58);
        }
        else {
          if ((int)uVar11 < 0) goto LAB_006cb2f0;
          FUN_006c1408(&local_58);
        }
LAB_006cb2f8:
        uVar6 = uVar14;
        puVar20 = puVar21;
      } while (puVar21 != puVar7);
      puVar21 = puVar7;
LAB_006cb310:
      local_120 = puVar21;
      local_114 = uVar14;
    }
    FUN_00703614(&local_124);
LAB_006cb328:
    uVar6 = 7;
    if ((int)param_4[4] < 0) {
      uVar6 = param_4[4] ^ 0x80000000;
    }
    if (uVar6 != 6) {
      if (uVar6 == 7) {
        if (uVar15 < 0x80000000) goto LAB_006cb380;
LAB_006cb354:
        FUN_006c1408(param_4);
        goto LAB_006cb380;
      }
LAB_006cb360:
      FUN_00db19c4(param_4);
      goto LAB_006cb380;
    }
    if ((int)uVar15 < 0) goto LAB_006cb380;
  }
  else {
    uVar6 = param_4[4];
    if (-1 < (int)uVar6) {
      FUN_00701dc0(&local_58);
      puVar7 = local_4c;
      for (; local_54 != puVar7; local_54 = local_54 + 0x10) {
        if (local_54[4] == -0x7ffffff9) {
          local_54 = local_54 + 0x10;
          break;
        }
        local_158 = *local_54;
        uStack_154 = local_54[1];
        uStack_150 = local_54[2];
        uStack_14c = local_54[3];
        local_144 = local_54[5];
        uStack_140 = local_54[6];
        uStack_13c = local_54[7];
        local_138 = local_54[8];
        uStack_134 = local_54[9];
        uStack_130 = local_54[10];
        uStack_12c = local_54[0xb];
        local_148 = local_54[4];
        FUN_006cadb8(iVar13,local_54[0xc],local_54[0xd],&local_158);
      }
      FUN_00703700(&local_58);
      goto LAB_006cb328;
    }
LAB_006cb0ac:
    uVar15 = 7;
    if ((int)uVar6 < 0) {
      uVar15 = uVar6 ^ 0x80000000;
    }
    if (uVar15 != 6) {
      if (uVar15 == 7) goto LAB_006cb354;
      goto LAB_006cb360;
    }
  }
  FUN_006f66dc(param_4);
LAB_006cb380:
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_2,param_3);
    return;
  }
  return;
}

