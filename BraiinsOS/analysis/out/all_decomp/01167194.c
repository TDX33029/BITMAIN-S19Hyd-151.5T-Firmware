// FUN_01167194 @ 01167194 size=2924 calls_out=15 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01167194(uint *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined4 uVar40;
  int iVar41;
  uint uVar42;
  uint *puVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  undefined8 uVar47;
  int local_134;
  uint local_f4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar42 = *(uint *)(param_3 + 0xc);
  uVar15 = uVar42 * 0xc;
  if (0xaaaaaaa < uVar42) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar15);
  }
  uVar38 = 0;
  if (uVar15 == 0) {
    local_134 = 4;
    local_c0 = 0;
  }
  else {
    local_134 = thunk_FUN_016d4a50(uVar15);
    local_c0 = uVar42;
    if (local_134 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar15);
    }
  }
  local_b8 = 0;
  local_bc = local_134;
  if ((0x3ffffff < uVar42) || (uVar15 = uVar42 * 0x40, 0x7ffffffc < uVar15)) {
LAB_01167d9c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar38,uVar15);
  }
  local_b0 = 4;
  local_b4 = 0;
  if (uVar15 != 0) {
    local_b0 = thunk_FUN_016d4a50(uVar15);
    if (local_b0 == 0) {
      uVar38 = 4;
      goto LAB_01167d9c;
    }
    local_b4 = uVar42;
  }
  local_a8[2] = *(uint *)(param_3 + 4);
  uVar15 = param_2[0x1f];
  if (local_a8[2] == 0) {
    uVar42 = 0;
  }
  local_a8[3] = *(uint *)(param_3 + 8);
  puVar33 = (uint *)param_2[0x1e];
  iVar34 = *param_2;
  uVar44 = 0;
  uVar16 = param_2[4];
  uVar17 = param_2[5];
  uVar18 = param_2[6];
  uVar19 = param_2[7];
  iVar20 = param_2[8];
  iVar21 = param_2[9];
  iVar22 = param_2[10];
  iVar23 = param_2[0xb];
  uVar24 = param_2[0x10];
  uVar25 = param_2[0x11];
  uVar26 = param_2[0x12];
  uVar27 = param_2[0x13];
  iVar28 = param_2[0x14];
  iVar29 = param_2[0x15];
  iVar30 = param_2[0x16];
  iVar5 = param_2[0x17];
  uVar6 = param_2[0xd];
  iVar7 = param_2[0xf];
  uVar8 = param_2[1];
  iVar31 = param_2[0xc];
  iVar9 = param_2[3];
  local_f4 = 0;
  local_a8[0] = (uint)(local_a8[2] != 0);
  local_ac = 0;
  local_94 = 0;
  local_a8[1] = 0;
  uVar12 = local_b0;
  local_98 = local_a8[0];
  local_90 = local_a8[2];
  local_8c = local_a8[3];
  local_88 = uVar42;
LAB_01167430:
  uVar47 = FUN_00f45584(local_a8);
  uVar38 = (undefined4)((ulonglong)uVar47 >> 0x20);
  iVar41 = (int)uVar47;
  if (iVar41 != 0) {
    iVar35 = *(int *)(iVar41 + 4);
    iVar45 = *(int *)(iVar41 + 8);
    local_40 = -0x80000000;
    local_3c = iVar35;
    local_38 = iVar45;
    local_34 = param_4;
    if (iVar9 != 0) {
      local_80 = iVar20;
      local_7c = iVar21;
      local_78 = iVar22;
      iStack_74 = iVar23;
      local_70 = uVar18;
      local_6c = uVar19;
      local_68 = uVar16;
      uStack_64 = uVar17;
      FUN_011df94c(&local_80,iVar35,iVar45);
      uVar32 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
               local_6c >> 0x18;
      lVar3 = (ulonglong)uVar32 * 0xb36a80d2;
      uVar39 = (uint)lVar3;
      uVar42 = local_70 ^ 0xff;
      uVar32 = (uVar42 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
               local_70 >> 0x18) * -0x4c957f2e +
               uVar32 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
      uVar36 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 | (uStack_64 >> 0x10 & 0xff) << 8
               | uStack_64 >> 0x18;
      uVar10 = (uVar32 * 0x1000000 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18) ^ (uint)((ulonglong)uVar42 * 0x2df45158);
      uVar42 = (uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) ^
               local_6c * 0x2df45158 +
               uVar42 * 0x2d7f954c + (int)((ulonglong)uVar42 * 0x2df45158 >> 0x20);
      lVar3 = (ulonglong)uVar36 * (ulonglong)uVar10;
      uVar39 = uVar42 << 0x18 | (uVar42 >> 8 & 0xff) << 0x10 | (uVar42 >> 0x10 & 0xff) << 8 |
               uVar42 >> 0x18;
      lVar4 = (ulonglong)~local_68 * (ulonglong)uVar39;
      uVar32 = (uint)lVar4;
      uVar39 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18) * ~local_68 + uVar39 * ~uStack_64 + (int)((ulonglong)lVar4 >> 0x20);
      uVar36 = (uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 | (uVar32 >> 0x10 & 0xff) << 8 |
               uVar32 >> 0x18) ^
               uVar42 * uVar36 +
               uVar10 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                         (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
               (int)((ulonglong)lVar3 >> 0x20);
      uVar42 = (uVar39 * 0x1000000 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
               uVar39 >> 0x18) ^ (uint)lVar3;
      uVar32 = uVar36;
      if ((uVar10 & 0x20) != 0) {
        uVar32 = uVar42;
        uVar42 = uVar36;
      }
      uVar32 = uVar42 << (uVar10 & 0x1f) | (uVar32 >> 1) >> (~uVar10 & 0x1f);
      iVar37 = 0;
      uVar42 = uVar32 >> 0x19;
      while( true ) {
        uVar32 = uVar8 & uVar32;
        uVar36 = *(uint *)(iVar34 + uVar32);
        uVar10 = uVar36 ^ uVar42 * 0x1010101;
        for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
            uVar10 = uVar10 - 1 & uVar10) {
          uVar39 = uVar32 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar8;
          iVar11 = iVar34 + -0x20 + uVar39 * -0x20;
          if ((iVar45 == *(int *)(iVar11 + 8)) &&
             (iVar11 = thunk_FUN_016dd50a(iVar35,*(undefined4 *)(iVar11 + 4),iVar45), iVar11 == 0))
          {
            FUN_011c9534(&local_80,iVar34 + -0x14 + uVar39 * -0x20,uVar38,&local_40,param_5,param_6)
            ;
            if (uVar44 == local_b4) {
              FUN_011ca644(&local_b4);
              uVar12 = local_b0;
            }
            piVar13 = (int *)(uVar12 + uVar44 * 0x40);
            uVar44 = uVar44 + 1;
            *piVar13 = local_80;
            piVar13[1] = local_7c;
            piVar13[2] = local_78;
            piVar13[3] = iStack_74;
            piVar13[4] = local_70;
            piVar13[5] = local_6c;
            piVar13[6] = local_68;
            piVar13[7] = uStack_64;
            piVar13[8] = iStack_60;
            piVar13[9] = iStack_5c;
            piVar13[10] = local_58;
            piVar13[0xb] = iStack_54;
            piVar13[0xc] = iStack_50;
            piVar13[0xd] = iStack_4c;
            piVar13[0xe] = iStack_48;
            piVar13[0xf] = iStack_44;
            local_ac = uVar44;
            if (iVar7 == 0) goto LAB_01167430;
            uVar40 = *(undefined4 *)(iVar41 + 4);
            iVar41 = *(int *)(iVar41 + 8);
            local_80 = iVar28;
            local_7c = iVar29;
            local_78 = iVar30;
            iStack_74 = iVar5;
            local_70 = uVar26;
            local_6c = uVar27;
            local_68 = uVar24;
            uStack_64 = uVar25;
            FUN_011df94c(&local_80,uVar40,iVar41);
            uVar42 = local_70 ^ 0xff;
            uVar32 = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 |
                     (local_6c >> 0x10 & 0xff) << 8 | local_6c >> 0x18;
            lVar3 = (ulonglong)uVar32 * 0xb36a80d2;
            uVar10 = (uint)lVar3;
            uVar39 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                     uVar10 >> 0x18) ^
                     local_6c * 0x2df45158 +
                     uVar42 * 0x2d7f954c + (int)((ulonglong)uVar42 * 0x2df45158 >> 0x20);
            uVar36 = uVar39 << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 | (uVar39 >> 0x10 & 0xff) << 8 |
                     uVar39 >> 0x18;
            lVar4 = (ulonglong)~local_68 * (ulonglong)uVar36;
            uVar46 = (uint)lVar4;
            uVar32 = (uVar42 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 |
                      (local_70 >> 0x10 & 0xff) << 8 | local_70 >> 0x18) * -0x4c957f2e +
                     uVar32 * -0x5851f42e + (int)((ulonglong)lVar3 >> 0x20);
            uVar10 = (uVar32 * 0x1000000 | (uVar32 >> 8 & 0xff) << 0x10 |
                      (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18) ^
                     (uint)((ulonglong)uVar42 * 0x2df45158);
            uVar42 = (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                     uVar10 >> 0x18) * ~local_68 +
                     uVar36 * ~uStack_64 + (int)((ulonglong)lVar4 >> 0x20);
            uVar32 = uStack_64 << 0x18 | (uStack_64 >> 8 & 0xff) << 0x10 |
                     (uStack_64 >> 0x10 & 0xff) << 8 | uStack_64 >> 0x18;
            lVar3 = (ulonglong)uVar32 * (ulonglong)uVar10;
            uVar42 = (uVar42 * 0x1000000 | (uVar42 >> 8 & 0xff) << 0x10 |
                      (uVar42 >> 0x10 & 0xff) << 8 | uVar42 >> 0x18) ^ (uint)lVar3;
            uVar36 = (uVar46 << 0x18 | (uVar46 >> 8 & 0xff) << 0x10 | (uVar46 >> 0x10 & 0xff) << 8 |
                     uVar46 >> 0x18) ^
                     uVar39 * uVar32 +
                     uVar10 * (local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 |
                               (local_68 >> 0x10 & 0xff) << 8 | local_68 >> 0x18) +
                     (int)((ulonglong)lVar3 >> 0x20);
            uVar32 = uVar36;
            if ((uVar10 & 0x20) != 0) {
              uVar32 = uVar42;
              uVar42 = uVar36;
            }
            uVar32 = uVar42 << (uVar10 & 0x1f) | (uVar32 >> 1) >> (~uVar10 & 0x1f);
            iVar35 = 0;
            uVar42 = uVar32 >> 0x19;
            goto LAB_01167834;
          }
        }
        if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) break;
        iVar37 = iVar37 + 4;
        uVar32 = uVar32 + iVar37;
      }
    }
    if (uVar15 != 0) {
      uVar15 = *puVar33;
      iVar5 = 4;
      if (2 < uVar15) {
        iVar5 = uVar15 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x01167a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_01167a54 + *(int *)(&DAT_01167a54 + iVar5 * 4)))();
      return;
    }
    uVar40 = *(undefined4 *)(iVar41 + 4);
    iVar41 = *(int *)(iVar41 + 8);
    if (iVar41 == 0) {
      iVar35 = 1;
    }
    else {
      iVar35 = thunk_FUN_016d4a50(iVar41);
      if (iVar35 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar41);
      }
    }
    FUN_016dd1aa(iVar35,uVar40,iVar41);
    if (local_f4 == local_c0) {
      FUN_015f37b0(&local_c0);
      local_134 = local_bc;
    }
    piVar13 = (int *)(local_134 + local_f4 * 0xc);
    *piVar13 = iVar41;
    piVar13[1] = iVar35;
    piVar13[2] = iVar41;
    local_b8 = local_f4 + 1;
    FUN_011c9534(&local_80,param_2 + 0x18,uVar38,&local_40,param_5,param_6);
    uVar42 = local_ac;
    if (local_ac == local_b4) {
      FUN_011ca644(&local_b4);
    }
    uVar44 = uVar42 + 1;
    piVar13 = (int *)(local_b0 + uVar42 * 0x40);
    *piVar13 = local_80;
    piVar13[1] = local_7c;
    piVar13[2] = local_78;
    piVar13[3] = iStack_74;
    piVar13[4] = local_70;
    piVar13[5] = local_6c;
    piVar13[6] = local_68;
    piVar13[7] = uStack_64;
    piVar13[8] = iStack_60;
    piVar13[9] = iStack_5c;
    piVar13[10] = local_58;
    piVar13[0xb] = iStack_54;
    piVar13[0xc] = iStack_50;
    piVar13[0xd] = iStack_4c;
    piVar13[0xe] = iStack_48;
    piVar13[0xf] = iStack_44;
    uVar12 = local_b0;
    local_f4 = local_f4 + 1;
    local_ac = uVar44;
    goto LAB_01167430;
  }
  uVar15 = uVar12;
  iVar5 = uVar44 << 6;
  do {
    iVar7 = iVar5;
    if (iVar7 == 0) {
      local_a8[1] = local_b4;
      local_98 = 0;
      local_a8[0] = 0x80000000;
      local_a8[2] = uVar12;
      local_a8[3] = uVar44;
      goto LAB_01167cd8;
    }
    pcVar1 = (char *)(uVar15 + 0x3c);
    uVar15 = uVar15 + 0x40;
    iVar5 = iVar7 + -0x40;
  } while (*pcVar1 != '\0');
  local_a8[3] = local_b4;
  local_a8[0] = 0;
  local_90 = 0;
  local_a8[2] = 0;
  local_a8[1] = 4;
  local_98 = uVar12;
  local_94 = uVar44;
LAB_01167cd8:
  FUN_011f1dd4(&local_40,&local_c0);
  local_7c = 1;
  local_80 = 1;
  local_78 = local_40;
  iStack_74 = local_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_68 = iStack_30;
  uStack_64 = iStack_2c;
  piVar13 = (int *)thunk_FUN_016d4a50(0x20);
  if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *piVar13 = local_80;
  piVar13[1] = local_7c;
  piVar13[2] = local_78;
  piVar13[3] = iStack_74;
  piVar13[4] = local_70;
  piVar13[5] = local_6c;
  piVar13[6] = local_68;
  piVar13[7] = uStack_64;
  iVar5 = 0x18;
  if (iVar7 == 0) {
    iVar5 = 0x10;
  }
  piVar14 = *(int **)((int)local_a8 + iVar5);
  if (piVar14 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_a8 + iVar5));
    }
  }
  *(int **)((int)local_a8 + iVar5) = piVar13;
  *param_1 = local_a8[0];
  param_1[1] = local_a8[1];
  param_1[2] = local_a8[2];
  param_1[3] = local_a8[3];
  param_1[4] = local_98;
  param_1[5] = local_94;
  param_1[6] = local_90;
  return;
LAB_01167834:
  uVar32 = uVar6 & uVar32;
  uVar36 = *(uint *)(iVar31 + uVar32);
  uVar10 = uVar36 ^ uVar42 * 0x1010101;
  for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
      uVar10 = uVar10 - 1 & uVar10) {
    uVar39 = uVar32 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar6;
    iVar45 = iVar31 + -0x14 + uVar39 * -0x14;
    if ((iVar41 == *(int *)(iVar45 + 8)) &&
       (iVar45 = thunk_FUN_016dd50a(uVar40,*(undefined4 *)(iVar45 + 4),iVar41), iVar45 == 0)) {
      iVar35 = iVar31 + uVar39 * -0x14;
      iVar41 = *(int *)(iVar35 + -4);
      if (iVar41 != 0) {
        iVar41 = iVar41 << 2;
        puVar43 = *(uint **)(iVar35 + -8);
        do {
          uVar42 = *puVar43;
          if (uVar15 <= uVar42) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar42,uVar15,&DAT_01889090);
          }
          FUN_011c9534(&local_80,puVar33 + uVar42 * 0x19 + 0x14,uVar38,&local_40,param_5,param_6);
          if (uVar44 == local_b4) {
            FUN_011ca644(&local_b4);
            uVar12 = local_b0;
          }
          piVar13 = (int *)(uVar12 + uVar44 * 0x40);
          uVar44 = uVar44 + 1;
          iVar41 = iVar41 + -4;
          *piVar13 = local_80;
          piVar13[1] = local_7c;
          piVar13[2] = local_78;
          piVar13[3] = iStack_74;
          piVar13[4] = local_70;
          piVar13[5] = local_6c;
          piVar13[6] = local_68;
          piVar13[7] = uStack_64;
          piVar13[8] = iStack_60;
          piVar13[9] = iStack_5c;
          piVar13[10] = local_58;
          piVar13[0xb] = iStack_54;
          piVar13[0xc] = iStack_50;
          piVar13[0xd] = iStack_4c;
          piVar13[0xe] = iStack_48;
          piVar13[0xf] = iStack_44;
          puVar43 = puVar43 + 1;
          local_ac = uVar44;
        } while (iVar41 != 0);
      }
      goto LAB_01167430;
    }
  }
  if ((uVar36 & 0x80808080 & uVar36 << 1) != 0) goto LAB_01167430;
  iVar35 = iVar35 + 4;
  uVar32 = uVar32 + iVar35;
  goto LAB_01167834;
}

