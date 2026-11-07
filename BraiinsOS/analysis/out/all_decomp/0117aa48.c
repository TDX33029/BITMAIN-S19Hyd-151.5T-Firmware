// FUN_0117aa48 @ 0117aa48 size=2500 calls_out=20 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0117aa48(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  uint unaff_r4;
  undefined4 uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  int local_134;
  int local_128;
  int local_114;
  uint local_110;
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
  
  uVar39 = CONCAT44(param_2,param_1);
  if (*param_3 != '\x05') {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar31 = *(uint *)(param_3 + 0xc);
  uVar6 = 0;
  local_100 = 0;
  local_104 = 4;
  local_108 = 0;
  if ((0x3ffffff < uVar31) || (unaff_r4 = uVar31 * 0x40, 0x7ffffffc < unaff_r4)) {
LAB_0117b360:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,unaff_r4);
  }
  local_114 = 4;
  local_134 = 4;
  local_fc = 0;
  if (unaff_r4 != 0) {
    local_114 = thunk_FUN_016d4a50(unaff_r4);
    if (local_114 == 0) {
      uVar6 = 4;
      goto LAB_0117b360;
    }
    local_fc = uVar31;
  }
  local_e8 = *(int *)(param_3 + 4);
  local_e4 = *(undefined4 *)(param_3 + 8);
  uVar7 = param_2[0x13];
  if (local_e8 == 0) {
    uVar31 = 0;
  }
  local_f0 = (uint)(local_e8 != 0);
  puVar27 = (uint *)param_2[0x12];
  iVar25 = *param_2;
  local_f4 = 0;
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uVar12 = param_2[8];
  uVar13 = param_2[9];
  uVar14 = param_2[10];
  uVar15 = param_2[0xb];
  uVar16 = param_2[0xf];
  iVar23 = param_2[0x10];
  uVar17 = param_2[1];
  iVar18 = param_2[3];
  local_128 = 0;
  local_dc = 0;
  local_ec = 0;
  local_110 = 0;
  local_f8 = local_114;
  local_e0 = local_f0;
  local_d8._0_4_ = local_e8;
  local_d8._4_4_ = local_e4;
  local_d0 = uVar31;
LAB_0117ac00:
  uVar38 = FUN_00f45584(&local_f0);
  uVar6 = (undefined4)((ulonglong)uVar38 >> 0x20);
  iVar32 = (int)uVar38;
  if (iVar32 != 0) {
    local_c4 = *(undefined4 *)(iVar32 + 4);
    local_c0 = *(undefined4 *)(iVar32 + 8);
    local_c8 = 0x80000000;
    uVar30 = *(undefined4 *)(iVar32 + 4);
    iVar36 = *(int *)(iVar32 + 8);
    local_bc = param_4;
    if (iVar23 != 0) {
      uVar31 = uVar16;
      iVar20 = iVar23 << 5;
      do {
        if ((*(int *)(uVar31 + 8) == iVar36) &&
           (iVar19 = thunk_FUN_016dd50a(*(undefined4 *)(uVar31 + 4),uVar30,iVar36), iVar19 == 0)) {
          FUN_011c9534(&local_a8,uVar31 + 0xc,uVar6,&local_c8,param_5,param_6);
          if (local_110 == local_fc) {
            FUN_011ca644(&local_fc);
            local_114 = local_f8;
          }
          puVar37 = (uint *)(local_114 + local_110 * 0x40);
          local_110 = local_110 + 1;
          *puVar37 = local_a8;
          puVar37[1] = local_a4;
          puVar37[2] = local_a0;
          puVar37[3] = uStack_9c;
          puVar37[4] = local_98;
          puVar37[5] = local_94;
          puVar37[6] = (uint)local_90;
          puVar37[7] = local_90._4_4_;
          puVar37[8] = (uint)local_88;
          puVar37[9] = local_84;
          puVar37[10] = local_80;
          puVar37[0xb] = uStack_7c;
          puVar37[0xc] = uStack_78;
          puVar37[0xd] = uStack_74;
          puVar37[0xe] = uStack_70;
          puVar37[0xf] = uStack_6c;
          uVar31 = uStack_70;
          local_f4 = local_110;
          if (iVar18 != 0) {
            uVar30 = *(undefined4 *)(iVar32 + 4);
            iVar32 = *(int *)(iVar32 + 8);
            local_a8 = uVar12;
            local_a4 = uVar13;
            local_a0 = uVar14;
            uStack_9c = uVar15;
            local_98 = uVar10;
            local_94 = uVar11;
            local_90._0_4_ = uVar8;
            local_90._4_4_ = uVar9;
            FUN_011df94c(&local_a8,uVar30,iVar32);
            uVar31 = local_98 ^ 0xff;
            uVar33 = local_94 << 0x18 | (local_94 >> 8 & 0xff) << 0x10 |
                     (local_94 >> 0x10 & 0xff) << 8 | local_94 >> 0x18;
            lVar4 = (ulonglong)uVar33 * 0xb36a80d2;
            uVar28 = (uint)lVar4;
            uVar35 = (uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 | (uVar28 >> 0x10 & 0xff) << 8 |
                     uVar28 >> 0x18) ^
                     local_94 * 0x2df45158 +
                     uVar31 * 0x2d7f954c + (int)((ulonglong)uVar31 * 0x2df45158 >> 0x20);
            uVar26 = uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
                     uVar35 >> 0x18;
            uVar29 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
            lVar5 = (ulonglong)~(uint)local_90 * (ulonglong)uVar26;
            uVar34 = (uint)lVar5;
            uVar28 = (uVar31 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                      (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                     uVar33 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
            uVar33 = (uVar28 * 0x1000000 | (uVar28 >> 8 & 0xff) << 0x10 |
                      (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) ^
                     (uint)((ulonglong)uVar31 * 0x2df45158);
            uVar28 = (uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
                     uVar33 >> 0x18) * ~(uint)local_90 +
                     uVar26 * ~local_90._4_4_ + (int)((ulonglong)lVar5 >> 0x20);
            lVar4 = (ulonglong)uVar29 * (ulonglong)uVar33;
            uVar31 = (uint)((ulonglong)lVar4 >> 0x20);
            uVar28 = (uVar28 * 0x1000000 | (uVar28 >> 8 & 0xff) << 0x10 |
                      (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) ^ (uint)lVar4;
            uVar29 = (uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
                     uVar34 >> 0x18) ^
                     uVar35 * uVar29 +
                     uVar33 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                               ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                     uVar31;
            uVar26 = uVar29;
            if ((uVar33 & 0x20) != 0) {
              uVar26 = uVar28;
              uVar28 = uVar29;
            }
            uVar26 = uVar28 << (uVar33 & 0x1f) | (uVar26 >> 1) >> (~uVar33 & 0x1f);
            iVar36 = 0;
            uVar28 = uVar26 >> 0x19;
            while( true ) {
              uVar26 = uVar17 & uVar26;
              uVar29 = *(uint *)(iVar25 + uVar26);
              uVar33 = uVar29 ^ uVar28 * 0x1010101;
              for (uVar33 = ~uVar33 & 0x80808080 & uVar33 + 0xfefefeff; uVar33 != 0;
                  uVar33 = uVar33 - 1 & uVar33) {
                uVar34 = uVar26 + ((uint)LZCOUNT(uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 |
                                                 (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18) >> 3
                                  ) & uVar17;
                uVar31 = uVar34 * -5;
                iVar20 = iVar25 + -0x14 + uVar34 * -0x14;
                if ((iVar32 == *(int *)(iVar20 + 8)) &&
                   (iVar20 = thunk_FUN_016dd50a(uVar30,*(undefined4 *)(iVar20 + 4),iVar32),
                   iVar20 == 0)) {
                  iVar36 = iVar25 + uVar34 * -0x14;
                  iVar32 = *(int *)(iVar36 + -4);
                  if (iVar32 != 0) {
                    iVar32 = iVar32 << 2;
                    puVar37 = *(uint **)(iVar36 + -8);
                    do {
                      uVar31 = *puVar37;
                      if (uVar7 <= uVar31) {
                    /* WARNING: Subroutine does not return */
                        FUN_00faa4a4(uVar31,uVar7,&DAT_018890d0);
                      }
                      FUN_011c9534(&local_a8,puVar27 + uVar31 * 0x19 + 0x14,uVar6,&local_c8,param_5,
                                   param_6);
                      if (local_110 == local_fc) {
                        FUN_011ca644(&local_fc);
                        local_114 = local_f8;
                      }
                      iVar32 = iVar32 + -4;
                      puVar21 = (uint *)(local_114 + local_110 * 0x40);
                      *puVar21 = local_a8;
                      puVar21[1] = local_a4;
                      puVar21[2] = local_a0;
                      puVar21[3] = uStack_9c;
                      puVar21[4] = local_98;
                      local_110 = local_110 + 1;
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
                      puVar37 = puVar37 + 1;
                      local_f4 = local_110;
                    } while (iVar32 != 0);
                  }
                  goto LAB_0117ac00;
                }
              }
              if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) break;
              iVar36 = iVar36 + 4;
              uVar26 = uVar26 + iVar36;
            }
          }
          goto LAB_0117ac00;
        }
        uVar31 = uVar31 + 0x20;
        iVar20 = iVar20 + -0x20;
      } while (iVar20 != 0);
    }
    if (uVar7 != 0) {
      uVar31 = *puVar27;
      iVar18 = 4;
      if (2 < uVar31) {
        iVar18 = uVar31 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x0117afbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0117afc0 + *(int *)(&DAT_0117afc0 + iVar18 * 4)))();
      return;
    }
    if (iVar36 == 0) {
      iVar32 = 1;
    }
    else {
      iVar32 = thunk_FUN_016d4a50(iVar36);
      if (iVar32 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar36);
      }
    }
    FUN_016dd1aa(iVar32,uVar30,iVar36);
    if (local_128 == local_108) {
      FUN_015f37b0(&local_108);
      local_134 = local_104;
    }
    local_100 = local_128 + 1;
    piVar24 = (int *)(local_134 + local_128 * 0xc);
    *piVar24 = iVar36;
    piVar24[1] = iVar32;
    piVar24[2] = iVar36;
    local_128 = local_100;
    goto LAB_0117ac00;
  }
  iVar18 = local_f4 << 6;
  iVar23 = local_f8;
  do {
    if (iVar18 == 0) {
      local_c4 = local_fc;
      local_b8 = 0;
      local_c8 = 0x80000000;
      local_bc = local_f4;
      local_c0 = local_f8;
      goto LAB_0117b2b4;
    }
    pcVar1 = (char *)(iVar23 + 0x3c);
    iVar18 = iVar18 + -0x40;
    iVar23 = iVar23 + 0x40;
  } while (*pcVar1 != '\0');
  local_bc = local_fc;
  local_c8 = 0;
  local_b4 = local_f4;
  local_b8 = local_f8;
  local_b0 = 0;
  local_c0 = 0;
  local_c4 = 4;
LAB_0117b2b4:
  if (local_128 == 0) {
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
  piVar24 = (int *)param_2[0xc];
  uVar7 = param_2[0xd];
  if (param_5 == 0) {
    uVar8 = 0;
    uVar6 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar22 = *(int **)(param_5 + 0xc);
    do {
      iVar18 = *piVar22;
      bVar3 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar3);
    *piVar22 = iVar18 + 1;
    if (iVar18 < 0) goto LAB_0117b4e8;
    uVar6 = *(undefined4 *)(param_5 + 0xc);
    uVar8 = 0;
    uVar31 = *(uint *)(param_5 + 0x10);
    uVar9 = (*(int **)(param_5 + 4))[1];
    if (uVar9 <= uVar7) {
      iVar18 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar24 + 2,uVar9);
      uVar8 = uVar9;
      if (iVar18 != 0) {
        uVar8 = 0;
      }
    }
    uVar39 = FUN_011e1508((int)(piVar24 + 2) + uVar8,uVar7 - uVar8);
    uVar8 = 2;
  }
  do {
    iVar18 = *piVar24;
    bVar3 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar3);
  *piVar24 = iVar18 + 1;
  if (-1 < iVar18) {
    local_e4 = 3;
    local_f0 = uVar8;
    local_e0 = uVar6;
    local_dc = uVar31;
    local_d8 = uVar39;
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
    local_30 = piVar24;
    local_2c = uVar7;
    local_90 = local_d8;
    iVar18 = thunk_FUN_016d4a50(0x80);
    if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar18,&local_a8,0x80);
    local_ac = iVar18;
    FUN_011720bc(&local_a8,&local_ac);
    FUN_012128e0(&local_c8,&local_a8);
    FUN_01164df4(iVar18);
    thunk_FUN_016d3fb4(iVar18);
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    return;
  }
LAB_0117b4e8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x117b4e8);
  (*pcVar2)();
}

