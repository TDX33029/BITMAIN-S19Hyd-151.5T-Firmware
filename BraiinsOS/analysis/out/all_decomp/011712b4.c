// FUN_011712b4 @ 011712b4 size=2748 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011712b4(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
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
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int *piVar34;
  int iVar35;
  uint uVar36;
  int *piVar37;
  uint uVar38;
  int iVar39;
  uint unaff_r4;
  uint uVar40;
  undefined4 *puVar41;
  uint uVar42;
  undefined4 uVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  undefined8 uVar47;
  ulonglong uVar48;
  int local_17c;
  uint local_13c;
  int local_10c;
  uint local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_e0;
  undefined4 *local_dc;
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
  undefined4 *local_94;
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
  uVar40 = *(uint *)(param_3 + 0xc);
  uVar6 = 0;
  local_100 = 0;
  local_104 = 4;
  local_108 = 0;
  if ((0x3ffffff < uVar40) || (unaff_r4 = uVar40 * 0x40, 0x7ffffffc < unaff_r4)) {
LAB_01171dd0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,unaff_r4);
  }
  local_10c = 4;
  local_17c = 4;
  local_fc = 0;
  if (unaff_r4 != 0) {
    local_10c = thunk_FUN_016d4a50(unaff_r4);
    if (local_10c == 0) {
      uVar6 = 4;
      goto LAB_01171dd0;
    }
    local_fc = uVar40;
  }
  local_f4 = 0;
  uVar17 = param_2[0x1c];
  uVar44 = 0;
  local_e8 = *(int *)(param_3 + 4);
  local_e4 = *(undefined4 *)(param_3 + 8);
  if (local_e8 == 0) {
    uVar40 = 0;
  }
  piVar37 = (int *)param_2[0x1b];
  uVar18 = param_2[4];
  uVar19 = param_2[5];
  uVar20 = param_2[6];
  uVar21 = param_2[7];
  uVar22 = param_2[8];
  uVar23 = param_2[9];
  uVar24 = param_2[10];
  uVar25 = param_2[0xb];
  uVar26 = param_2[0x10];
  uVar27 = param_2[0x11];
  uVar28 = param_2[0x12];
  uVar29 = param_2[0x13];
  uVar30 = param_2[0x14];
  uVar31 = param_2[0x15];
  uVar32 = param_2[0x16];
  uVar7 = param_2[0x17];
  uVar8 = param_2[0xd];
  iVar9 = param_2[0xf];
  uVar10 = param_2[1];
  local_f0 = (uint)(local_e8 != 0);
  iVar33 = param_2[0xc];
  iVar11 = param_2[3];
  iVar35 = *param_2;
  local_13c = 0;
  local_dc = (undefined4 *)0x0;
  local_ec = 0;
  local_f8 = local_10c;
  local_e0 = local_f0;
  local_d8._0_4_ = local_e8;
  local_d8._4_4_ = local_e4;
  local_d0 = uVar40;
LAB_011714bc:
  uVar47 = FUN_00f45584(&local_f0);
  uVar6 = (undefined4)((ulonglong)uVar47 >> 0x20);
  iVar16 = (int)uVar47;
  if (iVar16 != 0) {
    local_c4 = *(undefined4 *)(iVar16 + 4);
    local_c0 = *(undefined4 *)(iVar16 + 8);
    local_c8 = 0x80000000;
    uVar43 = *(undefined4 *)(iVar16 + 4);
    iVar45 = *(int *)(iVar16 + 8);
    local_bc = param_4;
    if (iVar11 != 0) {
      local_a8 = uVar22;
      local_a4 = uVar23;
      local_a0 = uVar24;
      uStack_9c = uVar25;
      local_98 = uVar20;
      local_94 = (undefined4 *)uVar21;
      local_90._0_4_ = uVar18;
      local_90._4_4_ = uVar19;
      FUN_011df94c(&local_a8,uVar43,iVar45);
      uVar36 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
               ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
      lVar4 = (ulonglong)uVar36 * 0xb36a80d2;
      uVar38 = (uint)lVar4;
      uVar40 = local_98 ^ 0xff;
      uVar36 = (uVar40 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
               local_98 >> 0x18) * -0x4c957f2e +
               uVar36 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
      uVar42 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
               (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
      uVar12 = (uVar36 * 0x1000000 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
               uVar36 >> 0x18) ^ (uint)((ulonglong)uVar40 * 0x2df45158);
      lVar4 = (ulonglong)uVar42 * (ulonglong)uVar12;
      uVar36 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
               uVar38 >> 0x18) ^
               (int)local_94 * 0x2df45158 +
               uVar40 * 0x2d7f954c + (int)((ulonglong)uVar40 * 0x2df45158 >> 0x20);
      uVar40 = uVar36 << 0x18 | (uVar36 >> 8 & 0xff) << 0x10 | (uVar36 >> 0x10 & 0xff) << 8 |
               uVar36 >> 0x18;
      lVar5 = (ulonglong)~(uint)local_90 * (ulonglong)uVar40;
      uVar38 = (uint)lVar5;
      uVar40 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18) * ~(uint)local_90 +
               uVar40 * ~local_90._4_4_ + (int)((ulonglong)lVar5 >> 0x20);
      uVar40 = (uVar40 * 0x1000000 | (uVar40 >> 8 & 0xff) << 0x10 | (uVar40 >> 0x10 & 0xff) << 8 |
               uVar40 >> 0x18) ^ (uint)lVar4;
      uVar38 = (uVar38 << 0x18 | (uVar38 >> 8 & 0xff) << 0x10 | (uVar38 >> 0x10 & 0xff) << 8 |
               uVar38 >> 0x18) ^
               uVar36 * uVar42 +
               uVar12 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                         ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20);
      uVar36 = uVar38;
      if ((uVar12 & 0x20) != 0) {
        uVar36 = uVar40;
        uVar40 = uVar38;
      }
      uVar36 = uVar40 << (uVar12 & 0x1f) | (uVar36 >> 1) >> (~uVar12 & 0x1f);
      iVar39 = 0;
      uVar40 = uVar36 >> 0x19;
      while( true ) {
        uVar36 = uVar10 & uVar36;
        uVar38 = *(uint *)(iVar35 + uVar36);
        uVar12 = uVar38 ^ uVar40 * 0x1010101;
        for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
            uVar12 = uVar12 - 1 & uVar12) {
          uVar42 = uVar36 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar10;
          iVar13 = iVar35 + -0x20 + uVar42 * -0x20;
          if ((iVar45 == *(int *)(iVar13 + 8)) &&
             (iVar13 = thunk_FUN_016dd50a(uVar43,*(undefined4 *)(iVar13 + 4),iVar45), iVar13 == 0))
          {
            FUN_011c9534(&local_a8,iVar35 + -0x14 + uVar42 * -0x20,uVar6,&local_c8,param_5,param_6);
            if (uVar44 == local_fc) {
              FUN_011ca644(&local_fc);
              local_10c = local_f8;
            }
            puVar14 = (uint *)(local_10c + uVar44 * 0x40);
            uVar44 = uVar44 + 1;
            *puVar14 = local_a8;
            puVar14[1] = local_a4;
            puVar14[2] = local_a0;
            puVar14[3] = uStack_9c;
            puVar14[4] = local_98;
            puVar14[5] = (uint)local_94;
            puVar14[6] = (uint)local_90;
            puVar14[7] = local_90._4_4_;
            puVar14[8] = (uint)local_88;
            puVar14[9] = local_84;
            puVar14[10] = local_80;
            puVar14[0xb] = uStack_7c;
            puVar14[0xc] = uStack_78;
            puVar14[0xd] = uStack_74;
            puVar14[0xe] = uStack_70;
            puVar14[0xf] = uStack_6c;
            local_f4 = uVar44;
            if (iVar9 == 0) goto LAB_011714bc;
            uVar43 = *(undefined4 *)(iVar16 + 4);
            iVar16 = *(int *)(iVar16 + 8);
            local_a8 = uVar30;
            local_a4 = uVar31;
            local_a0 = uVar32;
            uStack_9c = uVar7;
            local_98 = uVar28;
            local_94 = (undefined4 *)uVar29;
            local_90._0_4_ = uVar26;
            local_90._4_4_ = uVar27;
            FUN_011df94c(&local_a8,uVar43,iVar16);
            uVar40 = local_98 ^ 0xff;
            uVar36 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
                     ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
            lVar4 = (ulonglong)uVar36 * 0xb36a80d2;
            uVar12 = (uint)lVar4;
            uVar42 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) ^
                     (int)local_94 * 0x2df45158 +
                     uVar40 * 0x2d7f954c + (int)((ulonglong)uVar40 * 0x2df45158 >> 0x20);
            uVar38 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
                     uVar42 >> 0x18;
            lVar5 = (ulonglong)~(uint)local_90 * (ulonglong)uVar38;
            uVar46 = (uint)lVar5;
            uVar36 = (uVar40 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                      (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                     uVar36 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
            iVar45 = 0;
            uVar12 = (uVar36 * 0x1000000 | (uVar36 >> 8 & 0xff) << 0x10 |
                      (uVar36 >> 0x10 & 0xff) << 8 | uVar36 >> 0x18) ^
                     (uint)((ulonglong)uVar40 * 0x2df45158);
            uVar40 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) * ~(uint)local_90 +
                     uVar38 * ~local_90._4_4_ + (int)((ulonglong)lVar5 >> 0x20);
            uVar36 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
            lVar4 = (ulonglong)uVar36 * (ulonglong)uVar12;
            uVar40 = (uVar40 * 0x1000000 | (uVar40 >> 8 & 0xff) << 0x10 |
                      (uVar40 >> 0x10 & 0xff) << 8 | uVar40 >> 0x18) ^ (uint)lVar4;
            uVar38 = (uVar46 << 0x18 | (uVar46 >> 8 & 0xff) << 0x10 | (uVar46 >> 0x10 & 0xff) << 8 |
                     uVar46 >> 0x18) ^
                     uVar42 * uVar36 +
                     uVar12 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                               ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                     (int)((ulonglong)lVar4 >> 0x20);
            uVar36 = uVar38;
            if ((uVar12 & 0x20) != 0) {
              uVar36 = uVar40;
              uVar40 = uVar38;
            }
            uVar36 = uVar40 << (uVar12 & 0x1f) | (uVar36 >> 1) >> (~uVar12 & 0x1f);
            uVar40 = uVar36 >> 0x19;
            goto LAB_011718b0;
          }
        }
        if ((uVar38 & 0x80808080 & uVar38 << 1) != 0) break;
        iVar39 = iVar39 + 4;
        uVar36 = uVar36 + iVar39;
      }
    }
    if (uVar17 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01171ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01171abc + *(int *)(&DAT_01171abc + *piVar37 * 4)))();
      return;
    }
    if (iVar45 == 0) {
      iVar16 = 1;
    }
    else {
      iVar16 = thunk_FUN_016d4a50(iVar45);
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar45);
      }
    }
    FUN_016dd1aa(iVar16,uVar43,iVar45);
    if (local_13c == local_108) {
      FUN_015f37b0(&local_108);
      local_17c = local_104;
    }
    local_100 = local_13c + 1;
    piVar34 = (int *)(local_17c + local_13c * 0xc);
    *piVar34 = iVar45;
    piVar34[1] = iVar16;
    piVar34[2] = iVar45;
    local_13c = local_100;
    goto LAB_011714bc;
  }
  iVar9 = local_f4 << 6;
  iVar11 = local_f8;
  do {
    if (iVar9 == 0) {
      local_c4 = local_fc;
      local_b8 = 0;
      local_c8 = 0x80000000;
      local_bc = local_f4;
      local_c0 = local_f8;
      goto LAB_01171d24;
    }
    pcVar1 = (char *)(iVar11 + 0x3c);
    iVar9 = iVar9 + -0x40;
    iVar11 = iVar11 + 0x40;
  } while (*pcVar1 != '\0');
  local_bc = local_fc;
  local_c8 = 0;
  local_b4 = local_f4;
  local_b8 = local_f8;
  local_b0 = 0;
  local_c0 = 0;
  local_c4 = 4;
LAB_01171d24:
  if (local_13c == 0) {
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
  piVar37 = (int *)param_2[0x18];
  uVar40 = param_2[0x19];
  if (param_5 == 0) {
    uVar17 = 0;
    uVar6 = 0;
    uVar48 = (ulonglong)local_13c;
    puVar41 = param_1;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc));
    }
    piVar34 = *(int **)(param_5 + 0xc);
    do {
      iVar9 = *piVar34;
      bVar3 = (bool)hasExclusiveAccess(piVar34);
    } while (!bVar3);
    *piVar34 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_01171f4c;
    uVar6 = *(undefined4 *)(param_5 + 0xc);
    puVar41 = *(undefined4 **)(param_5 + 0x10);
    uVar17 = 0;
    uVar44 = (*(int **)(param_5 + 4))[1];
    if (uVar44 <= uVar40) {
      iVar9 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar37 + 2,uVar44);
      uVar17 = uVar44;
      if (iVar9 != 0) {
        uVar17 = 0;
      }
    }
    uVar48 = FUN_011e1508((int)(piVar37 + 2) + uVar17,uVar40 - uVar17);
    uVar17 = 2;
  }
  do {
    iVar9 = *piVar37;
    bVar3 = (bool)hasExclusiveAccess(piVar37);
  } while (!bVar3);
  *piVar37 = iVar9 + 1;
  if (-1 < iVar9) {
    local_e4 = 3;
    local_f0 = uVar17;
    local_e0 = uVar6;
    local_dc = puVar41;
    local_d8 = uVar48;
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
    local_30 = piVar37;
    local_2c = uVar40;
    local_90 = local_d8;
    iVar9 = thunk_FUN_016d4a50(0x80);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar9,&local_a8,0x80);
    local_ac = iVar9;
    FUN_011720bc(&local_a8,&local_ac);
    FUN_012128e0(&local_c8,&local_a8);
    FUN_01164df4(iVar9);
    thunk_FUN_016d3fb4(iVar9);
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    return;
  }
LAB_01171f4c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x1171f4c);
  (*pcVar2)();
LAB_011718b0:
  uVar36 = uVar8 & uVar36;
  uVar38 = *(uint *)(iVar33 + uVar36);
  uVar12 = uVar38 ^ uVar40 * 0x1010101;
  for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
      uVar12 = uVar12 - 1 & uVar12) {
    uVar42 = uVar36 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar8;
    iVar39 = iVar33 + -0x14 + uVar42 * -0x14;
    if ((iVar16 == *(int *)(iVar39 + 8)) &&
       (iVar39 = thunk_FUN_016dd50a(uVar43,*(undefined4 *)(iVar39 + 4),iVar16), iVar39 == 0)) {
      iVar45 = iVar33 + uVar42 * -0x14;
      iVar16 = *(int *)(iVar45 + -4);
      if (iVar16 != 0) {
        iVar16 = iVar16 << 2;
        puVar14 = *(uint **)(iVar45 + -8);
        do {
          uVar40 = *puVar14;
          if (uVar17 <= uVar40) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar40,uVar17,&DAT_018890d0);
          }
          FUN_011c9534(&local_a8,piVar37 + uVar40 * 10 + 5,uVar6,&local_c8,param_5,param_6);
          if (uVar44 == local_fc) {
            FUN_011ca644(&local_fc);
            local_10c = local_f8;
          }
          puVar15 = (uint *)(local_10c + uVar44 * 0x40);
          uVar44 = uVar44 + 1;
          iVar16 = iVar16 + -4;
          *puVar15 = local_a8;
          puVar15[1] = local_a4;
          puVar15[2] = local_a0;
          puVar15[3] = uStack_9c;
          puVar15[4] = local_98;
          puVar15[5] = (uint)local_94;
          puVar15[6] = (uint)local_90;
          puVar15[7] = local_90._4_4_;
          puVar15[8] = (uint)local_88;
          puVar15[9] = local_84;
          puVar15[10] = local_80;
          puVar15[0xb] = uStack_7c;
          puVar15[0xc] = uStack_78;
          puVar15[0xd] = uStack_74;
          puVar15[0xe] = uStack_70;
          puVar15[0xf] = uStack_6c;
          puVar14 = puVar14 + 1;
          local_f4 = uVar44;
        } while (iVar16 != 0);
      }
      goto LAB_011714bc;
    }
  }
  if ((uVar38 & 0x80808080 & uVar38 << 1) != 0) goto LAB_011714bc;
  iVar45 = iVar45 + 4;
  uVar36 = uVar36 + iVar45;
  goto LAB_011718b0;
}

