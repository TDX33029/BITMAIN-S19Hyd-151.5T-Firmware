// FUN_011746c4 @ 011746c4 size=2236 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011746c4(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint unaff_r4;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  undefined8 uVar38;
  longlong lVar39;
  int local_130;
  int local_124;
  int local_110;
  int local_108;
  int local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_e0;
  uint local_dc;
  undefined8 local_d8;
  uint local_d0;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  undefined1 *local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar31 = *(uint *)(param_3 + 0xc);
  uVar5 = 0;
  local_100 = 0;
  local_104 = 4;
  local_108 = 0;
  if ((0x3ffffff < uVar31) || (unaff_r4 = uVar31 * 0x40, 0x7ffffffc < unaff_r4)) {
LAB_01174ffc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,unaff_r4);
  }
  local_110 = 4;
  local_130 = 4;
  local_fc = 0;
  if (unaff_r4 != 0) {
    local_110 = thunk_FUN_016d4a50(unaff_r4);
    if (local_110 == 0) {
      uVar5 = 4;
      goto LAB_01174ffc;
    }
    local_fc = uVar31;
  }
  uVar6 = param_2[0x13];
  uVar35 = 0;
  local_e8 = *(int *)(param_3 + 4);
  local_e4 = *(undefined4 *)(param_3 + 8);
  if (local_e8 == 0) {
    uVar31 = 0;
  }
  piVar26 = (int *)param_2[0x12];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  uVar14 = param_2[0xb];
  iVar15 = param_2[0xf];
  iVar23 = param_2[0x10];
  local_f0 = (uint)(local_e8 != 0);
  uVar16 = param_2[1];
  iVar17 = param_2[3];
  iVar25 = *param_2;
  local_124 = 0;
  local_f4 = 0;
  local_dc = 0;
  local_ec = 0;
  local_f8 = local_110;
  local_e0 = local_f0;
  local_d8._0_4_ = local_e8;
  local_d8._4_4_ = local_e4;
  local_d0 = uVar31;
LAB_01174878:
  uVar38 = FUN_00f45584(&local_f0);
  uVar5 = (undefined4)((ulonglong)uVar38 >> 0x20);
  iVar29 = (int)uVar38;
  if (iVar29 != 0) {
    local_c4 = *(undefined4 *)(iVar29 + 4);
    local_c0 = *(undefined4 *)(iVar29 + 8);
    local_c8 = 0x80000000;
    uVar30 = *(undefined4 *)(iVar29 + 4);
    uVar31 = *(uint *)(iVar29 + 8);
    local_bc = param_4;
    if (iVar23 != 0) {
      iVar20 = iVar15;
      iVar33 = iVar23 << 5;
      do {
        if ((*(uint *)(iVar20 + 8) == uVar31) &&
           (iVar18 = thunk_FUN_016dd50a(*(undefined4 *)(iVar20 + 4),uVar30,uVar31), iVar18 == 0)) {
          FUN_011c9534(&local_a8,iVar20 + 0xc,uVar5,&local_c8,param_5,param_6);
          if (uVar35 == local_fc) {
            FUN_011ca644(&local_fc);
            local_110 = local_f8;
          }
          puVar36 = (uint *)(local_110 + uVar35 * 0x40);
          uVar35 = uVar35 + 1;
          *puVar36 = local_a8;
          puVar36[1] = local_a4;
          puVar36[2] = local_a0;
          puVar36[3] = uStack_9c;
          puVar36[4] = local_98;
          puVar36[5] = local_94;
          puVar36[6] = (uint)local_90;
          puVar36[7] = local_90._4_4_;
          puVar36[8] = (uint)local_88;
          puVar36[9] = local_84;
          puVar36[10] = local_80;
          puVar36[0xb] = uStack_7c;
          puVar36[0xc] = uStack_78;
          puVar36[0xd] = uStack_74;
          puVar36[0xe] = uStack_70;
          puVar36[0xf] = uStack_6c;
          uVar31 = uStack_74;
          local_f4 = uVar35;
          if (iVar17 != 0) {
            uVar30 = *(undefined4 *)(iVar29 + 4);
            uVar31 = *(uint *)(iVar29 + 8);
            local_a8 = uVar11;
            local_a4 = uVar12;
            local_a0 = uVar13;
            uStack_9c = uVar14;
            local_98 = uVar9;
            local_94 = uVar10;
            local_90._0_4_ = uVar7;
            local_90._4_4_ = uVar8;
            FUN_011df94c(&local_a8,uVar30,uVar31);
            uVar19 = local_98 ^ 0xff;
            uVar34 = local_94 << 0x18 | (local_94 >> 8 & 0xff) << 0x10 |
                     (local_94 >> 0x10 & 0xff) << 8 | local_94 >> 0x18;
            lVar39 = (ulonglong)uVar34 * 0xb36a80d2;
            uVar27 = (uint)lVar39;
            uVar24 = (uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 | (uVar27 >> 0x10 & 0xff) << 8 |
                     uVar27 >> 0x18) ^
                     local_94 * 0x2df45158 +
                     uVar19 * 0x2d7f954c + (int)((ulonglong)uVar19 * 0x2df45158 >> 0x20);
            uVar32 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
                     uVar24 >> 0x18;
            uVar28 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
            lVar4 = (ulonglong)~(uint)local_90 * (ulonglong)uVar32;
            uVar37 = (uint)lVar4;
            uVar27 = (uVar19 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                      (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                     uVar34 * -0x5851f42e + (int)((ulonglong)lVar39 >> 0x20);
            uVar34 = (uVar27 * 0x1000000 | (uVar27 >> 8 & 0xff) << 0x10 |
                      (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) ^
                     (uint)((ulonglong)uVar19 * 0x2df45158);
            uVar19 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                     uVar34 >> 0x18) * ~(uint)local_90 +
                     uVar32 * ~local_90._4_4_ + (int)((ulonglong)lVar4 >> 0x20);
            lVar39 = (ulonglong)uVar28 * (ulonglong)uVar34;
            uVar19 = (uVar19 * 0x1000000 | (uVar19 >> 8 & 0xff) << 0x10 |
                      (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) ^ (uint)lVar39;
            uVar24 = (uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
                     uVar37 >> 0x18) ^
                     uVar24 * uVar28 +
                     uVar34 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                               ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                     (int)((ulonglong)lVar39 >> 0x20);
            uVar27 = uVar24;
            if ((uVar34 & 0x20) != 0) {
              uVar27 = uVar19;
              uVar19 = uVar24;
            }
            uVar27 = uVar19 << (uVar34 & 0x1f) | (uVar27 >> 1) >> (~uVar34 & 0x1f);
            iVar29 = 0;
            uVar19 = uVar27 >> 0x19;
            while( true ) {
              uVar27 = uVar16 & uVar27;
              uVar24 = *(uint *)(iVar25 + uVar27);
              uVar34 = uVar24 ^ uVar19 * 0x1010101;
              for (uVar34 = ~uVar34 & 0x80808080 & uVar34 + 0xfefefeff; uVar34 != 0;
                  uVar34 = uVar34 - 1 & uVar34) {
                uVar28 = uVar27 + ((uint)LZCOUNT(uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 |
                                                 (uVar34 >> 0x10 & 0xff) << 8 | uVar34 >> 0x18) >> 3
                                  ) & uVar16;
                iVar20 = iVar25 + -0x14 + uVar28 * -0x14;
                if ((uVar31 == *(uint *)(iVar20 + 8)) &&
                   (iVar20 = thunk_FUN_016dd50a(uVar30,*(undefined4 *)(iVar20 + 4),uVar31),
                   iVar20 == 0)) {
                  iVar20 = iVar25 + uVar28 * -0x14;
                  iVar29 = *(int *)(iVar20 + -4);
                  if (iVar29 != 0) {
                    iVar29 = iVar29 << 2;
                    puVar36 = *(uint **)(iVar20 + -8);
                    do {
                      uVar31 = *puVar36;
                      if (uVar6 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar31,uVar6,&DAT_018890d0);
                      }
                      FUN_011c9534(&local_a8,piVar26 + uVar31 * 10 + 5,uVar5,&local_c8,param_5,
                                   param_6);
                      if (uVar35 == local_fc) {
                        FUN_011ca644(&local_fc);
                        local_110 = local_f8;
                      }
                      puVar21 = (uint *)(local_110 + uVar35 * 0x40);
                      uVar35 = uVar35 + 1;
                      iVar29 = iVar29 + -4;
                      *puVar21 = local_a8;
                      puVar21[1] = local_a4;
                      puVar21[2] = local_a0;
                      puVar21[3] = uStack_9c;
                      puVar21[4] = local_98;
                      puVar21[5] = local_94;
                      puVar21[6] = (uint)local_90;
                      puVar21[7] = local_90._4_4_;
                      puVar21[8] = (uint)local_88;
                      puVar21[9] = local_84;
                      puVar21[10] = local_80;
                      puVar21[0xb] = uStack_7c;
                      puVar21[0xc] = uStack_78;
                      puVar21[0xd] = uStack_74;
                      puVar21[0xe] = uStack_70;
                      puVar21[0xf] = uStack_6c;
                      uVar31 = uStack_74;
                      puVar36 = puVar36 + 1;
                      local_f4 = uVar35;
                    } while (iVar29 != 0);
                  }
                  goto LAB_01174878;
                }
              }
              if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
              iVar29 = iVar29 + 4;
              uVar27 = uVar27 + iVar29;
            }
          }
          goto LAB_01174878;
        }
        iVar20 = iVar20 + 0x20;
        iVar33 = iVar33 + -0x20;
      } while (iVar33 != 0);
    }
    if (uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01174c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01174c10 + *(int *)(&DAT_01174c10 + *piVar26 * 4)))();
      return;
    }
    if (uVar31 == 0) {
      uVar19 = 1;
    }
    else {
      uVar19 = thunk_FUN_016d4a50(uVar31);
      if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar31);
      }
    }
    FUN_016dd1aa(uVar19,uVar30,uVar31);
    if (local_124 == local_108) {
      FUN_015f37b0(&local_108);
      local_130 = local_104;
    }
    local_100 = local_124 + 1;
    puVar36 = (uint *)(local_130 + local_124 * 0xc);
    *puVar36 = uVar31;
    puVar36[1] = uVar19;
    puVar36[2] = uVar31;
    local_124 = local_100;
    goto LAB_01174878;
  }
  iVar15 = local_f4 << 6;
  iVar17 = local_f8;
  do {
    if (iVar15 == 0) {
      uVar6 = 0;
      local_b8 = 0;
      local_c8 = 0x80000000;
      local_c4 = local_fc;
      local_bc = local_f4;
      local_c0 = local_f8;
      goto joined_r0x01174f54;
    }
    pcVar1 = (char *)(iVar17 + 0x3c);
    iVar15 = iVar15 + -0x40;
    iVar17 = iVar17 + 0x40;
  } while (*pcVar1 != '\0');
  uVar6 = 4;
  local_b0 = 0;
  local_c0 = 0;
  local_c4 = 4;
  local_c8 = 0;
  local_b8 = local_f8;
  local_bc = local_fc;
  local_b4 = local_f4;
joined_r0x01174f54:
  if (local_124 == 0) {
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    if (local_108 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_104);
    return;
  }
  piVar26 = (int *)param_2[0xc];
  uVar35 = param_2[0xd];
  if (param_5 == 0) {
    uVar7 = 0;
    uVar5 = 0;
    lVar39 = (ulonglong)uVar6 << 0x20;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar22 = *(int **)(param_5 + 0xc);
    do {
      iVar15 = *piVar22;
      bVar3 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar3);
    *piVar22 = iVar15 + 1;
    if (iVar15 < 0) goto LAB_0117514c;
    uVar5 = *(undefined4 *)(param_5 + 0xc);
    uVar31 = *(uint *)(param_5 + 0x10);
    uVar6 = 0;
    uVar7 = (*(int **)(param_5 + 4))[1];
    if (uVar7 <= uVar35) {
      iVar15 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar26 + 2,uVar7);
      uVar6 = uVar7;
      if (iVar15 != 0) {
        uVar6 = 0;
      }
    }
    lVar39 = FUN_011e1508((int)(piVar26 + 2) + uVar6,uVar35 - uVar6);
    uVar7 = 2;
  }
  do {
    iVar15 = *piVar26;
    bVar3 = (bool)hasExclusiveAccess(piVar26);
  } while (!bVar3);
  *piVar26 = iVar15 + 1;
  if (-1 < iVar15) {
    local_e4 = 3;
    local_f0 = uVar7;
    local_e0 = uVar5;
    local_dc = uVar31;
    local_d8 = lVar39;
    local_38 = FUN_01238114(param_4);
    local_84 = local_108;
    local_80 = local_104;
    uStack_7c = local_100;
    local_50 = 6;
    local_88 = &DAT_8000000b;
    local_a8 = local_f0;
    local_a4 = local_ec;
    local_a0 = local_e8;
    uStack_9c = local_e4;
    local_98 = local_e0;
    local_94 = local_dc;
    local_4c = param_3;
    local_30 = piVar26;
    local_2c = uVar35;
    local_90 = local_d8;
    iVar15 = thunk_FUN_016d4a50(0x80);
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar15,&local_a8,0x80);
    local_ac = iVar15;
    FUN_011720bc(&local_a8,&local_ac);
    FUN_012128e0(&local_c8,&local_a8);
    FUN_01164df4(iVar15);
    thunk_FUN_016d3fb4(iVar15);
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    return;
  }
LAB_0117514c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x117514c);
  (*pcVar2)();
}

