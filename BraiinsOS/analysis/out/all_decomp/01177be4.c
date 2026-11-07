// FUN_01177be4 @ 01177be4 size=2988 calls_out=20 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01177be4(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,int param_5,
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
  int *piVar17;
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
  uint uVar33;
  int iVar34;
  int *piVar35;
  int iVar36;
  uint uVar37;
  uint *puVar38;
  uint uVar39;
  int iVar40;
  uint unaff_r4;
  uint uVar41;
  undefined4 *puVar42;
  undefined4 uVar43;
  uint uVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  undefined8 uVar48;
  int local_180;
  int local_140;
  int local_10c;
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
  uVar41 = *(uint *)(param_3 + 0xc);
  uVar6 = 0;
  local_100 = 0;
  local_104 = 4;
  local_108 = 0;
  if ((0x3ffffff < uVar41) || (unaff_r4 = uVar41 * 0x40, 0x7ffffffc < unaff_r4)) {
LAB_0117871c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,unaff_r4);
  }
  local_10c = 4;
  local_180 = 4;
  local_fc = 0;
  if (unaff_r4 != 0) {
    local_10c = thunk_FUN_016d4a50(unaff_r4);
    if (local_10c == 0) {
      uVar6 = 4;
      goto LAB_0117871c;
    }
    local_fc = uVar41;
  }
  local_f4 = 0;
  uVar18 = param_2[0x1c];
  uVar45 = 0;
  local_e8 = *(int *)(param_3 + 4);
  local_e4 = *(undefined4 *)(param_3 + 8);
  if (local_e8 == 0) {
    uVar41 = 0;
  }
  puVar38 = (uint *)param_2[0x1b];
  local_f0 = (uint)(local_e8 != 0);
  uVar19 = param_2[4];
  uVar20 = param_2[5];
  uVar21 = param_2[6];
  uVar22 = param_2[7];
  uVar23 = param_2[8];
  uVar24 = param_2[9];
  uVar25 = param_2[10];
  uVar26 = param_2[0xb];
  uVar27 = param_2[0x10];
  uVar28 = param_2[0x11];
  uVar29 = param_2[0x12];
  uVar30 = param_2[0x13];
  uVar31 = param_2[0x14];
  uVar32 = param_2[0x15];
  uVar33 = param_2[0x16];
  uVar7 = param_2[0x17];
  uVar8 = param_2[0xd];
  iVar9 = param_2[0xf];
  uVar10 = param_2[1];
  iVar34 = param_2[0xc];
  iVar11 = param_2[3];
  iVar36 = *param_2;
  local_140 = 0;
  local_dc = (undefined4 *)0x0;
  local_ec = 0;
  local_f8 = local_10c;
  local_e0 = local_f0;
  local_d8._0_4_ = local_e8;
  local_d8._4_4_ = local_e4;
  local_d0 = uVar41;
LAB_01177df0:
  uVar48 = FUN_00f45584(&local_f0);
  uVar6 = (undefined4)((ulonglong)uVar48 >> 0x20);
  iVar16 = (int)uVar48;
  if (iVar16 != 0) {
    local_c4 = *(undefined4 *)(iVar16 + 4);
    local_c0 = *(undefined4 *)(iVar16 + 8);
    local_c8 = 0x80000000;
    uVar43 = *(undefined4 *)(iVar16 + 4);
    iVar46 = *(int *)(iVar16 + 8);
    local_bc = param_4;
    if (iVar11 != 0) {
      local_a8 = uVar23;
      local_a4 = uVar24;
      local_a0 = uVar25;
      uStack_9c = uVar26;
      local_98 = uVar21;
      local_94 = (undefined4 *)uVar22;
      local_90._0_4_ = uVar19;
      local_90._4_4_ = uVar20;
      FUN_011df94c(&local_a8,uVar43,iVar46);
      uVar37 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
               ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
      lVar4 = (ulonglong)uVar37 * 0xb36a80d2;
      uVar39 = (uint)lVar4;
      uVar41 = local_98 ^ 0xff;
      uVar37 = (uVar41 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
               local_98 >> 0x18) * -0x4c957f2e +
               uVar37 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
      uVar44 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
               (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
      uVar12 = (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18) ^ (uint)((ulonglong)uVar41 * 0x2df45158);
      lVar4 = (ulonglong)uVar44 * (ulonglong)uVar12;
      uVar37 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) ^
               (int)local_94 * 0x2df45158 +
               uVar41 * 0x2d7f954c + (int)((ulonglong)uVar41 * 0x2df45158 >> 0x20);
      uVar41 = uVar37 << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 | (uVar37 >> 0x10 & 0xff) << 8 |
               uVar37 >> 0x18;
      lVar5 = (ulonglong)~(uint)local_90 * (ulonglong)uVar41;
      uVar39 = (uint)lVar5;
      uVar41 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
               uVar12 >> 0x18) * ~(uint)local_90 +
               uVar41 * ~local_90._4_4_ + (int)((ulonglong)lVar5 >> 0x20);
      uVar41 = (uVar41 * 0x1000000 | (uVar41 >> 8 & 0xff) << 0x10 | (uVar41 >> 0x10 & 0xff) << 8 |
               uVar41 >> 0x18) ^ (uint)lVar4;
      uVar39 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) ^
               uVar37 * uVar44 +
               uVar12 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                         ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
               (int)((ulonglong)lVar4 >> 0x20);
      uVar37 = uVar39;
      if ((uVar12 & 0x20) != 0) {
        uVar37 = uVar41;
        uVar41 = uVar39;
      }
      uVar37 = uVar41 << (uVar12 & 0x1f) | (uVar37 >> 1) >> (~uVar12 & 0x1f);
      iVar40 = 0;
      uVar41 = uVar37 >> 0x19;
      while( true ) {
        uVar37 = uVar10 & uVar37;
        uVar39 = *(uint *)(iVar36 + uVar37);
        uVar12 = uVar39 ^ uVar41 * 0x1010101;
        for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
            uVar12 = uVar12 - 1 & uVar12) {
          uVar44 = uVar37 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar10;
          iVar13 = iVar36 + -0x20 + uVar44 * -0x20;
          if ((iVar46 == *(int *)(iVar13 + 8)) &&
             (iVar13 = thunk_FUN_016dd50a(uVar43,*(undefined4 *)(iVar13 + 4),iVar46), iVar13 == 0))
          {
            FUN_011c9534(&local_a8,iVar36 + -0x14 + uVar44 * -0x20,uVar6,&local_c8,param_5,param_6);
            if (uVar45 == local_fc) {
              FUN_011ca644(&local_fc);
              local_10c = local_f8;
            }
            puVar14 = (uint *)(local_10c + uVar45 * 0x40);
            uVar45 = uVar45 + 1;
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
            local_f4 = uVar45;
            if (iVar9 == 0) goto LAB_01177df0;
            uVar43 = *(undefined4 *)(iVar16 + 4);
            iVar16 = *(int *)(iVar16 + 8);
            local_a8 = uVar31;
            local_a4 = uVar32;
            local_a0 = uVar33;
            uStack_9c = uVar7;
            local_98 = uVar29;
            local_94 = (undefined4 *)uVar30;
            local_90._0_4_ = uVar27;
            local_90._4_4_ = uVar28;
            FUN_011df94c(&local_a8,uVar43,iVar16);
            uVar41 = local_98 ^ 0xff;
            uVar37 = (int)local_94 << 0x18 | ((uint)local_94 >> 8 & 0xff) << 0x10 |
                     ((uint)local_94 >> 0x10 & 0xff) << 8 | (uint)local_94 >> 0x18;
            lVar4 = (ulonglong)uVar37 * 0xb36a80d2;
            uVar12 = (uint)lVar4;
            uVar44 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) ^
                     (int)local_94 * 0x2df45158 +
                     uVar41 * 0x2d7f954c + (int)((ulonglong)uVar41 * 0x2df45158 >> 0x20);
            uVar39 = uVar44 << 0x18 | (uVar44 >> 8 & 0xff) << 0x10 | (uVar44 >> 0x10 & 0xff) << 8 |
                     uVar44 >> 0x18;
            lVar5 = (ulonglong)~(uint)local_90 * (ulonglong)uVar39;
            uVar47 = (uint)lVar5;
            uVar37 = (uVar41 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 |
                      (local_98 >> 0x10 & 0xff) << 8 | local_98 >> 0x18) * -0x4c957f2e +
                     uVar37 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
            iVar46 = 0;
            uVar12 = (uVar37 * 0x1000000 | (uVar37 >> 8 & 0xff) << 0x10 |
                      (uVar37 >> 0x10 & 0xff) << 8 | uVar37 >> 0x18) ^
                     (uint)((ulonglong)uVar41 * 0x2df45158);
            uVar41 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) * ~(uint)local_90 +
                     uVar39 * ~local_90._4_4_ + (int)((ulonglong)lVar5 >> 0x20);
            uVar37 = local_90._4_4_ << 0x18 | (local_90._4_4_ >> 8 & 0xff) << 0x10 |
                     (local_90._4_4_ >> 0x10 & 0xff) << 8 | local_90._4_4_ >> 0x18;
            lVar4 = (ulonglong)uVar37 * (ulonglong)uVar12;
            uVar41 = (uVar41 * 0x1000000 | (uVar41 >> 8 & 0xff) << 0x10 |
                      (uVar41 >> 0x10 & 0xff) << 8 | uVar41 >> 0x18) ^ (uint)lVar4;
            uVar39 = (uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 | (uVar47 >> 0x10 & 0xff) << 8 |
                     uVar47 >> 0x18) ^
                     uVar44 * uVar37 +
                     uVar12 * ((uint)local_90 << 0x18 | ((uint)local_90 >> 8 & 0xff) << 0x10 |
                               ((uint)local_90 >> 0x10 & 0xff) << 8 | (uint)local_90 >> 0x18) +
                     (int)((ulonglong)lVar4 >> 0x20);
            uVar37 = uVar39;
            if ((uVar12 & 0x20) != 0) {
              uVar37 = uVar41;
              uVar41 = uVar39;
            }
            uVar37 = uVar41 << (uVar12 & 0x1f) | (uVar37 >> 1) >> (~uVar12 & 0x1f);
            uVar41 = uVar37 >> 0x19;
            goto LAB_011781e8;
          }
        }
        if ((uVar39 & 0x80808080 & uVar39 << 1) != 0) break;
        iVar40 = iVar40 + 4;
        uVar37 = uVar37 + iVar40;
      }
    }
    if (uVar18 != 0) {
      uVar41 = *puVar38;
      iVar9 = 4;
      if (2 < uVar41) {
        iVar9 = uVar41 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x011783fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01178400 + *(int *)(&DAT_01178400 + iVar9 * 4)))();
      return;
    }
    if (iVar46 == 0) {
      iVar16 = 1;
    }
    else {
      iVar16 = thunk_FUN_016d4a50(iVar46);
      if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar46);
      }
    }
    FUN_016dd1aa(iVar16,uVar43,iVar46);
    if (local_140 == local_108) {
      FUN_015f37b0(&local_108);
      local_180 = local_104;
    }
    local_100 = local_140 + 1;
    piVar35 = (int *)(local_180 + local_140 * 0xc);
    *piVar35 = iVar46;
    piVar35[1] = iVar16;
    piVar35[2] = iVar46;
    local_140 = local_100;
    goto LAB_01177df0;
  }
  iVar9 = local_f4 << 6;
  iVar11 = local_f8;
  do {
    if (iVar9 == 0) {
      uVar6 = 0;
      local_b8 = 0;
      local_c8 = 0x80000000;
      local_c4 = local_fc;
      local_bc = local_f4;
      local_c0 = local_f8;
      goto joined_r0x01178680;
    }
    pcVar1 = (char *)(iVar11 + 0x3c);
    iVar9 = iVar9 + -0x40;
    iVar11 = iVar11 + 0x40;
  } while (*pcVar1 != '\0');
  uVar6 = 4;
  local_b0 = 0;
  local_c0 = 0;
  local_c4 = 4;
  local_c8 = 0;
  local_b8 = local_f8;
  local_bc = local_fc;
  local_b4 = local_f4;
joined_r0x01178680:
  if (local_140 == 0) {
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
  uVar48 = CONCAT44(uVar6,local_140);
  piVar35 = (int *)param_2[0x18];
  uVar41 = param_2[0x19];
  if (param_5 == 0) {
    uVar18 = 0;
    puVar42 = param_1;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar17 = *(int **)(param_5 + 0xc);
    do {
      iVar9 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_0117886c;
    uVar45 = *(uint *)(param_5 + 0xc);
    uVar18 = 0;
    puVar42 = *(undefined4 **)(param_5 + 0x10);
    uVar7 = (*(int **)(param_5 + 4))[1];
    if (uVar7 <= uVar41) {
      iVar9 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar35 + 2,uVar7);
      uVar18 = uVar7;
      if (iVar9 != 0) {
        uVar18 = 0;
      }
    }
    uVar48 = FUN_011e1508((int)(piVar35 + 2) + uVar18,uVar41 - uVar18);
    uVar18 = 2;
  }
  do {
    iVar9 = *piVar35;
    bVar3 = (bool)hasExclusiveAccess(piVar35);
  } while (!bVar3);
  *piVar35 = iVar9 + 1;
  if (-1 < iVar9) {
    local_e4 = 3;
    local_f0 = uVar18;
    local_e0 = uVar45;
    local_dc = puVar42;
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
    local_30 = piVar35;
    local_2c = uVar41;
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
LAB_0117886c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x117886c);
  (*pcVar2)();
LAB_011781e8:
  uVar37 = uVar8 & uVar37;
  uVar39 = *(uint *)(iVar34 + uVar37);
  uVar12 = uVar39 ^ uVar41 * 0x1010101;
  for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
      uVar12 = uVar12 - 1 & uVar12) {
    uVar44 = uVar37 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                     (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar8;
    iVar40 = iVar34 + -0x14 + uVar44 * -0x14;
    if ((iVar16 == *(int *)(iVar40 + 8)) &&
       (iVar40 = thunk_FUN_016dd50a(uVar43,*(undefined4 *)(iVar40 + 4),iVar16), iVar40 == 0)) {
      iVar46 = iVar34 + uVar44 * -0x14;
      iVar16 = *(int *)(iVar46 + -4);
      if (iVar16 != 0) {
        iVar16 = iVar16 << 2;
        puVar14 = *(uint **)(iVar46 + -8);
        do {
          uVar41 = *puVar14;
          if (uVar18 <= uVar41) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar41,uVar18,&DAT_018890d0);
          }
          FUN_011c9534(&local_a8,puVar38 + uVar41 * 0x19 + 0x14,uVar6,&local_c8,param_5,param_6);
          if (uVar45 == local_fc) {
            FUN_011ca644(&local_fc);
            local_10c = local_f8;
          }
          puVar15 = (uint *)(local_10c + uVar45 * 0x40);
          uVar45 = uVar45 + 1;
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
          local_f4 = uVar45;
        } while (iVar16 != 0);
      }
      goto LAB_01177df0;
    }
  }
  if ((uVar39 & 0x80808080 & uVar39 << 1) != 0) goto LAB_01177df0;
  iVar46 = iVar46 + 4;
  uVar37 = uVar37 + iVar46;
  goto LAB_011781e8;
}

